GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	d12q01TheaterIsVisited
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	ood12BirdmaskT
	ood12BirdmaskT2
	quest_d12_01
	init_theater
	d12q01ChildsAreVisited
	branch
	add
	vol_
	size
	get

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Sleep (1 args)
	GetVariable (2 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
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
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateIntVector (1 args)

RunOp = 0x205
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x211 Vars = (object)
		EVENT_7 Op = 0x24b Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x2d3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x390

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x38e

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x392

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x394

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3df

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x318

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3ab

0x53: Pop(1)
0x54: Pop(1); Push((bool) Stack[-1] == 0)
0x55: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x56: PushEmpty(string)
0x57: Stack[-1] = "Neutral"
0x58: Call2 0xe3

0x59: Pop(1)
0x5a: Push((int) 535490)
0x5b: @@ SetMessage(Stack[-1])
0x5c: Pop(1)
0x5d: @@ ClearReplies()
0x5e: Pop(0)
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x3c1

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x64: Push((int) 535491)
0x65: Push((int) 37174)
0x66: Push((int) 37173)
0x67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x68: Pop(3)
0x69: Push((int) 535504)
0x6a: Push((int) -1)
0x6b: Push((int) 37186)
0x6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d: Pop(3)
0x6e: GOTO 0xc5

0x6f: PushEmpty(bool, object)
0x70: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x71: Call2 0x3cd

0x72: Pop(1)
0x73: Pop(1); Push((bool) Stack[-1] == 0)
0x74: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x75: PushEmpty(string)
0x76: Stack[-1] = "Neutral"
0x77: Call2 0xe3

0x78: Pop(1)
0x79: Push((int) 541615)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 541616)
0x7f: Push((int) 43789)
0x80: Push((int) 43788)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 541620)
0x84: Push((int) -1)
0x85: Push((int) 43792)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0xc5

0x89: PushEmpty(bool)
0x8a: Stack[-1] = (bool) 0
0x8b: PushEmpty(bool)
0x8c: Stack[-1] = (bool) 0
0x8d: PushEmpty(bool, object)
0x8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Call2 0x3cd

0x90: Pop(1)
0x91: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x92: PushEmpty(bool, object)
0x93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94: Call2 0x3ab

0x95: Pop(1)
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Stack[-1] = (bool) 1
0x98: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x99: PushEmpty(bool, object)
0x9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b: Call2 0x3b5

0x9c: Pop(1)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Stack[-1] = (bool) 1
0x9f: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xa0: PushEmpty(object, object)
0xa1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa3: Call2 0x398

0xa4: Pop(2)
0xa5: PushEmpty(string)
0xa6: Stack[-1] = "Neutral"
0xa7: Call2 0xe3

0xa8: Pop(1)
0xa9: Push((int) 535505)
0xaa: @@ SetMessage(Stack[-1])
0xab: Pop(1)
0xac: @@ ClearReplies()
0xad: Pop(0)
0xae: Push((int) 535506)
0xaf: Push((int) -1)
0xb0: Push((int) 37188)
0xb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb2: Pop(3)
0xb3: GOTO 0xc5

0xb4: PushEmpty(string)
0xb5: Stack[-1] = "Neutral"
0xb6: Call2 0xe3

0xb7: Pop(1)
0xb8: Push((int) 535507)
0xb9: @@ SetMessage(Stack[-1])
0xba: Pop(1)
0xbb: @@ ClearReplies()
0xbc: Pop(0)
0xbd: Push((int) 535508)
0xbe: Push((int) -1)
0xbf: Push((int) 37190)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: GOTO 0xc5

0xc3: Return(); Pop(0)

0xc4: GOTO 0x4e

0xc5: PushEmpty(bool)
0xc6: Call2 0x396

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x32a

0xd1: Pop(1)
0xd2: GOTO 0xc9

0xd3: GOTO 0xe2

0xd4: Push("all")
0xd5: Push("idle")
0xd6: @ PlayAnimation(Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: @ WaitForAnimEnd()
0xd9: Pop(0)
0xda: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdb: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdc: GOTO 0xe2

0xdd: Push("all")
0xde: Push("idle")
0xdf: @ PlayAnimation(Stack[-2], Stack[-1])
0xe0: Pop(2)
0xe1: GOTO 0xd8

0xe2: Return(); Pop(0)

0xe3: PushEmpty()
0xe4: PushEmpty(bool)
0xe5: Call2 0x396

0xe6: Pop(0)
0xe7: Pop(1); Push((bool) Stack[-1] == 0)
0xe8: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xe9: Return(); Pop(0)

0xea: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Return(); Pop(0)

0xed: PushEmpty(string, bool)
0xee: Stack[-2] = Stack[-3]
0xef: Push("")
0xf0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf2: Stack[-1] = (bool) 0
0xf3: GOTO 0xf5

0xf4: Stack[-1] = (bool) 1
0xf5: Call2 0x33a

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x354

0xfe: Pop(0)
0xff: Push((int) 37173)
0x100: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x102: PushEmpty(object, object)
0x103: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x104: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x105: Call2 0x39e

0x106: Pop(2)
0x107: Push((int) 37188)
0x108: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: PushEmpty(object, object)
0x10b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x10d: Call2 0x3a4

0x10e: Pop(2)
0x10f: Push((int) 37172)
0x110: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x3ab

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0xe3

0x11b: Pop(1)
0x11c: Push((int) 535490)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: PushEmpty(bool, object)
0x122: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x123: Call2 0x3c1

0x124: Pop(1)
0x125: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x126: Push((int) 535491)
0x127: Push((int) 37174)
0x128: Push((int) 37173)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Push((int) 535504)
0x12c: Push((int) -1)
0x12d: Push((int) 37186)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Return(); Pop(0)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x3cd

0x134: Pop(1)
0x135: Pop(1); Push((bool) Stack[-1] == 0)
0x136: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral"
0x139: Call2 0xe3

0x13a: Pop(1)
0x13b: Push((int) 541615)
0x13c: @@ SetMessage(Stack[-1])
0x13d: Pop(1)
0x13e: @@ ClearReplies()
0x13f: Pop(0)
0x140: Push((int) 541616)
0x141: Push((int) 43789)
0x142: Push((int) 43788)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Push((int) 541620)
0x146: Push((int) -1)
0x147: Push((int) 43792)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: PushEmpty(bool)
0x14c: Stack[-1] = (bool) 0
0x14d: PushEmpty(bool)
0x14e: Stack[-1] = (bool) 0
0x14f: PushEmpty(bool, object)
0x150: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x151: Call2 0x3cd

0x152: Pop(1)
0x153: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x154: PushEmpty(bool, object)
0x155: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x156: Call2 0x3ab

0x157: Pop(1)
0x158: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x159: Stack[-1] = (bool) 1
0x15a: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x3b5

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: Stack[-1] = (bool) 1
0x161: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x162: PushEmpty(object, object)
0x163: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x164: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x165: Call2 0x398

0x166: Pop(2)
0x167: PushEmpty(string)
0x168: Stack[-1] = "Neutral"
0x169: Call2 0xe3

0x16a: Pop(1)
0x16b: Push((int) 535505)
0x16c: @@ SetMessage(Stack[-1])
0x16d: Pop(1)
0x16e: @@ ClearReplies()
0x16f: Pop(0)
0x170: Push((int) 535506)
0x171: Push((int) -1)
0x172: Push((int) 37188)
0x173: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x174: Pop(3)
0x175: Return(); Pop(0)

0x176: PushEmpty(string)
0x177: Stack[-1] = "Neutral"
0x178: Call2 0xe3

0x179: Pop(1)
0x17a: Push((int) 535507)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 535508)
0x180: Push((int) -1)
0x181: Push((int) 37190)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 43789)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Neutral"
0x18a: Call2 0xe3

0x18b: Pop(1)
0x18c: Push((int) 541617)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 541618)
0x192: Push((int) -1)
0x193: Push((int) 43790)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 541619)
0x197: Push((int) -1)
0x198: Push((int) 43791)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 37174)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Neutral"
0x1a1: Call2 0xe3

0x1a2: Pop(1)
0x1a3: Push((int) 535492)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 535493)
0x1a9: Push((int) 37176)
0x1aa: Push((int) 37175)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Push((int) 535497)
0x1ae: Push((int) 37180)
0x1af: Push((int) 37179)
0x1b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b1: Pop(3)
0x1b2: Return(); Pop(0)

0x1b3: Push((int) 37180)
0x1b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1ca; Pop(1)

0x1b6: PushEmpty(string)
0x1b7: Stack[-1] = "Neutral"
0x1b8: Call2 0xe3

0x1b9: Pop(1)
0x1ba: Push((int) 535498)
0x1bb: @@ SetMessage(Stack[-1])
0x1bc: Pop(1)
0x1bd: @@ ClearReplies()
0x1be: Pop(0)
0x1bf: Push((int) 535499)
0x1c0: Push((int) 37182)
0x1c1: Push((int) 37181)
0x1c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c3: Pop(3)
0x1c4: Push((int) 535503)
0x1c5: Push((int) -1)
0x1c6: Push((int) 37185)
0x1c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c8: Pop(3)
0x1c9: Return(); Pop(0)

0x1ca: Push((int) 37182)
0x1cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1cd: PushEmpty(string)
0x1ce: Stack[-1] = "Neutral"
0x1cf: Call2 0xe3

0x1d0: Pop(1)
0x1d1: Push((int) 535500)
0x1d2: @@ SetMessage(Stack[-1])
0x1d3: Pop(1)
0x1d4: @@ ClearReplies()
0x1d5: Pop(0)
0x1d6: Push((int) 535501)
0x1d7: Push((int) -1)
0x1d8: Push((int) 37183)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Push((int) 535502)
0x1dc: Push((int) -1)
0x1dd: Push((int) 37184)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 37176)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Neutral"
0x1e6: Call2 0xe3

0x1e7: Pop(1)
0x1e8: Push((int) 535494)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 535495)
0x1ee: Push((int) -1)
0x1ef: Push((int) 37177)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Push((int) 535496)
0x1f3: Push((int) -1)
0x1f4: Push((int) 37178)
0x1f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f6: Pop(3)
0x1f7: Return(); Pop(0)

0x1f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f9: PushEmpty(bool)
0x1fa: Call2 0x396

0x1fb: Pop(0)
0x1fc: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1fd: @ lshStopAnimation()
0x1fe: Pop(0)
0x1ff: GOTO 0x202

0x200: @ StopAnimation()
0x201: Pop(0)
0x202: Return(); Pop(0)

0x203: GOTO 0xfa

0x204: Return(); Pop(0)

0x205: Push((bool) 1)
0x206: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x207: PushEmpty(float, float)
0x208: Stack[-2] = (int) 300
0x209: Stack[-1] = (int) 100
0x20a: Call2 0x221

0x20b: Pop(2)
0x20c: Push((int) 1)
0x20d: @ Sleep(Stack[-1])
0x20e: Pop(1)
0x20f: GOTO 0x205

0x210: Return(); Pop(0)

0x211: PushEmpty(int, int)
0x212: Push("d12q01TheaterIsVisited")
0x213: @ GetVariable(Stack[-1], Stack[-2])
0x214: Pop(1)
0x215: Pop(0); Push((bool) Stack[-1] == 0)
0x216: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x217: PushEmpty()
0x218: Call2 0x262

0x219: Pop(0)
0x21a: PushEmpty(int, object)
0x21b: Stack[-1] = Stack[-5]
0x21c: Push(-2, 1); TaskCall(0)
0x21d: Call2 0x0

0x21e: Pop(-2, 1); TaskReturn
0x21f: Pop(2)
0x220: Return(); Pop(2)

0x221: PushEmpty()
0x222: PushEmpty(bool)
0x223: Call2 0x2ce

0x224: Pop(0)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: Return(); Pop(0)

0x228: Push("player")
0x229: @ FindActor(Stack[-4], Stack[-1])
0x22a: Pop(1)
0x22b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x22c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x22d: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x22e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x22f: Push((int) 10)
0x230: Push((float)1.0)
0x231: @ SetTimer(Stack[-2], Stack[-1])
0x232: Pop(2)
0x233: PushEmpty()
0x234: Call2 0x270

0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x238: Push((int) 10)
0x239: @ KillTimer(Stack[-1])
0x23a: Pop(1)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(float, float)
0x23d: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-3] = (bool) 0
0x240: Return(); Pop(2)

0x241: PushEmpty(float, object)
0x242: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x243: Call2 0x2c6

0x244: Pop(1)
0x245: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x246: Push( Stack[2 + Tasks[-1].StackPointer] )
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x249: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x24a: Return(); Pop(2)

0x24b: PushEmpty()
0x24c: Push((int) 10)
0x24d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x24f: PushEmpty(bool)
0x250: Call2 0x23c

0x251: Pop(0)
0x252: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x253: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x254: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x255: PushEmpty(object)
0x256: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x257: Call2 0x349

0x258: Pop(1)
0x259: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x25a: GOTO 0x261

0x25b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x25c: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x25d: Push("head")
0x25e: @ UnlookAsync(Stack[-1])
0x25f: Pop(1)
0x260: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x261: Return(); Pop(0)

0x262: PushEmpty()
0x263: Call2 0x2c1

0x264: Pop(0)
0x265: Push((int) 10)
0x266: @ KillTimer(Stack[-1])
0x267: Pop(1)
0x268: Push( Stack[2 + Tasks[-1].StackPointer] )
0x269: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26a: Push("head")
0x26b: @ UnlookAsync(Stack[-1])
0x26c: Pop(1)
0x26d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x26e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x26f: Return(); Pop(0)

0x270: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x271: @ WaitForAnimEnd()
0x272: Pop(0)
0x273: PushEmpty(bool)
0x274: Call2 0x2ce

0x275: Pop(0)
0x276: Pop(1); Push((bool) Stack[-1] == 0)
0x277: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x278: Return(); Pop(14)

0x279: PushEmpty(int)
0x27a: Call2 0x37d

0x27b: Stack[-8] = Stack[-1]
0x27c: Pop(1)
0x27d: Stack[-6] = (int) 0
0x27e: PushEmpty(bool)
0x27f: Stack[-1] = (bool) 0
0x280: Push((int) 5)
0x281: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x283: PushEmpty(bool)
0x284: Call2 0x2ce

0x285: Pop(0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Stack[-1] = (bool) 1
0x288: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x289: Push((int) 3)
0x28a: @ irand(Stack[-6], Stack[-1])
0x28b: Pop(1)
0x28c: Push((int) 0)
0x28d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x28f: Push(Stack[-7])
0x290: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x291: @ irand(Stack[-4], Stack[-7])
0x292: Pop(0)
0x293: Push("all")
0x294: PushEmpty(string, int)
0x295: Stack[-1] = Stack[-7]
0x296: Call2 0x376

0x297: Pop(1)
0x298: @ PlayAnimation(Stack[-2], Stack[-1])
0x299: Pop(2)
0x29a: @ WaitForAnimEnd(Stack[-3])
0x29b: Pop(0)
0x29c: Pop(0); Push((bool) Stack[-3] == 0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2bc

0x29f: GOTO 0x2b1

0x2a0: Push((int) 1)
0x2a1: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2a2: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x2a3: Push((int) 4)
0x2a4: @ rand(Stack[-3], Stack[-1])
0x2a5: Pop(1)
0x2a6: Push((int) 1)
0x2a7: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2a8: @ Sleep(Stack[-1], Stack[-2])
0x2a9: Pop(1)
0x2aa: Pop(0); Push((bool) Stack[-1] == 0)
0x2ab: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2ac: GOTO 0x2bc

0x2ad: GOTO 0x2b1

0x2ae: Push(Stack[-6])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x2b0: GOTO 0x2bc

0x2b1: PushEmpty(bool)
0x2b2: Call2 0x2bf

0x2b3: Pop(0)
0x2b4: Pop(1); Push((bool) Stack[-1] == 0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: GOTO 0x2bc

0x2b7: @ ResetAAS()
0x2b8: Pop(0)
0x2b9: Push((int) 1)
0x2ba: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2bb: GOTO 0x27e

0x2bc: @ ResetAAS()
0x2bd: Pop(0)
0x2be: Return(); Pop(14)

0x2bf: Stack[-1] = (bool) 1
0x2c0: Return(); Pop(0)

0x2c1: @ StopAnimation()
0x2c2: Pop(0)
0x2c3: @ StopGroup0()
0x2c4: Pop(0)
0x2c5: Return(); Pop(0)

0x2c6: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2c7: @ GetPosition(Stack[-3])
0x2c8: Pop(0)
0x2c9: @@ GetPosition(Stack[-2])
0x2ca: Pop(0)
0x2cb: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2cc: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(bool, bool)
0x2cf: @ IsLoaded(Stack[-1])
0x2d0: Pop(0)
0x2d1: Stack[-3] = Stack[-1]
0x2d2: Return(); Pop(2)

0x2d3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2d4: @@ GetPosition(Stack[-8])
0x2d5: Pop(0)
0x2d6: @@ GetEyesHeight(Stack[-9])
0x2d7: Pop(0)
0x2d8: Push(CvectorIndex(Stack[-8], 1))
0x2d9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2da: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2db: @ GetPosition(Stack[-7])
0x2dc: Pop(0)
0x2dd: @ GetEyesHeight(Stack[-9])
0x2de: Pop(0)
0x2df: Push(CvectorIndex(Stack[-7], 1))
0x2e0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2e1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2e2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2e3: Push(CvectorIndex(Stack[-6], 1))
0x2e4: Stack[-1] = (int) 0
0x2e5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2e6: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2e7: Pop(1); Push(Sqrt(Stack[-1]))
0x2e8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2e9: Stack[-5] = -Stack[-6]; Pop(0);
0x2ea: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2eb: PushEmpty(cvector, cvector)
0x2ec: Push(CVector(0.0, 1.0, 0.0))
0x2ed: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2ee: Call2 0x35b

0x2ef: Pop(1)
0x2f0: Push((int) 25)
0x2f1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2f2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2f3: Push(CVector(0.0, 10.0, 0.0))
0x2f4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2f5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2f6: @ IsOverrideActive(Stack[-2])
0x2f7: Pop(0)
0x2f8: Push(Stack[-2])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-21] = (bool) 0
0x2fb: Return(); Pop(18)

0x2fc: @ StopWorld()
0x2fd: Pop(0)
0x2fe: Push((bool) 1)
0x2ff: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x300: Pop(1)
0x301: Push(CvectorIndex(Stack[-4], 0))
0x302: Push(CvectorIndex(Stack[-5], 2))
0x303: @ Rotate(Stack[-2], Stack[-1])
0x304: Pop(2)
0x305: PushEmpty(bool)
0x306: Call2 0x396

0x307: Pop(0)
0x308: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x309: GOTO 0x312

0x30a: Push("head")
0x30b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30c: Pop(1)
0x30d: Push(Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x30f: Push("head")
0x310: @ LookAsyncCamera(Stack[-1])
0x311: Pop(1)
0x312: @ CameraWaitForPlayFinish()
0x313: Pop(0)
0x314: @ ResumeWorld()
0x315: Pop(0)
0x316: Stack[-21] = (bool) 1
0x317: Return(); Pop(18)

0x318: PushEmpty(bool, bool)
0x319: Push((bool) 1)
0x31a: @ CameraSwitchToNormal(Stack[-1])
0x31b: Pop(1)
0x31c: PushEmpty(bool)
0x31d: Call2 0x396

0x31e: Pop(0)
0x31f: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x320: GOTO 0x329

0x321: Push("head")
0x322: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x323: Pop(1)
0x324: Push(Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: Push("head")
0x327: @ UnlookAsync(Stack[-1])
0x328: Pop(1)
0x329: Return(); Pop(2)

0x32a: PushEmpty(bool, float, float, bool, float, float)
0x32b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x32c: Pop(0)
0x32d: Push(Stack[-3])
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x330: Pop(0)
0x331: Push((bool) 0)
0x332: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(1)
0x334: GOTO 0x339

0x335: Push("Can't find lsh animation : ")
0x336: Pop(1); Push(Stack[-1] + Stack[-8]);
0x337: @ Trace(Stack[-1])
0x338: Pop(1)
0x339: Return(); Pop(6)

0x33a: PushEmpty(bool, float, float, bool, float, float)
0x33b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x33c: Pop(0)
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x340: Pop(0)
0x341: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x342: Pop(0)
0x343: GOTO 0x348

0x344: Push("Can't find lsh animation : ")
0x345: Pop(1); Push(Stack[-1] + Stack[-9]);
0x346: @ Trace(Stack[-1])
0x347: Pop(1)
0x348: Return(); Pop(6)

0x349: PushEmpty(float, cvector, float, cvector)
0x34a: @@ GetEyesHeight(Stack[-2])
0x34b: Pop(0)
0x34c: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x34d: Push(CvectorIndex(Stack[-1], 1))
0x34e: Stack[-1] = Stack[-3]
0x34f: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x350: Push("head")
0x351: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x352: Pop(1)
0x353: Return(); Pop(4)

0x354: PushEmpty(bool)
0x355: Call2 0x396

0x356: Pop(0)
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: @ lshStopSpeech()
0x359: Pop(0)
0x35a: Return(); Pop(0)

0x35b: PushEmpty(float, float)
0x35c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x35d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x35e: Push((float)0.0)
0x35f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x362: Return(); Pop(2)

0x363: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x364: Return(); Pop(2)

0x365: PushEmpty(int, int)
0x366: @ GetVariable(Stack[-3], Stack[-1])
0x367: Pop(0)
0x368: Stack[-4] = Stack[-1]
0x369: Return(); Pop(2)

0x36a: PushEmpty(object, object)
0x36b: @ FindActor(Stack[-1], Stack[-4])
0x36c: Pop(0)
0x36d: Pop(0); Push((bool) Stack[-1] == 0)
0x36e: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36f: Stack[-5] = (bool) 0
0x370: Return(); Pop(2)

0x371: @ Trigger(Stack[-1], Stack[-3])
0x372: Pop(0)
0x373: Stack[-5] = (bool) 1
0x374: Return(); Pop(2)

0x375: Stack[-1] = 0
0x376: PushEmpty(string, string)
0x377: Stack[-1] = "idle"
0x378: Push(Stack[-3])
0x379: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x37a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x37b: Stack[-4] = Stack[-1]
0x37c: Return(); Pop(2)

0x37d: PushEmpty(int, bool, int, bool)
0x37e: Stack[-2] = (int) 0
0x37f: Push("all")
0x380: PushEmpty(string, int)
0x381: Stack[-1] = Stack[-5]
0x382: Call2 0x376

0x383: Pop(1)
0x384: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(2)
0x386: Pop(0); Push((bool) Stack[-1] == 0)
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: GOTO 0x38c

0x389: Push((int) 1)
0x38a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38b: GOTO 0x37f

0x38c: Stack[-5] = Stack[-2]
0x38d: Return(); Pop(4)

0x38e: Stack[-1] = (int) 515571
0x38f: Return(); Pop(0)

0x390: Stack[-1] = (int) 504029
0x391: Return(); Pop(0)

0x392: Stack[-1] = "ui/NPC_bmask.png"
0x393: Return(); Pop(0)

0x394: Stack[-1] = "ui/NPC_bmask_b.png"
0x395: Return(); Pop(0)

0x396: Stack[-1] = (bool) 0
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: Push("ood12BirdmaskT")
0x39a: Push((int) 1)
0x39b: @ SetVariable(Stack[-2], Stack[-1])
0x39c: Pop(2)
0x39d: Return(); Pop(0)

0x39e: PushEmpty()
0x39f: Push("ood12BirdmaskT2")
0x3a0: Push((int) 1)
0x3a1: @ SetVariable(Stack[-2], Stack[-1])
0x3a2: Pop(2)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty()
0x3a5: PushEmpty(bool, string, string)
0x3a6: Stack[-2] = "quest_d12_01"
0x3a7: Stack[-1] = "init_theater"
0x3a8: Call2 0x36a

0x3a9: Pop(3)
0x3aa: Return(); Pop(0)

0x3ab: PushEmpty()
0x3ac: PushEmpty(bool, object)
0x3ad: Stack[-1] = Stack[-3]
0x3ae: Call2 0x3d9

0x3af: Pop(1)
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: Stack[-2] = (bool) 1
0x3b2: Return(); Pop(0)

0x3b3: Stack[-2] = (bool) 0
0x3b4: Return(); Pop(0)

0x3b5: PushEmpty()
0x3b6: PushEmpty(int, string)
0x3b7: Stack[-1] = "ood12BirdmaskT"
0x3b8: Call2 0x365

0x3b9: Pop(1)
0x3ba: Push((int) 0)
0x3bb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3bc: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3bd: Stack[-2] = (bool) 1
0x3be: Return(); Pop(0)

0x3bf: Stack[-2] = (bool) 0
0x3c0: Return(); Pop(0)

0x3c1: PushEmpty()
0x3c2: PushEmpty(int, string)
0x3c3: Stack[-1] = "ood12BirdmaskT2"
0x3c4: Call2 0x365

0x3c5: Pop(1)
0x3c6: Push((int) 0)
0x3c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-2] = (bool) 1
0x3ca: Return(); Pop(0)

0x3cb: Stack[-2] = (bool) 0
0x3cc: Return(); Pop(0)

0x3cd: PushEmpty()
0x3ce: PushEmpty(int, string)
0x3cf: Stack[-1] = "d12q01ChildsAreVisited"
0x3d0: Call2 0x365

0x3d1: Pop(1)
0x3d2: Push((int) 0)
0x3d3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-2] = (bool) 1
0x3d6: Return(); Pop(0)

0x3d7: Stack[-2] = (bool) 0
0x3d8: Return(); Pop(0)

0x3d9: PushEmpty()
0x3da: PushEmpty(bool)
0x3db: Call2 0x4d8

0x3dc: Stack[-3] = Stack[-1]
0x3dd: Pop(1)
0x3de: Return(); Pop(0)

0x3df: PushEmpty(int, int)
0x3e0: Push("branch")
0x3e1: @ GetVariable(Stack[-1], Stack[-2])
0x3e2: Pop(1)
0x3e3: Push((int) 0)
0x3e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e6: Stack[-3] = (int) 1
0x3e7: Return(); Pop(2)

0x3e8: GOTO 0x3ee

0x3e9: Push((int) 1)
0x3ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3eb: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ec: Stack[-3] = (int) 2
0x3ed: Return(); Pop(2)

0x3ee: Stack[-3] = (int) 3
0x3ef: Return(); Pop(2)

0x3f0: PushEmpty()
0x3f1: Push((int) 18)
0x3f2: @@ add(Stack[-1])
0x3f3: Pop(1)
0x3f4: Push((int) 24)
0x3f5: @@ add(Stack[-1])
0x3f6: Pop(1)
0x3f7: Push((int) 20)
0x3f8: @@ add(Stack[-1])
0x3f9: Pop(1)
0x3fa: Push((int) 14)
0x3fb: @@ add(Stack[-1])
0x3fc: Pop(1)
0x3fd: Push((bool) 0)
0x3fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x400: Push((int) 10)
0x401: @@ add(Stack[-1])
0x402: Pop(1)
0x403: Push((int) 17)
0x404: @@ add(Stack[-1])
0x405: Pop(1)
0x406: Push((int) 8)
0x407: @@ add(Stack[-1])
0x408: Pop(1)
0x409: GOTO 0x410

0x40a: Push((int) 1)
0x40b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x40c: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40d: Push((int) 10)
0x40e: @@ add(Stack[-1])
0x40f: Pop(1)
0x410: Return(); Pop(0)

0x411: PushEmpty()
0x412: Push((int) 6)
0x413: @@ add(Stack[-1])
0x414: Pop(1)
0x415: Push((int) 26)
0x416: @@ add(Stack[-1])
0x417: Pop(1)
0x418: Push((int) 2)
0x419: @@ add(Stack[-1])
0x41a: Pop(1)
0x41b: Push((int) 22)
0x41c: @@ add(Stack[-1])
0x41d: Pop(1)
0x41e: Push((bool) 0)
0x41f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x421: Push((int) 15)
0x422: @@ add(Stack[-1])
0x423: Pop(1)
0x424: Push((int) 5)
0x425: @@ add(Stack[-1])
0x426: Pop(1)
0x427: Push((int) 16)
0x428: @@ add(Stack[-1])
0x429: Pop(1)
0x42a: GOTO 0x431

0x42b: Push((int) 0)
0x42c: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x42d: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42e: Push((int) 15)
0x42f: @@ add(Stack[-1])
0x430: Pop(1)
0x431: Return(); Pop(0)

0x432: PushEmpty()
0x433: Push((int) 7)
0x434: @@ add(Stack[-1])
0x435: Pop(1)
0x436: Push((int) 23)
0x437: @@ add(Stack[-1])
0x438: Pop(1)
0x439: Push((int) 21)
0x43a: @@ add(Stack[-1])
0x43b: Pop(1)
0x43c: Push((int) 9)
0x43d: @@ add(Stack[-1])
0x43e: Pop(1)
0x43f: Push((int) 3)
0x440: @@ add(Stack[-1])
0x441: Pop(1)
0x442: Push((int) 1)
0x443: @@ add(Stack[-1])
0x444: Pop(1)
0x445: Push((int) 11)
0x446: @@ add(Stack[-1])
0x447: Pop(1)
0x448: Push((int) 13)
0x449: @@ add(Stack[-1])
0x44a: Pop(1)
0x44b: Push((bool) 0)
0x44c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44e: Push((int) 25)
0x44f: @@ add(Stack[-1])
0x450: Pop(1)
0x451: Return(); Pop(0)

0x452: PushEmpty(int, int)
0x453: Push("vol_")
0x454: Pop(1); Push(Stack[-1] + Stack[-4]);
0x455: @ GetVariable(Stack[-1], Stack[-2])
0x456: Pop(1)
0x457: Push((int) 4)
0x458: Pop(1); Push(Stack[-2] & Stack[-1]);
0x459: Push((int) 0)
0x45a: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x45b: Return(); Pop(2)

0x45c: PushEmpty(int, int)
0x45d: Push("vol_")
0x45e: Pop(1); Push(Stack[-1] + Stack[-4]);
0x45f: @ GetVariable(Stack[-1], Stack[-2])
0x460: Pop(1)
0x461: Push((int) 16)
0x462: Pop(1); Push(Stack[-2] & Stack[-1]);
0x463: Push((int) 0)
0x464: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x465: Return(); Pop(2)

0x466: PushEmpty(object, int, int, int, object, int, int, int)
0x467: @ CreateIntVector(Stack[-4])
0x468: Pop(0)
0x469: PushEmpty(object, bool, int)
0x46a: Stack[-3] = Stack[-7]
0x46b: Stack[-2] = (bool) 0
0x46c: Stack[-1] = (int) -1
0x46d: Call2 0x3f0

0x46e: Pop(3)
0x46f: @@ size(Stack[-3])
0x470: Pop(0)
0x471: Stack[-2] = (int) 0
0x472: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x473: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x474: @@ get(Stack[-1], Stack[-2])
0x475: Pop(0)
0x476: PushEmpty(bool)
0x477: Stack[-1] = (bool) 1
0x478: PushEmpty(bool, int)
0x479: Stack[-1] = Stack[-4]
0x47a: Call2 0x45c

0x47b: Pop(1)
0x47c: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x47d: PushEmpty(bool, int)
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x452

0x480: Pop(1)
0x481: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x482: Stack[-1] = (bool) 0
0x483: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x484: Stack[-9] = (bool) 0
0x485: Return(); Pop(8)

0x486: Push((int) 1)
0x487: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x488: GOTO 0x472

0x489: Stack[-9] = (bool) 1
0x48a: Return(); Pop(8)

0x48b: Stack[-4] = 0
0x48c: PushEmpty(object, int, int, int, object, int, int, int)
0x48d: @ CreateIntVector(Stack[-4])
0x48e: Pop(0)
0x48f: PushEmpty(object, bool, int)
0x490: Stack[-3] = Stack[-7]
0x491: Stack[-2] = (bool) 0
0x492: Stack[-1] = (int) -1
0x493: Call2 0x411

0x494: Pop(3)
0x495: @@ size(Stack[-3])
0x496: Pop(0)
0x497: Stack[-2] = (int) 0
0x498: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x499: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x49a: @@ get(Stack[-1], Stack[-2])
0x49b: Pop(0)
0x49c: PushEmpty(bool)
0x49d: Stack[-1] = (bool) 1
0x49e: PushEmpty(bool, int)
0x49f: Stack[-1] = Stack[-4]
0x4a0: Call2 0x45c

0x4a1: Pop(1)
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a3: PushEmpty(bool, int)
0x4a4: Stack[-1] = Stack[-4]
0x4a5: Call2 0x452

0x4a6: Pop(1)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a8: Stack[-1] = (bool) 0
0x4a9: IF (Stack[-1] == 0) GOTO 0x4ac; Pop(1)

0x4aa: Stack[-9] = (bool) 0
0x4ab: Return(); Pop(8)

0x4ac: Push((int) 1)
0x4ad: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4ae: GOTO 0x498

0x4af: Stack[-9] = (bool) 1
0x4b0: Return(); Pop(8)

0x4b1: Stack[-4] = 0
0x4b2: PushEmpty(object, int, int, int, object, int, int, int)
0x4b3: @ CreateIntVector(Stack[-4])
0x4b4: Pop(0)
0x4b5: PushEmpty(object, bool, int)
0x4b6: Stack[-3] = Stack[-7]
0x4b7: Stack[-2] = (bool) 0
0x4b8: Stack[-1] = (int) -1
0x4b9: Call2 0x432

0x4ba: Pop(3)
0x4bb: @@ size(Stack[-3])
0x4bc: Pop(0)
0x4bd: Stack[-2] = (int) 0
0x4be: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4c0: @@ get(Stack[-1], Stack[-2])
0x4c1: Pop(0)
0x4c2: PushEmpty(bool)
0x4c3: Stack[-1] = (bool) 1
0x4c4: PushEmpty(bool, int)
0x4c5: Stack[-1] = Stack[-4]
0x4c6: Call2 0x45c

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4c9: PushEmpty(bool, int)
0x4ca: Stack[-1] = Stack[-4]
0x4cb: Call2 0x452

0x4cc: Pop(1)
0x4cd: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4ce: Stack[-1] = (bool) 0
0x4cf: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4d0: Stack[-9] = (bool) 0
0x4d1: Return(); Pop(8)

0x4d2: Push((int) 1)
0x4d3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x4d4: GOTO 0x4be

0x4d5: Stack[-9] = (bool) 1
0x4d6: Return(); Pop(8)

0x4d7: Stack[-4] = 0
0x4d8: Stack[-1] = (bool) 0
0x4d9: PushEmpty(bool)
0x4da: Stack[-1] = (bool) 0
0x4db: PushEmpty(bool)
0x4dc: Call2 0x4b2

0x4dd: Pop(0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4df: PushEmpty(bool)
0x4e0: Call2 0x48c

0x4e1: Pop(0)
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e3: Stack[-1] = (bool) 1
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e5: PushEmpty(bool)
0x4e6: Call2 0x466

0x4e7: Pop(0)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e9: Stack[-1] = (bool) 1
0x4ea: Return(); Pop(0)

