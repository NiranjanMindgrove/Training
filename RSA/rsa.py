from Crypto.PublicKey import RSA
from Crypto.Cipher import PKCS1_OAEP
from binascii import hexlify

# Generating key
key = RSA.generate(3096)

private_key = key
public_key = key.public_key()
print(public_key)
print(private_key)
#ENCRYPTION
message = b"This is Mindgrove"
cipher_text = PKCS1_OAEP.new(public_key)
encrypt = cipher_text.encrypt(message)
print(f"The encypted text is --> {hexlify(encrypt)}")
print(f"Length of the cipher(bytes) is: {len(hexlify(encrypt)) / 2} bytes")
print(f"Length of the cipher(bits) is: { (len(hexlify(encrypt)) / 2) * 8 } bits")

#DECRYPTION
decrypt_text = PKCS1_OAEP.new(private_key)
decrypt = decrypt_text.decrypt(encrypt)
print(f"Decrypted message: {decrypt}")




