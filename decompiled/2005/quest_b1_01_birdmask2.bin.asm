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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_bmask.png
	ui/NPC_bmask_b.png
	oob1Birdmask2_1
	quest_b1_01
	remove2
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
	Sleep (1 args)
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)

RunOp = 0x17e
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x188 Vars = (object)
		EVENT_7 Op = 0x1bd Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x245

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2e8

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2e6

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2ea

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2ec

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x31f

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
0x41: Call2 0x289

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x313

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0x308

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0x9d

0x5d: Pop(1)
0x5e: Push((int) 518122)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 518123)
0x64: Push((int) 19396)
0x65: Push((int) 19242)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 520035)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 520036)
0x73: Push((int) -1)
0x74: Push((int) 21221)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 527021)
0x78: Push((int) -1)
0x79: Push((int) 28305)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x2ee

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x29a

0x8b: Pop(1)
0x8c: GOTO 0x83

0x8d: GOTO 0x9c

0x8e: Push("all")
0x8f: Push("idle")
0x90: @ PlayAnimation(Stack[-2], Stack[-1])
0x91: Pop(2)
0x92: @ WaitForAnimEnd()
0x93: Pop(0)
0x94: Push( Stack[3 + Tasks[-1].StackPointer] )
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: GOTO 0x9c

0x97: Push("all")
0x98: Push("idle")
0x99: @ PlayAnimation(Stack[-2], Stack[-1])
0x9a: Pop(2)
0x9b: GOTO 0x92

0x9c: Return(); Pop(0)

0x9d: PushEmpty()
0x9e: PushEmpty(bool)
0x9f: Call2 0x2ee

0xa0: Pop(0)
0xa1: Pop(1); Push((bool) Stack[-1] == 0)
0xa2: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa3: Return(); Pop(0)

0xa4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: Return(); Pop(0)

0xa7: PushEmpty(string, bool)
0xa8: Stack[-2] = Stack[-3]
0xa9: Push("")
0xaa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xab: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xac: Stack[-1] = (bool) 0
0xad: GOTO 0xaf

0xae: Stack[-1] = (bool) 1
0xaf: Call2 0x2aa

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2c4

0xb8: Pop(0)
0xb9: Push((int) 19241)
0xba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xbc: PushEmpty(bool, object)
0xbd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Call2 0x313

0xbf: Pop(1)
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x308

0xc5: Pop(2)
0xc6: PushEmpty(string)
0xc7: Stack[-1] = "Neutral"
0xc8: Call2 0x9d

0xc9: Pop(1)
0xca: Push((int) 518122)
0xcb: @@ SetMessage(Stack[-1])
0xcc: Pop(1)
0xcd: @@ ClearReplies()
0xce: Pop(0)
0xcf: Push((int) 518123)
0xd0: Push((int) 19396)
0xd1: Push((int) 19242)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call2 0x9d

0xd8: Pop(1)
0xd9: Push((int) 520035)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 520036)
0xdf: Push((int) -1)
0xe0: Push((int) 21221)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 527021)
0xe4: Push((int) -1)
0xe5: Push((int) 28305)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Push((int) 19396)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call2 0x9d

0xef: Pop(1)
0xf0: Push((int) 518292)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 518293)
0xf6: Push((int) 19398)
0xf7: Push((int) 19397)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Push((int) 527019)
0xfb: Push((int) 19398)
0xfc: Push((int) 28302)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Return(); Pop(0)

0x100: Push((int) 19398)
0x101: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x103: PushEmpty(string)
0x104: Stack[-1] = "Neutral"
0x105: Call2 0x9d

0x106: Pop(1)
0x107: Push((int) 518294)
0x108: @@ SetMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ ClearReplies()
0x10b: Pop(0)
0x10c: Push((int) 518295)
0x10d: Push((int) 19400)
0x10e: Push((int) 19399)
0x10f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110: Pop(3)
0x111: Return(); Pop(0)

0x112: Push((int) 19400)
0x113: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x115: PushEmpty(string)
0x116: Stack[-1] = "Neutral"
0x117: Call2 0x9d

0x118: Pop(1)
0x119: Push((int) 518296)
0x11a: @@ SetMessage(Stack[-1])
0x11b: Pop(1)
0x11c: @@ ClearReplies()
0x11d: Pop(0)
0x11e: Push((int) 518297)
0x11f: Push((int) 19402)
0x120: Push((int) 19401)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 19402)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 518298)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 518299)
0x131: Push((int) 19404)
0x132: Push((int) 19403)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 19404)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x9d

0x13c: Pop(1)
0x13d: Push((int) 518300)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 518301)
0x143: Push((int) 19407)
0x144: Push((int) 19405)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 19407)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15a; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0x9d

0x14e: Pop(1)
0x14f: Push((int) 518303)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 518304)
0x155: Push((int) 19409)
0x156: Push((int) 19408)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Return(); Pop(0)

0x15a: Push((int) 19409)
0x15b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15c: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15d: PushEmpty(string)
0x15e: Stack[-1] = "Neutral"
0x15f: Call2 0x9d

0x160: Pop(1)
0x161: Push((int) 518305)
0x162: @@ SetMessage(Stack[-1])
0x163: Pop(1)
0x164: @@ ClearReplies()
0x165: Pop(0)
0x166: Push((int) 518306)
0x167: Push((int) -1)
0x168: Push((int) 19410)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: Push((int) 527020)
0x16c: Push((int) -1)
0x16d: Push((int) 28304)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x172: PushEmpty(bool)
0x173: Call2 0x2ee

0x174: Pop(0)
0x175: IF (Stack[-1] == 0) GOTO 0x179; Pop(1)

0x176: @ lshStopAnimation()
0x177: Pop(0)
0x178: GOTO 0x17b

0x179: @ StopAnimation()
0x17a: Pop(0)
0x17b: Return(); Pop(0)

0x17c: GOTO 0xb4

0x17d: Return(); Pop(0)

0x17e: PushEmpty(float, float)
0x17f: Stack[-2] = (int) 300
0x180: Stack[-1] = (int) 100
0x181: Call2 0x193

0x182: Pop(2)
0x183: Push((int) 3)
0x184: @ Sleep(Stack[-1])
0x185: Pop(1)
0x186: GOTO 0x17e

0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: PushEmpty()
0x18a: Call2 0x1d4

0x18b: Pop(0)
0x18c: PushEmpty(int, object)
0x18d: Stack[-1] = Stack[-3]
0x18e: Push(-2, 1); TaskCall(0)
0x18f: Call2 0x0

0x190: Pop(-2, 1); TaskReturn
0x191: Pop(2)
0x192: Return(); Pop(0)

0x193: PushEmpty()
0x194: PushEmpty(bool)
0x195: Call2 0x240

0x196: Pop(0)
0x197: Pop(1); Push((bool) Stack[-1] == 0)
0x198: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x199: Return(); Pop(0)

0x19a: Push("player")
0x19b: @ FindActor(Stack[-4], Stack[-1])
0x19c: Pop(1)
0x19d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x19e: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x19f: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1a0: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1a1: Push((int) 10)
0x1a2: Push((float)1.0)
0x1a3: @ SetTimer(Stack[-2], Stack[-1])
0x1a4: Pop(2)
0x1a5: PushEmpty()
0x1a6: Call2 0x1e2

0x1a7: Pop(0)
0x1a8: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1aa: Push((int) 10)
0x1ab: @ KillTimer(Stack[-1])
0x1ac: Pop(1)
0x1ad: Return(); Pop(0)

0x1ae: PushEmpty(float, float)
0x1af: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0x1b1: Stack[-3] = (bool) 0
0x1b2: Return(); Pop(2)

0x1b3: PushEmpty(float, object)
0x1b4: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1b5: Call2 0x238

0x1b6: Pop(1)
0x1b7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1b8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1bb: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1bc: Return(); Pop(2)

0x1bd: PushEmpty()
0x1be: Push((int) 10)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c1: PushEmpty(bool)
0x1c2: Call2 0x1ae

0x1c3: Pop(0)
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cd; Pop(1)

0x1c5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c7: PushEmpty(object)
0x1c8: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1c9: Call2 0x2b9

0x1ca: Pop(1)
0x1cb: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1cc: GOTO 0x1d3

0x1cd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1cf: Push("head")
0x1d0: @ UnlookAsync(Stack[-1])
0x1d1: Pop(1)
0x1d2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1d3: Return(); Pop(0)

0x1d4: PushEmpty()
0x1d5: Call2 0x233

0x1d6: Pop(0)
0x1d7: Push((int) 10)
0x1d8: @ KillTimer(Stack[-1])
0x1d9: Pop(1)
0x1da: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1db: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1dc: Push("head")
0x1dd: @ UnlookAsync(Stack[-1])
0x1de: Pop(1)
0x1df: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e0: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1e1: Return(); Pop(0)

0x1e2: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1e3: @ WaitForAnimEnd()
0x1e4: Pop(0)
0x1e5: PushEmpty(bool)
0x1e6: Call2 0x240

0x1e7: Pop(0)
0x1e8: Pop(1); Push((bool) Stack[-1] == 0)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Return(); Pop(14)

0x1eb: PushEmpty(int)
0x1ec: Call2 0x2f7

0x1ed: Stack[-8] = Stack[-1]
0x1ee: Pop(1)
0x1ef: Stack[-6] = (int) 0
0x1f0: PushEmpty(bool)
0x1f1: Stack[-1] = (bool) 0
0x1f2: Push((int) 5)
0x1f3: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1f4: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f5: PushEmpty(bool)
0x1f6: Call2 0x240

0x1f7: Pop(0)
0x1f8: IF (Stack[-1] == 0) GOTO 0x1fa; Pop(1)

0x1f9: Stack[-1] = (bool) 1
0x1fa: IF (Stack[-1] == 0) GOTO 0x22e; Pop(1)

0x1fb: Push((int) 3)
0x1fc: @ irand(Stack[-6], Stack[-1])
0x1fd: Pop(1)
0x1fe: Push((int) 0)
0x1ff: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x200: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x201: Push(Stack[-7])
0x202: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x203: @ irand(Stack[-4], Stack[-7])
0x204: Pop(0)
0x205: Push("all")
0x206: PushEmpty(string, int)
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x2f0

0x209: Pop(1)
0x20a: @ PlayAnimation(Stack[-2], Stack[-1])
0x20b: Pop(2)
0x20c: @ WaitForAnimEnd(Stack[-3])
0x20d: Pop(0)
0x20e: Pop(0); Push((bool) Stack[-3] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: GOTO 0x22e

0x211: GOTO 0x223

0x212: Push((int) 1)
0x213: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x214: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x215: Push((int) 4)
0x216: @ rand(Stack[-3], Stack[-1])
0x217: Pop(1)
0x218: Push((int) 1)
0x219: Pop(1); Push(Stack[-3] + Stack[-1]);
0x21a: @ Sleep(Stack[-1], Stack[-2])
0x21b: Pop(1)
0x21c: Pop(0); Push((bool) Stack[-1] == 0)
0x21d: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21e: GOTO 0x22e

0x21f: GOTO 0x223

0x220: Push(Stack[-6])
0x221: IF (Stack[-1] == 0) GOTO 0x223; Pop(1)

0x222: GOTO 0x22e

0x223: PushEmpty(bool)
0x224: Call2 0x231

0x225: Pop(0)
0x226: Pop(1); Push((bool) Stack[-1] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: GOTO 0x22e

0x229: @ ResetAAS()
0x22a: Pop(0)
0x22b: Push((int) 1)
0x22c: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x22d: GOTO 0x1f0

0x22e: @ ResetAAS()
0x22f: Pop(0)
0x230: Return(); Pop(14)

0x231: Stack[-1] = (bool) 1
0x232: Return(); Pop(0)

0x233: @ StopAnimation()
0x234: Pop(0)
0x235: @ StopGroup0()
0x236: Pop(0)
0x237: Return(); Pop(0)

0x238: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x239: @ GetPosition(Stack[-3])
0x23a: Pop(0)
0x23b: @@ GetPosition(Stack[-2])
0x23c: Pop(0)
0x23d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x23e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x23f: Return(); Pop(6)

0x240: PushEmpty(bool, bool)
0x241: @ IsLoaded(Stack[-1])
0x242: Pop(0)
0x243: Stack[-3] = Stack[-1]
0x244: Return(); Pop(2)

0x245: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x246: @@ GetPosition(Stack[-8])
0x247: Pop(0)
0x248: @@ GetEyesHeight(Stack[-9])
0x249: Pop(0)
0x24a: Push(CvectorIndex(Stack[-8], 1))
0x24b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x24c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x24d: @ GetPosition(Stack[-7])
0x24e: Pop(0)
0x24f: @ GetEyesHeight(Stack[-9])
0x250: Pop(0)
0x251: Push(CvectorIndex(Stack[-7], 1))
0x252: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x253: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x254: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x255: Push(CvectorIndex(Stack[-6], 1))
0x256: Stack[-1] = (int) 0
0x257: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x258: Pop(0); Push(Stack[-6] | Stack[-6]);
0x259: Pop(1); Push(Sqrt(Stack[-1]))
0x25a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x25b: Stack[-5] = -Stack[-6]; Pop(0);
0x25c: Pop(0); Push(Stack[-6] * Stack[-19]);
0x25d: PushEmpty(cvector, cvector)
0x25e: Push(CVector(0.0, 1.0, 0.0))
0x25f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x260: Call2 0x2cb

0x261: Pop(1)
0x262: Push((int) 25)
0x263: Pop(2); Push(Stack[-2] * Stack[-1]);
0x264: Pop(2); Push(Stack[-2] + Stack[-1]);
0x265: Push(CVector(0.0, 10.0, 0.0))
0x266: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x267: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x268: @ IsOverrideActive(Stack[-2])
0x269: Pop(0)
0x26a: Push(Stack[-2])
0x26b: IF (Stack[-1] == 0) GOTO 0x26e; Pop(1)

0x26c: Stack[-21] = (bool) 0
0x26d: Return(); Pop(18)

0x26e: @ StopWorld()
0x26f: Pop(0)
0x270: @ CameraTransit(Stack[-3], Stack[-5])
0x271: Pop(0)
0x272: Push(CvectorIndex(Stack[-4], 0))
0x273: Push(CvectorIndex(Stack[-5], 2))
0x274: @ Rotate(Stack[-2], Stack[-1])
0x275: Pop(2)
0x276: PushEmpty(bool)
0x277: Call2 0x2ee

0x278: Pop(0)
0x279: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x27a: GOTO 0x283

0x27b: Push("head")
0x27c: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x27d: Pop(1)
0x27e: Push(Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x280: Push("head")
0x281: @ LookAsyncCamera(Stack[-1])
0x282: Pop(1)
0x283: @ CameraWaitForPlayFinish()
0x284: Pop(0)
0x285: @ ResumeWorld()
0x286: Pop(0)
0x287: Stack[-21] = (bool) 1
0x288: Return(); Pop(18)

0x289: PushEmpty(bool, bool)
0x28a: @ CameraSwitchToNormal()
0x28b: Pop(0)
0x28c: PushEmpty(bool)
0x28d: Call2 0x2ee

0x28e: Pop(0)
0x28f: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x290: GOTO 0x299

0x291: Push("head")
0x292: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x293: Pop(1)
0x294: Push(Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x299; Pop(1)

0x296: Push("head")
0x297: @ UnlookAsync(Stack[-1])
0x298: Pop(1)
0x299: Return(); Pop(2)

0x29a: PushEmpty(bool, float, float, bool, float, float)
0x29b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x29c: Pop(0)
0x29d: Push(Stack[-3])
0x29e: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x29f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2a0: Pop(0)
0x2a1: Push((bool) 0)
0x2a2: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2a3: Pop(1)
0x2a4: GOTO 0x2a9

0x2a5: Push("Can't find lsh animation : ")
0x2a6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2a7: @ Trace(Stack[-1])
0x2a8: Pop(1)
0x2a9: Return(); Pop(6)

0x2aa: PushEmpty(bool, float, float, bool, float, float)
0x2ab: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2ac: Pop(0)
0x2ad: Push(Stack[-3])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2af: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2b0: Pop(0)
0x2b1: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2b2: Pop(0)
0x2b3: GOTO 0x2b8

0x2b4: Push("Can't find lsh animation : ")
0x2b5: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2b6: @ Trace(Stack[-1])
0x2b7: Pop(1)
0x2b8: Return(); Pop(6)

0x2b9: PushEmpty(float, cvector, float, cvector)
0x2ba: @@ GetEyesHeight(Stack[-2])
0x2bb: Pop(0)
0x2bc: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2bd: Push(CvectorIndex(Stack[-1], 1))
0x2be: Stack[-1] = Stack[-3]
0x2bf: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2c0: Push("head")
0x2c1: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2c2: Pop(1)
0x2c3: Return(); Pop(4)

0x2c4: PushEmpty(bool)
0x2c5: Call2 0x2ee

0x2c6: Pop(0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ca; Pop(1)

0x2c8: @ lshStopSpeech()
0x2c9: Pop(0)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(float, float)
0x2cc: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2cd: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2ce: Push((float)0.0)
0x2cf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x2d2: Return(); Pop(2)

0x2d3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x2d4: Return(); Pop(2)

0x2d5: PushEmpty(int, int)
0x2d6: @ GetVariable(Stack[-3], Stack[-1])
0x2d7: Pop(0)
0x2d8: Stack[-4] = Stack[-1]
0x2d9: Return(); Pop(2)

0x2da: PushEmpty(object, object)
0x2db: @ FindActor(Stack[-1], Stack[-4])
0x2dc: Pop(0)
0x2dd: Pop(0); Push((bool) Stack[-1] == 0)
0x2de: IF (Stack[-1] == 0) GOTO 0x2e1; Pop(1)

0x2df: Stack[-5] = (bool) 0
0x2e0: Return(); Pop(2)

0x2e1: @ Trigger(Stack[-1], Stack[-3])
0x2e2: Pop(0)
0x2e3: Stack[-5] = (bool) 1
0x2e4: Return(); Pop(2)

0x2e5: Stack[-1] = 0
0x2e6: Stack[-1] = (int) 515571
0x2e7: Return(); Pop(0)

0x2e8: Stack[-1] = (int) 504029
0x2e9: Return(); Pop(0)

0x2ea: Stack[-1] = "ui/NPC_bmask.png"
0x2eb: Return(); Pop(0)

0x2ec: Stack[-1] = "ui/NPC_bmask_b.png"
0x2ed: Return(); Pop(0)

0x2ee: Stack[-1] = (bool) 0
0x2ef: Return(); Pop(0)

0x2f0: PushEmpty(string, string)
0x2f1: Stack[-1] = "idle"
0x2f2: Push(Stack[-3])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f5: Stack[-4] = Stack[-1]
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, bool, int, bool)
0x2f8: Stack[-2] = (int) 0
0x2f9: Push("all")
0x2fa: PushEmpty(string, int)
0x2fb: Stack[-1] = Stack[-5]
0x2fc: Call2 0x2f0

0x2fd: Pop(1)
0x2fe: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(2)
0x300: Pop(0); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x302: GOTO 0x306

0x303: Push((int) 1)
0x304: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x305: GOTO 0x2f9

0x306: Stack[-5] = Stack[-2]
0x307: Return(); Pop(4)

0x308: PushEmpty()
0x309: Push("oob1Birdmask2_1")
0x30a: Push((int) 1)
0x30b: @ SetVariable(Stack[-2], Stack[-1])
0x30c: Pop(2)
0x30d: PushEmpty(bool, string, string)
0x30e: Stack[-2] = "quest_b1_01"
0x30f: Stack[-1] = "remove2"
0x310: Call2 0x2da

0x311: Pop(3)
0x312: Return(); Pop(0)

0x313: PushEmpty()
0x314: PushEmpty(int, string)
0x315: Stack[-1] = "oob1Birdmask2_1"
0x316: Call2 0x2d5

0x317: Pop(1)
0x318: Push((int) 0)
0x319: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-2] = (bool) 1
0x31c: Return(); Pop(0)

0x31d: Stack[-2] = (bool) 0
0x31e: Return(); Pop(0)

0x31f: PushEmpty(int, int)
0x320: Push("branch")
0x321: @ GetVariable(Stack[-1], Stack[-2])
0x322: Pop(1)
0x323: Push((int) 0)
0x324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x326: Stack[-3] = (int) 1
0x327: Return(); Pop(2)

0x328: GOTO 0x32e

0x329: Push((int) 1)
0x32a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32b: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32c: Stack[-3] = (int) 2
0x32d: Return(); Pop(2)

0x32e: Stack[-3] = (int) 3
0x32f: Return(); Pop(2)

