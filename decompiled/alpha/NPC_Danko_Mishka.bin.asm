GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	Neutral
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	No
	ui/NPC_Mishka.png
	ood1Mishka1
	ood1Mishka2
	ood1Mishka3
	d1q04
	d1q04MishkaGotoSpi4ka
	pt_map_spi4ka
	AddMark
	ShowMap
	d3q02MishkaGotoMladVlad
	pt_map_maldvlad
	pt_map_mladvlad
	ood6Mishka1
	KnowMishka
	d3q02
	d6q01
	KnowLaska
	KnowSpi4ka
	KnowKapella
	KnowMyth
	KnowPredictions
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	player
	Adding diary entry

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	Trace (1 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	lshWaitForAnimEnd (1 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	CreateDiaryEntry (4 args)

RunOp = 0x6
RunTask = 1

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x3 Vars = ()
	GTASK_1  Params = 0
		EVENT_6 Op = 0x1d Vars = ()
		EVENT_0 Op = 0x23 Vars = (object)
		EVENT_10 Op = 0x29 Vars = (object)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc4 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x263 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5d5 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x769 Vars = (int, int)


0x0: @ Hold()
0x1: Pop(0)
0x2: Return(); Pop(0)

0x3: @ StopGroup0()
0x4: Pop(0)
0x5: Return(); Pop(0)

0x6: PushEmpty()
0x7: Call 0xa2e

0x8: Pop(0)
0x9: PushEmpty(bool)
0xa: Call 0x814

0xb: Pop(0)
0xc: Pop(1); Push((bool) Stack[-1] == 0)
0xd: IF (Stack[-1] == 0) GOTO 0x13; Pop(1)

0xe: PushEmpty()
0xf: Push(-0, 0); TaskCall(0)
0x10: Call 0x0

0x11: Pop(-0, 0); TaskReturn
0x12: Pop(0)
0x13: PushEmpty(string)
0x14: Stack[-1] = "Neutral"
0x15: Call 0x855

0x16: Pop(1)
0x17: @ lshWaitForAnimEnd()
0x18: Pop(0)
0x19: GOTO 0x13

0x1a: @ Hold()
0x1b: Pop(0)
0x1c: Return(); Pop(0)

0x1d: PushEmpty()
0x1e: Push(-0, 0); TaskCall(0)
0x1f: Call 0x0

0x20: Pop(-0, 0); TaskReturn
0x21: Pop(0)
0x22: Return(); Pop(0)

0x23: PushEmpty()
0x24: PushEmpty(object)
0x25: Stack[-1] = Stack[-2]
0x26: Call 0xa32

0x27: Pop(1)
0x28: Return(); Pop(0)

0x29: PushEmpty()
0x2a: PushEmpty(bool, object)
0x2b: Stack[-1] = Stack[-3]
0x2c: Call 0x808

0x2d: Pop(2)
0x2e: @ WaitForAnimEnd()
0x2f: Pop(0)
0x30: Return(); Pop(0)

0x31: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x32: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x33: PushEmpty(bool, object)
0x34: Stack[-1] = Stack[-11]
0x35: Call 0x819

0x36: Pop(1)
0x37: Pop(1); Push((bool) Stack[-1] == 0)
0x38: IF (Stack[-1] == 0) GOTO 0x3b; Pop(1)

0x39: Stack[-10] = (int) -2
0x3a: Return(); Pop(8)

0x3b: @ CreateDialog(Stack[-4])
0x3c: Pop(0)
0x3d: PushEmpty(int)
0x3e: Call 0x89a

0x3f: Pop(0)
0x40: @@ SetNPCName(Stack[-1])
0x41: Pop(1)
0x42: PushEmpty(string)
0x43: Call 0x89c

0x44: Pop(0)
0x45: @@ SetPhoto(Stack[-1])
0x46: Pop(1)
0x47: PushEmpty(int)
0x48: Call 0x9fd

0x49: Pop(0)
0x4a: @@ SetPlayerName(Stack[-1])
0x4b: Pop(1)
0x4c: Stack[-2] = (int) -1
0x4d: @ IsOverrideActive(Stack[-3])
0x4e: Pop(0)
0x4f: Push(Stack[-3])
0x50: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x51: Stack[-10] = (int) -2
0x52: Return(); Pop(8)

0x53: @ DoDialog(Stack[-4])
0x54: Pop(0)
0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[-11]
0x57: Stack[-1] = Stack[-6]
0x58: Push(-2, 4); TaskCall(3)
0x59: Call 0x70

0x5a: Pop(-2, 4); TaskReturn
0x5b: Pop(2)
0x5c: @@ IsDialogEnd(Stack[-1])
0x5d: Pop(0)
0x5e: Pop(0); Push((bool) Stack[-1] == 0)
0x5f: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x60: @ sync()
0x61: Pop(0)
0x62: @@ IsDialogEnd(Stack[-1])
0x63: Pop(0)
0x64: GOTO 0x5e

0x65: PushEmpty(object)
0x66: Stack[-1] = Stack[-10]
0x67: Call 0x851

0x68: Pop(1)
0x69: @ StopDialog(Stack[-4])
0x6a: Pop(0)
0x6b: @@ GetReturnValue(Stack[-2])
0x6c: Pop(0)
0x6d: Stack[-10] = Stack[-2]
0x6e: Return(); Pop(8)

0x6f: Stack[-4] = 0
0x70: PushEmpty()
0x71: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x72: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x73: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x74: Push((int) 1)
0x75: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x76: PushEmpty(object, object)
0x77: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x79: Call 0x906

0x7a: Pop(2)
0x7b: PushEmpty(string)
0x7c: Stack[-1] = "Neutral"
0x7d: Call 0xb4

0x7e: Pop(1)
0x7f: Push((int) 457)
0x80: @@ SetMessage(Stack[-1])
0x81: Pop(1)
0x82: @@ ClearReplies()
0x83: Pop(0)
0x84: Push((int) 458)
0x85: Push((int) 530)
0x86: Push((int) 527)
0x87: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88: Pop(3)
0x89: Push((int) 459)
0x8a: Push((int) 532)
0x8b: Push((int) 528)
0x8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d: Pop(3)
0x8e: Push((int) 460)
0x8f: Push((int) 530)
0x90: Push((int) 529)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: GOTO 0x96

0x94: Return(); Pop(0)

0x95: GOTO 0x74

0x96: PushEmpty(bool)
0x97: Call 0x89e

0x98: Pop(0)
0x99: IF (Stack[-1] == 0) GOTO 0xa5; Pop(1)

0x9a: @ lshWaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: PushEmpty(string)
0xa0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa1: Call 0x855

0xa2: Pop(1)
0xa3: GOTO 0x9a

0xa4: GOTO 0xb3

0xa5: Push("all")
0xa6: Push("idle")
0xa7: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8: Pop(2)
0xa9: @ WaitForAnimEnd()
0xaa: Pop(0)
0xab: Push( Stack[3 + Tasks[-1].StackPointer] )
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: GOTO 0xb3

0xae: Push("all")
0xaf: Push("idle")
0xb0: @ PlayAnimation(Stack[-2], Stack[-1])
0xb1: Pop(2)
0xb2: GOTO 0xa9

0xb3: Return(); Pop(0)

0xb4: PushEmpty()
0xb5: PushEmpty(bool)
0xb6: Call 0x89e

0xb7: Pop(0)
0xb8: Pop(1); Push((bool) Stack[-1] == 0)
0xb9: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xba: Return(); Pop(0)

0xbb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Return(); Pop(0)

0xbe: PushEmpty(string)
0xbf: Stack[-1] = Stack[-2]
0xc0: Call 0x855

0xc1: Pop(1)
0xc2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc3: Return(); Pop(0)

0xc4: PushEmpty()
0xc5: Push((int) 1)
0xc6: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0xc7: PushEmpty()
0xc8: Call 0x867

0xc9: Pop(0)
0xca: Push((int) 526)
0xcb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call 0x906

0xd1: Pop(2)
0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call 0xb4

0xd5: Pop(1)
0xd6: Push((int) 457)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 458)
0xdc: Push((int) 530)
0xdd: Push((int) 527)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 459)
0xe1: Push((int) 532)
0xe2: Push((int) 528)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Push((int) 460)
0xe6: Push((int) 530)
0xe7: Push((int) 529)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Return(); Pop(0)

0xeb: Push((int) 532)
0xec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call 0xb4

0xf1: Pop(1)
0xf2: Push((int) 462)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 466)
0xf8: Push((int) 538)
0xf9: Push((int) 536)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 467)
0xfd: Push((int) -1)
0xfe: Push((int) 537)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 538)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call 0xb4

0x108: Pop(1)
0x109: Push((int) 468)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 470)
0x10f: Push((int) -1)
0x110: Push((int) 540)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Push((int) 471)
0x114: Push((int) -1)
0x115: Push((int) 541)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Return(); Pop(0)

0x119: Push((int) 530)
0x11a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x11c: PushEmpty(string)
0x11d: Stack[-1] = "Neutral"
0x11e: Call 0xb4

0x11f: Pop(1)
0x120: Push((int) 461)
0x121: @@ SetMessage(Stack[-1])
0x122: Pop(1)
0x123: @@ ClearReplies()
0x124: Pop(0)
0x125: Push((int) 463)
0x126: Push((int) 535)
0x127: Push((int) 533)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Push((int) 464)
0x12b: Push((int) -1)
0x12c: Push((int) 534)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 535)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral"
0x135: Call 0xb4

0x136: Pop(1)
0x137: Push((int) 465)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: Push((int) 6269)
0x13d: Push((int) -1)
0x13e: Push((int) 6939)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x143: PushEmpty(bool)
0x144: Call 0x89e

0x145: Pop(0)
0x146: IF (Stack[-1] == 0) GOTO 0x14a; Pop(1)

0x147: @ lshStopAnimation()
0x148: Pop(0)
0x149: GOTO 0x14c

0x14a: @ StopAnimation()
0x14b: Pop(0)
0x14c: Return(); Pop(0)

0x14d: GOTO 0xc5

0x14e: Return(); Pop(0)

0x14f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x150: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x151: PushEmpty(bool, object)
0x152: Stack[-1] = Stack[-11]
0x153: Call 0x819

0x154: Pop(1)
0x155: Pop(1); Push((bool) Stack[-1] == 0)
0x156: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x157: Stack[-10] = (int) -2
0x158: Return(); Pop(8)

0x159: @ CreateDialog(Stack[-4])
0x15a: Pop(0)
0x15b: PushEmpty(int)
0x15c: Call 0x89a

0x15d: Pop(0)
0x15e: @@ SetNPCName(Stack[-1])
0x15f: Pop(1)
0x160: PushEmpty(string)
0x161: Call 0x89c

0x162: Pop(0)
0x163: @@ SetPhoto(Stack[-1])
0x164: Pop(1)
0x165: PushEmpty(int)
0x166: Call 0x9fd

0x167: Pop(0)
0x168: @@ SetPlayerName(Stack[-1])
0x169: Pop(1)
0x16a: Stack[-2] = (int) -1
0x16b: @ IsOverrideActive(Stack[-3])
0x16c: Pop(0)
0x16d: Push(Stack[-3])
0x16e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16f: Stack[-10] = (int) -2
0x170: Return(); Pop(8)

0x171: @ DoDialog(Stack[-4])
0x172: Pop(0)
0x173: PushEmpty(object, object)
0x174: Stack[-2] = Stack[-11]
0x175: Stack[-1] = Stack[-6]
0x176: Push(-2, 4); TaskCall(5)
0x177: Call 0x18e

0x178: Pop(-2, 4); TaskReturn
0x179: Pop(2)
0x17a: @@ IsDialogEnd(Stack[-1])
0x17b: Pop(0)
0x17c: Pop(0); Push((bool) Stack[-1] == 0)
0x17d: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17e: @ sync()
0x17f: Pop(0)
0x180: @@ IsDialogEnd(Stack[-1])
0x181: Pop(0)
0x182: GOTO 0x17c

0x183: PushEmpty(object)
0x184: Stack[-1] = Stack[-10]
0x185: Call 0x851

0x186: Pop(1)
0x187: @ StopDialog(Stack[-4])
0x188: Pop(0)
0x189: @@ GetReturnValue(Stack[-2])
0x18a: Pop(0)
0x18b: Stack[-10] = Stack[-2]
0x18c: Return(); Pop(8)

0x18d: Stack[-4] = 0
0x18e: PushEmpty()
0x18f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x190: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x191: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x192: Push((int) 1)
0x193: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 0
0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call 0x90c

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call 0x930

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 1
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = "Neutral"
0x1a4: Call 0x253

0x1a5: Pop(1)
0x1a6: Push((int) 5647)
0x1a7: @@ SetMessage(Stack[-1])
0x1a8: Pop(1)
0x1a9: @@ ClearReplies()
0x1aa: Pop(0)
0x1ab: Push((int) 5648)
0x1ac: Push((int) 6756)
0x1ad: Push((int) 6227)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: Push((int) 5671)
0x1b1: Push((int) 6750)
0x1b2: Push((int) 6252)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: GOTO 0x235

0x1b6: PushEmpty(bool)
0x1b7: Stack[-1] = (bool) 0
0x1b8: PushEmpty(bool, object)
0x1b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ba: Call 0x918

0x1bb: Pop(1)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Call 0x90c

0x1c0: Pop(1)
0x1c1: Pop(1); Push((bool) Stack[-1] == 0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Stack[-1] = (bool) 1
0x1c4: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1c5: PushEmpty(string)
0x1c6: Stack[-1] = "Neutral"
0x1c7: Call 0x253

0x1c8: Pop(1)
0x1c9: Push((int) 5659)
0x1ca: @@ SetMessage(Stack[-1])
0x1cb: Pop(1)
0x1cc: @@ ClearReplies()
0x1cd: Pop(0)
0x1ce: Push((int) 5660)
0x1cf: Push((int) 6241)
0x1d0: Push((int) 6240)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Push((int) 5670)
0x1d4: Push((int) 6241)
0x1d5: Push((int) 6250)
0x1d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d7: Pop(3)
0x1d8: GOTO 0x235

0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call 0x924

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1de: PushEmpty(string)
0x1df: Stack[-1] = "Neutral"
0x1e0: Call 0x253

0x1e1: Pop(1)
0x1e2: Push((int) 5649)
0x1e3: @@ SetMessage(Stack[-1])
0x1e4: Pop(1)
0x1e5: @@ ClearReplies()
0x1e6: Pop(0)
0x1e7: Push((int) 5650)
0x1e8: Push((int) 6230)
0x1e9: Push((int) 6229)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Push((int) 5658)
0x1ed: Push((int) 6230)
0x1ee: Push((int) 6237)
0x1ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f0: Pop(3)
0x1f1: GOTO 0x235

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Neutral"
0x1f4: Call 0x253

0x1f5: Pop(1)
0x1f6: Push((int) 8187)
0x1f7: @@ SetMessage(Stack[-1])
0x1f8: Pop(1)
0x1f9: @@ ClearReplies()
0x1fa: Pop(0)
0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Call 0x989

0x1fe: Pop(1)
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: Push((int) 8191)
0x201: Push((int) 9041)
0x202: Push((int) 9014)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: PushEmpty(bool, object)
0x206: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x207: Call 0x995

0x208: Pop(1)
0x209: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20a: Push((int) 8192)
0x20b: Push((int) 9040)
0x20c: Push((int) 9015)
0x20d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20e: Pop(3)
0x20f: PushEmpty(bool, object)
0x210: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x211: Call 0x97d

0x212: Pop(1)
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: Push((int) 8209)
0x215: Push((int) 9037)
0x216: Push((int) 9032)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: PushEmpty(bool, object)
0x21a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Call 0x965

0x21c: Pop(1)
0x21d: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x21e: Push((int) 8210)
0x21f: Push((int) 9038)
0x220: Push((int) 9033)
0x221: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x222: Pop(3)
0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call 0x971

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: Push((int) 8212)
0x229: Push((int) 9039)
0x22a: Push((int) 9035)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: Push((int) 8722)
0x22e: Push((int) -1)
0x22f: Push((int) 9559)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: GOTO 0x235

0x233: Return(); Pop(0)

0x234: GOTO 0x192

0x235: PushEmpty(bool)
0x236: Call 0x89e

0x237: Pop(0)
0x238: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x239: @ lshWaitForAnimEnd()
0x23a: Pop(0)
0x23b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x243

0x23e: PushEmpty(string)
0x23f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x240: Call 0x855

0x241: Pop(1)
0x242: GOTO 0x239

0x243: GOTO 0x252

0x244: Push("all")
0x245: Push("idle")
0x246: @ PlayAnimation(Stack[-2], Stack[-1])
0x247: Pop(2)
0x248: @ WaitForAnimEnd()
0x249: Pop(0)
0x24a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: GOTO 0x252

0x24d: Push("all")
0x24e: Push("idle")
0x24f: @ PlayAnimation(Stack[-2], Stack[-1])
0x250: Pop(2)
0x251: GOTO 0x248

0x252: Return(); Pop(0)

0x253: PushEmpty()
0x254: PushEmpty(bool)
0x255: Call 0x89e

0x256: Pop(0)
0x257: Pop(1); Push((bool) Stack[-1] == 0)
0x258: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x259: Return(); Pop(0)

0x25a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Return(); Pop(0)

0x25d: PushEmpty(string)
0x25e: Stack[-1] = Stack[-2]
0x25f: Call 0x855

0x260: Pop(1)
0x261: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x262: Return(); Pop(0)

0x263: PushEmpty()
0x264: Push((int) 1)
0x265: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x266: PushEmpty()
0x267: Call 0x867

0x268: Pop(0)
0x269: Push((int) 6780)
0x26a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x26c: PushEmpty(object, object)
0x26d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x26e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26f: Call 0x8a0

0x270: Pop(2)
0x271: PushEmpty(object, object)
0x272: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x273: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x274: Call 0x8b2

0x275: Pop(2)
0x276: PushEmpty(object, object)
0x277: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x278: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x279: Call 0x8bb

0x27a: Pop(2)
0x27b: PushEmpty(object, object)
0x27c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27e: Call 0x8cb

0x27f: Pop(2)
0x280: Push((int) 6783)
0x281: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x283: PushEmpty(object, object)
0x284: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x285: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x286: Call 0x8a0

0x287: Pop(2)
0x288: PushEmpty(object, object)
0x289: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x28b: Call 0x8b2

0x28c: Pop(2)
0x28d: PushEmpty(object, object)
0x28e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x290: Call 0x8bb

0x291: Pop(2)
0x292: PushEmpty(object, object)
0x293: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x294: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x295: Call 0x8cb

0x296: Pop(2)
0x297: Push((int) 6244)
0x298: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x299: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29a: PushEmpty(object, object)
0x29b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x29c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29d: Call 0x8a6

0x29e: Pop(2)
0x29f: Push((int) 6245)
0x2a0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: PushEmpty(object, object)
0x2a3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2a4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a5: Call 0x8a6

0x2a6: Pop(2)
0x2a7: Push((int) 6248)
0x2a8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: PushEmpty(object, object)
0x2ab: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ad: Call 0x8a6

0x2ae: Pop(2)
0x2af: Push((int) 6249)
0x2b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b2: PushEmpty(object, object)
0x2b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b5: Call 0x8a6

0x2b6: Pop(2)
0x2b7: Push((int) 6233)
0x2b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bf; Pop(1)

0x2ba: PushEmpty(object, object)
0x2bb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2bc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bd: Call 0x8ac

0x2be: Pop(2)
0x2bf: Push((int) 6234)
0x2c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c2: PushEmpty(object, object)
0x2c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c5: Call 0x8ac

0x2c6: Pop(2)
0x2c7: Push((int) 6235)
0x2c8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c9: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2ca: PushEmpty(object, object)
0x2cb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cd: Call 0x8ac

0x2ce: Pop(2)
0x2cf: Push((int) 6236)
0x2d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d2: PushEmpty(object, object)
0x2d3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d5: Call 0x8ac

0x2d6: Pop(2)
0x2d7: Push((int) 6226)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x2da: PushEmpty(bool)
0x2db: Stack[-1] = (bool) 0
0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2de: Call 0x90c

0x2df: Pop(1)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Call 0x930

0x2e4: Pop(1)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: Stack[-1] = (bool) 1
0x2e7: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2e8: PushEmpty(string)
0x2e9: Stack[-1] = "Neutral"
0x2ea: Call 0x253

0x2eb: Pop(1)
0x2ec: Push((int) 5647)
0x2ed: @@ SetMessage(Stack[-1])
0x2ee: Pop(1)
0x2ef: @@ ClearReplies()
0x2f0: Pop(0)
0x2f1: Push((int) 5648)
0x2f2: Push((int) 6756)
0x2f3: Push((int) 6227)
0x2f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f5: Pop(3)
0x2f6: Push((int) 5671)
0x2f7: Push((int) 6750)
0x2f8: Push((int) 6252)
0x2f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fa: Pop(3)
0x2fb: Return(); Pop(0)

0x2fc: PushEmpty(bool)
0x2fd: Stack[-1] = (bool) 0
0x2fe: PushEmpty(bool, object)
0x2ff: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x300: Call 0x918

0x301: Pop(1)
0x302: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x303: PushEmpty(bool, object)
0x304: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x305: Call 0x90c

0x306: Pop(1)
0x307: Pop(1); Push((bool) Stack[-1] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: Stack[-1] = (bool) 1
0x30a: IF (Stack[-1] == 0) GOTO 0x31f; Pop(1)

0x30b: PushEmpty(string)
0x30c: Stack[-1] = "Neutral"
0x30d: Call 0x253

0x30e: Pop(1)
0x30f: Push((int) 5659)
0x310: @@ SetMessage(Stack[-1])
0x311: Pop(1)
0x312: @@ ClearReplies()
0x313: Pop(0)
0x314: Push((int) 5660)
0x315: Push((int) 6241)
0x316: Push((int) 6240)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: Push((int) 5670)
0x31a: Push((int) 6241)
0x31b: Push((int) 6250)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Return(); Pop(0)

0x31f: PushEmpty(bool, object)
0x320: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x321: Call 0x924

0x322: Pop(1)
0x323: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x324: PushEmpty(string)
0x325: Stack[-1] = "Neutral"
0x326: Call 0x253

0x327: Pop(1)
0x328: Push((int) 5649)
0x329: @@ SetMessage(Stack[-1])
0x32a: Pop(1)
0x32b: @@ ClearReplies()
0x32c: Pop(0)
0x32d: Push((int) 5650)
0x32e: Push((int) 6230)
0x32f: Push((int) 6229)
0x330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(3)
0x332: Push((int) 5658)
0x333: Push((int) 6230)
0x334: Push((int) 6237)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Return(); Pop(0)

0x338: PushEmpty(string)
0x339: Stack[-1] = "Neutral"
0x33a: Call 0x253

0x33b: Pop(1)
0x33c: Push((int) 8187)
0x33d: @@ SetMessage(Stack[-1])
0x33e: Pop(1)
0x33f: @@ ClearReplies()
0x340: Pop(0)
0x341: PushEmpty(bool, object)
0x342: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x343: Call 0x989

0x344: Pop(1)
0x345: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x346: Push((int) 8191)
0x347: Push((int) 9041)
0x348: Push((int) 9014)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: PushEmpty(bool, object)
0x34c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34d: Call 0x995

0x34e: Pop(1)
0x34f: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x350: Push((int) 8192)
0x351: Push((int) 9040)
0x352: Push((int) 9015)
0x353: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x354: Pop(3)
0x355: PushEmpty(bool, object)
0x356: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x357: Call 0x97d

0x358: Pop(1)
0x359: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35a: Push((int) 8209)
0x35b: Push((int) 9037)
0x35c: Push((int) 9032)
0x35d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35e: Pop(3)
0x35f: PushEmpty(bool, object)
0x360: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x361: Call 0x965

0x362: Pop(1)
0x363: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x364: Push((int) 8210)
0x365: Push((int) 9038)
0x366: Push((int) 9033)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: PushEmpty(bool, object)
0x36a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36b: Call 0x971

0x36c: Pop(1)
0x36d: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36e: Push((int) 8212)
0x36f: Push((int) 9039)
0x370: Push((int) 9035)
0x371: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(3)
0x373: Push((int) 8722)
0x374: Push((int) -1)
0x375: Push((int) 9559)
0x376: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x377: Pop(3)
0x378: Return(); Pop(0)

0x379: Push((int) 9039)
0x37a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x37c: PushEmpty(string)
0x37d: Stack[-1] = "Neutral"
0x37e: Call 0x253

0x37f: Pop(1)
0x380: Push((int) 8216)
0x381: @@ SetMessage(Stack[-1])
0x382: Pop(1)
0x383: @@ ClearReplies()
0x384: Pop(0)
0x385: Push((int) 8721)
0x386: Push((int) -1)
0x387: Push((int) 9558)
0x388: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: Return(); Pop(0)

0x38b: Push((int) 9038)
0x38c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38d: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x38e: PushEmpty(string)
0x38f: Stack[-1] = "Neutral"
0x390: Call 0x253

0x391: Pop(1)
0x392: Push((int) 8215)
0x393: @@ SetMessage(Stack[-1])
0x394: Pop(1)
0x395: @@ ClearReplies()
0x396: Pop(0)
0x397: Push((int) 8720)
0x398: Push((int) -1)
0x399: Push((int) 9557)
0x39a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39b: Pop(3)
0x39c: Return(); Pop(0)

0x39d: Push((int) 9037)
0x39e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39f: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3a0: PushEmpty(string)
0x3a1: Stack[-1] = "Neutral"
0x3a2: Call 0x253

0x3a3: Pop(1)
0x3a4: Push((int) 8214)
0x3a5: @@ SetMessage(Stack[-1])
0x3a6: Pop(1)
0x3a7: @@ ClearReplies()
0x3a8: Pop(0)
0x3a9: Push((int) 8719)
0x3aa: Push((int) -1)
0x3ab: Push((int) 9556)
0x3ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ad: Pop(3)
0x3ae: Return(); Pop(0)

0x3af: Push((int) 9040)
0x3b0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3c1; Pop(1)

0x3b2: PushEmpty(string)
0x3b3: Stack[-1] = "Neutral"
0x3b4: Call 0x253

0x3b5: Pop(1)
0x3b6: Push((int) 8217)
0x3b7: @@ SetMessage(Stack[-1])
0x3b8: Pop(1)
0x3b9: @@ ClearReplies()
0x3ba: Pop(0)
0x3bb: Push((int) 8718)
0x3bc: Push((int) -1)
0x3bd: Push((int) 9555)
0x3be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(3)
0x3c0: Return(); Pop(0)

0x3c1: Push((int) 9041)
0x3c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c3: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Neutral"
0x3c6: Call 0x253

0x3c7: Pop(1)
0x3c8: Push((int) 8218)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: Push((int) 8717)
0x3ce: Push((int) -1)
0x3cf: Push((int) 9554)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 6230)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3ea; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call 0x253

0x3d9: Pop(1)
0x3da: Push((int) 5651)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 5652)
0x3e0: Push((int) 6232)
0x3e1: Push((int) 6231)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Push((int) 5657)
0x3e5: Push((int) -1)
0x3e6: Push((int) 6236)
0x3e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(3)
0x3e9: Return(); Pop(0)

0x3ea: Push((int) 6232)
0x3eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ec: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x3ed: PushEmpty(string)
0x3ee: Stack[-1] = "Neutral"
0x3ef: Call 0x253

0x3f0: Pop(1)
0x3f1: Push((int) 5653)
0x3f2: @@ SetMessage(Stack[-1])
0x3f3: Pop(1)
0x3f4: @@ ClearReplies()
0x3f5: Pop(0)
0x3f6: Push((int) 5654)
0x3f7: Push((int) -1)
0x3f8: Push((int) 6233)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Push((int) 5655)
0x3fc: Push((int) -1)
0x3fd: Push((int) 6234)
0x3fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ff: Pop(3)
0x400: Push((int) 5656)
0x401: Push((int) -1)
0x402: Push((int) 6235)
0x403: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x404: Pop(3)
0x405: Return(); Pop(0)

0x406: Push((int) 6241)
0x407: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x409: PushEmpty(string)
0x40a: Stack[-1] = "Neutral"
0x40b: Call 0x253

0x40c: Pop(1)
0x40d: Push((int) 5661)
0x40e: @@ SetMessage(Stack[-1])
0x40f: Pop(1)
0x410: @@ ClearReplies()
0x411: Pop(0)
0x412: Push((int) 5662)
0x413: Push((int) 6243)
0x414: Push((int) 6242)
0x415: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x416: Pop(3)
0x417: Push((int) 5666)
0x418: Push((int) 6247)
0x419: Push((int) 6246)
0x41a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41b: Pop(3)
0x41c: Return(); Pop(0)

0x41d: Push((int) 6247)
0x41e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x420: PushEmpty(string)
0x421: Stack[-1] = "Neutral"
0x422: Call 0x253

0x423: Pop(1)
0x424: Push((int) 5667)
0x425: @@ SetMessage(Stack[-1])
0x426: Pop(1)
0x427: @@ ClearReplies()
0x428: Pop(0)
0x429: Push((int) 5668)
0x42a: Push((int) -1)
0x42b: Push((int) 6248)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: Push((int) 5669)
0x42f: Push((int) -1)
0x430: Push((int) 6249)
0x431: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x432: Pop(3)
0x433: Return(); Pop(0)

0x434: Push((int) 6243)
0x435: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x436: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x437: PushEmpty(string)
0x438: Stack[-1] = "Neutral"
0x439: Call 0x253

0x43a: Pop(1)
0x43b: Push((int) 5663)
0x43c: @@ SetMessage(Stack[-1])
0x43d: Pop(1)
0x43e: @@ ClearReplies()
0x43f: Pop(0)
0x440: Push((int) 5664)
0x441: Push((int) -1)
0x442: Push((int) 6244)
0x443: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x444: Pop(3)
0x445: Push((int) 5665)
0x446: Push((int) -1)
0x447: Push((int) 6245)
0x448: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x449: Pop(3)
0x44a: Return(); Pop(0)

0x44b: Push((int) 6750)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x44e: PushEmpty(string)
0x44f: Stack[-1] = "Neutral"
0x450: Call 0x253

0x451: Pop(1)
0x452: Push((int) 6112)
0x453: @@ SetMessage(Stack[-1])
0x454: Pop(1)
0x455: @@ ClearReplies()
0x456: Pop(0)
0x457: Push((int) 6113)
0x458: Push((int) 6753)
0x459: Push((int) 6751)
0x45a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45b: Pop(3)
0x45c: Push((int) 6114)
0x45d: Push((int) 6753)
0x45e: Push((int) 6752)
0x45f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x460: Pop(3)
0x461: Return(); Pop(0)

0x462: Push((int) 6753)
0x463: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x464: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x465: PushEmpty(string)
0x466: Stack[-1] = "Neutral"
0x467: Call 0x253

0x468: Pop(1)
0x469: Push((int) 6115)
0x46a: @@ SetMessage(Stack[-1])
0x46b: Pop(1)
0x46c: @@ ClearReplies()
0x46d: Pop(0)
0x46e: Push((int) 6116)
0x46f: Push((int) 6768)
0x470: Push((int) 6755)
0x471: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x472: Pop(3)
0x473: Push((int) 6120)
0x474: Push((int) 6760)
0x475: Push((int) 6759)
0x476: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x477: Pop(3)
0x478: Return(); Pop(0)

0x479: Push((int) 6760)
0x47a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47b: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x47c: PushEmpty(string)
0x47d: Stack[-1] = "Neutral"
0x47e: Call 0x253

0x47f: Pop(1)
0x480: Push((int) 6121)
0x481: @@ SetMessage(Stack[-1])
0x482: Pop(1)
0x483: @@ ClearReplies()
0x484: Pop(0)
0x485: Push((int) 6124)
0x486: Push((int) 6768)
0x487: Push((int) 6763)
0x488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x489: Pop(3)
0x48a: Return(); Pop(0)

0x48b: Push((int) 6756)
0x48c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x4a2; Pop(1)

0x48e: PushEmpty(string)
0x48f: Stack[-1] = "Neutral"
0x490: Call 0x253

0x491: Pop(1)
0x492: Push((int) 6117)
0x493: @@ SetMessage(Stack[-1])
0x494: Pop(1)
0x495: @@ ClearReplies()
0x496: Pop(0)
0x497: Push((int) 6118)
0x498: Push((int) 6764)
0x499: Push((int) 6757)
0x49a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49b: Pop(3)
0x49c: Push((int) 6119)
0x49d: Push((int) 6765)
0x49e: Push((int) 6758)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: Return(); Pop(0)

0x4a2: Push((int) 6765)
0x4a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a4: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4a5: PushEmpty(string)
0x4a6: Stack[-1] = "Neutral"
0x4a7: Call 0x253

0x4a8: Pop(1)
0x4a9: Push((int) 6126)
0x4aa: @@ SetMessage(Stack[-1])
0x4ab: Pop(1)
0x4ac: @@ ClearReplies()
0x4ad: Pop(0)
0x4ae: Push((int) 6127)
0x4af: Push((int) 6768)
0x4b0: Push((int) 6766)
0x4b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b2: Pop(3)
0x4b3: Return(); Pop(0)

0x4b4: Push((int) 6764)
0x4b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4b7: PushEmpty(string)
0x4b8: Stack[-1] = "Neutral"
0x4b9: Call 0x253

0x4ba: Pop(1)
0x4bb: Push((int) 6125)
0x4bc: @@ SetMessage(Stack[-1])
0x4bd: Pop(1)
0x4be: @@ ClearReplies()
0x4bf: Pop(0)
0x4c0: Push((int) 6128)
0x4c1: Push((int) 6768)
0x4c2: Push((int) 6767)
0x4c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c4: Pop(3)
0x4c5: Push((int) 6132)
0x4c6: Push((int) 6775)
0x4c7: Push((int) 6774)
0x4c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c9: Pop(3)
0x4ca: Push((int) 6135)
0x4cb: Push((int) 6768)
0x4cc: Push((int) 6777)
0x4cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ce: Pop(3)
0x4cf: Return(); Pop(0)

0x4d0: Push((int) 6775)
0x4d1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4d3: PushEmpty(string)
0x4d4: Stack[-1] = "Neutral"
0x4d5: Call 0x253

0x4d6: Pop(1)
0x4d7: Push((int) 6133)
0x4d8: @@ SetMessage(Stack[-1])
0x4d9: Pop(1)
0x4da: @@ ClearReplies()
0x4db: Pop(0)
0x4dc: Push((int) 6134)
0x4dd: Push((int) 6768)
0x4de: Push((int) 6776)
0x4df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e0: Pop(3)
0x4e1: Return(); Pop(0)

0x4e2: Push((int) 6768)
0x4e3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e4: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4e5: PushEmpty(string)
0x4e6: Stack[-1] = "Neutral"
0x4e7: Call 0x253

0x4e8: Pop(1)
0x4e9: Push((int) 6129)
0x4ea: @@ SetMessage(Stack[-1])
0x4eb: Pop(1)
0x4ec: @@ ClearReplies()
0x4ed: Pop(0)
0x4ee: Push((int) 6130)
0x4ef: Push((int) 6773)
0x4f0: Push((int) 6772)
0x4f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f2: Pop(3)
0x4f3: Return(); Pop(0)

0x4f4: Push((int) 6773)
0x4f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f6: IF (Stack[-1] == 0) GOTO 0x510; Pop(1)

0x4f7: PushEmpty(string)
0x4f8: Stack[-1] = "Neutral"
0x4f9: Call 0x253

0x4fa: Pop(1)
0x4fb: Push((int) 6131)
0x4fc: @@ SetMessage(Stack[-1])
0x4fd: Pop(1)
0x4fe: @@ ClearReplies()
0x4ff: Pop(0)
0x500: PushEmpty(bool, object)
0x501: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x502: Call 0x971

0x503: Pop(1)
0x504: IF (Stack[-1] == 0) GOTO 0x50a; Pop(1)

0x505: Push((int) 6136)
0x506: Push((int) -1)
0x507: Push((int) 6780)
0x508: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x509: Pop(3)
0x50a: Push((int) 6137)
0x50b: Push((int) 6782)
0x50c: Push((int) 6781)
0x50d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50e: Pop(3)
0x50f: Return(); Pop(0)

0x510: Push((int) 6782)
0x511: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x512: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x513: PushEmpty(string)
0x514: Stack[-1] = "Neutral"
0x515: Call 0x253

0x516: Pop(1)
0x517: Push((int) 6138)
0x518: @@ SetMessage(Stack[-1])
0x519: Pop(1)
0x51a: @@ ClearReplies()
0x51b: Pop(0)
0x51c: Push((int) 6139)
0x51d: Push((int) -1)
0x51e: Push((int) 6783)
0x51f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x520: Pop(3)
0x521: Return(); Pop(0)

0x522: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x523: PushEmpty(bool)
0x524: Call 0x89e

0x525: Pop(0)
0x526: IF (Stack[-1] == 0) GOTO 0x52a; Pop(1)

0x527: @ lshStopAnimation()
0x528: Pop(0)
0x529: GOTO 0x52c

0x52a: @ StopAnimation()
0x52b: Pop(0)
0x52c: Return(); Pop(0)

0x52d: GOTO 0x264

0x52e: Return(); Pop(0)

0x52f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x530: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x531: PushEmpty(bool, object)
0x532: Stack[-1] = Stack[-11]
0x533: Call 0x819

0x534: Pop(1)
0x535: Pop(1); Push((bool) Stack[-1] == 0)
0x536: IF (Stack[-1] == 0) GOTO 0x539; Pop(1)

0x537: Stack[-10] = (int) -2
0x538: Return(); Pop(8)

0x539: @ CreateDialog(Stack[-4])
0x53a: Pop(0)
0x53b: PushEmpty(int)
0x53c: Call 0x89a

0x53d: Pop(0)
0x53e: @@ SetNPCName(Stack[-1])
0x53f: Pop(1)
0x540: PushEmpty(string)
0x541: Call 0x89c

0x542: Pop(0)
0x543: @@ SetPhoto(Stack[-1])
0x544: Pop(1)
0x545: PushEmpty(int)
0x546: Call 0x9fd

0x547: Pop(0)
0x548: @@ SetPlayerName(Stack[-1])
0x549: Pop(1)
0x54a: Stack[-2] = (int) -1
0x54b: @ IsOverrideActive(Stack[-3])
0x54c: Pop(0)
0x54d: Push(Stack[-3])
0x54e: IF (Stack[-1] == 0) GOTO 0x551; Pop(1)

0x54f: Stack[-10] = (int) -2
0x550: Return(); Pop(8)

0x551: @ DoDialog(Stack[-4])
0x552: Pop(0)
0x553: PushEmpty(object, object)
0x554: Stack[-2] = Stack[-11]
0x555: Stack[-1] = Stack[-6]
0x556: Push(-2, 4); TaskCall(7)
0x557: Call 0x56e

0x558: Pop(-2, 4); TaskReturn
0x559: Pop(2)
0x55a: @@ IsDialogEnd(Stack[-1])
0x55b: Pop(0)
0x55c: Pop(0); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x563; Pop(1)

0x55e: @ sync()
0x55f: Pop(0)
0x560: @@ IsDialogEnd(Stack[-1])
0x561: Pop(0)
0x562: GOTO 0x55c

0x563: PushEmpty(object)
0x564: Stack[-1] = Stack[-10]
0x565: Call 0x851

0x566: Pop(1)
0x567: @ StopDialog(Stack[-4])
0x568: Pop(0)
0x569: @@ GetReturnValue(Stack[-2])
0x56a: Pop(0)
0x56b: Stack[-10] = Stack[-2]
0x56c: Return(); Pop(8)

0x56d: Stack[-4] = 0
0x56e: PushEmpty()
0x56f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x570: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x571: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x572: Push((int) 1)
0x573: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x574: PushEmpty(string)
0x575: Stack[-1] = "Neutral"
0x576: Call 0x5c5

0x577: Pop(1)
0x578: Push((int) 10004)
0x579: @@ SetMessage(Stack[-1])
0x57a: Pop(1)
0x57b: @@ ClearReplies()
0x57c: Pop(0)
0x57d: PushEmpty(bool)
0x57e: Stack[-1] = (bool) 0
0x57f: PushEmpty(bool, object)
0x580: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x581: Call 0x93c

0x582: Pop(1)
0x583: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x584: PushEmpty(bool, object)
0x585: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x586: Call 0x948

0x587: Pop(1)
0x588: IF (Stack[-1] == 0) GOTO 0x58a; Pop(1)

0x589: Stack[-1] = (bool) 1
0x58a: IF (Stack[-1] == 0) GOTO 0x590; Pop(1)

0x58b: Push((int) 10211)
0x58c: Push((int) 11256)
0x58d: Push((int) 11257)
0x58e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58f: Pop(3)
0x590: Push((int) 10005)
0x591: Push((int) 11028)
0x592: Push((int) 11027)
0x593: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x594: Pop(3)
0x595: Push((int) 10012)
0x596: Push((int) 11035)
0x597: Push((int) 11034)
0x598: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x599: Pop(3)
0x59a: Push((int) 10015)
0x59b: Push((int) -1)
0x59c: Push((int) 11037)
0x59d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59e: Pop(3)
0x59f: Push((int) 11383)
0x5a0: Push((int) -1)
0x5a1: Push((int) 12579)
0x5a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a3: Pop(3)
0x5a4: GOTO 0x5a7

0x5a5: Return(); Pop(0)

0x5a6: GOTO 0x572

0x5a7: PushEmpty(bool)
0x5a8: Call 0x89e

0x5a9: Pop(0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5b6; Pop(1)

0x5ab: @ lshWaitForAnimEnd()
0x5ac: Pop(0)
0x5ad: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x5af: GOTO 0x5b5

0x5b0: PushEmpty(string)
0x5b1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5b2: Call 0x855

0x5b3: Pop(1)
0x5b4: GOTO 0x5ab

0x5b5: GOTO 0x5c4

0x5b6: Push("all")
0x5b7: Push("idle")
0x5b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x5b9: Pop(2)
0x5ba: @ WaitForAnimEnd()
0x5bb: Pop(0)
0x5bc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5bd: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5be: GOTO 0x5c4

0x5bf: Push("all")
0x5c0: Push("idle")
0x5c1: @ PlayAnimation(Stack[-2], Stack[-1])
0x5c2: Pop(2)
0x5c3: GOTO 0x5ba

0x5c4: Return(); Pop(0)

0x5c5: PushEmpty()
0x5c6: PushEmpty(bool)
0x5c7: Call 0x89e

0x5c8: Pop(0)
0x5c9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5cb: Return(); Pop(0)

0x5cc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5cd: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5ce: Return(); Pop(0)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = Stack[-2]
0x5d1: Call 0x855

0x5d2: Pop(1)
0x5d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5d4: Return(); Pop(0)

0x5d5: PushEmpty()
0x5d6: Push((int) 1)
0x5d7: IF (Stack[-1] == 0) GOTO 0x6d1; Pop(1)

0x5d8: PushEmpty()
0x5d9: Call 0x867

0x5da: Pop(0)
0x5db: Push((int) 11390)
0x5dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5de: PushEmpty(object, object)
0x5df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e1: Call 0x8dd

0x5e2: Pop(2)
0x5e3: PushEmpty(object, object)
0x5e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5e6: Call 0x8db

0x5e7: Pop(2)
0x5e8: PushEmpty(object, object)
0x5e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5eb: Call 0x8f0

0x5ec: Pop(2)
0x5ed: Push((int) 11393)
0x5ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5ef: IF (Stack[-1] == 0) GOTO 0x5ff; Pop(1)

0x5f0: PushEmpty(object, object)
0x5f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f3: Call 0x8db

0x5f4: Pop(2)
0x5f5: PushEmpty(object, object)
0x5f6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5f7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f8: Call 0x8dd

0x5f9: Pop(2)
0x5fa: PushEmpty(object, object)
0x5fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5fd: Call 0x8f0

0x5fe: Pop(2)
0x5ff: Push((int) 11026)
0x600: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x601: IF (Stack[-1] == 0) GOTO 0x633; Pop(1)

0x602: PushEmpty(string)
0x603: Stack[-1] = "Neutral"
0x604: Call 0x5c5

0x605: Pop(1)
0x606: Push((int) 10004)
0x607: @@ SetMessage(Stack[-1])
0x608: Pop(1)
0x609: @@ ClearReplies()
0x60a: Pop(0)
0x60b: PushEmpty(bool)
0x60c: Stack[-1] = (bool) 0
0x60d: PushEmpty(bool, object)
0x60e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60f: Call 0x93c

0x610: Pop(1)
0x611: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x612: PushEmpty(bool, object)
0x613: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x614: Call 0x948

0x615: Pop(1)
0x616: IF (Stack[-1] == 0) GOTO 0x618; Pop(1)

0x617: Stack[-1] = (bool) 1
0x618: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x619: Push((int) 10211)
0x61a: Push((int) 11256)
0x61b: Push((int) 11257)
0x61c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61d: Pop(3)
0x61e: Push((int) 10005)
0x61f: Push((int) 11028)
0x620: Push((int) 11027)
0x621: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: Push((int) 10012)
0x624: Push((int) 11035)
0x625: Push((int) 11034)
0x626: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x627: Pop(3)
0x628: Push((int) 10015)
0x629: Push((int) -1)
0x62a: Push((int) 11037)
0x62b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62c: Pop(3)
0x62d: Push((int) 11383)
0x62e: Push((int) -1)
0x62f: Push((int) 12579)
0x630: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x631: Pop(3)
0x632: Return(); Pop(0)

0x633: Push((int) 11035)
0x634: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x635: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x636: PushEmpty(string)
0x637: Stack[-1] = "Neutral"
0x638: Call 0x5c5

0x639: Pop(1)
0x63a: Push((int) 10013)
0x63b: @@ SetMessage(Stack[-1])
0x63c: Pop(1)
0x63d: @@ ClearReplies()
0x63e: Pop(0)
0x63f: Push((int) 10014)
0x640: Push((int) -1)
0x641: Push((int) 11036)
0x642: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x643: Pop(3)
0x644: Return(); Pop(0)

0x645: Push((int) 11028)
0x646: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x647: IF (Stack[-1] == 0) GOTO 0x65c; Pop(1)

0x648: PushEmpty(string)
0x649: Stack[-1] = "Neutral"
0x64a: Call 0x5c5

0x64b: Pop(1)
0x64c: Push((int) 10006)
0x64d: @@ SetMessage(Stack[-1])
0x64e: Pop(1)
0x64f: @@ ClearReplies()
0x650: Pop(0)
0x651: Push((int) 10007)
0x652: Push((int) 11030)
0x653: Push((int) 11029)
0x654: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x655: Pop(3)
0x656: Push((int) 10011)
0x657: Push((int) -1)
0x658: Push((int) 11033)
0x659: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65a: Pop(3)
0x65b: Return(); Pop(0)

0x65c: Push((int) 11030)
0x65d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65e: IF (Stack[-1] == 0) GOTO 0x673; Pop(1)

0x65f: PushEmpty(string)
0x660: Stack[-1] = "Neutral"
0x661: Call 0x5c5

0x662: Pop(1)
0x663: Push((int) 10008)
0x664: @@ SetMessage(Stack[-1])
0x665: Pop(1)
0x666: @@ ClearReplies()
0x667: Pop(0)
0x668: Push((int) 10009)
0x669: Push((int) -1)
0x66a: Push((int) 11031)
0x66b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66c: Pop(3)
0x66d: Push((int) 10010)
0x66e: Push((int) -1)
0x66f: Push((int) 11032)
0x670: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x671: Pop(3)
0x672: Return(); Pop(0)

0x673: Push((int) 11256)
0x674: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x675: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x676: PushEmpty(string)
0x677: Stack[-1] = "Neutral"
0x678: Call 0x5c5

0x679: Pop(1)
0x67a: Push((int) 10210)
0x67b: @@ SetMessage(Stack[-1])
0x67c: Pop(1)
0x67d: @@ ClearReplies()
0x67e: Pop(0)
0x67f: Push((int) 10325)
0x680: Push((int) 11385)
0x681: Push((int) 11384)
0x682: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x683: Pop(3)
0x684: Return(); Pop(0)

0x685: Push((int) 11385)
0x686: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x687: IF (Stack[-1] == 0) GOTO 0x69c; Pop(1)

0x688: PushEmpty(string)
0x689: Stack[-1] = "Neutral"
0x68a: Call 0x5c5

0x68b: Pop(1)
0x68c: Push((int) 10326)
0x68d: @@ SetMessage(Stack[-1])
0x68e: Pop(1)
0x68f: @@ ClearReplies()
0x690: Pop(0)
0x691: Push((int) 10327)
0x692: Push((int) 11388)
0x693: Push((int) 11386)
0x694: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x695: Pop(3)
0x696: Push((int) 10328)
0x697: Push((int) 11388)
0x698: Push((int) 11387)
0x699: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69a: Pop(3)
0x69b: Return(); Pop(0)

0x69c: Push((int) 11388)
0x69d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69e: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x69f: PushEmpty(string)
0x6a0: Stack[-1] = "Neutral"
0x6a1: Call 0x5c5

0x6a2: Pop(1)
0x6a3: Push((int) 10329)
0x6a4: @@ SetMessage(Stack[-1])
0x6a5: Pop(1)
0x6a6: @@ ClearReplies()
0x6a7: Pop(0)
0x6a8: Push((int) 10330)
0x6a9: Push((int) -1)
0x6aa: Push((int) 11390)
0x6ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ac: Pop(3)
0x6ad: Push((int) 10331)
0x6ae: Push((int) 11392)
0x6af: Push((int) 11391)
0x6b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b1: Pop(3)
0x6b2: Return(); Pop(0)

0x6b3: Push((int) 11392)
0x6b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b5: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6b6: PushEmpty(string)
0x6b7: Stack[-1] = "Neutral"
0x6b8: Call 0x5c5

0x6b9: Pop(1)
0x6ba: Push((int) 10332)
0x6bb: @@ SetMessage(Stack[-1])
0x6bc: Pop(1)
0x6bd: @@ ClearReplies()
0x6be: Pop(0)
0x6bf: Push((int) 10333)
0x6c0: Push((int) -1)
0x6c1: Push((int) 11393)
0x6c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c3: Pop(3)
0x6c4: Return(); Pop(0)

0x6c5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6c6: PushEmpty(bool)
0x6c7: Call 0x89e

0x6c8: Pop(0)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6cd; Pop(1)

0x6ca: @ lshStopAnimation()
0x6cb: Pop(0)
0x6cc: GOTO 0x6cf

0x6cd: @ StopAnimation()
0x6ce: Pop(0)
0x6cf: Return(); Pop(0)

0x6d0: GOTO 0x5d6

0x6d1: Return(); Pop(0)

0x6d2: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6d3: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6d4: PushEmpty(bool, object)
0x6d5: Stack[-1] = Stack[-11]
0x6d6: Call 0x819

0x6d7: Pop(1)
0x6d8: Pop(1); Push((bool) Stack[-1] == 0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-10] = (int) -2
0x6db: Return(); Pop(8)

0x6dc: @ CreateDialog(Stack[-4])
0x6dd: Pop(0)
0x6de: PushEmpty(int)
0x6df: Call 0x89a

0x6e0: Pop(0)
0x6e1: @@ SetNPCName(Stack[-1])
0x6e2: Pop(1)
0x6e3: PushEmpty(string)
0x6e4: Call 0x89c

0x6e5: Pop(0)
0x6e6: @@ SetPhoto(Stack[-1])
0x6e7: Pop(1)
0x6e8: PushEmpty(int)
0x6e9: Call 0x9fd

0x6ea: Pop(0)
0x6eb: @@ SetPlayerName(Stack[-1])
0x6ec: Pop(1)
0x6ed: Stack[-2] = (int) -1
0x6ee: @ IsOverrideActive(Stack[-3])
0x6ef: Pop(0)
0x6f0: Push(Stack[-3])
0x6f1: IF (Stack[-1] == 0) GOTO 0x6f4; Pop(1)

0x6f2: Stack[-10] = (int) -2
0x6f3: Return(); Pop(8)

0x6f4: @ DoDialog(Stack[-4])
0x6f5: Pop(0)
0x6f6: PushEmpty(object, object)
0x6f7: Stack[-2] = Stack[-11]
0x6f8: Stack[-1] = Stack[-6]
0x6f9: Push(-2, 4); TaskCall(9)
0x6fa: Call 0x711

0x6fb: Pop(-2, 4); TaskReturn
0x6fc: Pop(2)
0x6fd: @@ IsDialogEnd(Stack[-1])
0x6fe: Pop(0)
0x6ff: Pop(0); Push((bool) Stack[-1] == 0)
0x700: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x701: @ sync()
0x702: Pop(0)
0x703: @@ IsDialogEnd(Stack[-1])
0x704: Pop(0)
0x705: GOTO 0x6ff

0x706: PushEmpty(object)
0x707: Stack[-1] = Stack[-10]
0x708: Call 0x851

0x709: Pop(1)
0x70a: @ StopDialog(Stack[-4])
0x70b: Pop(0)
0x70c: @@ GetReturnValue(Stack[-2])
0x70d: Pop(0)
0x70e: Stack[-10] = Stack[-2]
0x70f: Return(); Pop(8)

0x710: Stack[-4] = 0
0x711: PushEmpty()
0x712: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x713: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x714: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x715: Push((int) 1)
0x716: IF (Stack[-1] == 0) GOTO 0x73b; Pop(1)

0x717: PushEmpty(string)
0x718: Stack[-1] = "Neutral"
0x719: Call 0x759

0x71a: Pop(1)
0x71b: Push((int) 12800)
0x71c: @@ SetMessage(Stack[-1])
0x71d: Pop(1)
0x71e: @@ ClearReplies()
0x71f: Pop(0)
0x720: PushEmpty(bool)
0x721: Stack[-1] = (bool) 0
0x722: PushEmpty(bool, object)
0x723: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x724: Call 0x94d

0x725: Pop(1)
0x726: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x727: PushEmpty(bool, object)
0x728: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x729: Call 0x959

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x72d; Pop(1)

0x72c: Stack[-1] = (bool) 1
0x72d: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x72e: Push((int) 12801)
0x72f: Push((int) 14001)
0x730: Push((int) 14000)
0x731: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x732: Pop(3)
0x733: Push((int) 12813)
0x734: Push((int) -1)
0x735: Push((int) 14013)
0x736: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x737: Pop(3)
0x738: GOTO 0x73b

0x739: Return(); Pop(0)

0x73a: GOTO 0x715

0x73b: PushEmpty(bool)
0x73c: Call 0x89e

0x73d: Pop(0)
0x73e: IF (Stack[-1] == 0) GOTO 0x74a; Pop(1)

0x73f: @ lshWaitForAnimEnd()
0x740: Pop(0)
0x741: Push( Stack[3 + Tasks[-1].StackPointer] )
0x742: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x743: GOTO 0x749

0x744: PushEmpty(string)
0x745: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x746: Call 0x855

0x747: Pop(1)
0x748: GOTO 0x73f

0x749: GOTO 0x758

0x74a: Push("all")
0x74b: Push("idle")
0x74c: @ PlayAnimation(Stack[-2], Stack[-1])
0x74d: Pop(2)
0x74e: @ WaitForAnimEnd()
0x74f: Pop(0)
0x750: Push( Stack[3 + Tasks[-1].StackPointer] )
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: GOTO 0x758

0x753: Push("all")
0x754: Push("idle")
0x755: @ PlayAnimation(Stack[-2], Stack[-1])
0x756: Pop(2)
0x757: GOTO 0x74e

0x758: Return(); Pop(0)

0x759: PushEmpty()
0x75a: PushEmpty(bool)
0x75b: Call 0x89e

0x75c: Pop(0)
0x75d: Pop(1); Push((bool) Stack[-1] == 0)
0x75e: IF (Stack[-1] == 0) GOTO 0x760; Pop(1)

0x75f: Return(); Pop(0)

0x760: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x761: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x762: Return(); Pop(0)

0x763: PushEmpty(string)
0x764: Stack[-1] = Stack[-2]
0x765: Call 0x855

0x766: Pop(1)
0x767: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x768: Return(); Pop(0)

0x769: PushEmpty()
0x76a: Push((int) 1)
0x76b: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x76c: PushEmpty()
0x76d: Call 0x867

0x76e: Pop(0)
0x76f: Push((int) 14011)
0x770: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x771: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x772: PushEmpty(object, object)
0x773: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x774: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x775: Call 0x900

0x776: Pop(2)
0x777: Push((int) 13999)
0x778: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x779: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x77a: PushEmpty(string)
0x77b: Stack[-1] = "Neutral"
0x77c: Call 0x759

0x77d: Pop(1)
0x77e: Push((int) 12800)
0x77f: @@ SetMessage(Stack[-1])
0x780: Pop(1)
0x781: @@ ClearReplies()
0x782: Pop(0)
0x783: PushEmpty(bool)
0x784: Stack[-1] = (bool) 0
0x785: PushEmpty(bool, object)
0x786: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x787: Call 0x94d

0x788: Pop(1)
0x789: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78a: PushEmpty(bool, object)
0x78b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78c: Call 0x959

0x78d: Pop(1)
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: Stack[-1] = (bool) 1
0x790: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x791: Push((int) 12801)
0x792: Push((int) 14001)
0x793: Push((int) 14000)
0x794: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x795: Pop(3)
0x796: Push((int) 12813)
0x797: Push((int) -1)
0x798: Push((int) 14013)
0x799: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79a: Pop(3)
0x79b: Return(); Pop(0)

0x79c: Push((int) 14001)
0x79d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x79e: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x79f: PushEmpty(string)
0x7a0: Stack[-1] = "Neutral"
0x7a1: Call 0x759

0x7a2: Pop(1)
0x7a3: Push((int) 12802)
0x7a4: @@ SetMessage(Stack[-1])
0x7a5: Pop(1)
0x7a6: @@ ClearReplies()
0x7a7: Pop(0)
0x7a8: Push((int) 12803)
0x7a9: Push((int) 14003)
0x7aa: Push((int) 14002)
0x7ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(3)
0x7ad: Return(); Pop(0)

0x7ae: Push((int) 14003)
0x7af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7b1: PushEmpty(string)
0x7b2: Stack[-1] = "Neutral"
0x7b3: Call 0x759

0x7b4: Pop(1)
0x7b5: Push((int) 12804)
0x7b6: @@ SetMessage(Stack[-1])
0x7b7: Pop(1)
0x7b8: @@ ClearReplies()
0x7b9: Pop(0)
0x7ba: Push((int) 12805)
0x7bb: Push((int) 14005)
0x7bc: Push((int) 14004)
0x7bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7be: Pop(3)
0x7bf: Push((int) 12808)
0x7c0: Push((int) 14005)
0x7c1: Push((int) 14007)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Return(); Pop(0)

0x7c5: Push((int) 14005)
0x7c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7d7; Pop(1)

0x7c8: PushEmpty(string)
0x7c9: Stack[-1] = "Neutral"
0x7ca: Call 0x759

0x7cb: Pop(1)
0x7cc: Push((int) 12806)
0x7cd: @@ SetMessage(Stack[-1])
0x7ce: Pop(1)
0x7cf: @@ ClearReplies()
0x7d0: Pop(0)
0x7d1: Push((int) 12807)
0x7d2: Push((int) 14008)
0x7d3: Push((int) 14006)
0x7d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d5: Pop(3)
0x7d6: Return(); Pop(0)

0x7d7: Push((int) 14008)
0x7d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d9: IF (Stack[-1] == 0) GOTO 0x7e9; Pop(1)

0x7da: PushEmpty(string)
0x7db: Stack[-1] = "Neutral"
0x7dc: Call 0x759

0x7dd: Pop(1)
0x7de: Push((int) 12809)
0x7df: @@ SetMessage(Stack[-1])
0x7e0: Pop(1)
0x7e1: @@ ClearReplies()
0x7e2: Pop(0)
0x7e3: Push((int) 12810)
0x7e4: Push((int) 14010)
0x7e5: Push((int) 14009)
0x7e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e7: Pop(3)
0x7e8: Return(); Pop(0)

0x7e9: Push((int) 14010)
0x7ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7eb: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7ec: PushEmpty(string)
0x7ed: Stack[-1] = "Neutral"
0x7ee: Call 0x759

0x7ef: Pop(1)
0x7f0: Push((int) 12811)
0x7f1: @@ SetMessage(Stack[-1])
0x7f2: Pop(1)
0x7f3: @@ ClearReplies()
0x7f4: Pop(0)
0x7f5: Push((int) 12812)
0x7f6: Push((int) -1)
0x7f7: Push((int) 14011)
0x7f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f9: Pop(3)
0x7fa: Return(); Pop(0)

0x7fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7fc: PushEmpty(bool)
0x7fd: Call 0x89e

0x7fe: Pop(0)
0x7ff: IF (Stack[-1] == 0) GOTO 0x803; Pop(1)

0x800: @ lshStopAnimation()
0x801: Pop(0)
0x802: GOTO 0x805

0x803: @ StopAnimation()
0x804: Pop(0)
0x805: Return(); Pop(0)

0x806: GOTO 0x76a

0x807: Return(); Pop(0)

0x808: PushEmpty(cvector, cvector, cvector, bool, cvector, cvector, cvector, bool)
0x809: @@ GetPosition(Stack[-4])
0x80a: Pop(0)
0x80b: @ GetPosition(Stack[-3])
0x80c: Pop(0)
0x80d: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0x80e: Push(CvectorIndex(Stack[-2], 0))
0x80f: Push(CvectorIndex(Stack[-3], 2))
0x810: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x811: Pop(2)
0x812: Stack[-10] = Stack[-1]
0x813: Return(); Pop(8)

0x814: PushEmpty(bool, bool)
0x815: @ IsLoaded(Stack[-1])
0x816: Pop(0)
0x817: Stack[-3] = Stack[-1]
0x818: Return(); Pop(2)

0x819: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x81a: @@ GetPosition(Stack[-7])
0x81b: Pop(0)
0x81c: @@ GetEyesHeight(Stack[-8])
0x81d: Pop(0)
0x81e: Push(CvectorIndex(Stack[-7], 1))
0x81f: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x820: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x821: @ GetPosition(Stack[-6])
0x822: Pop(0)
0x823: @ GetEyesHeight(Stack[-8])
0x824: Pop(0)
0x825: Push(CvectorIndex(Stack[-6], 1))
0x826: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x827: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x828: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x829: Push(CvectorIndex(Stack[-5], 1))
0x82a: Stack[-1] = (int) 0
0x82b: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x82c: Pop(0); Push(Stack[-5] | Stack[-5]);
0x82d: Pop(1); Push(Sqrt(Stack[-1]))
0x82e: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x82f: Stack[-4] = -Stack[-5]; Pop(0);
0x830: Push((int) 70)
0x831: Pop(1); Push(Stack[-6] * Stack[-1]);
0x832: PushEmpty(cvector, cvector)
0x833: Push(CVector(0.0, 1.0, 0.0))
0x834: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x835: Call 0x86e

0x836: Pop(1)
0x837: Push((int) 25)
0x838: Pop(2); Push(Stack[-2] * Stack[-1]);
0x839: Pop(2); Push(Stack[-2] + Stack[-1]);
0x83a: Push(CVector(0.0, 10.0, 0.0))
0x83b: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x83c: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x83d: @ IsOverrideActive(Stack[-1])
0x83e: Pop(0)
0x83f: Push(Stack[-1])
0x840: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x841: Stack[-18] = (bool) 0
0x842: Return(); Pop(16)

0x843: @ StopWorld()
0x844: Pop(0)
0x845: @ CameraTransit(Stack[-2], Stack[-4])
0x846: Pop(0)
0x847: Push(CvectorIndex(Stack[-3], 0))
0x848: Push(CvectorIndex(Stack[-4], 2))
0x849: @ Rotate(Stack[-2], Stack[-1])
0x84a: Pop(2)
0x84b: @ CameraWaitForPlayFinish()
0x84c: Pop(0)
0x84d: @ ResumeWorld()
0x84e: Pop(0)
0x84f: Stack[-18] = (bool) 1
0x850: Return(); Pop(16)

0x851: PushEmpty()
0x852: @ CameraSwitchToNormal()
0x853: Pop(0)
0x854: Return(); Pop(0)

0x855: PushEmpty(float, float, float, float)
0x856: Push("playing ")
0x857: Pop(1); Push(Stack[-1] + Stack[-6]);
0x858: @ Trace(Stack[-1])
0x859: Pop(1)
0x85a: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x85b: Pop(0)
0x85c: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x85d: Pop(0)
0x85e: Push("start: ")
0x85f: Pop(1); Push(Stack[-1] + Stack[-3]);
0x860: @ Trace(Stack[-1])
0x861: Pop(1)
0x862: Push("end: ")
0x863: Pop(1); Push(Stack[-1] + Stack[-2]);
0x864: @ Trace(Stack[-1])
0x865: Pop(1)
0x866: Return(); Pop(4)

0x867: PushEmpty(bool)
0x868: Call 0x89e

0x869: Pop(0)
0x86a: IF (Stack[-1] == 0) GOTO 0x86d; Pop(1)

0x86b: @ lshStopSpeech()
0x86c: Pop(0)
0x86d: Return(); Pop(0)

0x86e: PushEmpty(float, float)
0x86f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x870: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x871: Push((float)0.0)
0x872: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x873: IF (Stack[-1] == 0) GOTO 0x876; Pop(1)

0x874: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x875: Return(); Pop(2)

0x876: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x877: Return(); Pop(2)

0x878: PushEmpty(int, int)
0x879: @ GetVariable(Stack[-3], Stack[-1])
0x87a: Pop(0)
0x87b: Stack[-4] = Stack[-1]
0x87c: Return(); Pop(2)

0x87d: PushEmpty(float, float)
0x87e: @ GetGameTime(Stack[-1])
0x87f: Pop(0)
0x880: Stack[-3] = Stack[-1]
0x881: Return(); Pop(2)

0x882: PushEmpty(float, float)
0x883: @ GetGameTime(Stack[-1])
0x884: Pop(0)
0x885: Push((int) 1)
0x886: PushEmpty(int)
0x887: Push((int) 24)
0x888: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x889: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x88a: Return(); Pop(2)

0x88b: PushEmpty()
0x88c: PushEmpty(int)
0x88d: Call 0x882

0x88e: Pop(0)
0x88f: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x890: Return(); Pop(0)

0x891: PushEmpty(bool, bool)
0x892: PushEmpty(string)
0x893: Stack[-1] = "No"
0x894: Call 0x855

0x895: Pop(1)
0x896: @ lshWaitForAnimEnd(Stack[-1])
0x897: Pop(0)
0x898: Stack[-3] = Stack[-1]
0x899: Return(); Pop(2)

0x89a: Stack[-1] = (int) 2871
0x89b: Return(); Pop(0)

0x89c: Stack[-1] = "ui/NPC_Mishka.png"
0x89d: Return(); Pop(0)

0x89e: Stack[-1] = (bool) 1
0x89f: Return(); Pop(0)

0x8a0: PushEmpty()
0x8a1: Push("ood1Mishka1")
0x8a2: Push((int) 1)
0x8a3: @ SetVariable(Stack[-2], Stack[-1])
0x8a4: Pop(2)
0x8a5: Return(); Pop(0)

0x8a6: PushEmpty()
0x8a7: Push("ood1Mishka2")
0x8a8: Push((int) 1)
0x8a9: @ SetVariable(Stack[-2], Stack[-1])
0x8aa: Pop(2)
0x8ab: Return(); Pop(0)

0x8ac: PushEmpty()
0x8ad: Push("ood1Mishka3")
0x8ae: Push((int) 1)
0x8af: @ SetVariable(Stack[-2], Stack[-1])
0x8b0: Pop(2)
0x8b1: Return(); Pop(0)

0x8b2: PushEmpty()
0x8b3: Push("d1q04")
0x8b4: Push((int) 2)
0x8b5: @ SetVariable(Stack[-2], Stack[-1])
0x8b6: Pop(2)
0x8b7: PushEmpty()
0x8b8: Call 0xa0e

0x8b9: Pop(0)
0x8ba: Return(); Pop(0)

0x8bb: PushEmpty(object, object)
0x8bc: PushEmpty(object)
0x8bd: Call 0x9cb

0x8be: Stack[-2] = Stack[-1]
0x8bf: Pop(1)
0x8c0: Push("d1q04MishkaGotoSpi4ka")
0x8c1: Push("pt_map_spi4ka")
0x8c2: Push((int) 0)
0x8c3: Push((int) 8644)
0x8c4: PushEmpty(float)
0x8c5: Call 0x87d

0x8c6: Pop(0)
0x8c7: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8c8: Pop(5)
0x8c9: Return(); Pop(2)

0x8ca: Stack[-1] = 0
0x8cb: PushEmpty()
0x8cc: PushEmpty(object, string, float)
0x8cd: PushEmpty(object)
0x8ce: Call 0x9cb

0x8cf: Stack[-4] = Stack[-1]
0x8d0: Pop(1)
0x8d1: Stack[-2] = "pt_map_spi4ka"
0x8d2: Stack[-1] = (int) 2
0x8d3: Call 0x9dc

0x8d4: Pop(3)
0x8d5: PushEmpty(object)
0x8d6: Call 0x9cb

0x8d7: Pop(0)
0x8d8: @@ ShowMap(Stack[-1])
0x8d9: Pop(1)
0x8da: Return(); Pop(0)

0x8db: PushEmpty()
0x8dc: Return(); Pop(0)

0x8dd: PushEmpty(object, object)
0x8de: PushEmpty(object)
0x8df: Call 0x9cb

0x8e0: Stack[-2] = Stack[-1]
0x8e1: Pop(1)
0x8e2: Push("d3q02MishkaGotoMladVlad")
0x8e3: Push("pt_map_maldvlad")
0x8e4: Push((int) 0)
0x8e5: Push((int) 11381)
0x8e6: PushEmpty(float)
0x8e7: Call 0x87d

0x8e8: Pop(0)
0x8e9: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8ea: Pop(5)
0x8eb: PushEmpty()
0x8ec: Call 0xa1e

0x8ed: Pop(0)
0x8ee: Return(); Pop(2)

0x8ef: Stack[-1] = 0
0x8f0: PushEmpty()
0x8f1: PushEmpty(object, string, float)
0x8f2: PushEmpty(object)
0x8f3: Call 0x9cb

0x8f4: Stack[-4] = Stack[-1]
0x8f5: Pop(1)
0x8f6: Stack[-2] = "pt_map_mladvlad"
0x8f7: Stack[-1] = (int) 2
0x8f8: Call 0x9dc

0x8f9: Pop(3)
0x8fa: PushEmpty(object)
0x8fb: Call 0x9cb

0x8fc: Pop(0)
0x8fd: @@ ShowMap(Stack[-1])
0x8fe: Pop(1)
0x8ff: Return(); Pop(0)

0x900: PushEmpty()
0x901: Push("ood6Mishka1")
0x902: Push((int) 1)
0x903: @ SetVariable(Stack[-2], Stack[-1])
0x904: Pop(2)
0x905: Return(); Pop(0)

0x906: PushEmpty()
0x907: Push("KnowMishka")
0x908: Push((int) 1)
0x909: @ SetVariable(Stack[-2], Stack[-1])
0x90a: Pop(2)
0x90b: Return(); Pop(0)

0x90c: PushEmpty()
0x90d: PushEmpty(int, string)
0x90e: Stack[-1] = "ood1Mishka1"
0x90f: Call 0x878

0x910: Pop(1)
0x911: Push((int) 0)
0x912: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x913: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x914: Stack[-2] = (bool) 1
0x915: Return(); Pop(0)

0x916: Stack[-2] = (bool) 0
0x917: Return(); Pop(0)

0x918: PushEmpty()
0x919: PushEmpty(int, string)
0x91a: Stack[-1] = "ood1Mishka2"
0x91b: Call 0x878

0x91c: Pop(1)
0x91d: Push((int) 0)
0x91e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-2] = (bool) 1
0x921: Return(); Pop(0)

0x922: Stack[-2] = (bool) 0
0x923: Return(); Pop(0)

0x924: PushEmpty()
0x925: PushEmpty(int, string)
0x926: Stack[-1] = "ood1Mishka3"
0x927: Call 0x878

0x928: Pop(1)
0x929: Push((int) 0)
0x92a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92e; Pop(1)

0x92c: Stack[-2] = (bool) 1
0x92d: Return(); Pop(0)

0x92e: Stack[-2] = (bool) 0
0x92f: Return(); Pop(0)

0x930: PushEmpty()
0x931: PushEmpty(int, string)
0x932: Stack[-1] = "d1q04"
0x933: Call 0x878

0x934: Pop(1)
0x935: Push((int) 1)
0x936: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x93a; Pop(1)

0x938: Stack[-2] = (bool) 1
0x939: Return(); Pop(0)

0x93a: Stack[-2] = (bool) 0
0x93b: Return(); Pop(0)

0x93c: PushEmpty()
0x93d: PushEmpty(int, string)
0x93e: Stack[-1] = "d3q02"
0x93f: Call 0x878

0x940: Pop(1)
0x941: Push((int) 1)
0x942: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x943: IF (Stack[-1] == 0) GOTO 0x946; Pop(1)

0x944: Stack[-2] = (bool) 1
0x945: Return(); Pop(0)

0x946: Stack[-2] = (bool) 0
0x947: Return(); Pop(0)

0x948: PushEmpty()
0x949: Stack[-2] = (bool) 1
0x94a: Return(); Pop(0)

0x94b: Stack[-2] = (bool) 0
0x94c: Return(); Pop(0)

0x94d: PushEmpty()
0x94e: PushEmpty(int, string)
0x94f: Stack[-1] = "d6q01"
0x950: Call 0x878

0x951: Pop(1)
0x952: Push((int) 4)
0x953: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x954: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x955: Stack[-2] = (bool) 1
0x956: Return(); Pop(0)

0x957: Stack[-2] = (bool) 0
0x958: Return(); Pop(0)

0x959: PushEmpty()
0x95a: PushEmpty(int, string)
0x95b: Stack[-1] = "ood6Mishka1"
0x95c: Call 0x878

0x95d: Pop(1)
0x95e: Push((int) 0)
0x95f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x961: Stack[-2] = (bool) 1
0x962: Return(); Pop(0)

0x963: Stack[-2] = (bool) 0
0x964: Return(); Pop(0)

0x965: PushEmpty()
0x966: PushEmpty(int, string)
0x967: Stack[-1] = "KnowLaska"
0x968: Call 0x878

0x969: Pop(1)
0x96a: Push((int) 1)
0x96b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x96c: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96d: Stack[-2] = (bool) 1
0x96e: Return(); Pop(0)

0x96f: Stack[-2] = (bool) 0
0x970: Return(); Pop(0)

0x971: PushEmpty()
0x972: PushEmpty(int, string)
0x973: Stack[-1] = "KnowSpi4ka"
0x974: Call 0x878

0x975: Pop(1)
0x976: Push((int) 1)
0x977: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x97b; Pop(1)

0x979: Stack[-2] = (bool) 1
0x97a: Return(); Pop(0)

0x97b: Stack[-2] = (bool) 0
0x97c: Return(); Pop(0)

0x97d: PushEmpty()
0x97e: PushEmpty(int, string)
0x97f: Stack[-1] = "KnowKapella"
0x980: Call 0x878

0x981: Pop(1)
0x982: Push((int) 1)
0x983: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x984: IF (Stack[-1] == 0) GOTO 0x987; Pop(1)

0x985: Stack[-2] = (bool) 1
0x986: Return(); Pop(0)

0x987: Stack[-2] = (bool) 0
0x988: Return(); Pop(0)

0x989: PushEmpty()
0x98a: PushEmpty(int, string)
0x98b: Stack[-1] = "KnowMyth"
0x98c: Call 0x878

0x98d: Pop(1)
0x98e: Push((int) 1)
0x98f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x990: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x991: Stack[-2] = (bool) 1
0x992: Return(); Pop(0)

0x993: Stack[-2] = (bool) 0
0x994: Return(); Pop(0)

0x995: PushEmpty()
0x996: PushEmpty(int, string)
0x997: Stack[-1] = "KnowPredictions"
0x998: Call 0x878

0x999: Pop(1)
0x99a: Push((int) 1)
0x99b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x99c: IF (Stack[-1] == 0) GOTO 0x99f; Pop(1)

0x99d: Stack[-2] = (bool) 1
0x99e: Return(); Pop(0)

0x99f: Stack[-2] = (bool) 0
0x9a0: Return(); Pop(0)

0x9a1: PushEmpty(object, object)
0x9a2: @ GetDiaryRoot(Stack[-1])
0x9a3: Pop(0)
0x9a4: Pop(0); Push((bool) Stack[-1] == 0)
0x9a5: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a6: Push("Can't retrieve diary root")
0x9a7: @ Trace(Stack[-1])
0x9a8: Pop(1)
0x9a9: Stack[-3] = (bool) 0
0x9aa: Return(); Pop(2)

0x9ab: Stack[-3] = Stack[-1]
0x9ac: Return(); Pop(2)

0x9ad: Stack[-1] = 0
0x9ae: PushEmpty(object, object, int, object, object, int)
0x9af: PushEmpty(object)
0x9b0: Call 0x9a1

0x9b1: Stack[-4] = Stack[-1]
0x9b2: Pop(1)
0x9b3: @@ Find(Stack[-7], Stack[-2])
0x9b4: Pop(0)
0x9b5: Pop(0); Push((bool) Stack[-2] == 0)
0x9b6: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9b7: Push("Can't find diary parent with id: ")
0x9b8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x9b9: @ Trace(Stack[-1])
0x9ba: Pop(1)
0x9bb: Stack[-9] = (bool) 0
0x9bc: Return(); Pop(6)

0x9bd: @@ AddChild(Stack[-8])
0x9be: Pop(0)
0x9bf: Push("player_diary")
0x9c0: Push((int) 1)
0x9c1: @ SetVariable(Stack[-2], Stack[-1])
0x9c2: Pop(2)
0x9c3: @@ GetCategory(Stack[-1])
0x9c4: Pop(0)
0x9c5: @ SetDiarySection(Stack[-1])
0x9c6: Pop(0)
0x9c7: Stack[-9] = (bool) 0
0x9c8: Return(); Pop(6)

0x9c9: Stack[-2] = 0
0x9ca: Stack[-3] = 0
0x9cb: PushEmpty(object, object, object, object)
0x9cc: @ GetMainOutdoorScene(Stack[-2])
0x9cd: Pop(0)
0x9ce: Pop(0); Push((bool) Stack[-2] == 0)
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d6; Pop(1)

0x9d0: Push("Can't find main outdoor scene")
0x9d1: @ Trace(Stack[-1])
0x9d2: Pop(1)
0x9d3: Stack[-1] = 0
0x9d4: Stack[-5] = Stack[-1]
0x9d5: Return(); Pop(4)

0x9d6: @@ GetMap(Stack[-1])
0x9d7: Pop(0)
0x9d8: Stack[-5] = Stack[-1]
0x9d9: Return(); Pop(4)

0x9da: Stack[-1] = 0
0x9db: Stack[-2] = 0
0x9dc: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x9dd: @ GetMainOutdoorScene(Stack[-2])
0x9de: Pop(0)
0x9df: Pop(0); Push((bool) Stack[-2] == 0)
0x9e0: IF (Stack[-1] == 0) GOTO 0x9e5; Pop(1)

0x9e1: Push("Can't find main outdoor scene")
0x9e2: @ Trace(Stack[-1])
0x9e3: Pop(1)
0x9e4: Return(); Pop(8)

0x9e5: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x9e6: Pop(0)
0x9e7: Pop(0); Push((bool) Stack[-1] == 0)
0x9e8: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9e9: Push("Warning: outdoor scene locator ")
0x9ea: Pop(1); Push(Stack[-1] + Stack[-11]);
0x9eb: Push(" doesnt exist")
0x9ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9ed: @ Trace(Stack[-1])
0x9ee: Pop(1)
0x9ef: @@ GetMap(Stack[-11])
0x9f0: Pop(0)
0x9f1: Pop(0); Push((bool) Stack[-11] == 0)
0x9f2: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f3: Push("Can't find map")
0x9f4: @ Trace(Stack[-1])
0x9f5: Pop(1)
0x9f6: Return(); Pop(8)

0x9f7: Push(CvectorIndex(Stack[-4], 0))
0x9f8: Push(CvectorIndex(Stack[-5], 2))
0x9f9: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x9fa: Pop(2)
0x9fb: Return(); Pop(8)

0x9fc: Stack[-2] = 0
0x9fd: PushEmpty(int, int)
0x9fe: Push("player")
0x9ff: @ GetVariable(Stack[-1], Stack[-2])
0xa00: Pop(1)
0xa01: Push((int) 0)
0xa02: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa03: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa04: Stack[-3] = (int) 200001
0xa05: Return(); Pop(2)

0xa06: GOTO 0xa0c

0xa07: Push((int) 1)
0xa08: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa09: IF (Stack[-1] == 0) GOTO 0xa0c; Pop(1)

0xa0a: Stack[-3] = (int) 200002
0xa0b: Return(); Pop(2)

0xa0c: Stack[-3] = (int) 200003
0xa0d: Return(); Pop(2)

0xa0e: PushEmpty(object, object)
0xa0f: Push("Adding diary entry")
0xa10: @ Trace(Stack[-1])
0xa11: Pop(1)
0xa12: Push((int) 45)
0xa13: Push((int) 2)
0xa14: Push((int) 12127)
0xa15: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa16: Pop(3)
0xa17: PushEmpty(bool, object, int)
0xa18: Stack[-2] = Stack[-4]
0xa19: Stack[-1] = (int) 43
0xa1a: Call 0x9ae

0xa1b: Pop(3)
0xa1c: Return(); Pop(2)

0xa1d: Stack[-1] = 0
0xa1e: PushEmpty(object, object)
0xa1f: Push("Adding diary entry")
0xa20: @ Trace(Stack[-1])
0xa21: Pop(1)
0xa22: Push((int) 136)
0xa23: Push((int) 2)
0xa24: Push((int) 15306)
0xa25: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa26: Pop(3)
0xa27: PushEmpty(bool, object, int)
0xa28: Stack[-2] = Stack[-4]
0xa29: Stack[-1] = (int) 26
0xa2a: Call 0x9ae

0xa2b: Pop(3)
0xa2c: Return(); Pop(2)

0xa2d: Stack[-1] = 0
0xa2e: Push(GlobalVars[1])
0xa2f: Stack[-1] = (bool) 0
0xa30: GlobalVars[1] = Stack[-1]; Pop(1)
0xa31: Return(); Pop(0)

0xa32: PushEmpty()
0xa33: Push(GlobalVars[1])
0xa34: Pop(1); Push((bool) Stack[-1] == 0)
0xa35: IF (Stack[-1] == 0) GOTO 0xa3f; Pop(1)

0xa36: PushEmpty(int, object)
0xa37: Stack[-1] = Stack[-3]
0xa38: Push(-2, 1); TaskCall(2)
0xa39: Call 0x31

0xa3a: Pop(-2, 1); TaskReturn
0xa3b: Pop(2)
0xa3c: Push(GlobalVars[1])
0xa3d: Stack[-1] = (bool) 1
0xa3e: GlobalVars[1] = Stack[-1]; Pop(1)
0xa3f: PushEmpty(bool, int)
0xa40: Stack[-1] = (int) 1
0xa41: Call 0x88b

0xa42: Pop(1)
0xa43: IF (Stack[-1] == 0) GOTO 0xa4b; Pop(1)

0xa44: PushEmpty(int, object)
0xa45: Stack[-1] = Stack[-3]
0xa46: Push(-2, 1); TaskCall(4)
0xa47: Call 0x14f

0xa48: Pop(-2, 1); TaskReturn
0xa49: Pop(2)
0xa4a: Return(); Pop(0)

0xa4b: PushEmpty(bool, int)
0xa4c: Stack[-1] = (int) 3
0xa4d: Call 0x88b

0xa4e: Pop(1)
0xa4f: IF (Stack[-1] == 0) GOTO 0xa57; Pop(1)

0xa50: PushEmpty(int, object)
0xa51: Stack[-1] = Stack[-3]
0xa52: Push(-2, 1); TaskCall(6)
0xa53: Call 0x52f

0xa54: Pop(-2, 1); TaskReturn
0xa55: Pop(2)
0xa56: Return(); Pop(0)

0xa57: PushEmpty(bool, int)
0xa58: Stack[-1] = (int) 6
0xa59: Call 0x88b

0xa5a: Pop(1)
0xa5b: IF (Stack[-1] == 0) GOTO 0xa63; Pop(1)

0xa5c: PushEmpty(int, object)
0xa5d: Stack[-1] = Stack[-3]
0xa5e: Push(-2, 1); TaskCall(8)
0xa5f: Call 0x6d2

0xa60: Pop(-2, 1); TaskReturn
0xa61: Pop(2)
0xa62: Return(); Pop(0)

0xa63: PushEmpty(bool)
0xa64: Call 0x891

0xa65: Pop(1)
0xa66: Return(); Pop(0)

