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

RunOp = 0x310
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x118 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x314 Vars = (string)
		EVENT_6 Op = 0x328 Vars = ()
		EVENT_5 Op = 0x335 Vars = ()
		EVENT_7 Op = 0x37e Vars = (int)
		EVENT_45 Op = 0x3c0 Vars = (bool)
		EVENT_0 Op = 0x3cc Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x455

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x5a1

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x59f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x5a3

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x5a5

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x615

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
0x31: Call2 0x569

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x4aa

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
0x48: Call2 0x499

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
0x5d: Call2 0x5c1

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x5d9

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x65: Stack[-1] = (bool) 1
0x66: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x67: PushEmpty(bool)
0x68: Stack[-1] = (bool) 0
0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0x5cd

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0x5d9

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: Stack[-1] = (bool) 1
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 0
0x76: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x77: PushEmpty(object, object)
0x78: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x79: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a: Call2 0x5a9

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
0x9f: Call2 0x5c1

0xa0: Pop(1)
0xa1: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa2: PushEmpty(bool, object)
0xa3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4: Call2 0x5cd

0xa5: Pop(1)
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Stack[-1] = (bool) 1
0xa8: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xa9: PushEmpty(bool, object)
0xaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab: Call2 0x5e5

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
0xba: Call2 0x5e5

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xbd: PushEmpty(bool, object)
0xbe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Call2 0x5f1

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
0xcd: Call2 0x5fd

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Call2 0x609

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
0xe5: Call2 0x5a7

0xe6: Pop(0)
0xe7: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xe8: @ lshWaitForAnimEnd()
0xe9: Pop(0)
0xea: Push( Stack[3 + Tasks[-1].StackPointer] )
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: GOTO 0xf2

0xed: PushEmpty(string)
0xee: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xef: Call2 0x534

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
0x104: Call2 0x5a7

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
0x114: Call2 0x544

0x115: Pop(2)
0x116: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x117: Return(); Pop(0)

0x118: PushEmpty()
0x119: Push((int) 1)
0x11a: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x11b: PushEmpty()
0x11c: Call2 0x562

0x11d: Pop(0)
0x11e: Push((int) 24461)
0x11f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: PushEmpty(object, object)
0x122: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x123: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x124: Call2 0x5af

0x125: Pop(2)
0x126: Push((int) 24467)
0x127: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128: IF (Stack[-1] == 0) GOTO 0x12e; Pop(1)

0x129: PushEmpty(object, object)
0x12a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x12b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x12c: Call2 0x5af

0x12d: Pop(2)
0x12e: Push((int) 24468)
0x12f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: PushEmpty(object, object)
0x132: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x133: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x134: Call2 0x5af

0x135: Pop(2)
0x136: Push((int) 23272)
0x137: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x139: PushEmpty(object, object)
0x13a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13c: Call2 0x5b5

0x13d: Pop(2)
0x13e: Push((int) 36215)
0x13f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x146; Pop(1)

0x141: PushEmpty(object, object)
0x142: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x143: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x144: Call2 0x5bb

0x145: Pop(2)
0x146: Push((int) 23268)
0x147: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x149: PushEmpty(bool)
0x14a: Stack[-1] = (bool) 1
0x14b: PushEmpty(bool)
0x14c: Stack[-1] = (bool) 0
0x14d: PushEmpty(bool, object)
0x14e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14f: Call2 0x5c1

0x150: Pop(1)
0x151: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x152: PushEmpty(bool, object)
0x153: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x154: Call2 0x5d9

0x155: Pop(1)
0x156: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x157: Stack[-1] = (bool) 1
0x158: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x5cd

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x5d9

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x167: Stack[-1] = (bool) 0
0x168: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x169: PushEmpty(object, object)
0x16a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16c: Call2 0x5a9

0x16d: Pop(2)
0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Saveyouall"
0x170: Call2 0x102

0x171: Pop(1)
0x172: Push((int) 522101)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 522102)
0x178: Push((int) 24452)
0x179: Push((int) 23269)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Push((int) 522103)
0x17d: Push((int) 24448)
0x17e: Push((int) 23270)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: PushEmpty(string)
0x183: Stack[-1] = "Smile"
0x184: Call2 0x102

0x185: Pop(1)
0x186: Push((int) 522104)
0x187: @@ SetMessage(Stack[-1])
0x188: Pop(1)
0x189: @@ ClearReplies()
0x18a: Pop(0)
0x18b: PushEmpty(bool)
0x18c: Stack[-1] = (bool) 0
0x18d: PushEmpty(bool)
0x18e: Stack[-1] = (bool) 0
0x18f: PushEmpty(bool, object)
0x190: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x191: Call2 0x5c1

0x192: Pop(1)
0x193: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x194: PushEmpty(bool, object)
0x195: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x196: Call2 0x5cd

0x197: Pop(1)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Stack[-1] = (bool) 1
0x19a: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x5e5

0x19e: Pop(1)
0x19f: Pop(1); Push((bool) Stack[-1] == 0)
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: Stack[-1] = (bool) 1
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: Push((int) 523263)
0x1a4: Push((int) 24464)
0x1a5: Push((int) 24463)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0x5e5

0x1ad: Pop(1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Call2 0x5f1

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: Push((int) 522105)
0x1b7: Push((int) 24443)
0x1b8: Push((int) 23272)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: PushEmpty(bool)
0x1bc: Stack[-1] = (bool) 0
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Call2 0x5fd

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c2: PushEmpty(bool, object)
0x1c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Call2 0x609

0x1c5: Pop(1)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 1
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: Push((int) 534577)
0x1ca: Push((int) 36216)
0x1cb: Push((int) 36215)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Push((int) 523242)
0x1cf: Push((int) -1)
0x1d0: Push((int) 24442)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: Return(); Pop(0)

0x1d4: Push((int) 36216)
0x1d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1d7: PushEmpty(string)
0x1d8: Stack[-1] = "Neutral"
0x1d9: Call2 0x102

0x1da: Pop(1)
0x1db: Push((int) 534578)
0x1dc: @@ SetMessage(Stack[-1])
0x1dd: Pop(1)
0x1de: @@ ClearReplies()
0x1df: Pop(0)
0x1e0: Push((int) 534579)
0x1e1: Push((int) 36219)
0x1e2: Push((int) 36217)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Push((int) 534580)
0x1e6: Push((int) -1)
0x1e7: Push((int) 36218)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 36219)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Saveyouall"
0x1f0: Call2 0x102

0x1f1: Pop(1)
0x1f2: Push((int) 534581)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 534582)
0x1f8: Push((int) -1)
0x1f9: Push((int) 36220)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 534583)
0x1fd: Push((int) -1)
0x1fe: Push((int) 36221)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 24443)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Sly"
0x207: Call2 0x102

0x208: Pop(1)
0x209: Push((int) 523243)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 523244)
0x20f: Push((int) -1)
0x210: Push((int) 24444)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 523245)
0x214: Push((int) 24446)
0x215: Push((int) 24445)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 24446)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Sly"
0x21e: Call2 0x102

0x21f: Pop(1)
0x220: Push((int) 523246)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 523247)
0x226: Push((int) -1)
0x227: Push((int) 24447)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Return(); Pop(0)

0x22b: Push((int) 24464)
0x22c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x22d: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x22e: PushEmpty(string)
0x22f: Stack[-1] = "Neutral"
0x230: Call2 0x102

0x231: Pop(1)
0x232: Push((int) 523264)
0x233: @@ SetMessage(Stack[-1])
0x234: Pop(1)
0x235: @@ ClearReplies()
0x236: Pop(0)
0x237: Push((int) 523265)
0x238: Push((int) 24466)
0x239: Push((int) 24465)
0x23a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23b: Pop(3)
0x23c: Return(); Pop(0)

0x23d: Push((int) 24466)
0x23e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Saveyouall"
0x242: Call2 0x102

0x243: Pop(1)
0x244: Push((int) 523266)
0x245: @@ SetMessage(Stack[-1])
0x246: Pop(1)
0x247: @@ ClearReplies()
0x248: Pop(0)
0x249: Push((int) 523267)
0x24a: Push((int) -1)
0x24b: Push((int) 24467)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Push((int) 523268)
0x24f: Push((int) -1)
0x250: Push((int) 24468)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Push((int) 24448)
0x255: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x257: PushEmpty(string)
0x258: Stack[-1] = "Smile"
0x259: Call2 0x102

0x25a: Pop(1)
0x25b: Push((int) 523248)
0x25c: @@ SetMessage(Stack[-1])
0x25d: Pop(1)
0x25e: @@ ClearReplies()
0x25f: Pop(0)
0x260: Push((int) 523250)
0x261: Push((int) 24452)
0x262: Push((int) 24450)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: Push((int) 523249)
0x266: Push((int) 24452)
0x267: Push((int) 24449)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: Return(); Pop(0)

0x26b: Push((int) 24452)
0x26c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26d: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x26e: PushEmpty(string)
0x26f: Stack[-1] = "Saveyouall"
0x270: Call2 0x102

0x271: Pop(1)
0x272: Push((int) 523252)
0x273: @@ SetMessage(Stack[-1])
0x274: Pop(1)
0x275: @@ ClearReplies()
0x276: Pop(0)
0x277: Push((int) 523253)
0x278: Push((int) 24451)
0x279: Push((int) 24453)
0x27a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27b: Pop(3)
0x27c: Return(); Pop(0)

0x27d: Push((int) 24451)
0x27e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x280: PushEmpty(string)
0x281: Stack[-1] = "Neutral"
0x282: Call2 0x102

0x283: Pop(1)
0x284: Push((int) 523251)
0x285: @@ SetMessage(Stack[-1])
0x286: Pop(1)
0x287: @@ ClearReplies()
0x288: Pop(0)
0x289: Push((int) 523254)
0x28a: Push((int) 24456)
0x28b: Push((int) 24454)
0x28c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28d: Pop(3)
0x28e: Push((int) 523255)
0x28f: Push((int) 24469)
0x290: Push((int) 24455)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: Return(); Pop(0)

0x294: Push((int) 24469)
0x295: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x296: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x297: PushEmpty(string)
0x298: Stack[-1] = "Sly"
0x299: Call2 0x102

0x29a: Pop(1)
0x29b: Push((int) 523269)
0x29c: @@ SetMessage(Stack[-1])
0x29d: Pop(1)
0x29e: @@ ClearReplies()
0x29f: Pop(0)
0x2a0: Push((int) 523270)
0x2a1: Push((int) 24456)
0x2a2: Push((int) 24470)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: Push((int) 24456)
0x2a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a8: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2a9: PushEmpty(string)
0x2aa: Stack[-1] = "Neutral"
0x2ab: Call2 0x102

0x2ac: Pop(1)
0x2ad: Push((int) 523256)
0x2ae: @@ SetMessage(Stack[-1])
0x2af: Pop(1)
0x2b0: @@ ClearReplies()
0x2b1: Pop(0)
0x2b2: Push((int) 523257)
0x2b3: Push((int) 24458)
0x2b4: Push((int) 24457)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 24473)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bb; Pop(1)

0x2bb: Push((int) 24475)
0x2bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2d2; Pop(1)

0x2be: PushEmpty(string)
0x2bf: Stack[-1] = "Sly"
0x2c0: Call2 0x102

0x2c1: Pop(1)
0x2c2: Push((int) 523274)
0x2c3: @@ SetMessage(Stack[-1])
0x2c4: Pop(1)
0x2c5: @@ ClearReplies()
0x2c6: Pop(0)
0x2c7: Push((int) 523276)
0x2c8: Push((int) -1)
0x2c9: Push((int) 24478)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: Push((int) 523277)
0x2cd: Push((int) -1)
0x2ce: Push((int) 24479)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Return(); Pop(0)

0x2d2: Push((int) 24458)
0x2d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Neutral"
0x2d7: Call2 0x102

0x2d8: Pop(1)
0x2d9: Push((int) 523258)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: Push((int) 523259)
0x2df: Push((int) 24460)
0x2e0: Push((int) 24459)
0x2e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e2: Pop(3)
0x2e3: Return(); Pop(0)

0x2e4: Push((int) 24460)
0x2e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e6: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2e7: PushEmpty(string)
0x2e8: Stack[-1] = "Sly"
0x2e9: Call2 0x102

0x2ea: Pop(1)
0x2eb: Push((int) 523260)
0x2ec: @@ SetMessage(Stack[-1])
0x2ed: Pop(1)
0x2ee: @@ ClearReplies()
0x2ef: Pop(0)
0x2f0: Push((int) 523261)
0x2f1: Push((int) -1)
0x2f2: Push((int) 24461)
0x2f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f4: Pop(3)
0x2f5: Push((int) 523262)
0x2f6: Push((int) -1)
0x2f7: Push((int) 24462)
0x2f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f9: Pop(3)
0x2fa: Return(); Pop(0)

0x2fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2fc: PushEmpty(bool)
0x2fd: Call2 0x5a7

0x2fe: Pop(0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x300: @ lshStopAnimation()
0x301: Pop(0)
0x302: GOTO 0x305

0x303: @ StopAnimation()
0x304: Pop(0)
0x305: Return(); Pop(0)

0x306: GOTO 0x119

0x307: Return(); Pop(0)

0x308: PushEmpty()
0x309: PushEmpty(int, object)
0x30a: Stack[-1] = Stack[-3]
0x30b: Push(-2, 1); TaskCall(0)
0x30c: Call2 0x0

0x30d: Pop(-2, 1); TaskReturn
0x30e: Pop(2)
0x30f: Return(); Pop(0)

0x310: PushEmpty()
0x311: Call2 0x339

0x312: Pop(0)
0x313: Return(); Pop(0)

0x314: PushEmpty(bool, bool)
0x315: Push("cleanup")
0x316: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x318: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x319: @ IsLoaded(Stack[-1])
0x31a: Pop(0)
0x31b: Pop(0); Push((bool) Stack[-1] == 0)
0x31c: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31d: PushEmpty(object)
0x31e: Call2 0x569

0x31f: Pop(0)
0x320: @ RemoveActor(Stack[-1])
0x321: Pop(1)
0x322: GOTO 0x327

0x323: Push("restore")
0x324: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x327: Return(); Pop(2)

0x328: Push( Stack[1 + Tasks[-1].StackPointer] )
0x329: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x32a: PushEmpty(object)
0x32b: Call2 0x569

0x32c: Pop(0)
0x32d: @ RemoveActor(Stack[-1])
0x32e: Pop(1)
0x32f: @ Hold()
0x330: Pop(0)
0x331: PushEmpty()
0x332: Call2 0x3a4

0x333: Pop(0)
0x334: Return(); Pop(0)

0x335: PushEmpty()
0x336: Call2 0x3b3

0x337: Pop(0)
0x338: Return(); Pop(0)

0x339: PushEmpty(bool)
0x33a: Call2 0x450

0x33b: Pop(0)
0x33c: Pop(1); Push((bool) Stack[-1] == 0)
0x33d: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33e: @ Hold()
0x33f: Pop(0)
0x340: @ GetDirection(Stack[-0])
0x341: Pop(0)
0x342: PushEmpty()
0x343: Call2 0x3e9

0x344: Pop(0)
0x345: GOTO 0x342

0x346: Return(); Pop(0)

0x347: PushEmpty(object, object)
0x348: Push("player")
0x349: @ FindActor(Stack[-2], Stack[-1])
0x34a: Pop(1)
0x34b: Pop(0); Push((bool) Stack[-1] == 0)
0x34c: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x34d: Stack[-3] = (bool) 0
0x34e: Return(); Pop(2)

0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[-3]
0x351: Call2 0x447

0x352: Stack[-5] = Stack[-2]
0x353: Pop(2)
0x354: Return(); Pop(2)

0x355: Stack[-1] = 0
0x356: Push(CvectorIndex(Stack[-0], 0))
0x357: Push(CvectorIndex(Stack[-0], 2))
0x358: @ RotateAsync(Stack[-2], Stack[-1])
0x359: Pop(2)
0x35a: Return(); Pop(0)

0x35b: PushEmpty(object, bool, object, bool)
0x35c: Push("player")
0x35d: @ FindActor(Stack[-3], Stack[-1])
0x35e: Pop(1)
0x35f: Pop(0); Push((bool) Stack[-2] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x361: Stack[-5] = (bool) 0
0x362: Return(); Pop(4)

0x363: PushEmpty(float, object)
0x364: Stack[-1] = Stack[-4]
0x365: Call2 0x435

0x366: Pop(1)
0x367: Push((float)90000.0)
0x368: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: Stack[-5] = (bool) 0
0x36b: Return(); Pop(4)

0x36c: @ CanSee(Stack[-1], Stack[-2])
0x36d: Pop(0)
0x36e: Stack[-5] = Stack[-1]
0x36f: Return(); Pop(4)

0x370: Stack[-2] = 0
0x371: PushEmpty(float, float)
0x372: Push((int) 8)
0x373: Push((int) 16)
0x374: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x375: Pop(2)
0x376: Push((int) 10)
0x377: @ SetTimer(Stack[-1], Stack[-2])
0x378: Pop(1)
0x379: Return(); Pop(2)

0x37a: Push((int) 10)
0x37b: @ KillTimer(Stack[-1])
0x37c: Pop(1)
0x37d: Return(); Pop(0)

0x37e: PushEmpty()
0x37f: Push((int) 10)
0x380: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x382: PushEmpty()
0x383: Call2 0x37a

0x384: Pop(0)
0x385: PushEmpty(bool)
0x386: Stack[-1] = (bool) 0
0x387: PushEmpty(bool)
0x388: Call2 0x450

0x389: Pop(0)
0x38a: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38b: PushEmpty(bool)
0x38c: Call2 0x35b

0x38d: Pop(0)
0x38e: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38f: Stack[-1] = (bool) 1
0x390: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x391: PushEmpty(bool)
0x392: Call2 0x347

0x393: Pop(0)
0x394: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x395: PushEmpty(bool, object)
0x396: PushEmpty(object)
0x397: Call2 0x569

0x398: Stack[-2] = Stack[-1]
0x399: Pop(1)
0x39a: Call2 0x4e4

0x39b: Pop(2)
0x39c: GOTO 0x3a3

0x39d: PushEmpty()
0x39e: Call2 0x356

0x39f: Pop(0)
0x3a0: PushEmpty()
0x3a1: Call2 0x371

0x3a2: Pop(0)
0x3a3: Return(); Pop(0)

0x3a4: PushEmpty()
0x3a5: Call2 0x430

0x3a6: Pop(0)
0x3a7: PushEmpty()
0x3a8: Call2 0x37a

0x3a9: Pop(0)
0x3aa: @ lshStopSpeech()
0x3ab: Pop(0)
0x3ac: @ lshStopAnimation()
0x3ad: Pop(0)
0x3ae: @ StopAsync()
0x3af: Pop(0)
0x3b0: @ Hold()
0x3b1: Pop(0)
0x3b2: Return(); Pop(0)

0x3b3: @ StopGroup0()
0x3b4: Pop(0)
0x3b5: PushEmpty()
0x3b6: Call2 0x37a

0x3b7: Pop(0)
0x3b8: PushEmpty(string)
0x3b9: Stack[-1] = "Neutral"
0x3ba: Call2 0x534

0x3bb: Pop(1)
0x3bc: PushEmpty()
0x3bd: Call2 0x371

0x3be: Pop(0)
0x3bf: Return(); Pop(0)

0x3c0: PushEmpty()
0x3c1: Push(Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c3: PushEmpty()
0x3c4: Call2 0x371

0x3c5: Pop(0)
0x3c6: GOTO 0x3cb

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Neutral"
0x3c9: Call2 0x534

0x3ca: Pop(1)
0x3cb: Return(); Pop(0)

0x3cc: PushEmpty(bool, bool)
0x3cd: @ IsOverrideActive(Stack[-1])
0x3ce: Pop(0)
0x3cf: Pop(0); Push((bool) Stack[-1] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3e8; Pop(1)

0x3d1: EventDisable(0)
0x3d2: PushEmpty()
0x3d3: Call2 0x430

0x3d4: Pop(0)
0x3d5: PushEmpty(bool, object)
0x3d6: Stack[-1] = Stack[-5]
0x3d7: Call2 0x447

0x3d8: Pop(2)
0x3d9: EventEnable(0)
0x3da: PushEmpty(object)
0x3db: Stack[-1] = Stack[-4]
0x3dc: Call2 0x308

0x3dd: Pop(1)
0x3de: PushEmpty(string)
0x3df: Stack[-1] = "Neutral"
0x3e0: Call2 0x534

0x3e1: Pop(1)
0x3e2: PushEmpty()
0x3e3: Call2 0x37a

0x3e4: Pop(0)
0x3e5: PushEmpty()
0x3e6: Call2 0x371

0x3e7: Pop(0)
0x3e8: Return(); Pop(2)

0x3e9: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x3ea: @ WaitForAnimEnd()
0x3eb: Pop(0)
0x3ec: PushEmpty(bool)
0x3ed: Call2 0x450

0x3ee: Pop(0)
0x3ef: Pop(1); Push((bool) Stack[-1] == 0)
0x3f0: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3f1: Return(); Pop(12)

0x3f2: PushEmpty(int)
0x3f3: Call2 0x58e

0x3f4: Stack[-7] = Stack[-1]
0x3f5: Pop(1)
0x3f6: Stack[-5] = (int) 0
0x3f7: PushEmpty(bool)
0x3f8: Stack[-1] = (bool) 0
0x3f9: Push((int) 5)
0x3fa: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x3fb: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3fc: PushEmpty(bool)
0x3fd: Call2 0x450

0x3fe: Pop(0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x400: Stack[-1] = (bool) 1
0x401: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x402: Pop(0); Push((bool) Stack[-6] == 0)
0x403: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x404: Push((int) 3)
0x405: @ Sleep(Stack[-1], Stack[-5])
0x406: Pop(1)
0x407: Pop(0); Push((bool) Stack[-4] == 0)
0x408: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x409: GOTO 0x42b

0x40a: GOTO 0x420

0x40b: @ irand(Stack[-3], Stack[-6])
0x40c: Pop(0)
0x40d: Push((int) 5)
0x40e: @ irand(Stack[-3], Stack[-1])
0x40f: Pop(1)
0x410: Push((int) 0)
0x411: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x412: IF (Stack[-1] == 0) GOTO 0x414; Pop(1)

0x413: Stack[-3] = (int) 0
0x414: Push("all")
0x415: PushEmpty(string, int)
0x416: Stack[-1] = Stack[-6]
0x417: Call2 0x587

0x418: Pop(1)
0x419: @ PlayAnimation(Stack[-2], Stack[-1])
0x41a: Pop(2)
0x41b: @ WaitForAnimEnd(Stack[-1])
0x41c: Pop(0)
0x41d: Pop(0); Push((bool) Stack[-1] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x420; Pop(1)

0x41f: GOTO 0x42b

0x420: PushEmpty(bool)
0x421: Call2 0x42e

0x422: Pop(0)
0x423: Pop(1); Push((bool) Stack[-1] == 0)
0x424: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x425: GOTO 0x42b

0x426: @ ResetAAS()
0x427: Pop(0)
0x428: Push((int) 1)
0x429: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x42a: GOTO 0x3f7

0x42b: @ ResetAAS()
0x42c: Pop(0)
0x42d: Return(); Pop(12)

0x42e: Stack[-1] = (bool) 1
0x42f: Return(); Pop(0)

0x430: @ StopAnimation()
0x431: Pop(0)
0x432: @ StopGroup0()
0x433: Pop(0)
0x434: Return(); Pop(0)

0x435: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x436: @ GetPosition(Stack[-3])
0x437: Pop(0)
0x438: @@ GetPosition(Stack[-2])
0x439: Pop(0)
0x43a: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x43b: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x43c: Return(); Pop(6)

0x43d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x43e: @ GetPosition(Stack[-3])
0x43f: Pop(0)
0x440: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x441: Push(CvectorIndex(Stack[-2], 0))
0x442: Push(CvectorIndex(Stack[-3], 2))
0x443: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x444: Pop(2)
0x445: Stack[-8] = Stack[-1]
0x446: Return(); Pop(6)

0x447: PushEmpty(cvector, cvector)
0x448: @@ GetPosition(Stack[-1])
0x449: Pop(0)
0x44a: PushEmpty(bool, cvector)
0x44b: Stack[-1] = Stack[-3]
0x44c: Call2 0x43d

0x44d: Stack[-6] = Stack[-2]
0x44e: Pop(2)
0x44f: Return(); Pop(2)

0x450: PushEmpty(bool, bool)
0x451: @ IsLoaded(Stack[-1])
0x452: Pop(0)
0x453: Stack[-3] = Stack[-1]
0x454: Return(); Pop(2)

0x455: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x456: @@ GetPosition(Stack[-8])
0x457: Pop(0)
0x458: @@ GetEyesHeight(Stack[-9])
0x459: Pop(0)
0x45a: Push(CvectorIndex(Stack[-8], 1))
0x45b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x45c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x45d: @ GetPosition(Stack[-7])
0x45e: Pop(0)
0x45f: @ GetEyesHeight(Stack[-9])
0x460: Pop(0)
0x461: Push(CvectorIndex(Stack[-7], 1))
0x462: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x463: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x464: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x465: Push(CvectorIndex(Stack[-6], 1))
0x466: Stack[-1] = (int) 0
0x467: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x468: Pop(0); Push(Stack[-6] | Stack[-6]);
0x469: Pop(1); Push(Sqrt(Stack[-1]))
0x46a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x46b: Stack[-5] = -Stack[-6]; Pop(0);
0x46c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x46d: PushEmpty(cvector, cvector)
0x46e: Push(CVector(0.0, 1.0, 0.0))
0x46f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x470: Call2 0x56f

0x471: Pop(1)
0x472: Push((int) 25)
0x473: Pop(2); Push(Stack[-2] * Stack[-1]);
0x474: Pop(2); Push(Stack[-2] + Stack[-1]);
0x475: Push(CVector(0.0, 10.0, 0.0))
0x476: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x477: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x478: @ IsOverrideActive(Stack[-2])
0x479: Pop(0)
0x47a: Push(Stack[-2])
0x47b: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47c: Stack[-21] = (bool) 0
0x47d: Return(); Pop(18)

0x47e: @ StopWorld()
0x47f: Pop(0)
0x480: @ CameraTransit(Stack[-3], Stack[-5])
0x481: Pop(0)
0x482: Push(CvectorIndex(Stack[-4], 0))
0x483: Push(CvectorIndex(Stack[-5], 2))
0x484: @ Rotate(Stack[-2], Stack[-1])
0x485: Pop(2)
0x486: PushEmpty(bool)
0x487: Call2 0x5a7

0x488: Pop(0)
0x489: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48a: GOTO 0x493

0x48b: Push("head")
0x48c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x48d: Pop(1)
0x48e: Push(Stack[-1])
0x48f: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x490: Push("head")
0x491: @ LookAsyncCamera(Stack[-1])
0x492: Pop(1)
0x493: @ CameraWaitForPlayFinish()
0x494: Pop(0)
0x495: @ ResumeWorld()
0x496: Pop(0)
0x497: Stack[-21] = (bool) 1
0x498: Return(); Pop(18)

0x499: PushEmpty(bool, bool)
0x49a: @ CameraSwitchToNormal()
0x49b: Pop(0)
0x49c: PushEmpty(bool)
0x49d: Call2 0x5a7

0x49e: Pop(0)
0x49f: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x4a0: GOTO 0x4a9

0x4a1: Push("head")
0x4a2: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4a3: Pop(1)
0x4a4: Push(Stack[-1])
0x4a5: IF (Stack[-1] == 0) GOTO 0x4a9; Pop(1)

0x4a6: Push("head")
0x4a7: @ UnlookAsync(Stack[-1])
0x4a8: Pop(1)
0x4a9: Return(); Pop(2)

0x4aa: PushEmpty(int, int, int, int)
0x4ab: Push("voice_common")
0x4ac: @ GetVariable(Stack[-1], Stack[-3])
0x4ad: Pop(1)
0x4ae: Push(Stack[-2])
0x4af: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4b0: PushEmpty(bool, object)
0x4b1: Stack[-1] = Stack[-7]
0x4b2: Call2 0x4e4

0x4b3: Pop(1)
0x4b4: Pop(1); Push((bool) Stack[-1] == 0)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4b6: PushEmpty(bool, object)
0x4b7: Stack[-1] = Stack[-7]
0x4b8: Call2 0x509

0x4b9: Pop(1)
0x4ba: Pop(1); Push((bool) Stack[-1] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4be; Pop(1)

0x4bc: Stack[-6] = (bool) 0
0x4bd: Return(); Pop(4)

0x4be: Push((int) 2)
0x4bf: @ irand(Stack[-2], Stack[-1])
0x4c0: Pop(1)
0x4c1: Push(Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4cb; Pop(1)

0x4c3: Push("voice_common")
0x4c4: Push((int) 1)
0x4c5: Pop(1); Push(Stack[-4] + Stack[-1]);
0x4c6: Push((int) 3)
0x4c7: Pop(2); Push(Stack[-2] % Stack[-1]);
0x4c8: @ SetVariable(Stack[-2], Stack[-1])
0x4c9: Pop(2)
0x4ca: GOTO 0x4cf

0x4cb: Push("voice_common")
0x4cc: Push((int) 0)
0x4cd: @ SetVariable(Stack[-2], Stack[-1])
0x4ce: Pop(2)
0x4cf: GOTO 0x4e2

0x4d0: PushEmpty(bool, object)
0x4d1: Stack[-1] = Stack[-7]
0x4d2: Call2 0x509

0x4d3: Pop(1)
0x4d4: Pop(1); Push((bool) Stack[-1] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d6: PushEmpty(bool, object)
0x4d7: Stack[-1] = Stack[-7]
0x4d8: Call2 0x4e4

0x4d9: Pop(1)
0x4da: Pop(1); Push((bool) Stack[-1] == 0)
0x4db: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4dc: Stack[-6] = (bool) 0
0x4dd: Return(); Pop(4)

0x4de: Push("voice_common")
0x4df: Push((int) 1)
0x4e0: @ SetVariable(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: Stack[-6] = (bool) 1
0x4e3: Return(); Pop(4)

0x4e4: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x4e5: Stack[-5] = "c"
0x4e6: Stack[-4] = (int) 0
0x4e7: Push((int) 1)
0x4e8: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4e9: Push((int) 1)
0x4ea: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4eb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4ec: @@ HasProperty(Stack[-1], Stack[-4])
0x4ed: Pop(1)
0x4ee: Pop(0); Push((bool) Stack[-3] == 0)
0x4ef: IF (Stack[-1] == 0) GOTO 0x4f1; Pop(1)

0x4f0: GOTO 0x4f4

0x4f1: Push((int) 1)
0x4f2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4f3: GOTO 0x4e7

0x4f4: Pop(0); Push((bool) Stack[-4] == 0)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f8; Pop(1)

0x4f6: Stack[-12] = (bool) 0
0x4f7: Return(); Pop(10)

0x4f8: Stack[-2] = (int) 0
0x4f9: Push((int) 1)
0x4fa: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4fc: @ irand(Stack[-2], Stack[-4])
0x4fd: Pop(0)
0x4fe: Push((int) 1)
0x4ff: Pop(1); Push(Stack[-3] + Stack[-1]);
0x500: Pop(1); Push(Stack[-6] + Stack[-1]);
0x501: @@ GetProperty(Stack[-1], Stack[-2])
0x502: Pop(1)
0x503: PushEmpty(bool, string)
0x504: Stack[-1] = Stack[-3]
0x505: Call2 0x553

0x506: Stack[-14] = Stack[-2]
0x507: Pop(2)
0x508: Return(); Pop(10)

0x509: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x50a: Push("d")
0x50b: PushEmpty(int)
0x50c: Call2 0x57e

0x50d: Pop(0)
0x50e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x50f: Push("m")
0x510: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x511: Stack[-4] = (int) 0
0x512: Push((int) 1)
0x513: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x514: Push((int) 1)
0x515: Pop(1); Push(Stack[-5] + Stack[-1]);
0x516: Pop(1); Push(Stack[-6] + Stack[-1]);
0x517: @@ HasProperty(Stack[-1], Stack[-4])
0x518: Pop(1)
0x519: Pop(0); Push((bool) Stack[-3] == 0)
0x51a: IF (Stack[-1] == 0) GOTO 0x51c; Pop(1)

0x51b: GOTO 0x51f

0x51c: Push((int) 1)
0x51d: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x51e: GOTO 0x512

0x51f: Pop(0); Push((bool) Stack[-4] == 0)
0x520: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x521: Stack[-12] = (bool) 0
0x522: Return(); Pop(10)

0x523: Stack[-2] = (int) 0
0x524: Push((int) 1)
0x525: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x526: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x527: @ irand(Stack[-2], Stack[-4])
0x528: Pop(0)
0x529: Push((int) 1)
0x52a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x52b: Pop(1); Push(Stack[-6] + Stack[-1]);
0x52c: @@ GetProperty(Stack[-1], Stack[-2])
0x52d: Pop(1)
0x52e: PushEmpty(bool, string)
0x52f: Stack[-1] = Stack[-3]
0x530: Call2 0x553

0x531: Stack[-14] = Stack[-2]
0x532: Pop(2)
0x533: Return(); Pop(10)

0x534: PushEmpty(bool, float, float, bool, float, float)
0x535: @ lshHasAnimation(Stack[-3], Stack[-7])
0x536: Pop(0)
0x537: Push(Stack[-3])
0x538: IF (Stack[-1] == 0) GOTO 0x53f; Pop(1)

0x539: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x53a: Pop(0)
0x53b: Push((bool) 0)
0x53c: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x53d: Pop(1)
0x53e: GOTO 0x543

0x53f: Push("Can't find lsh animation : ")
0x540: Pop(1); Push(Stack[-1] + Stack[-8]);
0x541: @ Trace(Stack[-1])
0x542: Pop(1)
0x543: Return(); Pop(6)

0x544: PushEmpty(bool, float, float, bool, float, float)
0x545: @ lshHasAnimation(Stack[-3], Stack[-8])
0x546: Pop(0)
0x547: Push(Stack[-3])
0x548: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x549: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x54a: Pop(0)
0x54b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x54c: Pop(0)
0x54d: GOTO 0x552

0x54e: Push("Can't find lsh animation : ")
0x54f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x550: @ Trace(Stack[-1])
0x551: Pop(1)
0x552: Return(); Pop(6)

0x553: PushEmpty(bool, bool)
0x554: PushEmpty(bool)
0x555: Call2 0x5a7

0x556: Pop(0)
0x557: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x558: @ lshHasSpeech(Stack[-1], Stack[-3])
0x559: Pop(0)
0x55a: Push(Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55c: @ lshPlaySpeech(Stack[-3])
0x55d: Pop(0)
0x55e: Stack[-4] = (bool) 1
0x55f: Return(); Pop(2)

0x560: Stack[-4] = (bool) 0
0x561: Return(); Pop(2)

0x562: PushEmpty(bool)
0x563: Call2 0x5a7

0x564: Pop(0)
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: @ lshStopSpeech()
0x567: Pop(0)
0x568: Return(); Pop(0)

0x569: PushEmpty(object, object)
0x56a: @ self(Stack[-1])
0x56b: Pop(0)
0x56c: Stack[-3] = Stack[-1]
0x56d: Return(); Pop(2)

0x56e: Stack[-1] = 0
0x56f: PushEmpty(float, float)
0x570: Pop(0); Push(Stack[-3] | Stack[-3]);
0x571: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x572: Push((float)0.0)
0x573: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x574: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x575: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x576: Return(); Pop(2)

0x577: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x578: Return(); Pop(2)

0x579: PushEmpty(int, int)
0x57a: @ GetVariable(Stack[-3], Stack[-1])
0x57b: Pop(0)
0x57c: Stack[-4] = Stack[-1]
0x57d: Return(); Pop(2)

0x57e: PushEmpty(float, float)
0x57f: @ GetGameTime(Stack[-1])
0x580: Pop(0)
0x581: Push((int) 1)
0x582: PushEmpty(int)
0x583: Push((int) 24)
0x584: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x585: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x586: Return(); Pop(2)

0x587: PushEmpty(string, string)
0x588: Stack[-1] = "idle"
0x589: Push(Stack[-3])
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x58c: Stack[-4] = Stack[-1]
0x58d: Return(); Pop(2)

0x58e: PushEmpty(int, bool, int, bool)
0x58f: Stack[-2] = (int) 0
0x590: Push("all")
0x591: PushEmpty(string, int)
0x592: Stack[-1] = Stack[-5]
0x593: Call2 0x587

0x594: Pop(1)
0x595: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x596: Pop(2)
0x597: Pop(0); Push((bool) Stack[-1] == 0)
0x598: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x599: GOTO 0x59d

0x59a: Push((int) 1)
0x59b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x59c: GOTO 0x590

0x59d: Stack[-5] = Stack[-2]
0x59e: Return(); Pop(4)

0x59f: Stack[-1] = (int) 515540
0x5a0: Return(); Pop(0)

0x5a1: Stack[-1] = (int) 502865
0x5a2: Return(); Pop(0)

0x5a3: Stack[-1] = "ui/NPC_Klara.png"
0x5a4: Return(); Pop(0)

0x5a5: Stack[-1] = "ui/NPC_Klara_b.png"
0x5a6: Return(); Pop(0)

0x5a7: Stack[-1] = (bool) 1
0x5a8: Return(); Pop(0)

0x5a9: PushEmpty()
0x5aa: Push("oob11Klara1")
0x5ab: Push((int) 1)
0x5ac: @ SetVariable(Stack[-2], Stack[-1])
0x5ad: Pop(2)
0x5ae: Return(); Pop(0)

0x5af: PushEmpty()
0x5b0: Push("b11q01KlaraWillHelp")
0x5b1: Push((int) 1)
0x5b2: @ SetVariable(Stack[-2], Stack[-1])
0x5b3: Pop(2)
0x5b4: Return(); Pop(0)

0x5b5: PushEmpty()
0x5b6: Push("oob11Klara2")
0x5b7: Push((int) 1)
0x5b8: @ SetVariable(Stack[-2], Stack[-1])
0x5b9: Pop(2)
0x5ba: Return(); Pop(0)

0x5bb: PushEmpty()
0x5bc: Push("oob11Klara3")
0x5bd: Push((int) 1)
0x5be: @ SetVariable(Stack[-2], Stack[-1])
0x5bf: Pop(2)
0x5c0: Return(); Pop(0)

0x5c1: PushEmpty()
0x5c2: PushEmpty(int, string)
0x5c3: Stack[-1] = "b11q01"
0x5c4: Call2 0x579

0x5c5: Pop(1)
0x5c6: Push((int) 0)
0x5c7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5c8: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c9: Stack[-2] = (bool) 1
0x5ca: Return(); Pop(0)

0x5cb: Stack[-2] = (bool) 0
0x5cc: Return(); Pop(0)

0x5cd: PushEmpty()
0x5ce: PushEmpty(int, string)
0x5cf: Stack[-1] = "b11q01"
0x5d0: Call2 0x579

0x5d1: Pop(1)
0x5d2: Push((int) 1)
0x5d3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d5: Stack[-2] = (bool) 1
0x5d6: Return(); Pop(0)

0x5d7: Stack[-2] = (bool) 0
0x5d8: Return(); Pop(0)

0x5d9: PushEmpty()
0x5da: PushEmpty(int, string)
0x5db: Stack[-1] = "oob11Klara1"
0x5dc: Call2 0x579

0x5dd: Pop(1)
0x5de: Push((int) 0)
0x5df: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5e1: Stack[-2] = (bool) 1
0x5e2: Return(); Pop(0)

0x5e3: Stack[-2] = (bool) 0
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty()
0x5e6: PushEmpty(int, string)
0x5e7: Stack[-1] = "b11q01KlaraWillHelp"
0x5e8: Call2 0x579

0x5e9: Pop(1)
0x5ea: Push((int) 0)
0x5eb: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ed: Stack[-2] = (bool) 1
0x5ee: Return(); Pop(0)

0x5ef: Stack[-2] = (bool) 0
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty()
0x5f2: PushEmpty(int, string)
0x5f3: Stack[-1] = "oob11Klara2"
0x5f4: Call2 0x579

0x5f5: Pop(1)
0x5f6: Push((int) 0)
0x5f7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5f9: Stack[-2] = (bool) 1
0x5fa: Return(); Pop(0)

0x5fb: Stack[-2] = (bool) 0
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty()
0x5fe: PushEmpty(int, string)
0x5ff: Stack[-1] = "b9KlaraLetter"
0x600: Call2 0x579

0x601: Pop(1)
0x602: Push((int) 0)
0x603: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x604: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x605: Stack[-2] = (bool) 1
0x606: Return(); Pop(0)

0x607: Stack[-2] = (bool) 0
0x608: Return(); Pop(0)

0x609: PushEmpty()
0x60a: PushEmpty(int, string)
0x60b: Stack[-1] = "oob11Klara3"
0x60c: Call2 0x579

0x60d: Pop(1)
0x60e: Push((int) 0)
0x60f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-2] = (bool) 1
0x612: Return(); Pop(0)

0x613: Stack[-2] = (bool) 0
0x614: Return(); Pop(0)

0x615: PushEmpty(int, int)
0x616: Push("branch")
0x617: @ GetVariable(Stack[-1], Stack[-2])
0x618: Pop(1)
0x619: Push((int) 0)
0x61a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x61b: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61c: Stack[-3] = (int) 1
0x61d: Return(); Pop(2)

0x61e: GOTO 0x624

0x61f: Push((int) 1)
0x620: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x622: Stack[-3] = (int) 2
0x623: Return(); Pop(2)

0x624: Stack[-3] = (int) 3
0x625: Return(); Pop(2)

