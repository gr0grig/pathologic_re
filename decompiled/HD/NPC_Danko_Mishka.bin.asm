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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
		EVENT_11 Op = 0xab Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1d2 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2a6 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3eb Vars = (int, int)
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
0xe: Call2 0x78a

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x788

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x78c

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x78e

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x7b6

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
0x31: Call2 0x74c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x68d

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
0x48: Call2 0x67b

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
0x56: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x57: PushEmpty(object, object)
0x58: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x59: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5a: Call2 0x798

0x5b: Pop(2)
0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0x95

0x5f: Pop(1)
0x60: Push((int) 500457)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 500458)
0x66: Push((int) 530)
0x67: Push((int) 527)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 500459)
0x6b: Push((int) 532)
0x6c: Push((int) 528)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: Push((int) 500460)
0x70: Push((int) 530)
0x71: Push((int) 529)
0x72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73: Pop(3)
0x74: GOTO 0x77

0x75: Return(); Pop(0)

0x76: GOTO 0x55

0x77: PushEmpty(bool)
0x78: Call2 0x790

0x79: Pop(0)
0x7a: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x7b: @ lshWaitForAnimEnd()
0x7c: Pop(0)
0x7d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7e: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7f: GOTO 0x85

0x80: PushEmpty(string)
0x81: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x82: Call2 0x717

0x83: Pop(1)
0x84: GOTO 0x7b

0x85: GOTO 0x94

0x86: Push("all")
0x87: Push("idle")
0x88: @ PlayAnimation(Stack[-2], Stack[-1])
0x89: Pop(2)
0x8a: @ WaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: Push("all")
0x90: Push("idle")
0x91: @ PlayAnimation(Stack[-2], Stack[-1])
0x92: Pop(2)
0x93: GOTO 0x8a

0x94: Return(); Pop(0)

0x95: PushEmpty()
0x96: PushEmpty(bool)
0x97: Call2 0x790

0x98: Pop(0)
0x99: Pop(1); Push((bool) Stack[-1] == 0)
0x9a: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9b: Return(); Pop(0)

0x9c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: PushEmpty(string, bool)
0xa0: Stack[-2] = Stack[-3]
0xa1: Push("")
0xa2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-1] = (bool) 0
0xa5: GOTO 0xa7

0xa6: Stack[-1] = (bool) 1
0xa7: Call2 0x727

0xa8: Pop(2)
0xa9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xaa: Return(); Pop(0)

0xab: PushEmpty()
0xac: Push((int) 1)
0xad: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0xae: PushEmpty()
0xaf: Call2 0x745

0xb0: Pop(0)
0xb1: Push((int) 526)
0xb2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xb4: PushEmpty(object, object)
0xb5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7: Call2 0x798

0xb8: Pop(2)
0xb9: PushEmpty(string)
0xba: Stack[-1] = "Neutral"
0xbb: Call2 0x95

0xbc: Pop(1)
0xbd: Push((int) 500457)
0xbe: @@ SetMessage(Stack[-1])
0xbf: Pop(1)
0xc0: @@ ClearReplies()
0xc1: Pop(0)
0xc2: Push((int) 500458)
0xc3: Push((int) 530)
0xc4: Push((int) 527)
0xc5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6: Pop(3)
0xc7: Push((int) 500459)
0xc8: Push((int) 532)
0xc9: Push((int) 528)
0xca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: Push((int) 500460)
0xcd: Push((int) 530)
0xce: Push((int) 529)
0xcf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0: Pop(3)
0xd1: Return(); Pop(0)

0xd2: Push((int) 532)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0x95

0xd8: Pop(1)
0xd9: Push((int) 500462)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 500466)
0xdf: Push((int) 538)
0xe0: Push((int) 536)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 500467)
0xe4: Push((int) -1)
0xe5: Push((int) 537)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Push((int) 538)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call2 0x95

0xef: Pop(1)
0xf0: Push((int) 500468)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 500470)
0xf6: Push((int) -1)
0xf7: Push((int) 540)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Push((int) 500471)
0xfb: Push((int) -1)
0xfc: Push((int) 541)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Return(); Pop(0)

0x100: Push((int) 530)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x117; Pop(1)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral"
0x105: Call2 0x95

0x106: Pop(1)
0x107: Push((int) 500461)
0x108: @@ SetMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ ClearReplies()
0x10b: Pop(0)
0x10c: Push((int) 500463)
0x10d: Push((int) 535)
0x10e: Push((int) 533)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Push((int) 500464)
0x112: Push((int) -1)
0x113: Push((int) 534)
0x114: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115: Pop(3)
0x116: Return(); Pop(0)

0x117: Push((int) 535)
0x118: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119: IF (Stack[-1] == 0) GOTO 0x129; Pop(1)

0x11a: PushEmpty(string)
0x11b: Stack[-1] = "Neutral"
0x11c: Call2 0x95

0x11d: Pop(1)
0x11e: Push((int) 500465)
0x11f: @@ SetMessage(Stack[-1])
0x120: Pop(1)
0x121: @@ ClearReplies()
0x122: Pop(0)
0x123: Push((int) 506269)
0x124: Push((int) -1)
0x125: Push((int) 6939)
0x126: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127: Pop(3)
0x128: Return(); Pop(0)

0x129: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12a: PushEmpty(bool)
0x12b: Call2 0x790

0x12c: Pop(0)
0x12d: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12e: @ lshStopAnimation()
0x12f: Pop(0)
0x130: GOTO 0x133

0x131: @ StopAnimation()
0x132: Pop(0)
0x133: Return(); Pop(0)

0x134: GOTO 0xac

0x135: Return(); Pop(0)

0x136: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x137: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x138: PushEmpty(bool, object, float)
0x139: Stack[-2] = Stack[-12]
0x13a: Stack[-1] = (float) 70.0
0x13b: Call2 0x636

0x13c: Pop(2)
0x13d: Pop(1); Push((bool) Stack[-1] == 0)
0x13e: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x13f: Stack[-10] = (int) -2
0x140: Return(); Pop(8)

0x141: @ CreateDialog(Stack[-4])
0x142: Pop(0)
0x143: PushEmpty(int)
0x144: Call2 0x78a

0x145: Pop(0)
0x146: @@ SetNPCName(Stack[-1])
0x147: Pop(1)
0x148: PushEmpty(int)
0x149: Call2 0x788

0x14a: Pop(0)
0x14b: @@ SetNPCDescription(Stack[-1])
0x14c: Pop(1)
0x14d: PushEmpty(string)
0x14e: Call2 0x78c

0x14f: Pop(0)
0x150: @@ SetPhoto(Stack[-1])
0x151: Pop(1)
0x152: PushEmpty(string)
0x153: Call2 0x78e

0x154: Pop(0)
0x155: @@ SetPhoto2(Stack[-1])
0x156: Pop(1)
0x157: PushEmpty(int)
0x158: Call2 0x7b6

0x159: Pop(0)
0x15a: @@ SetPlayerName(Stack[-1])
0x15b: Pop(1)
0x15c: Stack[-2] = (int) -1
0x15d: @ IsOverrideActive(Stack[-3])
0x15e: Pop(0)
0x15f: Push(Stack[-3])
0x160: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x161: Stack[-10] = (int) -2
0x162: Return(); Pop(8)

0x163: @ DoDialog(Stack[-4])
0x164: Pop(0)
0x165: PushEmpty(bool, object)
0x166: PushEmpty(object)
0x167: Call2 0x74c

0x168: Stack[-2] = Stack[-1]
0x169: Pop(1)
0x16a: Call2 0x68d

0x16b: Pop(2)
0x16c: PushEmpty(object, object)
0x16d: Stack[-2] = Stack[-11]
0x16e: Stack[-1] = Stack[-6]
0x16f: Push(-2, 4); TaskCall(3)
0x170: Call2 0x187

0x171: Pop(-2, 4); TaskReturn
0x172: Pop(2)
0x173: @@ IsDialogEnd(Stack[-1])
0x174: Pop(0)
0x175: Pop(0); Push((bool) Stack[-1] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x177: @ sync()
0x178: Pop(0)
0x179: @@ IsDialogEnd(Stack[-1])
0x17a: Pop(0)
0x17b: GOTO 0x175

0x17c: PushEmpty(object)
0x17d: Stack[-1] = Stack[-10]
0x17e: Call2 0x67b

0x17f: Pop(1)
0x180: @ StopDialog(Stack[-4])
0x181: Pop(0)
0x182: @@ GetReturnValue(Stack[-2])
0x183: Pop(0)
0x184: Stack[-10] = Stack[-2]
0x185: Return(); Pop(8)

0x186: Stack[-4] = 0
0x187: PushEmpty()
0x188: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x189: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x18a: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18b: Push((int) 1)
0x18c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x18d: PushEmpty(string)
0x18e: Stack[-1] = "Dream"
0x18f: Call2 0x1bc

0x190: Pop(1)
0x191: Push((int) 510004)
0x192: @@ SetMessage(Stack[-1])
0x193: Pop(1)
0x194: @@ ClearReplies()
0x195: Pop(0)
0x196: Push((int) 510015)
0x197: Push((int) -1)
0x198: Push((int) 11037)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: GOTO 0x19e

0x19c: Return(); Pop(0)

0x19d: GOTO 0x18b

0x19e: PushEmpty(bool)
0x19f: Call2 0x790

0x1a0: Pop(0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a2: @ lshWaitForAnimEnd()
0x1a3: Pop(0)
0x1a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a6: GOTO 0x1ac

0x1a7: PushEmpty(string)
0x1a8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a9: Call2 0x717

0x1aa: Pop(1)
0x1ab: GOTO 0x1a2

0x1ac: GOTO 0x1bb

0x1ad: Push("all")
0x1ae: Push("idle")
0x1af: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: @ WaitForAnimEnd()
0x1b2: Pop(0)
0x1b3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1bb

0x1b6: Push("all")
0x1b7: Push("idle")
0x1b8: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: GOTO 0x1b1

0x1bb: Return(); Pop(0)

0x1bc: PushEmpty()
0x1bd: PushEmpty(bool)
0x1be: Call2 0x790

0x1bf: Pop(0)
0x1c0: Pop(1); Push((bool) Stack[-1] == 0)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: Return(); Pop(0)

0x1c3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1c4: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c5: Return(); Pop(0)

0x1c6: PushEmpty(string, bool)
0x1c7: Stack[-2] = Stack[-3]
0x1c8: Push("")
0x1c9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1cb: Stack[-1] = (bool) 0
0x1cc: GOTO 0x1ce

0x1cd: Stack[-1] = (bool) 1
0x1ce: Call2 0x727

0x1cf: Pop(2)
0x1d0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1d1: Return(); Pop(0)

0x1d2: PushEmpty()
0x1d3: Push((int) 1)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1d5: PushEmpty()
0x1d6: Call2 0x745

0x1d7: Pop(0)
0x1d8: Push((int) 11026)
0x1d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1da: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1db: PushEmpty(string)
0x1dc: Stack[-1] = "Dream"
0x1dd: Call2 0x1bc

0x1de: Pop(1)
0x1df: Push((int) 510004)
0x1e0: @@ SetMessage(Stack[-1])
0x1e1: Pop(1)
0x1e2: @@ ClearReplies()
0x1e3: Pop(0)
0x1e4: Push((int) 510015)
0x1e5: Push((int) -1)
0x1e6: Push((int) 11037)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x790

0x1ed: Pop(0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: @ lshStopAnimation()
0x1f0: Pop(0)
0x1f1: GOTO 0x1f4

0x1f2: @ StopAnimation()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: GOTO 0x1d3

0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f9: PushEmpty(bool, object, float)
0x1fa: Stack[-2] = Stack[-12]
0x1fb: Stack[-1] = (float) 70.0
0x1fc: Call2 0x636

0x1fd: Pop(2)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-10] = (int) -2
0x201: Return(); Pop(8)

0x202: @ CreateDialog(Stack[-4])
0x203: Pop(0)
0x204: PushEmpty(int)
0x205: Call2 0x78a

0x206: Pop(0)
0x207: @@ SetNPCName(Stack[-1])
0x208: Pop(1)
0x209: PushEmpty(int)
0x20a: Call2 0x788

0x20b: Pop(0)
0x20c: @@ SetNPCDescription(Stack[-1])
0x20d: Pop(1)
0x20e: PushEmpty(string)
0x20f: Call2 0x78c

0x210: Pop(0)
0x211: @@ SetPhoto(Stack[-1])
0x212: Pop(1)
0x213: PushEmpty(string)
0x214: Call2 0x78e

0x215: Pop(0)
0x216: @@ SetPhoto2(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(int)
0x219: Call2 0x7b6

0x21a: Pop(0)
0x21b: @@ SetPlayerName(Stack[-1])
0x21c: Pop(1)
0x21d: Stack[-2] = (int) -1
0x21e: @ IsOverrideActive(Stack[-3])
0x21f: Pop(0)
0x220: Push(Stack[-3])
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-10] = (int) -2
0x223: Return(); Pop(8)

0x224: @ DoDialog(Stack[-4])
0x225: Pop(0)
0x226: PushEmpty(bool, object)
0x227: PushEmpty(object)
0x228: Call2 0x74c

0x229: Stack[-2] = Stack[-1]
0x22a: Pop(1)
0x22b: Call2 0x68d

0x22c: Pop(2)
0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[-11]
0x22f: Stack[-1] = Stack[-6]
0x230: Push(-2, 4); TaskCall(5)
0x231: Call2 0x248

0x232: Pop(-2, 4); TaskReturn
0x233: Pop(2)
0x234: @@ IsDialogEnd(Stack[-1])
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: @ sync()
0x239: Pop(0)
0x23a: @@ IsDialogEnd(Stack[-1])
0x23b: Pop(0)
0x23c: GOTO 0x236

0x23d: PushEmpty(object)
0x23e: Stack[-1] = Stack[-10]
0x23f: Call2 0x67b

0x240: Pop(1)
0x241: @ StopDialog(Stack[-4])
0x242: Pop(0)
0x243: @@ GetReturnValue(Stack[-2])
0x244: Pop(0)
0x245: Stack[-10] = Stack[-2]
0x246: Return(); Pop(8)

0x247: Stack[-4] = 0
0x248: PushEmpty()
0x249: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x24a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x24b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24c: Push((int) 1)
0x24d: IF (Stack[-1] == 0) GOTO 0x272; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Suspicion"
0x250: Call2 0x290

0x251: Pop(1)
0x252: Push((int) 512800)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: PushEmpty(bool)
0x258: Stack[-1] = (bool) 0
0x259: PushEmpty(bool, object)
0x25a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25b: Call2 0x79e

0x25c: Pop(1)
0x25d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x25e: PushEmpty(bool, object)
0x25f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x260: Call2 0x7aa

0x261: Pop(1)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: Stack[-1] = (bool) 1
0x264: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x265: Push((int) 512801)
0x266: Push((int) 14001)
0x267: Push((int) 14000)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Push((int) 512813)
0x26b: Push((int) -1)
0x26c: Push((int) 14013)
0x26d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26e: Pop(3)
0x26f: GOTO 0x272

0x270: Return(); Pop(0)

0x271: GOTO 0x24c

0x272: PushEmpty(bool)
0x273: Call2 0x790

0x274: Pop(0)
0x275: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x276: @ lshWaitForAnimEnd()
0x277: Pop(0)
0x278: Push( Stack[3 + Tasks[-1].StackPointer] )
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: GOTO 0x280

0x27b: PushEmpty(string)
0x27c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x27d: Call2 0x717

0x27e: Pop(1)
0x27f: GOTO 0x276

0x280: GOTO 0x28f

0x281: Push("all")
0x282: Push("idle")
0x283: @ PlayAnimation(Stack[-2], Stack[-1])
0x284: Pop(2)
0x285: @ WaitForAnimEnd()
0x286: Pop(0)
0x287: Push( Stack[3 + Tasks[-1].StackPointer] )
0x288: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x289: GOTO 0x28f

0x28a: Push("all")
0x28b: Push("idle")
0x28c: @ PlayAnimation(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: GOTO 0x285

0x28f: Return(); Pop(0)

0x290: PushEmpty()
0x291: PushEmpty(bool)
0x292: Call2 0x790

0x293: Pop(0)
0x294: Pop(1); Push((bool) Stack[-1] == 0)
0x295: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x296: Return(); Pop(0)

0x297: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: Return(); Pop(0)

0x29a: PushEmpty(string, bool)
0x29b: Stack[-2] = Stack[-3]
0x29c: Push("")
0x29d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a1; Pop(1)

0x29f: Stack[-1] = (bool) 0
0x2a0: GOTO 0x2a2

0x2a1: Stack[-1] = (bool) 1
0x2a2: Call2 0x727

0x2a3: Pop(2)
0x2a4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty()
0x2a7: Push((int) 1)
0x2a8: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x2a9: PushEmpty()
0x2aa: Call2 0x745

0x2ab: Pop(0)
0x2ac: Push((int) 14011)
0x2ad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: PushEmpty(object, object)
0x2b0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b2: Call2 0x792

0x2b3: Pop(2)
0x2b4: Push((int) 13999)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2d9; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Suspicion"
0x2b9: Call2 0x290

0x2ba: Pop(1)
0x2bb: Push((int) 512800)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: PushEmpty(bool)
0x2c1: Stack[-1] = (bool) 0
0x2c2: PushEmpty(bool, object)
0x2c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Call2 0x79e

0x2c5: Pop(1)
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c7: PushEmpty(bool, object)
0x2c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c9: Call2 0x7aa

0x2ca: Pop(1)
0x2cb: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2cc: Stack[-1] = (bool) 1
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2ce: Push((int) 512801)
0x2cf: Push((int) 14001)
0x2d0: Push((int) 14000)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Push((int) 512813)
0x2d4: Push((int) -1)
0x2d5: Push((int) 14013)
0x2d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d7: Pop(3)
0x2d8: Return(); Pop(0)

0x2d9: Push((int) 14001)
0x2da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2dc: PushEmpty(string)
0x2dd: Stack[-1] = "Suspicion"
0x2de: Call2 0x290

0x2df: Pop(1)
0x2e0: Push((int) 512802)
0x2e1: @@ SetMessage(Stack[-1])
0x2e2: Pop(1)
0x2e3: @@ ClearReplies()
0x2e4: Pop(0)
0x2e5: Push((int) 512803)
0x2e6: Push((int) 14003)
0x2e7: Push((int) 14002)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Return(); Pop(0)

0x2eb: Push((int) 14003)
0x2ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x2ee: PushEmpty(string)
0x2ef: Stack[-1] = "Suspicion"
0x2f0: Call2 0x290

0x2f1: Pop(1)
0x2f2: Push((int) 512804)
0x2f3: @@ SetMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ ClearReplies()
0x2f6: Pop(0)
0x2f7: Push((int) 512805)
0x2f8: Push((int) 14005)
0x2f9: Push((int) 14004)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Push((int) 512808)
0x2fd: Push((int) 14005)
0x2fe: Push((int) 14007)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Return(); Pop(0)

0x302: Push((int) 14005)
0x303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x304: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x305: PushEmpty(string)
0x306: Stack[-1] = "Fear"
0x307: Call2 0x290

0x308: Pop(1)
0x309: Push((int) 512806)
0x30a: @@ SetMessage(Stack[-1])
0x30b: Pop(1)
0x30c: @@ ClearReplies()
0x30d: Pop(0)
0x30e: Push((int) 512807)
0x30f: Push((int) 14008)
0x310: Push((int) 14006)
0x311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x312: Pop(3)
0x313: Return(); Pop(0)

0x314: Push((int) 14008)
0x315: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x317: PushEmpty(string)
0x318: Stack[-1] = "Fear"
0x319: Call2 0x290

0x31a: Pop(1)
0x31b: Push((int) 512809)
0x31c: @@ SetMessage(Stack[-1])
0x31d: Pop(1)
0x31e: @@ ClearReplies()
0x31f: Pop(0)
0x320: Push((int) 512810)
0x321: Push((int) 14010)
0x322: Push((int) 14009)
0x323: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x324: Pop(3)
0x325: Return(); Pop(0)

0x326: Push((int) 14010)
0x327: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x328: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x329: PushEmpty(string)
0x32a: Stack[-1] = "Autizm"
0x32b: Call2 0x290

0x32c: Pop(1)
0x32d: Push((int) 512811)
0x32e: @@ SetMessage(Stack[-1])
0x32f: Pop(1)
0x330: @@ ClearReplies()
0x331: Pop(0)
0x332: Push((int) 512812)
0x333: Push((int) -1)
0x334: Push((int) 14011)
0x335: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x336: Pop(3)
0x337: Return(); Pop(0)

0x338: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x339: PushEmpty(bool)
0x33a: Call2 0x790

0x33b: Pop(0)
0x33c: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33d: @ lshStopAnimation()
0x33e: Pop(0)
0x33f: GOTO 0x342

0x340: @ StopAnimation()
0x341: Pop(0)
0x342: Return(); Pop(0)

0x343: GOTO 0x2a7

0x344: Return(); Pop(0)

0x345: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x346: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x347: PushEmpty(bool, object, float)
0x348: Stack[-2] = Stack[-12]
0x349: Stack[-1] = (float) 70.0
0x34a: Call2 0x636

0x34b: Pop(2)
0x34c: Pop(1); Push((bool) Stack[-1] == 0)
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-10] = (int) -2
0x34f: Return(); Pop(8)

0x350: @ CreateDialog(Stack[-4])
0x351: Pop(0)
0x352: PushEmpty(int)
0x353: Call2 0x78a

0x354: Pop(0)
0x355: @@ SetNPCName(Stack[-1])
0x356: Pop(1)
0x357: PushEmpty(int)
0x358: Call2 0x788

0x359: Pop(0)
0x35a: @@ SetNPCDescription(Stack[-1])
0x35b: Pop(1)
0x35c: PushEmpty(string)
0x35d: Call2 0x78c

0x35e: Pop(0)
0x35f: @@ SetPhoto(Stack[-1])
0x360: Pop(1)
0x361: PushEmpty(string)
0x362: Call2 0x78e

0x363: Pop(0)
0x364: @@ SetPhoto2(Stack[-1])
0x365: Pop(1)
0x366: PushEmpty(int)
0x367: Call2 0x7b6

0x368: Pop(0)
0x369: @@ SetPlayerName(Stack[-1])
0x36a: Pop(1)
0x36b: Stack[-2] = (int) -1
0x36c: @ IsOverrideActive(Stack[-3])
0x36d: Pop(0)
0x36e: Push(Stack[-3])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-10] = (int) -2
0x371: Return(); Pop(8)

0x372: @ DoDialog(Stack[-4])
0x373: Pop(0)
0x374: PushEmpty(bool, object)
0x375: PushEmpty(object)
0x376: Call2 0x74c

0x377: Stack[-2] = Stack[-1]
0x378: Pop(1)
0x379: Call2 0x68d

0x37a: Pop(2)
0x37b: PushEmpty(object, object)
0x37c: Stack[-2] = Stack[-11]
0x37d: Stack[-1] = Stack[-6]
0x37e: Push(-2, 4); TaskCall(7)
0x37f: Call2 0x396

0x380: Pop(-2, 4); TaskReturn
0x381: Pop(2)
0x382: @@ IsDialogEnd(Stack[-1])
0x383: Pop(0)
0x384: Pop(0); Push((bool) Stack[-1] == 0)
0x385: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x386: @ sync()
0x387: Pop(0)
0x388: @@ IsDialogEnd(Stack[-1])
0x389: Pop(0)
0x38a: GOTO 0x384

0x38b: PushEmpty(object)
0x38c: Stack[-1] = Stack[-10]
0x38d: Call2 0x67b

0x38e: Pop(1)
0x38f: @ StopDialog(Stack[-4])
0x390: Pop(0)
0x391: @@ GetReturnValue(Stack[-2])
0x392: Pop(0)
0x393: Stack[-10] = Stack[-2]
0x394: Return(); Pop(8)

0x395: Stack[-4] = 0
0x396: PushEmpty()
0x397: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x398: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x399: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x39a: Push((int) 1)
0x39b: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x39c: PushEmpty(string)
0x39d: Stack[-1] = "Neutral"
0x39e: Call2 0x3d5

0x39f: Pop(1)
0x3a0: Push((int) 535284)
0x3a1: @@ SetMessage(Stack[-1])
0x3a2: Pop(1)
0x3a3: @@ ClearReplies()
0x3a4: Pop(0)
0x3a5: Push((int) 535285)
0x3a6: Push((int) 36962)
0x3a7: Push((int) 36961)
0x3a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a9: Pop(3)
0x3aa: Push((int) 535292)
0x3ab: Push((int) -1)
0x3ac: Push((int) 36968)
0x3ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ae: Pop(3)
0x3af: Push((int) 535293)
0x3b0: Push((int) -1)
0x3b1: Push((int) 36969)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: GOTO 0x3b7

0x3b5: Return(); Pop(0)

0x3b6: GOTO 0x39a

0x3b7: PushEmpty(bool)
0x3b8: Call2 0x790

0x3b9: Pop(0)
0x3ba: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3bb: @ lshWaitForAnimEnd()
0x3bc: Pop(0)
0x3bd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3be: IF (Stack[-1] == 0) GOTO 0x3c0; Pop(1)

0x3bf: GOTO 0x3c5

0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3c2: Call2 0x717

0x3c3: Pop(1)
0x3c4: GOTO 0x3bb

0x3c5: GOTO 0x3d4

0x3c6: Push("all")
0x3c7: Push("idle")
0x3c8: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c9: Pop(2)
0x3ca: @ WaitForAnimEnd()
0x3cb: Pop(0)
0x3cc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3cd: IF (Stack[-1] == 0) GOTO 0x3cf; Pop(1)

0x3ce: GOTO 0x3d4

0x3cf: Push("all")
0x3d0: Push("idle")
0x3d1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3d2: Pop(2)
0x3d3: GOTO 0x3ca

0x3d4: Return(); Pop(0)

0x3d5: PushEmpty()
0x3d6: PushEmpty(bool)
0x3d7: Call2 0x790

0x3d8: Pop(0)
0x3d9: Pop(1); Push((bool) Stack[-1] == 0)
0x3da: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3db: Return(); Pop(0)

0x3dc: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3de: Return(); Pop(0)

0x3df: PushEmpty(string, bool)
0x3e0: Stack[-2] = Stack[-3]
0x3e1: Push("")
0x3e2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-1] = (bool) 0
0x3e5: GOTO 0x3e7

0x3e6: Stack[-1] = (bool) 1
0x3e7: Call2 0x727

0x3e8: Pop(2)
0x3e9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: Push((int) 1)
0x3ed: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x3ee: PushEmpty()
0x3ef: Call2 0x745

0x3f0: Pop(0)
0x3f1: Push((int) 36960)
0x3f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = "Neutral"
0x3f6: Call2 0x3d5

0x3f7: Pop(1)
0x3f8: Push((int) 535284)
0x3f9: @@ SetMessage(Stack[-1])
0x3fa: Pop(1)
0x3fb: @@ ClearReplies()
0x3fc: Pop(0)
0x3fd: Push((int) 535285)
0x3fe: Push((int) 36962)
0x3ff: Push((int) 36961)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Push((int) 535292)
0x403: Push((int) -1)
0x404: Push((int) 36968)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Push((int) 535293)
0x408: Push((int) -1)
0x409: Push((int) 36969)
0x40a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40b: Pop(3)
0x40c: Return(); Pop(0)

0x40d: Push((int) 36962)
0x40e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x410: PushEmpty(string)
0x411: Stack[-1] = "Neutral"
0x412: Call2 0x3d5

0x413: Pop(1)
0x414: Push((int) 535286)
0x415: @@ SetMessage(Stack[-1])
0x416: Pop(1)
0x417: @@ ClearReplies()
0x418: Pop(0)
0x419: Push((int) 535287)
0x41a: Push((int) 36964)
0x41b: Push((int) 36963)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Push((int) 535291)
0x41f: Push((int) -1)
0x420: Push((int) 36967)
0x421: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x422: Pop(3)
0x423: Return(); Pop(0)

0x424: Push((int) 36964)
0x425: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x426: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x427: PushEmpty(string)
0x428: Stack[-1] = "Neutral"
0x429: Call2 0x3d5

0x42a: Pop(1)
0x42b: Push((int) 535288)
0x42c: @@ SetMessage(Stack[-1])
0x42d: Pop(1)
0x42e: @@ ClearReplies()
0x42f: Pop(0)
0x430: Push((int) 535289)
0x431: Push((int) -1)
0x432: Push((int) 36965)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: Push((int) 535290)
0x436: Push((int) -1)
0x437: Push((int) 36966)
0x438: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x439: Pop(3)
0x43a: Return(); Pop(0)

0x43b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x43c: PushEmpty(bool)
0x43d: Call2 0x790

0x43e: Pop(0)
0x43f: IF (Stack[-1] == 0) GOTO 0x443; Pop(1)

0x440: @ lshStopAnimation()
0x441: Pop(0)
0x442: GOTO 0x445

0x443: @ StopAnimation()
0x444: Pop(0)
0x445: Return(); Pop(0)

0x446: GOTO 0x3ec

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
0x456: Call2 0x78a

0x457: Pop(0)
0x458: @@ SetNPCName(Stack[-1])
0x459: Pop(1)
0x45a: PushEmpty(int)
0x45b: Call2 0x788

0x45c: Pop(0)
0x45d: @@ SetNPCDescription(Stack[-1])
0x45e: Pop(1)
0x45f: PushEmpty(string)
0x460: Call2 0x78c

0x461: Pop(0)
0x462: @@ SetPhoto(Stack[-1])
0x463: Pop(1)
0x464: PushEmpty(string)
0x465: Call2 0x78e

0x466: Pop(0)
0x467: @@ SetPhoto2(Stack[-1])
0x468: Pop(1)
0x469: PushEmpty(int)
0x46a: Call2 0x7b6

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
0x479: Call2 0x74c

0x47a: Stack[-2] = Stack[-1]
0x47b: Pop(1)
0x47c: Call2 0x68d

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
0x490: Call2 0x67b

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
0x4b6: Call2 0x790

0x4b7: Pop(0)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4b9: @ lshWaitForAnimEnd()
0x4ba: Pop(0)
0x4bb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4bc: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bd: GOTO 0x4c3

0x4be: PushEmpty(string)
0x4bf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4c0: Call2 0x717

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
0x4d5: Call2 0x790

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
0x4e5: Call2 0x727

0x4e6: Pop(2)
0x4e7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4e8: Return(); Pop(0)

0x4e9: PushEmpty()
0x4ea: Push((int) 1)
0x4eb: IF (Stack[-1] == 0) GOTO 0x512; Pop(1)

0x4ec: PushEmpty()
0x4ed: Call2 0x745

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
0x508: Call2 0x790

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
0x578: Call2 0x74c

0x579: Stack[-2] = Stack[-1]
0x57a: Pop(1)
0x57b: Call2 0x6c7

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
0x59b: Call2 0x717

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
0x5aa: Call2 0x717

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
0x5bd: Call2 0x7c7

0x5be: Pop(1)
0x5bf: PushEmpty(string)
0x5c0: Stack[-1] = "Neutral"
0x5c1: Call2 0x717

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
0x5d4: Call2 0x777

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
0x5f8: Call2 0x770

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
0x651: Call2 0x752

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
0x661: Push((bool) 1)
0x662: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x663: Pop(1)
0x664: Push(CvectorIndex(Stack[-4], 0))
0x665: Push(CvectorIndex(Stack[-5], 2))
0x666: @ Rotate(Stack[-2], Stack[-1])
0x667: Pop(2)
0x668: PushEmpty(bool)
0x669: Call2 0x790

0x66a: Pop(0)
0x66b: IF (Stack[-1] == 0) GOTO 0x66d; Pop(1)

0x66c: GOTO 0x675

0x66d: Push("head")
0x66e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x66f: Pop(1)
0x670: Push(Stack[-1])
0x671: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x672: Push("head")
0x673: @ LookAsyncCamera(Stack[-1])
0x674: Pop(1)
0x675: @ CameraWaitForPlayFinish()
0x676: Pop(0)
0x677: @ ResumeWorld()
0x678: Pop(0)
0x679: Stack[-21] = (bool) 1
0x67a: Return(); Pop(18)

0x67b: PushEmpty(bool, bool)
0x67c: Push((bool) 1)
0x67d: @ CameraSwitchToNormal(Stack[-1])
0x67e: Pop(1)
0x67f: PushEmpty(bool)
0x680: Call2 0x790

0x681: Pop(0)
0x682: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x683: GOTO 0x68c

0x684: Push("head")
0x685: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x686: Pop(1)
0x687: Push(Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68c; Pop(1)

0x689: Push("head")
0x68a: @ UnlookAsync(Stack[-1])
0x68b: Pop(1)
0x68c: Return(); Pop(2)

0x68d: PushEmpty(int, int, int, int)
0x68e: Push("voice_common")
0x68f: @ GetVariable(Stack[-1], Stack[-3])
0x690: Pop(1)
0x691: Push(Stack[-2])
0x692: IF (Stack[-1] == 0) GOTO 0x6b3; Pop(1)

0x693: PushEmpty(bool, object)
0x694: Stack[-1] = Stack[-7]
0x695: Call2 0x6c7

0x696: Pop(1)
0x697: Pop(1); Push((bool) Stack[-1] == 0)
0x698: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x699: PushEmpty(bool, object)
0x69a: Stack[-1] = Stack[-7]
0x69b: Call2 0x6ec

0x69c: Pop(1)
0x69d: Pop(1); Push((bool) Stack[-1] == 0)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69f: Stack[-6] = (bool) 0
0x6a0: Return(); Pop(4)

0x6a1: Push((int) 2)
0x6a2: @ irand(Stack[-2], Stack[-1])
0x6a3: Pop(1)
0x6a4: Push(Stack[-1])
0x6a5: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a6: Push("voice_common")
0x6a7: Push((int) 1)
0x6a8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6a9: Push((int) 3)
0x6aa: Pop(2); Push(Stack[-2] % Stack[-1]);
0x6ab: @ SetVariable(Stack[-2], Stack[-1])
0x6ac: Pop(2)
0x6ad: GOTO 0x6b2

0x6ae: Push("voice_common")
0x6af: Push((int) 0)
0x6b0: @ SetVariable(Stack[-2], Stack[-1])
0x6b1: Pop(2)
0x6b2: GOTO 0x6c5

0x6b3: PushEmpty(bool, object)
0x6b4: Stack[-1] = Stack[-7]
0x6b5: Call2 0x6ec

0x6b6: Pop(1)
0x6b7: Pop(1); Push((bool) Stack[-1] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6b9: PushEmpty(bool, object)
0x6ba: Stack[-1] = Stack[-7]
0x6bb: Call2 0x6c7

0x6bc: Pop(1)
0x6bd: Pop(1); Push((bool) Stack[-1] == 0)
0x6be: IF (Stack[-1] == 0) GOTO 0x6c1; Pop(1)

0x6bf: Stack[-6] = (bool) 0
0x6c0: Return(); Pop(4)

0x6c1: Push("voice_common")
0x6c2: Push((int) 1)
0x6c3: @ SetVariable(Stack[-2], Stack[-1])
0x6c4: Pop(2)
0x6c5: Stack[-6] = (bool) 1
0x6c6: Return(); Pop(4)

0x6c7: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6c8: Stack[-5] = "c"
0x6c9: Stack[-4] = (int) 0
0x6ca: Push((int) 1)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6d7; Pop(1)

0x6cc: Push((int) 1)
0x6cd: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6ce: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6cf: @@ HasProperty(Stack[-1], Stack[-4])
0x6d0: Pop(1)
0x6d1: Pop(0); Push((bool) Stack[-3] == 0)
0x6d2: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6d3: GOTO 0x6d7

0x6d4: Push((int) 1)
0x6d5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6d6: GOTO 0x6ca

0x6d7: Pop(0); Push((bool) Stack[-4] == 0)
0x6d8: IF (Stack[-1] == 0) GOTO 0x6db; Pop(1)

0x6d9: Stack[-12] = (bool) 0
0x6da: Return(); Pop(10)

0x6db: Stack[-2] = (int) 0
0x6dc: Push((int) 1)
0x6dd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6de: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6df: @ irand(Stack[-2], Stack[-4])
0x6e0: Pop(0)
0x6e1: Push((int) 1)
0x6e2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6e3: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6e4: @@ GetProperty(Stack[-1], Stack[-2])
0x6e5: Pop(1)
0x6e6: PushEmpty(bool, string)
0x6e7: Stack[-1] = Stack[-3]
0x6e8: Call2 0x736

0x6e9: Stack[-14] = Stack[-2]
0x6ea: Pop(2)
0x6eb: Return(); Pop(10)

0x6ec: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6ed: Push("d")
0x6ee: PushEmpty(int)
0x6ef: Call2 0x761

0x6f0: Pop(0)
0x6f1: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6f2: Push("m")
0x6f3: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x6f4: Stack[-4] = (int) 0
0x6f5: Push((int) 1)
0x6f6: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6f7: Push((int) 1)
0x6f8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6f9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6fa: @@ HasProperty(Stack[-1], Stack[-4])
0x6fb: Pop(1)
0x6fc: Pop(0); Push((bool) Stack[-3] == 0)
0x6fd: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fe: GOTO 0x702

0x6ff: Push((int) 1)
0x700: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x701: GOTO 0x6f5

0x702: Pop(0); Push((bool) Stack[-4] == 0)
0x703: IF (Stack[-1] == 0) GOTO 0x706; Pop(1)

0x704: Stack[-12] = (bool) 0
0x705: Return(); Pop(10)

0x706: Stack[-2] = (int) 0
0x707: Push((int) 1)
0x708: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x709: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70a: @ irand(Stack[-2], Stack[-4])
0x70b: Pop(0)
0x70c: Push((int) 1)
0x70d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x70e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x70f: @@ GetProperty(Stack[-1], Stack[-2])
0x710: Pop(1)
0x711: PushEmpty(bool, string)
0x712: Stack[-1] = Stack[-3]
0x713: Call2 0x736

0x714: Stack[-14] = Stack[-2]
0x715: Pop(2)
0x716: Return(); Pop(10)

0x717: PushEmpty(bool, float, float, bool, float, float)
0x718: @ lshHasAnimation(Stack[-3], Stack[-7])
0x719: Pop(0)
0x71a: Push(Stack[-3])
0x71b: IF (Stack[-1] == 0) GOTO 0x722; Pop(1)

0x71c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x71d: Pop(0)
0x71e: Push((bool) 0)
0x71f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x720: Pop(1)
0x721: GOTO 0x726

0x722: Push("Can't find lsh animation : ")
0x723: Pop(1); Push(Stack[-1] + Stack[-8]);
0x724: @ Trace(Stack[-1])
0x725: Pop(1)
0x726: Return(); Pop(6)

0x727: PushEmpty(bool, float, float, bool, float, float)
0x728: @ lshHasAnimation(Stack[-3], Stack[-8])
0x729: Pop(0)
0x72a: Push(Stack[-3])
0x72b: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x72c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x72d: Pop(0)
0x72e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x72f: Pop(0)
0x730: GOTO 0x735

0x731: Push("Can't find lsh animation : ")
0x732: Pop(1); Push(Stack[-1] + Stack[-9]);
0x733: @ Trace(Stack[-1])
0x734: Pop(1)
0x735: Return(); Pop(6)

0x736: PushEmpty(bool, bool)
0x737: PushEmpty(bool)
0x738: Call2 0x790

0x739: Pop(0)
0x73a: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x73c: Pop(0)
0x73d: Push(Stack[-1])
0x73e: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x73f: @ lshPlaySpeech(Stack[-3])
0x740: Pop(0)
0x741: Stack[-4] = (bool) 1
0x742: Return(); Pop(2)

0x743: Stack[-4] = (bool) 0
0x744: Return(); Pop(2)

0x745: PushEmpty(bool)
0x746: Call2 0x790

0x747: Pop(0)
0x748: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x749: @ lshStopSpeech()
0x74a: Pop(0)
0x74b: Return(); Pop(0)

0x74c: PushEmpty(object, object)
0x74d: @ self(Stack[-1])
0x74e: Pop(0)
0x74f: Stack[-3] = Stack[-1]
0x750: Return(); Pop(2)

0x751: Stack[-1] = 0
0x752: PushEmpty(float, float)
0x753: Pop(0); Push(Stack[-3] | Stack[-3]);
0x754: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x755: Push((float)0.0)
0x756: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x758: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x759: Return(); Pop(2)

0x75a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x75b: Return(); Pop(2)

0x75c: PushEmpty(int, int)
0x75d: @ GetVariable(Stack[-3], Stack[-1])
0x75e: Pop(0)
0x75f: Stack[-4] = Stack[-1]
0x760: Return(); Pop(2)

0x761: PushEmpty(float, float)
0x762: @ GetGameTime(Stack[-1])
0x763: Pop(0)
0x764: Push((int) 1)
0x765: PushEmpty(int)
0x766: Push((int) 24)
0x767: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x768: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x769: Return(); Pop(2)

0x76a: PushEmpty()
0x76b: PushEmpty(int)
0x76c: Call2 0x761

0x76d: Pop(0)
0x76e: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x76f: Return(); Pop(0)

0x770: PushEmpty(string, string)
0x771: Stack[-1] = "idle"
0x772: Push(Stack[-3])
0x773: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x774: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x775: Stack[-4] = Stack[-1]
0x776: Return(); Pop(2)

0x777: PushEmpty(int, bool, int, bool)
0x778: Stack[-2] = (int) 0
0x779: Push("all")
0x77a: PushEmpty(string, int)
0x77b: Stack[-1] = Stack[-5]
0x77c: Call2 0x770

0x77d: Pop(1)
0x77e: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(2)
0x780: Pop(0); Push((bool) Stack[-1] == 0)
0x781: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x782: GOTO 0x786

0x783: Push((int) 1)
0x784: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x785: GOTO 0x779

0x786: Stack[-5] = Stack[-2]
0x787: Return(); Pop(4)

0x788: Stack[-1] = (int) 515546
0x789: Return(); Pop(0)

0x78a: Stack[-1] = (int) 502871
0x78b: Return(); Pop(0)

0x78c: Stack[-1] = "ui/NPC_Mishka.png"
0x78d: Return(); Pop(0)

0x78e: Stack[-1] = "ui/NPC_Mishka_b.png"
0x78f: Return(); Pop(0)

0x790: Stack[-1] = (bool) 1
0x791: Return(); Pop(0)

0x792: PushEmpty()
0x793: Push("ood6Mishka1")
0x794: Push((int) 1)
0x795: @ SetVariable(Stack[-2], Stack[-1])
0x796: Pop(2)
0x797: Return(); Pop(0)

0x798: PushEmpty()
0x799: Push("KnowMishka")
0x79a: Push((int) 1)
0x79b: @ SetVariable(Stack[-2], Stack[-1])
0x79c: Pop(2)
0x79d: Return(); Pop(0)

0x79e: PushEmpty()
0x79f: PushEmpty(int, string)
0x7a0: Stack[-1] = "d6q01"
0x7a1: Call2 0x75c

0x7a2: Pop(1)
0x7a3: Push((int) 4)
0x7a4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a6: Stack[-2] = (bool) 1
0x7a7: Return(); Pop(0)

0x7a8: Stack[-2] = (bool) 0
0x7a9: Return(); Pop(0)

0x7aa: PushEmpty()
0x7ab: PushEmpty(int, string)
0x7ac: Stack[-1] = "ood6Mishka1"
0x7ad: Call2 0x75c

0x7ae: Pop(1)
0x7af: Push((int) 0)
0x7b0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b4; Pop(1)

0x7b2: Stack[-2] = (bool) 1
0x7b3: Return(); Pop(0)

0x7b4: Stack[-2] = (bool) 0
0x7b5: Return(); Pop(0)

0x7b6: PushEmpty(int, int)
0x7b7: Push("branch")
0x7b8: @ GetVariable(Stack[-1], Stack[-2])
0x7b9: Pop(1)
0x7ba: Push((int) 0)
0x7bb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c0; Pop(1)

0x7bd: Stack[-3] = (int) 1
0x7be: Return(); Pop(2)

0x7bf: GOTO 0x7c5

0x7c0: Push((int) 1)
0x7c1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c2: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c3: Stack[-3] = (int) 2
0x7c4: Return(); Pop(2)

0x7c5: Stack[-3] = (int) 3
0x7c6: Return(); Pop(2)

0x7c7: PushEmpty()
0x7c8: Push(GlobalVars[1])
0x7c9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7d4; Pop(1)

0x7cb: PushEmpty(int, object)
0x7cc: Stack[-1] = Stack[-3]
0x7cd: Push(-2, 1); TaskCall(0)
0x7ce: Call2 0x0

0x7cf: Pop(-2, 1); TaskReturn
0x7d0: Pop(2)
0x7d1: Push(GlobalVars[1])
0x7d2: Stack[-1] = (bool) 1
0x7d3: GlobalVars[1] = Stack[-1]; Pop(1)
0x7d4: PushEmpty(bool, int)
0x7d5: Stack[-1] = (int) 3
0x7d6: Call2 0x76a

0x7d7: Pop(1)
0x7d8: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7d9: PushEmpty(int, object)
0x7da: Stack[-1] = Stack[-3]
0x7db: Push(-2, 1); TaskCall(2)
0x7dc: Call2 0x136

0x7dd: Pop(-2, 1); TaskReturn
0x7de: Pop(2)
0x7df: Return(); Pop(0)

0x7e0: PushEmpty(bool, int)
0x7e1: Stack[-1] = (int) 6
0x7e2: Call2 0x76a

0x7e3: Pop(1)
0x7e4: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e5: PushEmpty(int, object)
0x7e6: Stack[-1] = Stack[-3]
0x7e7: Push(-2, 1); TaskCall(4)
0x7e8: Call2 0x1f7

0x7e9: Pop(-2, 1); TaskReturn
0x7ea: Pop(2)
0x7eb: Return(); Pop(0)

0x7ec: PushEmpty(bool, int)
0x7ed: Stack[-1] = (int) 12
0x7ee: Call2 0x76a

0x7ef: Pop(1)
0x7f0: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f1: PushEmpty(int, object)
0x7f2: Stack[-1] = Stack[-3]
0x7f3: Push(-2, 1); TaskCall(6)
0x7f4: Call2 0x345

0x7f5: Pop(-2, 1); TaskReturn
0x7f6: Pop(2)
0x7f7: Return(); Pop(0)

0x7f8: PushEmpty(int, object)
0x7f9: Stack[-1] = Stack[-3]
0x7fa: Push(-2, 1); TaskCall(8)
0x7fb: Call2 0x448

0x7fc: Pop(-2, 1); TaskReturn
0x7fd: Pop(2)
0x7fe: Return(); Pop(0)

