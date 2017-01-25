/*
 * $Id: kskparams.h 564 2010-10-25 06:44:08Z jakob $
 *
 * Copyright (c) 2010 Internet Corporation for Assigned Names ("ICANN")
 *
 * Author: Richard H. Lamb ("RHL") richard.lamb@icann.org
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _KSKPARAMS_H_
#define _KSKPARAMS_H_

#include "dnssec.h"

/*
 * DNSKEY Parameters
 */
#define DNSSEC_ROOT_DN "."             /*!< Root Domain Name */
#define DNSSEC_KSK_FLAGS 257           /*!< KSK DNSKEY Flags */
#define DNSSEC_PROTO 3                 /*!< DNSSEC Protocol Identifier */
#define DNSSEC_ALG RRSIG_RSASHA256     /*!< KSK Algorithm */
#define DNSSEC_KSK_RSA_BITS 2048       /*!< Length of KSK */

/*
 * Certificate Request Subject
 */
#define DN_O "ICANN"                   /*!< Organization  */
#define DN_OU "PTI"  // "IANA"                   /*!< Organization Unit */
#define DN_EMAIL "dnssec@iana.org"     /*!< Email Address */
#define OID_DNS "1.3.6.1.4.1.1000.53"  /*!< Enterprise specific DNS OID */

#endif /* _KSKPARAMS_H_ */
