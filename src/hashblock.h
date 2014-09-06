#ifndef HASHBLOCK_H
#define HASHBLOCK_H

#include "uint256.h"
#include "sph_blake.h"
#include "sph_md2.h"
#include "sph_md4.h"
#include "sph_shabal.h"
#include "sph_bmw.h"
#include "sph_groestl.h"
#include "sph_jh.h"
#include "sph_keccak.h"
#include "sph_skein.h"
#include "sph_luffa.h"
#include "sph_cubehash.h"
#include "sph_shavite.h"
#include "sph_simd.h"
#include "sph_echo.h"
#include "sph_hamsi.h"
#include "sph_fugue.h"
#include "sph_shabal.h"
#include "sph_whirlpool.h"
#include "sph_haval.h"
#include "sph_md5.h"
#include "sph_panama.h"
#include "sph_radiogatun.h"
#include "sph_ripemd.h"
#include "sph_sha0.h"
#include "sph_sha1.h"
#include "sph_sha2.h"
#include "sph_sha3.h"
#include "sph_tiger.h"


#ifndef QT_NO_DEBUG
#include <string>
#endif

#ifdef GLOBALDEFINED
#define GLOBAL
#else
#define GLOBAL extern
#endif

GLOBAL sph_haval128_3_context     z_haval128_3;
GLOBAL sph_haval128_4_context     z_haval128_4;
GLOBAL sph_haval128_5_context     z_haval128_5;
GLOBAL sph_haval160_3_context     z_haval160_3;
GLOBAL sph_haval160_4_context     z_haval160_4;
GLOBAL sph_haval160_5_context     z_haval160_5;
GLOBAL sph_haval192_3_context     z_haval192_3;
GLOBAL sph_haval192_4_context     z_haval192_4;
GLOBAL sph_haval192_5_context     z_haval192_5;
GLOBAL sph_haval224_3_context     z_haval224_3;
GLOBAL sph_haval224_4_context     z_haval224_4;
GLOBAL sph_haval224_5_context     z_haval224_5;
GLOBAL sph_haval256_3_context     z_haval256_3;
GLOBAL sph_haval256_4_context     z_haval256_4;
GLOBAL sph_haval256_5_context     z_haval256_5;

GLOBAL sph_keccak256_context    z_keccak256;

GLOBAL sph_blake512_context     z_blake; //!
GLOBAL sph_bmw512_context       z_bmw; //!
GLOBAL sph_groestl512_context   z_groestl; //!
GLOBAL sph_jh512_context        z_jh; //!
GLOBAL sph_keccak512_context    z_keccak; //!
GLOBAL sph_skein512_context     z_skein; //!
GLOBAL sph_luffa512_context     z_luffa; //!
GLOBAL sph_cubehash512_context  z_cubehash; //!
GLOBAL sph_shavite512_context   z_shavite; //!
GLOBAL sph_simd512_context      z_simd; //!
GLOBAL sph_echo512_context      z_echo; //!
GLOBAL sph_hamsi512_context      z_hamsi; //!
GLOBAL sph_fugue512_context      z_fugue; //!
GLOBAL sph_shabal512_context     z_shabal; //!

GLOBAL sph_whirlpool_context     z_whirlpool;
GLOBAL sph_whirlpool0_context     z_whirlpool0;
GLOBAL sph_whirlpool1_context     z_whirlpool1;

GLOBAL sph_tiger_context     z_tiger;
GLOBAL sph_tiger2_context     z_tiger2;

GLOBAL sph_md2_context     z_md2;
GLOBAL sph_md4_context     z_md4;
GLOBAL sph_md5_context     z_md5;

GLOBAL sph_panama_context     z_panama;

GLOBAL sph_radiogatun32_context     z_radiogatun32;
GLOBAL sph_radiogatun64_context     z_radiogatun64;

GLOBAL sph_ripemd_context     z_ripemd;
GLOBAL sph_ripemd128_context     z_ripemd128;
GLOBAL sph_ripemd160_context     z_ripemd160;

GLOBAL sph_sha0_context     z_sha0;
GLOBAL sph_sha1_context     z_sha1;
GLOBAL sph_sha224_context     z_sha224;
GLOBAL sph_sha256_context     z_sha256;
GLOBAL sph_sha384_context     z_sha384;
GLOBAL sph_sha512_context     z_sha512;


#define fillz() do { \
    sph_keccak256_init(&z_keccak256); \
	sph_blake512_init(&z_blake); \
    sph_bmw512_init(&z_bmw); \
    sph_groestl512_init(&z_groestl); \
    sph_jh512_init(&z_jh); \
    sph_keccak512_init(&z_keccak); \
    sph_skein512_init(&z_skein); \
    sph_luffa512_init(&z_luffa); \
    sph_cubehash512_init(&z_cubehash); \
    sph_shavite512_init(&z_shavite); \
    sph_simd512_init(&z_simd); \
    sph_echo512_init(&z_echo); \
    sph_hamsi512_init(&z_hamsi); \
    sph_fugue512_init(&z_fugue); \
    sph_shabal512_init(&z_shabal); \
		sph_whirlpool_init(&z_whirlpool); \
		sph_whirlpool0_init(&z_whirlpool0); \
		sph_whirlpool1_init(&z_whirlpool1); \
		sph_haval128_3_init(&z_haval128_3); \
		sph_haval128_4_init(&z_haval128_4); \
		sph_haval128_5_init(&z_haval128_5); \
		sph_haval160_3_init(&z_haval160_3); \
		sph_haval160_4_init(&z_haval160_4); \
		sph_haval160_5_init(&z_haval160_5); \
		sph_haval192_3_init(&z_haval192_3); \
		sph_haval192_4_init(&z_haval192_4); \
		sph_haval192_5_init(&z_haval192_5); \
		sph_haval224_3_init(&z_haval224_3); \
		sph_haval224_4_init(&z_haval224_4); \
		sph_haval224_5_init(&z_haval224_5); \
		sph_haval256_3_init(&z_haval256_3); \
		sph_haval256_4_init(&z_haval256_4); \
		sph_haval256_5_init(&z_haval256_5); \
		sph_md2_init(&z_md2); \
		sph_md4_init(&z_md4); \
		sph_md5_init(&z_md5); \
		sph_panama_init(&z_panama); \
		sph_radiogatun32_init(&z_radiogatun32); \
		sph_radiogatun64_init(&z_radiogatun64); \
		sph_ripemd_init(&z_ripemd); \
		sph_ripemd128_init(&z_ripemd128); \
		sph_ripemd160_init(&z_ripemd160); \
		sph_sha0_init(&z_sha0); \
		sph_sha1_init(&z_sha1); \
		sph_sha224_init(&z_sha224); \
		sph_sha256_init(&z_sha256); \
		sph_sha384_init(&z_sha384); \
		sph_sha512_init(&z_sha512); \
		sph_tiger_init(&z_tiger); \
		sph_tiger2_init(&z_tiger2); \
} while (0) 

#define ZKECCAK256 (memcpy(&ctx_keccak256, &z_keccak256, sizeof(z_keccak256)))

#define ZBLAKE (memcpy(&ctx_blake, &z_blake, sizeof(z_blake)))
#define ZBMW (memcpy(&ctx_bmw, &z_bmw, sizeof(z_bmw)))
#define ZGROESTL (memcpy(&ctx_groestl, &z_groestl, sizeof(z_groestl)))
#define ZJH (memcpy(&ctx_jh, &z_jh, sizeof(z_jh)))
#define ZKECCAK (memcpy(&ctx_keccak, &z_keccak, sizeof(z_keccak)))
#define ZSKEIN (memcpy(&ctx_skein, &z_skein, sizeof(z_skein)))
#define ZHAMSI (memcpy(&ctx_hamsi, &z_hamsi, sizeof(z_hamsi)))
#define ZFUGUE (memcpy(&ctx_fugue, &z_fugue, sizeof(z_fugue)))
#define ZSHABAL (memcpy(&ctx_shabal, &z_shabal, sizeof(z_shabal)))

#define ZWHIRLPOOL (memcpy(&ctx_whirlpool, &z_whirlpool, sizeof(z_whirlpool)))
#define ZWHIRLPOOL0 (memcpy(&ctx_whirlpool0, &z_whirlpool0, sizeof(z_whirlpool0)))
#define ZWHIRLPOOL1 (memcpy(&ctx_whirlpool1, &z_whirlpool1, sizeof(z_whirlpool1)))

#define ZHAVAL128_3 (memcpy(&ctx_haval128_3, &z_haval128_3, sizeof(z_haval128_3)))
#define ZHAVAL128_4 (memcpy(&ctx_haval128_4, &z_haval128_4, sizeof(z_haval128_4)))
#define ZHAVAL128_5 (memcpy(&ctx_haval128_5, &z_haval128_5, sizeof(z_haval128_5)))
#define ZHAVAL160_3 (memcpy(&ctx_haval160_3, &z_haval160_3, sizeof(z_haval160_3)))
#define ZHAVAL160_4 (memcpy(&ctx_haval160_4, &z_haval160_4, sizeof(z_haval160_4)))
#define ZHAVAL160_5 (memcpy(&ctx_haval160_5, &z_haval160_5, sizeof(z_haval160_5)))
#define ZHAVAL192_3 (memcpy(&ctx_haval192_3, &z_haval192_3, sizeof(z_haval192_3)))
#define ZHAVAL224_3 (memcpy(&ctx_haval224_3, &z_haval224_3, sizeof(z_haval224_3)))
#define ZHAVAL224_4 (memcpy(&ctx_haval224_4, &z_haval224_4, sizeof(z_haval224_4)))
#define ZHAVAL224_5 (memcpy(&ctx_haval224_5, &z_haval224_5, sizeof(z_haval224_5)))
#define ZHAVAL256_3 (memcpy(&ctx_haval256_3, &z_haval256_3, sizeof(z_haval256_3)))
#define ZHAVAL256_4 (memcpy(&ctx_haval256_4, &z_haval256_4, sizeof(z_haval256_4)))
#define ZHAVAL256_5 (memcpy(&ctx_haval256_5, &z_haval256_5, sizeof(z_haval256_5)))

#define ZMD2 (memcpy(&ctx_md2, &z_md2, sizeof(z_md2)))
#define ZMD4 (memcpy(&ctx_md4, &z_md4, sizeof(z_md4)))
#define ZMD5 (memcpy(&ctx_md5, &z_md5, sizeof(z_md5)))

#define ZPANAMA (memcpy(&ctx_panama, &z_panama, sizeof(z_panama)))

#define ZRADIOGATUN32 (memcpy(&ctx_radiogatun32, &z_radiogatun32, sizeof(z_radiogatun32)))
#define ZRADIOGATUN64 (memcpy(&ctx_radiogatun64, &z_radiogatun64, sizeof(z_radiogatun64)))

#define ZRIPEMD (memcpy(&ctx_ripemd, &z_ripemd, sizeof(z_ripemd)))
#define ZRIPEMD128 (memcpy(&ctx_ripemd128, &z_ripemd128, sizeof(z_ripemd128)))
#define ZRIPEMD160 (memcpy(&ctx_ripemd160, &z_ripemd160, sizeof(z_ripemd160)))

#define ZSHA0 (memcpy(&ctx_sha0, &z_sha0, sizeof(z_sha0)))
#define ZSHA1 (memcpy(&ctx_sha1, &z_sha1, sizeof(z_sha1)))
#define ZSHA224 (memcpy(&ctx_sha224, &z_sha224, sizeof(z_sha224)))
#define ZSHA256 (memcpy(&ctx_sha256, &z_sha256, sizeof(z_sha256)))
#define ZSHA384 (memcpy(&ctx_sha384, &z_sha384, sizeof(z_sha384)))
#define ZSHA512 (memcpy(&ctx_sha512, &z_sha512, sizeof(z_sha512)))

#define ZTIGER (memcpy(&ctx_tiger, &z_tiger, sizeof(z_tiger)))
#define ZTIGER2 (memcpy(&ctx_tiger2, &z_tiger2, sizeof(z_tiger2)))


template<typename T1>
inline uint256 Hash5(const T1 pbegin, const T1 pend)

{
	//sph_haval128_3_context     ctx_haval128_3;
	sph_haval128_4_context     ctx_haval128_4;
	sph_haval128_5_context     ctx_haval128_5;
	sph_haval160_3_context     ctx_haval160_3;
	//sph_haval160_4_context     ctx_haval160_4;
	sph_haval160_5_context     ctx_haval160_5;
	sph_haval192_3_context     ctx_haval192_3;
	sph_haval192_4_context     ctx_haval192_4;
	sph_haval192_5_context     ctx_haval192_5;
	//sph_haval224_3_context     ctx_hava224_3;
	sph_haval224_4_context     ctx_haval224_4;
	sph_haval224_5_context     ctx_haval224_5;
	sph_haval256_3_context     ctx_haval256_3;
	sph_haval256_4_context     ctx_haval256_4;
	sph_haval256_5_context     ctx_haval256_5;
	
	sph_keccak256_context    ctx_keccak256;

	sph_blake512_context     ctx_blake;
    sph_bmw512_context       ctx_bmw;
    sph_groestl512_context   ctx_groestl;
    sph_jh512_context        ctx_jh;
    sph_keccak512_context    ctx_keccak;
    sph_skein512_context     ctx_skein;
    sph_luffa512_context     ctx_luffa;
    sph_cubehash512_context  ctx_cubehash;
    sph_shavite512_context   ctx_shavite;
    sph_simd512_context      ctx_simd;
    sph_echo512_context      ctx_echo;
    sph_hamsi512_context      ctx_hamsi;
    sph_fugue512_context      ctx_fugue;
    sph_shabal512_context     ctx_shabal;
    
	sph_whirlpool_context     ctx_whirlpool;
	sph_whirlpool0_context     ctx_whirlpool0;
	sph_whirlpool1_context     ctx_whirlpool1;

	sph_tiger_context     ctx_tiger;
	sph_tiger2_context     ctx_tiger2;

	sph_md2_context     ctx_md2;
	sph_md4_context     ctx_md4;
	sph_md5_context     ctx_md5;

	sph_panama_context     ctx_panama;

	sph_radiogatun32_context     ctx_radiogatun32;
	sph_radiogatun64_context     ctx_radiogatun64;

	sph_ripemd_context     ctx_ripemd;
	sph_ripemd128_context     ctx_ripemd128;
	sph_ripemd160_context     ctx_ripemd160;

	sph_sha0_context     ctx_sha0;
	sph_sha1_context     ctx_sha1;
	sph_sha224_context     ctx_sha224;
	sph_sha256_context     ctx_sha256;
	sph_sha384_context     ctx_sha384;
	sph_sha512_context     ctx_sha512;

    static unsigned char pblank[1];

#ifndef QT_NO_DEBUG
    //std::string strhash;
    //strhash = "";
#endif
    
    uint512 hash[510];

	sph_radiogatun32_init(&ctx_radiogatun32); // No 19
	sph_radiogatun32(&ctx_radiogatun32, (pbegin == pend ? pblank : static_cast<const void*>(&pbegin[0])), (pend - pbegin) * sizeof(pbegin[0]));
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[0]));
    
	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[0]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[1]));

    sph_bmw512_init(&ctx_bmw); //39
    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[1]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[2]));

    sph_luffa512_init(&ctx_luffa);//47
    sph_luffa512 (&ctx_luffa, static_cast<const void*>(&hash[2]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[3]));
    
	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[3]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[4]));
	
	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[4]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[5]));
	
    sph_md2_init(&ctx_md2); //15
    sph_md2 (&ctx_md2, static_cast<void*>(&hash[5]), 64);
    sph_md2_close(&ctx_md2, static_cast<void*>(&hash[6]));
	
	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[6]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[7]));
    
	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[7]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[8]));
        
	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[8]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[9]));

	sph_sha1_init(&ctx_sha1);//28
    sph_sha1 (&ctx_sha1, static_cast<const void*>(&hash[9]), 64);
    sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[10]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[10]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[11]));

    sph_fugue512_init(&ctx_fugue);//18
    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[11]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[12]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[12]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[13]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[13]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[14]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[14]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[15]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[15]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[16]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[16]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[17]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[17]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[18]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[18]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[19]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[19]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[20]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[20]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[21]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[21]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[22]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[22]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[23]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[23]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[24]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[24]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[25]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[25]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[26]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[26]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[27]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[27]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[28]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[28]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[29]));
	
	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[29]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[30]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[30]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[31]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[31]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[32]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[32]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[33]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[33]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[34]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[34]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[35]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[35]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[36]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[36]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[37]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[37]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[38]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[38]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[39]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[39]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[40]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[40]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[41]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[41]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[42]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[42]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[43]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[43]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[44]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[44]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[45]));
	
	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[45]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[46]));
	
	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[46]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[47]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[47]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[48]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[48]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[49]));

	//50 1

	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[49]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[50]));

	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[50]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[51]));

	sph_bmw512_init(&ctx_bmw); //39
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[51]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[52]));

	sph_luffa512_init(&ctx_luffa);//47
	sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[52]), 64);
	sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[53]));

	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[53]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[54]));

	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[54]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[55]));

	sph_md2_init(&ctx_md2); //15
	sph_md2(&ctx_md2, static_cast<void*>(&hash[55]), 64);
	sph_md2_close(&ctx_md2, static_cast<void*>(&hash[56]));

	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[56]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[57]));

	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[57]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[58]));

	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[58]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[59]));

	sph_sha1_init(&ctx_sha1);//28
	sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[59]), 64);
	sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[60]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[60]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[61]));

	sph_fugue512_init(&ctx_fugue);//18
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[61]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[62]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[62]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[63]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[63]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[64]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[64]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[65]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[65]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[66]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[66]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[67]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[67]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[68]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[68]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[69]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[69]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[70]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[70]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[71]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[71]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[72]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[72]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[73]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[73]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[74]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[74]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[75]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[75]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[76]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[76]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[77]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[77]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[78]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[78]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[79]));

	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[79]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[80]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[80]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[81]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[81]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[82]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[82]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[83]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[83]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[84]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[84]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[85]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[85]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[86]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[86]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[87]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[87]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[88]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[88]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[89]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[89]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[90]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[90]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[91]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[91]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[92]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[92]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[93]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[93]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[94]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[94]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[95]));

	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[95]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[96]));

	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[96]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[97]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[97]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[98]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[98]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[99]));

    //^^50 2

	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[99]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[100]));

	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[100]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[101]));

	sph_bmw512_init(&ctx_bmw); //39
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[101]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[102]));

	sph_luffa512_init(&ctx_luffa);//47
	sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[102]), 64);
	sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[103]));

	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[103]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[104]));

	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[104]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[105]));

	sph_md2_init(&ctx_md2); //15
	sph_md2(&ctx_md2, static_cast<void*>(&hash[105]), 64);
	sph_md2_close(&ctx_md2, static_cast<void*>(&hash[106]));

	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[106]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[107]));

	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[107]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[108]));

	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[108]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[109]));

	sph_sha1_init(&ctx_sha1);//28
	sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[109]), 64);
	sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[110]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[110]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[111]));

	sph_fugue512_init(&ctx_fugue);//18
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[111]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[112]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[112]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[113]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[113]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[114]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[114]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[115]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[115]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[116]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[116]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[117]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[117]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[118]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[118]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[119]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[119]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[120]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[120]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[121]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[121]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[122]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[122]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[123]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[123]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[124]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[124]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[125]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[125]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[126]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[126]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[127]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[127]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[128]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[128]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[129]));

	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[129]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[130]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[130]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[131]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[131]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[132]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[132]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[133]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[133]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[134]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[134]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[135]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[135]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[136]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[136]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[137]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[137]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[138]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[138]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[139]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[139]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[140]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[140]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[141]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[141]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[142]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[142]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[143]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[143]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[144]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[144]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[145]));

	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[145]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[146]));

	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[146]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[147]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[147]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[148]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[148]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[149]));

	//^^50 3

	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[149]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[150]));

	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[150]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[151]));

	sph_bmw512_init(&ctx_bmw); //39
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[151]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[152]));

	sph_luffa512_init(&ctx_luffa);//47
	sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[152]), 64);
	sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[153]));

	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[153]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[154]));

	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[154]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[155]));

	sph_md2_init(&ctx_md2); //15
	sph_md2(&ctx_md2, static_cast<void*>(&hash[155]), 64);
	sph_md2_close(&ctx_md2, static_cast<void*>(&hash[156]));

	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[156]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[157]));

	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[157]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[158]));

	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[158]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[159]));

	sph_sha1_init(&ctx_sha1);//28
	sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[159]), 64);
	sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[160]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[160]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[161]));

	sph_fugue512_init(&ctx_fugue);//18
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[161]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[162]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[162]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[163]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[163]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[164]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[164]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[165]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[165]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[166]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[166]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[167]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[167]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[168]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[168]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[169]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[169]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[170]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[170]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[171]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[171]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[172]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[172]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[173]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[173]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[174]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[174]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[175]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[175]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[176]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[176]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[177]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[177]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[178]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[178]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[179]));

	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[179]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[180]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[180]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[181]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[181]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[182]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[182]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[183]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[183]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[184]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[184]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[185]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[185]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[186]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[186]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[187]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[187]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[188]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[188]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[189]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[189]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[190]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[190]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[191]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[191]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[192]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[192]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[193]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[193]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[194]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[194]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[195]));

	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[195]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[196]));

	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[196]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[197]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[197]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[198]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[198]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[199]));

	//^^50 4

	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[199]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[200]));

	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[200]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[201]));

	sph_bmw512_init(&ctx_bmw); //39
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[201]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[202]));

	sph_luffa512_init(&ctx_luffa);//47
	sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[202]), 64);
	sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[203]));

	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[203]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[204]));

	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[204]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[205]));

	sph_md2_init(&ctx_md2); //15
	sph_md2(&ctx_md2, static_cast<void*>(&hash[205]), 64);
	sph_md2_close(&ctx_md2, static_cast<void*>(&hash[206]));

	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[206]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[207]));

	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[207]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[208]));

	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[208]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[209]));

	sph_sha1_init(&ctx_sha1);//28
	sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[209]), 64);
	sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[210]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[210]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[211]));

	sph_fugue512_init(&ctx_fugue);//18
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[211]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[212]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[212]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[213]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[213]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[214]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[214]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[215]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[215]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[216]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[216]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[217]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[217]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[218]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[218]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[219]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[219]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[220]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[220]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[221]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[221]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[222]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[222]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[223]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[223]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[224]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[224]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[225]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[225]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[226]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[226]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[227]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[227]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[228]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[228]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[229]));

	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[229]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[230]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[230]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[231]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[231]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[232]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[232]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[233]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[233]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[234]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[234]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[235]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[235]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[236]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[236]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[237]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[237]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[238]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[238]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[239]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[239]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[240]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[240]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[241]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[241]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[242]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[242]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[243]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[243]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[244]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[244]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[245]));

	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[245]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[246]));

	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[246]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[247]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[247]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[248]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[248]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[249]));

	//50 5
	
	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[249]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[250]));

	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[250]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[251]));

	sph_bmw512_init(&ctx_bmw); //39
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[251]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[252]));

	sph_luffa512_init(&ctx_luffa);//47
	sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[252]), 64);
	sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[253]));

	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[253]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[254]));

	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[254]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[255]));

	sph_md2_init(&ctx_md2); //15
	sph_md2(&ctx_md2, static_cast<void*>(&hash[255]), 64);
	sph_md2_close(&ctx_md2, static_cast<void*>(&hash[256]));

	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[256]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[257]));

	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[257]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[258]));

	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[258]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[259]));

	sph_sha1_init(&ctx_sha1);//28
	sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[259]), 64);
	sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[260]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[260]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[261]));

	sph_fugue512_init(&ctx_fugue);//18
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[261]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[262]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[262]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[263]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[263]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[264]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[264]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[265]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[265]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[266]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[266]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[267]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[267]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[268]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[268]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[269]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[269]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[270]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[270]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[271]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[271]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[272]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[272]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[273]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[273]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[274]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[274]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[275]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[275]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[276]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[276]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[277]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[277]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[278]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[278]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[279]));

	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[279]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[280]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[280]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[281]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[281]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[282]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[282]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[283]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[283]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[284]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[284]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[285]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[285]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[286]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[286]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[287]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[287]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[288]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[288]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[289]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[289]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[290]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[290]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[291]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[291]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[292]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[292]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[293]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[293]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[294]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[294]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[295]));

	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[295]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[296]));

	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[296]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[297]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[297]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[298]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[298]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[299]));

	//^^50 6
	
	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[299]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[300]));
    
	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[300]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[301]));

    sph_bmw512_init(&ctx_bmw); //39
    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[301]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[302]));

    sph_luffa512_init(&ctx_luffa);//47
    sph_luffa512 (&ctx_luffa, static_cast<const void*>(&hash[302]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[303]));
    
	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[303]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[304]));
    
	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[304]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[305]));

    sph_md2_init(&ctx_md2); //15
    sph_md2 (&ctx_md2, static_cast<void*>(&hash[305]), 64);
    sph_md2_close(&ctx_md2, static_cast<void*>(&hash[306]));
    
	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[306]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[307]));
    
	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[307]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[308]));
        
	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[308]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[309]));

	sph_sha1_init(&ctx_sha1);//28
    sph_sha1 (&ctx_sha1, static_cast<const void*>(&hash[309]), 64);
    sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[310]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[310]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[311]));

    sph_fugue512_init(&ctx_fugue);//18
    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[311]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[312]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[312]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[313]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[313]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[314]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[314]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[315]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[315]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[316]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[316]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[317]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[317]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[318]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[318]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[319]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[319]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[320]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[320]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[321]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[321]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[322]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[322]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[323]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[323]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[324]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[324]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[325]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[325]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[326]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[326]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[327]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[327]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[328]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[328]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[329]));
	
	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[329]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[330]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[330]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[331]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[331]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[332]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[332]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[333]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[333]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[334]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[334]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[335]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[335]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[336]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[336]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[337]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[337]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[338]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[338]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[339]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[339]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[340]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[340]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[341]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[341]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[342]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[342]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[343]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[343]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[344]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[344]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[345]));
	
	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[345]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[346]));
	
	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[346]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[347]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[347]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[348]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[348]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[349]));
	
	//^^50 7

	sph_radiogatun32_init(&ctx_radiogatun32);//35
	sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[349]), 64);
	sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[350]));

	sph_sha224_init(&ctx_sha224); //no 29
	sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[350]), 64);
	sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[351]));

	sph_bmw512_init(&ctx_bmw); //39
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[351]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[352]));

	sph_luffa512_init(&ctx_luffa);//47
	sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[352]), 64);
	sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[353]));

	sph_haval256_4_init(&ctx_haval256_4); //13
	sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[353]), 64);
	sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[354]));

	sph_panama_init(&ctx_panama); //9
	sph_panama(&ctx_panama, static_cast<const void*>(&hash[354]), 64);
	sph_panama_close(&ctx_panama, static_cast<void*>(&hash[355]));

	sph_md2_init(&ctx_md2); //15
	sph_md2(&ctx_md2, static_cast<void*>(&hash[355]), 64);
	sph_md2_close(&ctx_md2, static_cast<void*>(&hash[356]));

	sph_haval224_4_init(&ctx_haval224_4);//10
	sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[356]), 64);
	sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[357]));

	sph_blake512_init(&ctx_blake);//38
	sph_blake512(&ctx_blake, static_cast<const void*>(&hash[357]), 64);
	sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[358]));

	sph_haval128_4_init(&ctx_haval128_4);//1
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[358]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[359]));

	sph_sha1_init(&ctx_sha1);//28
	sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[359]), 64);
	sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[360]));

	sph_cubehash512_init(&ctx_cubehash);//40
	sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[360]), 64);
	sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[361]));

	sph_fugue512_init(&ctx_fugue);//18
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[361]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[362]));

	sph_haval192_3_init(&ctx_haval192_3);//6
	sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[362]), 64);
	sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[363]));

	sph_tiger2_init(&ctx_tiger2);//34 //set1
	sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[363]), 64);
	sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[364]));

	sph_skein512_init(&ctx_skein); // No 46
	sph_skein512(&ctx_skein, static_cast<const void*>(&hash[364]), 64);
	sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[365]));

	sph_shabal512_init(&ctx_shabal); //no 48
	sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[365]), 64);
	sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[366]));

	sph_bmw512_init(&ctx_bmw); //20
	sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[366]), 64);
	sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[367]));

	sph_hamsi512_init(&ctx_hamsi);//44
	sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[367]), 64);
	sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[368]));

	sph_haval160_5_init(&ctx_haval160_5); //5
	sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[368]), 64);
	sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[369]));

	sph_ripemd_init(&ctx_ripemd); //21
	sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[369]), 64);
	sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[370]));

	sph_ripemd160_init(&ctx_ripemd160); //23
	sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[370]), 64);
	sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[371]));

	sph_whirlpool0_init(&ctx_whirlpool0);//36
	sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[371]), 64);
	sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[372]));

	sph_tiger_init(&ctx_tiger);//33
	sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[372]), 64);
	sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[373]));

	sph_groestl512_init(&ctx_groestl);//43
	sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[373]), 64);
	sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[374]));

	sph_whirlpool1_init(&ctx_whirlpool1);//37
	sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[374]), 64);
	sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[375]));

	sph_haval256_3_init(&ctx_haval256_3);//12
	sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[375]), 64);
	sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[376]));

	sph_echo512_init(&ctx_echo);//4
	sph_echo512(&ctx_echo, static_cast<const void*>(&hash[376]), 64);
	sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[377]));

	sph_haval256_5_init(&ctx_haval256_5);//14
	sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[377]), 64);
	sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[378]));

	sph_md4_init(&ctx_md4);//16
	sph_md4(&ctx_md4, static_cast<const void*>(&hash[378]), 64);
	sph_md4_close(&ctx_md4, static_cast<void*>(&hash[379]));

	sph_shavite512_init(&ctx_shavite);//49 //set2
	sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[379]), 64);
	sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[380]));

	sph_haval160_3_init(&ctx_haval160_3); // No 3
	sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[380]), 64);
	sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[381]));

	sph_keccak512_init(&ctx_keccak); //no 24
	sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[381]), 64);
	sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[382]));

	sph_sha512_init(&ctx_sha512); //32
	sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[382]), 64);
	sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[383]));

	sph_fugue512_init(&ctx_fugue);//42
	sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[383]), 64);
	sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[384]));

	sph_keccak256_init(&ctx_keccak256); //25
	sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[384]), 64);
	sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[385]));

	sph_ripemd128_init(&ctx_ripemd128); //22
	sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[385]), 64);
	sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[386]));

	sph_simd512_init(&ctx_simd); //26
	sph_simd512(&ctx_simd, static_cast<void*>(&hash[386]), 64);
	sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[387]));

	sph_sha0_init(&ctx_sha0);//27
	sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[387]), 64);
	sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[388]));

	sph_haval192_4_init(&ctx_haval192_4);//7
	sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[388]), 64);
	sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[389]));

	sph_sha384_init(&ctx_sha384);//31
	sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[389]), 64);
	sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[390]));

	sph_haval128_5_init(&ctx_haval128_5);//2
	sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[390]), 64);
	sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[391]));

	sph_haval224_5_init(&ctx_haval224_5);//11
	sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[391]), 64);
	sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[392]));

	sph_jh512_init(&ctx_jh);//45
	sph_jh512(&ctx_jh, static_cast<const void*>(&hash[392]), 64);
	sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[393]));

	sph_sha256_init(&ctx_sha256);//30
	sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[393]), 64);
	sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[394]));

	sph_haval192_5_init(&ctx_haval192_5);//8
	sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[394]), 64);
	sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[395]));

	sph_md5_init(&ctx_md5);//17
	sph_md5(&ctx_md5, static_cast<const void*>(&hash[395]), 64);
	sph_md5_close(&ctx_md5, static_cast<void*>(&hash[396]));

	sph_whirlpool_init(&ctx_whirlpool);//35
	sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[396]), 64);
	sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[397]));

	sph_haval128_4_init(&ctx_haval128_4);//35
	sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[397]), 64);
	sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[398]));

	sph_radiogatun64_init(&ctx_radiogatun64);//20
	sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[398]), 64);
	sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[399]));

    sph_radiogatun32_init(&ctx_radiogatun32);//35
    sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[399]), 64);
    sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[400]));

    sph_sha224_init(&ctx_sha224); //no 29
    sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[400]), 64);
    sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[401]));

    sph_bmw512_init(&ctx_bmw); //39
    sph_bmw512 (&ctx_bmw, static_cast<const void*>(&hash[401]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[402]));

    sph_luffa512_init(&ctx_luffa);//47
    sph_luffa512 (&ctx_luffa, static_cast<const void*>(&hash[402]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[403]));

    sph_haval256_4_init(&ctx_haval256_4); //13
    sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[403]), 64);
    sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[404]));

    sph_panama_init(&ctx_panama); //9
    sph_panama(&ctx_panama, static_cast<const void*>(&hash[404]), 64);
    sph_panama_close(&ctx_panama, static_cast<void*>(&hash[405]));

    sph_md2_init(&ctx_md2); //15
    sph_md2 (&ctx_md2, static_cast<void*>(&hash[405]), 64);
    sph_md2_close(&ctx_md2, static_cast<void*>(&hash[406]));

    sph_haval224_4_init(&ctx_haval224_4);//10
    sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[406]), 64);
    sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[407]));

    sph_blake512_init(&ctx_blake);//38
    sph_blake512(&ctx_blake, static_cast<const void*>(&hash[407]), 64);
    sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[408]));

    sph_haval128_4_init(&ctx_haval128_4);//1
    sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[408]), 64);
    sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[409]));

    sph_sha1_init(&ctx_sha1);//28
    sph_sha1 (&ctx_sha1, static_cast<const void*>(&hash[409]), 64);
    sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[410]));

    sph_cubehash512_init(&ctx_cubehash);//40
    sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[410]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[411]));

    sph_fugue512_init(&ctx_fugue);//18
    sph_fugue512 (&ctx_fugue, static_cast<const void*>(&hash[411]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[412]));

    sph_haval192_3_init(&ctx_haval192_3);//6
    sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[412]), 64);
    sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[413]));

    sph_tiger2_init(&ctx_tiger2);//34 //set1
    sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[413]), 64);
    sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[414]));

    sph_skein512_init(&ctx_skein); // No 46
    sph_skein512(&ctx_skein, static_cast<const void*>(&hash[414]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[415]));

    sph_shabal512_init(&ctx_shabal); //no 48
    sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[415]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[416]));

    sph_bmw512_init(&ctx_bmw); //20
    sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[416]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[417]));

    sph_hamsi512_init(&ctx_hamsi);//44
    sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[417]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[418]));

    sph_haval160_5_init(&ctx_haval160_5); //5
    sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[418]), 64);
    sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[419]));

    sph_ripemd_init(&ctx_ripemd); //21
    sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[419]), 64);
    sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[420]));

    sph_ripemd160_init(&ctx_ripemd160); //23
    sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[420]), 64);
    sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[421]));

    sph_whirlpool0_init(&ctx_whirlpool0);//36
    sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[421]), 64);
    sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[422]));

    sph_tiger_init(&ctx_tiger);//33
    sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[422]), 64);
    sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[423]));

    sph_groestl512_init(&ctx_groestl);//43
    sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[423]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[424]));

    sph_whirlpool1_init(&ctx_whirlpool1);//37
    sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[424]), 64);
    sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[425]));

    sph_haval256_3_init(&ctx_haval256_3);//12
    sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[425]), 64);
    sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[426]));

    sph_echo512_init(&ctx_echo);//4
    sph_echo512(&ctx_echo, static_cast<const void*>(&hash[426]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[427]));

    sph_haval256_5_init(&ctx_haval256_5);//14
    sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[427]), 64);
    sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[428]));

    sph_md4_init(&ctx_md4);//16
    sph_md4(&ctx_md4, static_cast<const void*>(&hash[428]), 64);
    sph_md4_close(&ctx_md4, static_cast<void*>(&hash[429]));

    sph_shavite512_init(&ctx_shavite);//49 //set2
    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[429]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[430]));

    sph_haval160_3_init(&ctx_haval160_3); // No 3
    sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[430]), 64);
    sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[431]));

    sph_keccak512_init(&ctx_keccak); //no 24
    sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[431]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[432]));

    sph_sha512_init(&ctx_sha512); //32
    sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[432]), 64);
    sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[433]));

    sph_fugue512_init(&ctx_fugue);//42
    sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[433]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[434]));

    sph_keccak256_init(&ctx_keccak256); //25
    sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[434]), 64);
    sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[435]));

    sph_ripemd128_init(&ctx_ripemd128); //22
    sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[435]), 64);
    sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[436]));

    sph_simd512_init(&ctx_simd); //26
    sph_simd512(&ctx_simd, static_cast<void*>(&hash[436]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[437]));

    sph_sha0_init(&ctx_sha0);//27
    sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[437]), 64);
    sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[438]));

    sph_haval192_4_init(&ctx_haval192_4);//7
    sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[438]), 64);
    sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[439]));

    sph_sha384_init(&ctx_sha384);//31
    sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[439]), 64);
    sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[440]));

    sph_haval128_5_init(&ctx_haval128_5);//2
    sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[440]), 64);
    sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[441]));

    sph_haval224_5_init(&ctx_haval224_5);//11
    sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[441]), 64);
    sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[442]));

    sph_jh512_init(&ctx_jh);//45
    sph_jh512(&ctx_jh, static_cast<const void*>(&hash[442]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[443]));

    sph_sha256_init(&ctx_sha256);//30
    sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[443]), 64);
    sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[444]));

    sph_haval192_5_init(&ctx_haval192_5);//8
    sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[444]), 64);
    sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[445]));

    sph_md5_init(&ctx_md5);//17
    sph_md5(&ctx_md5, static_cast<const void*>(&hash[445]), 64);
    sph_md5_close(&ctx_md5, static_cast<void*>(&hash[446]));

    sph_whirlpool_init(&ctx_whirlpool);//35
    sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[446]), 64);
    sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[447]));

    sph_haval128_4_init(&ctx_haval128_4);//35
    sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[447]), 64);
    sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[448]));

    sph_radiogatun64_init(&ctx_radiogatun64);//20
    sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[448]), 64);
    sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[449]));

    //^^50 7

    sph_radiogatun32_init(&ctx_radiogatun32);//35
    sph_radiogatun32(&ctx_radiogatun32, static_cast<const void*>(&hash[449]), 64);
    sph_radiogatun32_close(&ctx_radiogatun32, static_cast<void*>(&hash[450]));

    sph_sha224_init(&ctx_sha224); //no 29
    sph_sha224(&ctx_sha224, static_cast<const void*>(&hash[450]), 64);
    sph_sha224_close(&ctx_sha224, static_cast<void*>(&hash[451]));

    sph_bmw512_init(&ctx_bmw); //49
    sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[451]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[452]));

    sph_luffa512_init(&ctx_luffa);//47
    sph_luffa512(&ctx_luffa, static_cast<const void*>(&hash[452]), 64);
    sph_luffa512_close(&ctx_luffa, static_cast<void*>(&hash[453]));

    sph_haval256_4_init(&ctx_haval256_4); //13
    sph_haval256_4(&ctx_haval256_4, static_cast<const void*>(&hash[453]), 64);
    sph_haval256_4_close(&ctx_haval256_4, static_cast<void*>(&hash[454]));

    sph_panama_init(&ctx_panama); //9
    sph_panama(&ctx_panama, static_cast<const void*>(&hash[454]), 64);
    sph_panama_close(&ctx_panama, static_cast<void*>(&hash[455]));

    sph_md2_init(&ctx_md2); //15
    sph_md2(&ctx_md2, static_cast<void*>(&hash[455]), 64);
    sph_md2_close(&ctx_md2, static_cast<void*>(&hash[456]));

    sph_haval224_4_init(&ctx_haval224_4);//10
    sph_haval224_4(&ctx_haval224_4, static_cast<const void*>(&hash[456]), 64);
    sph_haval224_4_close(&ctx_haval224_4, static_cast<void*>(&hash[457]));

    sph_blake512_init(&ctx_blake);//48
    sph_blake512(&ctx_blake, static_cast<const void*>(&hash[457]), 64);
    sph_blake512_close(&ctx_blake, static_cast<void*>(&hash[458]));

    sph_haval128_4_init(&ctx_haval128_4);//1
    sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[458]), 64);
    sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[459]));

    sph_sha1_init(&ctx_sha1);//28
    sph_sha1(&ctx_sha1, static_cast<const void*>(&hash[459]), 64);
    sph_sha1_close(&ctx_sha1, static_cast<void*>(&hash[460]));

    sph_cubehash512_init(&ctx_cubehash);//40
    sph_cubehash512(&ctx_cubehash, static_cast<const void*>(&hash[460]), 64);
    sph_cubehash512_close(&ctx_cubehash, static_cast<void*>(&hash[461]));

    sph_fugue512_init(&ctx_fugue);//18
    sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[461]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[462]));

    sph_haval192_3_init(&ctx_haval192_3);//6
    sph_haval192_3(&ctx_haval192_3, static_cast<const void*>(&hash[462]), 64);
    sph_haval192_3_close(&ctx_haval192_3, static_cast<void*>(&hash[463]));

    sph_tiger2_init(&ctx_tiger2);//34 //set1
    sph_tiger2(&ctx_tiger2, static_cast<const void*>(&hash[463]), 64);
    sph_tiger2_close(&ctx_tiger2, static_cast<void*>(&hash[464]));

    sph_skein512_init(&ctx_skein); // No 46
    sph_skein512(&ctx_skein, static_cast<const void*>(&hash[464]), 64);
    sph_skein512_close(&ctx_skein, static_cast<void*>(&hash[465]));

    sph_shabal512_init(&ctx_shabal); //no 48
    sph_shabal512(&ctx_shabal, static_cast<const void*>(&hash[465]), 64);
    sph_shabal512_close(&ctx_shabal, static_cast<void*>(&hash[466]));

    sph_bmw512_init(&ctx_bmw); //20
    sph_bmw512(&ctx_bmw, static_cast<const void*>(&hash[466]), 64);
    sph_bmw512_close(&ctx_bmw, static_cast<void*>(&hash[467]));

    sph_hamsi512_init(&ctx_hamsi);//44
    sph_hamsi512(&ctx_hamsi, static_cast<const void*>(&hash[467]), 64);
    sph_hamsi512_close(&ctx_hamsi, static_cast<void*>(&hash[468]));

    sph_haval160_5_init(&ctx_haval160_5); //5
    sph_haval160_5(&ctx_haval160_5, static_cast<const void*>(&hash[468]), 64);
    sph_haval160_5_close(&ctx_haval160_5, static_cast<void*>(&hash[469]));

    sph_ripemd_init(&ctx_ripemd); //21
    sph_ripemd(&ctx_ripemd, static_cast<const void*>(&hash[469]), 64);
    sph_ripemd_close(&ctx_ripemd, static_cast<void*>(&hash[470]));

    sph_ripemd160_init(&ctx_ripemd160); //24
    sph_ripemd160(&ctx_ripemd160, static_cast<void*>(&hash[470]), 64);
    sph_ripemd160_close(&ctx_ripemd160, static_cast<void*>(&hash[471]));

    sph_whirlpool0_init(&ctx_whirlpool0);//46
    sph_whirlpool0(&ctx_whirlpool0, static_cast<const void*>(&hash[471]), 64);
    sph_whirlpool0_close(&ctx_whirlpool0, static_cast<void*>(&hash[472]));

    sph_tiger_init(&ctx_tiger);//33
    sph_tiger(&ctx_tiger, static_cast<const void*>(&hash[472]), 64);
    sph_tiger_close(&ctx_tiger, static_cast<void*>(&hash[473]));

    sph_groestl512_init(&ctx_groestl);//43
    sph_groestl512(&ctx_groestl, static_cast<const void*>(&hash[473]), 64);
    sph_groestl512_close(&ctx_groestl, static_cast<void*>(&hash[474]));

    sph_whirlpool1_init(&ctx_whirlpool1);//37
    sph_whirlpool1(&ctx_whirlpool1, static_cast<const void*>(&hash[474]), 64);
    sph_whirlpool1_close(&ctx_whirlpool1, static_cast<void*>(&hash[475]));

    sph_haval256_3_init(&ctx_haval256_3);//12
    sph_haval256_3(&ctx_haval256_3, static_cast<const void*>(&hash[475]), 64);
    sph_haval256_3_close(&ctx_haval256_3, static_cast<void*>(&hash[476]));

    sph_echo512_init(&ctx_echo);//4
    sph_echo512(&ctx_echo, static_cast<const void*>(&hash[476]), 64);
    sph_echo512_close(&ctx_echo, static_cast<void*>(&hash[477]));

    sph_haval256_5_init(&ctx_haval256_5);//14
    sph_haval256_5(&ctx_haval256_5, static_cast<const void*>(&hash[477]), 64);
    sph_haval256_5_close(&ctx_haval256_5, static_cast<void*>(&hash[478]));

    sph_md4_init(&ctx_md4);//16
    sph_md4(&ctx_md4, static_cast<const void*>(&hash[478]), 64);
    sph_md4_close(&ctx_md4, static_cast<void*>(&hash[479]));

    sph_shavite512_init(&ctx_shavite);//49 //set2
    sph_shavite512(&ctx_shavite, static_cast<const void*>(&hash[479]), 64);
    sph_shavite512_close(&ctx_shavite, static_cast<void*>(&hash[480]));

    sph_haval160_3_init(&ctx_haval160_3); // No 3
    sph_haval160_3(&ctx_haval160_3, static_cast<const void*>(&hash[480]), 64);
    sph_haval160_3_close(&ctx_haval160_3, static_cast<void*>(&hash[481]));

    sph_keccak512_init(&ctx_keccak); //no 24
    sph_keccak512(&ctx_keccak, static_cast<const void*>(&hash[481]), 64);
    sph_keccak512_close(&ctx_keccak, static_cast<void*>(&hash[482]));

    sph_sha512_init(&ctx_sha512); //42
    sph_sha512(&ctx_sha512, static_cast<const void*>(&hash[482]), 64);
    sph_sha512_close(&ctx_sha512, static_cast<void*>(&hash[483]));

    sph_fugue512_init(&ctx_fugue);//42
    sph_fugue512(&ctx_fugue, static_cast<const void*>(&hash[483]), 64);
    sph_fugue512_close(&ctx_fugue, static_cast<void*>(&hash[484]));

    sph_keccak256_init(&ctx_keccak256); //25
    sph_keccak256(&ctx_keccak256, static_cast<const void*>(&hash[484]), 64);
    sph_keccak256_close(&ctx_keccak256, static_cast<void*>(&hash[485]));

    sph_ripemd128_init(&ctx_ripemd128); //22
    sph_ripemd128(&ctx_ripemd128, static_cast<const void*>(&hash[485]), 64);
    sph_ripemd128_close(&ctx_ripemd128, static_cast<void*>(&hash[486]));

    sph_simd512_init(&ctx_simd); //26
    sph_simd512(&ctx_simd, static_cast<void*>(&hash[486]), 64);
    sph_simd512_close(&ctx_simd, static_cast<void*>(&hash[487]));

    sph_sha0_init(&ctx_sha0);//27
    sph_sha0(&ctx_sha0, static_cast<const void*>(&hash[487]), 64);
    sph_sha0_close(&ctx_sha0, static_cast<void*>(&hash[488]));

    sph_haval192_4_init(&ctx_haval192_4);//7
    sph_haval192_4(&ctx_haval192_4, static_cast<const void*>(&hash[488]), 64);
    sph_haval192_4_close(&ctx_haval192_4, static_cast<void*>(&hash[489]));

    sph_sha384_init(&ctx_sha384);//31
    sph_sha384(&ctx_sha384, static_cast<const void*>(&hash[489]), 64);
    sph_sha384_close(&ctx_sha384, static_cast<void*>(&hash[490]));

    sph_haval128_5_init(&ctx_haval128_5);//2
    sph_haval128_5(&ctx_haval128_5, static_cast<const void*>(&hash[490]), 64);
    sph_haval128_5_close(&ctx_haval128_5, static_cast<void*>(&hash[491]));

    sph_haval224_5_init(&ctx_haval224_5);//11
    sph_haval224_5(&ctx_haval224_5, static_cast<const void*>(&hash[491]), 64);
    sph_haval224_5_close(&ctx_haval224_5, static_cast<void*>(&hash[492]));

    sph_jh512_init(&ctx_jh);//45
    sph_jh512(&ctx_jh, static_cast<const void*>(&hash[492]), 64);
    sph_jh512_close(&ctx_jh, static_cast<void*>(&hash[493]));

    sph_sha256_init(&ctx_sha256);//40
    sph_sha256(&ctx_sha256, static_cast<const void*>(&hash[493]), 64);
    sph_sha256_close(&ctx_sha256, static_cast<void*>(&hash[494]));

    sph_haval192_5_init(&ctx_haval192_5);//8
    sph_haval192_5(&ctx_haval192_5, static_cast<const void*>(&hash[494]), 64);
    sph_haval192_5_close(&ctx_haval192_5, static_cast<void*>(&hash[495]));

    sph_md5_init(&ctx_md5);//17
    sph_md5(&ctx_md5, static_cast<const void*>(&hash[495]), 64);
    sph_md5_close(&ctx_md5, static_cast<void*>(&hash[496]));

    sph_whirlpool_init(&ctx_whirlpool);//35
    sph_whirlpool(&ctx_whirlpool, static_cast<const void*>(&hash[496]), 64);
    sph_whirlpool_close(&ctx_whirlpool, static_cast<void*>(&hash[497]));

    sph_haval128_4_init(&ctx_haval128_4);//35
    sph_haval128_4(&ctx_haval128_4, static_cast<const void*>(&hash[497]), 64);
    sph_haval128_4_close(&ctx_haval128_4, static_cast<void*>(&hash[498]));

    sph_radiogatun64_init(&ctx_radiogatun64);//20
    sph_radiogatun64(&ctx_radiogatun64, static_cast<const void*>(&hash[498]), 64);
    sph_radiogatun64_close(&ctx_radiogatun64, static_cast<void*>(&hash[499]));

	//^^50 10
	
	//FIVE HUNDRED
	//DONE
	//FINALLY
	
    //BUT HEY, AT LEAST IT WAS RADIOGATUN

   //RADIOGATUN IS LUVV, RADIOGATUN IS LYFF

    return hash[499].trim256();
}




#endif // HASHBLOCK_H 
