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
	Sly
	all
	idle
	Saveyouall
	Smile
	Grin
	cleanup
	restore
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ook12Klara2Sobor1
	ook12Klara2Sobor2
	ook12Klara2Sobor3
	game_final
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
	GetPosition (1 args)
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
	irand (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetGameTime (1 args)

RunOp = 0x2d0
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xe2 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x2d4 Vars = (object)
		EVENT_26 Op = 0x2dc Vars = (string)
		EVENT_6 Op = 0x2f8 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x30a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x49d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x49b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x49f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x4a1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x48a

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
0x31: Call2 0x41e

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x35f

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
0x48: Call2 0x34e

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
0x56: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x44e

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xcc

0x60: Pop(1)
0x61: Push((int) 539214)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: PushEmpty(bool, object)
0x67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68: Call2 0x466

0x69: Pop(1)
0x6a: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x6b: Push((int) 539215)
0x6c: Push((int) 43417)
0x6d: Push((int) 41158)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: Push((int) 541312)
0x71: Push((int) -1)
0x72: Push((int) 43448)
0x73: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74: Pop(3)
0x75: GOTO 0xae

0x76: PushEmpty(string)
0x77: Stack[-1] = "Sly"
0x78: Call2 0xcc

0x79: Pop(1)
0x7a: Push((int) 539216)
0x7b: @@ SetMessage(Stack[-1])
0x7c: Pop(1)
0x7d: @@ ClearReplies()
0x7e: Pop(0)
0x7f: PushEmpty(bool)
0x80: Stack[-1] = (bool) 0
0x81: PushEmpty(bool, object)
0x82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83: Call2 0x45a

0x84: Pop(1)
0x85: Pop(1); Push((bool) Stack[-1] == 0)
0x86: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x87: PushEmpty(bool, object)
0x88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89: Call2 0x472

0x8a: Pop(1)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: Stack[-1] = (bool) 1
0x8d: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x8e: Push((int) 539217)
0x8f: Push((int) 43420)
0x90: Push((int) 41160)
0x91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92: Pop(3)
0x93: PushEmpty(bool)
0x94: Stack[-1] = (bool) 0
0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x45a

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9a: PushEmpty(bool, object)
0x9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c: Call2 0x47e

0x9d: Pop(1)
0x9e: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x9f: Stack[-1] = (bool) 1
0xa0: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa1: Push((int) 541289)
0xa2: Push((int) 43423)
0xa3: Push((int) 43422)
0xa4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5: Pop(3)
0xa6: Push((int) 541288)
0xa7: Push((int) -1)
0xa8: Push((int) 43421)
0xa9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa: Pop(3)
0xab: GOTO 0xae

0xac: Return(); Pop(0)

0xad: GOTO 0x55

0xae: PushEmpty(bool)
0xaf: Call2 0x4a3

0xb0: Pop(0)
0xb1: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xb2: @ lshWaitForAnimEnd()
0xb3: Pop(0)
0xb4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: GOTO 0xbc

0xb7: PushEmpty(string)
0xb8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xb9: Call2 0x3e9

0xba: Pop(1)
0xbb: GOTO 0xb2

0xbc: GOTO 0xcb

0xbd: Push("all")
0xbe: Push("idle")
0xbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xc0: Pop(2)
0xc1: @ WaitForAnimEnd()
0xc2: Pop(0)
0xc3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: GOTO 0xcb

0xc6: Push("all")
0xc7: Push("idle")
0xc8: @ PlayAnimation(Stack[-2], Stack[-1])
0xc9: Pop(2)
0xca: GOTO 0xc1

0xcb: Return(); Pop(0)

0xcc: PushEmpty()
0xcd: PushEmpty(bool)
0xce: Call2 0x4a3

0xcf: Pop(0)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Return(); Pop(0)

0xd3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd4: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd5: Return(); Pop(0)

0xd6: PushEmpty(string, bool)
0xd7: Stack[-2] = Stack[-3]
0xd8: Push("")
0xd9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xdb: Stack[-1] = (bool) 0
0xdc: GOTO 0xde

0xdd: Stack[-1] = (bool) 1
0xde: Call2 0x3f9

0xdf: Pop(2)
0xe0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: Push((int) 1)
0xe4: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0xe5: PushEmpty()
0xe6: Call2 0x417

0xe7: Pop(0)
0xe8: Push((int) 41158)
0xe9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xea: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xeb: PushEmpty(object, object)
0xec: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xed: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xee: Call2 0x43c

0xef: Pop(2)
0xf0: Push((int) 41160)
0xf1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf3: PushEmpty(object, object)
0xf4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf6: Call2 0x442

0xf7: Pop(2)
0xf8: Push((int) 43422)
0xf9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfa: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xfb: PushEmpty(object, object)
0xfc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xfe: Call2 0x448

0xff: Pop(2)
0x100: Push((int) 41157)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x103: PushEmpty(bool, object)
0x104: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x105: Call2 0x44e

0x106: Pop(1)
0x107: Pop(1); Push((bool) Stack[-1] == 0)
0x108: IF (Stack[-1] == 0) GOTO 0x122; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0xcc

0x10c: Pop(1)
0x10d: Push((int) 539214)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x466

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: Push((int) 539215)
0x118: Push((int) 43417)
0x119: Push((int) 41158)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Push((int) 541312)
0x11d: Push((int) -1)
0x11e: Push((int) 43448)
0x11f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120: Pop(3)
0x121: Return(); Pop(0)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Sly"
0x124: Call2 0xcc

0x125: Pop(1)
0x126: Push((int) 539216)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: PushEmpty(bool)
0x12c: Stack[-1] = (bool) 0
0x12d: PushEmpty(bool, object)
0x12e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12f: Call2 0x45a

0x130: Pop(1)
0x131: Pop(1); Push((bool) Stack[-1] == 0)
0x132: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x133: PushEmpty(bool, object)
0x134: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x135: Call2 0x472

0x136: Pop(1)
0x137: IF (Stack[-1] == 0) GOTO 0x139; Pop(1)

0x138: Stack[-1] = (bool) 1
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: Push((int) 539217)
0x13b: Push((int) 43420)
0x13c: Push((int) 41160)
0x13d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e: Pop(3)
0x13f: PushEmpty(bool)
0x140: Stack[-1] = (bool) 0
0x141: PushEmpty(bool, object)
0x142: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x143: Call2 0x45a

0x144: Pop(1)
0x145: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x146: PushEmpty(bool, object)
0x147: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x148: Call2 0x47e

0x149: Pop(1)
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: Stack[-1] = (bool) 1
0x14c: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14d: Push((int) 541289)
0x14e: Push((int) 43423)
0x14f: Push((int) 43422)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 541288)
0x153: Push((int) -1)
0x154: Push((int) 43421)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Push((int) 43423)
0x159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15a: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x15b: PushEmpty(string)
0x15c: Stack[-1] = "Neutral"
0x15d: Call2 0xcc

0x15e: Pop(1)
0x15f: Push((int) 541290)
0x160: @@ SetMessage(Stack[-1])
0x161: Pop(1)
0x162: @@ ClearReplies()
0x163: Pop(0)
0x164: Push((int) 541303)
0x165: Push((int) 43441)
0x166: Push((int) 43438)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 541304)
0x16a: Push((int) 43441)
0x16b: Push((int) 43439)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 43441)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Neutral"
0x174: Call2 0xcc

0x175: Pop(1)
0x176: Push((int) 541306)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 541307)
0x17c: Push((int) -1)
0x17d: Push((int) 43443)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 541308)
0x181: Push((int) 43445)
0x182: Push((int) 43444)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 43445)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Saveyouall"
0x18b: Call2 0xcc

0x18c: Pop(1)
0x18d: Push((int) 541309)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 541310)
0x193: Push((int) -1)
0x194: Push((int) 43446)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 541311)
0x198: Push((int) -1)
0x199: Push((int) 43447)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 43420)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Sly"
0x1a2: Call2 0xcc

0x1a3: Pop(1)
0x1a4: Push((int) 541287)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 541296)
0x1aa: Push((int) 43430)
0x1ab: Push((int) 43429)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Push((int) 541291)
0x1af: Push((int) 43425)
0x1b0: Push((int) 43424)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: Push((int) 43425)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral"
0x1b9: Call2 0xcc

0x1ba: Pop(1)
0x1bb: Push((int) 541292)
0x1bc: @@ SetMessage(Stack[-1])
0x1bd: Pop(1)
0x1be: @@ ClearReplies()
0x1bf: Pop(0)
0x1c0: Push((int) 541293)
0x1c1: Push((int) 43427)
0x1c2: Push((int) 43426)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 541298)
0x1c6: Push((int) -1)
0x1c7: Push((int) 43431)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 43427)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Neutral"
0x1d0: Call2 0xcc

0x1d1: Pop(1)
0x1d2: Push((int) 541294)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 541295)
0x1d8: Push((int) -1)
0x1d9: Push((int) 43428)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 43430)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Smile"
0x1e2: Call2 0xcc

0x1e3: Pop(1)
0x1e4: Push((int) 541297)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 541299)
0x1ea: Push((int) 43433)
0x1eb: Push((int) 43432)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Return(); Pop(0)

0x1ef: Push((int) 43433)
0x1f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f1: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f2: PushEmpty(string)
0x1f3: Stack[-1] = "Smile"
0x1f4: Call2 0xcc

0x1f5: Pop(1)
0x1f6: Push((int) 541300)
0x1f7: @@ SetMessage(Stack[-1])
0x1f8: Pop(1)
0x1f9: @@ ClearReplies()
0x1fa: Pop(0)
0x1fb: Push((int) 541301)
0x1fc: Push((int) 43427)
0x1fd: Push((int) 43434)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Push((int) 541302)
0x201: Push((int) 43427)
0x202: Push((int) 43436)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 43417)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Grin"
0x20b: Call2 0xcc

0x20c: Pop(1)
0x20d: Push((int) 541284)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 541320)
0x213: Push((int) 43457)
0x214: Push((int) 43456)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 541285)
0x218: Push((int) 43419)
0x219: Push((int) 43418)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 43457)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Sly"
0x222: Call2 0xcc

0x223: Pop(1)
0x224: Push((int) 541321)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 541322)
0x22a: Push((int) 43459)
0x22b: Push((int) 43458)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Push((int) 541325)
0x22f: Push((int) 43450)
0x230: Push((int) 43462)
0x231: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x232: Pop(3)
0x233: Return(); Pop(0)

0x234: Push((int) 43459)
0x235: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x237: PushEmpty(string)
0x238: Stack[-1] = "Sly"
0x239: Call2 0xcc

0x23a: Pop(1)
0x23b: Push((int) 541323)
0x23c: @@ SetMessage(Stack[-1])
0x23d: Pop(1)
0x23e: @@ ClearReplies()
0x23f: Pop(0)
0x240: Push((int) 541324)
0x241: Push((int) 43419)
0x242: Push((int) 43460)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Push((int) 541326)
0x246: Push((int) 43419)
0x247: Push((int) 43464)
0x248: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x249: Pop(3)
0x24a: Return(); Pop(0)

0x24b: Push((int) 43419)
0x24c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24d: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Saveyouall"
0x250: Call2 0xcc

0x251: Pop(1)
0x252: Push((int) 541286)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: Push((int) 541313)
0x258: Push((int) 43450)
0x259: Push((int) 43449)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 541327)
0x25d: Push((int) 43452)
0x25e: Push((int) 43466)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: Return(); Pop(0)

0x262: Push((int) 43450)
0x263: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x265: PushEmpty(string)
0x266: Stack[-1] = "Saveyouall"
0x267: Call2 0xcc

0x268: Pop(1)
0x269: Push((int) 541314)
0x26a: @@ SetMessage(Stack[-1])
0x26b: Pop(1)
0x26c: @@ ClearReplies()
0x26d: Pop(0)
0x26e: Push((int) 541315)
0x26f: Push((int) 43452)
0x270: Push((int) 43451)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Push((int) 541328)
0x274: Push((int) 43474)
0x275: Push((int) 43468)
0x276: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x277: Pop(3)
0x278: Push((int) 541330)
0x279: Push((int) 43474)
0x27a: Push((int) 43470)
0x27b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27c: Pop(3)
0x27d: Return(); Pop(0)

0x27e: Push((int) 43452)
0x27f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x280: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x281: PushEmpty(string)
0x282: Stack[-1] = "Smile"
0x283: Call2 0xcc

0x284: Pop(1)
0x285: Push((int) 541316)
0x286: @@ SetMessage(Stack[-1])
0x287: Pop(1)
0x288: @@ ClearReplies()
0x289: Pop(0)
0x28a: Push((int) 541317)
0x28b: Push((int) 43474)
0x28c: Push((int) 43453)
0x28d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28e: Pop(3)
0x28f: Push((int) 541334)
0x290: Push((int) 43474)
0x291: Push((int) 43477)
0x292: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x293: Pop(3)
0x294: Return(); Pop(0)

0x295: Push((int) 43474)
0x296: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x298: PushEmpty(string)
0x299: Stack[-1] = "Neutral"
0x29a: Call2 0xcc

0x29b: Pop(1)
0x29c: Push((int) 541331)
0x29d: @@ SetMessage(Stack[-1])
0x29e: Pop(1)
0x29f: @@ ClearReplies()
0x2a0: Pop(0)
0x2a1: Push((int) 541332)
0x2a2: Push((int) -1)
0x2a3: Push((int) 43475)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: Push((int) 541335)
0x2a7: Push((int) 43482)
0x2a8: Push((int) 43481)
0x2a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2aa: Pop(3)
0x2ab: Return(); Pop(0)

0x2ac: Push((int) 43482)
0x2ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2af: PushEmpty(string)
0x2b0: Stack[-1] = "Smile"
0x2b1: Call2 0xcc

0x2b2: Pop(1)
0x2b3: Push((int) 541336)
0x2b4: @@ SetMessage(Stack[-1])
0x2b5: Pop(1)
0x2b6: @@ ClearReplies()
0x2b7: Pop(0)
0x2b8: Push((int) 541333)
0x2b9: Push((int) -1)
0x2ba: Push((int) 43476)
0x2bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(3)
0x2bd: Push((int) 541337)
0x2be: Push((int) -1)
0x2bf: Push((int) 43483)
0x2c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c1: Pop(3)
0x2c2: Return(); Pop(0)

0x2c3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2c4: PushEmpty(bool)
0x2c5: Call2 0x4a3

0x2c6: Pop(0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cb; Pop(1)

0x2c8: @ lshStopAnimation()
0x2c9: Pop(0)
0x2ca: GOTO 0x2cd

0x2cb: @ StopAnimation()
0x2cc: Pop(0)
0x2cd: Return(); Pop(0)

0x2ce: GOTO 0xe3

0x2cf: Return(); Pop(0)

0x2d0: @ Hold()
0x2d1: Pop(0)
0x2d2: GOTO 0x2d0

0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: PushEmpty(int, object)
0x2d6: Stack[-1] = Stack[-3]
0x2d7: Push(-2, 1); TaskCall(0)
0x2d8: Call2 0x0

0x2d9: Pop(-2, 1); TaskReturn
0x2da: Pop(2)
0x2db: Return(); Pop(0)

0x2dc: PushEmpty(bool, bool)
0x2dd: Push("cleanup")
0x2de: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2e0: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x2e1: @ IsLoaded(Stack[-1])
0x2e2: Pop(0)
0x2e3: PushEmpty(bool)
0x2e4: Stack[-1] = (bool) 0
0x2e5: Pop(0); Push((bool) Stack[-2] == 0)
0x2e6: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x308

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 1
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ed: PushEmpty(object)
0x2ee: Call2 0x41e

0x2ef: Pop(0)
0x2f0: @ RemoveActor(Stack[-1])
0x2f1: Pop(1)
0x2f2: GOTO 0x2f7

0x2f3: Push("restore")
0x2f4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x2f7: Return(); Pop(2)

0x2f8: PushEmpty(bool)
0x2f9: Stack[-1] = (bool) 0
0x2fa: Push( Stack[0 + Tasks[-1].StackPointer] )
0x2fb: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2fc: PushEmpty(bool)
0x2fd: Call2 0x308

0x2fe: Pop(0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: Stack[-1] = (bool) 1
0x301: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x302: PushEmpty(object)
0x303: Call2 0x41e

0x304: Pop(0)
0x305: @ RemoveActor(Stack[-1])
0x306: Pop(1)
0x307: Return(); Pop(0)

0x308: Stack[-1] = (bool) 1
0x309: Return(); Pop(0)

0x30a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x30b: @@ GetPosition(Stack[-8])
0x30c: Pop(0)
0x30d: @@ GetEyesHeight(Stack[-9])
0x30e: Pop(0)
0x30f: Push(CvectorIndex(Stack[-8], 1))
0x310: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x311: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x312: @ GetPosition(Stack[-7])
0x313: Pop(0)
0x314: @ GetEyesHeight(Stack[-9])
0x315: Pop(0)
0x316: Push(CvectorIndex(Stack[-7], 1))
0x317: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x318: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x319: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x31a: Push(CvectorIndex(Stack[-6], 1))
0x31b: Stack[-1] = (int) 0
0x31c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x31d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x31e: Pop(1); Push(Sqrt(Stack[-1]))
0x31f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x320: Stack[-5] = -Stack[-6]; Pop(0);
0x321: Pop(0); Push(Stack[-6] * Stack[-19]);
0x322: PushEmpty(cvector, cvector)
0x323: Push(CVector(0.0, 1.0, 0.0))
0x324: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x325: Call2 0x424

0x326: Pop(1)
0x327: Push((int) 25)
0x328: Pop(2); Push(Stack[-2] * Stack[-1]);
0x329: Pop(2); Push(Stack[-2] + Stack[-1]);
0x32a: Push(CVector(0.0, 10.0, 0.0))
0x32b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x32c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x32d: @ IsOverrideActive(Stack[-2])
0x32e: Pop(0)
0x32f: Push(Stack[-2])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-21] = (bool) 0
0x332: Return(); Pop(18)

0x333: @ StopWorld()
0x334: Pop(0)
0x335: @ CameraTransit(Stack[-3], Stack[-5])
0x336: Pop(0)
0x337: Push(CvectorIndex(Stack[-4], 0))
0x338: Push(CvectorIndex(Stack[-5], 2))
0x339: @ Rotate(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: PushEmpty(bool)
0x33c: Call2 0x4a3

0x33d: Pop(0)
0x33e: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33f: GOTO 0x348

0x340: Push("head")
0x341: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x342: Pop(1)
0x343: Push(Stack[-1])
0x344: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x345: Push("head")
0x346: @ LookAsyncCamera(Stack[-1])
0x347: Pop(1)
0x348: @ CameraWaitForPlayFinish()
0x349: Pop(0)
0x34a: @ ResumeWorld()
0x34b: Pop(0)
0x34c: Stack[-21] = (bool) 1
0x34d: Return(); Pop(18)

0x34e: PushEmpty(bool, bool)
0x34f: @ CameraSwitchToNormal()
0x350: Pop(0)
0x351: PushEmpty(bool)
0x352: Call2 0x4a3

0x353: Pop(0)
0x354: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x355: GOTO 0x35e

0x356: Push("head")
0x357: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x358: Pop(1)
0x359: Push(Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x35b: Push("head")
0x35c: @ UnlookAsync(Stack[-1])
0x35d: Pop(1)
0x35e: Return(); Pop(2)

0x35f: PushEmpty(int, int, int, int)
0x360: Push("voice_common")
0x361: @ GetVariable(Stack[-1], Stack[-3])
0x362: Pop(1)
0x363: Push(Stack[-2])
0x364: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[-7]
0x367: Call2 0x399

0x368: Pop(1)
0x369: Pop(1); Push((bool) Stack[-1] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[-7]
0x36d: Call2 0x3be

0x36e: Pop(1)
0x36f: Pop(1); Push((bool) Stack[-1] == 0)
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-6] = (bool) 0
0x372: Return(); Pop(4)

0x373: Push((int) 2)
0x374: @ irand(Stack[-2], Stack[-1])
0x375: Pop(1)
0x376: Push(Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x378: Push("voice_common")
0x379: Push((int) 1)
0x37a: Pop(1); Push(Stack[-4] + Stack[-1]);
0x37b: Push((int) 3)
0x37c: Pop(2); Push(Stack[-2] % Stack[-1]);
0x37d: @ SetVariable(Stack[-2], Stack[-1])
0x37e: Pop(2)
0x37f: GOTO 0x384

0x380: Push("voice_common")
0x381: Push((int) 0)
0x382: @ SetVariable(Stack[-2], Stack[-1])
0x383: Pop(2)
0x384: GOTO 0x397

0x385: PushEmpty(bool, object)
0x386: Stack[-1] = Stack[-7]
0x387: Call2 0x3be

0x388: Pop(1)
0x389: Pop(1); Push((bool) Stack[-1] == 0)
0x38a: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38b: PushEmpty(bool, object)
0x38c: Stack[-1] = Stack[-7]
0x38d: Call2 0x399

0x38e: Pop(1)
0x38f: Pop(1); Push((bool) Stack[-1] == 0)
0x390: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x391: Stack[-6] = (bool) 0
0x392: Return(); Pop(4)

0x393: Push("voice_common")
0x394: Push((int) 1)
0x395: @ SetVariable(Stack[-2], Stack[-1])
0x396: Pop(2)
0x397: Stack[-6] = (bool) 1
0x398: Return(); Pop(4)

0x399: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x39a: Stack[-5] = "c"
0x39b: Stack[-4] = (int) 0
0x39c: Push((int) 1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a9; Pop(1)

0x39e: Push((int) 1)
0x39f: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3a0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3a1: @@ HasProperty(Stack[-1], Stack[-4])
0x3a2: Pop(1)
0x3a3: Pop(0); Push((bool) Stack[-3] == 0)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: GOTO 0x3a9

0x3a6: Push((int) 1)
0x3a7: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3a8: GOTO 0x39c

0x3a9: Pop(0); Push((bool) Stack[-4] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[-12] = (bool) 0
0x3ac: Return(); Pop(10)

0x3ad: Stack[-2] = (int) 0
0x3ae: Push((int) 1)
0x3af: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3b0: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b1: @ irand(Stack[-2], Stack[-4])
0x3b2: Pop(0)
0x3b3: Push((int) 1)
0x3b4: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3b5: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3b6: @@ GetProperty(Stack[-1], Stack[-2])
0x3b7: Pop(1)
0x3b8: PushEmpty(bool, string)
0x3b9: Stack[-1] = Stack[-3]
0x3ba: Call2 0x408

0x3bb: Stack[-14] = Stack[-2]
0x3bc: Pop(2)
0x3bd: Return(); Pop(10)

0x3be: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x3bf: Push("d")
0x3c0: PushEmpty(int)
0x3c1: Call2 0x433

0x3c2: Pop(0)
0x3c3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c4: Push("m")
0x3c5: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x3c6: Stack[-4] = (int) 0
0x3c7: Push((int) 1)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3c9: Push((int) 1)
0x3ca: Pop(1); Push(Stack[-5] + Stack[-1]);
0x3cb: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3cc: @@ HasProperty(Stack[-1], Stack[-4])
0x3cd: Pop(1)
0x3ce: Pop(0); Push((bool) Stack[-3] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: GOTO 0x3d4

0x3d1: Push((int) 1)
0x3d2: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x3d3: GOTO 0x3c7

0x3d4: Pop(0); Push((bool) Stack[-4] == 0)
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-12] = (bool) 0
0x3d7: Return(); Pop(10)

0x3d8: Stack[-2] = (int) 0
0x3d9: Push((int) 1)
0x3da: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dc: @ irand(Stack[-2], Stack[-4])
0x3dd: Pop(0)
0x3de: Push((int) 1)
0x3df: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3e0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x3e1: @@ GetProperty(Stack[-1], Stack[-2])
0x3e2: Pop(1)
0x3e3: PushEmpty(bool, string)
0x3e4: Stack[-1] = Stack[-3]
0x3e5: Call2 0x408

0x3e6: Stack[-14] = Stack[-2]
0x3e7: Pop(2)
0x3e8: Return(); Pop(10)

0x3e9: PushEmpty(bool, float, float, bool, float, float)
0x3ea: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3eb: Pop(0)
0x3ec: Push(Stack[-3])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ee: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3ef: Pop(0)
0x3f0: Push((bool) 0)
0x3f1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3f2: Pop(1)
0x3f3: GOTO 0x3f8

0x3f4: Push("Can't find lsh animation : ")
0x3f5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3f6: @ Trace(Stack[-1])
0x3f7: Pop(1)
0x3f8: Return(); Pop(6)

0x3f9: PushEmpty(bool, float, float, bool, float, float)
0x3fa: @ lshHasAnimation(Stack[-3], Stack[-8])
0x3fb: Pop(0)
0x3fc: Push(Stack[-3])
0x3fd: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fe: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x3ff: Pop(0)
0x400: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x401: Pop(0)
0x402: GOTO 0x407

0x403: Push("Can't find lsh animation : ")
0x404: Pop(1); Push(Stack[-1] + Stack[-9]);
0x405: @ Trace(Stack[-1])
0x406: Pop(1)
0x407: Return(); Pop(6)

0x408: PushEmpty(bool, bool)
0x409: PushEmpty(bool)
0x40a: Call2 0x4a3

0x40b: Pop(0)
0x40c: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40d: @ lshHasSpeech(Stack[-1], Stack[-3])
0x40e: Pop(0)
0x40f: Push(Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x411: @ lshPlaySpeech(Stack[-3])
0x412: Pop(0)
0x413: Stack[-4] = (bool) 1
0x414: Return(); Pop(2)

0x415: Stack[-4] = (bool) 0
0x416: Return(); Pop(2)

0x417: PushEmpty(bool)
0x418: Call2 0x4a3

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: @ lshStopSpeech()
0x41c: Pop(0)
0x41d: Return(); Pop(0)

0x41e: PushEmpty(object, object)
0x41f: @ self(Stack[-1])
0x420: Pop(0)
0x421: Stack[-3] = Stack[-1]
0x422: Return(); Pop(2)

0x423: Stack[-1] = 0
0x424: PushEmpty(float, float)
0x425: Pop(0); Push(Stack[-3] | Stack[-3]);
0x426: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x427: Push((float)0.0)
0x428: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x429: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x42a: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x42b: Return(); Pop(2)

0x42c: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x42d: Return(); Pop(2)

0x42e: PushEmpty(int, int)
0x42f: @ GetVariable(Stack[-3], Stack[-1])
0x430: Pop(0)
0x431: Stack[-4] = Stack[-1]
0x432: Return(); Pop(2)

0x433: PushEmpty(float, float)
0x434: @ GetGameTime(Stack[-1])
0x435: Pop(0)
0x436: Push((int) 1)
0x437: PushEmpty(int)
0x438: Push((int) 24)
0x439: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x43a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x43b: Return(); Pop(2)

0x43c: PushEmpty()
0x43d: Push("ook12Klara2Sobor1")
0x43e: Push((int) 1)
0x43f: @ SetVariable(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: Return(); Pop(0)

0x442: PushEmpty()
0x443: Push("ook12Klara2Sobor2")
0x444: Push((int) 1)
0x445: @ SetVariable(Stack[-2], Stack[-1])
0x446: Pop(2)
0x447: Return(); Pop(0)

0x448: PushEmpty()
0x449: Push("ook12Klara2Sobor3")
0x44a: Push((int) 1)
0x44b: @ SetVariable(Stack[-2], Stack[-1])
0x44c: Pop(2)
0x44d: Return(); Pop(0)

0x44e: PushEmpty()
0x44f: PushEmpty(int, string)
0x450: Stack[-1] = "game_final"
0x451: Call2 0x42e

0x452: Pop(1)
0x453: Push((int) 0)
0x454: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x455: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x456: Stack[-2] = (bool) 1
0x457: Return(); Pop(0)

0x458: Stack[-2] = (bool) 0
0x459: Return(); Pop(0)

0x45a: PushEmpty()
0x45b: PushEmpty(int, string)
0x45c: Stack[-1] = "game_final"
0x45d: Call2 0x42e

0x45e: Pop(1)
0x45f: Push((int) 3)
0x460: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x461: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x462: Stack[-2] = (bool) 1
0x463: Return(); Pop(0)

0x464: Stack[-2] = (bool) 0
0x465: Return(); Pop(0)

0x466: PushEmpty()
0x467: PushEmpty(int, string)
0x468: Stack[-1] = "ook12Klara2Sobor1"
0x469: Call2 0x42e

0x46a: Pop(1)
0x46b: Push((int) 0)
0x46c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-2] = (bool) 1
0x46f: Return(); Pop(0)

0x470: Stack[-2] = (bool) 0
0x471: Return(); Pop(0)

0x472: PushEmpty()
0x473: PushEmpty(int, string)
0x474: Stack[-1] = "ook12Klara2Sobor2"
0x475: Call2 0x42e

0x476: Pop(1)
0x477: Push((int) 0)
0x478: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x47a: Stack[-2] = (bool) 1
0x47b: Return(); Pop(0)

0x47c: Stack[-2] = (bool) 0
0x47d: Return(); Pop(0)

0x47e: PushEmpty()
0x47f: PushEmpty(int, string)
0x480: Stack[-1] = "ook12Klara2Sobor3"
0x481: Call2 0x42e

0x482: Pop(1)
0x483: Push((int) 0)
0x484: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x485: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x486: Stack[-2] = (bool) 1
0x487: Return(); Pop(0)

0x488: Stack[-2] = (bool) 0
0x489: Return(); Pop(0)

0x48a: PushEmpty(int, int)
0x48b: Push("branch")
0x48c: @ GetVariable(Stack[-1], Stack[-2])
0x48d: Pop(1)
0x48e: Push((int) 0)
0x48f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x491: Stack[-3] = (int) 1
0x492: Return(); Pop(2)

0x493: GOTO 0x499

0x494: Push((int) 1)
0x495: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x497: Stack[-3] = (int) 2
0x498: Return(); Pop(2)

0x499: Stack[-3] = (int) 3
0x49a: Return(); Pop(2)

0x49b: Stack[-1] = (int) 515540
0x49c: Return(); Pop(0)

0x49d: Stack[-1] = (int) 502865
0x49e: Return(); Pop(0)

0x49f: Stack[-1] = "ui/NPC_Klara.png"
0x4a0: Return(); Pop(0)

0x4a1: Stack[-1] = "ui/NPC_Klara_b.png"
0x4a2: Return(); Pop(0)

0x4a3: Stack[-1] = (bool) 1
0x4a4: Return(); Pop(0)

