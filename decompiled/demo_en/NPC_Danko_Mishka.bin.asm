GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

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
	Dream
	Suspicion
	Fear
	Autizm
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	Can't find lsh animation : 
	ui/NPC_Mishka.png
	ui/NPC_Mishka_b.png
	ood6Mishka1
	KnowMishka
	d6q01
	branch

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
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x513
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1ae Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2d5 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3a9 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4e9 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x55f Vars = (int)
		EVENT_6 Op = 0x585 Vars = ()
		EVENT_5 Op = 0x594 Vars = ()
		EVENT_45 Op = 0x5a1 Vars = (bool)
		EVENT_0 Op = 0x5ad Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x636

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x788

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x786

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x78a

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x78c

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7b4

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x74a

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x68b

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x67a

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 535284)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 535285)
0x61: Push((int) 36962)
0x62: Push((int) 36961)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 535292)
0x66: Push((int) -1)
0x67: Push((int) 36968)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 535293)
0x6b: Push((int) -1)
0x6c: Push((int) 36969)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x78e

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x715

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x78e

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x725

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x743

0xab: Pop(0)
0xac: Push((int) 36960)
0xad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0x90

0xb2: Pop(1)
0xb3: Push((int) 535284)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 535285)
0xb9: Push((int) 36962)
0xba: Push((int) 36961)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 535292)
0xbe: Push((int) -1)
0xbf: Push((int) 36968)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: Push((int) 535293)
0xc3: Push((int) -1)
0xc4: Push((int) 36969)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Return(); Pop(0)

0xc8: Push((int) 36962)
0xc9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xcb: PushEmpty(string)
0xcc: Stack[-1] = "Neutral"
0xcd: Call2 0x90

0xce: Pop(1)
0xcf: Push((int) 535286)
0xd0: @@ SetMessage(Stack[-1])
0xd1: Pop(1)
0xd2: @@ ClearReplies()
0xd3: Pop(0)
0xd4: Push((int) 535287)
0xd5: Push((int) 36964)
0xd6: Push((int) 36963)
0xd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8: Pop(3)
0xd9: Push((int) 535291)
0xda: Push((int) -1)
0xdb: Push((int) 36967)
0xdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd: Pop(3)
0xde: Return(); Pop(0)

0xdf: Push((int) 36964)
0xe0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe1: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x90

0xe5: Pop(1)
0xe6: Push((int) 535288)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 535289)
0xec: Push((int) -1)
0xed: Push((int) 36965)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 535290)
0xf1: Push((int) -1)
0xf2: Push((int) 36966)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf7: PushEmpty(bool)
0xf8: Call2 0x78e

0xf9: Pop(0)
0xfa: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xfb: @ lshStopAnimation()
0xfc: Pop(0)
0xfd: GOTO 0x100

0xfe: @ StopAnimation()
0xff: Pop(0)
0x100: Return(); Pop(0)

0x101: GOTO 0xa7

0x102: Return(); Pop(0)

0x103: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x104: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x105: PushEmpty(bool, object, float)
0x106: Stack[-2] = Stack[-12]
0x107: Stack[-1] = (float) 70.0
0x108: Call2 0x636

0x109: Pop(2)
0x10a: Pop(1); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x10c: Stack[-10] = (int) -2
0x10d: Return(); Pop(8)

0x10e: @ CreateDialog(Stack[-4])
0x10f: Pop(0)
0x110: PushEmpty(int)
0x111: Call2 0x788

0x112: Pop(0)
0x113: @@ SetNPCName(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x786

0x117: Pop(0)
0x118: @@ SetNPCDescription(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(string)
0x11b: Call2 0x78a

0x11c: Pop(0)
0x11d: @@ SetPhoto(Stack[-1])
0x11e: Pop(1)
0x11f: PushEmpty(string)
0x120: Call2 0x78c

0x121: Pop(0)
0x122: @@ SetPhoto2(Stack[-1])
0x123: Pop(1)
0x124: PushEmpty(int)
0x125: Call2 0x7b4

0x126: Pop(0)
0x127: @@ SetPlayerName(Stack[-1])
0x128: Pop(1)
0x129: Stack[-2] = (int) -1
0x12a: @ IsOverrideActive(Stack[-3])
0x12b: Pop(0)
0x12c: Push(Stack[-3])
0x12d: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12e: Stack[-10] = (int) -2
0x12f: Return(); Pop(8)

0x130: @ DoDialog(Stack[-4])
0x131: Pop(0)
0x132: PushEmpty(bool, object)
0x133: PushEmpty(object)
0x134: Call2 0x74a

0x135: Stack[-2] = Stack[-1]
0x136: Pop(1)
0x137: Call2 0x68b

0x138: Pop(2)
0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[-11]
0x13b: Stack[-1] = Stack[-6]
0x13c: Push(-2, 4); TaskCall(3)
0x13d: Call2 0x154

0x13e: Pop(-2, 4); TaskReturn
0x13f: Pop(2)
0x140: @@ IsDialogEnd(Stack[-1])
0x141: Pop(0)
0x142: Pop(0); Push((bool) Stack[-1] == 0)
0x143: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x144: @ sync()
0x145: Pop(0)
0x146: @@ IsDialogEnd(Stack[-1])
0x147: Pop(0)
0x148: GOTO 0x142

0x149: PushEmpty(object)
0x14a: Stack[-1] = Stack[-10]
0x14b: Call2 0x67a

0x14c: Pop(1)
0x14d: @ StopDialog(Stack[-4])
0x14e: Pop(0)
0x14f: @@ GetReturnValue(Stack[-2])
0x150: Pop(0)
0x151: Stack[-10] = Stack[-2]
0x152: Return(); Pop(8)

0x153: Stack[-4] = 0
0x154: PushEmpty()
0x155: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x156: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x157: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x158: Push((int) 1)
0x159: IF (Stack[-1] == 0) GOTO 0x17a; Pop(1)

0x15a: PushEmpty(object, object)
0x15b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15d: Call2 0x796

0x15e: Pop(2)
0x15f: PushEmpty(string)
0x160: Stack[-1] = "Neutral"
0x161: Call2 0x198

0x162: Pop(1)
0x163: Push((int) 500457)
0x164: @@ SetMessage(Stack[-1])
0x165: Pop(1)
0x166: @@ ClearReplies()
0x167: Pop(0)
0x168: Push((int) 500458)
0x169: Push((int) 530)
0x16a: Push((int) 527)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Push((int) 500459)
0x16e: Push((int) 532)
0x16f: Push((int) 528)
0x170: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x171: Pop(3)
0x172: Push((int) 500460)
0x173: Push((int) 530)
0x174: Push((int) 529)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: GOTO 0x17a

0x178: Return(); Pop(0)

0x179: GOTO 0x158

0x17a: PushEmpty(bool)
0x17b: Call2 0x78e

0x17c: Pop(0)
0x17d: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17e: @ lshWaitForAnimEnd()
0x17f: Pop(0)
0x180: Push( Stack[3 + Tasks[-1].StackPointer] )
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: GOTO 0x188

0x183: PushEmpty(string)
0x184: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x185: Call2 0x715

0x186: Pop(1)
0x187: GOTO 0x17e

0x188: GOTO 0x197

0x189: Push("all")
0x18a: Push("idle")
0x18b: @ PlayAnimation(Stack[-2], Stack[-1])
0x18c: Pop(2)
0x18d: @ WaitForAnimEnd()
0x18e: Pop(0)
0x18f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x190: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x191: GOTO 0x197

0x192: Push("all")
0x193: Push("idle")
0x194: @ PlayAnimation(Stack[-2], Stack[-1])
0x195: Pop(2)
0x196: GOTO 0x18d

0x197: Return(); Pop(0)

0x198: PushEmpty()
0x199: PushEmpty(bool)
0x19a: Call2 0x78e

0x19b: Pop(0)
0x19c: Pop(1); Push((bool) Stack[-1] == 0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Return(); Pop(0)

0x19f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Return(); Pop(0)

0x1a2: PushEmpty(string, bool)
0x1a3: Stack[-2] = Stack[-3]
0x1a4: Push("")
0x1a5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a7: Stack[-1] = (bool) 0
0x1a8: GOTO 0x1aa

0x1a9: Stack[-1] = (bool) 1
0x1aa: Call2 0x725

0x1ab: Pop(2)
0x1ac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty()
0x1af: Push((int) 1)
0x1b0: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x1b1: PushEmpty()
0x1b2: Call2 0x743

0x1b3: Pop(0)
0x1b4: Push((int) 526)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1b7: PushEmpty(object, object)
0x1b8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1ba: Call2 0x796

0x1bb: Pop(2)
0x1bc: PushEmpty(string)
0x1bd: Stack[-1] = "Neutral"
0x1be: Call2 0x198

0x1bf: Pop(1)
0x1c0: Push((int) 500457)
0x1c1: @@ SetMessage(Stack[-1])
0x1c2: Pop(1)
0x1c3: @@ ClearReplies()
0x1c4: Pop(0)
0x1c5: Push((int) 500458)
0x1c6: Push((int) 530)
0x1c7: Push((int) 527)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Push((int) 500459)
0x1cb: Push((int) 532)
0x1cc: Push((int) 528)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Push((int) 500460)
0x1d0: Push((int) 530)
0x1d1: Push((int) 529)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Push((int) 532)
0x1d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1ec; Pop(1)

0x1d8: PushEmpty(string)
0x1d9: Stack[-1] = "Neutral"
0x1da: Call2 0x198

0x1db: Pop(1)
0x1dc: Push((int) 500462)
0x1dd: @@ SetMessage(Stack[-1])
0x1de: Pop(1)
0x1df: @@ ClearReplies()
0x1e0: Pop(0)
0x1e1: Push((int) 500466)
0x1e2: Push((int) 538)
0x1e3: Push((int) 536)
0x1e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e5: Pop(3)
0x1e6: Push((int) 500467)
0x1e7: Push((int) -1)
0x1e8: Push((int) 537)
0x1e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ea: Pop(3)
0x1eb: Return(); Pop(0)

0x1ec: Push((int) 538)
0x1ed: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ef: PushEmpty(string)
0x1f0: Stack[-1] = "Neutral"
0x1f1: Call2 0x198

0x1f2: Pop(1)
0x1f3: Push((int) 500468)
0x1f4: @@ SetMessage(Stack[-1])
0x1f5: Pop(1)
0x1f6: @@ ClearReplies()
0x1f7: Pop(0)
0x1f8: Push((int) 500470)
0x1f9: Push((int) -1)
0x1fa: Push((int) 540)
0x1fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fc: Pop(3)
0x1fd: Push((int) 500471)
0x1fe: Push((int) -1)
0x1ff: Push((int) 541)
0x200: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x201: Pop(3)
0x202: Return(); Pop(0)

0x203: Push((int) 530)
0x204: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x205: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x206: PushEmpty(string)
0x207: Stack[-1] = "Neutral"
0x208: Call2 0x198

0x209: Pop(1)
0x20a: Push((int) 500461)
0x20b: @@ SetMessage(Stack[-1])
0x20c: Pop(1)
0x20d: @@ ClearReplies()
0x20e: Pop(0)
0x20f: Push((int) 500463)
0x210: Push((int) 535)
0x211: Push((int) 533)
0x212: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x213: Pop(3)
0x214: Push((int) 500464)
0x215: Push((int) -1)
0x216: Push((int) 534)
0x217: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x218: Pop(3)
0x219: Return(); Pop(0)

0x21a: Push((int) 535)
0x21b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x21d: PushEmpty(string)
0x21e: Stack[-1] = "Neutral"
0x21f: Call2 0x198

0x220: Pop(1)
0x221: Push((int) 500465)
0x222: @@ SetMessage(Stack[-1])
0x223: Pop(1)
0x224: @@ ClearReplies()
0x225: Pop(0)
0x226: Push((int) 506269)
0x227: Push((int) -1)
0x228: Push((int) 6939)
0x229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22a: Pop(3)
0x22b: Return(); Pop(0)

0x22c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x22d: PushEmpty(bool)
0x22e: Call2 0x78e

0x22f: Pop(0)
0x230: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x231: @ lshStopAnimation()
0x232: Pop(0)
0x233: GOTO 0x236

0x234: @ StopAnimation()
0x235: Pop(0)
0x236: Return(); Pop(0)

0x237: GOTO 0x1af

0x238: Return(); Pop(0)

0x239: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x23a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x23b: PushEmpty(bool, object, float)
0x23c: Stack[-2] = Stack[-12]
0x23d: Stack[-1] = (float) 70.0
0x23e: Call2 0x636

0x23f: Pop(2)
0x240: Pop(1); Push((bool) Stack[-1] == 0)
0x241: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x242: Stack[-10] = (int) -2
0x243: Return(); Pop(8)

0x244: @ CreateDialog(Stack[-4])
0x245: Pop(0)
0x246: PushEmpty(int)
0x247: Call2 0x788

0x248: Pop(0)
0x249: @@ SetNPCName(Stack[-1])
0x24a: Pop(1)
0x24b: PushEmpty(int)
0x24c: Call2 0x786

0x24d: Pop(0)
0x24e: @@ SetNPCDescription(Stack[-1])
0x24f: Pop(1)
0x250: PushEmpty(string)
0x251: Call2 0x78a

0x252: Pop(0)
0x253: @@ SetPhoto(Stack[-1])
0x254: Pop(1)
0x255: PushEmpty(string)
0x256: Call2 0x78c

0x257: Pop(0)
0x258: @@ SetPhoto2(Stack[-1])
0x259: Pop(1)
0x25a: PushEmpty(int)
0x25b: Call2 0x7b4

0x25c: Pop(0)
0x25d: @@ SetPlayerName(Stack[-1])
0x25e: Pop(1)
0x25f: Stack[-2] = (int) -1
0x260: @ IsOverrideActive(Stack[-3])
0x261: Pop(0)
0x262: Push(Stack[-3])
0x263: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x264: Stack[-10] = (int) -2
0x265: Return(); Pop(8)

0x266: @ DoDialog(Stack[-4])
0x267: Pop(0)
0x268: PushEmpty(bool, object)
0x269: PushEmpty(object)
0x26a: Call2 0x74a

0x26b: Stack[-2] = Stack[-1]
0x26c: Pop(1)
0x26d: Call2 0x68b

0x26e: Pop(2)
0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[-11]
0x271: Stack[-1] = Stack[-6]
0x272: Push(-2, 4); TaskCall(5)
0x273: Call2 0x28a

0x274: Pop(-2, 4); TaskReturn
0x275: Pop(2)
0x276: @@ IsDialogEnd(Stack[-1])
0x277: Pop(0)
0x278: Pop(0); Push((bool) Stack[-1] == 0)
0x279: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27a: @ sync()
0x27b: Pop(0)
0x27c: @@ IsDialogEnd(Stack[-1])
0x27d: Pop(0)
0x27e: GOTO 0x278

0x27f: PushEmpty(object)
0x280: Stack[-1] = Stack[-10]
0x281: Call2 0x67a

0x282: Pop(1)
0x283: @ StopDialog(Stack[-4])
0x284: Pop(0)
0x285: @@ GetReturnValue(Stack[-2])
0x286: Pop(0)
0x287: Stack[-10] = Stack[-2]
0x288: Return(); Pop(8)

0x289: Stack[-4] = 0
0x28a: PushEmpty()
0x28b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x28c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x28d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x28e: Push((int) 1)
0x28f: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x290: PushEmpty(string)
0x291: Stack[-1] = "Dream"
0x292: Call2 0x2bf

0x293: Pop(1)
0x294: Push((int) 510004)
0x295: @@ SetMessage(Stack[-1])
0x296: Pop(1)
0x297: @@ ClearReplies()
0x298: Pop(0)
0x299: Push((int) 510015)
0x29a: Push((int) -1)
0x29b: Push((int) 11037)
0x29c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29d: Pop(3)
0x29e: GOTO 0x2a1

0x29f: Return(); Pop(0)

0x2a0: GOTO 0x28e

0x2a1: PushEmpty(bool)
0x2a2: Call2 0x78e

0x2a3: Pop(0)
0x2a4: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a5: @ lshWaitForAnimEnd()
0x2a6: Pop(0)
0x2a7: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: GOTO 0x2af

0x2aa: PushEmpty(string)
0x2ab: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2ac: Call2 0x715

0x2ad: Pop(1)
0x2ae: GOTO 0x2a5

0x2af: GOTO 0x2be

0x2b0: Push("all")
0x2b1: Push("idle")
0x2b2: @ PlayAnimation(Stack[-2], Stack[-1])
0x2b3: Pop(2)
0x2b4: @ WaitForAnimEnd()
0x2b5: Pop(0)
0x2b6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2be

0x2b9: Push("all")
0x2ba: Push("idle")
0x2bb: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bc: Pop(2)
0x2bd: GOTO 0x2b4

0x2be: Return(); Pop(0)

0x2bf: PushEmpty()
0x2c0: PushEmpty(bool)
0x2c1: Call2 0x78e

0x2c2: Pop(0)
0x2c3: Pop(1); Push((bool) Stack[-1] == 0)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Return(); Pop(0)

0x2c6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(string, bool)
0x2ca: Stack[-2] = Stack[-3]
0x2cb: Push("")
0x2cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: Stack[-1] = (bool) 0
0x2cf: GOTO 0x2d1

0x2d0: Stack[-1] = (bool) 1
0x2d1: Call2 0x725

0x2d2: Pop(2)
0x2d3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2d4: Return(); Pop(0)

0x2d5: PushEmpty()
0x2d6: Push((int) 1)
0x2d7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2d8: PushEmpty()
0x2d9: Call2 0x743

0x2da: Pop(0)
0x2db: Push((int) 11026)
0x2dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2ed; Pop(1)

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Dream"
0x2e0: Call2 0x2bf

0x2e1: Pop(1)
0x2e2: Push((int) 510004)
0x2e3: @@ SetMessage(Stack[-1])
0x2e4: Pop(1)
0x2e5: @@ ClearReplies()
0x2e6: Pop(0)
0x2e7: Push((int) 510015)
0x2e8: Push((int) -1)
0x2e9: Push((int) 11037)
0x2ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2eb: Pop(3)
0x2ec: Return(); Pop(0)

0x2ed: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2ee: PushEmpty(bool)
0x2ef: Call2 0x78e

0x2f0: Pop(0)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f2: @ lshStopAnimation()
0x2f3: Pop(0)
0x2f4: GOTO 0x2f7

0x2f5: @ StopAnimation()
0x2f6: Pop(0)
0x2f7: Return(); Pop(0)

0x2f8: GOTO 0x2d6

0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x2fb: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2fc: PushEmpty(bool, object, float)
0x2fd: Stack[-2] = Stack[-12]
0x2fe: Stack[-1] = (float) 70.0
0x2ff: Call2 0x636

0x300: Pop(2)
0x301: Pop(1); Push((bool) Stack[-1] == 0)
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-10] = (int) -2
0x304: Return(); Pop(8)

0x305: @ CreateDialog(Stack[-4])
0x306: Pop(0)
0x307: PushEmpty(int)
0x308: Call2 0x788

0x309: Pop(0)
0x30a: @@ SetNPCName(Stack[-1])
0x30b: Pop(1)
0x30c: PushEmpty(int)
0x30d: Call2 0x786

0x30e: Pop(0)
0x30f: @@ SetNPCDescription(Stack[-1])
0x310: Pop(1)
0x311: PushEmpty(string)
0x312: Call2 0x78a

0x313: Pop(0)
0x314: @@ SetPhoto(Stack[-1])
0x315: Pop(1)
0x316: PushEmpty(string)
0x317: Call2 0x78c

0x318: Pop(0)
0x319: @@ SetPhoto2(Stack[-1])
0x31a: Pop(1)
0x31b: PushEmpty(int)
0x31c: Call2 0x7b4

0x31d: Pop(0)
0x31e: @@ SetPlayerName(Stack[-1])
0x31f: Pop(1)
0x320: Stack[-2] = (int) -1
0x321: @ IsOverrideActive(Stack[-3])
0x322: Pop(0)
0x323: Push(Stack[-3])
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-10] = (int) -2
0x326: Return(); Pop(8)

0x327: @ DoDialog(Stack[-4])
0x328: Pop(0)
0x329: PushEmpty(bool, object)
0x32a: PushEmpty(object)
0x32b: Call2 0x74a

0x32c: Stack[-2] = Stack[-1]
0x32d: Pop(1)
0x32e: Call2 0x68b

0x32f: Pop(2)
0x330: PushEmpty(object, object)
0x331: Stack[-2] = Stack[-11]
0x332: Stack[-1] = Stack[-6]
0x333: Push(-2, 4); TaskCall(7)
0x334: Call2 0x34b

0x335: Pop(-2, 4); TaskReturn
0x336: Pop(2)
0x337: @@ IsDialogEnd(Stack[-1])
0x338: Pop(0)
0x339: Pop(0); Push((bool) Stack[-1] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: @ sync()
0x33c: Pop(0)
0x33d: @@ IsDialogEnd(Stack[-1])
0x33e: Pop(0)
0x33f: GOTO 0x339

0x340: PushEmpty(object)
0x341: Stack[-1] = Stack[-10]
0x342: Call2 0x67a

0x343: Pop(1)
0x344: @ StopDialog(Stack[-4])
0x345: Pop(0)
0x346: @@ GetReturnValue(Stack[-2])
0x347: Pop(0)
0x348: Stack[-10] = Stack[-2]
0x349: Return(); Pop(8)

0x34a: Stack[-4] = 0
0x34b: PushEmpty()
0x34c: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x34d: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x34e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x34f: Push((int) 1)
0x350: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x351: PushEmpty(string)
0x352: Stack[-1] = "Suspicion"
0x353: Call2 0x393

0x354: Pop(1)
0x355: Push((int) 512800)
0x356: @@ SetMessage(Stack[-1])
0x357: Pop(1)
0x358: @@ ClearReplies()
0x359: Pop(0)
0x35a: PushEmpty(bool)
0x35b: Stack[-1] = (bool) 0
0x35c: PushEmpty(bool, object)
0x35d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35e: Call2 0x79c

0x35f: Pop(1)
0x360: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x363: Call2 0x7a8

0x364: Pop(1)
0x365: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x366: Stack[-1] = (bool) 1
0x367: IF (Stack[-1] == 0) GOTO 0x36d; Pop(1)

0x368: Push((int) 512801)
0x369: Push((int) 14001)
0x36a: Push((int) 14000)
0x36b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36c: Pop(3)
0x36d: Push((int) 512813)
0x36e: Push((int) -1)
0x36f: Push((int) 14013)
0x370: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x371: Pop(3)
0x372: GOTO 0x375

0x373: Return(); Pop(0)

0x374: GOTO 0x34f

0x375: PushEmpty(bool)
0x376: Call2 0x78e

0x377: Pop(0)
0x378: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x379: @ lshWaitForAnimEnd()
0x37a: Pop(0)
0x37b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: GOTO 0x383

0x37e: PushEmpty(string)
0x37f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x380: Call2 0x715

0x381: Pop(1)
0x382: GOTO 0x379

0x383: GOTO 0x392

0x384: Push("all")
0x385: Push("idle")
0x386: @ PlayAnimation(Stack[-2], Stack[-1])
0x387: Pop(2)
0x388: @ WaitForAnimEnd()
0x389: Pop(0)
0x38a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38b: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38c: GOTO 0x392

0x38d: Push("all")
0x38e: Push("idle")
0x38f: @ PlayAnimation(Stack[-2], Stack[-1])
0x390: Pop(2)
0x391: GOTO 0x388

0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: PushEmpty(bool)
0x395: Call2 0x78e

0x396: Pop(0)
0x397: Pop(1); Push((bool) Stack[-1] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: Return(); Pop(0)

0x39a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: Return(); Pop(0)

0x39d: PushEmpty(string, bool)
0x39e: Stack[-2] = Stack[-3]
0x39f: Push("")
0x3a0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a2: Stack[-1] = (bool) 0
0x3a3: GOTO 0x3a5

0x3a4: Stack[-1] = (bool) 1
0x3a5: Call2 0x725

0x3a6: Pop(2)
0x3a7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: Push((int) 1)
0x3ab: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x3ac: PushEmpty()
0x3ad: Call2 0x743

0x3ae: Pop(0)
0x3af: Push((int) 14011)
0x3b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3b2: PushEmpty(object, object)
0x3b3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3b5: Call2 0x790

0x3b6: Pop(2)
0x3b7: Push((int) 13999)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Suspicion"
0x3bc: Call2 0x393

0x3bd: Pop(1)
0x3be: Push((int) 512800)
0x3bf: @@ SetMessage(Stack[-1])
0x3c0: Pop(1)
0x3c1: @@ ClearReplies()
0x3c2: Pop(0)
0x3c3: PushEmpty(bool)
0x3c4: Stack[-1] = (bool) 0
0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Call2 0x79c

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3ca: PushEmpty(bool, object)
0x3cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cc: Call2 0x7a8

0x3cd: Pop(1)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d0; Pop(1)

0x3cf: Stack[-1] = (bool) 1
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d1: Push((int) 512801)
0x3d2: Push((int) 14001)
0x3d3: Push((int) 14000)
0x3d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d5: Pop(3)
0x3d6: Push((int) 512813)
0x3d7: Push((int) -1)
0x3d8: Push((int) 14013)
0x3d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3da: Pop(3)
0x3db: Return(); Pop(0)

0x3dc: Push((int) 14001)
0x3dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3df: PushEmpty(string)
0x3e0: Stack[-1] = "Suspicion"
0x3e1: Call2 0x393

0x3e2: Pop(1)
0x3e3: Push((int) 512802)
0x3e4: @@ SetMessage(Stack[-1])
0x3e5: Pop(1)
0x3e6: @@ ClearReplies()
0x3e7: Pop(0)
0x3e8: Push((int) 512803)
0x3e9: Push((int) 14003)
0x3ea: Push((int) 14002)
0x3eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ec: Pop(3)
0x3ed: Return(); Pop(0)

0x3ee: Push((int) 14003)
0x3ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x405; Pop(1)

0x3f1: PushEmpty(string)
0x3f2: Stack[-1] = "Suspicion"
0x3f3: Call2 0x393

0x3f4: Pop(1)
0x3f5: Push((int) 512804)
0x3f6: @@ SetMessage(Stack[-1])
0x3f7: Pop(1)
0x3f8: @@ ClearReplies()
0x3f9: Pop(0)
0x3fa: Push((int) 512805)
0x3fb: Push((int) 14005)
0x3fc: Push((int) 14004)
0x3fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fe: Pop(3)
0x3ff: Push((int) 512808)
0x400: Push((int) 14005)
0x401: Push((int) 14007)
0x402: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x403: Pop(3)
0x404: Return(); Pop(0)

0x405: Push((int) 14005)
0x406: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x407: IF (Stack[-1] == 0) GOTO 0x417; Pop(1)

0x408: PushEmpty(string)
0x409: Stack[-1] = "Fear"
0x40a: Call2 0x393

0x40b: Pop(1)
0x40c: Push((int) 512806)
0x40d: @@ SetMessage(Stack[-1])
0x40e: Pop(1)
0x40f: @@ ClearReplies()
0x410: Pop(0)
0x411: Push((int) 512807)
0x412: Push((int) 14008)
0x413: Push((int) 14006)
0x414: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x415: Pop(3)
0x416: Return(); Pop(0)

0x417: Push((int) 14008)
0x418: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x419: IF (Stack[-1] == 0) GOTO 0x429; Pop(1)

0x41a: PushEmpty(string)
0x41b: Stack[-1] = "Fear"
0x41c: Call2 0x393

0x41d: Pop(1)
0x41e: Push((int) 512809)
0x41f: @@ SetMessage(Stack[-1])
0x420: Pop(1)
0x421: @@ ClearReplies()
0x422: Pop(0)
0x423: Push((int) 512810)
0x424: Push((int) 14010)
0x425: Push((int) 14009)
0x426: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x427: Pop(3)
0x428: Return(); Pop(0)

0x429: Push((int) 14010)
0x42a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42b: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x42c: PushEmpty(string)
0x42d: Stack[-1] = "Autizm"
0x42e: Call2 0x393

0x42f: Pop(1)
0x430: Push((int) 512811)
0x431: @@ SetMessage(Stack[-1])
0x432: Pop(1)
0x433: @@ ClearReplies()
0x434: Pop(0)
0x435: Push((int) 512812)
0x436: Push((int) -1)
0x437: Push((int) 14011)
0x438: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(3)
0x43a: Return(); Pop(0)

0x43b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x43c: PushEmpty(bool)
0x43d: Call2 0x78e

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x440: @ lshStopAnimation()
0x441: Pop(0)
0x442: GOTO 0x445

0x443: @ StopAnimation()
0x444: Pop(0)
0x445: Return(); Pop(0)

0x446: GOTO 0x3aa

0x447: Return(); Pop(0)

0x448: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x449: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x44a: PushEmpty(bool, object, float)
0x44b: Stack[-2] = Stack[-12]
0x44c: Stack[-1] = (float) 70.0
0x44d: Call2 0x636

0x44e: Pop(2)
0x44f: Pop(1); Push((bool) Stack[-1] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: Stack[-10] = (int) -2
0x452: Return(); Pop(8)

0x453: @ CreateDialog(Stack[-4])
0x454: Pop(0)
0x455: PushEmpty(int)
0x456: Call2 0x788

0x457: Pop(0)
0x458: @@ SetNPCName(Stack[-1])
0x459: Pop(1)
0x45a: PushEmpty(int)
0x45b: Call2 0x786

0x45c: Pop(0)
0x45d: @@ SetNPCDescription(Stack[-1])
0x45e: Pop(1)
0x45f: PushEmpty(string)
0x460: Call2 0x78a

0x461: Pop(0)
0x462: @@ SetPhoto(Stack[-1])
0x463: Pop(1)
0x464: PushEmpty(string)
0x465: Call2 0x78c

0x466: Pop(0)
0x467: @@ SetPhoto2(Stack[-1])
0x468: Pop(1)
0x469: PushEmpty(int)
0x46a: Call2 0x7b4

0x46b: Pop(0)
0x46c: @@ SetPlayerName(Stack[-1])
0x46d: Pop(1)
0x46e: Stack[-2] = (int) -1
0x46f: @ IsOverrideActive(Stack[-3])
0x470: Pop(0)
0x471: Push(Stack[-3])
0x472: IF (Stack[-1] == 0) GOTO 0x475; Pop(1)

0x473: Stack[-10] = (int) -2
0x474: Return(); Pop(8)

0x475: @ DoDialog(Stack[-4])
0x476: Pop(0)
0x477: PushEmpty(bool, object)
0x478: PushEmpty(object)
0x479: Call2 0x74a

0x47a: Stack[-2] = Stack[-1]
0x47b: Pop(1)
0x47c: Call2 0x68b

0x47d: Pop(2)
0x47e: PushEmpty(object, object)
0x47f: Stack[-2] = Stack[-11]
0x480: Stack[-1] = Stack[-6]
0x481: Push(-2, 4); TaskCall(9)
0x482: Call2 0x499

0x483: Pop(-2, 4); TaskReturn
0x484: Pop(2)
0x485: @@ IsDialogEnd(Stack[-1])
0x486: Pop(0)
0x487: Pop(0); Push((bool) Stack[-1] == 0)
0x488: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x489: @ sync()
0x48a: Pop(0)
0x48b: @@ IsDialogEnd(Stack[-1])
0x48c: Pop(0)
0x48d: GOTO 0x487

0x48e: PushEmpty(object)
0x48f: Stack[-1] = Stack[-10]
0x490: Call2 0x67a

0x491: Pop(1)
0x492: @ StopDialog(Stack[-4])
0x493: Pop(0)
0x494: @@ GetReturnValue(Stack[-2])
0x495: Pop(0)
0x496: Stack[-10] = Stack[-2]
0x497: Return(); Pop(8)

0x498: Stack[-4] = 0
0x499: PushEmpty()
0x49a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x49b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x49c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x49d: Push((int) 1)
0x49e: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x49f: PushEmpty(string)
0x4a0: Stack[-1] = "Neutral"
0x4a1: Call2 0x4d3

0x4a2: Pop(1)
0x4a3: Push((int) 540548)
0x4a4: @@ SetMessage(Stack[-1])
0x4a5: Pop(1)
0x4a6: @@ ClearReplies()
0x4a7: Pop(0)
0x4a8: Push((int) 540549)
0x4a9: Push((int) -1)
0x4aa: Push((int) 42558)
0x4ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ac: Pop(3)
0x4ad: Push((int) 540797)
0x4ae: Push((int) -1)
0x4af: Push((int) 42846)
0x4b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b1: Pop(3)
0x4b2: GOTO 0x4b5

0x4b3: Return(); Pop(0)

0x4b4: GOTO 0x49d

0x4b5: PushEmpty(bool)
0x4b6: Call2 0x78e

0x4b7: Pop(0)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4b9: @ lshWaitForAnimEnd()
0x4ba: Pop(0)
0x4bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: GOTO 0x4c3

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4c0: Call2 0x715

0x4c1: Pop(1)
0x4c2: GOTO 0x4b9

0x4c3: GOTO 0x4d2

0x4c4: Push("all")
0x4c5: Push("idle")
0x4c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4c7: Pop(2)
0x4c8: @ WaitForAnimEnd()
0x4c9: Pop(0)
0x4ca: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cd; Pop(1)

0x4cc: GOTO 0x4d2

0x4cd: Push("all")
0x4ce: Push("idle")
0x4cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x4d0: Pop(2)
0x4d1: GOTO 0x4c8

0x4d2: Return(); Pop(0)

0x4d3: PushEmpty()
0x4d4: PushEmpty(bool)
0x4d5: Call2 0x78e

0x4d6: Pop(0)
0x4d7: Pop(1); Push((bool) Stack[-1] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d9: Return(); Pop(0)

0x4da: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Return(); Pop(0)

0x4dd: PushEmpty(string, bool)
0x4de: Stack[-2] = Stack[-3]
0x4df: Push("")
0x4e0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: Stack[-1] = (bool) 0
0x4e3: GOTO 0x4e5

0x4e4: Stack[-1] = (bool) 1
0x4e5: Call2 0x725

0x4e6: Pop(2)
0x4e7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4e8: Return(); Pop(0)

0x4e9: PushEmpty()
0x4ea: Push((int) 1)
0x4eb: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4ec: PushEmpty()
0x4ed: Call2 0x743

0x4ee: Pop(0)
0x4ef: Push((int) 42557)
0x4f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f1: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4f2: PushEmpty(string)
0x4f3: Stack[-1] = "Neutral"
0x4f4: Call2 0x4d3

0x4f5: Pop(1)
0x4f6: Push((int) 540548)
0x4f7: @@ SetMessage(Stack[-1])
0x4f8: Pop(1)
0x4f9: @@ ClearReplies()
0x4fa: Pop(0)
0x4fb: Push((int) 540549)
0x4fc: Push((int) -1)
0x4fd: Push((int) 42558)
0x4fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ff: Pop(3)
0x500: Push((int) 540797)
0x501: Push((int) -1)
0x502: Push((int) 42846)
0x503: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x504: Pop(3)
0x505: Return(); Pop(0)

0x506: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x507: PushEmpty(bool)
0x508: Call2 0x78e

0x509: Pop(0)
0x50a: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50b: @ lshStopAnimation()
0x50c: Pop(0)
0x50d: GOTO 0x510

0x50e: @ StopAnimation()
0x50f: Pop(0)
0x510: Return(); Pop(0)

0x511: GOTO 0x4ea

0x512: Return(); Pop(0)

0x513: Push(GlobalVars[1])
0x514: Stack[-1] = (bool) 0
0x515: GlobalVars[1] = Stack[-1]; Pop(1)
0x516: PushEmpty()
0x517: Call2 0x51a

0x518: Pop(0)
0x519: Return(); Pop(0)

0x51a: PushEmpty(bool)
0x51b: Call2 0x631

0x51c: Pop(0)
0x51d: Pop(1); Push((bool) Stack[-1] == 0)
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: @ Hold()
0x520: Pop(0)
0x521: @ GetDirection(Stack[-0])
0x522: Pop(0)
0x523: PushEmpty()
0x524: Call2 0x5ca

0x525: Pop(0)
0x526: GOTO 0x523

0x527: Return(); Pop(0)

0x528: PushEmpty(object, object)
0x529: Push("player")
0x52a: @ FindActor(Stack[-2], Stack[-1])
0x52b: Pop(1)
0x52c: Pop(0); Push((bool) Stack[-1] == 0)
0x52d: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x52e: Stack[-3] = (bool) 0
0x52f: Return(); Pop(2)

0x530: PushEmpty(bool, object)
0x531: Stack[-1] = Stack[-3]
0x532: Call2 0x628

0x533: Stack[-5] = Stack[-2]
0x534: Pop(2)
0x535: Return(); Pop(2)

0x536: Stack[-1] = 0
0x537: Push(CvectorIndex(Stack[-0], 0))
0x538: Push(CvectorIndex(Stack[-0], 2))
0x539: @ RotateAsync(Stack[-2], Stack[-1])
0x53a: Pop(2)
0x53b: Return(); Pop(0)

0x53c: PushEmpty(object, bool, object, bool)
0x53d: Push("player")
0x53e: @ FindActor(Stack[-3], Stack[-1])
0x53f: Pop(1)
0x540: Pop(0); Push((bool) Stack[-2] == 0)
0x541: IF (Stack[-1] == 0) GOTO 0x544; Pop(1)

0x542: Stack[-5] = (bool) 0
0x543: Return(); Pop(4)

0x544: PushEmpty(float, object)
0x545: Stack[-1] = Stack[-4]
0x546: Call2 0x616

0x547: Pop(1)
0x548: Push((float)90000.0)
0x549: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x54a: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x54b: Stack[-5] = (bool) 0
0x54c: Return(); Pop(4)

0x54d: @ CanSee(Stack[-1], Stack[-2])
0x54e: Pop(0)
0x54f: Stack[-5] = Stack[-1]
0x550: Return(); Pop(4)

0x551: Stack[-2] = 0
0x552: PushEmpty(float, float)
0x553: Push((int) 8)
0x554: Push((int) 16)
0x555: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x556: Pop(2)
0x557: Push((int) 10)
0x558: @ SetTimer(Stack[-1], Stack[-2])
0x559: Pop(1)
0x55a: Return(); Pop(2)

0x55b: Push((int) 10)
0x55c: @ KillTimer(Stack[-1])
0x55d: Pop(1)
0x55e: Return(); Pop(0)

0x55f: PushEmpty()
0x560: Push((int) 10)
0x561: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x562: IF (Stack[-1] == 0) GOTO 0x584; Pop(1)

0x563: PushEmpty()
0x564: Call2 0x55b

0x565: Pop(0)
0x566: PushEmpty(bool)
0x567: Stack[-1] = (bool) 0
0x568: PushEmpty(bool)
0x569: Call2 0x631

0x56a: Pop(0)
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: PushEmpty(bool)
0x56d: Call2 0x53c

0x56e: Pop(0)
0x56f: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x570: Stack[-1] = (bool) 1
0x571: IF (Stack[-1] == 0) GOTO 0x57e; Pop(1)

0x572: PushEmpty(bool)
0x573: Call2 0x528

0x574: Pop(0)
0x575: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x576: PushEmpty(bool, object)
0x577: PushEmpty(object)
0x578: Call2 0x74a

0x579: Stack[-2] = Stack[-1]
0x57a: Pop(1)
0x57b: Call2 0x6c5

0x57c: Pop(2)
0x57d: GOTO 0x584

0x57e: PushEmpty()
0x57f: Call2 0x537

0x580: Pop(0)
0x581: PushEmpty()
0x582: Call2 0x552

0x583: Pop(0)
0x584: Return(); Pop(0)

0x585: PushEmpty()
0x586: Call2 0x611

0x587: Pop(0)
0x588: PushEmpty()
0x589: Call2 0x55b

0x58a: Pop(0)
0x58b: @ lshStopSpeech()
0x58c: Pop(0)
0x58d: @ lshStopAnimation()
0x58e: Pop(0)
0x58f: @ StopAsync()
0x590: Pop(0)
0x591: @ Hold()
0x592: Pop(0)
0x593: Return(); Pop(0)

0x594: @ StopGroup0()
0x595: Pop(0)
0x596: PushEmpty()
0x597: Call2 0x55b

0x598: Pop(0)
0x599: PushEmpty(string)
0x59a: Stack[-1] = "Neutral"
0x59b: Call2 0x715

0x59c: Pop(1)
0x59d: PushEmpty()
0x59e: Call2 0x552

0x59f: Pop(0)
0x5a0: Return(); Pop(0)

0x5a1: PushEmpty()
0x5a2: Push(Stack[-1])
0x5a3: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a4: PushEmpty()
0x5a5: Call2 0x552

0x5a6: Pop(0)
0x5a7: GOTO 0x5ac

0x5a8: PushEmpty(string)
0x5a9: Stack[-1] = "Neutral"
0x5aa: Call2 0x715

0x5ab: Pop(1)
0x5ac: Return(); Pop(0)

0x5ad: PushEmpty(bool, bool)
0x5ae: @ IsOverrideActive(Stack[-1])
0x5af: Pop(0)
0x5b0: Pop(0); Push((bool) Stack[-1] == 0)
0x5b1: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5b2: EventDisable(0)
0x5b3: PushEmpty()
0x5b4: Call2 0x611

0x5b5: Pop(0)
0x5b6: PushEmpty(bool, object)
0x5b7: Stack[-1] = Stack[-5]
0x5b8: Call2 0x628

0x5b9: Pop(2)
0x5ba: EventEnable(0)
0x5bb: PushEmpty(object)
0x5bc: Stack[-1] = Stack[-4]
0x5bd: Call2 0x7c5

0x5be: Pop(1)
0x5bf: PushEmpty(string)
0x5c0: Stack[-1] = "Neutral"
0x5c1: Call2 0x715

0x5c2: Pop(1)
0x5c3: PushEmpty()
0x5c4: Call2 0x55b

0x5c5: Pop(0)
0x5c6: PushEmpty()
0x5c7: Call2 0x552

0x5c8: Pop(0)
0x5c9: Return(); Pop(2)

0x5ca: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x5cb: @ WaitForAnimEnd()
0x5cc: Pop(0)
0x5cd: PushEmpty(bool)
0x5ce: Call2 0x631

0x5cf: Pop(0)
0x5d0: Pop(1); Push((bool) Stack[-1] == 0)
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d3; Pop(1)

0x5d2: Return(); Pop(12)

0x5d3: PushEmpty(int)
0x5d4: Call2 0x775

0x5d5: Stack[-7] = Stack[-1]
0x5d6: Pop(1)
0x5d7: Stack[-5] = (int) 0
0x5d8: PushEmpty(bool)
0x5d9: Stack[-1] = (bool) 0
0x5da: Push((int) 5)
0x5db: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5dc: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5dd: PushEmpty(bool)
0x5de: Call2 0x631

0x5df: Pop(0)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e2; Pop(1)

0x5e1: Stack[-1] = (bool) 1
0x5e2: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x5e3: Pop(0); Push((bool) Stack[-6] == 0)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5e5: Push((int) 3)
0x5e6: @ Sleep(Stack[-1], Stack[-5])
0x5e7: Pop(1)
0x5e8: Pop(0); Push((bool) Stack[-4] == 0)
0x5e9: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5ea: GOTO 0x60c

0x5eb: GOTO 0x601

0x5ec: @ irand(Stack[-3], Stack[-6])
0x5ed: Pop(0)
0x5ee: Push((int) 5)
0x5ef: @ irand(Stack[-3], Stack[-1])
0x5f0: Pop(1)
0x5f1: Push((int) 0)
0x5f2: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5f4: Stack[-3] = (int) 0
0x5f5: Push("all")
0x5f6: PushEmpty(string, int)
0x5f7: Stack[-1] = Stack[-6]
0x5f8: Call2 0x76e

0x5f9: Pop(1)
0x5fa: @ PlayAnimation(Stack[-2], Stack[-1])
0x5fb: Pop(2)
0x5fc: @ WaitForAnimEnd(Stack[-1])
0x5fd: Pop(0)
0x5fe: Pop(0); Push((bool) Stack[-1] == 0)
0x5ff: IF (Stack[-1] == 0) GOTO 0x601; Pop(1)

0x600: GOTO 0x60c

0x601: PushEmpty(bool)
0x602: Call2 0x60f

0x603: Pop(0)
0x604: Pop(1); Push((bool) Stack[-1] == 0)
0x605: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x606: GOTO 0x60c

0x607: @ ResetAAS()
0x608: Pop(0)
0x609: Push((int) 1)
0x60a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x60b: GOTO 0x5d8

0x60c: @ ResetAAS()
0x60d: Pop(0)
0x60e: Return(); Pop(12)

0x60f: Stack[-1] = (bool) 1
0x610: Return(); Pop(0)

0x611: @ StopAnimation()
0x612: Pop(0)
0x613: @ StopGroup0()
0x614: Pop(0)
0x615: Return(); Pop(0)

0x616: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x617: @ GetPosition(Stack[-3])
0x618: Pop(0)
0x619: @@ GetPosition(Stack[-2])
0x61a: Pop(0)
0x61b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x61c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x61d: Return(); Pop(6)

0x61e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x61f: @ GetPosition(Stack[-3])
0x620: Pop(0)
0x621: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x622: Push(CvectorIndex(Stack[-2], 0))
0x623: Push(CvectorIndex(Stack[-3], 2))
0x624: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x625: Pop(2)
0x626: Stack[-8] = Stack[-1]
0x627: Return(); Pop(6)

0x628: PushEmpty(cvector, cvector)
0x629: @@ GetPosition(Stack[-1])
0x62a: Pop(0)
0x62b: PushEmpty(bool, cvector)
0x62c: Stack[-1] = Stack[-3]
0x62d: Call2 0x61e

0x62e: Stack[-6] = Stack[-2]
0x62f: Pop(2)
0x630: Return(); Pop(2)

0x631: PushEmpty(bool, bool)
0x632: @ IsLoaded(Stack[-1])
0x633: Pop(0)
0x634: Stack[-3] = Stack[-1]
0x635: Return(); Pop(2)

0x636: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x637: @@ GetPosition(Stack[-8])
0x638: Pop(0)
0x639: @@ GetEyesHeight(Stack[-9])
0x63a: Pop(0)
0x63b: Push(CvectorIndex(Stack[-8], 1))
0x63c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x63d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x63e: @ GetPosition(Stack[-7])
0x63f: Pop(0)
0x640: @ GetEyesHeight(Stack[-9])
0x641: Pop(0)
0x642: Push(CvectorIndex(Stack[-7], 1))
0x643: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x644: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x645: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x646: Push(CvectorIndex(Stack[-6], 1))
0x647: Stack[-1] = (int) 0
0x648: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x649: Pop(0); Push(Stack[-6] | Stack[-6]);
0x64a: Pop(1); Push(Sqrt(Stack[-1]))
0x64b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x64c: Stack[-5] = -Stack[-6]; Pop(0);
0x64d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x64e: PushEmpty(cvector, cvector)
0x64f: Push(CVector(0.0, 1.0, 0.0))
0x650: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x651: Call2 0x750

0x652: Pop(1)
0x653: Push((int) 25)
0x654: Pop(2); Push(Stack[-2] * Stack[-1]);
0x655: Pop(2); Push(Stack[-2] + Stack[-1]);
0x656: Push(CVector(0.0, 10.0, 0.0))
0x657: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x658: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x659: @ IsOverrideActive(Stack[-2])
0x65a: Pop(0)
0x65b: Push(Stack[-2])
0x65c: IF (Stack[-1] == 0) GOTO 0x65f; Pop(1)

0x65d: Stack[-21] = (bool) 0
0x65e: Return(); Pop(18)

0x65f: @ StopWorld()
0x660: Pop(0)
0x661: @ CameraTransit(Stack[-3], Stack[-5])
0x662: Pop(0)
0x663: Push(CvectorIndex(Stack[-4], 0))
0x664: Push(CvectorIndex(Stack[-5], 2))
0x665: @ Rotate(Stack[-2], Stack[-1])
0x666: Pop(2)
0x667: PushEmpty(bool)
0x668: Call2 0x78e

0x669: Pop(0)
0x66a: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x66b: GOTO 0x674

0x66c: Push("head")
0x66d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x66e: Pop(1)
0x66f: Push(Stack[-1])
0x670: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x671: Push("head")
0x672: @ LookAsyncCamera(Stack[-1])
0x673: Pop(1)
0x674: @ CameraWaitForPlayFinish()
0x675: Pop(0)
0x676: @ ResumeWorld()
0x677: Pop(0)
0x678: Stack[-21] = (bool) 1
0x679: Return(); Pop(18)

0x67a: PushEmpty(bool, bool)
0x67b: @ CameraSwitchToNormal()
0x67c: Pop(0)
0x67d: PushEmpty(bool)
0x67e: Call2 0x78e

0x67f: Pop(0)
0x680: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x681: GOTO 0x68a

0x682: Push("head")
0x683: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x684: Pop(1)
0x685: Push(Stack[-1])
0x686: IF (Stack[-1] == 0) GOTO 0x68a; Pop(1)

0x687: Push("head")
0x688: @ UnlookAsync(Stack[-1])
0x689: Pop(1)
0x68a: Return(); Pop(2)

0x68b: PushEmpty(int, int, int, int)
0x68c: Push("voice_common")
0x68d: @ GetVariable(Stack[-1], Stack[-3])
0x68e: Pop(1)
0x68f: Push(Stack[-2])
0x690: IF (Stack[-1] == 0) GOTO 0x6b1; Pop(1)

0x691: PushEmpty(bool, object)
0x692: Stack[-1] = Stack[-7]
0x693: Call2 0x6c5

0x694: Pop(1)
0x695: Pop(1); Push((bool) Stack[-1] == 0)
0x696: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x697: PushEmpty(bool, object)
0x698: Stack[-1] = Stack[-7]
0x699: Call2 0x6ea

0x69a: Pop(1)
0x69b: Pop(1); Push((bool) Stack[-1] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69d: Stack[-6] = (bool) 0
0x69e: Return(); Pop(4)

0x69f: Push((int) 2)
0x6a0: @ irand(Stack[-2], Stack[-1])
0x6a1: Pop(1)
0x6a2: Push(Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x6a4: Push("voice_common")
0x6a5: Push((int) 1)
0x6a6: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6a7: Push((int) 3)
0x6a8: Pop(2); Push(Stack[-2] % Stack[-1]);
0x6a9: @ SetVariable(Stack[-2], Stack[-1])
0x6aa: Pop(2)
0x6ab: GOTO 0x6b0

0x6ac: Push("voice_common")
0x6ad: Push((int) 0)
0x6ae: @ SetVariable(Stack[-2], Stack[-1])
0x6af: Pop(2)
0x6b0: GOTO 0x6c3

0x6b1: PushEmpty(bool, object)
0x6b2: Stack[-1] = Stack[-7]
0x6b3: Call2 0x6ea

0x6b4: Pop(1)
0x6b5: Pop(1); Push((bool) Stack[-1] == 0)
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6b7: PushEmpty(bool, object)
0x6b8: Stack[-1] = Stack[-7]
0x6b9: Call2 0x6c5

0x6ba: Pop(1)
0x6bb: Pop(1); Push((bool) Stack[-1] == 0)
0x6bc: IF (Stack[-1] == 0) GOTO 0x6bf; Pop(1)

0x6bd: Stack[-6] = (bool) 0
0x6be: Return(); Pop(4)

0x6bf: Push("voice_common")
0x6c0: Push((int) 1)
0x6c1: @ SetVariable(Stack[-2], Stack[-1])
0x6c2: Pop(2)
0x6c3: Stack[-6] = (bool) 1
0x6c4: Return(); Pop(4)

0x6c5: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6c6: Stack[-5] = "c"
0x6c7: Stack[-4] = (int) 0
0x6c8: Push((int) 1)
0x6c9: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6ca: Push((int) 1)
0x6cb: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6cc: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6cd: @@ HasProperty(Stack[-1], Stack[-4])
0x6ce: Pop(1)
0x6cf: Pop(0); Push((bool) Stack[-3] == 0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d1: GOTO 0x6d5

0x6d2: Push((int) 1)
0x6d3: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6d4: GOTO 0x6c8

0x6d5: Pop(0); Push((bool) Stack[-4] == 0)
0x6d6: IF (Stack[-1] == 0) GOTO 0x6d9; Pop(1)

0x6d7: Stack[-12] = (bool) 0
0x6d8: Return(); Pop(10)

0x6d9: Stack[-2] = (int) 0
0x6da: Push((int) 1)
0x6db: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6dc: IF (Stack[-1] == 0) GOTO 0x6df; Pop(1)

0x6dd: @ irand(Stack[-2], Stack[-4])
0x6de: Pop(0)
0x6df: Push((int) 1)
0x6e0: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6e1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6e2: @@ GetProperty(Stack[-1], Stack[-2])
0x6e3: Pop(1)
0x6e4: PushEmpty(bool, string)
0x6e5: Stack[-1] = Stack[-3]
0x6e6: Call2 0x734

0x6e7: Stack[-14] = Stack[-2]
0x6e8: Pop(2)
0x6e9: Return(); Pop(10)

0x6ea: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6eb: Push("d")
0x6ec: PushEmpty(int)
0x6ed: Call2 0x75f

0x6ee: Pop(0)
0x6ef: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f0: Push("m")
0x6f1: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6f2: Stack[-4] = (int) 0
0x6f3: Push((int) 1)
0x6f4: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f5: Push((int) 1)
0x6f6: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6f7: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6f8: @@ HasProperty(Stack[-1], Stack[-4])
0x6f9: Pop(1)
0x6fa: Pop(0); Push((bool) Stack[-3] == 0)
0x6fb: IF (Stack[-1] == 0) GOTO 0x6fd; Pop(1)

0x6fc: GOTO 0x700

0x6fd: Push((int) 1)
0x6fe: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6ff: GOTO 0x6f3

0x700: Pop(0); Push((bool) Stack[-4] == 0)
0x701: IF (Stack[-1] == 0) GOTO 0x704; Pop(1)

0x702: Stack[-12] = (bool) 0
0x703: Return(); Pop(10)

0x704: Stack[-2] = (int) 0
0x705: Push((int) 1)
0x706: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x707: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x708: @ irand(Stack[-2], Stack[-4])
0x709: Pop(0)
0x70a: Push((int) 1)
0x70b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x70c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x70d: @@ GetProperty(Stack[-1], Stack[-2])
0x70e: Pop(1)
0x70f: PushEmpty(bool, string)
0x710: Stack[-1] = Stack[-3]
0x711: Call2 0x734

0x712: Stack[-14] = Stack[-2]
0x713: Pop(2)
0x714: Return(); Pop(10)

0x715: PushEmpty(bool, float, float, bool, float, float)
0x716: @ lshHasAnimation(Stack[-3], Stack[-7])
0x717: Pop(0)
0x718: Push(Stack[-3])
0x719: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x71b: Pop(0)
0x71c: Push((bool) 0)
0x71d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x71e: Pop(1)
0x71f: GOTO 0x724

0x720: Push("Can't find lsh animation : ")
0x721: Pop(1); Push(Stack[-1] + Stack[-8]);
0x722: @ Trace(Stack[-1])
0x723: Pop(1)
0x724: Return(); Pop(6)

0x725: PushEmpty(bool, float, float, bool, float, float)
0x726: @ lshHasAnimation(Stack[-3], Stack[-8])
0x727: Pop(0)
0x728: Push(Stack[-3])
0x729: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x72b: Pop(0)
0x72c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x72d: Pop(0)
0x72e: GOTO 0x733

0x72f: Push("Can't find lsh animation : ")
0x730: Pop(1); Push(Stack[-1] + Stack[-9]);
0x731: @ Trace(Stack[-1])
0x732: Pop(1)
0x733: Return(); Pop(6)

0x734: PushEmpty(bool, bool)
0x735: PushEmpty(bool)
0x736: Call2 0x78e

0x737: Pop(0)
0x738: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x739: @ lshHasSpeech(Stack[-1], Stack[-3])
0x73a: Pop(0)
0x73b: Push(Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x73d: @ lshPlaySpeech(Stack[-3])
0x73e: Pop(0)
0x73f: Stack[-4] = (bool) 1
0x740: Return(); Pop(2)

0x741: Stack[-4] = (bool) 0
0x742: Return(); Pop(2)

0x743: PushEmpty(bool)
0x744: Call2 0x78e

0x745: Pop(0)
0x746: IF (Stack[-1] == 0) GOTO 0x749; Pop(1)

0x747: @ lshStopSpeech()
0x748: Pop(0)
0x749: Return(); Pop(0)

0x74a: PushEmpty(object, object)
0x74b: @ self(Stack[-1])
0x74c: Pop(0)
0x74d: Stack[-3] = Stack[-1]
0x74e: Return(); Pop(2)

0x74f: Stack[-1] = 0
0x750: PushEmpty(float, float)
0x751: Pop(0); Push(Stack[-3] | Stack[-3]);
0x752: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x753: Push((float)0.0)
0x754: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x755: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x756: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x757: Return(); Pop(2)

0x758: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x759: Return(); Pop(2)

0x75a: PushEmpty(int, int)
0x75b: @ GetVariable(Stack[-3], Stack[-1])
0x75c: Pop(0)
0x75d: Stack[-4] = Stack[-1]
0x75e: Return(); Pop(2)

0x75f: PushEmpty(float, float)
0x760: @ GetGameTime(Stack[-1])
0x761: Pop(0)
0x762: Push((int) 1)
0x763: PushEmpty(int)
0x764: Push((int) 24)
0x765: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x766: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x767: Return(); Pop(2)

0x768: PushEmpty()
0x769: PushEmpty(int)
0x76a: Call2 0x75f

0x76b: Pop(0)
0x76c: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x76d: Return(); Pop(0)

0x76e: PushEmpty(string, string)
0x76f: Stack[-1] = "idle"
0x770: Push(Stack[-3])
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x773: Stack[-4] = Stack[-1]
0x774: Return(); Pop(2)

0x775: PushEmpty(int, bool, int, bool)
0x776: Stack[-2] = (int) 0
0x777: Push("all")
0x778: PushEmpty(string, int)
0x779: Stack[-1] = Stack[-5]
0x77a: Call2 0x76e

0x77b: Pop(1)
0x77c: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x77d: Pop(2)
0x77e: Pop(0); Push((bool) Stack[-1] == 0)
0x77f: IF (Stack[-1] == 0) GOTO 0x781; Pop(1)

0x780: GOTO 0x784

0x781: Push((int) 1)
0x782: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x783: GOTO 0x777

0x784: Stack[-5] = Stack[-2]
0x785: Return(); Pop(4)

0x786: Stack[-1] = (int) 515546
0x787: Return(); Pop(0)

0x788: Stack[-1] = (int) 502871
0x789: Return(); Pop(0)

0x78a: Stack[-1] = "ui/NPC_Mishka.png"
0x78b: Return(); Pop(0)

0x78c: Stack[-1] = "ui/NPC_Mishka_b.png"
0x78d: Return(); Pop(0)

0x78e: Stack[-1] = (bool) 1
0x78f: Return(); Pop(0)

0x790: PushEmpty()
0x791: Push("ood6Mishka1")
0x792: Push((int) 1)
0x793: @ SetVariable(Stack[-2], Stack[-1])
0x794: Pop(2)
0x795: Return(); Pop(0)

0x796: PushEmpty()
0x797: Push("KnowMishka")
0x798: Push((int) 1)
0x799: @ SetVariable(Stack[-2], Stack[-1])
0x79a: Pop(2)
0x79b: Return(); Pop(0)

0x79c: PushEmpty()
0x79d: PushEmpty(int, string)
0x79e: Stack[-1] = "d6q01"
0x79f: Call2 0x75a

0x7a0: Pop(1)
0x7a1: Push((int) 4)
0x7a2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7a6; Pop(1)

0x7a4: Stack[-2] = (bool) 1
0x7a5: Return(); Pop(0)

0x7a6: Stack[-2] = (bool) 0
0x7a7: Return(); Pop(0)

0x7a8: PushEmpty()
0x7a9: PushEmpty(int, string)
0x7aa: Stack[-1] = "ood6Mishka1"
0x7ab: Call2 0x75a

0x7ac: Pop(1)
0x7ad: Push((int) 0)
0x7ae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7af: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7b0: Stack[-2] = (bool) 1
0x7b1: Return(); Pop(0)

0x7b2: Stack[-2] = (bool) 0
0x7b3: Return(); Pop(0)

0x7b4: PushEmpty(int, int)
0x7b5: Push("branch")
0x7b6: @ GetVariable(Stack[-1], Stack[-2])
0x7b7: Pop(1)
0x7b8: Push((int) 0)
0x7b9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bb: Stack[-3] = (int) 1
0x7bc: Return(); Pop(2)

0x7bd: GOTO 0x7c3

0x7be: Push((int) 1)
0x7bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7c1: Stack[-3] = (int) 2
0x7c2: Return(); Pop(2)

0x7c3: Stack[-3] = (int) 3
0x7c4: Return(); Pop(2)

0x7c5: PushEmpty()
0x7c6: Push(GlobalVars[1])
0x7c7: Pop(1); Push((bool) Stack[-1] == 0)
0x7c8: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7c9: PushEmpty(int, object)
0x7ca: Stack[-1] = Stack[-3]
0x7cb: Push(-2, 1); TaskCall(2)
0x7cc: Call2 0x103

0x7cd: Pop(-2, 1); TaskReturn
0x7ce: Pop(2)
0x7cf: Push(GlobalVars[1])
0x7d0: Stack[-1] = (bool) 1
0x7d1: GlobalVars[1] = Stack[-1]; Pop(1)
0x7d2: PushEmpty(bool, int)
0x7d3: Stack[-1] = (int) 3
0x7d4: Call2 0x768

0x7d5: Pop(1)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7d7: PushEmpty(int, object)
0x7d8: Stack[-1] = Stack[-3]
0x7d9: Push(-2, 1); TaskCall(4)
0x7da: Call2 0x239

0x7db: Pop(-2, 1); TaskReturn
0x7dc: Pop(2)
0x7dd: Return(); Pop(0)

0x7de: PushEmpty(bool, int)
0x7df: Stack[-1] = (int) 6
0x7e0: Call2 0x768

0x7e1: Pop(1)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e3: PushEmpty(int, object)
0x7e4: Stack[-1] = Stack[-3]
0x7e5: Push(-2, 1); TaskCall(6)
0x7e6: Call2 0x2fa

0x7e7: Pop(-2, 1); TaskReturn
0x7e8: Pop(2)
0x7e9: Return(); Pop(0)

0x7ea: PushEmpty(bool, int)
0x7eb: Stack[-1] = (int) 12
0x7ec: Call2 0x768

0x7ed: Pop(1)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f6; Pop(1)

0x7ef: PushEmpty(int, object)
0x7f0: Stack[-1] = Stack[-3]
0x7f1: Push(-2, 1); TaskCall(0)
0x7f2: Call2 0x0

0x7f3: Pop(-2, 1); TaskReturn
0x7f4: Pop(2)
0x7f5: Return(); Pop(0)

0x7f6: PushEmpty(int, object)
0x7f7: Stack[-1] = Stack[-3]
0x7f8: Push(-2, 1); TaskCall(8)
0x7f9: Call2 0x448

0x7fa: Pop(-2, 1); TaskReturn
0x7fb: Pop(2)
0x7fc: Return(); Pop(0)

