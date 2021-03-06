#ifndef CONFIG_H
#define CONFIG_H

#ifndef DILITHIUM_MODE
#define DILITHIUM_MODE 3
#endif

//#define DILITHIUM_USE_AES
//#define DILITHIUM_RANDOMIZED_SIGNING
//#define USE_RDPMC
//#define DBENCH

#ifdef DILITHIUM_USE_AES
#if DILITHIUM_MODE == 1
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium1aes_avx2_##s
#elif DILITHIUM_MODE == 2
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium2aes_avx2_##s
#elif DILITHIUM_MODE == 3
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium3aes_avx2_##s
#elif DILITHIUM_MODE == 4
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium4aes_avx2_##s
#endif
#else
#if DILITHIUM_MODE == 1
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium1_avx2_##s
#elif DILITHIUM_MODE == 2
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium2_avx2_##s
#elif DILITHIUM_MODE == 3
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium3_avx2_##s
#elif DILITHIUM_MODE == 4
#define DILITHIUM_NAMESPACE(s) pqcrystals_dilithium4_avx2_##s
#endif
#endif

#endif
