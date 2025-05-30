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
	quest_d4_01
	wastedwoman_done
	GetPosition
	GetEyesHeight
	head
	Can't find lsh animation : 
	d4q01WastedMale
	pt_d4q01_key2_region
	AddMark
	ShowMap
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png

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
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	IsLoaded (1 args)
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
	FindActor (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	GetMainOutdoorScene (1 args)
	GetVariable (2 args)

RunOp = 0x16b
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (bool) Params = 0
		EVENT_0 Op = 0x174 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1e2

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2f7

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2f5

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2f9

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2fb

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x2e4

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
0x41: Call2 0x227

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
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 509726)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 509727)
0x5a: Push((int) 10711)
0x5b: Push((int) 10710)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 509742)
0x5f: Push((int) 10728)
0x60: Push((int) 10727)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x2fd

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x239

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all")
0x76: Push("idle")
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all")
0x7f: Push("idle")
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x2fd

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-2] = Stack[-3]
0x90: Push("")
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x249

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x16a; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x258

0x9f: Pop(0)
0xa0: Push((int) 10714)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x292

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x2a2

0xac: Pop(2)
0xad: Push((int) 10717)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x292

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x2a2

0xb9: Pop(2)
0xba: Push((int) 10718)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x292

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x2a2

0xc6: Pop(2)
0xc7: Push((int) 10709)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(string)
0xcb: Stack[-1] = "Neutral"
0xcc: Call2 0x84

0xcd: Pop(1)
0xce: Push((int) 509726)
0xcf: @@ SetMessage(Stack[-1])
0xd0: Pop(1)
0xd1: @@ ClearReplies()
0xd2: Pop(0)
0xd3: Push((int) 509727)
0xd4: Push((int) 10711)
0xd5: Push((int) 10710)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: Push((int) 509742)
0xd9: Push((int) 10728)
0xda: Push((int) 10727)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Push((int) 10728)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x84

0xe4: Pop(1)
0xe5: Push((int) 509743)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 509744)
0xeb: Push((int) 10711)
0xec: Push((int) 10729)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: Push((int) 10711)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral"
0xf5: Call2 0x84

0xf6: Pop(1)
0xf7: Push((int) 509728)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 509729)
0xfd: Push((int) 10713)
0xfe: Push((int) 10712)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Push((int) 509736)
0x102: Push((int) 10720)
0x103: Push((int) 10719)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Return(); Pop(0)

0x107: Push((int) 10720)
0x108: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x109: IF (Stack[-1] == 0) GOTO 0x11e; Pop(1)

0x10a: PushEmpty(string)
0x10b: Stack[-1] = "Neutral"
0x10c: Call2 0x84

0x10d: Pop(1)
0x10e: Push((int) 509737)
0x10f: @@ SetMessage(Stack[-1])
0x110: Pop(1)
0x111: @@ ClearReplies()
0x112: Pop(0)
0x113: Push((int) 509738)
0x114: Push((int) 10722)
0x115: Push((int) 10721)
0x116: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117: Pop(3)
0x118: Push((int) 509741)
0x119: Push((int) 10713)
0x11a: Push((int) 10725)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Return(); Pop(0)

0x11e: Push((int) 10722)
0x11f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x121: PushEmpty(string)
0x122: Stack[-1] = "Neutral"
0x123: Call2 0x84

0x124: Pop(1)
0x125: Push((int) 509739)
0x126: @@ SetMessage(Stack[-1])
0x127: Pop(1)
0x128: @@ ClearReplies()
0x129: Pop(0)
0x12a: Push((int) 509740)
0x12b: Push((int) 10713)
0x12c: Push((int) 10723)
0x12d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e: Pop(3)
0x12f: Return(); Pop(0)

0x130: Push((int) 10713)
0x131: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x133: PushEmpty(string)
0x134: Stack[-1] = "Neutral"
0x135: Call2 0x84

0x136: Pop(1)
0x137: Push((int) 509730)
0x138: @@ SetMessage(Stack[-1])
0x139: Pop(1)
0x13a: @@ ClearReplies()
0x13b: Pop(0)
0x13c: Push((int) 509731)
0x13d: Push((int) -1)
0x13e: Push((int) 10714)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Push((int) 509732)
0x142: Push((int) 10716)
0x143: Push((int) 10715)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Return(); Pop(0)

0x147: Push((int) 10716)
0x148: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x149: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x14a: PushEmpty(string)
0x14b: Stack[-1] = "Neutral"
0x14c: Call2 0x84

0x14d: Pop(1)
0x14e: Push((int) 509733)
0x14f: @@ SetMessage(Stack[-1])
0x150: Pop(1)
0x151: @@ ClearReplies()
0x152: Pop(0)
0x153: Push((int) 509734)
0x154: Push((int) -1)
0x155: Push((int) 10717)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: Push((int) 509735)
0x159: Push((int) -1)
0x15a: Push((int) 10718)
0x15b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15c: Pop(3)
0x15d: Return(); Pop(0)

0x15e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x15f: PushEmpty(bool)
0x160: Call2 0x2fd

0x161: Pop(0)
0x162: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x163: @ lshStopAnimation()
0x164: Pop(0)
0x165: GOTO 0x168

0x166: @ StopAnimation()
0x167: Pop(0)
0x168: Return(); Pop(0)

0x169: GOTO 0x9b

0x16a: Return(); Pop(0)

0x16b: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x16c: Push((int) 3)
0x16d: @ Sleep(Stack[-1])
0x16e: Pop(1)
0x16f: PushEmpty()
0x170: Call2 0x187

0x171: Pop(0)
0x172: GOTO 0x16c

0x173: Return(); Pop(0)

0x174: PushEmpty()
0x175: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x176: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x177: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x178: PushEmpty()
0x179: Call2 0x1d8

0x17a: Pop(0)
0x17b: PushEmpty(int, object)
0x17c: Stack[-1] = Stack[-3]
0x17d: Push(-2, 1); TaskCall(0)
0x17e: Call2 0x0

0x17f: Pop(-2, 1); TaskReturn
0x180: Pop(2)
0x181: PushEmpty(bool, string, string)
0x182: Stack[-2] = "quest_d4_01"
0x183: Stack[-1] = "wastedwoman_done"
0x184: Call2 0x269

0x185: Pop(3)
0x186: Return(); Pop(0)

0x187: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x188: @ WaitForAnimEnd()
0x189: Pop(0)
0x18a: PushEmpty(bool)
0x18b: Call2 0x1dd

0x18c: Pop(0)
0x18d: Pop(1); Push((bool) Stack[-1] == 0)
0x18e: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18f: Return(); Pop(14)

0x190: PushEmpty(int)
0x191: Call2 0x281

0x192: Stack[-8] = Stack[-1]
0x193: Pop(1)
0x194: Stack[-6] = (int) 0
0x195: PushEmpty(bool)
0x196: Stack[-1] = (bool) 0
0x197: Push((int) 5)
0x198: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x199: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19a: PushEmpty(bool)
0x19b: Call2 0x1dd

0x19c: Pop(0)
0x19d: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x19e: Stack[-1] = (bool) 1
0x19f: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1a0: Push((int) 3)
0x1a1: @ irand(Stack[-6], Stack[-1])
0x1a2: Pop(1)
0x1a3: Push((int) 0)
0x1a4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1a5: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1a6: Push(Stack[-7])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1a8: @ irand(Stack[-4], Stack[-7])
0x1a9: Pop(0)
0x1aa: Push("all")
0x1ab: PushEmpty(string, int)
0x1ac: Stack[-1] = Stack[-7]
0x1ad: Call2 0x27a

0x1ae: Pop(1)
0x1af: @ PlayAnimation(Stack[-2], Stack[-1])
0x1b0: Pop(2)
0x1b1: @ WaitForAnimEnd(Stack[-3])
0x1b2: Pop(0)
0x1b3: Pop(0); Push((bool) Stack[-3] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b5: GOTO 0x1d3

0x1b6: GOTO 0x1c8

0x1b7: Push((int) 1)
0x1b8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1ba: Push((int) 4)
0x1bb: @ rand(Stack[-3], Stack[-1])
0x1bc: Pop(1)
0x1bd: Push((int) 1)
0x1be: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1bf: @ Sleep(Stack[-1], Stack[-2])
0x1c0: Pop(1)
0x1c1: Pop(0); Push((bool) Stack[-1] == 0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: GOTO 0x1d3

0x1c4: GOTO 0x1c8

0x1c5: Push(Stack[-6])
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: GOTO 0x1d3

0x1c8: PushEmpty(bool)
0x1c9: Call2 0x1d6

0x1ca: Pop(0)
0x1cb: Pop(1); Push((bool) Stack[-1] == 0)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: GOTO 0x1d3

0x1ce: @ ResetAAS()
0x1cf: Pop(0)
0x1d0: Push((int) 1)
0x1d1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d2: GOTO 0x195

0x1d3: @ ResetAAS()
0x1d4: Pop(0)
0x1d5: Return(); Pop(14)

0x1d6: Stack[-1] = (bool) 1
0x1d7: Return(); Pop(0)

0x1d8: @ StopAnimation()
0x1d9: Pop(0)
0x1da: @ StopGroup0()
0x1db: Pop(0)
0x1dc: Return(); Pop(0)

0x1dd: PushEmpty(bool, bool)
0x1de: @ IsLoaded(Stack[-1])
0x1df: Pop(0)
0x1e0: Stack[-3] = Stack[-1]
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1e3: @@ GetPosition(Stack[-8])
0x1e4: Pop(0)
0x1e5: @@ GetEyesHeight(Stack[-9])
0x1e6: Pop(0)
0x1e7: Push(CvectorIndex(Stack[-8], 1))
0x1e8: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1e9: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1ea: @ GetPosition(Stack[-7])
0x1eb: Pop(0)
0x1ec: @ GetEyesHeight(Stack[-9])
0x1ed: Pop(0)
0x1ee: Push(CvectorIndex(Stack[-7], 1))
0x1ef: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1f0: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1f1: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1f2: Push(CvectorIndex(Stack[-6], 1))
0x1f3: Stack[-1] = (int) 0
0x1f4: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1f5: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1f6: Pop(1); Push(Sqrt(Stack[-1]))
0x1f7: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1f8: Stack[-5] = -Stack[-6]; Pop(0);
0x1f9: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1fa: PushEmpty(cvector, cvector)
0x1fb: Push(CVector(0.0, 1.0, 0.0))
0x1fc: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1fd: Call2 0x25f

0x1fe: Pop(1)
0x1ff: Push((int) 25)
0x200: Pop(2); Push(Stack[-2] * Stack[-1]);
0x201: Pop(2); Push(Stack[-2] + Stack[-1]);
0x202: Push(CVector(0.0, 10.0, 0.0))
0x203: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x204: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x205: @ IsOverrideActive(Stack[-2])
0x206: Pop(0)
0x207: Push(Stack[-2])
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-21] = (bool) 0
0x20a: Return(); Pop(18)

0x20b: @ StopWorld()
0x20c: Pop(0)
0x20d: Push((bool) 1)
0x20e: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x20f: Pop(1)
0x210: Push(CvectorIndex(Stack[-4], 0))
0x211: Push(CvectorIndex(Stack[-5], 2))
0x212: @ Rotate(Stack[-2], Stack[-1])
0x213: Pop(2)
0x214: PushEmpty(bool)
0x215: Call2 0x2fd

0x216: Pop(0)
0x217: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x218: GOTO 0x221

0x219: Push("head")
0x21a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x21b: Pop(1)
0x21c: Push(Stack[-1])
0x21d: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21e: Push("head")
0x21f: @ LookAsyncCamera(Stack[-1])
0x220: Pop(1)
0x221: @ CameraWaitForPlayFinish()
0x222: Pop(0)
0x223: @ ResumeWorld()
0x224: Pop(0)
0x225: Stack[-21] = (bool) 1
0x226: Return(); Pop(18)

0x227: PushEmpty(bool, bool)
0x228: Push((bool) 1)
0x229: @ CameraSwitchToNormal(Stack[-1])
0x22a: Pop(1)
0x22b: PushEmpty(bool)
0x22c: Call2 0x2fd

0x22d: Pop(0)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: GOTO 0x238

0x230: Push("head")
0x231: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x232: Pop(1)
0x233: Push(Stack[-1])
0x234: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x235: Push("head")
0x236: @ UnlookAsync(Stack[-1])
0x237: Pop(1)
0x238: Return(); Pop(2)

0x239: PushEmpty(bool, float, float, bool, float, float)
0x23a: @ lshHasAnimation(Stack[-3], Stack[-7])
0x23b: Pop(0)
0x23c: Push(Stack[-3])
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x23f: Pop(0)
0x240: Push((bool) 0)
0x241: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x242: Pop(1)
0x243: GOTO 0x248

0x244: Push("Can't find lsh animation : ")
0x245: Pop(1); Push(Stack[-1] + Stack[-8]);
0x246: @ Trace(Stack[-1])
0x247: Pop(1)
0x248: Return(); Pop(6)

0x249: PushEmpty(bool, float, float, bool, float, float)
0x24a: @ lshHasAnimation(Stack[-3], Stack[-8])
0x24b: Pop(0)
0x24c: Push(Stack[-3])
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x24f: Pop(0)
0x250: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x251: Pop(0)
0x252: GOTO 0x257

0x253: Push("Can't find lsh animation : ")
0x254: Pop(1); Push(Stack[-1] + Stack[-9]);
0x255: @ Trace(Stack[-1])
0x256: Pop(1)
0x257: Return(); Pop(6)

0x258: PushEmpty(bool)
0x259: Call2 0x2fd

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25c: @ lshStopSpeech()
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: PushEmpty(float, float)
0x260: Pop(0); Push(Stack[-3] | Stack[-3]);
0x261: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x262: Push((float)0.0)
0x263: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x264: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x265: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x266: Return(); Pop(2)

0x267: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x268: Return(); Pop(2)

0x269: PushEmpty(object, object)
0x26a: @ FindActor(Stack[-1], Stack[-4])
0x26b: Pop(0)
0x26c: Pop(0); Push((bool) Stack[-1] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26e: Stack[-5] = (bool) 0
0x26f: Return(); Pop(2)

0x270: @ Trigger(Stack[-1], Stack[-3])
0x271: Pop(0)
0x272: Stack[-5] = (bool) 1
0x273: Return(); Pop(2)

0x274: Stack[-1] = 0
0x275: PushEmpty(float, float)
0x276: @ GetGameTime(Stack[-1])
0x277: Pop(0)
0x278: Stack[-3] = Stack[-1]
0x279: Return(); Pop(2)

0x27a: PushEmpty(string, string)
0x27b: Stack[-1] = "idle"
0x27c: Push(Stack[-3])
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x27f: Stack[-4] = Stack[-1]
0x280: Return(); Pop(2)

0x281: PushEmpty(int, bool, int, bool)
0x282: Stack[-2] = (int) 0
0x283: Push("all")
0x284: PushEmpty(string, int)
0x285: Stack[-1] = Stack[-5]
0x286: Call2 0x27a

0x287: Pop(1)
0x288: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(2)
0x28a: Pop(0); Push((bool) Stack[-1] == 0)
0x28b: IF (Stack[-1] == 0) GOTO 0x28d; Pop(1)

0x28c: GOTO 0x290

0x28d: Push((int) 1)
0x28e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x28f: GOTO 0x283

0x290: Stack[-5] = Stack[-2]
0x291: Return(); Pop(4)

0x292: PushEmpty(object, object)
0x293: PushEmpty(object)
0x294: Call2 0x2b2

0x295: Stack[-2] = Stack[-1]
0x296: Pop(1)
0x297: Push("d4q01WastedMale")
0x298: Push("pt_d4q01_key2_region")
0x299: Push((int) 1)
0x29a: Push((int) 511522)
0x29b: PushEmpty(float)
0x29c: Call2 0x275

0x29d: Pop(0)
0x29e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(5)
0x2a0: Return(); Pop(2)

0x2a1: Stack[-1] = 0
0x2a2: PushEmpty()
0x2a3: PushEmpty(object, string, float)
0x2a4: PushEmpty(object)
0x2a5: Call2 0x2b2

0x2a6: Stack[-4] = Stack[-1]
0x2a7: Pop(1)
0x2a8: Stack[-2] = "pt_d4q01_key2_region"
0x2a9: Stack[-1] = (int) 2
0x2aa: Call2 0x2c3

0x2ab: Pop(3)
0x2ac: PushEmpty(object)
0x2ad: Call2 0x2b2

0x2ae: Pop(0)
0x2af: @@ ShowMap(Stack[-1])
0x2b0: Pop(1)
0x2b1: Return(); Pop(0)

0x2b2: PushEmpty(object, object, object, object)
0x2b3: @ GetMainOutdoorScene(Stack[-2])
0x2b4: Pop(0)
0x2b5: Pop(0); Push((bool) Stack[-2] == 0)
0x2b6: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b7: Push("Can't find main outdoor scene")
0x2b8: @ Trace(Stack[-1])
0x2b9: Pop(1)
0x2ba: Stack[-1] = 0
0x2bb: Stack[-5] = Stack[-1]
0x2bc: Return(); Pop(4)

0x2bd: @@ GetMap(Stack[-1])
0x2be: Pop(0)
0x2bf: Stack[-5] = Stack[-1]
0x2c0: Return(); Pop(4)

0x2c1: Stack[-1] = 0
0x2c2: Stack[-2] = 0
0x2c3: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x2c4: @ GetMainOutdoorScene(Stack[-2])
0x2c5: Pop(0)
0x2c6: Pop(0); Push((bool) Stack[-2] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c8: Push("Can't find main outdoor scene")
0x2c9: @ Trace(Stack[-1])
0x2ca: Pop(1)
0x2cb: Return(); Pop(8)

0x2cc: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x2cd: Pop(0)
0x2ce: Pop(0); Push((bool) Stack[-1] == 0)
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d0: Push("Warning: outdoor scene locator ")
0x2d1: Pop(1); Push(Stack[-1] + Stack[-11]);
0x2d2: Push(" doesnt exist")
0x2d3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2d4: @ Trace(Stack[-1])
0x2d5: Pop(1)
0x2d6: @@ GetMap(Stack[-11])
0x2d7: Pop(0)
0x2d8: Pop(0); Push((bool) Stack[-11] == 0)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2da: Push("Can't find map")
0x2db: @ Trace(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(8)

0x2de: Push(CvectorIndex(Stack[-4], 0))
0x2df: Push(CvectorIndex(Stack[-5], 2))
0x2e0: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x2e1: Pop(2)
0x2e2: Return(); Pop(8)

0x2e3: Stack[-2] = 0
0x2e4: PushEmpty(int, int)
0x2e5: Push("branch")
0x2e6: @ GetVariable(Stack[-1], Stack[-2])
0x2e7: Pop(1)
0x2e8: Push((int) 0)
0x2e9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2eb: Stack[-3] = (int) 1
0x2ec: Return(); Pop(2)

0x2ed: GOTO 0x2f3

0x2ee: Push((int) 1)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-3] = (int) 2
0x2f2: Return(); Pop(2)

0x2f3: Stack[-3] = (int) 3
0x2f4: Return(); Pop(2)

0x2f5: Stack[-1] = (int) 515555
0x2f6: Return(); Pop(0)

0x2f7: Stack[-1] = (int) 503340
0x2f8: Return(); Pop(0)

0x2f9: Stack[-1] = "ui/NPC_Citizen2.png"
0x2fa: Return(); Pop(0)

0x2fb: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2fc: Return(); Pop(0)

0x2fd: Stack[-1] = (bool) 0
0x2fe: Return(); Pop(0)

