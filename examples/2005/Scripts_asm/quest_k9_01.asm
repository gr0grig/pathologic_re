GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	W:army.wmv
	W:mnogogrannik_han@door1
	W:init_termitnik2
	W:burah_home
	W:noburah
	W:cot_eva
	W:nodanko
	W:pt_k9q01_burah
	W:NPC_Bakalavr
	W:k9q01_danko.xml
	W:pt_k9q01_danko
	W:NPC_Burah
	W:k9q01_burah.xml
	W:init_mnogogrannik
	W:mnogogrannik@door1
	W:pt_k9q01_littlegirl
	W:pers_littleboy
	W:k9q01_littleboy.xml
	W:pt_k9q01_littleboy
	W:pers_littlegirl
	W:k9q01_littlegirl.xml
	W:fail
	W:completed
	W:cleanup
	W:k9q01
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:Door 
	W: not found
	W:locked
	A:SetProperty
	W:klara2_npc_positioner
	W:init
// @pool_raw:610072006d0079002e0077006d00760000006d006e006f0067006f006700720061006e006e0069006b005f00680061006e00400064006f006f0072003100000069006e00690074005f007400650072006d00690074006e0069006b0032000000620075007200610068005f0068006f006d00650000006e006f0062007500720061006800000063006f0074005f0065007600610000006e006f00640061006e006b006f000000700074005f006b0039007100300031005f006200750072006100680000004e00500043005f00420061006b0061006c0061007600720000006b0039007100300031005f00640061006e006b006f002e0078006d006c000000700074005f006b0039007100300031005f00640061006e006b006f0000004e00500043005f004200750072006100680000006b0039007100300031005f00620075007200610068002e0078006d006c00000069006e00690074005f006d006e006f0067006f006700720061006e006e0069006b0000006d006e006f0067006f006700720061006e006e0069006b00400064006f006f00720031000000700074005f006b0039007100300031005f006c006900740074006c0065006700690072006c00000070006500720073005f006c006900740074006c00650062006f00790000006b0039007100300031005f006c006900740074006c00650062006f0079002e0078006d006c000000700074005f006b0039007100300031005f006c006900740074006c00650062006f007900000070006500720073005f006c006900740074006c0065006700690072006c0000006b0039007100300031005f006c006900740074006c0065006700690072006c002e0078006d006c0000006600610069006c00000063006f006d0070006c006500740065006400000063006c00650061006e007500700000006b00390071003000310000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e0027007400200065007800690073007400000044006f006f0072002000000020006e006f007400200066006f0075006e00640000006c006f0063006b0065006400000053657450726f7065727479006b006c0061007200610032005f006e00700063005f0070006f0073006900740069006f006e0065007200000069006e00690074000000

Import:
	QueuePlayMovie (1 args)
	Hold (0 args)
	Trace (1 args)
	GetSceneByName (2 args)
	Trigger (2 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	self (1 args)
	AddActor (6 args)
	FindActor (2 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object, object, object) Params = 0
		EVENT_26 Op = 0xc Vars = (string)


0x0: Push("army.wmv") // @poff=0
0x1: @ QueuePlayMovie(Stack[-1])
0x2: Pop(1)
0x3: PushEmpty(string, bool)
0x4: Stack[-2] = "mnogogrannik_han@door1" // @poff=18
0x5: Stack[-1] = (bool) 0
0x6: Call2 0xd0

0x7: Pop(2)
0x8: @ Hold()
0x9: Pop(0)
0xa: GOTO 0x8

0xb: Return(); Pop(0)

0xc: PushEmpty(object, object, int, object, object, int)
0xd: @ Trace(Stack[-7])
0xe: Pop(0)
0xf: Push("init_termitnik2") // @poff=64
0x10: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x11: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x12: Push("burah_home") // @poff=96
0x13: @ GetSceneByName(Stack[-4], Stack[-1])
0x14: Pop(1)
0x15: Push("noburah") // @poff=118
0x16: @ Trigger(Stack[-4], Stack[-1])
0x17: Pop(1)
0x18: Push("cot_eva") // @poff=134
0x19: @ GetSceneByName(Stack[-4], Stack[-1])
0x1a: Pop(1)
0x1b: Push("nodanko") // @poff=150
0x1c: @ Trigger(Stack[-4], Stack[-1])
0x1d: Pop(1)
0x1e: Push("termitnik2") // @poff=74
0x1f: @ GetSceneByName(Stack[-4], Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(object, object, string, string, string)
0x22: Stack[-8] = Stack[-4]
0x23: Stack[-3] = "pt_k9q01_burah" // @poff=166
0x24: Stack[-2] = "NPC_Bakalavr" // @poff=196
0x25: Stack[-1] = "k9q01_danko.xml" // @poff=222
0x26: Call2 0xbe

0x27: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x28: Pop(5)
0x29: PushEmpty(object, object, string, string, string)
0x2a: Stack[-8] = Stack[-4]
0x2b: Stack[-3] = "pt_k9q01_danko" // @poff=254
0x2c: Stack[-2] = "NPC_Burah" // @poff=284
0x2d: Stack[-1] = "k9q01_burah.xml" // @poff=304
0x2e: Call2 0xbe

0x2f: Stack[0 + Tasks[-1].StackPointer] = Stack[-5]
0x30: Pop(5)
0x31: Stack[-3] = 0
0x32: GOTO 0x74

0x33: Push("init_mnogogrannik") // @poff=336
0x34: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x35: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x36: PushEmpty(string, bool)
0x37: Stack[-2] = "mnogogrannik@door1" // @poff=372
0x38: Stack[-1] = (bool) 0
0x39: Call2 0xd0

0x3a: Pop(2)
0x3b: Push("mnogogrannik") // @poff=346
0x3c: @ GetSceneByName(Stack[-3], Stack[-1])
0x3d: Pop(1)
0x3e: PushEmpty(object, object, string, string, string)
0x3f: Stack[-7] = Stack[-4]
0x40: Stack[-3] = "pt_k9q01_littlegirl" // @poff=410
0x41: Stack[-2] = "pers_littleboy" // @poff=450
0x42: Stack[-1] = "k9q01_littleboy.xml" // @poff=480
0x43: Call2 0xbe

0x44: Stack[2 + Tasks[-1].StackPointer] = Stack[-5]
0x45: Pop(5)
0x46: PushEmpty(object, object, string, string, string)
0x47: Stack[-7] = Stack[-4]
0x48: Stack[-3] = "pt_k9q01_littleboy" // @poff=520
0x49: Stack[-2] = "pers_littlegirl" // @poff=558
0x4a: Stack[-1] = "k9q01_littlegirl.xml" // @poff=590
0x4b: Call2 0xbe

0x4c: Stack[3 + Tasks[-1].StackPointer] = Stack[-5]
0x4d: Pop(5)
0x4e: Stack[-2] = 0
0x4f: GOTO 0x74

0x50: Push("fail") // @poff=632
0x51: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x5a; Pop(1)

0x53: PushEmpty()
0x54: Call2 0xed

0x55: Pop(0)
0x56: PushEmpty()
0x57: Call2 0x75

0x58: Pop(0)
0x59: GOTO 0x74

0x5a: Push("completed") // @poff=642
0x5b: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x5c: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5d: PushEmpty()
0x5e: Call2 0xed

0x5f: Pop(0)
0x60: PushEmpty()
0x61: Call2 0x7d

0x62: Pop(0)
0x63: GOTO 0x74

0x64: Push("cleanup") // @poff=662
0x65: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x66: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x67: Push("k9q01") // @poff=678
0x68: @ GetVariable(Stack[-1], Stack[-2])
0x69: Pop(1)
0x6a: Push((int) 1000)
0x6b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x6c: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6d: PushEmpty()
0x6e: Call2 0x75

0x6f: Pop(0)
0x70: GOTO 0x74

0x71: PushEmpty()
0x72: Call2 0x85

0x73: Pop(0)
0x74: Return(); Pop(6)

0x75: Push("k9q01") // @poff=678
0x76: Push((int) -1)
0x77: @ SetVariable(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: PushEmpty()
0x7a: Call2 0x85

0x7b: Pop(0)
0x7c: Return(); Pop(0)

0x7d: Push("k9q01") // @poff=678
0x7e: Push((int) 1000)
0x7f: @ SetVariable(Stack[-2], Stack[-1])
0x80: Pop(2)
0x81: PushEmpty()
0x82: Call2 0x85

0x83: Pop(0)
0x84: Return(); Pop(0)

0x85: PushEmpty(object, object)
0x86: EventDisable(26)
0x87: Push( Stack[1 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x89: Push("cleanup") // @poff=662
0x8a: @ Trigger(Stack[-1]T, Stack[-1])
0x8b: Pop(1)
0x8c: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x91; Pop(1)

0x8e: Push("cleanup") // @poff=662
0x8f: @ Trigger(Stack[-0]T, Stack[-1])
0x90: Pop(1)
0x91: Push( Stack[2 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x93: Push("cleanup") // @poff=662
0x94: @ Trigger(Stack[-2]T, Stack[-1])
0x95: Pop(1)
0x96: Push( Stack[3 + Tasks[-1].StackPointer] )
0x97: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x98: Push("cleanup") // @poff=662
0x99: @ Trigger(Stack[-3]T, Stack[-1])
0x9a: Pop(1)
0x9b: Push("burah_home") // @poff=96
0x9c: @ GetSceneByName(Stack[-2], Stack[-1])
0x9d: Pop(1)
0x9e: Push("burah") // @poff=122
0x9f: @ Trigger(Stack[-2], Stack[-1])
0xa0: Pop(1)
0xa1: Push("cot_eva") // @poff=134
0xa2: @ GetSceneByName(Stack[-2], Stack[-1])
0xa3: Pop(1)
0xa4: Push("danko") // @poff=154
0xa5: @ Trigger(Stack[-2], Stack[-1])
0xa6: Pop(1)
0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = "mnogogrannik@door1" // @poff=372
0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0xd0

0xab: Pop(2)
0xac: PushEmpty(string, bool)
0xad: Stack[-2] = "mnogogrannik_han@door1" // @poff=18
0xae: Stack[-1] = (bool) 1
0xaf: Call2 0xd0

0xb0: Pop(2)
0xb1: PushEmpty(object)
0xb2: Call2 0xb8

0xb3: Pop(0)
0xb4: @ RemoveActor(Stack[-1])
0xb5: Pop(1)
0xb6: Return(); Pop(2)

0xb7: Stack[-1] = 0
0xb8: PushEmpty(object, object)
0xb9: @ self(Stack[-1])
0xba: Pop(0)
0xbb: Stack[-1] = Stack[-3]
0xbc: Return(); Pop(2)

0xbd: Stack[-1] = 0
0xbe: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xbf: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=690
0xc0: Pop(0)
0xc1: Pop(0); Push((bool) Stack[-4] == 0)
0xc2: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xc3: Push("Locator ") // @poff=701
0xc4: Pop(1); Push(Stack[-1] + Stack[-12]);
0xc5: Push(" doesn't exist") // @poff=719
0xc6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc7: @ Trace(Stack[-1])
0xc8: Pop(1)
0xc9: Stack[-1] = 0
0xca: GOTO 0xcd

0xcb: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xcc: Pop(0)
0xcd: Stack[-1] = Stack[-13]
0xce: Return(); Pop(8)

0xcf: Stack[-1] = 0
0xd0: PushEmpty(object, object)
0xd1: @ FindActor(Stack[-1], Stack[-4])
0xd2: Pop(0)
0xd3: Pop(0); Push((bool) Stack[-1] == 0)
0xd4: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd5: Push("Door ") // @poff=749
0xd6: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd7: Push(" not found") // @poff=761
0xd8: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd9: @ Trace(Stack[-1])
0xda: Pop(1)
0xdb: GOTO 0xdf

0xdc: Push("locked") // @poff=783
0xdd: @@ SetProperty(Stack[-1], Stack[-4]); Obj=2 // @poff=797
0xde: Pop(1)
0xdf: Return(); Pop(2)

0xe0: Stack[-1] = 0
0xe1: PushEmpty(object, object)
0xe2: @ FindActor(Stack[-1], Stack[-4])
0xe3: Pop(0)
0xe4: Pop(0); PushNull((bool) Stack[-1] == 0)
0xe5: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe6: Stack[-5] = (bool) 0
0xe7: Return(); Pop(2)

0xe8: @ Trigger(Stack[-1], Stack[-3])
0xe9: Pop(0)
0xea: Stack[-5] = (bool) 1
0xeb: Return(); Pop(2)

0xec: Stack[-1] = 0
0xed: PushEmpty(bool, string, string)
0xee: Stack[-2] = "klara2_npc_positioner" // @poff=809
0xef: Stack[-1] = "init" // @poff=853
0xf0: Call2 0xe1

0xf1: Pop(3)
0xf2: Return(); Pop(0)

