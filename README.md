Design an accelerator for lightweight cryptography algorithm Ascon
==================================================================

This is a hardware implementation of lightweight cryptography algorithm Ascon, inculdes AEAD mode and Hash mode, specified in [NIST SP 800-232 (initial public draft)](https://csrc.nist.gov/pubs/sp/800/232/ipd).

Block diagram
==========
The Ascon Core module executes the Ascon algorithm based on NIST 800-232, supporting three main cryptographic modes: Ascon-AEAD128, Ascon-Hash256, and Ascon-XOF128. Based on the outlined algorithm model, the essential steps for encryption can be summarized as follows:
1. Initialization – Set up initial values.
2. Absorption – Process associated data.
3. Encryption – Encrypt the main data.
4. Authentication (for AEAD only) – Generate a tag to verify data integrity during transmission or storage (Not applicable for hash functions)

Each encryption step is handled by a dedicated module:
- Ascon-init: Initializes values based on the selected algorithm.
- Ascon-AD_AM: Processes associated data (AEAD) and message absorption (Hash/XOF).
- Ascon-Encrypt_Decrypt & Ascon-Hash: Perform encryption/decryption (AEAD) and hashing operations.
- Ascon-final: Generates authentication tags for AEAD.

![Ascon Core (Top module)](document/image/ascon_core.png)

| Pin name | Width | Direction | Function |
| Clk, rst_n | 1 | input | clock and reset |
| key | 128 | input | key for AEAD mode, not use in Hash |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
| Pin name | Width | Direction | Function |
 

#this is thesis of LE DUC DUY at HCMUS
#git add .
#git commit -m "mess"
#git push -u origin main
