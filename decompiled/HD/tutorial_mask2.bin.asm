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
	tutorial_light_2
	Switch
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ui/NPC_wmask.png
	ui/NPC_wmask_b.png
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
	FindActor (2 args)
	Hold (0 args)
	rand (2 args)
	Sleep (1 args)
	IsLoaded (1 args)
	RemoveActor (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x189
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x192 Vars = (object)
		EVENT_26 Op = 0x1a4 Vars = (string)
		EVENT_5 Op = 0x1ea Vars = ()
		EVENT_6 Op = 0x1ef Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x25c

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x303

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x301

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x305

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x307

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x30b

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
0x41: Call2 0x2a1

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
0x4f: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x89

0x53: Pop(1)
0x54: Push((int) 517835)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 517836)
0x5a: Push((int) 18972)
0x5b: Push((int) 18971)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 517855)
0x5f: Push((int) 18992)
0x60: Push((int) 18991)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 517859)
0x64: Push((int) -1)
0x65: Push((int) 18996)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x309

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2b3

0x77: Pop(1)
0x78: GOTO 0x6f

0x79: GOTO 0x88

0x7a: Push("all")
0x7b: Push("idle")
0x7c: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d: Pop(2)
0x7e: @ WaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: Push("all")
0x84: Push("idle")
0x85: @ PlayAnimation(Stack[-2], Stack[-1])
0x86: Pop(2)
0x87: GOTO 0x7e

0x88: Return(); Pop(0)

0x89: PushEmpty()
0x8a: PushEmpty(bool)
0x8b: Call2 0x309

0x8c: Pop(0)
0x8d: Pop(1); Push((bool) Stack[-1] == 0)
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: Return(); Pop(0)

0x90: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: Return(); Pop(0)

0x93: PushEmpty(string, bool)
0x94: Stack[-2] = Stack[-3]
0x95: Push("")
0x96: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: GOTO 0x9b

0x9a: Stack[-1] = (bool) 1
0x9b: Call2 0x2c3

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x188; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2d2

0xa4: Pop(0)
0xa5: Push((int) 18970)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral"
0xaa: Call2 0x89

0xab: Pop(1)
0xac: Push((int) 517835)
0xad: @@ SetMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ ClearReplies()
0xb0: Pop(0)
0xb1: Push((int) 517836)
0xb2: Push((int) 18972)
0xb3: Push((int) 18971)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Push((int) 517855)
0xb7: Push((int) 18992)
0xb8: Push((int) 18991)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 517859)
0xbc: Push((int) -1)
0xbd: Push((int) 18996)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 18992)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 517856)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 517857)
0xce: Push((int) 18972)
0xcf: Push((int) 18993)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 517858)
0xd3: Push((int) -1)
0xd4: Push((int) 18995)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 18972)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0x89

0xde: Pop(1)
0xdf: Push((int) 517837)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 517838)
0xe5: Push((int) 18974)
0xe6: Push((int) 18973)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 517854)
0xea: Push((int) 18974)
0xeb: Push((int) 18989)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 18974)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x89

0xf5: Pop(1)
0xf6: Push((int) 517839)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 517840)
0xfc: Push((int) 18976)
0xfd: Push((int) 18975)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 532787)
0x101: Push((int) -1)
0x102: Push((int) 34258)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 18976)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x89

0x10c: Pop(1)
0x10d: Push((int) 517841)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 517842)
0x113: Push((int) 18978)
0x114: Push((int) 18977)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 18978)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x89

0x11e: Pop(1)
0x11f: Push((int) 517843)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 517844)
0x125: Push((int) 18980)
0x126: Push((int) 18979)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 532788)
0x12a: Push((int) -1)
0x12b: Push((int) 34259)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 18980)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x89

0x135: Pop(1)
0x136: Push((int) 517845)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 517846)
0x13c: Push((int) 18982)
0x13d: Push((int) 18981)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 18982)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x153; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0x89

0x147: Pop(1)
0x148: Push((int) 517847)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 517848)
0x14e: Push((int) 18984)
0x14f: Push((int) 18983)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Return(); Pop(0)

0x153: Push((int) 18984)
0x154: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x155: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x156: PushEmpty(string)
0x157: Stack[-1] = "Neutral"
0x158: Call2 0x89

0x159: Pop(1)
0x15a: Push((int) 517849)
0x15b: @@ SetMessage(Stack[-1])
0x15c: Pop(1)
0x15d: @@ ClearReplies()
0x15e: Pop(0)
0x15f: Push((int) 517850)
0x160: Push((int) 18986)
0x161: Push((int) 18985)
0x162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x163: Pop(3)
0x164: Push((int) 517853)
0x165: Push((int) -1)
0x166: Push((int) 18988)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Return(); Pop(0)

0x16a: Push((int) 18986)
0x16b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16c: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x16d: PushEmpty(string)
0x16e: Stack[-1] = "Neutral"
0x16f: Call2 0x89

0x170: Pop(1)
0x171: Push((int) 517851)
0x172: @@ SetMessage(Stack[-1])
0x173: Pop(1)
0x174: @@ ClearReplies()
0x175: Pop(0)
0x176: Push((int) 517852)
0x177: Push((int) -1)
0x178: Push((int) 18987)
0x179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17a: Pop(3)
0x17b: Return(); Pop(0)

0x17c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x17d: PushEmpty(bool)
0x17e: Call2 0x309

0x17f: Pop(0)
0x180: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x181: @ lshStopAnimation()
0x182: Pop(0)
0x183: GOTO 0x186

0x184: @ StopAnimation()
0x185: Pop(0)
0x186: Return(); Pop(0)

0x187: GOTO 0xa0

0x188: Return(); Pop(0)

0x189: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x18a: PushEmpty(bool)
0x18b: Stack[-1] = (bool) 1
0x18c: Call2 0x1b1

0x18d: Pop(1)
0x18e: PushEmpty()
0x18f: Call2 0x1b9

0x190: Pop(0)
0x191: Return(); Pop(0)

0x192: PushEmpty()
0x193: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x194: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x195: PushEmpty()
0x196: Call2 0x252

0x197: Pop(0)
0x198: PushEmpty(int, object)
0x199: Stack[-1] = Stack[-3]
0x19a: Push(-2, 1); TaskCall(0)
0x19b: Call2 0x0

0x19c: Pop(-2, 1); TaskReturn
0x19d: Pop(2)
0x19e: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x19f: PushEmpty(string)
0x1a0: Stack[-1] = "cleanup"
0x1a1: Call2 0x1a4

0x1a2: Pop(1)
0x1a3: Return(); Pop(0)

0x1a4: PushEmpty()
0x1a5: Push("cleanup")
0x1a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: Call2 0x1b1

0x1ab: Pop(1)
0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = Stack[-2]
0x1ae: Call2 0x1e2

0x1af: Pop(1)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(object, object)
0x1b2: Push("tutorial_light_2")
0x1b3: @ FindActor(Stack[-2], Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ Switch(Stack[-3])
0x1b6: Pop(0)
0x1b7: Return(); Pop(2)

0x1b8: Stack[-1] = 0
0x1b9: PushEmpty(float, float)
0x1ba: PushEmpty(bool)
0x1bb: Call2 0x257

0x1bc: Pop(0)
0x1bd: Pop(1); Push((bool) Stack[-1] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bf: @ Hold()
0x1c0: Pop(0)
0x1c1: GOTO 0x1ba

0x1c2: Push((int) 3)
0x1c3: @ rand(Stack[-2], Stack[-1])
0x1c4: Pop(1)
0x1c5: Push((int) 3)
0x1c6: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1c7: @ Sleep(Stack[-1])
0x1c8: Pop(1)
0x1c9: PushEmpty()
0x1ca: Call2 0x201

0x1cb: Pop(0)
0x1cc: GOTO 0x1ba

0x1cd: Return(); Pop(2)

0x1ce: PushEmpty(bool, bool)
0x1cf: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1d0: @ IsLoaded(Stack[-1])
0x1d1: Pop(0)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: Pop(0); Push((bool) Stack[-2] == 0)
0x1d5: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x1ff

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Stack[-1] = (bool) 1
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(object)
0x1dd: Call2 0x2d9

0x1de: Pop(0)
0x1df: @ RemoveActor(Stack[-1])
0x1e0: Pop(1)
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty()
0x1e3: Push("cleanup")
0x1e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1e9; Pop(1)

0x1e6: PushEmpty()
0x1e7: Call2 0x1ce

0x1e8: Pop(0)
0x1e9: Return(); Pop(0)

0x1ea: @ StopGroup0()
0x1eb: Pop(0)
0x1ec: @ sync()
0x1ed: Pop(0)
0x1ee: Return(); Pop(0)

0x1ef: PushEmpty(bool)
0x1f0: Stack[-1] = (bool) 0
0x1f1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: PushEmpty(bool)
0x1f4: Call2 0x1ff

0x1f5: Pop(0)
0x1f6: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f7: Stack[-1] = (bool) 1
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1f9: PushEmpty(object)
0x1fa: Call2 0x2d9

0x1fb: Pop(0)
0x1fc: @ RemoveActor(Stack[-1])
0x1fd: Pop(1)
0x1fe: Return(); Pop(0)

0x1ff: Stack[-1] = (bool) 1
0x200: Return(); Pop(0)

0x201: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x202: @ WaitForAnimEnd()
0x203: Pop(0)
0x204: PushEmpty(bool)
0x205: Call2 0x257

0x206: Pop(0)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x209: Return(); Pop(14)

0x20a: PushEmpty(int)
0x20b: Call2 0x2f0

0x20c: Stack[-8] = Stack[-1]
0x20d: Pop(1)
0x20e: Stack[-6] = (int) 0
0x20f: PushEmpty(bool)
0x210: Stack[-1] = (bool) 0
0x211: Push((int) 5)
0x212: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x213: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x214: PushEmpty(bool)
0x215: Call2 0x257

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: Stack[-1] = (bool) 1
0x219: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x21a: Push((int) 3)
0x21b: @ irand(Stack[-6], Stack[-1])
0x21c: Pop(1)
0x21d: Push((int) 0)
0x21e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x231; Pop(1)

0x220: Push(Stack[-7])
0x221: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x222: @ irand(Stack[-4], Stack[-7])
0x223: Pop(0)
0x224: Push("all")
0x225: PushEmpty(string, int)
0x226: Stack[-1] = Stack[-7]
0x227: Call2 0x2e9

0x228: Pop(1)
0x229: @ PlayAnimation(Stack[-2], Stack[-1])
0x22a: Pop(2)
0x22b: @ WaitForAnimEnd(Stack[-3])
0x22c: Pop(0)
0x22d: Pop(0); Push((bool) Stack[-3] == 0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x24d

0x230: GOTO 0x242

0x231: Push((int) 1)
0x232: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x233: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x234: Push((int) 4)
0x235: @ rand(Stack[-3], Stack[-1])
0x236: Pop(1)
0x237: Push((int) 1)
0x238: Pop(1); Push(Stack[-3] + Stack[-1]);
0x239: @ Sleep(Stack[-1], Stack[-2])
0x23a: Pop(1)
0x23b: Pop(0); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x24d

0x23e: GOTO 0x242

0x23f: Push(Stack[-6])
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: GOTO 0x24d

0x242: PushEmpty(bool)
0x243: Call2 0x250

0x244: Pop(0)
0x245: Pop(1); Push((bool) Stack[-1] == 0)
0x246: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x247: GOTO 0x24d

0x248: @ ResetAAS()
0x249: Pop(0)
0x24a: Push((int) 1)
0x24b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x24c: GOTO 0x20f

0x24d: @ ResetAAS()
0x24e: Pop(0)
0x24f: Return(); Pop(14)

0x250: Stack[-1] = (bool) 1
0x251: Return(); Pop(0)

0x252: @ StopAnimation()
0x253: Pop(0)
0x254: @ StopGroup0()
0x255: Pop(0)
0x256: Return(); Pop(0)

0x257: PushEmpty(bool, bool)
0x258: @ IsLoaded(Stack[-1])
0x259: Pop(0)
0x25a: Stack[-3] = Stack[-1]
0x25b: Return(); Pop(2)

0x25c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x25d: @@ GetPosition(Stack[-8])
0x25e: Pop(0)
0x25f: @@ GetEyesHeight(Stack[-9])
0x260: Pop(0)
0x261: Push(CvectorIndex(Stack[-8], 1))
0x262: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x263: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x264: @ GetPosition(Stack[-7])
0x265: Pop(0)
0x266: @ GetEyesHeight(Stack[-9])
0x267: Pop(0)
0x268: Push(CvectorIndex(Stack[-7], 1))
0x269: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x26a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x26b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x26c: Push(CvectorIndex(Stack[-6], 1))
0x26d: Stack[-1] = (int) 0
0x26e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x26f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x270: Pop(1); Push(Sqrt(Stack[-1]))
0x271: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x272: Stack[-5] = -Stack[-6]; Pop(0);
0x273: Pop(0); Push(Stack[-6] * Stack[-19]);
0x274: PushEmpty(cvector, cvector)
0x275: Push(CVector(0.0, 1.0, 0.0))
0x276: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x277: Call2 0x2df

0x278: Pop(1)
0x279: Push((int) 25)
0x27a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x27b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x27c: Push(CVector(0.0, 10.0, 0.0))
0x27d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x27e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x27f: @ IsOverrideActive(Stack[-2])
0x280: Pop(0)
0x281: Push(Stack[-2])
0x282: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x283: Stack[-21] = (bool) 0
0x284: Return(); Pop(18)

0x285: @ StopWorld()
0x286: Pop(0)
0x287: Push((bool) 1)
0x288: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x289: Pop(1)
0x28a: Push(CvectorIndex(Stack[-4], 0))
0x28b: Push(CvectorIndex(Stack[-5], 2))
0x28c: @ Rotate(Stack[-2], Stack[-1])
0x28d: Pop(2)
0x28e: PushEmpty(bool)
0x28f: Call2 0x309

0x290: Pop(0)
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: GOTO 0x29b

0x293: Push("head")
0x294: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x295: Pop(1)
0x296: Push(Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29b; Pop(1)

0x298: Push("head")
0x299: @ LookAsyncCamera(Stack[-1])
0x29a: Pop(1)
0x29b: @ CameraWaitForPlayFinish()
0x29c: Pop(0)
0x29d: @ ResumeWorld()
0x29e: Pop(0)
0x29f: Stack[-21] = (bool) 1
0x2a0: Return(); Pop(18)

0x2a1: PushEmpty(bool, bool)
0x2a2: Push((bool) 1)
0x2a3: @ CameraSwitchToNormal(Stack[-1])
0x2a4: Pop(1)
0x2a5: PushEmpty(bool)
0x2a6: Call2 0x309

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: GOTO 0x2b2

0x2aa: Push("head")
0x2ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ac: Pop(1)
0x2ad: Push(Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: Push("head")
0x2b0: @ UnlookAsync(Stack[-1])
0x2b1: Pop(1)
0x2b2: Return(); Pop(2)

0x2b3: PushEmpty(bool, float, float, bool, float, float)
0x2b4: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2b5: Pop(0)
0x2b6: Push(Stack[-3])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b8: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2b9: Pop(0)
0x2ba: Push((bool) 0)
0x2bb: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2bc: Pop(1)
0x2bd: GOTO 0x2c2

0x2be: Push("Can't find lsh animation : ")
0x2bf: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2c0: @ Trace(Stack[-1])
0x2c1: Pop(1)
0x2c2: Return(); Pop(6)

0x2c3: PushEmpty(bool, float, float, bool, float, float)
0x2c4: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2c5: Pop(0)
0x2c6: Push(Stack[-3])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c8: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2c9: Pop(0)
0x2ca: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2cb: Pop(0)
0x2cc: GOTO 0x2d1

0x2cd: Push("Can't find lsh animation : ")
0x2ce: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2cf: @ Trace(Stack[-1])
0x2d0: Pop(1)
0x2d1: Return(); Pop(6)

0x2d2: PushEmpty(bool)
0x2d3: Call2 0x309

0x2d4: Pop(0)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: @ lshStopSpeech()
0x2d7: Pop(0)
0x2d8: Return(); Pop(0)

0x2d9: PushEmpty(object, object)
0x2da: @ self(Stack[-1])
0x2db: Pop(0)
0x2dc: Stack[-3] = Stack[-1]
0x2dd: Return(); Pop(2)

0x2de: Stack[-1] = 0
0x2df: PushEmpty(float, float)
0x2e0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2e1: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2e2: Push((float)0.0)
0x2e3: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2e6: Return(); Pop(2)

0x2e7: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2e8: Return(); Pop(2)

0x2e9: PushEmpty(string, string)
0x2ea: Stack[-1] = "idle"
0x2eb: Push(Stack[-3])
0x2ec: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2ed: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2ee: Stack[-4] = Stack[-1]
0x2ef: Return(); Pop(2)

0x2f0: PushEmpty(int, bool, int, bool)
0x2f1: Stack[-2] = (int) 0
0x2f2: Push("all")
0x2f3: PushEmpty(string, int)
0x2f4: Stack[-1] = Stack[-5]
0x2f5: Call2 0x2e9

0x2f6: Pop(1)
0x2f7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(2)
0x2f9: Pop(0); Push((bool) Stack[-1] == 0)
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fb: GOTO 0x2ff

0x2fc: Push((int) 1)
0x2fd: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2fe: GOTO 0x2f2

0x2ff: Stack[-5] = Stack[-2]
0x300: Return(); Pop(4)

0x301: Stack[-1] = (int) 515569
0x302: Return(); Pop(0)

0x303: Stack[-1] = (int) 503354
0x304: Return(); Pop(0)

0x305: Stack[-1] = "ui/NPC_wmask.png"
0x306: Return(); Pop(0)

0x307: Stack[-1] = "ui/NPC_wmask_b.png"
0x308: Return(); Pop(0)

0x309: Stack[-1] = (bool) 0
0x30a: Return(); Pop(0)

0x30b: PushEmpty(int, int)
0x30c: Push("branch")
0x30d: @ GetVariable(Stack[-1], Stack[-2])
0x30e: Pop(1)
0x30f: Push((int) 0)
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x312: Stack[-3] = (int) 1
0x313: Return(); Pop(2)

0x314: GOTO 0x31a

0x315: Push((int) 1)
0x316: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x317: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x318: Stack[-3] = (int) 2
0x319: Return(); Pop(2)

0x31a: Stack[-3] = (int) 3
0x31b: Return(); Pop(2)

