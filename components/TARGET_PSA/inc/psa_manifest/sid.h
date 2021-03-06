/* Copyright (c) 2019 ARM Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*********** WARNING: This is an auto-generated file. Do not edit! ***********/

/******** ITS ********/
#define PSA_ITS_GET 0x00011A00
#define PSA_ITS_SET 0x00011A01
#define PSA_ITS_INFO 0x00011A02
#define PSA_ITS_REMOVE 0x00011A03
#define PSA_ITS_RESET 0x00011A04

/******** PLATFORM ********/
#define PSA_PLATFORM_LC_GET 0x00011000
#define PSA_PLATFORM_LC_SET 0x00011001
#define PSA_PLATFORM_SYSTEM_RESET 0x00011002

/******** CRYPTO_SRV ********/
#define PSA_CRYPTO_INIT_ID 0x00000F00
#define PSA_MAC_ID 0x00000F01
#define PSA_HASH_ID 0x00000F02
#define PSA_ASYMMETRIC_ID 0x00000F03
#define PSA_SYMMETRIC_ID 0x00000F04
#define PSA_AEAD_ID 0x00000F05
#define PSA_KEY_MNG_ID 0x00000F06
#define PSA_RNG_ID 0x00000F07
#define PSA_CRYPTO_FREE_ID 0x00000F08
#define PSA_GENERATOR_ID 0x00000F09
#define PSA_ENTROPY_ID 0x00000F0A

/******** ATTEST_SRV ********/
#define PSA_ATTEST_GET_TOKEN_ID 0x00000F10
#define PSA_ATTEST_GET_TOKEN_SIZE_ID 0x00000F11
#define PSA_ATTEST_INJECT_KEY_ID 0x00000F12



/******** CRYPTO_ACL_TEST ********/
#define CRYPTO_CREATE_PERSISTENT_KEY 0x00000200
#define CRYPTO_GENERATE_KEY 0x00000201
#define CRYPTO_OPEN_PERSISTENT_KEY 0x00000202
#define CRYPTO_CLOSE_KEY 0x00000203
#define CRYPTO_SET_KEY_POLICY 0x00000204
#define CRYPTO_DESTROY_KEY 0x00000205
#define CRYPTO_GET_KEY_INFO 0x00000206
#define CRYPTO_GET_KEY_POLICY 0x00000207
#define CRYPTO_IMPORT_KEY 0x00000208


/******** CLIENT_TESTS_PART1 ********/
#define CLIENT_TESTS_PART1_ROT_SRV1 0x00001A05
#define CLIENT_TESTS_PART1_DROP_CONN 0x00001A06
#define CLIENT_TESTS_PART1_SECURE_CLIENTS_ONLY 0x00001A07


/******** SERVER_TESTS_PART1 ********/
#define SERVER_TESTS_PART1_CONTROL 0x00001A01
#define SERVER_TESTS_PART1_TEST 0x00001A02


/******** SERVER_TESTS_PART2 ********/
#define SERVER_TESTS_PART2_ROT_SRV_REVERSE 0x00001A03
#define SERVER_TESTS_PART2_ROT_SRV_DB_TST 0x00001A04


/******** SMOKE_TESTS_PART1 ********/
#define SMOKE_TESTS_PART1_ROT_SRV1 0x00001A00

