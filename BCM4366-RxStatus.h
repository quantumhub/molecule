
from [https://github.com/MerlinRdev/gtac5300-merlin/blob/master/release/src-rt-5.02hnd/bcmdrivers/broadcom/net/wl/impl51/4365/src/wl/phy/wlc_phyreg_ac.h]
/* Register ACPHY_RxStatus0 */
#define ACPHY_RxStatus0(rev)                0x143
#define ACPHY_RxStatus0_RxStatus_SHIFT(rev) 0
#define ACPHY_RxStatus0_RxStatus_MASK(rev)  (0xffff << ACPHY_RxStatus0_RxStatus_SHIFT(rev))

/* Register ACPHY_RxStatus1 */
#define ACPHY_RxStatus1(rev)                0x144
#define ACPHY_RxStatus1_RxStatus_SHIFT(rev) 0
#define ACPHY_RxStatus1_RxStatus_MASK(rev)  (0xffff << ACPHY_RxStatus1_RxStatus_SHIFT(rev))

/* Register ACPHY_RxStatus2 */
#define ACPHY_RxStatus2(rev)                0x145
#define ACPHY_RxStatus2_RxStatus_SHIFT(rev) 0
#define ACPHY_RxStatus2_RxStatus_MASK(rev)  (0xffff << ACPHY_RxStatus2_RxStatus_SHIFT(rev))

/* Register ACPHY_RxStatus3 */
#define ACPHY_RxStatus3(rev)                0x146
#define ACPHY_RxStatus3_RxStatus_SHIFT(rev) 0
#define ACPHY_RxStatus3_RxStatus_MASK(rev)  (0xffff << ACPHY_RxStatus3_RxStatus_SHIFT(rev))

/* Register ACPHY_RxStatus4 */
#define ACPHY_RxStatus4(rev)                0x147
#define ACPHY_RxStatus4_RxStatus_SHIFT(rev) 0
#define ACPHY_RxStatus4_RxStatus_MASK(rev)  (0xffff << ACPHY_RxStatus4_RxStatus_SHIFT(rev))

/* Register ACPHY_RxStatus5 */
#define ACPHY_RxStatus5(rev)                0x148
#define ACPHY_RxStatus5_RxStatus_SHIFT(rev) 0
#define ACPHY_RxStatus5_RxStatus_MASK(rev)  (0xffff << ACPHY_RxStatus5_RxStatus_SHIFT(rev))


L676:
	jext	COND_RX_FIFOFULL, L809
	jzx	0, 15, SPR_RXE_0x56, 0x0, L679
	jzx	0, 14, SPR_RXE_STATUS1, 0x0, L676
	xjne	r23, 0x0, L677
	mov	0x143, r33
	calls	L42
	or	SPR_Ext_IHR_Data, 0x0, [0x870]
	mov	0x144, r33
	calls	L42
	or	SPR_Ext_IHR_Data, 0x0, [0x871]
	mov	0x145, r33
	calls	L42
	or	SPR_Ext_IHR_Data, 0x0, [0x872]
	mov	0x146, r33
	calls	L42
	or	SPR_Ext_IHR_Data, 0x0, [0x873]
	mov	0x147, r33
	calls	L42
	or	SPR_Ext_IHR_Data, 0x0, [0x874]
	mov	0x148, r33
	calls	L42
	or	SPR_Ext_IHR_Data, 0x0, [0x875]
	jmp	L678
  
  
  
from [https://github.com/seemoo-lab/nexmon/blob/master/buildtools/b43-v2/debug/include/spr.inc]
#define	SPR_RXE_PHYRXSTAT0		spr009
#define	SPR_RXE_PHYRXSTAT1		spr00a
#define	SPR_RXE_PHYRXSTAT2		spr01a
#define	SPR_RXE_PHYRXSTAT3		spr01b
#define	SPR_RXE_0x44			spr022
  
L677:
	orx	1, 0, r23, SPR_RXE_PHYRXSTAT0, [0x870]
	mov	0x7, SPR_RXE_0x40
	or	SPR_RXE_PHYRXSTAT1, 0x0, [0x871]
	or	SPR_RXE_PHYRXSTAT2, 0x0, [0x872]
	or	SPR_RXE_PHYRXSTAT3, 0x0, [0x873]
	or	SPR_RXE_0x44, 0x0, [0x874]
L678:
  
  
