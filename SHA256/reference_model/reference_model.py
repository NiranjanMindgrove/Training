# https://www.restack.io/p/secure-hashing-techniques-ai-applications-answer-python-sha256-speed-cat-ai -----<REFERENCE MATERIAL> 

import hashlib

# sha256_code = hashlib.sha256()
# input = sha256_code.update(b"This is Mindgrove")
# output = sha256_code.hexdigest()
# print(output)

def hash_256(filename):
    sha256_code = hashlib.sha256()

    with open(filename,'rb') as f:
        for byte_block in iter(lambda: f.read(512),b''):
            input = sha256_code.update(byte_block)
    output = sha256_code.hexdigest()
    return output 

print(hash_256("grep.txt"))