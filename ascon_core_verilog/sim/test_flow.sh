clear

cd generate_result

rm -rf *.txt
rm -rf *.hex

echo "==========calculate result:"
./ascon.py

echo "==========generate input file for test:"
g++ big_little_conv.cpp -o big_little_conv_run

#=========================================generate file for AEAD===================================================================
code=1
while (($code == 1)) 
do
	awk '$1 == "key" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_aead.txt > key.txt
	./big_little_conv_run key.txt key.hex
	code=$? 
done

code=1
while (($code == 1)) 
do
	awk '$1 == "nonce" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_aead.txt > nonce.txt
	./big_little_conv_run nonce.txt nonce.hex
	code=$?
done

code=1
while (($code == 1)) 
do
	awk '$1 == "plaintext" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_aead.txt > plaintext.txt
	./big_little_conv_run plaintext.txt plaintext_conv.txt
	code=$?
	(awk '$1 == "plaintext" {printf ("%x\n",$3)}' output_aead.txt; cat plaintext_conv.txt) > plaintext.hex
done

code=1
while (($code == 1)) 
do
	awk '$1 == "ass_data" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_aead.txt > ass_data.txt
	./big_little_conv_run ass_data.txt ass_data_conv.txt
	code=$?
	(awk '$1 == "ass_data" {printf ("%x\n",$3)}' output_aead.txt; cat ass_data_conv.txt) > ass_data.hex
done

code=1
while (($code == 1)) 
do
	awk '$1 == "ciphertext" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_aead.txt > ciphertext.txt
	./big_little_conv_run ciphertext.txt ciphertext_conv.txt
	code=$?
	(awk '$1 == "ciphertext" {printf ("%x\n",$3)}' output_aead.txt; cat ciphertext_conv.txt) > ciphertext.hex
done


code=1
while (($code == 1)) 
do
	awk '$1 == "tag" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_aead.txt > tag.txt
	./big_little_conv_run tag.txt tag.hex
	code=$?
done

#====================================================generate file for hash=============================================================

code=1
while (($code == 1)) 
do
	awk '$1 == "message" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_hash.txt > message.txt
	./big_little_conv_run message.txt message_conv.txt
	code=$?
	(awk '$1 == "message" {printf ("%x\n",$3)}' output_hash.txt; cat message_conv.txt) > message.hex
done


code=1
while (($code == 1)) 
do
	awk '$1 == "hash_out" {for (i = 1; i <= $3 * 2; i = i + 16) print substr($2, i, 16);}' output_hash.txt > hash_out.txt
	./big_little_conv_run hash_out.txt hash_out.hex
	code=$?
done

rm -rf *.txt

echo "==========compile and run testbench:"
cd ..
make all TOP=test_ascon_core