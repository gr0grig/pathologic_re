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
	b11q04
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
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x165
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xae Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x16b Vars = (object)
		EVENT_26 Op = 0x19c Vars = (string)
		EVENT_6 Op = 0x1a4 Vars = ()
		EVENT_7 Op = 0x1e5 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x26d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x322

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x320

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x324

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x326

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x375

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
0x41: Call2 0x2b1

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
0x4f: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x333

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x98

0x58: Pop(1)
0x59: Push((int) 530515)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 530516)
0x5f: Push((int) 32774)
0x60: Push((int) 31875)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x7a

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x98

0x67: Pop(1)
0x68: Push((int) 530523)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: Push((int) 530524)
0x6e: Push((int) -1)
0x6f: Push((int) 31883)
0x70: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71: Pop(3)
0x72: Push((int) 531426)
0x73: Push((int) -1)
0x74: Push((int) 32770)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: GOTO 0x7a

0x78: Return(); Pop(0)

0x79: GOTO 0x4e

0x7a: PushEmpty(bool)
0x7b: Call2 0x328

0x7c: Pop(0)
0x7d: IF (Stack[-1] == 0) GOTO 0x89; Pop(1)

0x7e: @ lshWaitForAnimEnd()
0x7f: Pop(0)
0x80: Push( Stack[3 + Tasks[-1].StackPointer] )
0x81: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x82: GOTO 0x88

0x83: PushEmpty(string)
0x84: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x85: Call2 0x2c2

0x86: Pop(1)
0x87: GOTO 0x7e

0x88: GOTO 0x97

0x89: Push("all")
0x8a: Push("idle")
0x8b: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c: Pop(2)
0x8d: @ WaitForAnimEnd()
0x8e: Pop(0)
0x8f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: GOTO 0x97

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: GOTO 0x8d

0x97: Return(); Pop(0)

0x98: PushEmpty()
0x99: PushEmpty(bool)
0x9a: Call2 0x328

0x9b: Pop(0)
0x9c: Pop(1); Push((bool) Stack[-1] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: Return(); Pop(0)

0x9f: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Return(); Pop(0)

0xa2: PushEmpty(string, bool)
0xa3: Stack[-2] = Stack[-3]
0xa4: Push("")
0xa5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa6: IF (Stack[-1] == 0) GOTO 0xa9; Pop(1)

0xa7: Stack[-1] = (bool) 0
0xa8: GOTO 0xaa

0xa9: Stack[-1] = (bool) 1
0xaa: Call2 0x2d2

0xab: Pop(2)
0xac: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xad: Return(); Pop(0)

0xae: PushEmpty()
0xaf: Push((int) 1)
0xb0: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0xb1: PushEmpty()
0xb2: Call2 0x2ec

0xb3: Pop(0)
0xb4: Push((int) 31881)
0xb5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xbc; Pop(1)

0xb7: PushEmpty(object, object)
0xb8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xba: Call2 0x32a

0xbb: Pop(2)
0xbc: Push((int) 32782)
0xbd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call2 0x32a

0xc3: Pop(2)
0xc4: Push((int) 31874)
0xc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc6: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xc7: PushEmpty(bool, object)
0xc8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc9: Call2 0x333

0xca: Pop(1)
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(string)
0xcd: Stack[-1] = "Neutral"
0xce: Call2 0x98

0xcf: Pop(1)
0xd0: Push((int) 530515)
0xd1: @@ SetMessage(Stack[-1])
0xd2: Pop(1)
0xd3: @@ ClearReplies()
0xd4: Pop(0)
0xd5: Push((int) 530516)
0xd6: Push((int) 32774)
0xd7: Push((int) 31875)
0xd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9: Pop(3)
0xda: Return(); Pop(0)

0xdb: PushEmpty(string)
0xdc: Stack[-1] = "Neutral"
0xdd: Call2 0x98

0xde: Pop(1)
0xdf: Push((int) 530523)
0xe0: @@ SetMessage(Stack[-1])
0xe1: Pop(1)
0xe2: @@ ClearReplies()
0xe3: Pop(0)
0xe4: Push((int) 530524)
0xe5: Push((int) -1)
0xe6: Push((int) 31883)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Push((int) 531426)
0xea: Push((int) -1)
0xeb: Push((int) 32770)
0xec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed: Pop(3)
0xee: Return(); Pop(0)

0xef: Push((int) 32774)
0xf0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xf2: PushEmpty(string)
0xf3: Stack[-1] = "Neutral"
0xf4: Call2 0x98

0xf5: Pop(1)
0xf6: Push((int) 531430)
0xf7: @@ SetMessage(Stack[-1])
0xf8: Pop(1)
0xf9: @@ ClearReplies()
0xfa: Pop(0)
0xfb: Push((int) 531431)
0xfc: Push((int) 32772)
0xfd: Push((int) 32775)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Return(); Pop(0)

0x101: Push((int) 32772)
0x102: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x104: PushEmpty(string)
0x105: Stack[-1] = "Neutral"
0x106: Call2 0x98

0x107: Pop(1)
0x108: Push((int) 531428)
0x109: @@ SetMessage(Stack[-1])
0x10a: Pop(1)
0x10b: @@ ClearReplies()
0x10c: Pop(0)
0x10d: Push((int) 531429)
0x10e: Push((int) 31876)
0x10f: Push((int) 32773)
0x110: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(3)
0x112: Push((int) 531432)
0x113: Push((int) 31876)
0x114: Push((int) 32776)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Return(); Pop(0)

0x118: Push((int) 31876)
0x119: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a: IF (Stack[-1] == 0) GOTO 0x12f; Pop(1)

0x11b: PushEmpty(string)
0x11c: Stack[-1] = "Neutral"
0x11d: Call2 0x98

0x11e: Pop(1)
0x11f: Push((int) 530517)
0x120: @@ SetMessage(Stack[-1])
0x121: Pop(1)
0x122: @@ ClearReplies()
0x123: Pop(0)
0x124: Push((int) 530518)
0x125: Push((int) 31880)
0x126: Push((int) 31877)
0x127: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128: Pop(3)
0x129: Push((int) 531433)
0x12a: Push((int) 32779)
0x12b: Push((int) 32778)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Return(); Pop(0)

0x12f: Push((int) 32779)
0x130: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x132: PushEmpty(string)
0x133: Stack[-1] = "Neutral"
0x134: Call2 0x98

0x135: Pop(1)
0x136: Push((int) 531434)
0x137: @@ SetMessage(Stack[-1])
0x138: Pop(1)
0x139: @@ ClearReplies()
0x13a: Pop(0)
0x13b: Push((int) 531435)
0x13c: Push((int) 31880)
0x13d: Push((int) 32780)
0x13e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f: Pop(3)
0x140: Return(); Pop(0)

0x141: Push((int) 31880)
0x142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x143: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x144: PushEmpty(string)
0x145: Stack[-1] = "Neutral"
0x146: Call2 0x98

0x147: Pop(1)
0x148: Push((int) 530521)
0x149: @@ SetMessage(Stack[-1])
0x14a: Pop(1)
0x14b: @@ ClearReplies()
0x14c: Pop(0)
0x14d: Push((int) 530522)
0x14e: Push((int) -1)
0x14f: Push((int) 31881)
0x150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x151: Pop(3)
0x152: Push((int) 531436)
0x153: Push((int) -1)
0x154: Push((int) 32782)
0x155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x156: Pop(3)
0x157: Return(); Pop(0)

0x158: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x159: PushEmpty(bool)
0x15a: Call2 0x328

0x15b: Pop(0)
0x15c: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15d: @ lshStopAnimation()
0x15e: Pop(0)
0x15f: GOTO 0x162

0x160: @ StopAnimation()
0x161: Pop(0)
0x162: Return(); Pop(0)

0x163: GOTO 0xaf

0x164: Return(); Pop(0)

0x165: PushEmpty(float, float)
0x166: Stack[-2] = (int) 300
0x167: Stack[-1] = (int) 100
0x168: Call2 0x176

0x169: Pop(2)
0x16a: Return(); Pop(0)

0x16b: PushEmpty()
0x16c: PushEmpty()
0x16d: Call2 0x1fc

0x16e: Pop(0)
0x16f: PushEmpty(int, object)
0x170: Stack[-1] = Stack[-3]
0x171: Push(-2, 1); TaskCall(0)
0x172: Call2 0x0

0x173: Pop(-2, 1); TaskReturn
0x174: Pop(2)
0x175: Return(); Pop(0)

0x176: PushEmpty(float, bool, float, bool)
0x177: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x178: Push((int) 3)
0x179: @ rand(Stack[-3], Stack[-1])
0x17a: Pop(1)
0x17b: Push((int) 3)
0x17c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x17d: @ Sleep(Stack[-1], Stack[-2])
0x17e: Pop(1)
0x17f: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x180: PushEmpty(float, float)
0x181: Stack[-2] = Stack[-8]
0x182: Stack[-1] = Stack[-7]
0x183: Call2 0x1bb

0x184: Pop(2)
0x185: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x186: GOTO 0x178

0x187: Return(); Pop(4)

0x188: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x189: PushEmpty(bool)
0x18a: Stack[-1] = (bool) 0
0x18b: PushEmpty(bool)
0x18c: Call2 0x268

0x18d: Pop(0)
0x18e: Pop(1); Push((bool) Stack[-1] == 0)
0x18f: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x190: PushEmpty(bool)
0x191: Call2 0x1b9

0x192: Pop(0)
0x193: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x194: Stack[-1] = (bool) 1
0x195: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x196: PushEmpty(object)
0x197: Call2 0x2f3

0x198: Pop(0)
0x199: @ RemoveActor(Stack[-1])
0x19a: Pop(1)
0x19b: Return(); Pop(0)

0x19c: PushEmpty()
0x19d: Push("cleanup")
0x19e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a0: PushEmpty()
0x1a1: Call2 0x188

0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1a5: IF (Stack[-1] == 0) GOTO 0x1a9; Pop(1)

0x1a6: PushEmpty()
0x1a7: Call2 0x1fc

0x1a8: Pop(0)
0x1a9: PushEmpty(bool)
0x1aa: Stack[-1] = (bool) 0
0x1ab: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1ad: PushEmpty(bool)
0x1ae: Call2 0x1b9

0x1af: Pop(0)
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b2; Pop(1)

0x1b1: Stack[-1] = (bool) 1
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b8; Pop(1)

0x1b3: PushEmpty(object)
0x1b4: Call2 0x2f3

0x1b5: Pop(0)
0x1b6: @ RemoveActor(Stack[-1])
0x1b7: Pop(1)
0x1b8: Return(); Pop(0)

0x1b9: Stack[-1] = (bool) 1
0x1ba: Return(); Pop(0)

0x1bb: PushEmpty()
0x1bc: PushEmpty(bool)
0x1bd: Call2 0x268

0x1be: Pop(0)
0x1bf: Pop(1); Push((bool) Stack[-1] == 0)
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: Return(); Pop(0)

0x1c2: Push("player")
0x1c3: @ FindActor(Stack[-4], Stack[-1])
0x1c4: Pop(1)
0x1c5: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1c6: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1c7: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1c8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1c9: Push((int) 10)
0x1ca: Push((float)1.0)
0x1cb: @ SetTimer(Stack[-2], Stack[-1])
0x1cc: Pop(2)
0x1cd: PushEmpty()
0x1ce: Call2 0x20a

0x1cf: Pop(0)
0x1d0: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1d2: Push((int) 10)
0x1d3: @ KillTimer(Stack[-1])
0x1d4: Pop(1)
0x1d5: Return(); Pop(0)

0x1d6: PushEmpty(float, float)
0x1d7: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d9: Stack[-3] = (bool) 0
0x1da: Return(); Pop(2)

0x1db: PushEmpty(float, object)
0x1dc: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1dd: Call2 0x260

0x1de: Pop(1)
0x1df: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1e0: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e1: IF (Stack[-1] == 0) GOTO 0x1e3; Pop(1)

0x1e2: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1e3: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1e4: Return(); Pop(2)

0x1e5: PushEmpty()
0x1e6: Push((int) 10)
0x1e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1e9: PushEmpty(bool)
0x1ea: Call2 0x1d6

0x1eb: Pop(0)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1ed: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: PushEmpty(object)
0x1f0: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f1: Call2 0x2e1

0x1f2: Pop(1)
0x1f3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1f4: GOTO 0x1fb

0x1f5: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f6: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f7: Push("head")
0x1f8: @ UnlookAsync(Stack[-1])
0x1f9: Pop(1)
0x1fa: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1fb: Return(); Pop(0)

0x1fc: PushEmpty()
0x1fd: Call2 0x25b

0x1fe: Pop(0)
0x1ff: Push((int) 10)
0x200: @ KillTimer(Stack[-1])
0x201: Pop(1)
0x202: Push( Stack[2 + Tasks[-1].StackPointer] )
0x203: IF (Stack[-1] == 0) GOTO 0x208; Pop(1)

0x204: Push("head")
0x205: @ UnlookAsync(Stack[-1])
0x206: Pop(1)
0x207: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x208: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x209: Return(); Pop(0)

0x20a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x20b: @ WaitForAnimEnd()
0x20c: Pop(0)
0x20d: PushEmpty(bool)
0x20e: Call2 0x268

0x20f: Pop(0)
0x210: Pop(1); Push((bool) Stack[-1] == 0)
0x211: IF (Stack[-1] == 0) GOTO 0x213; Pop(1)

0x212: Return(); Pop(14)

0x213: PushEmpty(int)
0x214: Call2 0x30f

0x215: Stack[-8] = Stack[-1]
0x216: Pop(1)
0x217: Stack[-6] = (int) 0
0x218: PushEmpty(bool)
0x219: Stack[-1] = (bool) 0
0x21a: Push((int) 5)
0x21b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x21c: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21d: PushEmpty(bool)
0x21e: Call2 0x268

0x21f: Pop(0)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = (bool) 1
0x222: IF (Stack[-1] == 0) GOTO 0x256; Pop(1)

0x223: Push((int) 3)
0x224: @ irand(Stack[-6], Stack[-1])
0x225: Pop(1)
0x226: Push((int) 0)
0x227: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x228: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x229: Push(Stack[-7])
0x22a: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x22b: @ irand(Stack[-4], Stack[-7])
0x22c: Pop(0)
0x22d: Push("all")
0x22e: PushEmpty(string, int)
0x22f: Stack[-1] = Stack[-7]
0x230: Call2 0x308

0x231: Pop(1)
0x232: @ PlayAnimation(Stack[-2], Stack[-1])
0x233: Pop(2)
0x234: @ WaitForAnimEnd(Stack[-3])
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-3] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x238: GOTO 0x256

0x239: GOTO 0x24b

0x23a: Push((int) 1)
0x23b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x23c: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x23d: Push((int) 4)
0x23e: @ rand(Stack[-3], Stack[-1])
0x23f: Pop(1)
0x240: Push((int) 1)
0x241: Pop(1); Push(Stack[-3] + Stack[-1]);
0x242: @ Sleep(Stack[-1], Stack[-2])
0x243: Pop(1)
0x244: Pop(0); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: GOTO 0x256

0x247: GOTO 0x24b

0x248: Push(Stack[-6])
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: GOTO 0x256

0x24b: PushEmpty(bool)
0x24c: Call2 0x259

0x24d: Pop(0)
0x24e: Pop(1); Push((bool) Stack[-1] == 0)
0x24f: IF (Stack[-1] == 0) GOTO 0x251; Pop(1)

0x250: GOTO 0x256

0x251: @ ResetAAS()
0x252: Pop(0)
0x253: Push((int) 1)
0x254: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x255: GOTO 0x218

0x256: @ ResetAAS()
0x257: Pop(0)
0x258: Return(); Pop(14)

0x259: Stack[-1] = (bool) 1
0x25a: Return(); Pop(0)

0x25b: @ StopAnimation()
0x25c: Pop(0)
0x25d: @ StopGroup0()
0x25e: Pop(0)
0x25f: Return(); Pop(0)

0x260: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x261: @ GetPosition(Stack[-3])
0x262: Pop(0)
0x263: @@ GetPosition(Stack[-2])
0x264: Pop(0)
0x265: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x266: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x267: Return(); Pop(6)

0x268: PushEmpty(bool, bool)
0x269: @ IsLoaded(Stack[-1])
0x26a: Pop(0)
0x26b: Stack[-3] = Stack[-1]
0x26c: Return(); Pop(2)

0x26d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x26e: @@ GetPosition(Stack[-8])
0x26f: Pop(0)
0x270: @@ GetEyesHeight(Stack[-9])
0x271: Pop(0)
0x272: Push(CvectorIndex(Stack[-8], 1))
0x273: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x274: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x275: @ GetPosition(Stack[-7])
0x276: Pop(0)
0x277: @ GetEyesHeight(Stack[-9])
0x278: Pop(0)
0x279: Push(CvectorIndex(Stack[-7], 1))
0x27a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x27b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x27c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x27d: Push(CvectorIndex(Stack[-6], 1))
0x27e: Stack[-1] = (int) 0
0x27f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x280: Pop(0); Push(Stack[-6] | Stack[-6]);
0x281: Pop(1); Push(Sqrt(Stack[-1]))
0x282: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x283: Stack[-5] = -Stack[-6]; Pop(0);
0x284: Pop(0); Push(Stack[-6] * Stack[-19]);
0x285: PushEmpty(cvector, cvector)
0x286: Push(CVector(0.0, 1.0, 0.0))
0x287: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x288: Call2 0x2f9

0x289: Pop(1)
0x28a: Push((int) 25)
0x28b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x28c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x28d: Push(CVector(0.0, 10.0, 0.0))
0x28e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x28f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x290: @ IsOverrideActive(Stack[-2])
0x291: Pop(0)
0x292: Push(Stack[-2])
0x293: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x294: Stack[-21] = (bool) 0
0x295: Return(); Pop(18)

0x296: @ StopWorld()
0x297: Pop(0)
0x298: @ CameraTransit(Stack[-3], Stack[-5])
0x299: Pop(0)
0x29a: Push(CvectorIndex(Stack[-4], 0))
0x29b: Push(CvectorIndex(Stack[-5], 2))
0x29c: @ Rotate(Stack[-2], Stack[-1])
0x29d: Pop(2)
0x29e: PushEmpty(bool)
0x29f: Call2 0x328

0x2a0: Pop(0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x2a2: GOTO 0x2ab

0x2a3: Push("head")
0x2a4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2a5: Pop(1)
0x2a6: Push(Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a8: Push("head")
0x2a9: @ LookAsyncCamera(Stack[-1])
0x2aa: Pop(1)
0x2ab: @ CameraWaitForPlayFinish()
0x2ac: Pop(0)
0x2ad: @ ResumeWorld()
0x2ae: Pop(0)
0x2af: Stack[-21] = (bool) 1
0x2b0: Return(); Pop(18)

0x2b1: PushEmpty(bool, bool)
0x2b2: @ CameraSwitchToNormal()
0x2b3: Pop(0)
0x2b4: PushEmpty(bool)
0x2b5: Call2 0x328

0x2b6: Pop(0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: GOTO 0x2c1

0x2b9: Push("head")
0x2ba: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2bb: Pop(1)
0x2bc: Push(Stack[-1])
0x2bd: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2be: Push("head")
0x2bf: @ UnlookAsync(Stack[-1])
0x2c0: Pop(1)
0x2c1: Return(); Pop(2)

0x2c2: PushEmpty(bool, float, float, bool, float, float)
0x2c3: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2c4: Pop(0)
0x2c5: Push(Stack[-3])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c7: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2c8: Pop(0)
0x2c9: Push((bool) 0)
0x2ca: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(1)
0x2cc: GOTO 0x2d1

0x2cd: Push("Can't find lsh animation : ")
0x2ce: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2cf: @ Trace(Stack[-1])
0x2d0: Pop(1)
0x2d1: Return(); Pop(6)

0x2d2: PushEmpty(bool, float, float, bool, float, float)
0x2d3: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2d4: Pop(0)
0x2d5: Push(Stack[-3])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d7: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2d8: Pop(0)
0x2d9: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2da: Pop(0)
0x2db: GOTO 0x2e0

0x2dc: Push("Can't find lsh animation : ")
0x2dd: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2de: @ Trace(Stack[-1])
0x2df: Pop(1)
0x2e0: Return(); Pop(6)

0x2e1: PushEmpty(float, cvector, float, cvector)
0x2e2: @@ GetEyesHeight(Stack[-2])
0x2e3: Pop(0)
0x2e4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2e5: Push(CvectorIndex(Stack[-1], 1))
0x2e6: Stack[-1] = Stack[-3]
0x2e7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2e8: Push("head")
0x2e9: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2ea: Pop(1)
0x2eb: Return(); Pop(4)

0x2ec: PushEmpty(bool)
0x2ed: Call2 0x328

0x2ee: Pop(0)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f0: @ lshStopSpeech()
0x2f1: Pop(0)
0x2f2: Return(); Pop(0)

0x2f3: PushEmpty(object, object)
0x2f4: @ self(Stack[-1])
0x2f5: Pop(0)
0x2f6: Stack[-3] = Stack[-1]
0x2f7: Return(); Pop(2)

0x2f8: Stack[-1] = 0
0x2f9: PushEmpty(float, float)
0x2fa: Pop(0); Push(Stack[-3] | Stack[-3]);
0x2fb: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x2fc: Push((float)0.0)
0x2fd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2fe: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2ff: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x300: Return(); Pop(2)

0x301: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x302: Return(); Pop(2)

0x303: PushEmpty(int, int)
0x304: @ GetVariable(Stack[-3], Stack[-1])
0x305: Pop(0)
0x306: Stack[-4] = Stack[-1]
0x307: Return(); Pop(2)

0x308: PushEmpty(string, string)
0x309: Stack[-1] = "idle"
0x30a: Push(Stack[-3])
0x30b: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x30c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x30d: Stack[-4] = Stack[-1]
0x30e: Return(); Pop(2)

0x30f: PushEmpty(int, bool, int, bool)
0x310: Stack[-2] = (int) 0
0x311: Push("all")
0x312: PushEmpty(string, int)
0x313: Stack[-1] = Stack[-5]
0x314: Call2 0x308

0x315: Pop(1)
0x316: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x317: Pop(2)
0x318: Pop(0); Push((bool) Stack[-1] == 0)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: GOTO 0x31e

0x31b: Push((int) 1)
0x31c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x31d: GOTO 0x311

0x31e: Stack[-5] = Stack[-2]
0x31f: Return(); Pop(4)

0x320: Stack[-1] = (int) 515597
0x321: Return(); Pop(0)

0x322: Stack[-1] = (int) 514841
0x323: Return(); Pop(0)

0x324: Stack[-1] = "ui/NPC_Citizen2.png"
0x325: Return(); Pop(0)

0x326: Stack[-1] = "ui/NPC_Citizen2_b.png"
0x327: Return(); Pop(0)

0x328: Stack[-1] = (bool) 0
0x329: Return(); Pop(0)

0x32a: PushEmpty()
0x32b: Push("b11q04")
0x32c: Push((int) 3)
0x32d: @ SetVariable(Stack[-2], Stack[-1])
0x32e: Pop(2)
0x32f: PushEmpty()
0x330: Call2 0x33f

0x331: Pop(0)
0x332: Return(); Pop(0)

0x333: PushEmpty()
0x334: PushEmpty(int, string)
0x335: Stack[-1] = "b11q04"
0x336: Call2 0x303

0x337: Pop(1)
0x338: Push((int) 2)
0x339: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x33a: IF (Stack[-1] == 0) GOTO 0x33d; Pop(1)

0x33b: Stack[-2] = (bool) 1
0x33c: Return(); Pop(0)

0x33d: Stack[-2] = (bool) 0
0x33e: Return(); Pop(0)

0x33f: PushEmpty(object, object)
0x340: Push((int) 554)
0x341: Push((int) 2)
0x342: Push((int) 530529)
0x343: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(3)
0x345: PushEmpty(bool, object, int)
0x346: Stack[-2] = Stack[-4]
0x347: Stack[-1] = (int) 551
0x348: Call2 0x359

0x349: Pop(3)
0x34a: Return(); Pop(2)

0x34b: Stack[-1] = 0
0x34c: PushEmpty(object, object)
0x34d: @ GetDiaryRoot(Stack[-1])
0x34e: Pop(0)
0x34f: Pop(0); Push((bool) Stack[-1] == 0)
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: Push("Can't retrieve diary root")
0x352: @ Trace(Stack[-1])
0x353: Pop(1)
0x354: Stack[-3] = (bool) 0
0x355: Return(); Pop(2)

0x356: Stack[-3] = Stack[-1]
0x357: Return(); Pop(2)

0x358: Stack[-1] = 0
0x359: PushEmpty(object, object, int, object, object, int)
0x35a: PushEmpty(object)
0x35b: Call2 0x34c

0x35c: Stack[-4] = Stack[-1]
0x35d: Pop(1)
0x35e: @@ Find(Stack[-7], Stack[-2])
0x35f: Pop(0)
0x360: Pop(0); Push((bool) Stack[-2] == 0)
0x361: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x362: Push("Can't find diary parent with id: ")
0x363: Pop(1); Push(Stack[-1] + Stack[-8]);
0x364: @ Trace(Stack[-1])
0x365: Pop(1)
0x366: Stack[-9] = (bool) 0
0x367: Return(); Pop(6)

0x368: @@ AddChild(Stack[-8])
0x369: Pop(0)
0x36a: Push((int) 7)
0x36b: @ SendWorldWndMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ GetCategory(Stack[-1])
0x36e: Pop(0)
0x36f: @ SetDiarySection(Stack[-1])
0x370: Pop(0)
0x371: Stack[-9] = (bool) 0
0x372: Return(); Pop(6)

0x373: Stack[-2] = 0
0x374: Stack[-3] = 0
0x375: PushEmpty(int, int)
0x376: Push("branch")
0x377: @ GetVariable(Stack[-1], Stack[-2])
0x378: Pop(1)
0x379: Push((int) 0)
0x37a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37c: Stack[-3] = (int) 1
0x37d: Return(); Pop(2)

0x37e: GOTO 0x384

0x37f: Push((int) 1)
0x380: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x381: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x382: Stack[-3] = (int) 2
0x383: Return(); Pop(2)

0x384: Stack[-3] = (int) 3
0x385: Return(); Pop(2)

