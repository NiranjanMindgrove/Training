from Crypto.Cipher import AES
from Crypto.Random import get_random_bytes

data = b'secret data most important'
print(f"Length of input bits --> {len(data) * 8} bits")
print(f"Input Data --> {data.hex()}")

key = b'1214586578945612'

print(f"Key --> {key.hex()}")
print(f"Length of Key --> {len(key)* 8 } bits")

cipher = AES.new(key, AES.MODE_EAX)
print(f"Nonce --> {cipher.nonce.hex()}")

cipher_text,tag = cipher.encrypt_and_digest(data)

print(f"Cipher --> {cipher_text.hex()}")
print(f"Tag --> {tag.hex()}")


print("===========================================================")

# cipher_text = b'b19cf9853bc864b003133c65175867514d4f7cea830924bb28f2'
# print(f"Tampered Cipher -> {cipher_text}")

decode = AES.new(key, AES.MODE_EAX, cipher.nonce)
decrypted_text = decode.decrypt_and_verify(cipher_text,tag)
print("Decrypted TEXT ")
print(decrypted_text)