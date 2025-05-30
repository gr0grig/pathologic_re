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
	Saveyouall
	SetMessage
	ClearReplies
	AddReply
	Smile
	idle
	Neutral
	Sly
	cleanup
	restore
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png
	oob11Klara1
	b11q01KlaraWillHelp
	oob11Klara2
	oob11Klara3
	b11q01
	b9KlaraLetter
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
	IsLoaded (1 args)
	RemoveActor (1 args)
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

RunOp = 0x331
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x118 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x335 Vars = (string)
		EVENT_6 Op = 0x349 Vars = ()
		EVENT_5 Op = 0x356 Vars = ()
		EVENT_7 Op = 0x39f Vars = (int)
		EVENT_45 Op = 0x3e1 Vars = (bool)
		EVENT_0 Op = 0x3ed Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x476

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x5c4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x5c2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x5c6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x5c8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x638

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
0x31: Call2 0x58c

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4cd

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
0x48: Call2 0x4bb

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
0x56: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 1
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x5e4

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x5fc

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x67: PushEmpty(bool)
0x68: Stack[-1] = (bool) 0
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x5f0

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0x5fc

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: Stack[-1] = (bool) 1
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 0
0x76: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x77: PushEmpty(object, object)
0x78: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x79: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a: Call2 0x5cc

0x7b: Pop(2)
0x7c: PushEmpty(string)
0x7d: Stack[-1] = "Saveyouall"
0x7e: Call2 0x102

0x7f: Pop(1)
0x80: Push((int) 522101)
0x81: @@ SetMessage(Stack[-1])
0x82: Pop(1)
0x83: @@ ClearReplies()
0x84: Pop(0)
0x85: Push((int) 522102)
0x86: Push((int) 24452)
0x87: Push((int) 23269)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: Push((int) 522103)
0x8b: Push((int) 24448)
0x8c: Push((int) 23270)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: GOTO 0xe4

0x90: PushEmpty(string)
0x91: Stack[-1] = "Smile"
0x92: Call2 0x102

0x93: Pop(1)
0x94: Push((int) 522104)
0x95: @@ SetMessage(Stack[-1])
0x96: Pop(1)
0x97: @@ ClearReplies()
0x98: Pop(0)
0x99: PushEmpty(bool)
0x9a: Stack[-1] = (bool) 0
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 0
0x9d: PushEmpty(bool, object)
0x9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f: Call2 0x5e4

0xa0: Pop(1)
0xa1: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x5f0

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 1
0xa8: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa9: PushEmpty(bool, object)
0xaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab: Call2 0x608

0xac: Pop(1)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Stack[-1] = (bool) 1
0xb0: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb1: Push((int) 523263)
0xb2: Push((int) 24464)
0xb3: Push((int) 24463)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: PushEmpty(bool)
0xb7: Stack[-1] = (bool) 0
0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba: Call2 0x608

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbd: PushEmpty(bool, object)
0xbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Call2 0x614

0xc0: Pop(1)
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Stack[-1] = (bool) 1
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: Push((int) 522105)
0xc5: Push((int) 24443)
0xc6: Push((int) 23272)
0xc7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(3)
0xc9: PushEmpty(bool)
0xca: Stack[-1] = (bool) 0
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x620

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x62c

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Stack[-1] = (bool) 1
0xd6: IF (Stack[-1] == 0) GOTO 0xdc; Pop(1)

0xd7: Push((int) 534577)
0xd8: Push((int) 36216)
0xd9: Push((int) 36215)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 523242)
0xdd: Push((int) -1)
0xde: Push((int) 24442)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: GOTO 0xe4

0xe2: Return(); Pop(0)

0xe3: GOTO 0x55

0xe4: PushEmpty(bool)
0xe5: Call2 0x5ca

0xe6: Pop(0)
0xe7: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe8: @ lshWaitForAnimEnd()
0xe9: Pop(0)
0xea: Push( Stack[3 + Tasks[-1].StackPointer] )
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: GOTO 0xf2

0xed: PushEmpty(string)
0xee: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xef: Call2 0x557

0xf0: Pop(1)
0xf1: GOTO 0xe8

0xf2: GOTO 0x101

0xf3: Push("all")
0xf4: Push("idle")
0xf5: @ PlayAnimation(Stack[-2], Stack[-1])
0xf6: Pop(2)
0xf7: @ WaitForAnimEnd()
0xf8: Pop(0)
0xf9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xfa: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xfb: GOTO 0x101

0xfc: Push("all")
0xfd: Push("idle")
0xfe: @ PlayAnimation(Stack[-2], Stack[-1])
0xff: Pop(2)
0x100: GOTO 0xf7

0x101: Return(); Pop(0)

0x102: PushEmpty()
0x103: PushEmpty(bool)
0x104: Call2 0x5ca

0x105: Pop(0)
0x106: Pop(1); Push((bool) Stack[-1] == 0)
0x107: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x108: Return(); Pop(0)

0x109: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x10a: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0x10b: Return(); Pop(0)

0x10c: PushEmpty(string, bool)
0x10d: Stack[-2] = Stack[-3]
0x10e: Push("")
0x10f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: Stack[-1] = (bool) 0
0x112: GOTO 0x114

0x113: Stack[-1] = (bool) 1
0x114: Call2 0x567

0x115: Pop(2)
0x116: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x117: Return(); Pop(0)

0x118: PushEmpty()
0x119: Push((int) 1)
0x11a: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x11b: PushEmpty()
0x11c: Call2 0x585

0x11d: Pop(0)
0x11e: Push((int) 24461)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x5d2

0x125: Pop(2)
0x126: Push((int) 24478)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x5d2

0x12d: Pop(2)
0x12e: Push((int) 24467)
0x12f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0x5d2

0x135: Pop(2)
0x136: Push((int) 24468)
0x137: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13c: Call2 0x5d2

0x13d: Pop(2)
0x13e: Push((int) 23272)
0x13f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: PushEmpty(object, object)
0x142: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x143: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x144: Call2 0x5d8

0x145: Pop(2)
0x146: Push((int) 36215)
0x147: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x14e; Pop(1)

0x149: PushEmpty(object, object)
0x14a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14c: Call2 0x5de

0x14d: Pop(2)
0x14e: Push((int) 23268)
0x14f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x150: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x151: PushEmpty(bool)
0x152: Stack[-1] = (bool) 1
0x153: PushEmpty(bool)
0x154: Stack[-1] = (bool) 0
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x5e4

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15a: PushEmpty(bool, object)
0x15b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15c: Call2 0x5fc

0x15d: Pop(1)
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Stack[-1] = (bool) 1
0x160: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x161: PushEmpty(bool)
0x162: Stack[-1] = (bool) 0
0x163: PushEmpty(bool, object)
0x164: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x165: Call2 0x5f0

0x166: Pop(1)
0x167: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0x5fc

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Stack[-1] = (bool) 1
0x16e: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16f: Stack[-1] = (bool) 0
0x170: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x171: PushEmpty(object, object)
0x172: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x173: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x174: Call2 0x5cc

0x175: Pop(2)
0x176: PushEmpty(string)
0x177: Stack[-1] = "Saveyouall"
0x178: Call2 0x102

0x179: Pop(1)
0x17a: Push((int) 522101)
0x17b: @@ SetMessage(Stack[-1])
0x17c: Pop(1)
0x17d: @@ ClearReplies()
0x17e: Pop(0)
0x17f: Push((int) 522102)
0x180: Push((int) 24452)
0x181: Push((int) 23269)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Push((int) 522103)
0x185: Push((int) 24448)
0x186: Push((int) 23270)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: PushEmpty(string)
0x18b: Stack[-1] = "Smile"
0x18c: Call2 0x102

0x18d: Pop(1)
0x18e: Push((int) 522104)
0x18f: @@ SetMessage(Stack[-1])
0x190: Pop(1)
0x191: @@ ClearReplies()
0x192: Pop(0)
0x193: PushEmpty(bool)
0x194: Stack[-1] = (bool) 0
0x195: PushEmpty(bool)
0x196: Stack[-1] = (bool) 0
0x197: PushEmpty(bool, object)
0x198: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x199: Call2 0x5e4

0x19a: Pop(1)
0x19b: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19c: PushEmpty(bool, object)
0x19d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19e: Call2 0x5f0

0x19f: Pop(1)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Stack[-1] = (bool) 1
0x1a2: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a3: PushEmpty(bool, object)
0x1a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a5: Call2 0x608

0x1a6: Pop(1)
0x1a7: Pop(1); Push((bool) Stack[-1] == 0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a9: Stack[-1] = (bool) 1
0x1aa: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ab: Push((int) 523263)
0x1ac: Push((int) 24464)
0x1ad: Push((int) 24463)
0x1ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1af: Pop(3)
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0x608

0x1b5: Pop(1)
0x1b6: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1b7: PushEmpty(bool, object)
0x1b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b9: Call2 0x614

0x1ba: Pop(1)
0x1bb: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1bc: Stack[-1] = (bool) 1
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1be: Push((int) 522105)
0x1bf: Push((int) 24443)
0x1c0: Push((int) 23272)
0x1c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c2: Pop(3)
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0x620

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1ca: PushEmpty(bool, object)
0x1cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cc: Call2 0x62c

0x1cd: Pop(1)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = (bool) 1
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d1: Push((int) 534577)
0x1d2: Push((int) 36216)
0x1d3: Push((int) 36215)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Push((int) 523242)
0x1d7: Push((int) -1)
0x1d8: Push((int) 24442)
0x1d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1da: Pop(3)
0x1db: Return(); Pop(0)

0x1dc: Push((int) 36216)
0x1dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = "Neutral"
0x1e1: Call2 0x102

0x1e2: Pop(1)
0x1e3: Push((int) 534578)
0x1e4: @@ SetMessage(Stack[-1])
0x1e5: Pop(1)
0x1e6: @@ ClearReplies()
0x1e7: Pop(0)
0x1e8: Push((int) 534579)
0x1e9: Push((int) 36219)
0x1ea: Push((int) 36217)
0x1eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ec: Pop(3)
0x1ed: Push((int) 534580)
0x1ee: Push((int) -1)
0x1ef: Push((int) 36218)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Return(); Pop(0)

0x1f3: Push((int) 36219)
0x1f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f5: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1f6: PushEmpty(string)
0x1f7: Stack[-1] = "Saveyouall"
0x1f8: Call2 0x102

0x1f9: Pop(1)
0x1fa: Push((int) 534581)
0x1fb: @@ SetMessage(Stack[-1])
0x1fc: Pop(1)
0x1fd: @@ ClearReplies()
0x1fe: Pop(0)
0x1ff: Push((int) 534582)
0x200: Push((int) -1)
0x201: Push((int) 36220)
0x202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x203: Pop(3)
0x204: Push((int) 534583)
0x205: Push((int) -1)
0x206: Push((int) 36221)
0x207: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x208: Pop(3)
0x209: Return(); Pop(0)

0x20a: Push((int) 24443)
0x20b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x20c: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x20d: PushEmpty(string)
0x20e: Stack[-1] = "Sly"
0x20f: Call2 0x102

0x210: Pop(1)
0x211: Push((int) 523243)
0x212: @@ SetMessage(Stack[-1])
0x213: Pop(1)
0x214: @@ ClearReplies()
0x215: Pop(0)
0x216: Push((int) 523244)
0x217: Push((int) -1)
0x218: Push((int) 24444)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: Push((int) 523245)
0x21c: Push((int) 24446)
0x21d: Push((int) 24445)
0x21e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21f: Pop(3)
0x220: Return(); Pop(0)

0x221: Push((int) 24446)
0x222: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x224: PushEmpty(string)
0x225: Stack[-1] = "Sly"
0x226: Call2 0x102

0x227: Pop(1)
0x228: Push((int) 523246)
0x229: @@ SetMessage(Stack[-1])
0x22a: Pop(1)
0x22b: @@ ClearReplies()
0x22c: Pop(0)
0x22d: Push((int) 523247)
0x22e: Push((int) -1)
0x22f: Push((int) 24447)
0x230: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x231: Pop(3)
0x232: Return(); Pop(0)

0x233: Push((int) 24464)
0x234: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x235: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x236: PushEmpty(string)
0x237: Stack[-1] = "Neutral"
0x238: Call2 0x102

0x239: Pop(1)
0x23a: Push((int) 523264)
0x23b: @@ SetMessage(Stack[-1])
0x23c: Pop(1)
0x23d: @@ ClearReplies()
0x23e: Pop(0)
0x23f: Push((int) 523265)
0x240: Push((int) 24466)
0x241: Push((int) 24465)
0x242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x243: Pop(3)
0x244: Return(); Pop(0)

0x245: Push((int) 24466)
0x246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x247: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x248: PushEmpty(string)
0x249: Stack[-1] = "Saveyouall"
0x24a: Call2 0x102

0x24b: Pop(1)
0x24c: Push((int) 523266)
0x24d: @@ SetMessage(Stack[-1])
0x24e: Pop(1)
0x24f: @@ ClearReplies()
0x250: Pop(0)
0x251: Push((int) 523267)
0x252: Push((int) -1)
0x253: Push((int) 24467)
0x254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x255: Pop(3)
0x256: Push((int) 523268)
0x257: Push((int) -1)
0x258: Push((int) 24468)
0x259: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25a: Pop(3)
0x25b: Return(); Pop(0)

0x25c: Push((int) 24448)
0x25d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x25f: PushEmpty(string)
0x260: Stack[-1] = "Smile"
0x261: Call2 0x102

0x262: Pop(1)
0x263: Push((int) 523248)
0x264: @@ SetMessage(Stack[-1])
0x265: Pop(1)
0x266: @@ ClearReplies()
0x267: Pop(0)
0x268: Push((int) 523250)
0x269: Push((int) 24452)
0x26a: Push((int) 24450)
0x26b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26c: Pop(3)
0x26d: Push((int) 523249)
0x26e: Push((int) 24452)
0x26f: Push((int) 24449)
0x270: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(3)
0x272: Return(); Pop(0)

0x273: Push((int) 24452)
0x274: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x276: PushEmpty(string)
0x277: Stack[-1] = "Saveyouall"
0x278: Call2 0x102

0x279: Pop(1)
0x27a: Push((int) 523252)
0x27b: @@ SetMessage(Stack[-1])
0x27c: Pop(1)
0x27d: @@ ClearReplies()
0x27e: Pop(0)
0x27f: Push((int) 523253)
0x280: Push((int) 24451)
0x281: Push((int) 24453)
0x282: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x283: Pop(3)
0x284: Return(); Pop(0)

0x285: Push((int) 24451)
0x286: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x287: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x288: PushEmpty(string)
0x289: Stack[-1] = "Neutral"
0x28a: Call2 0x102

0x28b: Pop(1)
0x28c: Push((int) 523251)
0x28d: @@ SetMessage(Stack[-1])
0x28e: Pop(1)
0x28f: @@ ClearReplies()
0x290: Pop(0)
0x291: Push((int) 523254)
0x292: Push((int) 24456)
0x293: Push((int) 24454)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Push((int) 523255)
0x297: Push((int) 24469)
0x298: Push((int) 24455)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Push((int) 24469)
0x29d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2ae; Pop(1)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Sly"
0x2a1: Call2 0x102

0x2a2: Pop(1)
0x2a3: Push((int) 523269)
0x2a4: @@ SetMessage(Stack[-1])
0x2a5: Pop(1)
0x2a6: @@ ClearReplies()
0x2a7: Pop(0)
0x2a8: Push((int) 523270)
0x2a9: Push((int) 24456)
0x2aa: Push((int) 24470)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Return(); Pop(0)

0x2ae: Push((int) 24456)
0x2af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2b1: PushEmpty(string)
0x2b2: Stack[-1] = "Neutral"
0x2b3: Call2 0x102

0x2b4: Pop(1)
0x2b5: Push((int) 523256)
0x2b6: @@ SetMessage(Stack[-1])
0x2b7: Pop(1)
0x2b8: @@ ClearReplies()
0x2b9: Pop(0)
0x2ba: Push((int) 523257)
0x2bb: Push((int) 24458)
0x2bc: Push((int) 24457)
0x2bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2be: Pop(3)
0x2bf: Push((int) 523271)
0x2c0: Push((int) 24473)
0x2c1: Push((int) 24472)
0x2c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c3: Pop(3)
0x2c4: Return(); Pop(0)

0x2c5: Push((int) 24473)
0x2c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2c8: PushEmpty(string)
0x2c9: Stack[-1] = "Sly"
0x2ca: Call2 0x102

0x2cb: Pop(1)
0x2cc: Push((int) 523272)
0x2cd: @@ SetMessage(Stack[-1])
0x2ce: Pop(1)
0x2cf: @@ ClearReplies()
0x2d0: Pop(0)
0x2d1: Push((int) 523273)
0x2d2: Push((int) 24475)
0x2d3: Push((int) 24474)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Push((int) 523275)
0x2d7: Push((int) 24475)
0x2d8: Push((int) 24476)
0x2d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2da: Pop(3)
0x2db: Return(); Pop(0)

0x2dc: Push((int) 24475)
0x2dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2de: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2df: PushEmpty(string)
0x2e0: Stack[-1] = "Sly"
0x2e1: Call2 0x102

0x2e2: Pop(1)
0x2e3: Push((int) 523274)
0x2e4: @@ SetMessage(Stack[-1])
0x2e5: Pop(1)
0x2e6: @@ ClearReplies()
0x2e7: Pop(0)
0x2e8: Push((int) 523276)
0x2e9: Push((int) -1)
0x2ea: Push((int) 24478)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Push((int) 523277)
0x2ee: Push((int) -1)
0x2ef: Push((int) 24479)
0x2f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f1: Pop(3)
0x2f2: Return(); Pop(0)

0x2f3: Push((int) 24458)
0x2f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2f6: PushEmpty(string)
0x2f7: Stack[-1] = "Neutral"
0x2f8: Call2 0x102

0x2f9: Pop(1)
0x2fa: Push((int) 523258)
0x2fb: @@ SetMessage(Stack[-1])
0x2fc: Pop(1)
0x2fd: @@ ClearReplies()
0x2fe: Pop(0)
0x2ff: Push((int) 523259)
0x300: Push((int) 24460)
0x301: Push((int) 24459)
0x302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(3)
0x304: Return(); Pop(0)

0x305: Push((int) 24460)
0x306: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x308: PushEmpty(string)
0x309: Stack[-1] = "Sly"
0x30a: Call2 0x102

0x30b: Pop(1)
0x30c: Push((int) 523260)
0x30d: @@ SetMessage(Stack[-1])
0x30e: Pop(1)
0x30f: @@ ClearReplies()
0x310: Pop(0)
0x311: Push((int) 523261)
0x312: Push((int) -1)
0x313: Push((int) 24461)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Push((int) 523262)
0x317: Push((int) -1)
0x318: Push((int) 24462)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Return(); Pop(0)

0x31c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x31d: PushEmpty(bool)
0x31e: Call2 0x5ca

0x31f: Pop(0)
0x320: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x321: @ lshStopAnimation()
0x322: Pop(0)
0x323: GOTO 0x326

0x324: @ StopAnimation()
0x325: Pop(0)
0x326: Return(); Pop(0)

0x327: GOTO 0x119

0x328: Return(); Pop(0)

0x329: PushEmpty()
0x32a: PushEmpty(int, object)
0x32b: Stack[-1] = Stack[-3]
0x32c: Push(-2, 1); TaskCall(0)
0x32d: Call2 0x0

0x32e: Pop(-2, 1); TaskReturn
0x32f: Pop(2)
0x330: Return(); Pop(0)

0x331: PushEmpty()
0x332: Call2 0x35a

0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty(bool, bool)
0x336: Push("cleanup")
0x337: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x339: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x33a: @ IsLoaded(Stack[-1])
0x33b: Pop(0)
0x33c: Pop(0); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33e: PushEmpty(object)
0x33f: Call2 0x58c

0x340: Pop(0)
0x341: @ RemoveActor(Stack[-1])
0x342: Pop(1)
0x343: GOTO 0x348

0x344: Push("restore")
0x345: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x348: Return(); Pop(2)

0x349: Push( Stack[1 + Tasks[-1].StackPointer] )
0x34a: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34b: PushEmpty(object)
0x34c: Call2 0x58c

0x34d: Pop(0)
0x34e: @ RemoveActor(Stack[-1])
0x34f: Pop(1)
0x350: @ Hold()
0x351: Pop(0)
0x352: PushEmpty()
0x353: Call2 0x3c5

0x354: Pop(0)
0x355: Return(); Pop(0)

0x356: PushEmpty()
0x357: Call2 0x3d4

0x358: Pop(0)
0x359: Return(); Pop(0)

0x35a: PushEmpty(bool)
0x35b: Call2 0x471

0x35c: Pop(0)
0x35d: Pop(1); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x361; Pop(1)

0x35f: @ Hold()
0x360: Pop(0)
0x361: @ GetDirection(Stack[-0])
0x362: Pop(0)
0x363: PushEmpty()
0x364: Call2 0x40a

0x365: Pop(0)
0x366: GOTO 0x363

0x367: Return(); Pop(0)

0x368: PushEmpty(object, object)
0x369: Push("player")
0x36a: @ FindActor(Stack[-2], Stack[-1])
0x36b: Pop(1)
0x36c: Pop(0); Push((bool) Stack[-1] == 0)
0x36d: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36e: Stack[-3] = (bool) 0
0x36f: Return(); Pop(2)

0x370: PushEmpty(bool, object)
0x371: Stack[-1] = Stack[-3]
0x372: Call2 0x468

0x373: Stack[-5] = Stack[-2]
0x374: Pop(2)
0x375: Return(); Pop(2)

0x376: Stack[-1] = 0
0x377: Push(CvectorIndex(Stack[-0], 0))
0x378: Push(CvectorIndex(Stack[-0], 2))
0x379: @ RotateAsync(Stack[-2], Stack[-1])
0x37a: Pop(2)
0x37b: Return(); Pop(0)

0x37c: PushEmpty(object, bool, object, bool)
0x37d: Push("player")
0x37e: @ FindActor(Stack[-3], Stack[-1])
0x37f: Pop(1)
0x380: Pop(0); Push((bool) Stack[-2] == 0)
0x381: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x382: Stack[-5] = (bool) 0
0x383: Return(); Pop(4)

0x384: PushEmpty(float, object)
0x385: Stack[-1] = Stack[-4]
0x386: Call2 0x456

0x387: Pop(1)
0x388: Push((float)90000.0)
0x389: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x38b: Stack[-5] = (bool) 0
0x38c: Return(); Pop(4)

0x38d: @ CanSee(Stack[-1], Stack[-2])
0x38e: Pop(0)
0x38f: Stack[-5] = Stack[-1]
0x390: Return(); Pop(4)

0x391: Stack[-2] = 0
0x392: PushEmpty(float, float)
0x393: Push((int) 8)
0x394: Push((int) 16)
0x395: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: Push((int) 10)
0x398: @ SetTimer(Stack[-1], Stack[-2])
0x399: Pop(1)
0x39a: Return(); Pop(2)

0x39b: Push((int) 10)
0x39c: @ KillTimer(Stack[-1])
0x39d: Pop(1)
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: Push((int) 10)
0x3a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3a3: PushEmpty()
0x3a4: Call2 0x39b

0x3a5: Pop(0)
0x3a6: PushEmpty(bool)
0x3a7: Stack[-1] = (bool) 0
0x3a8: PushEmpty(bool)
0x3a9: Call2 0x471

0x3aa: Pop(0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: PushEmpty(bool)
0x3ad: Call2 0x37c

0x3ae: Pop(0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: Stack[-1] = (bool) 1
0x3b1: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b2: PushEmpty(bool)
0x3b3: Call2 0x368

0x3b4: Pop(0)
0x3b5: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3b6: PushEmpty(bool, object)
0x3b7: PushEmpty(object)
0x3b8: Call2 0x58c

0x3b9: Stack[-2] = Stack[-1]
0x3ba: Pop(1)
0x3bb: Call2 0x507

0x3bc: Pop(2)
0x3bd: GOTO 0x3c4

0x3be: PushEmpty()
0x3bf: Call2 0x377

0x3c0: Pop(0)
0x3c1: PushEmpty()
0x3c2: Call2 0x392

0x3c3: Pop(0)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty()
0x3c6: Call2 0x451

0x3c7: Pop(0)
0x3c8: PushEmpty()
0x3c9: Call2 0x39b

0x3ca: Pop(0)
0x3cb: @ lshStopSpeech()
0x3cc: Pop(0)
0x3cd: @ lshStopAnimation()
0x3ce: Pop(0)
0x3cf: @ StopAsync()
0x3d0: Pop(0)
0x3d1: @ Hold()
0x3d2: Pop(0)
0x3d3: Return(); Pop(0)

0x3d4: @ StopGroup0()
0x3d5: Pop(0)
0x3d6: PushEmpty()
0x3d7: Call2 0x39b

0x3d8: Pop(0)
0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call2 0x557

0x3dc: Pop(1)
0x3dd: PushEmpty()
0x3de: Call2 0x392

0x3df: Pop(0)
0x3e0: Return(); Pop(0)

0x3e1: PushEmpty()
0x3e2: Push(Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3e4: PushEmpty()
0x3e5: Call2 0x392

0x3e6: Pop(0)
0x3e7: GOTO 0x3ec

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Neutral"
0x3ea: Call2 0x557

0x3eb: Pop(1)
0x3ec: Return(); Pop(0)

0x3ed: PushEmpty(bool, bool)
0x3ee: @ IsOverrideActive(Stack[-1])
0x3ef: Pop(0)
0x3f0: Pop(0); Push((bool) Stack[-1] == 0)
0x3f1: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3f2: EventDisable(0)
0x3f3: PushEmpty()
0x3f4: Call2 0x451

0x3f5: Pop(0)
0x3f6: PushEmpty(bool, object)
0x3f7: Stack[-1] = Stack[-5]
0x3f8: Call2 0x468

0x3f9: Pop(2)
0x3fa: EventEnable(0)
0x3fb: PushEmpty(object)
0x3fc: Stack[-1] = Stack[-4]
0x3fd: Call2 0x329

0x3fe: Pop(1)
0x3ff: PushEmpty(string)
0x400: Stack[-1] = "Neutral"
0x401: Call2 0x557

0x402: Pop(1)
0x403: PushEmpty()
0x404: Call2 0x39b

0x405: Pop(0)
0x406: PushEmpty()
0x407: Call2 0x392

0x408: Pop(0)
0x409: Return(); Pop(2)

0x40a: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x40b: @ WaitForAnimEnd()
0x40c: Pop(0)
0x40d: PushEmpty(bool)
0x40e: Call2 0x471

0x40f: Pop(0)
0x410: Pop(1); Push((bool) Stack[-1] == 0)
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Return(); Pop(12)

0x413: PushEmpty(int)
0x414: Call2 0x5b1

0x415: Stack[-7] = Stack[-1]
0x416: Pop(1)
0x417: Stack[-5] = (int) 0
0x418: PushEmpty(bool)
0x419: Stack[-1] = (bool) 0
0x41a: Push((int) 5)
0x41b: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41d: PushEmpty(bool)
0x41e: Call2 0x471

0x41f: Pop(0)
0x420: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x421: Stack[-1] = (bool) 1
0x422: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x423: Pop(0); Push((bool) Stack[-6] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x425: Push((int) 3)
0x426: @ Sleep(Stack[-1], Stack[-5])
0x427: Pop(1)
0x428: Pop(0); Push((bool) Stack[-4] == 0)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: GOTO 0x44c

0x42b: GOTO 0x441

0x42c: @ irand(Stack[-3], Stack[-6])
0x42d: Pop(0)
0x42e: Push((int) 5)
0x42f: @ irand(Stack[-3], Stack[-1])
0x430: Pop(1)
0x431: Push((int) 0)
0x432: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Stack[-3] = (int) 0
0x435: Push("all")
0x436: PushEmpty(string, int)
0x437: Stack[-1] = Stack[-6]
0x438: Call2 0x5aa

0x439: Pop(1)
0x43a: @ PlayAnimation(Stack[-2], Stack[-1])
0x43b: Pop(2)
0x43c: @ WaitForAnimEnd(Stack[-1])
0x43d: Pop(0)
0x43e: Pop(0); Push((bool) Stack[-1] == 0)
0x43f: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x440: GOTO 0x44c

0x441: PushEmpty(bool)
0x442: Call2 0x44f

0x443: Pop(0)
0x444: Pop(1); Push((bool) Stack[-1] == 0)
0x445: IF (Stack[-1] == 0) GOTO 0x447; Pop(1)

0x446: GOTO 0x44c

0x447: @ ResetAAS()
0x448: Pop(0)
0x449: Push((int) 1)
0x44a: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x44b: GOTO 0x418

0x44c: @ ResetAAS()
0x44d: Pop(0)
0x44e: Return(); Pop(12)

0x44f: Stack[-1] = (bool) 1
0x450: Return(); Pop(0)

0x451: @ StopAnimation()
0x452: Pop(0)
0x453: @ StopGroup0()
0x454: Pop(0)
0x455: Return(); Pop(0)

0x456: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x457: @ GetPosition(Stack[-3])
0x458: Pop(0)
0x459: @@ GetPosition(Stack[-2])
0x45a: Pop(0)
0x45b: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x45c: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x45d: Return(); Pop(6)

0x45e: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x45f: @ GetPosition(Stack[-3])
0x460: Pop(0)
0x461: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x462: Push(CvectorIndex(Stack[-2], 0))
0x463: Push(CvectorIndex(Stack[-3], 2))
0x464: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x465: Pop(2)
0x466: Stack[-8] = Stack[-1]
0x467: Return(); Pop(6)

0x468: PushEmpty(cvector, cvector)
0x469: @@ GetPosition(Stack[-1])
0x46a: Pop(0)
0x46b: PushEmpty(bool, cvector)
0x46c: Stack[-1] = Stack[-3]
0x46d: Call2 0x45e

0x46e: Stack[-6] = Stack[-2]
0x46f: Pop(2)
0x470: Return(); Pop(2)

0x471: PushEmpty(bool, bool)
0x472: @ IsLoaded(Stack[-1])
0x473: Pop(0)
0x474: Stack[-3] = Stack[-1]
0x475: Return(); Pop(2)

0x476: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x477: @@ GetPosition(Stack[-8])
0x478: Pop(0)
0x479: @@ GetEyesHeight(Stack[-9])
0x47a: Pop(0)
0x47b: Push(CvectorIndex(Stack[-8], 1))
0x47c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x47d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x47e: @ GetPosition(Stack[-7])
0x47f: Pop(0)
0x480: @ GetEyesHeight(Stack[-9])
0x481: Pop(0)
0x482: Push(CvectorIndex(Stack[-7], 1))
0x483: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x484: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x485: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x486: Push(CvectorIndex(Stack[-6], 1))
0x487: Stack[-1] = (int) 0
0x488: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x489: Pop(0); Push(Stack[-6] | Stack[-6]);
0x48a: Pop(1); Push(Sqrt(Stack[-1]))
0x48b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x48c: Stack[-5] = -Stack[-6]; Pop(0);
0x48d: Pop(0); Push(Stack[-6] * Stack[-19]);
0x48e: PushEmpty(cvector, cvector)
0x48f: Push(CVector(0.0, 1.0, 0.0))
0x490: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x491: Call2 0x592

0x492: Pop(1)
0x493: Push((int) 25)
0x494: Pop(2); Push(Stack[-2] * Stack[-1]);
0x495: Pop(2); Push(Stack[-2] + Stack[-1]);
0x496: Push(CVector(0.0, 10.0, 0.0))
0x497: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x498: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x499: @ IsOverrideActive(Stack[-2])
0x49a: Pop(0)
0x49b: Push(Stack[-2])
0x49c: IF (Stack[-1] == 0) GOTO 0x49f; Pop(1)

0x49d: Stack[-21] = (bool) 0
0x49e: Return(); Pop(18)

0x49f: @ StopWorld()
0x4a0: Pop(0)
0x4a1: Push((bool) 1)
0x4a2: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x4a3: Pop(1)
0x4a4: Push(CvectorIndex(Stack[-4], 0))
0x4a5: Push(CvectorIndex(Stack[-5], 2))
0x4a6: @ Rotate(Stack[-2], Stack[-1])
0x4a7: Pop(2)
0x4a8: PushEmpty(bool)
0x4a9: Call2 0x5ca

0x4aa: Pop(0)
0x4ab: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4ac: GOTO 0x4b5

0x4ad: Push("head")
0x4ae: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4af: Pop(1)
0x4b0: Push(Stack[-1])
0x4b1: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b2: Push("head")
0x4b3: @ LookAsyncCamera(Stack[-1])
0x4b4: Pop(1)
0x4b5: @ CameraWaitForPlayFinish()
0x4b6: Pop(0)
0x4b7: @ ResumeWorld()
0x4b8: Pop(0)
0x4b9: Stack[-21] = (bool) 1
0x4ba: Return(); Pop(18)

0x4bb: PushEmpty(bool, bool)
0x4bc: Push((bool) 1)
0x4bd: @ CameraSwitchToNormal(Stack[-1])
0x4be: Pop(1)
0x4bf: PushEmpty(bool)
0x4c0: Call2 0x5ca

0x4c1: Pop(0)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c4; Pop(1)

0x4c3: GOTO 0x4cc

0x4c4: Push("head")
0x4c5: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4c6: Pop(1)
0x4c7: Push(Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c9: Push("head")
0x4ca: @ UnlookAsync(Stack[-1])
0x4cb: Pop(1)
0x4cc: Return(); Pop(2)

0x4cd: PushEmpty(int, int, int, int)
0x4ce: Push("voice_common")
0x4cf: @ GetVariable(Stack[-1], Stack[-3])
0x4d0: Pop(1)
0x4d1: Push(Stack[-2])
0x4d2: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4d3: PushEmpty(bool, object)
0x4d4: Stack[-1] = Stack[-7]
0x4d5: Call2 0x507

0x4d6: Pop(1)
0x4d7: Pop(1); Push((bool) Stack[-1] == 0)
0x4d8: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4d9: PushEmpty(bool, object)
0x4da: Stack[-1] = Stack[-7]
0x4db: Call2 0x52c

0x4dc: Pop(1)
0x4dd: Pop(1); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e1; Pop(1)

0x4df: Stack[-6] = (bool) 0
0x4e0: Return(); Pop(4)

0x4e1: Push((int) 2)
0x4e2: @ irand(Stack[-2], Stack[-1])
0x4e3: Pop(1)
0x4e4: Push(Stack[-1])
0x4e5: IF (Stack[-1] == 0) GOTO 0x4ee; Pop(1)

0x4e6: Push("voice_common")
0x4e7: Push((int) 1)
0x4e8: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4e9: Push((int) 3)
0x4ea: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4eb: @ SetVariable(Stack[-2], Stack[-1])
0x4ec: Pop(2)
0x4ed: GOTO 0x4f2

0x4ee: Push("voice_common")
0x4ef: Push((int) 0)
0x4f0: @ SetVariable(Stack[-2], Stack[-1])
0x4f1: Pop(2)
0x4f2: GOTO 0x505

0x4f3: PushEmpty(bool, object)
0x4f4: Stack[-1] = Stack[-7]
0x4f5: Call2 0x52c

0x4f6: Pop(1)
0x4f7: Pop(1); Push((bool) Stack[-1] == 0)
0x4f8: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4f9: PushEmpty(bool, object)
0x4fa: Stack[-1] = Stack[-7]
0x4fb: Call2 0x507

0x4fc: Pop(1)
0x4fd: Pop(1); Push((bool) Stack[-1] == 0)
0x4fe: IF (Stack[-1] == 0) GOTO 0x501; Pop(1)

0x4ff: Stack[-6] = (bool) 0
0x500: Return(); Pop(4)

0x501: Push("voice_common")
0x502: Push((int) 1)
0x503: @ SetVariable(Stack[-2], Stack[-1])
0x504: Pop(2)
0x505: Stack[-6] = (bool) 1
0x506: Return(); Pop(4)

0x507: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x508: Stack[-5] = "c"
0x509: Stack[-4] = (int) 0
0x50a: Push((int) 1)
0x50b: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x50c: Push((int) 1)
0x50d: Pop(1); Push(Stack[-5] + Stack[-1]);
0x50e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x50f: @@ HasProperty(Stack[-1], Stack[-4])
0x510: Pop(1)
0x511: Pop(0); Push((bool) Stack[-3] == 0)
0x512: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x513: GOTO 0x517

0x514: Push((int) 1)
0x515: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x516: GOTO 0x50a

0x517: Pop(0); Push((bool) Stack[-4] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51b; Pop(1)

0x519: Stack[-12] = (bool) 0
0x51a: Return(); Pop(10)

0x51b: Stack[-2] = (int) 0
0x51c: Push((int) 1)
0x51d: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x51e: IF (Stack[-1] == 0) GOTO 0x521; Pop(1)

0x51f: @ irand(Stack[-2], Stack[-4])
0x520: Pop(0)
0x521: Push((int) 1)
0x522: Pop(1); Push(Stack[-3] + Stack[-1]);
0x523: Pop(1); Push(Stack[-6] + Stack[-1]);
0x524: @@ GetProperty(Stack[-1], Stack[-2])
0x525: Pop(1)
0x526: PushEmpty(bool, string)
0x527: Stack[-1] = Stack[-3]
0x528: Call2 0x576

0x529: Stack[-14] = Stack[-2]
0x52a: Pop(2)
0x52b: Return(); Pop(10)

0x52c: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x52d: Push("d")
0x52e: PushEmpty(int)
0x52f: Call2 0x5a1

0x530: Pop(0)
0x531: Pop(2); Push(Stack[-2] + Stack[-1]);
0x532: Push("m")
0x533: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x534: Stack[-4] = (int) 0
0x535: Push((int) 1)
0x536: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x537: Push((int) 1)
0x538: Pop(1); Push(Stack[-5] + Stack[-1]);
0x539: Pop(1); Push(Stack[-6] + Stack[-1]);
0x53a: @@ HasProperty(Stack[-1], Stack[-4])
0x53b: Pop(1)
0x53c: Pop(0); Push((bool) Stack[-3] == 0)
0x53d: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x53e: GOTO 0x542

0x53f: Push((int) 1)
0x540: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x541: GOTO 0x535

0x542: Pop(0); Push((bool) Stack[-4] == 0)
0x543: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x544: Stack[-12] = (bool) 0
0x545: Return(); Pop(10)

0x546: Stack[-2] = (int) 0
0x547: Push((int) 1)
0x548: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x54a: @ irand(Stack[-2], Stack[-4])
0x54b: Pop(0)
0x54c: Push((int) 1)
0x54d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x54e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x54f: @@ GetProperty(Stack[-1], Stack[-2])
0x550: Pop(1)
0x551: PushEmpty(bool, string)
0x552: Stack[-1] = Stack[-3]
0x553: Call2 0x576

0x554: Stack[-14] = Stack[-2]
0x555: Pop(2)
0x556: Return(); Pop(10)

0x557: PushEmpty(bool, float, float, bool, float, float)
0x558: @ lshHasAnimation(Stack[-3], Stack[-7])
0x559: Pop(0)
0x55a: Push(Stack[-3])
0x55b: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x55c: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x55d: Pop(0)
0x55e: Push((bool) 0)
0x55f: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x560: Pop(1)
0x561: GOTO 0x566

0x562: Push("Can't find lsh animation : ")
0x563: Pop(1); Push(Stack[-1] + Stack[-8]);
0x564: @ Trace(Stack[-1])
0x565: Pop(1)
0x566: Return(); Pop(6)

0x567: PushEmpty(bool, float, float, bool, float, float)
0x568: @ lshHasAnimation(Stack[-3], Stack[-8])
0x569: Pop(0)
0x56a: Push(Stack[-3])
0x56b: IF (Stack[-1] == 0) GOTO 0x571; Pop(1)

0x56c: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x56d: Pop(0)
0x56e: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x56f: Pop(0)
0x570: GOTO 0x575

0x571: Push("Can't find lsh animation : ")
0x572: Pop(1); Push(Stack[-1] + Stack[-9]);
0x573: @ Trace(Stack[-1])
0x574: Pop(1)
0x575: Return(); Pop(6)

0x576: PushEmpty(bool, bool)
0x577: PushEmpty(bool)
0x578: Call2 0x5ca

0x579: Pop(0)
0x57a: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57b: @ lshHasSpeech(Stack[-1], Stack[-3])
0x57c: Pop(0)
0x57d: Push(Stack[-1])
0x57e: IF (Stack[-1] == 0) GOTO 0x583; Pop(1)

0x57f: @ lshPlaySpeech(Stack[-3])
0x580: Pop(0)
0x581: Stack[-4] = (bool) 1
0x582: Return(); Pop(2)

0x583: Stack[-4] = (bool) 0
0x584: Return(); Pop(2)

0x585: PushEmpty(bool)
0x586: Call2 0x5ca

0x587: Pop(0)
0x588: IF (Stack[-1] == 0) GOTO 0x58b; Pop(1)

0x589: @ lshStopSpeech()
0x58a: Pop(0)
0x58b: Return(); Pop(0)

0x58c: PushEmpty(object, object)
0x58d: @ self(Stack[-1])
0x58e: Pop(0)
0x58f: Stack[-3] = Stack[-1]
0x590: Return(); Pop(2)

0x591: Stack[-1] = 0
0x592: PushEmpty(float, float)
0x593: Pop(0); Push(Stack[-3] | Stack[-3]);
0x594: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x595: Push((float)0.0)
0x596: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x599: Return(); Pop(2)

0x59a: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x59b: Return(); Pop(2)

0x59c: PushEmpty(int, int)
0x59d: @ GetVariable(Stack[-3], Stack[-1])
0x59e: Pop(0)
0x59f: Stack[-4] = Stack[-1]
0x5a0: Return(); Pop(2)

0x5a1: PushEmpty(float, float)
0x5a2: @ GetGameTime(Stack[-1])
0x5a3: Pop(0)
0x5a4: Push((int) 1)
0x5a5: PushEmpty(int)
0x5a6: Push((int) 24)
0x5a7: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x5a8: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x5a9: Return(); Pop(2)

0x5aa: PushEmpty(string, string)
0x5ab: Stack[-1] = "idle"
0x5ac: Push(Stack[-3])
0x5ad: IF (Stack[-1] == 0) GOTO 0x5af; Pop(1)

0x5ae: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5af: Stack[-4] = Stack[-1]
0x5b0: Return(); Pop(2)

0x5b1: PushEmpty(int, bool, int, bool)
0x5b2: Stack[-2] = (int) 0
0x5b3: Push("all")
0x5b4: PushEmpty(string, int)
0x5b5: Stack[-1] = Stack[-5]
0x5b6: Call2 0x5aa

0x5b7: Pop(1)
0x5b8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(2)
0x5ba: Pop(0); Push((bool) Stack[-1] == 0)
0x5bb: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5bc: GOTO 0x5c0

0x5bd: Push((int) 1)
0x5be: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5bf: GOTO 0x5b3

0x5c0: Stack[-5] = Stack[-2]
0x5c1: Return(); Pop(4)

0x5c2: Stack[-1] = (int) 515540
0x5c3: Return(); Pop(0)

0x5c4: Stack[-1] = (int) 502865
0x5c5: Return(); Pop(0)

0x5c6: Stack[-1] = "ui/NPC_Klara.png"
0x5c7: Return(); Pop(0)

0x5c8: Stack[-1] = "ui/NPC_Klara_b.png"
0x5c9: Return(); Pop(0)

0x5ca: Stack[-1] = (bool) 1
0x5cb: Return(); Pop(0)

0x5cc: PushEmpty()
0x5cd: Push("oob11Klara1")
0x5ce: Push((int) 1)
0x5cf: @ SetVariable(Stack[-2], Stack[-1])
0x5d0: Pop(2)
0x5d1: Return(); Pop(0)

0x5d2: PushEmpty()
0x5d3: Push("b11q01KlaraWillHelp")
0x5d4: Push((int) 1)
0x5d5: @ SetVariable(Stack[-2], Stack[-1])
0x5d6: Pop(2)
0x5d7: Return(); Pop(0)

0x5d8: PushEmpty()
0x5d9: Push("oob11Klara2")
0x5da: Push((int) 1)
0x5db: @ SetVariable(Stack[-2], Stack[-1])
0x5dc: Pop(2)
0x5dd: Return(); Pop(0)

0x5de: PushEmpty()
0x5df: Push("oob11Klara3")
0x5e0: Push((int) 1)
0x5e1: @ SetVariable(Stack[-2], Stack[-1])
0x5e2: Pop(2)
0x5e3: Return(); Pop(0)

0x5e4: PushEmpty()
0x5e5: PushEmpty(int, string)
0x5e6: Stack[-1] = "b11q01"
0x5e7: Call2 0x59c

0x5e8: Pop(1)
0x5e9: Push((int) 0)
0x5ea: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ec: Stack[-2] = (bool) 1
0x5ed: Return(); Pop(0)

0x5ee: Stack[-2] = (bool) 0
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: PushEmpty(int, string)
0x5f2: Stack[-1] = "b11q01"
0x5f3: Call2 0x59c

0x5f4: Pop(1)
0x5f5: Push((int) 1)
0x5f6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fa; Pop(1)

0x5f8: Stack[-2] = (bool) 1
0x5f9: Return(); Pop(0)

0x5fa: Stack[-2] = (bool) 0
0x5fb: Return(); Pop(0)

0x5fc: PushEmpty()
0x5fd: PushEmpty(int, string)
0x5fe: Stack[-1] = "oob11Klara1"
0x5ff: Call2 0x59c

0x600: Pop(1)
0x601: Push((int) 0)
0x602: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x604: Stack[-2] = (bool) 1
0x605: Return(); Pop(0)

0x606: Stack[-2] = (bool) 0
0x607: Return(); Pop(0)

0x608: PushEmpty()
0x609: PushEmpty(int, string)
0x60a: Stack[-1] = "b11q01KlaraWillHelp"
0x60b: Call2 0x59c

0x60c: Pop(1)
0x60d: Push((int) 0)
0x60e: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x610: Stack[-2] = (bool) 1
0x611: Return(); Pop(0)

0x612: Stack[-2] = (bool) 0
0x613: Return(); Pop(0)

0x614: PushEmpty()
0x615: PushEmpty(int, string)
0x616: Stack[-1] = "oob11Klara2"
0x617: Call2 0x59c

0x618: Pop(1)
0x619: Push((int) 0)
0x61a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x61e; Pop(1)

0x61c: Stack[-2] = (bool) 1
0x61d: Return(); Pop(0)

0x61e: Stack[-2] = (bool) 0
0x61f: Return(); Pop(0)

0x620: PushEmpty()
0x621: PushEmpty(int, string)
0x622: Stack[-1] = "b9KlaraLetter"
0x623: Call2 0x59c

0x624: Pop(1)
0x625: Push((int) 0)
0x626: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x62a; Pop(1)

0x628: Stack[-2] = (bool) 1
0x629: Return(); Pop(0)

0x62a: Stack[-2] = (bool) 0
0x62b: Return(); Pop(0)

0x62c: PushEmpty()
0x62d: PushEmpty(int, string)
0x62e: Stack[-1] = "oob11Klara3"
0x62f: Call2 0x59c

0x630: Pop(1)
0x631: Push((int) 0)
0x632: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x633: IF (Stack[-1] == 0) GOTO 0x636; Pop(1)

0x634: Stack[-2] = (bool) 1
0x635: Return(); Pop(0)

0x636: Stack[-2] = (bool) 0
0x637: Return(); Pop(0)

0x638: PushEmpty(int, int)
0x639: Push("branch")
0x63a: @ GetVariable(Stack[-1], Stack[-2])
0x63b: Pop(1)
0x63c: Push((int) 0)
0x63d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x642; Pop(1)

0x63f: Stack[-3] = (int) 1
0x640: Return(); Pop(2)

0x641: GOTO 0x647

0x642: Push((int) 1)
0x643: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x644: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x645: Stack[-3] = (int) 2
0x646: Return(); Pop(2)

0x647: Stack[-3] = (int) 3
0x648: Return(); Pop(2)

