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
0xe: Call2 0x3da

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3d8

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x3dc

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x3de

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3c7

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
0x31: Call2 0x36d

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2ae

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
0x48: Call2 0x29d

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
0x5d: Call2 0x397

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x3a3

0x63: Pop(1)
0x64: Pop(1); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x3af

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: Stack[-1] = (bool) 1
0x6e: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x6f: PushEmpty(object, object)
0x70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x72: Call2 0x38b

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
0x91: Call2 0x3a3

0x92: Pop(1)
0x93: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x94: PushEmpty(bool, object)
0x95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x96: Call2 0x3bb

0x97: Pop(1)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Stack[-1] = (bool) 1
0x9a: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0x9b: PushEmpty(object, object)
0x9c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e: Call2 0x391

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
0xc6: Call2 0x3e0

0xc7: Pop(0)
0xc8: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xc9: @ lshWaitForAnimEnd()
0xca: Pop(0)
0xcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xcd: GOTO 0xd3

0xce: PushEmpty(string)
0xcf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd0: Call2 0x338

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
0xe5: Call2 0x3e0

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
0xf5: Call2 0x348

0xf6: Pop(2)
0xf7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf8: Return(); Pop(0)

0xf9: PushEmpty()
0xfa: Push((int) 1)
0xfb: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0xfc: PushEmpty()
0xfd: Call2 0x366

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
0x108: Call2 0x397

0x109: Pop(1)
0x10a: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10b: PushEmpty(bool, object)
0x10c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10d: Call2 0x3a3

0x10e: Pop(1)
0x10f: Pop(1); Push((bool) Stack[-1] == 0)
0x110: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x111: Stack[-1] = (bool) 1
0x112: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x113: PushEmpty(bool, object)
0x114: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x115: Call2 0x3af

0x116: Pop(1)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-1] = (bool) 1
0x119: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x11a: PushEmpty(object, object)
0x11b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11d: Call2 0x38b

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
0x13c: Call2 0x3a3

0x13d: Pop(1)
0x13e: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x13f: PushEmpty(bool, object)
0x140: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x141: Call2 0x3bb

0x142: Pop(1)
0x143: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x144: Stack[-1] = (bool) 1
0x145: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x146: PushEmpty(object, object)
0x147: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x148: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x149: Call2 0x391

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
0x214: Call2 0x3e0

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
0x23d: Call2 0x36d

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
0x252: Call2 0x36d

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
0x274: Call2 0x373

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
0x284: @ CameraTransit(Stack[-3], Stack[-5])
0x285: Pop(0)
0x286: Push(CvectorIndex(Stack[-4], 0))
0x287: Push(CvectorIndex(Stack[-5], 2))
0x288: @ Rotate(Stack[-2], Stack[-1])
0x289: Pop(2)
0x28a: PushEmpty(bool)
0x28b: Call2 0x3e0

0x28c: Pop(0)
0x28d: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28e: GOTO 0x297

0x28f: Push("head")
0x290: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x291: Pop(1)
0x292: Push(Stack[-1])
0x293: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x294: Push("head")
0x295: @ LookAsyncCamera(Stack[-1])
0x296: Pop(1)
0x297: @ CameraWaitForPlayFinish()
0x298: Pop(0)
0x299: @ ResumeWorld()
0x29a: Pop(0)
0x29b: Stack[-21] = (bool) 1
0x29c: Return(); Pop(18)

0x29d: PushEmpty(bool, bool)
0x29e: @ CameraSwitchToNormal()
0x29f: Pop(0)
0x2a0: PushEmpty(bool)
0x2a1: Call2 0x3e0

0x2a2: Pop(0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x2a4: GOTO 0x2ad

0x2a5: Push("head")
0x2a6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a7: Pop(1)
0x2a8: Push(Stack[-1])
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2aa: Push("head")
0x2ab: @ UnlookAsync(Stack[-1])
0x2ac: Pop(1)
0x2ad: Return(); Pop(2)

0x2ae: PushEmpty(int, int, int, int)
0x2af: Push("voice_common")
0x2b0: @ GetVariable(Stack[-1], Stack[-3])
0x2b1: Pop(1)
0x2b2: Push(Stack[-2])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2b4: PushEmpty(bool, object)
0x2b5: Stack[-1] = Stack[-7]
0x2b6: Call2 0x2e8

0x2b7: Pop(1)
0x2b8: Pop(1); Push((bool) Stack[-1] == 0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2ba: PushEmpty(bool, object)
0x2bb: Stack[-1] = Stack[-7]
0x2bc: Call2 0x30d

0x2bd: Pop(1)
0x2be: Pop(1); Push((bool) Stack[-1] == 0)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-6] = (bool) 0
0x2c1: Return(); Pop(4)

0x2c2: Push((int) 2)
0x2c3: @ irand(Stack[-2], Stack[-1])
0x2c4: Pop(1)
0x2c5: Push(Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cf; Pop(1)

0x2c7: Push("voice_common")
0x2c8: Push((int) 1)
0x2c9: Pop(1); Push(Stack[-4] + Stack[-1]);
0x2ca: Push((int) 3)
0x2cb: Pop(2); Push(Stack[-2] % Stack[-1]);
0x2cc: @ SetVariable(Stack[-2], Stack[-1])
0x2cd: Pop(2)
0x2ce: GOTO 0x2d3

0x2cf: Push("voice_common")
0x2d0: Push((int) 0)
0x2d1: @ SetVariable(Stack[-2], Stack[-1])
0x2d2: Pop(2)
0x2d3: GOTO 0x2e6

0x2d4: PushEmpty(bool, object)
0x2d5: Stack[-1] = Stack[-7]
0x2d6: Call2 0x30d

0x2d7: Pop(1)
0x2d8: Pop(1); Push((bool) Stack[-1] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2da: PushEmpty(bool, object)
0x2db: Stack[-1] = Stack[-7]
0x2dc: Call2 0x2e8

0x2dd: Pop(1)
0x2de: Pop(1); Push((bool) Stack[-1] == 0)
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-6] = (bool) 0
0x2e1: Return(); Pop(4)

0x2e2: Push("voice_common")
0x2e3: Push((int) 1)
0x2e4: @ SetVariable(Stack[-2], Stack[-1])
0x2e5: Pop(2)
0x2e6: Stack[-6] = (bool) 1
0x2e7: Return(); Pop(4)

0x2e8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x2e9: Stack[-5] = "c"
0x2ea: Stack[-4] = (int) 0
0x2eb: Push((int) 1)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2ed: Push((int) 1)
0x2ee: Pop(1); Push(Stack[-5] + Stack[-1]);
0x2ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x2f0: @@ HasProperty(Stack[-1], Stack[-4])
0x2f1: Pop(1)
0x2f2: Pop(0); Push((bool) Stack[-3] == 0)
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: GOTO 0x2f8

0x2f5: Push((int) 1)
0x2f6: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x2f7: GOTO 0x2eb

0x2f8: Pop(0); Push((bool) Stack[-4] == 0)
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-12] = (bool) 0
0x2fb: Return(); Pop(10)

0x2fc: Stack[-2] = (int) 0
0x2fd: Push((int) 1)
0x2fe: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x2ff: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x300: @ irand(Stack[-2], Stack[-4])
0x301: Pop(0)
0x302: Push((int) 1)
0x303: Pop(1); Push(Stack[-3] + Stack[-1]);
0x304: Pop(1); Push(Stack[-6] + Stack[-1]);
0x305: @@ GetProperty(Stack[-1], Stack[-2])
0x306: Pop(1)
0x307: PushEmpty(bool, string)
0x308: Stack[-1] = Stack[-3]
0x309: Call2 0x357

0x30a: Stack[-14] = Stack[-2]
0x30b: Pop(2)
0x30c: Return(); Pop(10)

0x30d: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x30e: Push("d")
0x30f: PushEmpty(int)
0x310: Call2 0x382

0x311: Pop(0)
0x312: Pop(2); Push(Stack[-2] + Stack[-1]);
0x313: Push("m")
0x314: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x315: Stack[-4] = (int) 0
0x316: Push((int) 1)
0x317: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x318: Push((int) 1)
0x319: Pop(1); Push(Stack[-5] + Stack[-1]);
0x31a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x31b: @@ HasProperty(Stack[-1], Stack[-4])
0x31c: Pop(1)
0x31d: Pop(0); Push((bool) Stack[-3] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: GOTO 0x323

0x320: Push((int) 1)
0x321: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x322: GOTO 0x316

0x323: Pop(0); Push((bool) Stack[-4] == 0)
0x324: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x325: Stack[-12] = (bool) 0
0x326: Return(); Pop(10)

0x327: Stack[-2] = (int) 0
0x328: Push((int) 1)
0x329: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: @ irand(Stack[-2], Stack[-4])
0x32c: Pop(0)
0x32d: Push((int) 1)
0x32e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x32f: Pop(1); Push(Stack[-6] + Stack[-1]);
0x330: @@ GetProperty(Stack[-1], Stack[-2])
0x331: Pop(1)
0x332: PushEmpty(bool, string)
0x333: Stack[-1] = Stack[-3]
0x334: Call2 0x357

0x335: Stack[-14] = Stack[-2]
0x336: Pop(2)
0x337: Return(); Pop(10)

0x338: PushEmpty(bool, float, float, bool, float, float)
0x339: @ lshHasAnimation(Stack[-3], Stack[-7])
0x33a: Pop(0)
0x33b: Push(Stack[-3])
0x33c: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x33e: Pop(0)
0x33f: Push((bool) 0)
0x340: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(1)
0x342: GOTO 0x347

0x343: Push("Can't find lsh animation : ")
0x344: Pop(1); Push(Stack[-1] + Stack[-8]);
0x345: @ Trace(Stack[-1])
0x346: Pop(1)
0x347: Return(); Pop(6)

0x348: PushEmpty(bool, float, float, bool, float, float)
0x349: @ lshHasAnimation(Stack[-3], Stack[-8])
0x34a: Pop(0)
0x34b: Push(Stack[-3])
0x34c: IF (Stack[-1] == 0) GOTO 0x352; Pop(1)

0x34d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x34e: Pop(0)
0x34f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x350: Pop(0)
0x351: GOTO 0x356

0x352: Push("Can't find lsh animation : ")
0x353: Pop(1); Push(Stack[-1] + Stack[-9]);
0x354: @ Trace(Stack[-1])
0x355: Pop(1)
0x356: Return(); Pop(6)

0x357: PushEmpty(bool, bool)
0x358: PushEmpty(bool)
0x359: Call2 0x3e0

0x35a: Pop(0)
0x35b: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35c: @ lshHasSpeech(Stack[-1], Stack[-3])
0x35d: Pop(0)
0x35e: Push(Stack[-1])
0x35f: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x360: @ lshPlaySpeech(Stack[-3])
0x361: Pop(0)
0x362: Stack[-4] = (bool) 1
0x363: Return(); Pop(2)

0x364: Stack[-4] = (bool) 0
0x365: Return(); Pop(2)

0x366: PushEmpty(bool)
0x367: Call2 0x3e0

0x368: Pop(0)
0x369: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36a: @ lshStopSpeech()
0x36b: Pop(0)
0x36c: Return(); Pop(0)

0x36d: PushEmpty(object, object)
0x36e: @ self(Stack[-1])
0x36f: Pop(0)
0x370: Stack[-3] = Stack[-1]
0x371: Return(); Pop(2)

0x372: Stack[-1] = 0
0x373: PushEmpty(float, float)
0x374: Pop(0); Push(Stack[-3] | Stack[-3]);
0x375: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x376: Push((float)0.0)
0x377: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x378: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x379: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x37a: Return(); Pop(2)

0x37b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x37c: Return(); Pop(2)

0x37d: PushEmpty(int, int)
0x37e: @ GetVariable(Stack[-3], Stack[-1])
0x37f: Pop(0)
0x380: Stack[-4] = Stack[-1]
0x381: Return(); Pop(2)

0x382: PushEmpty(float, float)
0x383: @ GetGameTime(Stack[-1])
0x384: Pop(0)
0x385: Push((int) 1)
0x386: PushEmpty(int)
0x387: Push((int) 24)
0x388: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x389: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x38a: Return(); Pop(2)

0x38b: PushEmpty()
0x38c: Push("ook1Danko1")
0x38d: Push((int) 1)
0x38e: @ SetVariable(Stack[-2], Stack[-1])
0x38f: Pop(2)
0x390: Return(); Pop(0)

0x391: PushEmpty()
0x392: Push("ook1Danko2")
0x393: Push((int) 1)
0x394: @ SetVariable(Stack[-2], Stack[-1])
0x395: Pop(2)
0x396: Return(); Pop(0)

0x397: PushEmpty()
0x398: PushEmpty(int, string)
0x399: Stack[-1] = "k1q01"
0x39a: Call2 0x37d

0x39b: Pop(1)
0x39c: Push((int) 4)
0x39d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x39e: IF (Stack[-1] == 0) GOTO 0x3a1; Pop(1)

0x39f: Stack[-2] = (bool) 1
0x3a0: Return(); Pop(0)

0x3a1: Stack[-2] = (bool) 0
0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: PushEmpty(int, string)
0x3a5: Stack[-1] = "k1q01Healed"
0x3a6: Call2 0x37d

0x3a7: Pop(1)
0x3a8: Push((int) 0)
0x3a9: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x3aa: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ab: Stack[-2] = (bool) 1
0x3ac: Return(); Pop(0)

0x3ad: Stack[-2] = (bool) 0
0x3ae: Return(); Pop(0)

0x3af: PushEmpty()
0x3b0: PushEmpty(int, string)
0x3b1: Stack[-1] = "ook1Danko1"
0x3b2: Call2 0x37d

0x3b3: Pop(1)
0x3b4: Push((int) 0)
0x3b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-2] = (bool) 1
0x3b8: Return(); Pop(0)

0x3b9: Stack[-2] = (bool) 0
0x3ba: Return(); Pop(0)

0x3bb: PushEmpty()
0x3bc: PushEmpty(int, string)
0x3bd: Stack[-1] = "ook1Danko2"
0x3be: Call2 0x37d

0x3bf: Pop(1)
0x3c0: Push((int) 0)
0x3c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c5; Pop(1)

0x3c3: Stack[-2] = (bool) 1
0x3c4: Return(); Pop(0)

0x3c5: Stack[-2] = (bool) 0
0x3c6: Return(); Pop(0)

0x3c7: PushEmpty(int, int)
0x3c8: Push("branch")
0x3c9: @ GetVariable(Stack[-1], Stack[-2])
0x3ca: Pop(1)
0x3cb: Push((int) 0)
0x3cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cd: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3ce: Stack[-3] = (int) 1
0x3cf: Return(); Pop(2)

0x3d0: GOTO 0x3d6

0x3d1: Push((int) 1)
0x3d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3d4: Stack[-3] = (int) 2
0x3d5: Return(); Pop(2)

0x3d6: Stack[-3] = (int) 3
0x3d7: Return(); Pop(2)

0x3d8: Stack[-1] = (int) 515573
0x3d9: Return(); Pop(0)

0x3da: Stack[-1] = (int) 504032
0x3db: Return(); Pop(0)

0x3dc: Stack[-1] = "ui/NPC_Bakalavr.png"
0x3dd: Return(); Pop(0)

0x3de: Stack[-1] = "ui/NPC_Bakalavr_b.png"
0x3df: Return(); Pop(0)

0x3e0: Stack[-1] = (bool) 1
0x3e1: Return(); Pop(0)

