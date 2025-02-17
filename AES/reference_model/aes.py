from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes
from Crypto.Util.Padding import pad, unpad

##EAX MODE

data = b'secret data mostly , secret data mostly'
print(f"Length of Input Data --> {(len(data.hex()))/2} bytes")
# print(f"Length of input bits --> {len(data) * 8} bits")
# print(f"Input Data --> {data.hex()}")

key = b'121458657894561214523698'
print(f"Value of Key in HEX --> {key.hex()}")
print(f"Length of key --> {len(key)} bytes")

nonce = get_random_bytes(8)
print(f"Nonce data value --> {nonce.hex()}")

cipher_len = print(f"Length of the cipher text --> {len(data) + 16 - (len(data) % 16)}")
iv = get_random_bytes(16)

# print(f"Key --> {key.hex()}")
# print(f"Length of Key --> {len(key)* 8 } bits")

# cipher = AES.new(key, AES.MODE_EAX)
# print(f"Nonce --> {cipher.nonce.hex()}")

# cipher_text,tag = cipher.encrypt_and_digest(data)

# print(f"Cipher --> {cipher_text.hex()}")
# print(f"Tag --> {tag.hex()}")


# print("===========================================================")

# # cipher_text = b'b19cf9853bc864b003133c65175867514d4f7cea830924bb28f2'
# # print(f"Tampered Cipher -> {cipher_text}")

# decode = AES.new(key, AES.MODE_EAX, cipher.nonce)
# decrypted_text = decode.decrypt_and_verify(cipher_text,tag)
# print("Decrypted TEXT ")
# print(decrypted_text)

#ECB Mode (Electronic Code Book)
print("=================E=C=B======================Electronic Code Book==")
print("\n")
cipher_ecb = AES.new(key,AES.MODE_ECB)
encrypt_ecb = cipher_ecb.encrypt(pad(data,AES.block_size))
print(encrypt_ecb.hex())
print(f"Length of cipher -> {len(encrypt_ecb)}  bytes")
decrypt_ecb = unpad(cipher_ecb.decrypt(encrypt_ecb), AES.block_size)
print(decrypt_ecb)
print("\n")
print("=================C=B=C======================Cipher Block Chaining==")
print("\n")

ci_cbc = AES.new(key,AES.MODE_CBC,iv)
en_cbc = ci_cbc.encrypt(pad(data,AES.block_size))
print(en_cbc.hex())
print(f"Length of Cipher --> {len(en_cbc)}  bytes ")
de_ci_cbc = AES.new(key,AES.MODE_CBC,iv)
de_cbc = unpad(de_ci_cbc.decrypt(en_cbc), AES.block_size)
print(de_cbc)
print("\n")
print("=================C=F=B======================Cipher FEED BACK==")
print("\n")
cipher_cfb = AES.new(key,AES.MODE_CFB, iv)
encrypt_cfb = cipher_cfb.encrypt(pad(data,AES.block_size))
print(encrypt_cfb.hex())
print(f"Length of Cipher --> {len(encrypt_cfb)}  bytes ")
decrypt_cfb = AES.new(key, AES.MODE_CFB, iv)
dec_cfb = unpad(decrypt_cfb.decrypt(encrypt_cfb),AES.block_size)
print(dec_cfb)
print("\n")
print("=================O=F=B======================Output FEED BACK==")
cipher_ofb = AES.new(key,AES.MODE_OFB,iv)
encrypt_ofb = cipher_ofb.encrypt(pad((data),AES.block_size))
print(encrypt_ofb.hex())
print(f"Length of Cipher --> {len(encrypt_ofb)}  bytes ")
decrypt_ofb = AES.new(key, AES.MODE_OFB, iv)
dec_ofb = unpad(decrypt_ofb.decrypt(encrypt_ofb),AES.block_size)
print(dec_ofb)
print("\n")
print("=================C=T=R======================Counter Mode==")
cipher_ctr = AES.new(key,AES.MODE_CTR, nonce = nonce)
encrypt_ctr = cipher_ctr.encrypt(data)
print(encrypt_ctr.hex())
print(f"Length of Cipher --> {len(encrypt_ctr)}  bytes ")
decrypt_ctr = AES.new(key, AES.MODE_CTR, nonce = nonce)
dec_ctr = decrypt_ctr.decrypt(encrypt_ctr)
print(dec_ctr)
print("\n")