#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

void generate_key(const char *username, char *key)
{
    MD5_CTX md5_ctx;
    unsigned char md5_hash[MD5_DIGEST_LENGTH];
    char hex_hash[2 * MD5_DIGEST_LENGTH + 1];
    int i;

    MD5_Init(&md5_ctx);
    MD5_Update(&md5_ctx, username, strlen(username));
    MD5_Final(md5_hash, &md5_ctx);

    for (i = 0; i < MD5_DIGEST_LENGTH; i++)
        sprintf(hex_hash + (i * 2), "%02x", md5_hash[i]);

    hex_hash[2 * MD5_DIGEST_LENGTH] = '\0';
    strcpy(key, hex_hash);
}

int main(int argc, char *argv[])
{
    char key[2 * MD5_DIGEST_LENGTH + 1];

    if (argc != 2)
    {
        printf("Usage: %s username\n", argv[0]);
        return 1;
    }

    generate_key(argv[1], key);
    printf("%s\n", key);

    return 0;
}
