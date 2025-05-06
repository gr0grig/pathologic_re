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
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	Door 
	 not found
	locked
	SetProperty
	itheater@door1
	ood12Whitemask1
	ood12Whitemask2
	branch
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png

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
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x1fa
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd6 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x200 Vars = (object)
		EVENT_26 Op = 0x231 Vars = (string)
		EVENT_6 Op = 0x239 Vars = ()
		EVENT_7 Op = 0x27a Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x302

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x406

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x404

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x408

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x40a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3f3

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
0x41: Call2 0x347

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
0x4f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x3db

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x3cf

0x59: Pop(2)
0x5a: PushEmpty(object, object)
0x5b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5d: Call2 0x3c8

0x5e: Pop(2)
0x5f: PushEmpty(string)
0x60: Stack[-1] = "Neutral"
0x61: Call2 0xc0

0x62: Pop(1)
0x63: Push((int) 515058)
0x64: @@ SetMessage(Stack[-1])
0x65: Pop(1)
0x66: @@ ClearReplies()
0x67: Pop(0)
0x68: Push((int) 515059)
0x69: Push((int) 16324)
0x6a: Push((int) 16323)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 515072)
0x6e: Push((int) -1)
0x6f: Push((int) 16336)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0xa2

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xc0

0x76: Pop(1)
0x77: Push((int) 515073)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: PushEmpty(bool, object)
0x7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Call2 0x3e7

0x7f: Pop(1)
0x80: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x81: Push((int) 515074)
0x82: Push((int) 16339)
0x83: Push((int) 16338)
0x84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85: Pop(3)
0x86: PushEmpty(bool, object)
0x87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x88: Call2 0x3e7

0x89: Pop(1)
0x8a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8b: Push((int) 515085)
0x8c: Push((int) 16341)
0x8d: Push((int) 16349)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x3e7

0x93: Pop(1)
0x94: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x95: Push((int) 515086)
0x96: Push((int) 16341)
0x97: Push((int) 16351)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 515087)
0x9b: Push((int) -1)
0x9c: Push((int) 16353)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x4e

0xa2: PushEmpty(bool)
0xa3: Call2 0x40c

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call2 0x359

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call2 0x40c

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string, bool)
0xcb: Stack[-2] = Stack[-3]
0xcc: Push("")
0xcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: Stack[-1] = (bool) 0
0xd0: GOTO 0xd2

0xd1: Stack[-1] = (bool) 1
0xd2: Call2 0x369

0xd3: Pop(2)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Push((int) 1)
0xd8: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0x383

0xdb: Pop(0)
0xdc: Push((int) 16338)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0x3d5

0xe3: Pop(2)
0xe4: Push((int) 16349)
0xe5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe6: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe7: PushEmpty(object, object)
0xe8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xea: Call2 0x3d5

0xeb: Pop(2)
0xec: Push((int) 16351)
0xed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xef: PushEmpty(object, object)
0xf0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf2: Call2 0x3d5

0xf3: Pop(2)
0xf4: Push((int) 16322)
0xf5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0xf7: PushEmpty(bool, object)
0xf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Call2 0x3db

0xfa: Pop(1)
0xfb: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xfc: PushEmpty(object, object)
0xfd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xff: Call2 0x3cf

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x103: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x104: Call2 0x3c8

0x105: Pop(2)
0x106: PushEmpty(string)
0x107: Stack[-1] = "Neutral"
0x108: Call2 0xc0

0x109: Pop(1)
0x10a: Push((int) 515058)
0x10b: @@ SetMessage(Stack[-1])
0x10c: Pop(1)
0x10d: @@ ClearReplies()
0x10e: Pop(0)
0x10f: Push((int) 515059)
0x110: Push((int) 16324)
0x111: Push((int) 16323)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 515072)
0x115: Push((int) -1)
0x116: Push((int) 16336)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call2 0xc0

0x11d: Pop(1)
0x11e: Push((int) 515073)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: PushEmpty(bool, object)
0x124: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x125: Call2 0x3e7

0x126: Pop(1)
0x127: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x128: Push((int) 515074)
0x129: Push((int) 16339)
0x12a: Push((int) 16338)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call2 0x3e7

0x130: Pop(1)
0x131: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x132: Push((int) 515085)
0x133: Push((int) 16341)
0x134: Push((int) 16349)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0x3e7

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13c: Push((int) 515086)
0x13d: Push((int) 16341)
0x13e: Push((int) 16351)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push((int) 515087)
0x142: Push((int) -1)
0x143: Push((int) 16353)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 16339)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0xc0

0x14d: Pop(1)
0x14e: Push((int) 515075)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 515076)
0x154: Push((int) 16341)
0x155: Push((int) 16340)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 515081)
0x159: Push((int) -1)
0x15a: Push((int) 16345)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Push((int) 515082)
0x15e: Push((int) 16347)
0x15f: Push((int) 16346)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 16347)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call2 0xc0

0x169: Pop(1)
0x16a: Push((int) 515083)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 515084)
0x170: Push((int) 16341)
0x171: Push((int) 16348)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Push((int) 16341)
0x176: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x177: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x178: PushEmpty(string)
0x179: Stack[-1] = "Neutral"
0x17a: Call2 0xc0

0x17b: Pop(1)
0x17c: Push((int) 515077)
0x17d: @@ SetMessage(Stack[-1])
0x17e: Pop(1)
0x17f: @@ ClearReplies()
0x180: Pop(0)
0x181: Push((int) 515078)
0x182: Push((int) -1)
0x183: Push((int) 16342)
0x184: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x185: Pop(3)
0x186: Push((int) 515079)
0x187: Push((int) -1)
0x188: Push((int) 16343)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 515080)
0x18c: Push((int) -1)
0x18d: Push((int) 16344)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: Return(); Pop(0)

0x191: Push((int) 16324)
0x192: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x194: PushEmpty(string)
0x195: Stack[-1] = "Neutral"
0x196: Call2 0xc0

0x197: Pop(1)
0x198: Push((int) 515060)
0x199: @@ SetMessage(Stack[-1])
0x19a: Pop(1)
0x19b: @@ ClearReplies()
0x19c: Pop(0)
0x19d: Push((int) 515071)
0x19e: Push((int) -1)
0x19f: Push((int) 16335)
0x1a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a1: Pop(3)
0x1a2: Push((int) 515061)
0x1a3: Push((int) 16326)
0x1a4: Push((int) 16325)
0x1a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a6: Pop(3)
0x1a7: Return(); Pop(0)

0x1a8: Push((int) 16326)
0x1a9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1aa: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ab: PushEmpty(string)
0x1ac: Stack[-1] = "Neutral"
0x1ad: Call2 0xc0

0x1ae: Pop(1)
0x1af: Push((int) 515062)
0x1b0: @@ SetMessage(Stack[-1])
0x1b1: Pop(1)
0x1b2: @@ ClearReplies()
0x1b3: Pop(0)
0x1b4: Push((int) 515063)
0x1b5: Push((int) 16328)
0x1b6: Push((int) 16327)
0x1b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b8: Pop(3)
0x1b9: Push((int) 515067)
0x1ba: Push((int) 16332)
0x1bb: Push((int) 16331)
0x1bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bd: Pop(3)
0x1be: Return(); Pop(0)

0x1bf: Push((int) 16332)
0x1c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c2: PushEmpty(string)
0x1c3: Stack[-1] = "Neutral"
0x1c4: Call2 0xc0

0x1c5: Pop(1)
0x1c6: Push((int) 515068)
0x1c7: @@ SetMessage(Stack[-1])
0x1c8: Pop(1)
0x1c9: @@ ClearReplies()
0x1ca: Pop(0)
0x1cb: Push((int) 515069)
0x1cc: Push((int) -1)
0x1cd: Push((int) 16333)
0x1ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cf: Pop(3)
0x1d0: Push((int) 515070)
0x1d1: Push((int) -1)
0x1d2: Push((int) 16334)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Return(); Pop(0)

0x1d6: Push((int) 16328)
0x1d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1d9: PushEmpty(string)
0x1da: Stack[-1] = "Neutral"
0x1db: Call2 0xc0

0x1dc: Pop(1)
0x1dd: Push((int) 515064)
0x1de: @@ SetMessage(Stack[-1])
0x1df: Pop(1)
0x1e0: @@ ClearReplies()
0x1e1: Pop(0)
0x1e2: Push((int) 515065)
0x1e3: Push((int) -1)
0x1e4: Push((int) 16329)
0x1e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e6: Pop(3)
0x1e7: Push((int) 515066)
0x1e8: Push((int) -1)
0x1e9: Push((int) 16330)
0x1ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1eb: Pop(3)
0x1ec: Return(); Pop(0)

0x1ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1ee: PushEmpty(bool)
0x1ef: Call2 0x40c

0x1f0: Pop(0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f2: @ lshStopAnimation()
0x1f3: Pop(0)
0x1f4: GOTO 0x1f7

0x1f5: @ StopAnimation()
0x1f6: Pop(0)
0x1f7: Return(); Pop(0)

0x1f8: GOTO 0xd7

0x1f9: Return(); Pop(0)

0x1fa: PushEmpty(float, float)
0x1fb: Stack[-2] = (int) 300
0x1fc: Stack[-1] = (int) 100
0x1fd: Call2 0x20b

0x1fe: Pop(2)
0x1ff: Return(); Pop(0)

0x200: PushEmpty()
0x201: PushEmpty()
0x202: Call2 0x291

0x203: Pop(0)
0x204: PushEmpty(int, object)
0x205: Stack[-1] = Stack[-3]
0x206: Push(-2, 1); TaskCall(0)
0x207: Call2 0x0

0x208: Pop(-2, 1); TaskReturn
0x209: Pop(2)
0x20a: Return(); Pop(0)

0x20b: PushEmpty(float, bool, float, bool)
0x20c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x20d: Push((int) 3)
0x20e: @ rand(Stack[-3], Stack[-1])
0x20f: Pop(1)
0x210: Push((int) 3)
0x211: Pop(1); Push(Stack[-3] + Stack[-1]);
0x212: @ Sleep(Stack[-1], Stack[-2])
0x213: Pop(1)
0x214: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x215: PushEmpty(float, float)
0x216: Stack[-2] = Stack[-8]
0x217: Stack[-1] = Stack[-7]
0x218: Call2 0x250

0x219: Pop(2)
0x21a: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x21b: GOTO 0x20d

0x21c: Return(); Pop(4)

0x21d: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x21e: PushEmpty(bool)
0x21f: Stack[-1] = (bool) 0
0x220: PushEmpty(bool)
0x221: Call2 0x2fd

0x222: Pop(0)
0x223: Pop(1); Push((bool) Stack[-1] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x225: PushEmpty(bool)
0x226: Call2 0x24e

0x227: Pop(0)
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: Stack[-1] = (bool) 1
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: PushEmpty(object)
0x22c: Call2 0x38a

0x22d: Pop(0)
0x22e: @ RemoveActor(Stack[-1])
0x22f: Pop(1)
0x230: Return(); Pop(0)

0x231: PushEmpty()
0x232: Push("cleanup")
0x233: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x21d

0x237: Pop(0)
0x238: Return(); Pop(0)

0x239: Push( Stack[6 + Tasks[-1].StackPointer] )
0x23a: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23b: PushEmpty()
0x23c: Call2 0x291

0x23d: Pop(0)
0x23e: PushEmpty(bool)
0x23f: Stack[-1] = (bool) 0
0x240: Push( Stack[5 + Tasks[-1].StackPointer] )
0x241: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x242: PushEmpty(bool)
0x243: Call2 0x24e

0x244: Pop(0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Stack[-1] = (bool) 1
0x247: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x248: PushEmpty(object)
0x249: Call2 0x38a

0x24a: Pop(0)
0x24b: @ RemoveActor(Stack[-1])
0x24c: Pop(1)
0x24d: Return(); Pop(0)

0x24e: Stack[-1] = (bool) 1
0x24f: Return(); Pop(0)

0x250: PushEmpty()
0x251: PushEmpty(bool)
0x252: Call2 0x2fd

0x253: Pop(0)
0x254: Pop(1); Push((bool) Stack[-1] == 0)
0x255: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x256: Return(); Pop(0)

0x257: Push("player")
0x258: @ FindActor(Stack[-4], Stack[-1])
0x259: Pop(1)
0x25a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x25b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x25c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x25d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x25e: Push((int) 10)
0x25f: Push((float)1.0)
0x260: @ SetTimer(Stack[-2], Stack[-1])
0x261: Pop(2)
0x262: PushEmpty()
0x263: Call2 0x29f

0x264: Pop(0)
0x265: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x266: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x267: Push((int) 10)
0x268: @ KillTimer(Stack[-1])
0x269: Pop(1)
0x26a: Return(); Pop(0)

0x26b: PushEmpty(float, float)
0x26c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: Stack[-3] = (bool) 0
0x26f: Return(); Pop(2)

0x270: PushEmpty(float, object)
0x271: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x272: Call2 0x2f5

0x273: Pop(1)
0x274: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x275: Push( Stack[2 + Tasks[-1].StackPointer] )
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x278: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x279: Return(); Pop(2)

0x27a: PushEmpty()
0x27b: Push((int) 10)
0x27c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x27d: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x27e: PushEmpty(bool)
0x27f: Call2 0x26b

0x280: Pop(0)
0x281: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x282: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: PushEmpty(object)
0x285: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x286: Call2 0x378

0x287: Pop(1)
0x288: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x289: GOTO 0x290

0x28a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x28b: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28c: Push("head")
0x28d: @ UnlookAsync(Stack[-1])
0x28e: Pop(1)
0x28f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x290: Return(); Pop(0)

0x291: PushEmpty()
0x292: Call2 0x2f0

0x293: Pop(0)
0x294: Push((int) 10)
0x295: @ KillTimer(Stack[-1])
0x296: Pop(1)
0x297: Push( Stack[2 + Tasks[-1].StackPointer] )
0x298: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x299: Push("head")
0x29a: @ UnlookAsync(Stack[-1])
0x29b: Pop(1)
0x29c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x29d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x29e: Return(); Pop(0)

0x29f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x2a0: @ WaitForAnimEnd()
0x2a1: Pop(0)
0x2a2: PushEmpty(bool)
0x2a3: Call2 0x2fd

0x2a4: Pop(0)
0x2a5: Pop(1); Push((bool) Stack[-1] == 0)
0x2a6: IF (Stack[-1] == 0) GOTO 0x2a8; Pop(1)

0x2a7: Return(); Pop(14)

0x2a8: PushEmpty(int)
0x2a9: Call2 0x3b7

0x2aa: Stack[-8] = Stack[-1]
0x2ab: Pop(1)
0x2ac: Stack[-6] = (int) 0
0x2ad: PushEmpty(bool)
0x2ae: Stack[-1] = (bool) 0
0x2af: Push((int) 5)
0x2b0: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b2: PushEmpty(bool)
0x2b3: Call2 0x2fd

0x2b4: Pop(0)
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Stack[-1] = (bool) 1
0x2b7: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2b8: Push((int) 3)
0x2b9: @ irand(Stack[-6], Stack[-1])
0x2ba: Pop(1)
0x2bb: Push((int) 0)
0x2bc: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2be: Push(Stack[-7])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c0: @ irand(Stack[-4], Stack[-7])
0x2c1: Pop(0)
0x2c2: Push("all")
0x2c3: PushEmpty(string, int)
0x2c4: Stack[-1] = Stack[-7]
0x2c5: Call2 0x3b0

0x2c6: Pop(1)
0x2c7: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c8: Pop(2)
0x2c9: @ WaitForAnimEnd(Stack[-3])
0x2ca: Pop(0)
0x2cb: Pop(0); Push((bool) Stack[-3] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: GOTO 0x2eb

0x2ce: GOTO 0x2e0

0x2cf: Push((int) 1)
0x2d0: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d2: Push((int) 4)
0x2d3: @ rand(Stack[-3], Stack[-1])
0x2d4: Pop(1)
0x2d5: Push((int) 1)
0x2d6: Pop(1); Push(Stack[-3] + Stack[-1]);
0x2d7: @ Sleep(Stack[-1], Stack[-2])
0x2d8: Pop(1)
0x2d9: Pop(0); Push((bool) Stack[-1] == 0)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: GOTO 0x2eb

0x2dc: GOTO 0x2e0

0x2dd: Push(Stack[-6])
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: GOTO 0x2eb

0x2e0: PushEmpty(bool)
0x2e1: Call2 0x2ee

0x2e2: Pop(0)
0x2e3: Pop(1); Push((bool) Stack[-1] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e5: GOTO 0x2eb

0x2e6: @ ResetAAS()
0x2e7: Pop(0)
0x2e8: Push((int) 1)
0x2e9: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2ea: GOTO 0x2ad

0x2eb: @ ResetAAS()
0x2ec: Pop(0)
0x2ed: Return(); Pop(14)

0x2ee: Stack[-1] = (bool) 1
0x2ef: Return(); Pop(0)

0x2f0: @ StopAnimation()
0x2f1: Pop(0)
0x2f2: @ StopGroup0()
0x2f3: Pop(0)
0x2f4: Return(); Pop(0)

0x2f5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2f6: @ GetPosition(Stack[-3])
0x2f7: Pop(0)
0x2f8: @@ GetPosition(Stack[-2])
0x2f9: Pop(0)
0x2fa: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2fb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2fc: Return(); Pop(6)

0x2fd: PushEmpty(bool, bool)
0x2fe: @ IsLoaded(Stack[-1])
0x2ff: Pop(0)
0x300: Stack[-3] = Stack[-1]
0x301: Return(); Pop(2)

0x302: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x303: @@ GetPosition(Stack[-8])
0x304: Pop(0)
0x305: @@ GetEyesHeight(Stack[-9])
0x306: Pop(0)
0x307: Push(CvectorIndex(Stack[-8], 1))
0x308: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x309: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x30a: @ GetPosition(Stack[-7])
0x30b: Pop(0)
0x30c: @ GetEyesHeight(Stack[-9])
0x30d: Pop(0)
0x30e: Push(CvectorIndex(Stack[-7], 1))
0x30f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x310: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x311: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x312: Push(CvectorIndex(Stack[-6], 1))
0x313: Stack[-1] = (int) 0
0x314: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x315: Pop(0); Push(Stack[-6] | Stack[-6]);
0x316: Pop(1); Push(Sqrt(Stack[-1]))
0x317: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x318: Stack[-5] = -Stack[-6]; Pop(0);
0x319: Pop(0); Push(Stack[-6] * Stack[-19]);
0x31a: PushEmpty(cvector, cvector)
0x31b: Push(CVector(0.0, 1.0, 0.0))
0x31c: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x31d: Call2 0x390

0x31e: Pop(1)
0x31f: Push((int) 25)
0x320: Pop(2); Push(Stack[-2] * Stack[-1]);
0x321: Pop(2); Push(Stack[-2] + Stack[-1]);
0x322: Push(CVector(0.0, 10.0, 0.0))
0x323: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x324: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x325: @ IsOverrideActive(Stack[-2])
0x326: Pop(0)
0x327: Push(Stack[-2])
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-21] = (bool) 0
0x32a: Return(); Pop(18)

0x32b: @ StopWorld()
0x32c: Pop(0)
0x32d: Push((bool) 1)
0x32e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x32f: Pop(1)
0x330: Push(CvectorIndex(Stack[-4], 0))
0x331: Push(CvectorIndex(Stack[-5], 2))
0x332: @ Rotate(Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: PushEmpty(bool)
0x335: Call2 0x40c

0x336: Pop(0)
0x337: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x338: GOTO 0x341

0x339: Push("head")
0x33a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x33b: Pop(1)
0x33c: Push(Stack[-1])
0x33d: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33e: Push("head")
0x33f: @ LookAsyncCamera(Stack[-1])
0x340: Pop(1)
0x341: @ CameraWaitForPlayFinish()
0x342: Pop(0)
0x343: @ ResumeWorld()
0x344: Pop(0)
0x345: Stack[-21] = (bool) 1
0x346: Return(); Pop(18)

0x347: PushEmpty(bool, bool)
0x348: Push((bool) 1)
0x349: @ CameraSwitchToNormal(Stack[-1])
0x34a: Pop(1)
0x34b: PushEmpty(bool)
0x34c: Call2 0x40c

0x34d: Pop(0)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: GOTO 0x358

0x350: Push("head")
0x351: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x352: Pop(1)
0x353: Push(Stack[-1])
0x354: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x355: Push("head")
0x356: @ UnlookAsync(Stack[-1])
0x357: Pop(1)
0x358: Return(); Pop(2)

0x359: PushEmpty(bool, float, float, bool, float, float)
0x35a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x35b: Pop(0)
0x35c: Push(Stack[-3])
0x35d: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x35f: Pop(0)
0x360: Push((bool) 0)
0x361: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x362: Pop(1)
0x363: GOTO 0x368

0x364: Push("Can't find lsh animation : ")
0x365: Pop(1); Push(Stack[-1] + Stack[-8]);
0x366: @ Trace(Stack[-1])
0x367: Pop(1)
0x368: Return(); Pop(6)

0x369: PushEmpty(bool, float, float, bool, float, float)
0x36a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x36b: Pop(0)
0x36c: Push(Stack[-3])
0x36d: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x36f: Pop(0)
0x370: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x371: Pop(0)
0x372: GOTO 0x377

0x373: Push("Can't find lsh animation : ")
0x374: Pop(1); Push(Stack[-1] + Stack[-9]);
0x375: @ Trace(Stack[-1])
0x376: Pop(1)
0x377: Return(); Pop(6)

0x378: PushEmpty(float, cvector, float, cvector)
0x379: @@ GetEyesHeight(Stack[-2])
0x37a: Pop(0)
0x37b: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x37c: Push(CvectorIndex(Stack[-1], 1))
0x37d: Stack[-1] = Stack[-3]
0x37e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x37f: Push("head")
0x380: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x381: Pop(1)
0x382: Return(); Pop(4)

0x383: PushEmpty(bool)
0x384: Call2 0x40c

0x385: Pop(0)
0x386: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x387: @ lshStopSpeech()
0x388: Pop(0)
0x389: Return(); Pop(0)

0x38a: PushEmpty(object, object)
0x38b: @ self(Stack[-1])
0x38c: Pop(0)
0x38d: Stack[-3] = Stack[-1]
0x38e: Return(); Pop(2)

0x38f: Stack[-1] = 0
0x390: PushEmpty(float, float)
0x391: Pop(0); Push(Stack[-3] | Stack[-3]);
0x392: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x393: Push((float)0.0)
0x394: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x396: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x397: Return(); Pop(2)

0x398: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x399: Return(); Pop(2)

0x39a: PushEmpty(int, int)
0x39b: @ GetVariable(Stack[-3], Stack[-1])
0x39c: Pop(0)
0x39d: Stack[-4] = Stack[-1]
0x39e: Return(); Pop(2)

0x39f: PushEmpty(object, object)
0x3a0: @ FindActor(Stack[-1], Stack[-4])
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-1] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a4: Push("Door ")
0x3a5: Pop(1); Push(Stack[-1] + Stack[-5]);
0x3a6: Push(" not found")
0x3a7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3a8: @ Trace(Stack[-1])
0x3a9: Pop(1)
0x3aa: GOTO 0x3ae

0x3ab: Push("locked")
0x3ac: @@ SetProperty(Stack[-1], Stack[-4])
0x3ad: Pop(1)
0x3ae: Return(); Pop(2)

0x3af: Stack[-1] = 0
0x3b0: PushEmpty(string, string)
0x3b1: Stack[-1] = "idle"
0x3b2: Push(Stack[-3])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3b5: Stack[-4] = Stack[-1]
0x3b6: Return(); Pop(2)

0x3b7: PushEmpty(int, bool, int, bool)
0x3b8: Stack[-2] = (int) 0
0x3b9: Push("all")
0x3ba: PushEmpty(string, int)
0x3bb: Stack[-1] = Stack[-5]
0x3bc: Call2 0x3b0

0x3bd: Pop(1)
0x3be: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3bf: Pop(2)
0x3c0: Pop(0); Push((bool) Stack[-1] == 0)
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c2: GOTO 0x3c6

0x3c3: Push((int) 1)
0x3c4: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3c5: GOTO 0x3b9

0x3c6: Stack[-5] = Stack[-2]
0x3c7: Return(); Pop(4)

0x3c8: PushEmpty()
0x3c9: PushEmpty(string, bool)
0x3ca: Stack[-2] = "itheater@door1"
0x3cb: Stack[-1] = (bool) 0
0x3cc: Call2 0x39f

0x3cd: Pop(2)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: Push("ood12Whitemask1")
0x3d1: Push((int) 1)
0x3d2: @ SetVariable(Stack[-2], Stack[-1])
0x3d3: Pop(2)
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: Push("ood12Whitemask2")
0x3d7: Push((int) 1)
0x3d8: @ SetVariable(Stack[-2], Stack[-1])
0x3d9: Pop(2)
0x3da: Return(); Pop(0)

0x3db: PushEmpty()
0x3dc: PushEmpty(int, string)
0x3dd: Stack[-1] = "ood12Whitemask1"
0x3de: Call2 0x39a

0x3df: Pop(1)
0x3e0: Push((int) 0)
0x3e1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e3: Stack[-2] = (bool) 1
0x3e4: Return(); Pop(0)

0x3e5: Stack[-2] = (bool) 0
0x3e6: Return(); Pop(0)

0x3e7: PushEmpty()
0x3e8: PushEmpty(int, string)
0x3e9: Stack[-1] = "ood12Whitemask2"
0x3ea: Call2 0x39a

0x3eb: Pop(1)
0x3ec: Push((int) 0)
0x3ed: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3ef: Stack[-2] = (bool) 1
0x3f0: Return(); Pop(0)

0x3f1: Stack[-2] = (bool) 0
0x3f2: Return(); Pop(0)

0x3f3: PushEmpty(int, int)
0x3f4: Push("branch")
0x3f5: @ GetVariable(Stack[-1], Stack[-2])
0x3f6: Pop(1)
0x3f7: Push((int) 0)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fd; Pop(1)

0x3fa: Stack[-3] = (int) 1
0x3fb: Return(); Pop(2)

0x3fc: GOTO 0x402

0x3fd: Push((int) 1)
0x3fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: Stack[-3] = (int) 2
0x401: Return(); Pop(2)

0x402: Stack[-3] = (int) 3
0x403: Return(); Pop(2)

0x404: Stack[-1] = (int) 515569
0x405: Return(); Pop(0)

0x406: Stack[-1] = (int) 503354
0x407: Return(); Pop(0)

0x408: Stack[-1] = "ui/NPC_wmask.png"
0x409: Return(); Pop(0)

0x40a: Stack[-1] = "ui/NPC_wmask_b.png"
0x40b: Return(); Pop(0)

0x40c: Stack[-1] = (bool) 0
0x40d: Return(); Pop(0)

