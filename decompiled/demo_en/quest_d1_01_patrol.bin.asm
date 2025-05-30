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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	d1q01
	d1q01PatrolGotoAlexandr
	pt_map_alexandr
	AddMark
	ShowMap
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
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
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x16c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x172 Vars = (object)
		EVENT_26 Op = 0x1a3 Vars = (string)
		EVENT_6 Op = 0x1ab Vars = ()
		EVENT_7 Op = 0x1ec Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x274

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x32e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x32c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x330

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x332

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3d1

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
0x41: Call2 0x2b8

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
0x52: Call2 0x35d

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x69; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 531679)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 533040)
0x5f: Push((int) 34551)
0x60: Push((int) 34550)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 533055)
0x64: Push((int) 34553)
0x65: Push((int) 34561)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: GOTO 0x7f

0x69: PushEmpty(string)
0x6a: Stack[-1] = "Neutral"
0x6b: Call2 0x9d

0x6c: Pop(1)
0x6d: Push((int) 531681)
0x6e: @@ SetMessage(Stack[-1])
0x6f: Pop(1)
0x70: @@ ClearReplies()
0x71: Pop(0)
0x72: Push((int) 531682)
0x73: Push((int) -1)
0x74: Push((int) 33066)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 533033)
0x78: Push((int) -1)
0x79: Push((int) 34543)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x334

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x2c9

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
0x9f: Call2 0x334

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
0xaf: Call2 0x2d9

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x2f3

0xb8: Pop(0)
0xb9: Push((int) 33064)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x336

0xc0: Pop(2)
0xc1: PushEmpty(object, object)
0xc2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc4: Call2 0x34d

0xc5: Pop(2)
0xc6: Push((int) 33063)
0xc7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x35d

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xe2; Pop(1)

0xce: PushEmpty(string)
0xcf: Stack[-1] = "Neutral"
0xd0: Call2 0x9d

0xd1: Pop(1)
0xd2: Push((int) 531679)
0xd3: @@ SetMessage(Stack[-1])
0xd4: Pop(1)
0xd5: @@ ClearReplies()
0xd6: Pop(0)
0xd7: Push((int) 533040)
0xd8: Push((int) 34551)
0xd9: Push((int) 34550)
0xda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb: Pop(3)
0xdc: Push((int) 533055)
0xdd: Push((int) 34553)
0xde: Push((int) 34561)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Return(); Pop(0)

0xe2: PushEmpty(string)
0xe3: Stack[-1] = "Neutral"
0xe4: Call2 0x9d

0xe5: Pop(1)
0xe6: Push((int) 531681)
0xe7: @@ SetMessage(Stack[-1])
0xe8: Pop(1)
0xe9: @@ ClearReplies()
0xea: Pop(0)
0xeb: Push((int) 531682)
0xec: Push((int) -1)
0xed: Push((int) 33066)
0xee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef: Pop(3)
0xf0: Push((int) 533033)
0xf1: Push((int) -1)
0xf2: Push((int) 34543)
0xf3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4: Pop(3)
0xf5: Return(); Pop(0)

0xf6: Push((int) 34551)
0xf7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8: IF (Stack[-1] == 0) GOTO 0x10d; Pop(1)

0xf9: PushEmpty(string)
0xfa: Stack[-1] = "Neutral"
0xfb: Call2 0x9d

0xfc: Pop(1)
0xfd: Push((int) 533041)
0xfe: @@ SetMessage(Stack[-1])
0xff: Pop(1)
0x100: @@ ClearReplies()
0x101: Pop(0)
0x102: Push((int) 533042)
0x103: Push((int) 34553)
0x104: Push((int) 34552)
0x105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x106: Pop(3)
0x107: Push((int) 533056)
0x108: Push((int) 34545)
0x109: Push((int) 34562)
0x10a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b: Pop(3)
0x10c: Return(); Pop(0)

0x10d: Push((int) 34553)
0x10e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x110: PushEmpty(string)
0x111: Stack[-1] = "Neutral"
0x112: Call2 0x9d

0x113: Pop(1)
0x114: Push((int) 533043)
0x115: @@ SetMessage(Stack[-1])
0x116: Pop(1)
0x117: @@ ClearReplies()
0x118: Pop(0)
0x119: Push((int) 533034)
0x11a: Push((int) 34545)
0x11b: Push((int) 34544)
0x11c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d: Pop(3)
0x11e: Push((int) 533058)
0x11f: Push((int) 34547)
0x120: Push((int) 34567)
0x121: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122: Pop(3)
0x123: Return(); Pop(0)

0x124: Push((int) 34545)
0x125: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0x127: PushEmpty(string)
0x128: Stack[-1] = "Neutral"
0x129: Call2 0x9d

0x12a: Pop(1)
0x12b: Push((int) 533035)
0x12c: @@ SetMessage(Stack[-1])
0x12d: Pop(1)
0x12e: @@ ClearReplies()
0x12f: Pop(0)
0x130: Push((int) 533036)
0x131: Push((int) 34547)
0x132: Push((int) 34546)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 34547)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0x9d

0x13c: Pop(1)
0x13d: Push((int) 533037)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 533038)
0x143: Push((int) 34549)
0x144: Push((int) 34548)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Push((int) 533059)
0x148: Push((int) 34549)
0x149: Push((int) 34569)
0x14a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b: Pop(3)
0x14c: Return(); Pop(0)

0x14d: Push((int) 34549)
0x14e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14f: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Neutral"
0x152: Call2 0x9d

0x153: Pop(1)
0x154: Push((int) 533039)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: Push((int) 531680)
0x15a: Push((int) -1)
0x15b: Push((int) 33064)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x160: PushEmpty(bool)
0x161: Call2 0x334

0x162: Pop(0)
0x163: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x164: @ lshStopAnimation()
0x165: Pop(0)
0x166: GOTO 0x169

0x167: @ StopAnimation()
0x168: Pop(0)
0x169: Return(); Pop(0)

0x16a: GOTO 0xb4

0x16b: Return(); Pop(0)

0x16c: PushEmpty(float, float)
0x16d: Stack[-2] = (int) 300
0x16e: Stack[-1] = (int) 100
0x16f: Call2 0x17d

0x170: Pop(2)
0x171: Return(); Pop(0)

0x172: PushEmpty()
0x173: PushEmpty()
0x174: Call2 0x203

0x175: Pop(0)
0x176: PushEmpty(int, object)
0x177: Stack[-1] = Stack[-3]
0x178: Push(-2, 1); TaskCall(0)
0x179: Call2 0x0

0x17a: Pop(-2, 1); TaskReturn
0x17b: Pop(2)
0x17c: Return(); Pop(0)

0x17d: PushEmpty(float, bool, float, bool)
0x17e: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x17f: Push((int) 3)
0x180: @ rand(Stack[-3], Stack[-1])
0x181: Pop(1)
0x182: Push((int) 3)
0x183: Pop(1); Push(Stack[-3] + Stack[-1]);
0x184: @ Sleep(Stack[-1], Stack[-2])
0x185: Pop(1)
0x186: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x187: PushEmpty(float, float)
0x188: Stack[-2] = Stack[-8]
0x189: Stack[-1] = Stack[-7]
0x18a: Call2 0x1c2

0x18b: Pop(2)
0x18c: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x18d: GOTO 0x17f

0x18e: Return(); Pop(4)

0x18f: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x190: PushEmpty(bool)
0x191: Stack[-1] = (bool) 0
0x192: PushEmpty(bool)
0x193: Call2 0x26f

0x194: Pop(0)
0x195: Pop(1); Push((bool) Stack[-1] == 0)
0x196: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x197: PushEmpty(bool)
0x198: Call2 0x1c0

0x199: Pop(0)
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Stack[-1] = (bool) 1
0x19c: IF (Stack[-1] == 0) GOTO 0x1a2; Pop(1)

0x19d: PushEmpty(object)
0x19e: Call2 0x2fa

0x19f: Pop(0)
0x1a0: @ RemoveActor(Stack[-1])
0x1a1: Pop(1)
0x1a2: Return(); Pop(0)

0x1a3: PushEmpty()
0x1a4: Push("cleanup")
0x1a5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a6: IF (Stack[-1] == 0) GOTO 0x1aa; Pop(1)

0x1a7: PushEmpty()
0x1a8: Call2 0x18f

0x1a9: Pop(0)
0x1aa: Return(); Pop(0)

0x1ab: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ad: PushEmpty()
0x1ae: Call2 0x203

0x1af: Pop(0)
0x1b0: PushEmpty(bool)
0x1b1: Stack[-1] = (bool) 0
0x1b2: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b4: PushEmpty(bool)
0x1b5: Call2 0x1c0

0x1b6: Pop(0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(object)
0x1bb: Call2 0x2fa

0x1bc: Pop(0)
0x1bd: @ RemoveActor(Stack[-1])
0x1be: Pop(1)
0x1bf: Return(); Pop(0)

0x1c0: Stack[-1] = (bool) 1
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty()
0x1c3: PushEmpty(bool)
0x1c4: Call2 0x26f

0x1c5: Pop(0)
0x1c6: Pop(1); Push((bool) Stack[-1] == 0)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1c9; Pop(1)

0x1c8: Return(); Pop(0)

0x1c9: Push("player")
0x1ca: @ FindActor(Stack[-4], Stack[-1])
0x1cb: Pop(1)
0x1cc: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1cd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1ce: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1cf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1d0: Push((int) 10)
0x1d1: Push((float)1.0)
0x1d2: @ SetTimer(Stack[-2], Stack[-1])
0x1d3: Pop(2)
0x1d4: PushEmpty()
0x1d5: Call2 0x211

0x1d6: Pop(0)
0x1d7: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: Push((int) 10)
0x1da: @ KillTimer(Stack[-1])
0x1db: Pop(1)
0x1dc: Return(); Pop(0)

0x1dd: PushEmpty(float, float)
0x1de: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1e0: Stack[-3] = (bool) 0
0x1e1: Return(); Pop(2)

0x1e2: PushEmpty(float, object)
0x1e3: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1e4: Call2 0x267

0x1e5: Pop(1)
0x1e6: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1e7: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e9: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1ea: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1eb: Return(); Pop(2)

0x1ec: PushEmpty()
0x1ed: Push((int) 10)
0x1ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ef: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1f0: PushEmpty(bool)
0x1f1: Call2 0x1dd

0x1f2: Pop(0)
0x1f3: IF (Stack[-1] == 0) GOTO 0x1fc; Pop(1)

0x1f4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1f5: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f6: PushEmpty(object)
0x1f7: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f8: Call2 0x2e8

0x1f9: Pop(1)
0x1fa: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1fb: GOTO 0x202

0x1fc: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fd: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1fe: Push("head")
0x1ff: @ UnlookAsync(Stack[-1])
0x200: Pop(1)
0x201: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x202: Return(); Pop(0)

0x203: PushEmpty()
0x204: Call2 0x262

0x205: Pop(0)
0x206: Push((int) 10)
0x207: @ KillTimer(Stack[-1])
0x208: Pop(1)
0x209: Push( Stack[2 + Tasks[-1].StackPointer] )
0x20a: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20b: Push("head")
0x20c: @ UnlookAsync(Stack[-1])
0x20d: Pop(1)
0x20e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x20f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x210: Return(); Pop(0)

0x211: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x212: @ WaitForAnimEnd()
0x213: Pop(0)
0x214: PushEmpty(bool)
0x215: Call2 0x26f

0x216: Pop(0)
0x217: Pop(1); Push((bool) Stack[-1] == 0)
0x218: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x219: Return(); Pop(14)

0x21a: PushEmpty(int)
0x21b: Call2 0x31b

0x21c: Stack[-8] = Stack[-1]
0x21d: Pop(1)
0x21e: Stack[-6] = (int) 0
0x21f: PushEmpty(bool)
0x220: Stack[-1] = (bool) 0
0x221: Push((int) 5)
0x222: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x224: PushEmpty(bool)
0x225: Call2 0x26f

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 1
0x229: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x22a: Push((int) 3)
0x22b: @ irand(Stack[-6], Stack[-1])
0x22c: Pop(1)
0x22d: Push((int) 0)
0x22e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x230: Push(Stack[-7])
0x231: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x232: @ irand(Stack[-4], Stack[-7])
0x233: Pop(0)
0x234: Push("all")
0x235: PushEmpty(string, int)
0x236: Stack[-1] = Stack[-7]
0x237: Call2 0x314

0x238: Pop(1)
0x239: @ PlayAnimation(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: @ WaitForAnimEnd(Stack[-3])
0x23c: Pop(0)
0x23d: Pop(0); Push((bool) Stack[-3] == 0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x25d

0x240: GOTO 0x252

0x241: Push((int) 1)
0x242: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x244: Push((int) 4)
0x245: @ rand(Stack[-3], Stack[-1])
0x246: Pop(1)
0x247: Push((int) 1)
0x248: Pop(1); Push(Stack[-3] + Stack[-1]);
0x249: @ Sleep(Stack[-1], Stack[-2])
0x24a: Pop(1)
0x24b: Pop(0); Push((bool) Stack[-1] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x25d

0x24e: GOTO 0x252

0x24f: Push(Stack[-6])
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: GOTO 0x25d

0x252: PushEmpty(bool)
0x253: Call2 0x260

0x254: Pop(0)
0x255: Pop(1); Push((bool) Stack[-1] == 0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: GOTO 0x25d

0x258: @ ResetAAS()
0x259: Pop(0)
0x25a: Push((int) 1)
0x25b: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x25c: GOTO 0x21f

0x25d: @ ResetAAS()
0x25e: Pop(0)
0x25f: Return(); Pop(14)

0x260: Stack[-1] = (bool) 1
0x261: Return(); Pop(0)

0x262: @ StopAnimation()
0x263: Pop(0)
0x264: @ StopGroup0()
0x265: Pop(0)
0x266: Return(); Pop(0)

0x267: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x268: @ GetPosition(Stack[-3])
0x269: Pop(0)
0x26a: @@ GetPosition(Stack[-2])
0x26b: Pop(0)
0x26c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x26d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x26e: Return(); Pop(6)

0x26f: PushEmpty(bool, bool)
0x270: @ IsLoaded(Stack[-1])
0x271: Pop(0)
0x272: Stack[-3] = Stack[-1]
0x273: Return(); Pop(2)

0x274: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x275: @@ GetPosition(Stack[-8])
0x276: Pop(0)
0x277: @@ GetEyesHeight(Stack[-9])
0x278: Pop(0)
0x279: Push(CvectorIndex(Stack[-8], 1))
0x27a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x27c: @ GetPosition(Stack[-7])
0x27d: Pop(0)
0x27e: @ GetEyesHeight(Stack[-9])
0x27f: Pop(0)
0x280: Push(CvectorIndex(Stack[-7], 1))
0x281: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x282: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x283: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x284: Push(CvectorIndex(Stack[-6], 1))
0x285: Stack[-1] = (int) 0
0x286: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x287: Pop(0); Push(Stack[-6] | Stack[-6]);
0x288: Pop(1); Push(Sqrt(Stack[-1]))
0x289: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x28a: Stack[-5] = -Stack[-6]; Pop(0);
0x28b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x28c: PushEmpty(cvector, cvector)
0x28d: Push(CVector(0.0, 1.0, 0.0))
0x28e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x28f: Call2 0x300

0x290: Pop(1)
0x291: Push((int) 25)
0x292: Pop(2); Push(Stack[-2] * Stack[-1]);
0x293: Pop(2); Push(Stack[-2] + Stack[-1]);
0x294: Push(CVector(0.0, 10.0, 0.0))
0x295: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x296: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x297: @ IsOverrideActive(Stack[-2])
0x298: Pop(0)
0x299: Push(Stack[-2])
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-21] = (bool) 0
0x29c: Return(); Pop(18)

0x29d: @ StopWorld()
0x29e: Pop(0)
0x29f: @ CameraTransit(Stack[-3], Stack[-5])
0x2a0: Pop(0)
0x2a1: Push(CvectorIndex(Stack[-4], 0))
0x2a2: Push(CvectorIndex(Stack[-5], 2))
0x2a3: @ Rotate(Stack[-2], Stack[-1])
0x2a4: Pop(2)
0x2a5: PushEmpty(bool)
0x2a6: Call2 0x334

0x2a7: Pop(0)
0x2a8: IF (Stack[-1] == 0) GOTO 0x2aa; Pop(1)

0x2a9: GOTO 0x2b2

0x2aa: Push("head")
0x2ab: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2ac: Pop(1)
0x2ad: Push(Stack[-1])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2af: Push("head")
0x2b0: @ LookAsyncCamera(Stack[-1])
0x2b1: Pop(1)
0x2b2: @ CameraWaitForPlayFinish()
0x2b3: Pop(0)
0x2b4: @ ResumeWorld()
0x2b5: Pop(0)
0x2b6: Stack[-21] = (bool) 1
0x2b7: Return(); Pop(18)

0x2b8: PushEmpty(bool, bool)
0x2b9: @ CameraSwitchToNormal()
0x2ba: Pop(0)
0x2bb: PushEmpty(bool)
0x2bc: Call2 0x334

0x2bd: Pop(0)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: GOTO 0x2c8

0x2c0: Push("head")
0x2c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c2: Pop(1)
0x2c3: Push(Stack[-1])
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c8; Pop(1)

0x2c5: Push("head")
0x2c6: @ UnlookAsync(Stack[-1])
0x2c7: Pop(1)
0x2c8: Return(); Pop(2)

0x2c9: PushEmpty(bool, float, float, bool, float, float)
0x2ca: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2cb: Pop(0)
0x2cc: Push(Stack[-3])
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2ce: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2cf: Pop(0)
0x2d0: Push((bool) 0)
0x2d1: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(1)
0x2d3: GOTO 0x2d8

0x2d4: Push("Can't find lsh animation : ")
0x2d5: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2d6: @ Trace(Stack[-1])
0x2d7: Pop(1)
0x2d8: Return(); Pop(6)

0x2d9: PushEmpty(bool, float, float, bool, float, float)
0x2da: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2db: Pop(0)
0x2dc: Push(Stack[-3])
0x2dd: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2de: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2df: Pop(0)
0x2e0: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2e1: Pop(0)
0x2e2: GOTO 0x2e7

0x2e3: Push("Can't find lsh animation : ")
0x2e4: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2e5: @ Trace(Stack[-1])
0x2e6: Pop(1)
0x2e7: Return(); Pop(6)

0x2e8: PushEmpty(float, cvector, float, cvector)
0x2e9: @@ GetEyesHeight(Stack[-2])
0x2ea: Pop(0)
0x2eb: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2ec: Push(CvectorIndex(Stack[-1], 1))
0x2ed: Stack[-1] = Stack[-3]
0x2ee: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ef: Push("head")
0x2f0: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2f1: Pop(1)
0x2f2: Return(); Pop(4)

0x2f3: PushEmpty(bool)
0x2f4: Call2 0x334

0x2f5: Pop(0)
0x2f6: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f7: @ lshStopSpeech()
0x2f8: Pop(0)
0x2f9: Return(); Pop(0)

0x2fa: PushEmpty(object, object)
0x2fb: @ self(Stack[-1])
0x2fc: Pop(0)
0x2fd: Stack[-3] = Stack[-1]
0x2fe: Return(); Pop(2)

0x2ff: Stack[-1] = 0
0x300: PushEmpty(float, float)
0x301: Pop(0); Push(Stack[-3] | Stack[-3]);
0x302: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x303: Push((float)0.0)
0x304: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x305: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x306: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x307: Return(); Pop(2)

0x308: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x309: Return(); Pop(2)

0x30a: PushEmpty(int, int)
0x30b: @ GetVariable(Stack[-3], Stack[-1])
0x30c: Pop(0)
0x30d: Stack[-4] = Stack[-1]
0x30e: Return(); Pop(2)

0x30f: PushEmpty(float, float)
0x310: @ GetGameTime(Stack[-1])
0x311: Pop(0)
0x312: Stack[-3] = Stack[-1]
0x313: Return(); Pop(2)

0x314: PushEmpty(string, string)
0x315: Stack[-1] = "idle"
0x316: Push(Stack[-3])
0x317: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x318: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x319: Stack[-4] = Stack[-1]
0x31a: Return(); Pop(2)

0x31b: PushEmpty(int, bool, int, bool)
0x31c: Stack[-2] = (int) 0
0x31d: Push("all")
0x31e: PushEmpty(string, int)
0x31f: Stack[-1] = Stack[-5]
0x320: Call2 0x314

0x321: Pop(1)
0x322: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x323: Pop(2)
0x324: Pop(0); Push((bool) Stack[-1] == 0)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: GOTO 0x32a

0x327: Push((int) 1)
0x328: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x329: GOTO 0x31d

0x32a: Stack[-5] = Stack[-2]
0x32b: Return(); Pop(4)

0x32c: Stack[-1] = (int) 515572
0x32d: Return(); Pop(0)

0x32e: Stack[-1] = (int) 504031
0x32f: Return(); Pop(0)

0x330: Stack[-1] = "ui/NPC_Citizen2.png"
0x331: Return(); Pop(0)

0x332: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x333: Return(); Pop(0)

0x334: Stack[-1] = (bool) 0
0x335: Return(); Pop(0)

0x336: PushEmpty(object, object)
0x337: Push("d1q01")
0x338: Push((int) 3)
0x339: @ SetVariable(Stack[-2], Stack[-1])
0x33a: Pop(2)
0x33b: PushEmpty(object)
0x33c: Call2 0x39f

0x33d: Stack[-2] = Stack[-1]
0x33e: Pop(1)
0x33f: Push("d1q01PatrolGotoAlexandr")
0x340: Push("pt_map_alexandr")
0x341: Push((int) 1)
0x342: Push((int) 508632)
0x343: PushEmpty(float)
0x344: Call2 0x30f

0x345: Pop(0)
0x346: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x347: Pop(5)
0x348: PushEmpty()
0x349: Call2 0x369

0x34a: Pop(0)
0x34b: Return(); Pop(2)

0x34c: Stack[-1] = 0
0x34d: PushEmpty()
0x34e: PushEmpty(object, string, float)
0x34f: PushEmpty(object)
0x350: Call2 0x39f

0x351: Stack[-4] = Stack[-1]
0x352: Pop(1)
0x353: Stack[-2] = "pt_map_alexandr"
0x354: Stack[-1] = (int) 2
0x355: Call2 0x3b0

0x356: Pop(3)
0x357: PushEmpty(object)
0x358: Call2 0x39f

0x359: Pop(0)
0x35a: @@ ShowMap(Stack[-1])
0x35b: Pop(1)
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: PushEmpty(int, string)
0x35f: Stack[-1] = "d1q01"
0x360: Call2 0x30a

0x361: Pop(1)
0x362: Push((int) 2)
0x363: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-2] = (bool) 1
0x366: Return(); Pop(0)

0x367: Stack[-2] = (bool) 0
0x368: Return(); Pop(0)

0x369: PushEmpty(object, object)
0x36a: Push((int) 33)
0x36b: Push((int) 1)
0x36c: Push((int) 512115)
0x36d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(3)
0x36f: PushEmpty(bool, object, int)
0x370: Stack[-2] = Stack[-4]
0x371: Stack[-1] = (int) 2
0x372: Call2 0x383

0x373: Pop(3)
0x374: Return(); Pop(2)

0x375: Stack[-1] = 0
0x376: PushEmpty(object, object)
0x377: @ GetDiaryRoot(Stack[-1])
0x378: Pop(0)
0x379: Pop(0); Push((bool) Stack[-1] == 0)
0x37a: IF (Stack[-1] == 0) GOTO 0x380; Pop(1)

0x37b: Push("Can't retrieve diary root")
0x37c: @ Trace(Stack[-1])
0x37d: Pop(1)
0x37e: Stack[-3] = (bool) 0
0x37f: Return(); Pop(2)

0x380: Stack[-3] = Stack[-1]
0x381: Return(); Pop(2)

0x382: Stack[-1] = 0
0x383: PushEmpty(object, object, int, object, object, int)
0x384: PushEmpty(object)
0x385: Call2 0x376

0x386: Stack[-4] = Stack[-1]
0x387: Pop(1)
0x388: @@ Find(Stack[-7], Stack[-2])
0x389: Pop(0)
0x38a: Pop(0); Push((bool) Stack[-2] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x392; Pop(1)

0x38c: Push("Can't find diary parent with id: ")
0x38d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x38e: @ Trace(Stack[-1])
0x38f: Pop(1)
0x390: Stack[-9] = (bool) 0
0x391: Return(); Pop(6)

0x392: @@ AddChild(Stack[-8])
0x393: Pop(0)
0x394: Push((int) 7)
0x395: @ SendWorldWndMessage(Stack[-1])
0x396: Pop(1)
0x397: @@ GetCategory(Stack[-1])
0x398: Pop(0)
0x399: @ SetDiarySection(Stack[-1])
0x39a: Pop(0)
0x39b: Stack[-9] = (bool) 0
0x39c: Return(); Pop(6)

0x39d: Stack[-2] = 0
0x39e: Stack[-3] = 0
0x39f: PushEmpty(object, object, object, object)
0x3a0: @ GetMainOutdoorScene(Stack[-2])
0x3a1: Pop(0)
0x3a2: Pop(0); Push((bool) Stack[-2] == 0)
0x3a3: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a4: Push("Can't find main outdoor scene")
0x3a5: @ Trace(Stack[-1])
0x3a6: Pop(1)
0x3a7: Stack[-1] = 0
0x3a8: Stack[-5] = Stack[-1]
0x3a9: Return(); Pop(4)

0x3aa: @@ GetMap(Stack[-1])
0x3ab: Pop(0)
0x3ac: Stack[-5] = Stack[-1]
0x3ad: Return(); Pop(4)

0x3ae: Stack[-1] = 0
0x3af: Stack[-2] = 0
0x3b0: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3b1: @ GetMainOutdoorScene(Stack[-2])
0x3b2: Pop(0)
0x3b3: Pop(0); Push((bool) Stack[-2] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b5: Push("Can't find main outdoor scene")
0x3b6: @ Trace(Stack[-1])
0x3b7: Pop(1)
0x3b8: Return(); Pop(8)

0x3b9: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3ba: Pop(0)
0x3bb: Pop(0); Push((bool) Stack[-1] == 0)
0x3bc: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3bd: Push("Warning: outdoor scene locator ")
0x3be: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3bf: Push(" doesnt exist")
0x3c0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3c1: @ Trace(Stack[-1])
0x3c2: Pop(1)
0x3c3: @@ GetMap(Stack[-11])
0x3c4: Pop(0)
0x3c5: Pop(0); Push((bool) Stack[-11] == 0)
0x3c6: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c7: Push("Can't find map")
0x3c8: @ Trace(Stack[-1])
0x3c9: Pop(1)
0x3ca: Return(); Pop(8)

0x3cb: Push(CvectorIndex(Stack[-4], 0))
0x3cc: Push(CvectorIndex(Stack[-5], 2))
0x3cd: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x3ce: Pop(2)
0x3cf: Return(); Pop(8)

0x3d0: Stack[-2] = 0
0x3d1: PushEmpty(int, int)
0x3d2: Push("branch")
0x3d3: @ GetVariable(Stack[-1], Stack[-2])
0x3d4: Pop(1)
0x3d5: Push((int) 0)
0x3d6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d7: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d8: Stack[-3] = (int) 1
0x3d9: Return(); Pop(2)

0x3da: GOTO 0x3e0

0x3db: Push((int) 1)
0x3dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3de: Stack[-3] = (int) 2
0x3df: Return(); Pop(2)

0x3e0: Stack[-3] = (int) 3
0x3e1: Return(); Pop(2)

