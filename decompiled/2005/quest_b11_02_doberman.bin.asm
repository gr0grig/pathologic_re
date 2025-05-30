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
	ui/NPC_Citizen2.png
	ui/NPC_Citizen2_b.png
	b11q02
	quest_b11_02
	teleport
	fail
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x144
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa9 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x14d Vars = (object)
		EVENT_7 Op = 0x182 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x20a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x2c5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x2c3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x2c7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x2c9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x324

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
0x41: Call2 0x24e

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
0x4f: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x93

0x53: Pop(1)
0x54: Push((int) 531117)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x2e2

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 531387)
0x5f: Push((int) 32728)
0x60: Push((int) 32726)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: PushEmpty(bool, object)
0x64: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x65: Call2 0x2e2

0x66: Pop(1)
0x67: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x68: Push((int) 531119)
0x69: Push((int) 32438)
0x6a: Push((int) 32437)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: Push((int) 531388)
0x6e: Push((int) -1)
0x6f: Push((int) 32727)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: GOTO 0x75

0x73: Return(); Pop(0)

0x74: GOTO 0x4e

0x75: PushEmpty(bool)
0x76: Call2 0x2cb

0x77: Pop(0)
0x78: IF (Stack[-1] == 0) GOTO 0x84; Pop(1)

0x79: @ lshWaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x80: Call2 0x25f

0x81: Pop(1)
0x82: GOTO 0x79

0x83: GOTO 0x92

0x84: Push("all")
0x85: Push("idle")
0x86: @ PlayAnimation(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: @ WaitForAnimEnd()
0x89: Pop(0)
0x8a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0x92

0x8d: Push("all")
0x8e: Push("idle")
0x8f: @ PlayAnimation(Stack[-2], Stack[-1])
0x90: Pop(2)
0x91: GOTO 0x88

0x92: Return(); Pop(0)

0x93: PushEmpty()
0x94: PushEmpty(bool)
0x95: Call2 0x2cb

0x96: Pop(0)
0x97: Pop(1); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Return(); Pop(0)

0x9d: PushEmpty(string, bool)
0x9e: Stack[-2] = Stack[-3]
0x9f: Push("")
0xa0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa1: IF (Stack[-1] == 0) GOTO 0xa4; Pop(1)

0xa2: Stack[-1] = (bool) 0
0xa3: GOTO 0xa5

0xa4: Stack[-1] = (bool) 1
0xa5: Call2 0x26f

0xa6: Pop(2)
0xa7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: Push((int) 1)
0xab: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0xac: PushEmpty()
0xad: Call2 0x289

0xae: Pop(0)
0xaf: Push((int) 32738)
0xb0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb1: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb2: PushEmpty(object, object)
0xb3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb5: Call2 0x2d8

0xb6: Pop(2)
0xb7: Push((int) 32439)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call2 0x2cd

0xbe: Pop(2)
0xbf: Push((int) 32435)
0xc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xc2: PushEmpty(string)
0xc3: Stack[-1] = "Neutral"
0xc4: Call2 0x93

0xc5: Pop(1)
0xc6: Push((int) 531117)
0xc7: @@ SetMessage(Stack[-1])
0xc8: Pop(1)
0xc9: @@ ClearReplies()
0xca: Pop(0)
0xcb: PushEmpty(bool, object)
0xcc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd: Call2 0x2e2

0xce: Pop(1)
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: Push((int) 531387)
0xd1: Push((int) 32728)
0xd2: Push((int) 32726)
0xd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4: Pop(3)
0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x2e2

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xdf; Pop(1)

0xda: Push((int) 531119)
0xdb: Push((int) 32438)
0xdc: Push((int) 32437)
0xdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde: Pop(3)
0xdf: Push((int) 531388)
0xe0: Push((int) -1)
0xe1: Push((int) 32727)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Return(); Pop(0)

0xe5: Push((int) 32438)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call2 0x93

0xeb: Pop(1)
0xec: Push((int) 531120)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 531121)
0xf2: Push((int) -1)
0xf3: Push((int) 32439)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: Push((int) 32728)
0xf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf9: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0xfa: PushEmpty(string)
0xfb: Stack[-1] = "Neutral"
0xfc: Call2 0x93

0xfd: Pop(1)
0xfe: Push((int) 531389)
0xff: @@ SetMessage(Stack[-1])
0x100: Pop(1)
0x101: @@ ClearReplies()
0x102: Pop(0)
0x103: Push((int) 531390)
0x104: Push((int) 32730)
0x105: Push((int) 32729)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: Push((int) 531395)
0x109: Push((int) 32736)
0x10a: Push((int) 32735)
0x10b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c: Pop(3)
0x10d: Return(); Pop(0)

0x10e: Push((int) 32730)
0x10f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x111: PushEmpty(string)
0x112: Stack[-1] = "Neutral"
0x113: Call2 0x93

0x114: Pop(1)
0x115: Push((int) 531391)
0x116: @@ SetMessage(Stack[-1])
0x117: Pop(1)
0x118: @@ ClearReplies()
0x119: Pop(0)
0x11a: Push((int) 531394)
0x11b: Push((int) 32736)
0x11c: Push((int) 32734)
0x11d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e: Pop(3)
0x11f: Push((int) 531392)
0x120: Push((int) 32438)
0x121: Push((int) 32731)
0x122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123: Pop(3)
0x124: Return(); Pop(0)

0x125: Push((int) 32736)
0x126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x127: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x128: PushEmpty(string)
0x129: Stack[-1] = "Neutral"
0x12a: Call2 0x93

0x12b: Pop(1)
0x12c: Push((int) 531396)
0x12d: @@ SetMessage(Stack[-1])
0x12e: Pop(1)
0x12f: @@ ClearReplies()
0x130: Pop(0)
0x131: Push((int) 531397)
0x132: Push((int) -1)
0x133: Push((int) 32738)
0x134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135: Pop(3)
0x136: Return(); Pop(0)

0x137: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x138: PushEmpty(bool)
0x139: Call2 0x2cb

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13c: @ lshStopAnimation()
0x13d: Pop(0)
0x13e: GOTO 0x141

0x13f: @ StopAnimation()
0x140: Pop(0)
0x141: Return(); Pop(0)

0x142: GOTO 0xaa

0x143: Return(); Pop(0)

0x144: Push((bool) 1)
0x145: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x146: PushEmpty(float, float)
0x147: Stack[-2] = (int) 300
0x148: Stack[-1] = (int) 100
0x149: Call2 0x158

0x14a: Pop(2)
0x14b: GOTO 0x144

0x14c: Return(); Pop(0)

0x14d: PushEmpty()
0x14e: PushEmpty()
0x14f: Call2 0x199

0x150: Pop(0)
0x151: PushEmpty(int, object)
0x152: Stack[-1] = Stack[-3]
0x153: Push(-2, 1); TaskCall(0)
0x154: Call2 0x0

0x155: Pop(-2, 1); TaskReturn
0x156: Pop(2)
0x157: Return(); Pop(0)

0x158: PushEmpty()
0x159: PushEmpty(bool)
0x15a: Call2 0x205

0x15b: Pop(0)
0x15c: Pop(1); Push((bool) Stack[-1] == 0)
0x15d: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15e: Return(); Pop(0)

0x15f: Push("player")
0x160: @ FindActor(Stack[-4], Stack[-1])
0x161: Pop(1)
0x162: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x163: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x164: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x165: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x166: Push((int) 10)
0x167: Push((float)1.0)
0x168: @ SetTimer(Stack[-2], Stack[-1])
0x169: Pop(2)
0x16a: PushEmpty()
0x16b: Call2 0x1a7

0x16c: Pop(0)
0x16d: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x16e: IF (Stack[-1] == 0) GOTO 0x172; Pop(1)

0x16f: Push((int) 10)
0x170: @ KillTimer(Stack[-1])
0x171: Pop(1)
0x172: Return(); Pop(0)

0x173: PushEmpty(float, float)
0x174: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Stack[-3] = (bool) 0
0x177: Return(); Pop(2)

0x178: PushEmpty(float, object)
0x179: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x17a: Call2 0x1fd

0x17b: Pop(1)
0x17c: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x17d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x17e: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17f: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x180: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x181: Return(); Pop(2)

0x182: PushEmpty()
0x183: Push((int) 10)
0x184: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x186: PushEmpty(bool)
0x187: Call2 0x173

0x188: Pop(0)
0x189: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x18b: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18c: PushEmpty(object)
0x18d: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x18e: Call2 0x27e

0x18f: Pop(1)
0x190: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x191: GOTO 0x198

0x192: Push( Stack[2 + Tasks[-1].StackPointer] )
0x193: IF (Stack[-1] == 0) GOTO 0x198; Pop(1)

0x194: Push("head")
0x195: @ UnlookAsync(Stack[-1])
0x196: Pop(1)
0x197: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x198: Return(); Pop(0)

0x199: PushEmpty()
0x19a: Call2 0x1f8

0x19b: Pop(0)
0x19c: Push((int) 10)
0x19d: @ KillTimer(Stack[-1])
0x19e: Pop(1)
0x19f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a1: Push("head")
0x1a2: @ UnlookAsync(Stack[-1])
0x1a3: Pop(1)
0x1a4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1a5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a6: Return(); Pop(0)

0x1a7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1a8: @ WaitForAnimEnd()
0x1a9: Pop(0)
0x1aa: PushEmpty(bool)
0x1ab: Call2 0x205

0x1ac: Pop(0)
0x1ad: Pop(1); Push((bool) Stack[-1] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: Return(); Pop(14)

0x1b0: PushEmpty(int)
0x1b1: Call2 0x2b2

0x1b2: Stack[-8] = Stack[-1]
0x1b3: Pop(1)
0x1b4: Stack[-6] = (int) 0
0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 0
0x1b7: Push((int) 5)
0x1b8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1ba: PushEmpty(bool)
0x1bb: Call2 0x205

0x1bc: Pop(0)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1be: Stack[-1] = (bool) 1
0x1bf: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1c0: Push((int) 3)
0x1c1: @ irand(Stack[-6], Stack[-1])
0x1c2: Pop(1)
0x1c3: Push((int) 0)
0x1c4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1d7; Pop(1)

0x1c6: Push(Stack[-7])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1c8: @ irand(Stack[-4], Stack[-7])
0x1c9: Pop(0)
0x1ca: Push("all")
0x1cb: PushEmpty(string, int)
0x1cc: Stack[-1] = Stack[-7]
0x1cd: Call2 0x2ab

0x1ce: Pop(1)
0x1cf: @ PlayAnimation(Stack[-2], Stack[-1])
0x1d0: Pop(2)
0x1d1: @ WaitForAnimEnd(Stack[-3])
0x1d2: Pop(0)
0x1d3: Pop(0); Push((bool) Stack[-3] == 0)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: GOTO 0x1f3

0x1d6: GOTO 0x1e8

0x1d7: Push((int) 1)
0x1d8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1da: Push((int) 4)
0x1db: @ rand(Stack[-3], Stack[-1])
0x1dc: Pop(1)
0x1dd: Push((int) 1)
0x1de: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1df: @ Sleep(Stack[-1], Stack[-2])
0x1e0: Pop(1)
0x1e1: Pop(0); Push((bool) Stack[-1] == 0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: GOTO 0x1f3

0x1e4: GOTO 0x1e8

0x1e5: Push(Stack[-6])
0x1e6: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e7: GOTO 0x1f3

0x1e8: PushEmpty(bool)
0x1e9: Call2 0x1f6

0x1ea: Pop(0)
0x1eb: Pop(1); Push((bool) Stack[-1] == 0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f3

0x1ee: @ ResetAAS()
0x1ef: Pop(0)
0x1f0: Push((int) 1)
0x1f1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1f2: GOTO 0x1b5

0x1f3: @ ResetAAS()
0x1f4: Pop(0)
0x1f5: Return(); Pop(14)

0x1f6: Stack[-1] = (bool) 1
0x1f7: Return(); Pop(0)

0x1f8: @ StopAnimation()
0x1f9: Pop(0)
0x1fa: @ StopGroup0()
0x1fb: Pop(0)
0x1fc: Return(); Pop(0)

0x1fd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1fe: @ GetPosition(Stack[-3])
0x1ff: Pop(0)
0x200: @@ GetPosition(Stack[-2])
0x201: Pop(0)
0x202: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x203: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x204: Return(); Pop(6)

0x205: PushEmpty(bool, bool)
0x206: @ IsLoaded(Stack[-1])
0x207: Pop(0)
0x208: Stack[-3] = Stack[-1]
0x209: Return(); Pop(2)

0x20a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x20b: @@ GetPosition(Stack[-8])
0x20c: Pop(0)
0x20d: @@ GetEyesHeight(Stack[-9])
0x20e: Pop(0)
0x20f: Push(CvectorIndex(Stack[-8], 1))
0x210: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x211: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x212: @ GetPosition(Stack[-7])
0x213: Pop(0)
0x214: @ GetEyesHeight(Stack[-9])
0x215: Pop(0)
0x216: Push(CvectorIndex(Stack[-7], 1))
0x217: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x218: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x219: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x21a: Push(CvectorIndex(Stack[-6], 1))
0x21b: Stack[-1] = (int) 0
0x21c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x21d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x21e: Pop(1); Push(Sqrt(Stack[-1]))
0x21f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x220: Stack[-5] = -Stack[-6]; Pop(0);
0x221: Pop(0); Push(Stack[-6] * Stack[-19]);
0x222: PushEmpty(cvector, cvector)
0x223: Push(CVector(0.0, 1.0, 0.0))
0x224: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x225: Call2 0x290

0x226: Pop(1)
0x227: Push((int) 25)
0x228: Pop(2); Push(Stack[-2] * Stack[-1]);
0x229: Pop(2); Push(Stack[-2] + Stack[-1]);
0x22a: Push(CVector(0.0, 10.0, 0.0))
0x22b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x22c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x22d: @ IsOverrideActive(Stack[-2])
0x22e: Pop(0)
0x22f: Push(Stack[-2])
0x230: IF (Stack[-1] == 0) GOTO 0x233; Pop(1)

0x231: Stack[-21] = (bool) 0
0x232: Return(); Pop(18)

0x233: @ StopWorld()
0x234: Pop(0)
0x235: @ CameraTransit(Stack[-3], Stack[-5])
0x236: Pop(0)
0x237: Push(CvectorIndex(Stack[-4], 0))
0x238: Push(CvectorIndex(Stack[-5], 2))
0x239: @ Rotate(Stack[-2], Stack[-1])
0x23a: Pop(2)
0x23b: PushEmpty(bool)
0x23c: Call2 0x2cb

0x23d: Pop(0)
0x23e: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23f: GOTO 0x248

0x240: Push("head")
0x241: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x242: Pop(1)
0x243: Push(Stack[-1])
0x244: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x245: Push("head")
0x246: @ LookAsyncCamera(Stack[-1])
0x247: Pop(1)
0x248: @ CameraWaitForPlayFinish()
0x249: Pop(0)
0x24a: @ ResumeWorld()
0x24b: Pop(0)
0x24c: Stack[-21] = (bool) 1
0x24d: Return(); Pop(18)

0x24e: PushEmpty(bool, bool)
0x24f: @ CameraSwitchToNormal()
0x250: Pop(0)
0x251: PushEmpty(bool)
0x252: Call2 0x2cb

0x253: Pop(0)
0x254: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x255: GOTO 0x25e

0x256: Push("head")
0x257: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x258: Pop(1)
0x259: Push(Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x25e; Pop(1)

0x25b: Push("head")
0x25c: @ UnlookAsync(Stack[-1])
0x25d: Pop(1)
0x25e: Return(); Pop(2)

0x25f: PushEmpty(bool, float, float, bool, float, float)
0x260: @ lshHasAnimation(Stack[-3], Stack[-7])
0x261: Pop(0)
0x262: Push(Stack[-3])
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x265: Pop(0)
0x266: Push((bool) 0)
0x267: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x268: Pop(1)
0x269: GOTO 0x26e

0x26a: Push("Can't find lsh animation : ")
0x26b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x26c: @ Trace(Stack[-1])
0x26d: Pop(1)
0x26e: Return(); Pop(6)

0x26f: PushEmpty(bool, float, float, bool, float, float)
0x270: @ lshHasAnimation(Stack[-3], Stack[-8])
0x271: Pop(0)
0x272: Push(Stack[-3])
0x273: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x274: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x275: Pop(0)
0x276: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x277: Pop(0)
0x278: GOTO 0x27d

0x279: Push("Can't find lsh animation : ")
0x27a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x27b: @ Trace(Stack[-1])
0x27c: Pop(1)
0x27d: Return(); Pop(6)

0x27e: PushEmpty(float, cvector, float, cvector)
0x27f: @@ GetEyesHeight(Stack[-2])
0x280: Pop(0)
0x281: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x282: Push(CvectorIndex(Stack[-1], 1))
0x283: Stack[-1] = Stack[-3]
0x284: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x285: Push("head")
0x286: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x287: Pop(1)
0x288: Return(); Pop(4)

0x289: PushEmpty(bool)
0x28a: Call2 0x2cb

0x28b: Pop(0)
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: @ lshStopSpeech()
0x28e: Pop(0)
0x28f: Return(); Pop(0)

0x290: PushEmpty(float, float)
0x291: Pop(0); Push(Stack[-3] | Stack[-3]);
0x292: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x293: Push((float)0.0)
0x294: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x295: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x296: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x297: Return(); Pop(2)

0x298: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x299: Return(); Pop(2)

0x29a: PushEmpty(int, int)
0x29b: @ GetVariable(Stack[-3], Stack[-1])
0x29c: Pop(0)
0x29d: Stack[-4] = Stack[-1]
0x29e: Return(); Pop(2)

0x29f: PushEmpty(object, object)
0x2a0: @ FindActor(Stack[-1], Stack[-4])
0x2a1: Pop(0)
0x2a2: Pop(0); Push((bool) Stack[-1] == 0)
0x2a3: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a4: Stack[-5] = (bool) 0
0x2a5: Return(); Pop(2)

0x2a6: @ Trigger(Stack[-1], Stack[-3])
0x2a7: Pop(0)
0x2a8: Stack[-5] = (bool) 1
0x2a9: Return(); Pop(2)

0x2aa: Stack[-1] = 0
0x2ab: PushEmpty(string, string)
0x2ac: Stack[-1] = "idle"
0x2ad: Push(Stack[-3])
0x2ae: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2af: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2b0: Stack[-4] = Stack[-1]
0x2b1: Return(); Pop(2)

0x2b2: PushEmpty(int, bool, int, bool)
0x2b3: Stack[-2] = (int) 0
0x2b4: Push("all")
0x2b5: PushEmpty(string, int)
0x2b6: Stack[-1] = Stack[-5]
0x2b7: Call2 0x2ab

0x2b8: Pop(1)
0x2b9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2ba: Pop(2)
0x2bb: Pop(0); Push((bool) Stack[-1] == 0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: GOTO 0x2c1

0x2be: Push((int) 1)
0x2bf: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2c0: GOTO 0x2b4

0x2c1: Stack[-5] = Stack[-2]
0x2c2: Return(); Pop(4)

0x2c3: Stack[-1] = (int) 518097
0x2c4: Return(); Pop(0)

0x2c5: Stack[-1] = (int) 518096
0x2c6: Return(); Pop(0)

0x2c7: Stack[-1] = "ui/NPC_Citizen2.png"
0x2c8: Return(); Pop(0)

0x2c9: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x2ca: Return(); Pop(0)

0x2cb: Stack[-1] = (bool) 0
0x2cc: Return(); Pop(0)

0x2cd: PushEmpty()
0x2ce: Push("b11q02")
0x2cf: Push((int) 3)
0x2d0: @ SetVariable(Stack[-2], Stack[-1])
0x2d1: Pop(2)
0x2d2: PushEmpty(bool, string, string)
0x2d3: Stack[-2] = "quest_b11_02"
0x2d4: Stack[-1] = "teleport"
0x2d5: Call2 0x29f

0x2d6: Pop(3)
0x2d7: Return(); Pop(0)

0x2d8: PushEmpty()
0x2d9: PushEmpty()
0x2da: Call2 0x2ee

0x2db: Pop(0)
0x2dc: PushEmpty(bool, string, string)
0x2dd: Stack[-2] = "quest_b11_02"
0x2de: Stack[-1] = "fail"
0x2df: Call2 0x29f

0x2e0: Pop(3)
0x2e1: Return(); Pop(0)

0x2e2: PushEmpty()
0x2e3: PushEmpty(int, string)
0x2e4: Stack[-1] = "b11q02"
0x2e5: Call2 0x29a

0x2e6: Pop(1)
0x2e7: Push((int) 2)
0x2e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2ea: Stack[-2] = (bool) 1
0x2eb: Return(); Pop(0)

0x2ec: Stack[-2] = (bool) 0
0x2ed: Return(); Pop(0)

0x2ee: PushEmpty(object, object)
0x2ef: Push((int) 610)
0x2f0: Push((int) 2)
0x2f1: Push((int) 531505)
0x2f2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: PushEmpty(bool, object, int)
0x2f5: Stack[-2] = Stack[-4]
0x2f6: Stack[-1] = (int) 598
0x2f7: Call2 0x308

0x2f8: Pop(3)
0x2f9: Return(); Pop(2)

0x2fa: Stack[-1] = 0
0x2fb: PushEmpty(object, object)
0x2fc: @ GetDiaryRoot(Stack[-1])
0x2fd: Pop(0)
0x2fe: Pop(0); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x300: Push("Can't retrieve diary root")
0x301: @ Trace(Stack[-1])
0x302: Pop(1)
0x303: Stack[-3] = (bool) 0
0x304: Return(); Pop(2)

0x305: Stack[-3] = Stack[-1]
0x306: Return(); Pop(2)

0x307: Stack[-1] = 0
0x308: PushEmpty(object, object, int, object, object, int)
0x309: PushEmpty(object)
0x30a: Call2 0x2fb

0x30b: Stack[-4] = Stack[-1]
0x30c: Pop(1)
0x30d: @@ Find(Stack[-7], Stack[-2])
0x30e: Pop(0)
0x30f: Pop(0); Push((bool) Stack[-2] == 0)
0x310: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x311: Push("Can't find diary parent with id: ")
0x312: Pop(1); Push(Stack[-1] + Stack[-8]);
0x313: @ Trace(Stack[-1])
0x314: Pop(1)
0x315: Stack[-9] = (bool) 0
0x316: Return(); Pop(6)

0x317: @@ AddChild(Stack[-8])
0x318: Pop(0)
0x319: Push((int) 7)
0x31a: @ SendWorldWndMessage(Stack[-1])
0x31b: Pop(1)
0x31c: @@ GetCategory(Stack[-1])
0x31d: Pop(0)
0x31e: @ SetDiarySection(Stack[-1])
0x31f: Pop(0)
0x320: Stack[-9] = (bool) 0
0x321: Return(); Pop(6)

0x322: Stack[-2] = 0
0x323: Stack[-3] = 0
0x324: PushEmpty(int, int)
0x325: Push("branch")
0x326: @ GetVariable(Stack[-1], Stack[-2])
0x327: Pop(1)
0x328: Push((int) 0)
0x329: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32b: Stack[-3] = (int) 1
0x32c: Return(); Pop(2)

0x32d: GOTO 0x333

0x32e: Push((int) 1)
0x32f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x330: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x331: Stack[-3] = (int) 2
0x332: Return(); Pop(2)

0x333: Stack[-3] = (int) 3
0x334: Return(); Pop(2)

