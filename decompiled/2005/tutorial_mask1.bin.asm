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
	tutorial_light_1
	Switch
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	HasAnimation (3 args)
	GetVariable (2 args)

RunOp = 0x196
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9f Vars = (int, int)
	GTASK_2 Vars = (bool, bool) Params = 0
		EVENT_0 Op = 0x19f Vars = (object)
		EVENT_26 Op = 0x1b1 Vars = (string)
		EVENT_5 Op = 0x1f7 Vars = ()
		EVENT_6 Op = 0x1fc Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x269

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x30e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x30c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x310

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x312

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x316

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
0x41: Call2 0x2ad

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
0x54: Push((int) 517861)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 517862)
0x5a: Push((int) 19000)
0x5b: Push((int) 18999)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 517880)
0x5f: Push((int) 19018)
0x60: Push((int) 19017)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 517884)
0x64: Push((int) 19023)
0x65: Push((int) 19022)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x6b

0x69: Return(); Pop(0)

0x6a: GOTO 0x4e

0x6b: PushEmpty(bool)
0x6c: Call2 0x314

0x6d: Pop(0)
0x6e: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x6f: @ lshWaitForAnimEnd()
0x70: Pop(0)
0x71: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: GOTO 0x79

0x74: PushEmpty(string)
0x75: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x76: Call2 0x2be

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
0x8b: Call2 0x314

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
0x9b: Call2 0x2ce

0x9c: Pop(2)
0x9d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9e: Return(); Pop(0)

0x9f: PushEmpty()
0xa0: Push((int) 1)
0xa1: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0xa2: PushEmpty()
0xa3: Call2 0x2dd

0xa4: Pop(0)
0xa5: Push((int) 18998)
0xa6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa7: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xa8: PushEmpty(string)
0xa9: Stack[-1] = "Neutral"
0xaa: Call2 0x89

0xab: Pop(1)
0xac: Push((int) 517861)
0xad: @@ SetMessage(Stack[-1])
0xae: Pop(1)
0xaf: @@ ClearReplies()
0xb0: Pop(0)
0xb1: Push((int) 517862)
0xb2: Push((int) 19000)
0xb3: Push((int) 18999)
0xb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5: Pop(3)
0xb6: Push((int) 517880)
0xb7: Push((int) 19018)
0xb8: Push((int) 19017)
0xb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba: Pop(3)
0xbb: Push((int) 517884)
0xbc: Push((int) 19023)
0xbd: Push((int) 19022)
0xbe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf: Pop(3)
0xc0: Return(); Pop(0)

0xc1: Push((int) 19023)
0xc2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd8; Pop(1)

0xc4: PushEmpty(string)
0xc5: Stack[-1] = "Neutral"
0xc6: Call2 0x89

0xc7: Pop(1)
0xc8: Push((int) 517885)
0xc9: @@ SetMessage(Stack[-1])
0xca: Pop(1)
0xcb: @@ ClearReplies()
0xcc: Pop(0)
0xcd: Push((int) 517886)
0xce: Push((int) 19018)
0xcf: Push((int) 19024)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Push((int) 517887)
0xd3: Push((int) 19000)
0xd4: Push((int) 19026)
0xd5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6: Pop(3)
0xd7: Return(); Pop(0)

0xd8: Push((int) 19018)
0xd9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0x89

0xde: Pop(1)
0xdf: Push((int) 517881)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 517882)
0xe5: Push((int) 19000)
0xe6: Push((int) 19019)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 517883)
0xea: Push((int) -1)
0xeb: Push((int) 19021)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 19000)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x89

0xf5: Pop(1)
0xf6: Push((int) 517863)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 517864)
0xfc: Push((int) 19002)
0xfd: Push((int) 19001)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 19002)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x89

0x107: Pop(1)
0x108: Push((int) 517865)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 517866)
0x10e: Push((int) 19004)
0x10f: Push((int) 19003)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Return(); Pop(0)

0x113: Push((int) 19004)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x116: PushEmpty(string)
0x117: Stack[-1] = "Neutral"
0x118: Call2 0x89

0x119: Pop(1)
0x11a: Push((int) 517867)
0x11b: @@ SetMessage(Stack[-1])
0x11c: Pop(1)
0x11d: @@ ClearReplies()
0x11e: Pop(0)
0x11f: Push((int) 517868)
0x120: Push((int) 19006)
0x121: Push((int) 19005)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 19006)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0x89

0x12b: Pop(1)
0x12c: Push((int) 517869)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 517870)
0x132: Push((int) 19008)
0x133: Push((int) 19007)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Push((int) 19008)
0x138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x139: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x13a: PushEmpty(string)
0x13b: Stack[-1] = "Neutral"
0x13c: Call2 0x89

0x13d: Pop(1)
0x13e: Push((int) 517871)
0x13f: @@ SetMessage(Stack[-1])
0x140: Pop(1)
0x141: @@ ClearReplies()
0x142: Pop(0)
0x143: Push((int) 517872)
0x144: Push((int) 19010)
0x145: Push((int) 19009)
0x146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x147: Pop(3)
0x148: Return(); Pop(0)

0x149: Push((int) 19010)
0x14a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14b: IF (Stack[-1] == 0) GOTO 0x15b; Pop(1)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Neutral"
0x14e: Call2 0x89

0x14f: Pop(1)
0x150: Push((int) 517873)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: Push((int) 517874)
0x156: Push((int) 19012)
0x157: Push((int) 19011)
0x158: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x159: Pop(3)
0x15a: Return(); Pop(0)

0x15b: Push((int) 19012)
0x15c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15d: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x15e: PushEmpty(string)
0x15f: Stack[-1] = "Neutral"
0x160: Call2 0x89

0x161: Pop(1)
0x162: Push((int) 517875)
0x163: @@ SetMessage(Stack[-1])
0x164: Pop(1)
0x165: @@ ClearReplies()
0x166: Pop(0)
0x167: Push((int) 517876)
0x168: Push((int) -1)
0x169: Push((int) 19013)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 517877)
0x16d: Push((int) -1)
0x16e: Push((int) 19014)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 517878)
0x172: Push((int) 19016)
0x173: Push((int) 19015)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: Return(); Pop(0)

0x177: Push((int) 19016)
0x178: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x179: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x17a: PushEmpty(string)
0x17b: Stack[-1] = "Neutral"
0x17c: Call2 0x89

0x17d: Pop(1)
0x17e: Push((int) 517879)
0x17f: @@ SetMessage(Stack[-1])
0x180: Pop(1)
0x181: @@ ClearReplies()
0x182: Pop(0)
0x183: Push((int) 517888)
0x184: Push((int) -1)
0x185: Push((int) 19028)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x314

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0xa0

0x195: Return(); Pop(0)

0x196: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x197: PushEmpty(bool)
0x198: Stack[-1] = (bool) 1
0x199: Call2 0x1be

0x19a: Pop(1)
0x19b: PushEmpty()
0x19c: Call2 0x1c6

0x19d: Pop(0)
0x19e: Return(); Pop(0)

0x19f: PushEmpty()
0x1a0: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a2: PushEmpty()
0x1a3: Call2 0x25f

0x1a4: Pop(0)
0x1a5: PushEmpty(int, object)
0x1a6: Stack[-1] = Stack[-3]
0x1a7: Push(-2, 1); TaskCall(0)
0x1a8: Call2 0x0

0x1a9: Pop(-2, 1); TaskReturn
0x1aa: Pop(2)
0x1ab: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x1ac: PushEmpty(string)
0x1ad: Stack[-1] = "cleanup"
0x1ae: Call2 0x1b1

0x1af: Pop(1)
0x1b0: Return(); Pop(0)

0x1b1: PushEmpty()
0x1b2: Push("cleanup")
0x1b3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 0
0x1b7: Call2 0x1be

0x1b8: Pop(1)
0x1b9: PushEmpty(string)
0x1ba: Stack[-1] = Stack[-2]
0x1bb: Call2 0x1ef

0x1bc: Pop(1)
0x1bd: Return(); Pop(0)

0x1be: PushEmpty(object, object)
0x1bf: Push("tutorial_light_1")
0x1c0: @ FindActor(Stack[-2], Stack[-1])
0x1c1: Pop(1)
0x1c2: @@ Switch(Stack[-3])
0x1c3: Pop(0)
0x1c4: Return(); Pop(2)

0x1c5: Stack[-1] = 0
0x1c6: PushEmpty(float, float)
0x1c7: PushEmpty(bool)
0x1c8: Call2 0x264

0x1c9: Pop(0)
0x1ca: Pop(1); Push((bool) Stack[-1] == 0)
0x1cb: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1cc: @ Hold()
0x1cd: Pop(0)
0x1ce: GOTO 0x1c7

0x1cf: Push((int) 3)
0x1d0: @ rand(Stack[-2], Stack[-1])
0x1d1: Pop(1)
0x1d2: Push((int) 3)
0x1d3: Pop(1); Push(Stack[-2] + Stack[-1]);
0x1d4: @ Sleep(Stack[-1])
0x1d5: Pop(1)
0x1d6: PushEmpty()
0x1d7: Call2 0x20e

0x1d8: Pop(0)
0x1d9: GOTO 0x1c7

0x1da: Return(); Pop(2)

0x1db: PushEmpty(bool, bool)
0x1dc: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x1dd: @ IsLoaded(Stack[-1])
0x1de: Pop(0)
0x1df: PushEmpty(bool)
0x1e0: Stack[-1] = (bool) 0
0x1e1: Pop(0); Push((bool) Stack[-2] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e3: PushEmpty(bool)
0x1e4: Call2 0x20c

0x1e5: Pop(0)
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: Stack[-1] = (bool) 1
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e9: PushEmpty(object)
0x1ea: Call2 0x2e4

0x1eb: Pop(0)
0x1ec: @ RemoveActor(Stack[-1])
0x1ed: Pop(1)
0x1ee: Return(); Pop(2)

0x1ef: PushEmpty()
0x1f0: Push("cleanup")
0x1f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x1f3: PushEmpty()
0x1f4: Call2 0x1db

0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: @ StopGroup0()
0x1f8: Pop(0)
0x1f9: @ sync()
0x1fa: Pop(0)
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty(bool)
0x1fd: Stack[-1] = (bool) 0
0x1fe: Push( Stack[0 + Tasks[-1].StackPointer] )
0x1ff: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x200: PushEmpty(bool)
0x201: Call2 0x20c

0x202: Pop(0)
0x203: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x204: Stack[-1] = (bool) 1
0x205: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x206: PushEmpty(object)
0x207: Call2 0x2e4

0x208: Pop(0)
0x209: @ RemoveActor(Stack[-1])
0x20a: Pop(1)
0x20b: Return(); Pop(0)

0x20c: Stack[-1] = (bool) 1
0x20d: Return(); Pop(0)

0x20e: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x20f: @ WaitForAnimEnd()
0x210: Pop(0)
0x211: PushEmpty(bool)
0x212: Call2 0x264

0x213: Pop(0)
0x214: Pop(1); Push((bool) Stack[-1] == 0)
0x215: IF (Stack[-1] == 0) GOTO 0x217; Pop(1)

0x216: Return(); Pop(14)

0x217: PushEmpty(int)
0x218: Call2 0x2fb

0x219: Stack[-8] = Stack[-1]
0x21a: Pop(1)
0x21b: Stack[-6] = (int) 0
0x21c: PushEmpty(bool)
0x21d: Stack[-1] = (bool) 0
0x21e: Push((int) 5)
0x21f: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x220: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x221: PushEmpty(bool)
0x222: Call2 0x264

0x223: Pop(0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: Stack[-1] = (bool) 1
0x226: IF (Stack[-1] == 0) GOTO 0x25a; Pop(1)

0x227: Push((int) 3)
0x228: @ irand(Stack[-6], Stack[-1])
0x229: Pop(1)
0x22a: Push((int) 0)
0x22b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x22d: Push(Stack[-7])
0x22e: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x22f: @ irand(Stack[-4], Stack[-7])
0x230: Pop(0)
0x231: Push("all")
0x232: PushEmpty(string, int)
0x233: Stack[-1] = Stack[-7]
0x234: Call2 0x2f4

0x235: Pop(1)
0x236: @ PlayAnimation(Stack[-2], Stack[-1])
0x237: Pop(2)
0x238: @ WaitForAnimEnd(Stack[-3])
0x239: Pop(0)
0x23a: Pop(0); Push((bool) Stack[-3] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x23c: GOTO 0x25a

0x23d: GOTO 0x24f

0x23e: Push((int) 1)
0x23f: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x241: Push((int) 4)
0x242: @ rand(Stack[-3], Stack[-1])
0x243: Pop(1)
0x244: Push((int) 1)
0x245: Pop(1); Push(Stack[-3] + Stack[-1]);
0x246: @ Sleep(Stack[-1], Stack[-2])
0x247: Pop(1)
0x248: Pop(0); Push((bool) Stack[-1] == 0)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x25a

0x24b: GOTO 0x24f

0x24c: Push(Stack[-6])
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: GOTO 0x25a

0x24f: PushEmpty(bool)
0x250: Call2 0x25d

0x251: Pop(0)
0x252: Pop(1); Push((bool) Stack[-1] == 0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: GOTO 0x25a

0x255: @ ResetAAS()
0x256: Pop(0)
0x257: Push((int) 1)
0x258: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x259: GOTO 0x21c

0x25a: @ ResetAAS()
0x25b: Pop(0)
0x25c: Return(); Pop(14)

0x25d: Stack[-1] = (bool) 1
0x25e: Return(); Pop(0)

0x25f: @ StopAnimation()
0x260: Pop(0)
0x261: @ StopGroup0()
0x262: Pop(0)
0x263: Return(); Pop(0)

0x264: PushEmpty(bool, bool)
0x265: @ IsLoaded(Stack[-1])
0x266: Pop(0)
0x267: Stack[-3] = Stack[-1]
0x268: Return(); Pop(2)

0x269: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x26a: @@ GetPosition(Stack[-8])
0x26b: Pop(0)
0x26c: @@ GetEyesHeight(Stack[-9])
0x26d: Pop(0)
0x26e: Push(CvectorIndex(Stack[-8], 1))
0x26f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x270: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x271: @ GetPosition(Stack[-7])
0x272: Pop(0)
0x273: @ GetEyesHeight(Stack[-9])
0x274: Pop(0)
0x275: Push(CvectorIndex(Stack[-7], 1))
0x276: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x277: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x278: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x279: Push(CvectorIndex(Stack[-6], 1))
0x27a: Stack[-1] = (int) 0
0x27b: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x27c: Pop(0); Push(Stack[-6] | Stack[-6]);
0x27d: Pop(1); Push(Sqrt(Stack[-1]))
0x27e: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x27f: Stack[-5] = -Stack[-6]; Pop(0);
0x280: Pop(0); Push(Stack[-6] * Stack[-19]);
0x281: PushEmpty(cvector, cvector)
0x282: Push(CVector(0.0, 1.0, 0.0))
0x283: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x284: Call2 0x2ea

0x285: Pop(1)
0x286: Push((int) 25)
0x287: Pop(2); Push(Stack[-2] * Stack[-1]);
0x288: Pop(2); Push(Stack[-2] + Stack[-1]);
0x289: Push(CVector(0.0, 10.0, 0.0))
0x28a: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x28b: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x28c: @ IsOverrideActive(Stack[-2])
0x28d: Pop(0)
0x28e: Push(Stack[-2])
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: Stack[-21] = (bool) 0
0x291: Return(); Pop(18)

0x292: @ StopWorld()
0x293: Pop(0)
0x294: @ CameraTransit(Stack[-3], Stack[-5])
0x295: Pop(0)
0x296: Push(CvectorIndex(Stack[-4], 0))
0x297: Push(CvectorIndex(Stack[-5], 2))
0x298: @ Rotate(Stack[-2], Stack[-1])
0x299: Pop(2)
0x29a: PushEmpty(bool)
0x29b: Call2 0x314

0x29c: Pop(0)
0x29d: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29e: GOTO 0x2a7

0x29f: Push("head")
0x2a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a1: Pop(1)
0x2a2: Push(Stack[-1])
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a4: Push("head")
0x2a5: @ LookAsyncCamera(Stack[-1])
0x2a6: Pop(1)
0x2a7: @ CameraWaitForPlayFinish()
0x2a8: Pop(0)
0x2a9: @ ResumeWorld()
0x2aa: Pop(0)
0x2ab: Stack[-21] = (bool) 1
0x2ac: Return(); Pop(18)

0x2ad: PushEmpty(bool, bool)
0x2ae: @ CameraSwitchToNormal()
0x2af: Pop(0)
0x2b0: PushEmpty(bool)
0x2b1: Call2 0x314

0x2b2: Pop(0)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: GOTO 0x2bd

0x2b5: Push("head")
0x2b6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2b7: Pop(1)
0x2b8: Push(Stack[-1])
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: Push("head")
0x2bb: @ UnlookAsync(Stack[-1])
0x2bc: Pop(1)
0x2bd: Return(); Pop(2)

0x2be: PushEmpty(bool, float, float, bool, float, float)
0x2bf: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2c0: Pop(0)
0x2c1: Push(Stack[-3])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2c4: Pop(0)
0x2c5: Push((bool) 0)
0x2c6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2c7: Pop(1)
0x2c8: GOTO 0x2cd

0x2c9: Push("Can't find lsh animation : ")
0x2ca: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2cb: @ Trace(Stack[-1])
0x2cc: Pop(1)
0x2cd: Return(); Pop(6)

0x2ce: PushEmpty(bool, float, float, bool, float, float)
0x2cf: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2d0: Pop(0)
0x2d1: Push(Stack[-3])
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2d4: Pop(0)
0x2d5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2d6: Pop(0)
0x2d7: GOTO 0x2dc

0x2d8: Push("Can't find lsh animation : ")
0x2d9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2da: @ Trace(Stack[-1])
0x2db: Pop(1)
0x2dc: Return(); Pop(6)

0x2dd: PushEmpty(bool)
0x2de: Call2 0x314

0x2df: Pop(0)
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e1: @ lshStopSpeech()
0x2e2: Pop(0)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty(object, object)
0x2e5: @ self(Stack[-1])
0x2e6: Pop(0)
0x2e7: Stack[-3] = Stack[-1]
0x2e8: Return(); Pop(2)

0x2e9: Stack[-1] = 0
0x2ea: PushEmpty(float, float)
0x2eb: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2ec: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ed: Push((float)0.0)
0x2ee: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2f1: Return(); Pop(2)

0x2f2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2f3: Return(); Pop(2)

0x2f4: PushEmpty(string, string)
0x2f5: Stack[-1] = "idle"
0x2f6: Push(Stack[-3])
0x2f7: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f8: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f9: Stack[-4] = Stack[-1]
0x2fa: Return(); Pop(2)

0x2fb: PushEmpty(int, bool, int, bool)
0x2fc: Stack[-2] = (int) 0
0x2fd: Push("all")
0x2fe: PushEmpty(string, int)
0x2ff: Stack[-1] = Stack[-5]
0x300: Call2 0x2f4

0x301: Pop(1)
0x302: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x303: Pop(2)
0x304: Pop(0); Push((bool) Stack[-1] == 0)
0x305: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x306: GOTO 0x30a

0x307: Push((int) 1)
0x308: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x309: GOTO 0x2fd

0x30a: Stack[-5] = Stack[-2]
0x30b: Return(); Pop(4)

0x30c: Stack[-1] = (int) 515571
0x30d: Return(); Pop(0)

0x30e: Stack[-1] = (int) 504029
0x30f: Return(); Pop(0)

0x310: Stack[-1] = "ui/NPC_bmask.png"
0x311: Return(); Pop(0)

0x312: Stack[-1] = "ui/NPC_bmask_b.png"
0x313: Return(); Pop(0)

0x314: Stack[-1] = (bool) 0
0x315: Return(); Pop(0)

0x316: PushEmpty(int, int)
0x317: Push("branch")
0x318: @ GetVariable(Stack[-1], Stack[-2])
0x319: Pop(1)
0x31a: Push((int) 0)
0x31b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31d: Stack[-3] = (int) 1
0x31e: Return(); Pop(2)

0x31f: GOTO 0x325

0x320: Push((int) 1)
0x321: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x322: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x323: Stack[-3] = (int) 2
0x324: Return(); Pop(2)

0x325: Stack[-3] = (int) 3
0x326: Return(); Pop(2)

