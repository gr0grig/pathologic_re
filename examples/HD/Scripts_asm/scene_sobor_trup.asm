GlobalVarCount = 0

Strings:
	W:noaglaja
	W:sobor_aglaja
	W:pt_d6q01_boy
	W:pers_boy
	W:d6q01_boy.xml
	A:add
	W:pt_d6q01_girl
	W:pers_girl
	W:d6q01_girl.xml
	W:pt_d6q01_unosha
	W:pers_unosha
	W:d6q01_unosha.xml
	W:pt_d6q01_wasted_male
	W:pers_wasted_male
	W:d6q01_wasted_male.xml
	W:pt_d6q01_wasted_woman
	W:pers_wasted_girl
	W:d6q01_wasted_woman.xml
	W:pt_d6q01_woman
	W:pers_woman
	W:d6q01_woman.xml
	W:pt_d6q01_worker
	W:pers_worker
	W:d6q01_worker.xml
	A:GetLocator
	W:Locator 
	W: doesn't exist
	A:size
	A:get
	A:clear
// @pool_raw:6e006f00610067006c0061006a006100000073006f0062006f0072005f00610067006c0061006a0061000000700074005f00640036007100300031005f0062006f007900000070006500720073005f0062006f0079000000640036007100300031005f0062006f0079002e0078006d006c00000061646400700074005f00640036007100300031005f006700690072006c00000070006500720073005f006700690072006c000000640036007100300031005f006700690072006c002e0078006d006c000000700074005f00640036007100300031005f0075006e006f00730068006100000070006500720073005f0075006e006f007300680061000000640036007100300031005f0075006e006f007300680061002e0078006d006c000000700074005f00640036007100300031005f007700610073007400650064005f006d0061006c006500000070006500720073005f007700610073007400650064005f006d0061006c0065000000640036007100300031005f007700610073007400650064005f006d0061006c0065002e0078006d006c000000700074005f00640036007100300031005f007700610073007400650064005f0077006f006d0061006e00000070006500720073005f007700610073007400650064005f006700690072006c000000640036007100300031005f007700610073007400650064005f0077006f006d0061006e002e0078006d006c000000700074005f00640036007100300031005f0077006f006d0061006e00000070006500720073005f0077006f006d0061006e000000640036007100300031005f0077006f006d0061006e002e0078006d006c000000700074005f00640036007100300031005f0077006f0072006b0065007200000070006500720073005f0077006f0072006b00650072000000640036007100300031005f0077006f0072006b00650072002e0078006d006c0000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000073697a650067657400636c65617200

Import:
	CreateObjectVector (1 args)
	Hold (0 args)
	SetVariable (2 args)
	self (1 args)
	Trace (1 args)
	AddActor (6 args)
	RemoveActor (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 0
		EVENT_26 Op = 0x6 Vars = (string)
		EVENT_5 Op = 0x17 Vars = ()
		EVENT_6 Op = 0x6c Vars = ()


0x0: @ CreateObjectVector(Stack[-0]T)
0x1: Pop(0)
0x2: @ Hold()
0x3: Pop(0)
0x4: GOTO 0x2

0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Push("noaglaja") // @poff=0
0x8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0xa: Push("sobor_aglaja") // @poff=18
0xb: Push((int) 0)
0xc: @ SetVariable(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: GOTO 0x16

0xf: Push("aglaja") // @poff=4
0x10: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x16; Pop(1)

0x12: Push("sobor_aglaja") // @poff=18
0x13: Push((int) 1)
0x14: @ SetVariable(Stack[-2], Stack[-1])
0x15: Pop(2)
0x16: Return(); Pop(0)

0x17: PushEmpty(object, object, string, string, string)
0x18: PushEmpty(object)
0x19: Call2 0x71

0x1a: Stack[-1] = Stack[-5]
0x1b: Pop(1)
0x1c: Stack[-3] = "pt_d6q01_boy" // @poff=44
0x1d: Stack[-2] = "pers_boy" // @poff=70
0x1e: Stack[-1] = "d6q01_boy.xml" // @poff=88
0x1f: Call2 0x77

0x20: Pop(4)
0x21: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x22: Pop(1)
0x23: PushEmpty(object, object, string, string, string)
0x24: PushEmpty(object)
0x25: Call2 0x71

0x26: Stack[-1] = Stack[-5]
0x27: Pop(1)
0x28: Stack[-3] = "pt_d6q01_girl" // @poff=120
0x29: Stack[-2] = "pers_girl" // @poff=148
0x2a: Stack[-1] = "d6q01_girl.xml" // @poff=168
0x2b: Call2 0x77

0x2c: Pop(4)
0x2d: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x2e: Pop(1)
0x2f: PushEmpty(object, object, string, string, string)
0x30: PushEmpty(object)
0x31: Call2 0x71

0x32: Stack[-1] = Stack[-5]
0x33: Pop(1)
0x34: Stack[-3] = "pt_d6q01_unosha" // @poff=198
0x35: Stack[-2] = "pers_unosha" // @poff=230
0x36: Stack[-1] = "d6q01_unosha.xml" // @poff=254
0x37: Call2 0x77

0x38: Pop(4)
0x39: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x3a: Pop(1)
0x3b: PushEmpty(object, object, string, string, string)
0x3c: PushEmpty(object)
0x3d: Call2 0x71

0x3e: Stack[-1] = Stack[-5]
0x3f: Pop(1)
0x40: Stack[-3] = "pt_d6q01_wasted_male" // @poff=288
0x41: Stack[-2] = "pers_wasted_male" // @poff=330
0x42: Stack[-1] = "d6q01_wasted_male.xml" // @poff=364
0x43: Call2 0x77

0x44: Pop(4)
0x45: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x46: Pop(1)
0x47: PushEmpty(object, object, string, string, string)
0x48: PushEmpty(object)
0x49: Call2 0x71

0x4a: Stack[-1] = Stack[-5]
0x4b: Pop(1)
0x4c: Stack[-3] = "pt_d6q01_wasted_woman" // @poff=408
0x4d: Stack[-2] = "pers_wasted_girl" // @poff=452
0x4e: Stack[-1] = "d6q01_wasted_woman.xml" // @poff=486
0x4f: Call2 0x77

0x50: Pop(4)
0x51: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x52: Pop(1)
0x53: PushEmpty(object, object, string, string, string)
0x54: PushEmpty(object)
0x55: Call2 0x71

0x56: Stack[-1] = Stack[-5]
0x57: Pop(1)
0x58: Stack[-3] = "pt_d6q01_woman" // @poff=532
0x59: Stack[-2] = "pers_woman" // @poff=562
0x5a: Stack[-1] = "d6q01_woman.xml" // @poff=584
0x5b: Call2 0x77

0x5c: Pop(4)
0x5d: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x5e: Pop(1)
0x5f: PushEmpty(object, object, string, string, string)
0x60: PushEmpty(object)
0x61: Call2 0x71

0x62: Stack[-1] = Stack[-5]
0x63: Pop(1)
0x64: Stack[-3] = "pt_d6q01_worker" // @poff=616
0x65: Stack[-2] = "pers_worker" // @poff=648
0x66: Stack[-1] = "d6q01_worker.xml" // @poff=672
0x67: Call2 0x77

0x68: Pop(4)
0x69: @@@ add(Stack[-1]); Obj=0 // @poff=116
0x6a: Pop(1)
0x6b: Return(); Pop(0)

0x6c: PushEmpty(object)
0x6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6e: Call2 0x89

0x6f: Pop(1)
0x70: Return(); Pop(0)

0x71: PushEmpty(object, object)
0x72: @ self(Stack[-1])
0x73: Pop(0)
0x74: Stack[-1] = Stack[-3]
0x75: Return(); Pop(2)

0x76: Stack[-1] = 0
0x77: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x78: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=706
0x79: Pop(0)
0x7a: Pop(0); Push((bool) Stack[-4] == 0)
0x7b: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x7c: Push("Locator ") // @poff=717
0x7d: Pop(1); Push(Stack[-1] + Stack[-12]);
0x7e: Push(" doesn't exist") // @poff=735
0x7f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x80: @ Trace(Stack[-1])
0x81: Pop(1)
0x82: Stack[-1] = 0
0x83: GOTO 0x86

0x84: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x85: Pop(0)
0x86: Stack[-1] = Stack[-13]
0x87: Return(); Pop(8)

0x88: Stack[-1] = 0
0x89: PushEmpty(int, int, object, int, int, object)
0x8a: Push(Stack[-7])
0x8b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x8c: @@ size(Stack[-3]); Obj=7 // @poff=765
0x8d: Pop(0)
0x8e: Stack[-2] = (int) 0
0x8f: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x90: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x91: @@ get(Stack[-1], Stack[-2]); Obj=7 // @poff=770
0x92: Pop(0)
0x93: Push(Stack[-1])
0x94: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x95: @ RemoveActor(Stack[-1])
0x96: Pop(0)
0x97: Stack[-1] = 0
0x98: Push((int) 1)
0x99: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x9a: GOTO 0x8f

0x9b: @@ clear(); Obj=7 // @poff=774
0x9c: Pop(0)
0x9d: Return(); Pop(6)

