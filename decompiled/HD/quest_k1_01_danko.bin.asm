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
	Smile
	Menace
	Untrust
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
	ook1Danko1
	ook1Danko2
	k1q01
	k1q01Healed
	branch
	ui/NPC_Bakalavr.png
	ui/NPC_Bakalavr_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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

RunOp = 0x227
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf9 Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x21f Vars = (object)
		EVENT_26 Op = 0x22b Vars = (string)
		EVENT_6 Op = 0x247 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x259

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x3dc

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3da

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3de

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3e0

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3c9

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
0x31: Call2 0x36f

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2b0

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
0x48: Call2 0x29e

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
0x56: IF (Stack[-1] == 0) GOTO 0xc5; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x399

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x3a5

0x63: Pop(1)
0x64: Pop(1); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x3b1

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[-1] = (bool) 1
0x6e: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x6f: PushEmpty(object, object)
0x70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x72: Call2 0x38d

0x73: Pop(2)
0x74: PushEmpty(string)
0x75: Stack[-1] = "Neutral"
0x76: Call2 0xe3

0x77: Pop(1)
0x78: Push((int) 524699)
0x79: @@ SetMessage(Stack[-1])
0x7a: Pop(1)
0x7b: @@ ClearReplies()
0x7c: Pop(0)
0x7d: Push((int) 524700)
0x7e: Push((int) 28105)
0x7f: Push((int) 26039)
0x80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81: Pop(3)
0x82: Push((int) 526838)
0x83: Push((int) 28123)
0x84: Push((int) 28122)
0x85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(3)
0x87: Push((int) 542096)
0x88: Push((int) 28125)
0x89: Push((int) 44396)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: GOTO 0xc5

0x8d: PushEmpty(bool)
0x8e: Stack[-1] = (bool) 0
0x8f: PushEmpty(bool, object)
0x90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91: Call2 0x3a5

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0x3bd

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 1
0x9a: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x9b: PushEmpty(object, object)
0x9c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e: Call2 0x393

0x9f: Pop(2)
0xa0: PushEmpty(string)
0xa1: Stack[-1] = "Neutral"
0xa2: Call2 0xe3

0xa3: Pop(1)
0xa4: Push((int) 524714)
0xa5: @@ SetMessage(Stack[-1])
0xa6: Pop(1)
0xa7: @@ ClearReplies()
0xa8: Pop(0)
0xa9: Push((int) 524715)
0xaa: Push((int) 28112)
0xab: Push((int) 26054)
0xac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad: Pop(3)
0xae: GOTO 0xc5

0xaf: PushEmpty(string)
0xb0: Stack[-1] = "Neutral"
0xb1: Call2 0xe3

0xb2: Pop(1)
0xb3: Push((int) 526834)
0xb4: @@ SetMessage(Stack[-1])
0xb5: Pop(1)
0xb6: @@ ClearReplies()
0xb7: Pop(0)
0xb8: Push((int) 526835)
0xb9: Push((int) -1)
0xba: Push((int) 28118)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Push((int) 526836)
0xbe: Push((int) -1)
0xbf: Push((int) 28119)
0xc0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1: Pop(3)
0xc2: GOTO 0xc5

0xc3: Return(); Pop(0)

0xc4: GOTO 0x55

0xc5: PushEmpty(bool)
0xc6: Call2 0x3e2

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x33a

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
0xe5: Call2 0x3e2

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
0xf5: Call2 0x34a

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x368

0xfe: Pop(0)
0xff: Push((int) 26038)
0x100: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x102: PushEmpty(bool)
0x103: Stack[-1] = (bool) 0
0x104: PushEmpty(bool)
0x105: Stack[-1] = (bool) 0
0x106: PushEmpty(bool, object)
0x107: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x108: Call2 0x399

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10b: PushEmpty(bool, object)
0x10c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Call2 0x3a5

0x10e: Pop(1)
0x10f: Pop(1); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Stack[-1] = (bool) 1
0x112: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x113: PushEmpty(bool, object)
0x114: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x115: Call2 0x3b1

0x116: Pop(1)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-1] = (bool) 1
0x119: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x38d

0x11e: Pop(2)
0x11f: PushEmpty(string)
0x120: Stack[-1] = "Neutral"
0x121: Call2 0xe3

0x122: Pop(1)
0x123: Push((int) 524699)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 524700)
0x129: Push((int) 28105)
0x12a: Push((int) 26039)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 526838)
0x12e: Push((int) 28123)
0x12f: Push((int) 28122)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Push((int) 542096)
0x133: Push((int) 28125)
0x134: Push((int) 44396)
0x135: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136: Pop(3)
0x137: Return(); Pop(0)

0x138: PushEmpty(bool)
0x139: Stack[-1] = (bool) 0
0x13a: PushEmpty(bool, object)
0x13b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13c: Call2 0x3a5

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0x3bd

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Stack[-1] = (bool) 1
0x145: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x146: PushEmpty(object, object)
0x147: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x148: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x149: Call2 0x393

0x14a: Pop(2)
0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0xe3

0x14e: Pop(1)
0x14f: Push((int) 524714)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 524715)
0x155: Push((int) 28112)
0x156: Push((int) 26054)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Neutral"
0x15c: Call2 0xe3

0x15d: Pop(1)
0x15e: Push((int) 526834)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 526835)
0x164: Push((int) -1)
0x165: Push((int) 28118)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 526836)
0x169: Push((int) -1)
0x16a: Push((int) 28119)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 28112)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Smile"
0x173: Call2 0xe3

0x174: Pop(1)
0x175: Push((int) 526830)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 526831)
0x17b: Push((int) 26055)
0x17c: Push((int) 28113)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Push((int) 526832)
0x180: Push((int) 26055)
0x181: Push((int) 28114)
0x182: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x183: Pop(3)
0x184: Return(); Pop(0)

0x185: Push((int) 26055)
0x186: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x187: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x188: PushEmpty(string)
0x189: Stack[-1] = "Smile"
0x18a: Call2 0xe3

0x18b: Pop(1)
0x18c: Push((int) 524716)
0x18d: @@ SetMessage(Stack[-1])
0x18e: Pop(1)
0x18f: @@ ClearReplies()
0x190: Pop(0)
0x191: Push((int) 524717)
0x192: Push((int) -1)
0x193: Push((int) 26056)
0x194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x195: Pop(3)
0x196: Push((int) 526829)
0x197: Push((int) -1)
0x198: Push((int) 28111)
0x199: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19a: Pop(3)
0x19b: Return(); Pop(0)

0x19c: Push((int) 28123)
0x19d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19e: IF (Stack[-1] == 0) GOTO 0x1ae; Pop(1)

0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "Menace"
0x1a1: Call2 0xe3

0x1a2: Pop(1)
0x1a3: Push((int) 526839)
0x1a4: @@ SetMessage(Stack[-1])
0x1a5: Pop(1)
0x1a6: @@ ClearReplies()
0x1a7: Pop(0)
0x1a8: Push((int) 526840)
0x1a9: Push((int) 28125)
0x1aa: Push((int) 28124)
0x1ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ac: Pop(3)
0x1ad: Return(); Pop(0)

0x1ae: Push((int) 28125)
0x1af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1b1: PushEmpty(string)
0x1b2: Stack[-1] = "Menace"
0x1b3: Call2 0xe3

0x1b4: Pop(1)
0x1b5: Push((int) 526841)
0x1b6: @@ SetMessage(Stack[-1])
0x1b7: Pop(1)
0x1b8: @@ ClearReplies()
0x1b9: Pop(0)
0x1ba: Push((int) 526842)
0x1bb: Push((int) 28127)
0x1bc: Push((int) 28126)
0x1bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1be: Pop(3)
0x1bf: Return(); Pop(0)

0x1c0: Push((int) 28127)
0x1c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c2: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c3: PushEmpty(string)
0x1c4: Stack[-1] = "Smile"
0x1c5: Call2 0xe3

0x1c6: Pop(1)
0x1c7: Push((int) 526843)
0x1c8: @@ SetMessage(Stack[-1])
0x1c9: Pop(1)
0x1ca: @@ ClearReplies()
0x1cb: Pop(0)
0x1cc: Push((int) 526844)
0x1cd: Push((int) 28105)
0x1ce: Push((int) 28128)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: Push((int) 542097)
0x1d2: Push((int) 28107)
0x1d3: Push((int) 44398)
0x1d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d5: Pop(3)
0x1d6: Return(); Pop(0)

0x1d7: Push((int) 28105)
0x1d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1da: PushEmpty(string)
0x1db: Stack[-1] = "Menace"
0x1dc: Call2 0xe3

0x1dd: Pop(1)
0x1de: Push((int) 526823)
0x1df: @@ SetMessage(Stack[-1])
0x1e0: Pop(1)
0x1e1: @@ ClearReplies()
0x1e2: Pop(0)
0x1e3: Push((int) 526824)
0x1e4: Push((int) 28107)
0x1e5: Push((int) 28106)
0x1e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e7: Pop(3)
0x1e8: Return(); Pop(0)

0x1e9: Push((int) 28107)
0x1ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1ec: PushEmpty(string)
0x1ed: Stack[-1] = "Menace"
0x1ee: Call2 0xe3

0x1ef: Pop(1)
0x1f0: Push((int) 526825)
0x1f1: @@ SetMessage(Stack[-1])
0x1f2: Pop(1)
0x1f3: @@ ClearReplies()
0x1f4: Pop(0)
0x1f5: Push((int) 526826)
0x1f6: Push((int) 28109)
0x1f7: Push((int) 28108)
0x1f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f9: Pop(3)
0x1fa: Return(); Pop(0)

0x1fb: Push((int) 28109)
0x1fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1fd: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fe: PushEmpty(string)
0x1ff: Stack[-1] = "Untrust"
0x200: Call2 0xe3

0x201: Pop(1)
0x202: Push((int) 526827)
0x203: @@ SetMessage(Stack[-1])
0x204: Pop(1)
0x205: @@ ClearReplies()
0x206: Pop(0)
0x207: Push((int) 526828)
0x208: Push((int) -1)
0x209: Push((int) 28110)
0x20a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20b: Pop(3)
0x20c: Push((int) 526833)
0x20d: Push((int) -1)
0x20e: Push((int) 28115)
0x20f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x210: Pop(3)
0x211: Return(); Pop(0)

0x212: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x213: PushEmpty(bool)
0x214: Call2 0x3e2

0x215: Pop(0)
0x216: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x217: @ lshStopAnimation()
0x218: Pop(0)
0x219: GOTO 0x21c

0x21a: @ StopAnimation()
0x21b: Pop(0)
0x21c: Return(); Pop(0)

0x21d: GOTO 0xfa

0x21e: Return(); Pop(0)

0x21f: PushEmpty()
0x220: PushEmpty(int, object)
0x221: Stack[-1] = Stack[-3]
0x222: Push(-2, 1); TaskCall(0)
0x223: Call2 0x0

0x224: Pop(-2, 1); TaskReturn
0x225: Pop(2)
0x226: Return(); Pop(0)

0x227: @ Hold()
0x228: Pop(0)
0x229: GOTO 0x227

0x22a: Return(); Pop(0)

0x22b: PushEmpty(bool, bool)
0x22c: Push("cleanup")
0x22d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22e: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x22f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x230: @ IsLoaded(Stack[-1])
0x231: Pop(0)
0x232: PushEmpty(bool)
0x233: Stack[-1] = (bool) 0
0x234: Pop(0); Push((bool) Stack[-2] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x236: PushEmpty(bool)
0x237: Call2 0x257

0x238: Pop(0)
0x239: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x23a: Stack[-1] = (bool) 1
0x23b: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23c: PushEmpty(object)
0x23d: Call2 0x36f

0x23e: Pop(0)
0x23f: @ RemoveActor(Stack[-1])
0x240: Pop(1)
0x241: GOTO 0x246

0x242: Push("restore")
0x243: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x246: Return(); Pop(2)

0x247: PushEmpty(bool)
0x248: Stack[-1] = (bool) 0
0x249: Push( Stack[0 + Tasks[-1].StackPointer] )
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: PushEmpty(bool)
0x24c: Call2 0x257

0x24d: Pop(0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: Stack[-1] = (bool) 1
0x250: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x251: PushEmpty(object)
0x252: Call2 0x36f

0x253: Pop(0)
0x254: @ RemoveActor(Stack[-1])
0x255: Pop(1)
0x256: Return(); Pop(0)

0x257: Stack[-1] = (bool) 1
0x258: Return(); Pop(0)

0x259: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x25a: @@ GetPosition(Stack[-8])
0x25b: Pop(0)
0x25c: @@ GetEyesHeight(Stack[-9])
0x25d: Pop(0)
0x25e: Push(CvectorIndex(Stack[-8], 1))
0x25f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x260: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x261: @ GetPosition(Stack[-7])
0x262: Pop(0)
0x263: @ GetEyesHeight(Stack[-9])
0x264: Pop(0)
0x265: Push(CvectorIndex(Stack[-7], 1))
0x266: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x267: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x268: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x269: Push(CvectorIndex(Stack[-6], 1))
0x26a: Stack[-1] = (int) 0
0x26b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x26c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x26d: Pop(1); Push(Sqrt(Stack[-1]))
0x26e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x26f: Stack[-5] = -Stack[-6]; Pop(0);
0x270: Pop(0); Push(Stack[-6] * Stack[-19]);
0x271: PushEmpty(cvector, cvector)
0x272: Push(CVector(0.0, 1.0, 0.0))
0x273: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x274: Call2 0x375

0x275: Pop(1)
0x276: Push((int) 25)
0x277: Pop(2); Push(Stack[-2] * Stack[-1]);
0x278: Pop(2); Push(Stack[-2] + Stack[-1]);
0x279: Push(CVector(0.0, 10.0, 0.0))
0x27a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x27b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x27c: @ IsOverrideActive(Stack[-2])
0x27d: Pop(0)
0x27e: Push(Stack[-2])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: Stack[-21] = (bool) 0
0x281: Return(); Pop(18)

0x282: @ StopWorld()
0x283: Pop(0)
0x284: Push((bool) 1)
0x285: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x286: Pop(1)
0x287: Push(CvectorIndex(Stack[-4], 0))
0x288: Push(CvectorIndex(Stack[-5], 2))
0x289: @ Rotate(Stack[-2], Stack[-1])
0x28a: Pop(2)
0x28b: PushEmpty(bool)
0x28c: Call2 0x3e2

0x28d: Pop(0)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: GOTO 0x298

0x290: Push("head")
0x291: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x292: Pop(1)
0x293: Push(Stack[-1])
0x294: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x295: Push("head")
0x296: @ LookAsyncCamera(Stack[-1])
0x297: Pop(1)
0x298: @ CameraWaitForPlayFinish()
0x299: Pop(0)
0x29a: @ ResumeWorld()
0x29b: Pop(0)
0x29c: Stack[-21] = (bool) 1
0x29d: Return(); Pop(18)

0x29e: PushEmpty(bool, bool)
0x29f: Push((bool) 1)
0x2a0: @ CameraSwitchToNormal(Stack[-1])
0x2a1: Pop(1)
0x2a2: PushEmpty(bool)
0x2a3: Call2 0x3e2

0x2a4: Pop(0)
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: GOTO 0x2af

0x2a7: Push("head")
0x2a8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a9: Pop(1)
0x2aa: Push(Stack[-1])
0x2ab: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2ac: Push("head")
0x2ad: @ UnlookAsync(Stack[-1])
0x2ae: Pop(1)
0x2af: Return(); Pop(2)

0x2b0: PushEmpty(int, int, int, int)
0x2b1: Push("voice_common")
0x2b2: @ GetVariable(Stack[-1], Stack[-3])
0x2b3: Pop(1)
0x2b4: Push(Stack[-2])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2b6: PushEmpty(bool, object)
0x2b7: Stack[-1] = Stack[-7]
0x2b8: Call2 0x2ea

0x2b9: Pop(1)
0x2ba: Pop(1); Push((bool) Stack[-1] == 0)
0x2bb: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2bc: PushEmpty(bool, object)
0x2bd: Stack[-1] = Stack[-7]
0x2be: Call2 0x30f

0x2bf: Pop(1)
0x2c0: Pop(1); Push((bool) Stack[-1] == 0)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-6] = (bool) 0
0x2c3: Return(); Pop(4)

0x2c4: Push((int) 2)
0x2c5: @ irand(Stack[-2], Stack[-1])
0x2c6: Pop(1)
0x2c7: Push(Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c9: Push("voice_common")
0x2ca: Push((int) 1)
0x2cb: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2cc: Push((int) 3)
0x2cd: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2ce: @ SetVariable(Stack[-2], Stack[-1])
0x2cf: Pop(2)
0x2d0: GOTO 0x2d5

0x2d1: Push("voice_common")
0x2d2: Push((int) 0)
0x2d3: @ SetVariable(Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: GOTO 0x2e8

0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[-7]
0x2d8: Call2 0x30f

0x2d9: Pop(1)
0x2da: Pop(1); Push((bool) Stack[-1] == 0)
0x2db: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2dc: PushEmpty(bool, object)
0x2dd: Stack[-1] = Stack[-7]
0x2de: Call2 0x2ea

0x2df: Pop(1)
0x2e0: Pop(1); Push((bool) Stack[-1] == 0)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e4; Pop(1)

0x2e2: Stack[-6] = (bool) 0
0x2e3: Return(); Pop(4)

0x2e4: Push("voice_common")
0x2e5: Push((int) 1)
0x2e6: @ SetVariable(Stack[-2], Stack[-1])
0x2e7: Pop(2)
0x2e8: Stack[-6] = (bool) 1
0x2e9: Return(); Pop(4)

0x2ea: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2eb: Stack[-5] = "c"
0x2ec: Stack[-4] = (int) 0
0x2ed: Push((int) 1)
0x2ee: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2ef: Push((int) 1)
0x2f0: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2f1: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f2: @@ HasProperty(Stack[-1], Stack[-4])
0x2f3: Pop(1)
0x2f4: Pop(0); Push((bool) Stack[-3] == 0)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: GOTO 0x2fa

0x2f7: Push((int) 1)
0x2f8: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2f9: GOTO 0x2ed

0x2fa: Pop(0); Push((bool) Stack[-4] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fc: Stack[-12] = (bool) 0
0x2fd: Return(); Pop(10)

0x2fe: Stack[-2] = (int) 0
0x2ff: Push((int) 1)
0x300: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: @ irand(Stack[-2], Stack[-4])
0x303: Pop(0)
0x304: Push((int) 1)
0x305: Pop(1); Push(Stack[-3] + Stack[-1]);
0x306: Pop(1); Push(Stack[-6] + Stack[-1]);
0x307: @@ GetProperty(Stack[-1], Stack[-2])
0x308: Pop(1)
0x309: PushEmpty(bool, string)
0x30a: Stack[-1] = Stack[-3]
0x30b: Call2 0x359

0x30c: Stack[-14] = Stack[-2]
0x30d: Pop(2)
0x30e: Return(); Pop(10)

0x30f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x310: Push("d")
0x311: PushEmpty(int)
0x312: Call2 0x384

0x313: Pop(0)
0x314: Pop(2); Push(Stack[-2] + Stack[-1]);
0x315: Push("m")
0x316: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x317: Stack[-4] = (int) 0
0x318: Push((int) 1)
0x319: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x31a: Push((int) 1)
0x31b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x31c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31d: @@ HasProperty(Stack[-1], Stack[-4])
0x31e: Pop(1)
0x31f: Pop(0); Push((bool) Stack[-3] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: GOTO 0x325

0x322: Push((int) 1)
0x323: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x324: GOTO 0x318

0x325: Pop(0); Push((bool) Stack[-4] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-12] = (bool) 0
0x328: Return(); Pop(10)

0x329: Stack[-2] = (int) 0
0x32a: Push((int) 1)
0x32b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: @ irand(Stack[-2], Stack[-4])
0x32e: Pop(0)
0x32f: Push((int) 1)
0x330: Pop(1); Push(Stack[-3] + Stack[-1]);
0x331: Pop(1); Push(Stack[-6] + Stack[-1]);
0x332: @@ GetProperty(Stack[-1], Stack[-2])
0x333: Pop(1)
0x334: PushEmpty(bool, string)
0x335: Stack[-1] = Stack[-3]
0x336: Call2 0x359

0x337: Stack[-14] = Stack[-2]
0x338: Pop(2)
0x339: Return(); Pop(10)

0x33a: PushEmpty(bool, float, float, bool, float, float)
0x33b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x33c: Pop(0)
0x33d: Push(Stack[-3])
0x33e: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x33f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x340: Pop(0)
0x341: Push((bool) 0)
0x342: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(1)
0x344: GOTO 0x349

0x345: Push("Can't find lsh animation : ")
0x346: Pop(1); Push(Stack[-1] + Stack[-8]);
0x347: @ Trace(Stack[-1])
0x348: Pop(1)
0x349: Return(); Pop(6)

0x34a: PushEmpty(bool, float, float, bool, float, float)
0x34b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x34c: Pop(0)
0x34d: Push(Stack[-3])
0x34e: IF (Stack[-1] == 0) GOTO 0x354; Pop(1)

0x34f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x350: Pop(0)
0x351: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x352: Pop(0)
0x353: GOTO 0x358

0x354: Push("Can't find lsh animation : ")
0x355: Pop(1); Push(Stack[-1] + Stack[-9]);
0x356: @ Trace(Stack[-1])
0x357: Pop(1)
0x358: Return(); Pop(6)

0x359: PushEmpty(bool, bool)
0x35a: PushEmpty(bool)
0x35b: Call2 0x3e2

0x35c: Pop(0)
0x35d: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x35e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x35f: Pop(0)
0x360: Push(Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x362: @ lshPlaySpeech(Stack[-3])
0x363: Pop(0)
0x364: Stack[-4] = (bool) 1
0x365: Return(); Pop(2)

0x366: Stack[-4] = (bool) 0
0x367: Return(); Pop(2)

0x368: PushEmpty(bool)
0x369: Call2 0x3e2

0x36a: Pop(0)
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: @ lshStopSpeech()
0x36d: Pop(0)
0x36e: Return(); Pop(0)

0x36f: PushEmpty(object, object)
0x370: @ self(Stack[-1])
0x371: Pop(0)
0x372: Stack[-3] = Stack[-1]
0x373: Return(); Pop(2)

0x374: Stack[-1] = 0
0x375: PushEmpty(float, float)
0x376: Pop(0); Push(Stack[-3] | Stack[-3]);
0x377: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x378: Push((float)0.0)
0x379: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x37c: Return(); Pop(2)

0x37d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x37e: Return(); Pop(2)

0x37f: PushEmpty(int, int)
0x380: @ GetVariable(Stack[-3], Stack[-1])
0x381: Pop(0)
0x382: Stack[-4] = Stack[-1]
0x383: Return(); Pop(2)

0x384: PushEmpty(float, float)
0x385: @ GetGameTime(Stack[-1])
0x386: Pop(0)
0x387: Push((int) 1)
0x388: PushEmpty(int)
0x389: Push((int) 24)
0x38a: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x38b: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x38c: Return(); Pop(2)

0x38d: PushEmpty()
0x38e: Push("ook1Danko1")
0x38f: Push((int) 1)
0x390: @ SetVariable(Stack[-2], Stack[-1])
0x391: Pop(2)
0x392: Return(); Pop(0)

0x393: PushEmpty()
0x394: Push("ook1Danko2")
0x395: Push((int) 1)
0x396: @ SetVariable(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: Return(); Pop(0)

0x399: PushEmpty()
0x39a: PushEmpty(int, string)
0x39b: Stack[-1] = "k1q01"
0x39c: Call2 0x37f

0x39d: Pop(1)
0x39e: Push((int) 4)
0x39f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a1: Stack[-2] = (bool) 1
0x3a2: Return(); Pop(0)

0x3a3: Stack[-2] = (bool) 0
0x3a4: Return(); Pop(0)

0x3a5: PushEmpty()
0x3a6: PushEmpty(int, string)
0x3a7: Stack[-1] = "k1q01Healed"
0x3a8: Call2 0x37f

0x3a9: Pop(1)
0x3aa: Push((int) 0)
0x3ab: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-2] = (bool) 1
0x3ae: Return(); Pop(0)

0x3af: Stack[-2] = (bool) 0
0x3b0: Return(); Pop(0)

0x3b1: PushEmpty()
0x3b2: PushEmpty(int, string)
0x3b3: Stack[-1] = "ook1Danko1"
0x3b4: Call2 0x37f

0x3b5: Pop(1)
0x3b6: Push((int) 0)
0x3b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b8: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b9: Stack[-2] = (bool) 1
0x3ba: Return(); Pop(0)

0x3bb: Stack[-2] = (bool) 0
0x3bc: Return(); Pop(0)

0x3bd: PushEmpty()
0x3be: PushEmpty(int, string)
0x3bf: Stack[-1] = "ook1Danko2"
0x3c0: Call2 0x37f

0x3c1: Pop(1)
0x3c2: Push((int) 0)
0x3c3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3c7; Pop(1)

0x3c5: Stack[-2] = (bool) 1
0x3c6: Return(); Pop(0)

0x3c7: Stack[-2] = (bool) 0
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(int, int)
0x3ca: Push("branch")
0x3cb: @ GetVariable(Stack[-1], Stack[-2])
0x3cc: Pop(1)
0x3cd: Push((int) 0)
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3d0: Stack[-3] = (int) 1
0x3d1: Return(); Pop(2)

0x3d2: GOTO 0x3d8

0x3d3: Push((int) 1)
0x3d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-3] = (int) 2
0x3d7: Return(); Pop(2)

0x3d8: Stack[-3] = (int) 3
0x3d9: Return(); Pop(2)

0x3da: Stack[-1] = (int) 515573
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = (int) 504032
0x3dd: Return(); Pop(0)

0x3de: Stack[-1] = "ui/NPC_Bakalavr.png"
0x3df: Return(); Pop(0)

0x3e0: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x3e1: Return(); Pop(0)

0x3e2: Stack[-1] = (bool) 1
0x3e3: Return(); Pop(0)

