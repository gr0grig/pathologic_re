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
	day
	klara2_svita_positioner
	wonder
	wrong_wonder
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	AlbinosLate1
	bad_wonder
	Albinos1
	BadKlara
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	K2S_Klara2Svita
	ui/NPC_Albinos.png
	ui/NPC_Albinos_b.png

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
	GetProperty (2 args)
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
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetVariable (2 args)
	SetVariable (2 args)

RunOp = 0x2e7
RunTask = 4

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1cd Vars = (int, int)
	GTASK_4 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x2f1 Vars = (object)
		EVENT_7 Op = 0x347 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3cf

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x546

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x544

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x548

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x54a

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x51c

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
0x41: Call2 0x414

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
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 538595)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x4b3

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 538598)
0x5f: Push((int) 40487)
0x60: Push((int) 40486)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 538596)
0x64: Push((int) -1)
0x65: Push((int) 40484)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 538597)
0x69: Push((int) -1)
0x6a: Push((int) 40485)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x54c

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x426

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x54c

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x436

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x450

0xa9: Pop(0)
0xaa: Push((int) 40486)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x48e

0xb1: Pop(2)
0xb2: Push((int) 40483)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral"
0xb7: Call2 0x8e

0xb8: Pop(1)
0xb9: Push((int) 538595)
0xba: @@ SetMessage(Stack[-1])
0xbb: Pop(1)
0xbc: @@ ClearReplies()
0xbd: Pop(0)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x4b3

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 538598)
0xc4: Push((int) 40487)
0xc5: Push((int) 40486)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 538596)
0xc9: Push((int) -1)
0xca: Push((int) 40484)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 538597)
0xce: Push((int) -1)
0xcf: Push((int) 40485)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 40487)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 538599)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 538600)
0xe0: Push((int) -1)
0xe1: Push((int) 40488)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 538601)
0xe5: Push((int) -1)
0xe6: Push((int) 40489)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xeb: PushEmpty(bool)
0xec: Call2 0x54c

0xed: Pop(0)
0xee: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xef: @ lshStopAnimation()
0xf0: Pop(0)
0xf1: GOTO 0xf4

0xf2: @ StopAnimation()
0xf3: Pop(0)
0xf4: Return(); Pop(0)

0xf5: GOTO 0xa5

0xf6: Return(); Pop(0)

0xf7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf9: PushEmpty(bool, object, float)
0xfa: Stack[-2] = Stack[-12]
0xfb: Stack[-1] = (float) 70.0
0xfc: Call2 0x3cf

0xfd: Pop(2)
0xfe: Pop(1); Push((bool) Stack[-1] == 0)
0xff: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x100: Stack[-10] = (int) -2
0x101: Return(); Pop(8)

0x102: @ CreateDialog(Stack[-4])
0x103: Pop(0)
0x104: PushEmpty(int)
0x105: Call2 0x546

0x106: Pop(0)
0x107: @@ SetNPCName(Stack[-1])
0x108: Pop(1)
0x109: PushEmpty(int)
0x10a: Call2 0x544

0x10b: Pop(0)
0x10c: @@ SetNPCDescription(Stack[-1])
0x10d: Pop(1)
0x10e: PushEmpty(string)
0x10f: Call2 0x548

0x110: Pop(0)
0x111: @@ SetPhoto(Stack[-1])
0x112: Pop(1)
0x113: PushEmpty(string)
0x114: Call2 0x54a

0x115: Pop(0)
0x116: @@ SetPhoto2(Stack[-1])
0x117: Pop(1)
0x118: PushEmpty(int)
0x119: Call2 0x51c

0x11a: Pop(0)
0x11b: @@ SetPlayerName(Stack[-1])
0x11c: Pop(1)
0x11d: Stack[-2] = (int) -1
0x11e: @ IsOverrideActive(Stack[-3])
0x11f: Pop(0)
0x120: Push(Stack[-3])
0x121: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x122: Stack[-10] = (int) -2
0x123: Return(); Pop(8)

0x124: @ DoDialog(Stack[-4])
0x125: Pop(0)
0x126: PushEmpty(object, object)
0x127: Stack[-2] = Stack[-11]
0x128: Stack[-1] = Stack[-6]
0x129: Push(-2, 4); TaskCall(3)
0x12a: Call2 0x141

0x12b: Pop(-2, 4); TaskReturn
0x12c: Pop(2)
0x12d: @@ IsDialogEnd(Stack[-1])
0x12e: Pop(0)
0x12f: Pop(0); Push((bool) Stack[-1] == 0)
0x130: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x131: @ sync()
0x132: Pop(0)
0x133: @@ IsDialogEnd(Stack[-1])
0x134: Pop(0)
0x135: GOTO 0x12f

0x136: PushEmpty(object)
0x137: Stack[-1] = Stack[-10]
0x138: Call2 0x414

0x139: Pop(1)
0x13a: @ StopDialog(Stack[-4])
0x13b: Pop(0)
0x13c: @@ GetReturnValue(Stack[-2])
0x13d: Pop(0)
0x13e: Stack[-10] = Stack[-2]
0x13f: Return(); Pop(8)

0x140: Stack[-4] = 0
0x141: PushEmpty()
0x142: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x143: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x144: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x145: Push((int) 1)
0x146: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x147: PushEmpty(bool, object)
0x148: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x149: Call2 0x4bd

0x14a: Pop(1)
0x14b: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x14c: PushEmpty(object, object)
0x14d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x4a2

0x150: Pop(2)
0x151: PushEmpty(string)
0x152: Stack[-1] = "Neutral"
0x153: Call2 0x1b7

0x154: Pop(1)
0x155: Push((int) 538603)
0x156: @@ SetMessage(Stack[-1])
0x157: Pop(1)
0x158: @@ ClearReplies()
0x159: Pop(0)
0x15a: Push((int) 538604)
0x15b: Push((int) 40494)
0x15c: Push((int) 40492)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: Push((int) 538605)
0x160: Push((int) 40496)
0x161: Push((int) 40493)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 538621)
0x165: Push((int) 40494)
0x166: Push((int) 40512)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: GOTO 0x199

0x16a: PushEmpty(bool, object)
0x16b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16c: Call2 0x4c7

0x16d: Pop(1)
0x16e: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x16f: PushEmpty(string)
0x170: Stack[-1] = "Neutral"
0x171: Call2 0x1b7

0x172: Pop(1)
0x173: Push((int) 538622)
0x174: @@ SetMessage(Stack[-1])
0x175: Pop(1)
0x176: @@ ClearReplies()
0x177: Pop(0)
0x178: Push((int) 538623)
0x179: Push((int) -1)
0x17a: Push((int) 40514)
0x17b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17c: Pop(3)
0x17d: Push((int) 538624)
0x17e: Push((int) -1)
0x17f: Push((int) 40515)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: GOTO 0x199

0x183: PushEmpty(string)
0x184: Stack[-1] = "Neutral"
0x185: Call2 0x1b7

0x186: Pop(1)
0x187: Push((int) 538625)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 538626)
0x18d: Push((int) 40519)
0x18e: Push((int) 40517)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Push((int) 538627)
0x192: Push((int) -1)
0x193: Push((int) 40518)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: GOTO 0x199

0x197: Return(); Pop(0)

0x198: GOTO 0x145

0x199: PushEmpty(bool)
0x19a: Call2 0x54c

0x19b: Pop(0)
0x19c: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x19d: @ lshWaitForAnimEnd()
0x19e: Pop(0)
0x19f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x1a1: GOTO 0x1a7

0x1a2: PushEmpty(string)
0x1a3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1a4: Call2 0x426

0x1a5: Pop(1)
0x1a6: GOTO 0x19d

0x1a7: GOTO 0x1b6

0x1a8: Push("all")
0x1a9: Push("idle")
0x1aa: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ab: Pop(2)
0x1ac: @ WaitForAnimEnd()
0x1ad: Pop(0)
0x1ae: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1af: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1b0: GOTO 0x1b6

0x1b1: Push("all")
0x1b2: Push("idle")
0x1b3: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b4: Pop(2)
0x1b5: GOTO 0x1ac

0x1b6: Return(); Pop(0)

0x1b7: PushEmpty()
0x1b8: PushEmpty(bool)
0x1b9: Call2 0x54c

0x1ba: Pop(0)
0x1bb: Pop(1); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: Return(); Pop(0)

0x1be: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Return(); Pop(0)

0x1c1: PushEmpty(string, bool)
0x1c2: Stack[-2] = Stack[-3]
0x1c3: Push("")
0x1c4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-1] = (bool) 0
0x1c7: GOTO 0x1c9

0x1c8: Stack[-1] = (bool) 1
0x1c9: Call2 0x436

0x1ca: Pop(2)
0x1cb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1cc: Return(); Pop(0)

0x1cd: PushEmpty()
0x1ce: Push((int) 1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x1d0: PushEmpty()
0x1d1: Call2 0x450

0x1d2: Pop(0)
0x1d3: Push((int) 40508)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d6: PushEmpty(object, object)
0x1d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1d9: Call2 0x49b

0x1da: Pop(2)
0x1db: PushEmpty(object, object)
0x1dc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1dd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1de: Call2 0x4a8

0x1df: Pop(2)
0x1e0: Push((int) 40511)
0x1e1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e2: IF (Stack[-1] == 0) GOTO 0x1ed; Pop(1)

0x1e3: PushEmpty(object, object)
0x1e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1e6: Call2 0x4a8

0x1e7: Pop(2)
0x1e8: PushEmpty(object, object)
0x1e9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1eb: Call2 0x4ae

0x1ec: Pop(2)
0x1ed: Push((int) 40507)
0x1ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f0: PushEmpty(object, object)
0x1f1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1f2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1f3: Call2 0x494

0x1f4: Pop(2)
0x1f5: Push((int) 40510)
0x1f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1f8: PushEmpty(object, object)
0x1f9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1fa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1fb: Call2 0x4a8

0x1fc: Pop(2)
0x1fd: Push((int) 40491)
0x1fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ff: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x200: PushEmpty(bool, object)
0x201: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x202: Call2 0x4bd

0x203: Pop(1)
0x204: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x205: PushEmpty(object, object)
0x206: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x207: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x208: Call2 0x4a2

0x209: Pop(2)
0x20a: PushEmpty(string)
0x20b: Stack[-1] = "Neutral"
0x20c: Call2 0x1b7

0x20d: Pop(1)
0x20e: Push((int) 538603)
0x20f: @@ SetMessage(Stack[-1])
0x210: Pop(1)
0x211: @@ ClearReplies()
0x212: Pop(0)
0x213: Push((int) 538604)
0x214: Push((int) 40494)
0x215: Push((int) 40492)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Push((int) 538605)
0x219: Push((int) 40496)
0x21a: Push((int) 40493)
0x21b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21c: Pop(3)
0x21d: Push((int) 538621)
0x21e: Push((int) 40494)
0x21f: Push((int) 40512)
0x220: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x221: Pop(3)
0x222: Return(); Pop(0)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x4c7

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x228: PushEmpty(string)
0x229: Stack[-1] = "Neutral"
0x22a: Call2 0x1b7

0x22b: Pop(1)
0x22c: Push((int) 538622)
0x22d: @@ SetMessage(Stack[-1])
0x22e: Pop(1)
0x22f: @@ ClearReplies()
0x230: Pop(0)
0x231: Push((int) 538623)
0x232: Push((int) -1)
0x233: Push((int) 40514)
0x234: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x235: Pop(3)
0x236: Push((int) 538624)
0x237: Push((int) -1)
0x238: Push((int) 40515)
0x239: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23a: Pop(3)
0x23b: Return(); Pop(0)

0x23c: PushEmpty(string)
0x23d: Stack[-1] = "Neutral"
0x23e: Call2 0x1b7

0x23f: Pop(1)
0x240: Push((int) 538625)
0x241: @@ SetMessage(Stack[-1])
0x242: Pop(1)
0x243: @@ ClearReplies()
0x244: Pop(0)
0x245: Push((int) 538626)
0x246: Push((int) 40519)
0x247: Push((int) 40517)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Push((int) 538627)
0x24b: Push((int) -1)
0x24c: Push((int) 40518)
0x24d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24e: Pop(3)
0x24f: Return(); Pop(0)

0x250: Push((int) 40519)
0x251: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x253: PushEmpty(string)
0x254: Stack[-1] = "Neutral"
0x255: Call2 0x1b7

0x256: Pop(1)
0x257: Push((int) 538628)
0x258: @@ SetMessage(Stack[-1])
0x259: Pop(1)
0x25a: @@ ClearReplies()
0x25b: Pop(0)
0x25c: Push((int) 538629)
0x25d: Push((int) -1)
0x25e: Push((int) 40520)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Push((int) 538630)
0x262: Push((int) -1)
0x263: Push((int) 40521)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Return(); Pop(0)

0x267: Push((int) 40496)
0x268: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x269: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x26a: PushEmpty(string)
0x26b: Stack[-1] = "Neutral"
0x26c: Call2 0x1b7

0x26d: Pop(1)
0x26e: Push((int) 538608)
0x26f: @@ SetMessage(Stack[-1])
0x270: Pop(1)
0x271: @@ ClearReplies()
0x272: Pop(0)
0x273: Push((int) 538609)
0x274: Push((int) 40501)
0x275: Push((int) 40497)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Push((int) 538611)
0x279: Push((int) 40500)
0x27a: Push((int) 40499)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Push((int) 40500)
0x27f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Neutral"
0x283: Call2 0x1b7

0x284: Pop(1)
0x285: Push((int) 538612)
0x286: @@ SetMessage(Stack[-1])
0x287: Pop(1)
0x288: @@ ClearReplies()
0x289: Pop(0)
0x28a: Push((int) 538614)
0x28b: Push((int) 40498)
0x28c: Push((int) 40502)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Push((int) 538615)
0x290: Push((int) 40501)
0x291: Push((int) 40503)
0x292: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x293: Pop(3)
0x294: Return(); Pop(0)

0x295: Push((int) 40501)
0x296: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Neutral"
0x29a: Call2 0x1b7

0x29b: Pop(1)
0x29c: Push((int) 538613)
0x29d: @@ SetMessage(Stack[-1])
0x29e: Pop(1)
0x29f: @@ ClearReplies()
0x2a0: Pop(0)
0x2a1: Push((int) 538617)
0x2a2: Push((int) -1)
0x2a3: Push((int) 40507)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: Push((int) 538619)
0x2a7: Push((int) -1)
0x2a8: Push((int) 40510)
0x2a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2aa: Pop(3)
0x2ab: Return(); Pop(0)

0x2ac: Push((int) 40494)
0x2ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2af: PushEmpty(string)
0x2b0: Stack[-1] = "Neutral"
0x2b1: Call2 0x1b7

0x2b2: Pop(1)
0x2b3: Push((int) 538606)
0x2b4: @@ SetMessage(Stack[-1])
0x2b5: Pop(1)
0x2b6: @@ ClearReplies()
0x2b7: Pop(0)
0x2b8: Push((int) 538607)
0x2b9: Push((int) 40498)
0x2ba: Push((int) 40495)
0x2bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(3)
0x2bd: Push((int) 538616)
0x2be: Push((int) 40500)
0x2bf: Push((int) 40505)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Return(); Pop(0)

0x2c3: Push((int) 40498)
0x2c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c5: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2c6: PushEmpty(string)
0x2c7: Stack[-1] = "Neutral"
0x2c8: Call2 0x1b7

0x2c9: Pop(1)
0x2ca: Push((int) 538610)
0x2cb: @@ SetMessage(Stack[-1])
0x2cc: Pop(1)
0x2cd: @@ ClearReplies()
0x2ce: Pop(0)
0x2cf: Push((int) 538618)
0x2d0: Push((int) -1)
0x2d1: Push((int) 40508)
0x2d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d3: Pop(3)
0x2d4: Push((int) 538620)
0x2d5: Push((int) -1)
0x2d6: Push((int) 40511)
0x2d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d8: Pop(3)
0x2d9: Return(); Pop(0)

0x2da: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2db: PushEmpty(bool)
0x2dc: Call2 0x54c

0x2dd: Pop(0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2df: @ lshStopAnimation()
0x2e0: Pop(0)
0x2e1: GOTO 0x2e4

0x2e2: @ StopAnimation()
0x2e3: Pop(0)
0x2e4: Return(); Pop(0)

0x2e5: GOTO 0x1ce

0x2e6: Return(); Pop(0)

0x2e7: Push((int) 1)
0x2e8: @ Sleep(Stack[-1])
0x2e9: Pop(1)
0x2ea: PushEmpty(float, float)
0x2eb: Stack[-2] = (int) 300
0x2ec: Stack[-1] = (int) 100
0x2ed: Call2 0x31d

0x2ee: Pop(2)
0x2ef: GOTO 0x2e7

0x2f0: Return(); Pop(0)

0x2f1: PushEmpty(int, int, int, int)
0x2f2: PushEmpty()
0x2f3: Call2 0x35e

0x2f4: Pop(0)
0x2f5: Push("day")
0x2f6: @ GetProperty(Stack[-1], Stack[-3])
0x2f7: Pop(1)
0x2f8: PushEmpty(int)
0x2f9: Call2 0x46d

0x2fa: Pop(0)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x2fd: PushEmpty(int, object)
0x2fe: Stack[-1] = Stack[-7]
0x2ff: Push(-2, 1); TaskCall(2)
0x300: Call2 0xf7

0x301: Pop(-2, 1); TaskReturn
0x302: Stack[-3] = Stack[-2]
0x303: Pop(2)
0x304: Push((int) 1)
0x305: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x306: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x307: PushEmpty(bool, string, string)
0x308: Stack[-2] = "klara2_svita_positioner"
0x309: Stack[-1] = "wonder"
0x30a: Call2 0x461

0x30b: Pop(3)
0x30c: GOTO 0x315

0x30d: Push((int) 2)
0x30e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: PushEmpty(bool, string, string)
0x311: Stack[-2] = "klara2_svita_positioner"
0x312: Stack[-1] = "wrong_wonder"
0x313: Call2 0x461

0x314: Pop(3)
0x315: GOTO 0x31c

0x316: PushEmpty(int, object)
0x317: Stack[-1] = Stack[-7]
0x318: Push(-2, 1); TaskCall(0)
0x319: Call2 0x0

0x31a: Pop(-2, 1); TaskReturn
0x31b: Pop(2)
0x31c: Return(); Pop(4)

0x31d: PushEmpty()
0x31e: PushEmpty(bool)
0x31f: Call2 0x3ca

0x320: Pop(0)
0x321: Pop(1); Push((bool) Stack[-1] == 0)
0x322: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x323: Return(); Pop(0)

0x324: Push("player")
0x325: @ FindActor(Stack[-4], Stack[-1])
0x326: Pop(1)
0x327: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x328: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x329: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x32a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x32b: Push((int) 10)
0x32c: Push((float)1.0)
0x32d: @ SetTimer(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: PushEmpty()
0x330: Call2 0x36c

0x331: Pop(0)
0x332: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x333: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x334: Push((int) 10)
0x335: @ KillTimer(Stack[-1])
0x336: Pop(1)
0x337: Return(); Pop(0)

0x338: PushEmpty(float, float)
0x339: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-3] = (bool) 0
0x33c: Return(); Pop(2)

0x33d: PushEmpty(float, object)
0x33e: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x33f: Call2 0x3c2

0x340: Pop(1)
0x341: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x342: Push( Stack[2 + Tasks[-1].StackPointer] )
0x343: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x344: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x345: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x346: Return(); Pop(2)

0x347: PushEmpty()
0x348: Push((int) 10)
0x349: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x34b: PushEmpty(bool)
0x34c: Call2 0x338

0x34d: Pop(0)
0x34e: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x34f: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: PushEmpty(object)
0x352: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x353: Call2 0x445

0x354: Pop(1)
0x355: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x356: GOTO 0x35d

0x357: Push( Stack[2 + Tasks[-1].StackPointer] )
0x358: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x359: Push("head")
0x35a: @ UnlookAsync(Stack[-1])
0x35b: Pop(1)
0x35c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x35d: Return(); Pop(0)

0x35e: PushEmpty()
0x35f: Call2 0x3bd

0x360: Pop(0)
0x361: Push((int) 10)
0x362: @ KillTimer(Stack[-1])
0x363: Pop(1)
0x364: Push( Stack[2 + Tasks[-1].StackPointer] )
0x365: IF (Stack[-1] == 0) GOTO 0x36a; Pop(1)

0x366: Push("head")
0x367: @ UnlookAsync(Stack[-1])
0x368: Pop(1)
0x369: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x36a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x36b: Return(); Pop(0)

0x36c: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x36d: @ WaitForAnimEnd()
0x36e: Pop(0)
0x36f: PushEmpty(bool)
0x370: Call2 0x3ca

0x371: Pop(0)
0x372: Pop(1); Push((bool) Stack[-1] == 0)
0x373: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x374: Return(); Pop(14)

0x375: PushEmpty(int)
0x376: Call2 0x47d

0x377: Stack[-8] = Stack[-1]
0x378: Pop(1)
0x379: Stack[-6] = (int) 0
0x37a: PushEmpty(bool)
0x37b: Stack[-1] = (bool) 0
0x37c: Push((int) 5)
0x37d: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x37e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37f: PushEmpty(bool)
0x380: Call2 0x3ca

0x381: Pop(0)
0x382: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x383: Stack[-1] = (bool) 1
0x384: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x385: Push((int) 3)
0x386: @ irand(Stack[-6], Stack[-1])
0x387: Pop(1)
0x388: Push((int) 0)
0x389: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x38b: Push(Stack[-7])
0x38c: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x38d: @ irand(Stack[-4], Stack[-7])
0x38e: Pop(0)
0x38f: Push("all")
0x390: PushEmpty(string, int)
0x391: Stack[-1] = Stack[-7]
0x392: Call2 0x476

0x393: Pop(1)
0x394: @ PlayAnimation(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: @ WaitForAnimEnd(Stack[-3])
0x397: Pop(0)
0x398: Pop(0); Push((bool) Stack[-3] == 0)
0x399: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x39a: GOTO 0x3b8

0x39b: GOTO 0x3ad

0x39c: Push((int) 1)
0x39d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x39f: Push((int) 4)
0x3a0: @ rand(Stack[-3], Stack[-1])
0x3a1: Pop(1)
0x3a2: Push((int) 1)
0x3a3: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a4: @ Sleep(Stack[-1], Stack[-2])
0x3a5: Pop(1)
0x3a6: Pop(0); Push((bool) Stack[-1] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x3a8: GOTO 0x3b8

0x3a9: GOTO 0x3ad

0x3aa: Push(Stack[-6])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: GOTO 0x3b8

0x3ad: PushEmpty(bool)
0x3ae: Call2 0x3bb

0x3af: Pop(0)
0x3b0: Pop(1); Push((bool) Stack[-1] == 0)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: GOTO 0x3b8

0x3b3: @ ResetAAS()
0x3b4: Pop(0)
0x3b5: Push((int) 1)
0x3b6: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x3b7: GOTO 0x37a

0x3b8: @ ResetAAS()
0x3b9: Pop(0)
0x3ba: Return(); Pop(14)

0x3bb: Stack[-1] = (bool) 1
0x3bc: Return(); Pop(0)

0x3bd: @ StopAnimation()
0x3be: Pop(0)
0x3bf: @ StopGroup0()
0x3c0: Pop(0)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3c3: @ GetPosition(Stack[-3])
0x3c4: Pop(0)
0x3c5: @@ GetPosition(Stack[-2])
0x3c6: Pop(0)
0x3c7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3c8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3c9: Return(); Pop(6)

0x3ca: PushEmpty(bool, bool)
0x3cb: @ IsLoaded(Stack[-1])
0x3cc: Pop(0)
0x3cd: Stack[-3] = Stack[-1]
0x3ce: Return(); Pop(2)

0x3cf: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3d0: @@ GetPosition(Stack[-8])
0x3d1: Pop(0)
0x3d2: @@ GetEyesHeight(Stack[-9])
0x3d3: Pop(0)
0x3d4: Push(CvectorIndex(Stack[-8], 1))
0x3d5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3d6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3d7: @ GetPosition(Stack[-7])
0x3d8: Pop(0)
0x3d9: @ GetEyesHeight(Stack[-9])
0x3da: Pop(0)
0x3db: Push(CvectorIndex(Stack[-7], 1))
0x3dc: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3dd: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3de: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3df: Push(CvectorIndex(Stack[-6], 1))
0x3e0: Stack[-1] = (int) 0
0x3e1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3e2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3e3: Pop(1); Push(Sqrt(Stack[-1]))
0x3e4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3e5: Stack[-5] = -Stack[-6]; Pop(0);
0x3e6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3e7: PushEmpty(cvector, cvector)
0x3e8: Push(CVector(0.0, 1.0, 0.0))
0x3e9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ea: Call2 0x457

0x3eb: Pop(1)
0x3ec: Push((int) 25)
0x3ed: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ee: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3ef: Push(CVector(0.0, 10.0, 0.0))
0x3f0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3f1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3f2: @ IsOverrideActive(Stack[-2])
0x3f3: Pop(0)
0x3f4: Push(Stack[-2])
0x3f5: IF (Stack[-1] == 0) GOTO 0x3f8; Pop(1)

0x3f6: Stack[-21] = (bool) 0
0x3f7: Return(); Pop(18)

0x3f8: @ StopWorld()
0x3f9: Pop(0)
0x3fa: Push((bool) 1)
0x3fb: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x3fc: Pop(1)
0x3fd: Push(CvectorIndex(Stack[-4], 0))
0x3fe: Push(CvectorIndex(Stack[-5], 2))
0x3ff: @ Rotate(Stack[-2], Stack[-1])
0x400: Pop(2)
0x401: PushEmpty(bool)
0x402: Call2 0x54c

0x403: Pop(0)
0x404: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x405: GOTO 0x40e

0x406: Push("head")
0x407: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x408: Pop(1)
0x409: Push(Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40b: Push("head")
0x40c: @ LookAsyncCamera(Stack[-1])
0x40d: Pop(1)
0x40e: @ CameraWaitForPlayFinish()
0x40f: Pop(0)
0x410: @ ResumeWorld()
0x411: Pop(0)
0x412: Stack[-21] = (bool) 1
0x413: Return(); Pop(18)

0x414: PushEmpty(bool, bool)
0x415: Push((bool) 1)
0x416: @ CameraSwitchToNormal(Stack[-1])
0x417: Pop(1)
0x418: PushEmpty(bool)
0x419: Call2 0x54c

0x41a: Pop(0)
0x41b: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41c: GOTO 0x425

0x41d: Push("head")
0x41e: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x41f: Pop(1)
0x420: Push(Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x422: Push("head")
0x423: @ UnlookAsync(Stack[-1])
0x424: Pop(1)
0x425: Return(); Pop(2)

0x426: PushEmpty(bool, float, float, bool, float, float)
0x427: @ lshHasAnimation(Stack[-3], Stack[-7])
0x428: Pop(0)
0x429: Push(Stack[-3])
0x42a: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x42c: Pop(0)
0x42d: Push((bool) 0)
0x42e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(1)
0x430: GOTO 0x435

0x431: Push("Can't find lsh animation : ")
0x432: Pop(1); Push(Stack[-1] + Stack[-8]);
0x433: @ Trace(Stack[-1])
0x434: Pop(1)
0x435: Return(); Pop(6)

0x436: PushEmpty(bool, float, float, bool, float, float)
0x437: @ lshHasAnimation(Stack[-3], Stack[-8])
0x438: Pop(0)
0x439: Push(Stack[-3])
0x43a: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x43c: Pop(0)
0x43d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x43e: Pop(0)
0x43f: GOTO 0x444

0x440: Push("Can't find lsh animation : ")
0x441: Pop(1); Push(Stack[-1] + Stack[-9]);
0x442: @ Trace(Stack[-1])
0x443: Pop(1)
0x444: Return(); Pop(6)

0x445: PushEmpty(float, cvector, float, cvector)
0x446: @@ GetEyesHeight(Stack[-2])
0x447: Pop(0)
0x448: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x449: Push(CvectorIndex(Stack[-1], 1))
0x44a: Stack[-1] = Stack[-3]
0x44b: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x44c: Push("head")
0x44d: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x44e: Pop(1)
0x44f: Return(); Pop(4)

0x450: PushEmpty(bool)
0x451: Call2 0x54c

0x452: Pop(0)
0x453: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x454: @ lshStopSpeech()
0x455: Pop(0)
0x456: Return(); Pop(0)

0x457: PushEmpty(float, float)
0x458: Pop(0); Push(Stack[-3] | Stack[-3]);
0x459: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x45a: Push((float)0.0)
0x45b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x45c: IF (Stack[-1] == 0) GOTO 0x45f; Pop(1)

0x45d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x45e: Return(); Pop(2)

0x45f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x460: Return(); Pop(2)

0x461: PushEmpty(object, object)
0x462: @ FindActor(Stack[-1], Stack[-4])
0x463: Pop(0)
0x464: Pop(0); Push((bool) Stack[-1] == 0)
0x465: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x466: Stack[-5] = (bool) 0
0x467: Return(); Pop(2)

0x468: @ Trigger(Stack[-1], Stack[-3])
0x469: Pop(0)
0x46a: Stack[-5] = (bool) 1
0x46b: Return(); Pop(2)

0x46c: Stack[-1] = 0
0x46d: PushEmpty(float, float)
0x46e: @ GetGameTime(Stack[-1])
0x46f: Pop(0)
0x470: Push((int) 1)
0x471: PushEmpty(int)
0x472: Push((int) 24)
0x473: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x474: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x475: Return(); Pop(2)

0x476: PushEmpty(string, string)
0x477: Stack[-1] = "idle"
0x478: Push(Stack[-3])
0x479: IF (Stack[-1] == 0) GOTO 0x47b; Pop(1)

0x47a: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x47b: Stack[-4] = Stack[-1]
0x47c: Return(); Pop(2)

0x47d: PushEmpty(int, bool, int, bool)
0x47e: Stack[-2] = (int) 0
0x47f: Push("all")
0x480: PushEmpty(string, int)
0x481: Stack[-1] = Stack[-5]
0x482: Call2 0x476

0x483: Pop(1)
0x484: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(2)
0x486: Pop(0); Push((bool) Stack[-1] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x488: GOTO 0x48c

0x489: Push((int) 1)
0x48a: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x48b: GOTO 0x47f

0x48c: Stack[-5] = Stack[-2]
0x48d: Return(); Pop(4)

0x48e: PushEmpty()
0x48f: PushEmpty(string)
0x490: Stack[-1] = "AlbinosLate1"
0x491: Call2 0x52d

0x492: Pop(1)
0x493: Return(); Pop(0)

0x494: PushEmpty()
0x495: PushEmpty(bool, string, string)
0x496: Stack[-2] = "klara2_svita_positioner"
0x497: Stack[-1] = "wonder"
0x498: Call2 0x461

0x499: Pop(3)
0x49a: Return(); Pop(0)

0x49b: PushEmpty()
0x49c: PushEmpty(bool, string, string)
0x49d: Stack[-2] = "klara2_svita_positioner"
0x49e: Stack[-1] = "bad_wonder"
0x49f: Call2 0x461

0x4a0: Pop(3)
0x4a1: Return(); Pop(0)

0x4a2: PushEmpty()
0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Albinos1"
0x4a5: Call2 0x52d

0x4a6: Pop(1)
0x4a7: Return(); Pop(0)

0x4a8: PushEmpty()
0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "BadKlara"
0x4ab: Call2 0x52d

0x4ac: Pop(1)
0x4ad: Return(); Pop(0)

0x4ae: PushEmpty()
0x4af: PushEmpty()
0x4b0: Call2 0x4e6

0x4b1: Pop(0)
0x4b2: Return(); Pop(0)

0x4b3: PushEmpty()
0x4b4: PushEmpty(bool, object)
0x4b5: Stack[-1] = Stack[-3]
0x4b6: Call2 0x4d1

0x4b7: Pop(1)
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-2] = (bool) 1
0x4ba: Return(); Pop(0)

0x4bb: Stack[-2] = (bool) 0
0x4bc: Return(); Pop(0)

0x4bd: PushEmpty()
0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[-3]
0x4c0: Call2 0x4d8

0x4c1: Pop(1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-2] = (bool) 1
0x4c4: Return(); Pop(0)

0x4c5: Stack[-2] = (bool) 0
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty()
0x4c8: PushEmpty(bool, object)
0x4c9: Stack[-1] = Stack[-3]
0x4ca: Call2 0x4df

0x4cb: Pop(1)
0x4cc: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cd: Stack[-2] = (bool) 1
0x4ce: Return(); Pop(0)

0x4cf: Stack[-2] = (bool) 0
0x4d0: Return(); Pop(0)

0x4d1: PushEmpty()
0x4d2: PushEmpty(bool, string)
0x4d3: Stack[-1] = "AlbinosLate1"
0x4d4: Call2 0x538

0x4d5: Stack[-4] = Stack[-2]
0x4d6: Pop(2)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty()
0x4d9: PushEmpty(bool, string)
0x4da: Stack[-1] = "Albinos1"
0x4db: Call2 0x538

0x4dc: Stack[-4] = Stack[-2]
0x4dd: Pop(2)
0x4de: Return(); Pop(0)

0x4df: PushEmpty()
0x4e0: PushEmpty(bool, string)
0x4e1: Stack[-1] = "BadKlara"
0x4e2: Call2 0x538

0x4e3: Pop(1)
0x4e4: Stack[-3] = !Stack[-1]; Pop(1);
0x4e5: Return(); Pop(0)

0x4e6: PushEmpty(object, object)
0x4e7: Push((int) 785)
0x4e8: Push((int) 2)
0x4e9: Push((int) 542470)
0x4ea: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4eb: Pop(3)
0x4ec: PushEmpty(bool, object, int)
0x4ed: Stack[-2] = Stack[-4]
0x4ee: Stack[-1] = (int) 723
0x4ef: Call2 0x500

0x4f0: Pop(3)
0x4f1: Return(); Pop(2)

0x4f2: Stack[-1] = 0
0x4f3: PushEmpty(object, object)
0x4f4: @ GetDiaryRoot(Stack[-1])
0x4f5: Pop(0)
0x4f6: Pop(0); Push((bool) Stack[-1] == 0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f8: Push("Can't retrieve diary root")
0x4f9: @ Trace(Stack[-1])
0x4fa: Pop(1)
0x4fb: Stack[-3] = (bool) 0
0x4fc: Return(); Pop(2)

0x4fd: Stack[-3] = Stack[-1]
0x4fe: Return(); Pop(2)

0x4ff: Stack[-1] = 0
0x500: PushEmpty(object, object, int, object, object, int)
0x501: PushEmpty(object)
0x502: Call2 0x4f3

0x503: Stack[-4] = Stack[-1]
0x504: Pop(1)
0x505: @@ Find(Stack[-7], Stack[-2])
0x506: Pop(0)
0x507: Pop(0); Push((bool) Stack[-2] == 0)
0x508: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x509: Push("Can't find diary parent with id: ")
0x50a: Pop(1); Push(Stack[-1] + Stack[-8]);
0x50b: @ Trace(Stack[-1])
0x50c: Pop(1)
0x50d: Stack[-9] = (bool) 0
0x50e: Return(); Pop(6)

0x50f: @@ AddChild(Stack[-8])
0x510: Pop(0)
0x511: Push((int) 7)
0x512: @ SendWorldWndMessage(Stack[-1])
0x513: Pop(1)
0x514: @@ GetCategory(Stack[-1])
0x515: Pop(0)
0x516: @ SetDiarySection(Stack[-1])
0x517: Pop(0)
0x518: Stack[-9] = (bool) 0
0x519: Return(); Pop(6)

0x51a: Stack[-2] = 0
0x51b: Stack[-3] = 0
0x51c: PushEmpty(int, int)
0x51d: Push("branch")
0x51e: @ GetVariable(Stack[-1], Stack[-2])
0x51f: Pop(1)
0x520: Push((int) 0)
0x521: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x522: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x523: Stack[-3] = (int) 1
0x524: Return(); Pop(2)

0x525: GOTO 0x52b

0x526: Push((int) 1)
0x527: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: Stack[-3] = (int) 2
0x52a: Return(); Pop(2)

0x52b: Stack[-3] = (int) 3
0x52c: Return(); Pop(2)

0x52d: PushEmpty(int, int)
0x52e: Push("day")
0x52f: @ GetProperty(Stack[-1], Stack[-2])
0x530: Pop(1)
0x531: Push("K2S_Klara2Svita")
0x532: Pop(1); Push(Stack[-1] + Stack[-4]);
0x533: Pop(1); Push(Stack[-1] + Stack[-2]);
0x534: Push((int) 1)
0x535: @ SetVariable(Stack[-2], Stack[-1])
0x536: Pop(2)
0x537: Return(); Pop(2)

0x538: PushEmpty(int, int, int, int)
0x539: Push("day")
0x53a: @ GetProperty(Stack[-1], Stack[-3])
0x53b: Pop(1)
0x53c: Push("K2S_Klara2Svita")
0x53d: Pop(1); Push(Stack[-1] + Stack[-6]);
0x53e: Pop(1); Push(Stack[-1] + Stack[-3]);
0x53f: @ GetVariable(Stack[-1], Stack[-2])
0x540: Pop(1)
0x541: Push((int) 0)
0x542: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x543: Return(); Pop(4)

0x544: Stack[-1] = (int) 515595
0x545: Return(); Pop(0)

0x546: Stack[-1] = (int) 512611
0x547: Return(); Pop(0)

0x548: Stack[-1] = "ui/NPC_Albinos.png"
0x549: Return(); Pop(0)

0x54a: Stack[-1] = "ui/NPC_Albinos_b.png"
0x54b: Return(); Pop(0)

0x54c: Stack[-1] = (bool) 0
0x54d: Return(); Pop(0)

