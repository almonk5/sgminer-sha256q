#ifndef SHA256Q_H
#define SHA256Q_H

#include "miner.h"

extern int sha256q_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
extern void sha256q_prepare_work(dev_blk_ctx *blk, uint32_t *state, uint32_t *pdata);
extern void sha256q_midstate(struct work *work);
extern void sha256q_regenhash(struct work *work);

#endif /* SHA256Q_H */