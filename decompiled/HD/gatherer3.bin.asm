GlobalVarCount = 0

Strings:
	Neutral
	all
	idle
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	HasItem
	Gatherer2_
	blood
	RemoveItemByType
	oobSysGatherer2_1
	playsound
	giveitem
	SetReturnValue
	grass_savyur
	grass_white_plet
	branch
	ui/NPC_Morlok.png
	ui/NPC_Morlok_b.png

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	ClearSubContainer (1 args)
	AddItem (4 args)

RunOp = 0x2ef
RunTask = 5

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (object) Params = 2
	GTASK_2 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x10e Vars = (int, int)
	GTASK_3 Vars = (object) Params = 2
	GTASK_4 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c5 Vars = (int, int)
	GTASK_5 Vars = (int, int, bool, bool, object, bool, bool, int) Params = 0
		EVENT_0 Op = 0x2fc Vars = (object)
		EVENT_5 Op = 0x333 Vars = ()
		EVENT_26 Op = 0x366 Vars = (string)
		EVENT_6 Op = 0x36e Vars = ()
		EVENT_7 Op = 0x3af Vars = (int)


0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x5bf

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x4c3

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x5bf

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x29: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2a: PushEmpty(bool, object, float)
0x2b: Stack[-2] = Stack[-12]
0x2c: Stack[-1] = (float) 110.0
0x2d: Call2 0x437

0x2e: Pop(2)
0x2f: Pop(1); Push((bool) Stack[-1] == 0)
0x30: IF (Stack[-1] == 0) GOTO 0x33; Pop(1)

0x31: Stack[-10] = (int) -2
0x32: Return(); Pop(8)

0x33: @ CreateDialog(Stack[-4])
0x34: Pop(0)
0x35: PushEmpty(int)
0x36: Call2 0x5b9

0x37: Pop(0)
0x38: @@ SetNPCName(Stack[-1])
0x39: Pop(1)
0x3a: PushEmpty(int)
0x3b: Call2 0x5b7

0x3c: Pop(0)
0x3d: @@ SetNPCDescription(Stack[-1])
0x3e: Pop(1)
0x3f: PushEmpty(string)
0x40: Call2 0x5bb

0x41: Pop(0)
0x42: @@ SetPhoto(Stack[-1])
0x43: Pop(1)
0x44: PushEmpty(string)
0x45: Call2 0x5bd

0x46: Pop(0)
0x47: @@ SetPhoto2(Stack[-1])
0x48: Pop(1)
0x49: PushEmpty(int)
0x4a: Call2 0x5a0

0x4b: Pop(0)
0x4c: @@ SetPlayerName(Stack[-1])
0x4d: Pop(1)
0x4e: Stack[-2] = (int) -1
0x4f: @ IsOverrideActive(Stack[-3])
0x50: Pop(0)
0x51: Push(Stack[-3])
0x52: IF (Stack[-1] == 0) GOTO 0x55; Pop(1)

0x53: Stack[-10] = (int) -2
0x54: Return(); Pop(8)

0x55: @ DoDialog(Stack[-4])
0x56: Pop(0)
0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[-11]
0x59: Stack[-1] = Stack[-6]
0x5a: Push(-2, 4); TaskCall(2)
0x5b: Call2 0x72

0x5c: Pop(-2, 4); TaskReturn
0x5d: Pop(2)
0x5e: @@ IsDialogEnd(Stack[-1])
0x5f: Pop(0)
0x60: Pop(0); Push((bool) Stack[-1] == 0)
0x61: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x62: @ sync()
0x63: Pop(0)
0x64: @@ IsDialogEnd(Stack[-1])
0x65: Pop(0)
0x66: GOTO 0x60

0x67: PushEmpty(object)
0x68: Stack[-1] = Stack[-10]
0x69: Call2 0x47c

0x6a: Pop(1)
0x6b: @ StopDialog(Stack[-4])
0x6c: Pop(0)
0x6d: @@ GetReturnValue(Stack[-2])
0x6e: Pop(0)
0x6f: Stack[-10] = Stack[-2]
0x70: Return(); Pop(8)

0x71: Stack[-4] = 0
0x72: PushEmpty()
0x73: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x74: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x76: Push((int) 1)
0x77: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0x78: PushEmpty(bool)
0x79: Stack[-1] = (bool) 0
0x7a: PushEmpty(bool, object)
0x7b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c: Call2 0x567

0x7d: Pop(1)
0x7e: Pop(1); Push((bool) Stack[-1] == 0)
0x7f: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x55d

0x83: Pop(1)
0x84: Pop(1); Push((bool) Stack[-1] == 0)
0x85: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x86: Stack[-1] = (bool) 1
0x87: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x88: PushEmpty(string)
0x89: Stack[-1] = "Neutral"
0x8a: Call2 0xf8

0x8b: Pop(1)
0x8c: Push((int) 518164)
0x8d: @@ SetMessage(Stack[-1])
0x8e: Pop(1)
0x8f: @@ ClearReplies()
0x90: Pop(0)
0x91: Push((int) 530150)
0x92: Push((int) 31544)
0x93: Push((int) 31543)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: Push((int) 530158)
0x97: Push((int) -1)
0x98: Push((int) 31551)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: GOTO 0xda

0x9c: PushEmpty(bool)
0x9d: Stack[-1] = (bool) 0
0x9e: PushEmpty(bool, object)
0x9f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0: Call2 0x567

0xa1: Pop(1)
0xa2: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa3: PushEmpty(bool, object)
0xa4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Call2 0x55d

0xa6: Pop(1)
0xa7: Pop(1); Push((bool) Stack[-1] == 0)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 1
0xaa: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xab: PushEmpty(string)
0xac: Stack[-1] = "Neutral"
0xad: Call2 0xf8

0xae: Pop(1)
0xaf: Push((int) 518169)
0xb0: @@ SetMessage(Stack[-1])
0xb1: Pop(1)
0xb2: @@ ClearReplies()
0xb3: Pop(0)
0xb4: Push((int) 518170)
0xb5: Push((int) 19284)
0xb6: Push((int) 19283)
0xb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8: Pop(3)
0xb9: GOTO 0xda

0xba: PushEmpty(string)
0xbb: Stack[-1] = "Neutral"
0xbc: Call2 0xf8

0xbd: Pop(1)
0xbe: Push((int) 518174)
0xbf: @@ SetMessage(Stack[-1])
0xc0: Pop(1)
0xc1: @@ ClearReplies()
0xc2: Pop(0)
0xc3: Push((int) 518175)
0xc4: Push((int) -1)
0xc5: Push((int) 19288)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0x551

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xcd: Push((int) 534605)
0xce: Push((int) 36244)
0xcf: Push((int) 36243)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 518179)
0xd3: Push((int) -1)
0xd4: Push((int) 19292)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: GOTO 0xda

0xd8: Return(); Pop(0)

0xd9: GOTO 0x76

0xda: PushEmpty(bool)
0xdb: Call2 0x5bf

0xdc: Pop(0)
0xdd: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xde: @ lshWaitForAnimEnd()
0xdf: Pop(0)
0xe0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe1: IF (Stack[-1] == 0) GOTO 0xe3; Pop(1)

0xe2: GOTO 0xe8

0xe3: PushEmpty(string)
0xe4: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe5: Call2 0x4c3

0xe6: Pop(1)
0xe7: GOTO 0xde

0xe8: GOTO 0xf7

0xe9: Push("all")
0xea: Push("idle")
0xeb: @ PlayAnimation(Stack[-2], Stack[-1])
0xec: Pop(2)
0xed: @ WaitForAnimEnd()
0xee: Pop(0)
0xef: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf0: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xf1: GOTO 0xf7

0xf2: Push("all")
0xf3: Push("idle")
0xf4: @ PlayAnimation(Stack[-2], Stack[-1])
0xf5: Pop(2)
0xf6: GOTO 0xed

0xf7: Return(); Pop(0)

0xf8: PushEmpty()
0xf9: PushEmpty(bool)
0xfa: Call2 0x5bf

0xfb: Pop(0)
0xfc: Pop(1); Push((bool) Stack[-1] == 0)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Return(); Pop(0)

0xff: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x100: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x101: Return(); Pop(0)

0x102: PushEmpty(string, bool)
0x103: Stack[-2] = Stack[-3]
0x104: Push("")
0x105: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x106: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x107: Stack[-1] = (bool) 0
0x108: GOTO 0x10a

0x109: Stack[-1] = (bool) 1
0x10a: Call2 0x4d3

0x10b: Pop(2)
0x10c: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x10d: Return(); Pop(0)

0x10e: PushEmpty()
0x10f: Push((int) 1)
0x110: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x111: PushEmpty()
0x112: Call2 0x4ed

0x113: Pop(0)
0x114: Push((int) 19285)
0x115: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x117: PushEmpty(object, object)
0x118: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x119: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11a: Call2 0x531

0x11b: Pop(2)
0x11c: PushEmpty(object, object)
0x11d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11f: Call2 0x546

0x120: Pop(2)
0x121: Push((int) 19288)
0x122: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x123: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x124: PushEmpty(object, object)
0x125: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x126: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x127: Call2 0x54c

0x128: Pop(2)
0x129: Push((int) 36243)
0x12a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12c: PushEmpty(object, object)
0x12d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12f: Call2 0x540

0x130: Pop(2)
0x131: Push((int) 19277)
0x132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x134: PushEmpty(bool)
0x135: Stack[-1] = (bool) 0
0x136: PushEmpty(bool, object)
0x137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x138: Call2 0x567

0x139: Pop(1)
0x13a: Pop(1); Push((bool) Stack[-1] == 0)
0x13b: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0x55d

0x13f: Pop(1)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x142: Stack[-1] = (bool) 1
0x143: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0xf8

0x147: Pop(1)
0x148: Push((int) 518164)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 530150)
0x14e: Push((int) 31544)
0x14f: Push((int) 31543)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 530158)
0x153: Push((int) -1)
0x154: Push((int) 31551)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: PushEmpty(bool)
0x159: Stack[-1] = (bool) 0
0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x567

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0x55d

0x162: Pop(1)
0x163: Pop(1); Push((bool) Stack[-1] == 0)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral"
0x169: Call2 0xf8

0x16a: Pop(1)
0x16b: Push((int) 518169)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 518170)
0x171: Push((int) 19284)
0x172: Push((int) 19283)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xf8

0x179: Pop(1)
0x17a: Push((int) 518174)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 518175)
0x180: Push((int) -1)
0x181: Push((int) 19288)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x551

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: Push((int) 534605)
0x18a: Push((int) 36244)
0x18b: Push((int) 36243)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 518179)
0x18f: Push((int) -1)
0x190: Push((int) 19292)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 36244)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Neutral"
0x199: Call2 0xf8

0x19a: Pop(1)
0x19b: Push((int) 534606)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 534607)
0x1a1: Push((int) 36246)
0x1a2: Push((int) 36245)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Push((int) 534614)
0x1a6: Push((int) -1)
0x1a7: Push((int) 36252)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 36246)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Neutral"
0x1b0: Call2 0xf8

0x1b1: Pop(1)
0x1b2: Push((int) 534608)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 534609)
0x1b8: Push((int) -1)
0x1b9: Push((int) 36247)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Push((int) 534610)
0x1bd: Push((int) 36249)
0x1be: Push((int) 36248)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: Return(); Pop(0)

0x1c2: Push((int) 36249)
0x1c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call2 0xf8

0x1c8: Pop(1)
0x1c9: Push((int) 534611)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 534612)
0x1cf: Push((int) -1)
0x1d0: Push((int) 36250)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Push((int) 534613)
0x1d4: Push((int) -1)
0x1d5: Push((int) 36251)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: Return(); Pop(0)

0x1d9: Push((int) 19284)
0x1da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1db: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1dc: PushEmpty(string)
0x1dd: Stack[-1] = "Neutral"
0x1de: Call2 0xf8

0x1df: Pop(1)
0x1e0: Push((int) 518171)
0x1e1: @@ SetMessage(Stack[-1])
0x1e2: Pop(1)
0x1e3: @@ ClearReplies()
0x1e4: Pop(0)
0x1e5: Push((int) 518172)
0x1e6: Push((int) -1)
0x1e7: Push((int) 19285)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Push((int) 518173)
0x1eb: Push((int) -1)
0x1ec: Push((int) 19286)
0x1ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ee: Pop(3)
0x1ef: Return(); Pop(0)

0x1f0: Push((int) 31544)
0x1f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x1f3: PushEmpty(string)
0x1f4: Stack[-1] = "Neutral"
0x1f5: Call2 0xf8

0x1f6: Pop(1)
0x1f7: Push((int) 530151)
0x1f8: @@ SetMessage(Stack[-1])
0x1f9: Pop(1)
0x1fa: @@ ClearReplies()
0x1fb: Pop(0)
0x1fc: Push((int) 530152)
0x1fd: Push((int) 31546)
0x1fe: Push((int) 31545)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Push((int) 530156)
0x202: Push((int) -1)
0x203: Push((int) 31549)
0x204: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x205: Pop(3)
0x206: Return(); Pop(0)

0x207: Push((int) 31546)
0x208: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call2 0xf8

0x20d: Pop(1)
0x20e: Push((int) 530153)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 530154)
0x214: Push((int) -1)
0x215: Push((int) 31547)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 530155)
0x219: Push((int) -1)
0x21a: Push((int) 31548)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Return(); Pop(0)

0x21e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x21f: PushEmpty(bool)
0x220: Call2 0x5bf

0x221: Pop(0)
0x222: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x223: @ lshStopAnimation()
0x224: Pop(0)
0x225: GOTO 0x228

0x226: @ StopAnimation()
0x227: Pop(0)
0x228: Return(); Pop(0)

0x229: GOTO 0x10f

0x22a: Return(); Pop(0)

0x22b: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x22c: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x22d: PushEmpty(bool, object, float)
0x22e: Stack[-2] = Stack[-12]
0x22f: Stack[-1] = (float) 110.0
0x230: Call2 0x437

0x231: Pop(2)
0x232: Pop(1); Push((bool) Stack[-1] == 0)
0x233: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x234: Stack[-10] = (int) -2
0x235: Return(); Pop(8)

0x236: @ CreateDialog(Stack[-4])
0x237: Pop(0)
0x238: PushEmpty(int)
0x239: Call2 0x5b9

0x23a: Pop(0)
0x23b: @@ SetNPCName(Stack[-1])
0x23c: Pop(1)
0x23d: PushEmpty(int)
0x23e: Call2 0x5b7

0x23f: Pop(0)
0x240: @@ SetNPCDescription(Stack[-1])
0x241: Pop(1)
0x242: PushEmpty(string)
0x243: Call2 0x5bb

0x244: Pop(0)
0x245: @@ SetPhoto(Stack[-1])
0x246: Pop(1)
0x247: PushEmpty(string)
0x248: Call2 0x5bd

0x249: Pop(0)
0x24a: @@ SetPhoto2(Stack[-1])
0x24b: Pop(1)
0x24c: PushEmpty(int)
0x24d: Call2 0x5a0

0x24e: Pop(0)
0x24f: @@ SetPlayerName(Stack[-1])
0x250: Pop(1)
0x251: Stack[-2] = (int) -1
0x252: @ IsOverrideActive(Stack[-3])
0x253: Pop(0)
0x254: Push(Stack[-3])
0x255: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x256: Stack[-10] = (int) -2
0x257: Return(); Pop(8)

0x258: @ DoDialog(Stack[-4])
0x259: Pop(0)
0x25a: PushEmpty(object, object)
0x25b: Stack[-2] = Stack[-11]
0x25c: Stack[-1] = Stack[-6]
0x25d: Push(-2, 4); TaskCall(4)
0x25e: Call2 0x275

0x25f: Pop(-2, 4); TaskReturn
0x260: Pop(2)
0x261: @@ IsDialogEnd(Stack[-1])
0x262: Pop(0)
0x263: Pop(0); Push((bool) Stack[-1] == 0)
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: @ sync()
0x266: Pop(0)
0x267: @@ IsDialogEnd(Stack[-1])
0x268: Pop(0)
0x269: GOTO 0x263

0x26a: PushEmpty(object)
0x26b: Stack[-1] = Stack[-10]
0x26c: Call2 0x47c

0x26d: Pop(1)
0x26e: @ StopDialog(Stack[-4])
0x26f: Pop(0)
0x270: @@ GetReturnValue(Stack[-2])
0x271: Pop(0)
0x272: Stack[-10] = Stack[-2]
0x273: Return(); Pop(8)

0x274: Stack[-4] = 0
0x275: PushEmpty()
0x276: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x277: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x278: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x279: Push((int) 1)
0x27a: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x27b: PushEmpty(string)
0x27c: Stack[-1] = "Neutral"
0x27d: Call2 0x2af

0x27e: Pop(1)
0x27f: Push((int) 525391)
0x280: @@ SetMessage(Stack[-1])
0x281: Pop(1)
0x282: @@ ClearReplies()
0x283: Pop(0)
0x284: Push((int) 525392)
0x285: Push((int) -1)
0x286: Push((int) 26760)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: Push((int) 539025)
0x28a: Push((int) -1)
0x28b: Push((int) 40968)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: GOTO 0x291

0x28f: Return(); Pop(0)

0x290: GOTO 0x279

0x291: PushEmpty(bool)
0x292: Call2 0x5bf

0x293: Pop(0)
0x294: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x295: @ lshWaitForAnimEnd()
0x296: Pop(0)
0x297: Push( Stack[3 + Tasks[-1].StackPointer] )
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: GOTO 0x29f

0x29a: PushEmpty(string)
0x29b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29c: Call2 0x4c3

0x29d: Pop(1)
0x29e: GOTO 0x295

0x29f: GOTO 0x2ae

0x2a0: Push("all")
0x2a1: Push("idle")
0x2a2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a3: Pop(2)
0x2a4: @ WaitForAnimEnd()
0x2a5: Pop(0)
0x2a6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a7: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x2a8: GOTO 0x2ae

0x2a9: Push("all")
0x2aa: Push("idle")
0x2ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ac: Pop(2)
0x2ad: GOTO 0x2a4

0x2ae: Return(); Pop(0)

0x2af: PushEmpty()
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x5bf

0x2b2: Pop(0)
0x2b3: Pop(1); Push((bool) Stack[-1] == 0)
0x2b4: IF (Stack[-1] == 0) GOTO 0x2b6; Pop(1)

0x2b5: Return(); Pop(0)

0x2b6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Return(); Pop(0)

0x2b9: PushEmpty(string, bool)
0x2ba: Stack[-2] = Stack[-3]
0x2bb: Push("")
0x2bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2be: Stack[-1] = (bool) 0
0x2bf: GOTO 0x2c1

0x2c0: Stack[-1] = (bool) 1
0x2c1: Call2 0x4d3

0x2c2: Pop(2)
0x2c3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty()
0x2c6: Push((int) 1)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2c8: PushEmpty()
0x2c9: Call2 0x4ed

0x2ca: Pop(0)
0x2cb: Push((int) 26759)
0x2cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2ce: PushEmpty(string)
0x2cf: Stack[-1] = "Neutral"
0x2d0: Call2 0x2af

0x2d1: Pop(1)
0x2d2: Push((int) 525391)
0x2d3: @@ SetMessage(Stack[-1])
0x2d4: Pop(1)
0x2d5: @@ ClearReplies()
0x2d6: Pop(0)
0x2d7: Push((int) 525392)
0x2d8: Push((int) -1)
0x2d9: Push((int) 26760)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: Push((int) 539025)
0x2dd: Push((int) -1)
0x2de: Push((int) 40968)
0x2df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2e3: PushEmpty(bool)
0x2e4: Call2 0x5bf

0x2e5: Pop(0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e7: @ lshStopAnimation()
0x2e8: Pop(0)
0x2e9: GOTO 0x2ec

0x2ea: @ StopAnimation()
0x2eb: Pop(0)
0x2ec: Return(); Pop(0)

0x2ed: GOTO 0x2c6

0x2ee: Return(); Pop(0)

0x2ef: PushEmpty(int)
0x2f0: Call2 0x510

0x2f1: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x2f2: Pop(1)
0x2f3: PushEmpty()
0x2f4: Call2 0x57e

0x2f5: Pop(0)
0x2f6: PushEmpty(float, float)
0x2f7: Stack[-2] = (int) 300
0x2f8: Stack[-1] = (int) 100
0x2f9: Call2 0x340

0x2fa: Pop(2)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(int, int)
0x2fd: PushEmpty()
0x2fe: Call2 0x3c6

0x2ff: Pop(0)
0x300: PushEmpty(int)
0x301: Call2 0x5b1

0x302: Pop(0)
0x303: Push((int) 1)
0x304: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x306: PushEmpty(int, object)
0x307: Stack[-1] = Stack[-5]
0x308: Push(-2, 1); TaskCall(1)
0x309: Call2 0x28

0x30a: Pop(-2, 1); TaskReturn
0x30b: Stack[-3] = Stack[-2]
0x30c: Pop(2)
0x30d: GOTO 0x31d

0x30e: PushEmpty(int)
0x30f: Call2 0x5b1

0x310: Pop(0)
0x311: Push((int) 2)
0x312: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Push(-2, 1); TaskCall(3)
0x317: Call2 0x22b

0x318: Pop(-2, 1); TaskReturn
0x319: Stack[-3] = Stack[-2]
0x31a: Pop(2)
0x31b: GOTO 0x31d

0x31c: Return(); Pop(2)

0x31d: Push((int) 1000)
0x31e: Pop(1); Push((bool) Stack[-1] == Stack[-2])
0x31f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x320: PushEmpty(bool, object, float)
0x321: Stack[-2] = Stack[-6]
0x322: Stack[-1] = (float) 110.0
0x323: Call2 0x48e

0x324: Pop(2)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Return(); Pop(2)

0x328: PushEmpty(object)
0x329: Stack[-1] = Stack[-4]
0x32a: Push(-1, 1); TaskCall(0)
0x32b: Call2 0x0

0x32c: Pop(-1, 1); TaskReturn
0x32d: Pop(1)
0x32e: PushEmpty(object)
0x32f: Stack[-1] = Stack[-4]
0x330: Call2 0x4be

0x331: Pop(1)
0x332: Return(); Pop(2)

0x333: PushEmpty(int)
0x334: Call2 0x510

0x335: Pop(0)
0x336: Pop(1); Push((bool) Stack[7 + Tasks[-1].StackPointer] != Stack[-1])
0x337: IF (Stack[-1] == 0) GOTO 0x33f; Pop(1)

0x338: PushEmpty()
0x339: Call2 0x57e

0x33a: Pop(0)
0x33b: PushEmpty(int)
0x33c: Call2 0x510

0x33d: Stack[7 + Tasks[-1].StackPointer] = Stack[-1]
0x33e: Pop(1)
0x33f: Return(); Pop(0)

0x340: PushEmpty(float, bool, float, bool)
0x341: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x342: Push((int) 3)
0x343: @ rand(Stack[-3], Stack[-1])
0x344: Pop(1)
0x345: Push((int) 3)
0x346: Pop(1); Push(Stack[-3] + Stack[-1]);
0x347: @ Sleep(Stack[-1], Stack[-2])
0x348: Pop(1)
0x349: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x34a: PushEmpty(float, float)
0x34b: Stack[-2] = Stack[-8]
0x34c: Stack[-1] = Stack[-7]
0x34d: Call2 0x385

0x34e: Pop(2)
0x34f: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x350: GOTO 0x342

0x351: Return(); Pop(4)

0x352: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x353: PushEmpty(bool)
0x354: Stack[-1] = (bool) 0
0x355: PushEmpty(bool)
0x356: Call2 0x432

0x357: Pop(0)
0x358: Pop(1); Push((bool) Stack[-1] == 0)
0x359: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35a: PushEmpty(bool)
0x35b: Call2 0x383

0x35c: Pop(0)
0x35d: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35e: Stack[-1] = (bool) 1
0x35f: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x360: PushEmpty(object)
0x361: Call2 0x4f4

0x362: Pop(0)
0x363: @ RemoveActor(Stack[-1])
0x364: Pop(1)
0x365: Return(); Pop(0)

0x366: PushEmpty()
0x367: Push("cleanup")
0x368: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x36a: PushEmpty()
0x36b: Call2 0x352

0x36c: Pop(0)
0x36d: Return(); Pop(0)

0x36e: Push( Stack[6 + Tasks[-1].StackPointer] )
0x36f: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x370: PushEmpty()
0x371: Call2 0x3c6

0x372: Pop(0)
0x373: PushEmpty(bool)
0x374: Stack[-1] = (bool) 0
0x375: Push( Stack[5 + Tasks[-1].StackPointer] )
0x376: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x377: PushEmpty(bool)
0x378: Call2 0x383

0x379: Pop(0)
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: Stack[-1] = (bool) 1
0x37c: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x37d: PushEmpty(object)
0x37e: Call2 0x4f4

0x37f: Pop(0)
0x380: @ RemoveActor(Stack[-1])
0x381: Pop(1)
0x382: Return(); Pop(0)

0x383: Stack[-1] = (bool) 1
0x384: Return(); Pop(0)

0x385: PushEmpty()
0x386: PushEmpty(bool)
0x387: Call2 0x432

0x388: Pop(0)
0x389: Pop(1); Push((bool) Stack[-1] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Return(); Pop(0)

0x38c: Push("player")
0x38d: @ FindActor(Stack[-4], Stack[-1])
0x38e: Pop(1)
0x38f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x390: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x391: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x392: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x393: Push((int) 10)
0x394: Push((float)1.0)
0x395: @ SetTimer(Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: PushEmpty()
0x398: Call2 0x3d4

0x399: Pop(0)
0x39a: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x39b: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39c: Push((int) 10)
0x39d: @ KillTimer(Stack[-1])
0x39e: Pop(1)
0x39f: Return(); Pop(0)

0x3a0: PushEmpty(float, float)
0x3a1: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-3] = (bool) 0
0x3a4: Return(); Pop(2)

0x3a5: PushEmpty(float, object)
0x3a6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x3a7: Call2 0x42a

0x3a8: Pop(1)
0x3a9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3aa: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x3ad: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x3ae: Return(); Pop(2)

0x3af: PushEmpty()
0x3b0: Push((int) 10)
0x3b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3b3: PushEmpty(bool)
0x3b4: Call2 0x3a0

0x3b5: Pop(0)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b7: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x3b8: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b9: PushEmpty(object)
0x3ba: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x3bb: Call2 0x4e2

0x3bc: Pop(1)
0x3bd: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3be: GOTO 0x3c5

0x3bf: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c1: Push("head")
0x3c2: @ UnlookAsync(Stack[-1])
0x3c3: Pop(1)
0x3c4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3c5: Return(); Pop(0)

0x3c6: PushEmpty()
0x3c7: Call2 0x425

0x3c8: Pop(0)
0x3c9: Push((int) 10)
0x3ca: @ KillTimer(Stack[-1])
0x3cb: Pop(1)
0x3cc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3ce: Push("head")
0x3cf: @ UnlookAsync(Stack[-1])
0x3d0: Pop(1)
0x3d1: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x3d2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x3d5: @ WaitForAnimEnd()
0x3d6: Pop(0)
0x3d7: PushEmpty(bool)
0x3d8: Call2 0x432

0x3d9: Pop(0)
0x3da: Pop(1); Push((bool) Stack[-1] == 0)
0x3db: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3dc: Return(); Pop(14)

0x3dd: PushEmpty(int)
0x3de: Call2 0x520

0x3df: Stack[-8] = Stack[-1]
0x3e0: Pop(1)
0x3e1: Stack[-6] = (int) 0
0x3e2: PushEmpty(bool)
0x3e3: Stack[-1] = (bool) 0
0x3e4: Push((int) 5)
0x3e5: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3e7: PushEmpty(bool)
0x3e8: Call2 0x432

0x3e9: Pop(0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: Stack[-1] = (bool) 1
0x3ec: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x3ed: Push((int) 3)
0x3ee: @ irand(Stack[-6], Stack[-1])
0x3ef: Pop(1)
0x3f0: Push((int) 0)
0x3f1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f3: Push(Stack[-7])
0x3f4: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3f5: @ irand(Stack[-4], Stack[-7])
0x3f6: Pop(0)
0x3f7: Push("all")
0x3f8: PushEmpty(string, int)
0x3f9: Stack[-1] = Stack[-7]
0x3fa: Call2 0x519

0x3fb: Pop(1)
0x3fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: @ WaitForAnimEnd(Stack[-3])
0x3ff: Pop(0)
0x400: Pop(0); Push((bool) Stack[-3] == 0)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x420

0x403: GOTO 0x415

0x404: Push((int) 1)
0x405: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x407: Push((int) 4)
0x408: @ rand(Stack[-3], Stack[-1])
0x409: Pop(1)
0x40a: Push((int) 1)
0x40b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x40c: @ Sleep(Stack[-1], Stack[-2])
0x40d: Pop(1)
0x40e: Pop(0); Push((bool) Stack[-1] == 0)
0x40f: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x410: GOTO 0x420

0x411: GOTO 0x415

0x412: Push(Stack[-6])
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: GOTO 0x420

0x415: PushEmpty(bool)
0x416: Call2 0x423

0x417: Pop(0)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x41a: GOTO 0x420

0x41b: @ ResetAAS()
0x41c: Pop(0)
0x41d: Push((int) 1)
0x41e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x41f: GOTO 0x3e2

0x420: @ ResetAAS()
0x421: Pop(0)
0x422: Return(); Pop(14)

0x423: Stack[-1] = (bool) 1
0x424: Return(); Pop(0)

0x425: @ StopAnimation()
0x426: Pop(0)
0x427: @ StopGroup0()
0x428: Pop(0)
0x429: Return(); Pop(0)

0x42a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x42b: @ GetPosition(Stack[-3])
0x42c: Pop(0)
0x42d: @@ GetPosition(Stack[-2])
0x42e: Pop(0)
0x42f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x430: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x431: Return(); Pop(6)

0x432: PushEmpty(bool, bool)
0x433: @ IsLoaded(Stack[-1])
0x434: Pop(0)
0x435: Stack[-3] = Stack[-1]
0x436: Return(); Pop(2)

0x437: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x438: @@ GetPosition(Stack[-8])
0x439: Pop(0)
0x43a: @@ GetEyesHeight(Stack[-9])
0x43b: Pop(0)
0x43c: Push(CvectorIndex(Stack[-8], 1))
0x43d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x43e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x43f: @ GetPosition(Stack[-7])
0x440: Pop(0)
0x441: @ GetEyesHeight(Stack[-9])
0x442: Pop(0)
0x443: Push(CvectorIndex(Stack[-7], 1))
0x444: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x445: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x446: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x447: Push(CvectorIndex(Stack[-6], 1))
0x448: Stack[-1] = (int) 0
0x449: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x44a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x44b: Pop(1); Push(Sqrt(Stack[-1]))
0x44c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x44d: Stack[-5] = -Stack[-6]; Pop(0);
0x44e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x44f: PushEmpty(cvector, cvector)
0x450: Push(CVector(0.0, 1.0, 0.0))
0x451: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x452: Call2 0x4fa

0x453: Pop(1)
0x454: Push((int) 25)
0x455: Pop(2); Push(Stack[-2] * Stack[-1]);
0x456: Pop(2); Push(Stack[-2] + Stack[-1]);
0x457: Push(CVector(0.0, 10.0, 0.0))
0x458: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x459: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x45a: @ IsOverrideActive(Stack[-2])
0x45b: Pop(0)
0x45c: Push(Stack[-2])
0x45d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x45e: Stack[-21] = (bool) 0
0x45f: Return(); Pop(18)

0x460: @ StopWorld()
0x461: Pop(0)
0x462: Push((bool) 1)
0x463: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x464: Pop(1)
0x465: Push(CvectorIndex(Stack[-4], 0))
0x466: Push(CvectorIndex(Stack[-5], 2))
0x467: @ Rotate(Stack[-2], Stack[-1])
0x468: Pop(2)
0x469: PushEmpty(bool)
0x46a: Call2 0x5bf

0x46b: Pop(0)
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: GOTO 0x476

0x46e: Push("head")
0x46f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x470: Pop(1)
0x471: Push(Stack[-1])
0x472: IF (Stack[-1] == 0) GOTO 0x476; Pop(1)

0x473: Push("head")
0x474: @ LookAsyncCamera(Stack[-1])
0x475: Pop(1)
0x476: @ CameraWaitForPlayFinish()
0x477: Pop(0)
0x478: @ ResumeWorld()
0x479: Pop(0)
0x47a: Stack[-21] = (bool) 1
0x47b: Return(); Pop(18)

0x47c: PushEmpty(bool, bool)
0x47d: Push((bool) 1)
0x47e: @ CameraSwitchToNormal(Stack[-1])
0x47f: Pop(1)
0x480: PushEmpty(bool)
0x481: Call2 0x5bf

0x482: Pop(0)
0x483: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x484: GOTO 0x48d

0x485: Push("head")
0x486: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x487: Pop(1)
0x488: Push(Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x48a: Push("head")
0x48b: @ UnlookAsync(Stack[-1])
0x48c: Pop(1)
0x48d: Return(); Pop(2)

0x48e: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x48f: @@ GetPosition(Stack[-7])
0x490: Pop(0)
0x491: @@ GetEyesHeight(Stack[-8])
0x492: Pop(0)
0x493: Push(CvectorIndex(Stack[-7], 1))
0x494: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x495: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x496: @ GetPosition(Stack[-6])
0x497: Pop(0)
0x498: @ GetEyesHeight(Stack[-8])
0x499: Pop(0)
0x49a: Push(CvectorIndex(Stack[-6], 1))
0x49b: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x49c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x49d: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x49e: Push(CvectorIndex(Stack[-5], 1))
0x49f: Stack[-1] = (int) 0
0x4a0: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x4a1: Pop(0); Push(Stack[-5] | Stack[-5]);
0x4a2: Pop(1); Push(Sqrt(Stack[-1]))
0x4a3: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x4a4: Stack[-4] = -Stack[-5]; Pop(0);
0x4a5: Pop(0); Push(Stack[-5] * Stack[-17]);
0x4a6: Push(CVector(0.0, 10.0, 0.0))
0x4a7: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x4a8: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x4a9: @ IsOverrideActive(Stack[-1])
0x4aa: Pop(0)
0x4ab: Push(Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x4ad: Stack[-19] = (bool) 0
0x4ae: Return(); Pop(16)

0x4af: @ StopWorld()
0x4b0: Pop(0)
0x4b1: Push((bool) 1)
0x4b2: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x4b3: Pop(1)
0x4b4: Push(CvectorIndex(Stack[-3], 0))
0x4b5: Push(CvectorIndex(Stack[-4], 2))
0x4b6: @ Rotate(Stack[-2], Stack[-1])
0x4b7: Pop(2)
0x4b8: @ CameraWaitForPlayFinish()
0x4b9: Pop(0)
0x4ba: @ ResumeWorld()
0x4bb: Pop(0)
0x4bc: Stack[-19] = (bool) 1
0x4bd: Return(); Pop(16)

0x4be: PushEmpty()
0x4bf: Push((bool) 1)
0x4c0: @ CameraSwitchToNormal(Stack[-1])
0x4c1: Pop(1)
0x4c2: Return(); Pop(0)

0x4c3: PushEmpty(bool, float, float, bool, float, float)
0x4c4: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4c5: Pop(0)
0x4c6: Push(Stack[-3])
0x4c7: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4c9: Pop(0)
0x4ca: Push((bool) 0)
0x4cb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(1)
0x4cd: GOTO 0x4d2

0x4ce: Push("Can't find lsh animation : ")
0x4cf: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4d0: @ Trace(Stack[-1])
0x4d1: Pop(1)
0x4d2: Return(); Pop(6)

0x4d3: PushEmpty(bool, float, float, bool, float, float)
0x4d4: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4d5: Pop(0)
0x4d6: Push(Stack[-3])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4d9: Pop(0)
0x4da: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4db: Pop(0)
0x4dc: GOTO 0x4e1

0x4dd: Push("Can't find lsh animation : ")
0x4de: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4df: @ Trace(Stack[-1])
0x4e0: Pop(1)
0x4e1: Return(); Pop(6)

0x4e2: PushEmpty(float, cvector, float, cvector)
0x4e3: @@ GetEyesHeight(Stack[-2])
0x4e4: Pop(0)
0x4e5: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4e6: Push(CvectorIndex(Stack[-1], 1))
0x4e7: Stack[-1] = Stack[-3]
0x4e8: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4e9: Push("head")
0x4ea: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x4eb: Pop(1)
0x4ec: Return(); Pop(4)

0x4ed: PushEmpty(bool)
0x4ee: Call2 0x5bf

0x4ef: Pop(0)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4f1: @ lshStopSpeech()
0x4f2: Pop(0)
0x4f3: Return(); Pop(0)

0x4f4: PushEmpty(object, object)
0x4f5: @ self(Stack[-1])
0x4f6: Pop(0)
0x4f7: Stack[-3] = Stack[-1]
0x4f8: Return(); Pop(2)

0x4f9: Stack[-1] = 0
0x4fa: PushEmpty(float, float)
0x4fb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x4fc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x4fd: Push((float)0.0)
0x4fe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4ff: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x500: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x501: Return(); Pop(2)

0x502: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x503: Return(); Pop(2)

0x504: PushEmpty(int, int)
0x505: @ GetVariable(Stack[-3], Stack[-1])
0x506: Pop(0)
0x507: Stack[-4] = Stack[-1]
0x508: Return(); Pop(2)

0x509: PushEmpty(int, bool, int, bool)
0x50a: @ GetInvItemByName(Stack[-2], Stack[-5])
0x50b: Pop(0)
0x50c: @@ HasItem(Stack[-2], Stack[-1])
0x50d: Pop(0)
0x50e: Stack[-7] = Stack[-1]
0x50f: Return(); Pop(4)

0x510: PushEmpty(float, float)
0x511: @ GetGameTime(Stack[-1])
0x512: Pop(0)
0x513: Push((int) 1)
0x514: PushEmpty(int)
0x515: Push((int) 24)
0x516: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x517: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x518: Return(); Pop(2)

0x519: PushEmpty(string, string)
0x51a: Stack[-1] = "idle"
0x51b: Push(Stack[-3])
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51e: Stack[-4] = Stack[-1]
0x51f: Return(); Pop(2)

0x520: PushEmpty(int, bool, int, bool)
0x521: Stack[-2] = (int) 0
0x522: Push("all")
0x523: PushEmpty(string, int)
0x524: Stack[-1] = Stack[-5]
0x525: Call2 0x519

0x526: Pop(1)
0x527: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x528: Pop(2)
0x529: Pop(0); Push((bool) Stack[-1] == 0)
0x52a: IF (Stack[-1] == 0) GOTO 0x52c; Pop(1)

0x52b: GOTO 0x52f

0x52c: Push((int) 1)
0x52d: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52e: GOTO 0x522

0x52f: Stack[-5] = Stack[-2]
0x530: Return(); Pop(4)

0x531: PushEmpty(int, int, int, int)
0x532: PushEmpty(int)
0x533: Call2 0x510

0x534: Stack[-3] = Stack[-1]
0x535: Pop(1)
0x536: Push("Gatherer2_")
0x537: Pop(1); Push(Stack[-1] + Stack[-3]);
0x538: Push((int) 1)
0x539: @ SetVariable(Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: Push("blood")
0x53c: Push((int) 1)
0x53d: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(2)
0x53f: Return(); Pop(4)

0x540: PushEmpty()
0x541: Push("oobSysGatherer2_1")
0x542: Push((int) 1)
0x543: @ SetVariable(Stack[-2], Stack[-1])
0x544: Pop(2)
0x545: Return(); Pop(0)

0x546: PushEmpty()
0x547: Push("playsound")
0x548: Push("giveitem")
0x549: @ TriggerWorld(Stack[-2], Stack[-1])
0x54a: Pop(2)
0x54b: Return(); Pop(0)

0x54c: PushEmpty()
0x54d: Push((int) 1000)
0x54e: @@ SetReturnValue(Stack[-1])
0x54f: Pop(1)
0x550: Return(); Pop(0)

0x551: PushEmpty()
0x552: PushEmpty(int, string)
0x553: Stack[-1] = "oobSysGatherer2_1"
0x554: Call2 0x504

0x555: Pop(1)
0x556: Push((int) 0)
0x557: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x558: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x559: Stack[-2] = (bool) 1
0x55a: Return(); Pop(0)

0x55b: Stack[-2] = (bool) 0
0x55c: Return(); Pop(0)

0x55d: PushEmpty()
0x55e: PushEmpty(bool, object)
0x55f: Stack[-1] = Stack[-3]
0x560: Call2 0x572

0x561: Pop(1)
0x562: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x563: Stack[-2] = (bool) 1
0x564: Return(); Pop(0)

0x565: Stack[-2] = (bool) 0
0x566: Return(); Pop(0)

0x567: PushEmpty()
0x568: PushEmpty(bool, object, string)
0x569: Stack[-2] = Stack[-4]
0x56a: Stack[-1] = "blood"
0x56b: Call2 0x509

0x56c: Pop(2)
0x56d: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x56e: Stack[-2] = (bool) 1
0x56f: Return(); Pop(0)

0x570: Stack[-2] = (bool) 0
0x571: Return(); Pop(0)

0x572: PushEmpty(int, int, int, int)
0x573: PushEmpty(int)
0x574: Call2 0x510

0x575: Stack[-3] = Stack[-1]
0x576: Pop(1)
0x577: Push("Gatherer2_")
0x578: Pop(1); Push(Stack[-1] + Stack[-3]);
0x579: @ GetVariable(Stack[-1], Stack[-2])
0x57a: Pop(1)
0x57b: Push((int) 0)
0x57c: Stack[-7] = Stack[-2] != Stack[-1]; Pop(1);
0x57d: Return(); Pop(4)

0x57e: PushEmpty(bool, int, bool, int)
0x57f: Push((int) 0)
0x580: @ ClearSubContainer(Stack[-1])
0x581: Pop(1)
0x582: Push((int) 10)
0x583: @ irand(Stack[-2], Stack[-1])
0x584: Pop(1)
0x585: Push((int) 3)
0x586: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x587: PushEmpty(int, string)
0x588: Stack[-1] = "grass_savyur"
0x589: Call2 0x59b

0x58a: Pop(1)
0x58b: Push((int) 0)
0x58c: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x58d: Pop(2)
0x58e: Push((int) 10)
0x58f: @ irand(Stack[-2], Stack[-1])
0x590: Pop(1)
0x591: Push((int) 3)
0x592: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x593: PushEmpty(int, string)
0x594: Stack[-1] = "grass_white_plet"
0x595: Call2 0x59b

0x596: Pop(1)
0x597: Push((int) 0)
0x598: @ AddItem(Stack[-4], Stack[-2], Stack[-1], Stack[-3])
0x599: Pop(2)
0x59a: Return(); Pop(4)

0x59b: PushEmpty(int, int)
0x59c: @ GetInvItemByName(Stack[-1], Stack[-3])
0x59d: Pop(0)
0x59e: Stack[-4] = Stack[-1]
0x59f: Return(); Pop(2)

0x5a0: PushEmpty(int, int)
0x5a1: Push("branch")
0x5a2: @ GetVariable(Stack[-1], Stack[-2])
0x5a3: Pop(1)
0x5a4: Push((int) 0)
0x5a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5a6: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x5a7: Stack[-3] = (int) 1
0x5a8: Return(); Pop(2)

0x5a9: GOTO 0x5af

0x5aa: Push((int) 1)
0x5ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ac: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ad: Stack[-3] = (int) 2
0x5ae: Return(); Pop(2)

0x5af: Stack[-3] = (int) 3
0x5b0: Return(); Pop(2)

0x5b1: PushEmpty(int, int)
0x5b2: Push("branch")
0x5b3: @ GetVariable(Stack[-1], Stack[-2])
0x5b4: Pop(1)
0x5b5: Stack[-3] = Stack[-1]
0x5b6: Return(); Pop(2)

0x5b7: Stack[-1] = (int) 521048
0x5b8: Return(); Pop(0)

0x5b9: Stack[-1] = (int) 521047
0x5ba: Return(); Pop(0)

0x5bb: Stack[-1] = "ui/NPC_Morlok.png"
0x5bc: Return(); Pop(0)

0x5bd: Stack[-1] = "ui/NPC_Morlok_b.png"
0x5be: Return(); Pop(0)

0x5bf: Stack[-1] = (bool) 0
0x5c0: Return(); Pop(0)

