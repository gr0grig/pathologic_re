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
	pt_d5q01_girl_corpse1
	ShowMap
	d5q02
	d5q02NudeMeeting
	AddMark
	quest_d5_02
	remove_girl
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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x182
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x188 Vars = (object)
		EVENT_26 Op = 0x1b6 Vars = (string)
		EVENT_6 Op = 0x1be Vars = ()
		EVENT_7 Op = 0x1ff Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x287

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x400

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x3fe

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x402

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x404

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x3ed

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
0x41: Call2 0x2cc

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

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x379

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x84

0x58: Pop(1)
0x59: Push((int) 511988)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 511989)
0x5f: Push((int) 13205)
0x60: Push((int) 13204)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x406

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x2de

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
0x86: Call2 0x406

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
0x96: Call2 0x2ee

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x181; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x308

0x9f: Pop(0)
0xa0: Push((int) 13218)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x35d

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x34d

0xac: Pop(2)
0xad: Push((int) 13214)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x35d

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x34d

0xb9: Pop(2)
0xba: Push((int) 13215)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x35d

0xc1: Pop(2)
0xc2: PushEmpty(object, object)
0xc3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc5: Call2 0x34d

0xc6: Pop(2)
0xc7: Push((int) 13203)
0xc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xca: PushEmpty(bool, object)
0xcb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcc: Call2 0x379

0xcd: Pop(1)
0xce: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xcf: PushEmpty(string)
0xd0: Stack[-1] = "Neutral"
0xd1: Call2 0x84

0xd2: Pop(1)
0xd3: Push((int) 511988)
0xd4: @@ SetMessage(Stack[-1])
0xd5: Pop(1)
0xd6: @@ ClearReplies()
0xd7: Pop(0)
0xd8: Push((int) 511989)
0xd9: Push((int) 13205)
0xda: Push((int) 13204)
0xdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc: Pop(3)
0xdd: Return(); Pop(0)

0xde: Push((int) 13205)
0xdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe0: IF (Stack[-1] == 0) GOTO 0xf5; Pop(1)

0xe1: PushEmpty(string)
0xe2: Stack[-1] = "Neutral"
0xe3: Call2 0x84

0xe4: Pop(1)
0xe5: Push((int) 511990)
0xe6: @@ SetMessage(Stack[-1])
0xe7: Pop(1)
0xe8: @@ ClearReplies()
0xe9: Pop(0)
0xea: Push((int) 511991)
0xeb: Push((int) 13207)
0xec: Push((int) 13206)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Push((int) 512004)
0xf0: Push((int) 13207)
0xf1: Push((int) 13219)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Return(); Pop(0)

0xf5: Push((int) 13207)
0xf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7: IF (Stack[-1] == 0) GOTO 0x10c; Pop(1)

0xf8: PushEmpty(string)
0xf9: Stack[-1] = "Neutral"
0xfa: Call2 0x84

0xfb: Pop(1)
0xfc: Push((int) 511992)
0xfd: @@ SetMessage(Stack[-1])
0xfe: Pop(1)
0xff: @@ ClearReplies()
0x100: Pop(0)
0x101: Push((int) 511993)
0x102: Push((int) 13209)
0x103: Push((int) 13208)
0x104: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105: Pop(3)
0x106: Push((int) 512005)
0x107: Push((int) 13209)
0x108: Push((int) 13221)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Return(); Pop(0)

0x10c: Push((int) 13209)
0x10d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e: IF (Stack[-1] == 0) GOTO 0x123; Pop(1)

0x10f: PushEmpty(string)
0x110: Stack[-1] = "Neutral"
0x111: Call2 0x84

0x112: Pop(1)
0x113: Push((int) 511994)
0x114: @@ SetMessage(Stack[-1])
0x115: Pop(1)
0x116: @@ ClearReplies()
0x117: Pop(0)
0x118: Push((int) 511995)
0x119: Push((int) 13211)
0x11a: Push((int) 13210)
0x11b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c: Pop(3)
0x11d: Push((int) 512006)
0x11e: Push((int) 13213)
0x11f: Push((int) 13223)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Return(); Pop(0)

0x123: Push((int) 13211)
0x124: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125: IF (Stack[-1] == 0) GOTO 0x135; Pop(1)

0x126: PushEmpty(string)
0x127: Stack[-1] = "Neutral"
0x128: Call2 0x84

0x129: Pop(1)
0x12a: Push((int) 511996)
0x12b: @@ SetMessage(Stack[-1])
0x12c: Pop(1)
0x12d: @@ ClearReplies()
0x12e: Pop(0)
0x12f: Push((int) 511997)
0x130: Push((int) 13213)
0x131: Push((int) 13212)
0x132: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133: Pop(3)
0x134: Return(); Pop(0)

0x135: Push((int) 13213)
0x136: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x137: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x138: PushEmpty(string)
0x139: Stack[-1] = "Neutral"
0x13a: Call2 0x84

0x13b: Pop(1)
0x13c: Push((int) 511998)
0x13d: @@ SetMessage(Stack[-1])
0x13e: Pop(1)
0x13f: @@ ClearReplies()
0x140: Pop(0)
0x141: Push((int) 512001)
0x142: Push((int) 13217)
0x143: Push((int) 13216)
0x144: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x145: Pop(3)
0x146: Push((int) 511999)
0x147: Push((int) -1)
0x148: Push((int) 13214)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Push((int) 515782)
0x14c: Push((int) 16855)
0x14d: Push((int) 16854)
0x14e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14f: Pop(3)
0x150: Return(); Pop(0)

0x151: Push((int) 16855)
0x152: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x154: PushEmpty(string)
0x155: Stack[-1] = "Neutral"
0x156: Call2 0x84

0x157: Pop(1)
0x158: Push((int) 515783)
0x159: @@ SetMessage(Stack[-1])
0x15a: Pop(1)
0x15b: @@ ClearReplies()
0x15c: Pop(0)
0x15d: Push((int) 512000)
0x15e: Push((int) -1)
0x15f: Push((int) 13215)
0x160: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x161: Pop(3)
0x162: Return(); Pop(0)

0x163: Push((int) 13217)
0x164: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x165: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x166: PushEmpty(string)
0x167: Stack[-1] = "Neutral"
0x168: Call2 0x84

0x169: Pop(1)
0x16a: Push((int) 512002)
0x16b: @@ SetMessage(Stack[-1])
0x16c: Pop(1)
0x16d: @@ ClearReplies()
0x16e: Pop(0)
0x16f: Push((int) 512003)
0x170: Push((int) -1)
0x171: Push((int) 13218)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: Return(); Pop(0)

0x175: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x176: PushEmpty(bool)
0x177: Call2 0x406

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17a: @ lshStopAnimation()
0x17b: Pop(0)
0x17c: GOTO 0x17f

0x17d: @ StopAnimation()
0x17e: Pop(0)
0x17f: Return(); Pop(0)

0x180: GOTO 0x9b

0x181: Return(); Pop(0)

0x182: PushEmpty(float, float)
0x183: Stack[-2] = (int) 300
0x184: Stack[-1] = (int) 100
0x185: Call2 0x190

0x186: Pop(2)
0x187: Return(); Pop(0)

0x188: PushEmpty()
0x189: PushEmpty(int, object)
0x18a: Stack[-1] = Stack[-3]
0x18b: Push(-2, 1); TaskCall(0)
0x18c: Call2 0x0

0x18d: Pop(-2, 1); TaskReturn
0x18e: Pop(2)
0x18f: Return(); Pop(0)

0x190: PushEmpty(float, bool, float, bool)
0x191: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x192: Push((int) 3)
0x193: @ rand(Stack[-3], Stack[-1])
0x194: Pop(1)
0x195: Push((int) 3)
0x196: Pop(1); Push(Stack[-3] + Stack[-1]);
0x197: @ Sleep(Stack[-1], Stack[-2])
0x198: Pop(1)
0x199: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x19a: PushEmpty(float, float)
0x19b: Stack[-2] = Stack[-8]
0x19c: Stack[-1] = Stack[-7]
0x19d: Call2 0x1d5

0x19e: Pop(2)
0x19f: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1a0: GOTO 0x192

0x1a1: Return(); Pop(4)

0x1a2: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1a3: PushEmpty(bool)
0x1a4: Stack[-1] = (bool) 0
0x1a5: PushEmpty(bool)
0x1a6: Call2 0x282

0x1a7: Pop(0)
0x1a8: Pop(1); Push((bool) Stack[-1] == 0)
0x1a9: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1aa: PushEmpty(bool)
0x1ab: Call2 0x1d3

0x1ac: Pop(0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 1
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: PushEmpty(object)
0x1b1: Call2 0x30f

0x1b2: Pop(0)
0x1b3: @ RemoveActor(Stack[-1])
0x1b4: Pop(1)
0x1b5: Return(); Pop(0)

0x1b6: PushEmpty()
0x1b7: Push("cleanup")
0x1b8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ba: PushEmpty()
0x1bb: Call2 0x1a2

0x1bc: Pop(0)
0x1bd: Return(); Pop(0)

0x1be: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c0: PushEmpty()
0x1c1: Call2 0x216

0x1c2: Pop(0)
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 0
0x1c5: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1c6: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1c7: PushEmpty(bool)
0x1c8: Call2 0x1d3

0x1c9: Pop(0)
0x1ca: IF (Stack[-1] == 0) GOTO 0x1cc; Pop(1)

0x1cb: Stack[-1] = (bool) 1
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cd: PushEmpty(object)
0x1ce: Call2 0x30f

0x1cf: Pop(0)
0x1d0: @ RemoveActor(Stack[-1])
0x1d1: Pop(1)
0x1d2: Return(); Pop(0)

0x1d3: Stack[-1] = (bool) 1
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty()
0x1d6: PushEmpty(bool)
0x1d7: Call2 0x282

0x1d8: Pop(0)
0x1d9: Pop(1); Push((bool) Stack[-1] == 0)
0x1da: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1db: Return(); Pop(0)

0x1dc: Push("player")
0x1dd: @ FindActor(Stack[-4], Stack[-1])
0x1de: Pop(1)
0x1df: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e0: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1e1: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1e2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1e3: Push((int) 10)
0x1e4: Push((float)1.0)
0x1e5: @ SetTimer(Stack[-2], Stack[-1])
0x1e6: Pop(2)
0x1e7: PushEmpty()
0x1e8: Call2 0x224

0x1e9: Pop(0)
0x1ea: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ec: Push((int) 10)
0x1ed: @ KillTimer(Stack[-1])
0x1ee: Pop(1)
0x1ef: Return(); Pop(0)

0x1f0: PushEmpty(float, float)
0x1f1: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-3] = (bool) 0
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(float, object)
0x1f6: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1f7: Call2 0x27a

0x1f8: Pop(1)
0x1f9: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1fa: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1fd: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1fe: Return(); Pop(2)

0x1ff: PushEmpty()
0x200: Push((int) 10)
0x201: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x203: PushEmpty(bool)
0x204: Call2 0x1f0

0x205: Pop(0)
0x206: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x207: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20e; Pop(1)

0x209: PushEmpty(object)
0x20a: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x20b: Call2 0x2fd

0x20c: Pop(1)
0x20d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x20e: GOTO 0x215

0x20f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x210: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x211: Push("head")
0x212: @ UnlookAsync(Stack[-1])
0x213: Pop(1)
0x214: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x215: Return(); Pop(0)

0x216: PushEmpty()
0x217: Call2 0x275

0x218: Pop(0)
0x219: Push((int) 10)
0x21a: @ KillTimer(Stack[-1])
0x21b: Pop(1)
0x21c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21d: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21e: Push("head")
0x21f: @ UnlookAsync(Stack[-1])
0x220: Pop(1)
0x221: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x222: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x223: Return(); Pop(0)

0x224: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x225: @ WaitForAnimEnd()
0x226: Pop(0)
0x227: PushEmpty(bool)
0x228: Call2 0x282

0x229: Pop(0)
0x22a: Pop(1); Push((bool) Stack[-1] == 0)
0x22b: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22c: Return(); Pop(14)

0x22d: PushEmpty(int)
0x22e: Call2 0x33c

0x22f: Stack[-8] = Stack[-1]
0x230: Pop(1)
0x231: Stack[-6] = (int) 0
0x232: PushEmpty(bool)
0x233: Stack[-1] = (bool) 0
0x234: Push((int) 5)
0x235: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x236: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x237: PushEmpty(bool)
0x238: Call2 0x282

0x239: Pop(0)
0x23a: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x23b: Stack[-1] = (bool) 1
0x23c: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x23d: Push((int) 3)
0x23e: @ irand(Stack[-6], Stack[-1])
0x23f: Pop(1)
0x240: Push((int) 0)
0x241: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x243: Push(Stack[-7])
0x244: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x245: @ irand(Stack[-4], Stack[-7])
0x246: Pop(0)
0x247: Push("all")
0x248: PushEmpty(string, int)
0x249: Stack[-1] = Stack[-7]
0x24a: Call2 0x335

0x24b: Pop(1)
0x24c: @ PlayAnimation(Stack[-2], Stack[-1])
0x24d: Pop(2)
0x24e: @ WaitForAnimEnd(Stack[-3])
0x24f: Pop(0)
0x250: Pop(0); Push((bool) Stack[-3] == 0)
0x251: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x252: GOTO 0x270

0x253: GOTO 0x265

0x254: Push((int) 1)
0x255: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x257: Push((int) 4)
0x258: @ rand(Stack[-3], Stack[-1])
0x259: Pop(1)
0x25a: Push((int) 1)
0x25b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x25c: @ Sleep(Stack[-1], Stack[-2])
0x25d: Pop(1)
0x25e: Pop(0); Push((bool) Stack[-1] == 0)
0x25f: IF (Stack[-1] == 0) GOTO 0x261; Pop(1)

0x260: GOTO 0x270

0x261: GOTO 0x265

0x262: Push(Stack[-6])
0x263: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x264: GOTO 0x270

0x265: PushEmpty(bool)
0x266: Call2 0x273

0x267: Pop(0)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x26a: GOTO 0x270

0x26b: @ ResetAAS()
0x26c: Pop(0)
0x26d: Push((int) 1)
0x26e: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x26f: GOTO 0x232

0x270: @ ResetAAS()
0x271: Pop(0)
0x272: Return(); Pop(14)

0x273: Stack[-1] = (bool) 1
0x274: Return(); Pop(0)

0x275: @ StopAnimation()
0x276: Pop(0)
0x277: @ StopGroup0()
0x278: Pop(0)
0x279: Return(); Pop(0)

0x27a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x27b: @ GetPosition(Stack[-3])
0x27c: Pop(0)
0x27d: @@ GetPosition(Stack[-2])
0x27e: Pop(0)
0x27f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x280: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x281: Return(); Pop(6)

0x282: PushEmpty(bool, bool)
0x283: @ IsLoaded(Stack[-1])
0x284: Pop(0)
0x285: Stack[-3] = Stack[-1]
0x286: Return(); Pop(2)

0x287: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x288: @@ GetPosition(Stack[-8])
0x289: Pop(0)
0x28a: @@ GetEyesHeight(Stack[-9])
0x28b: Pop(0)
0x28c: Push(CvectorIndex(Stack[-8], 1))
0x28d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x28e: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x28f: @ GetPosition(Stack[-7])
0x290: Pop(0)
0x291: @ GetEyesHeight(Stack[-9])
0x292: Pop(0)
0x293: Push(CvectorIndex(Stack[-7], 1))
0x294: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x295: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x296: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x297: Push(CvectorIndex(Stack[-6], 1))
0x298: Stack[-1] = (int) 0
0x299: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x29a: Pop(0); Push(Stack[-6] | Stack[-6]);
0x29b: Pop(1); Push(Sqrt(Stack[-1]))
0x29c: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x29d: Stack[-5] = -Stack[-6]; Pop(0);
0x29e: Pop(0); Push(Stack[-6] * Stack[-19]);
0x29f: PushEmpty(cvector, cvector)
0x2a0: Push(CVector(0.0, 1.0, 0.0))
0x2a1: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2a2: Call2 0x315

0x2a3: Pop(1)
0x2a4: Push((int) 25)
0x2a5: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2a6: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a7: Push(CVector(0.0, 10.0, 0.0))
0x2a8: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2a9: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2aa: @ IsOverrideActive(Stack[-2])
0x2ab: Pop(0)
0x2ac: Push(Stack[-2])
0x2ad: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2ae: Stack[-21] = (bool) 0
0x2af: Return(); Pop(18)

0x2b0: @ StopWorld()
0x2b1: Pop(0)
0x2b2: Push((bool) 1)
0x2b3: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2b4: Pop(1)
0x2b5: Push(CvectorIndex(Stack[-4], 0))
0x2b6: Push(CvectorIndex(Stack[-5], 2))
0x2b7: @ Rotate(Stack[-2], Stack[-1])
0x2b8: Pop(2)
0x2b9: PushEmpty(bool)
0x2ba: Call2 0x406

0x2bb: Pop(0)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bd: GOTO 0x2c6

0x2be: Push("head")
0x2bf: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2c0: Pop(1)
0x2c1: Push(Stack[-1])
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c3: Push("head")
0x2c4: @ LookAsyncCamera(Stack[-1])
0x2c5: Pop(1)
0x2c6: @ CameraWaitForPlayFinish()
0x2c7: Pop(0)
0x2c8: @ ResumeWorld()
0x2c9: Pop(0)
0x2ca: Stack[-21] = (bool) 1
0x2cb: Return(); Pop(18)

0x2cc: PushEmpty(bool, bool)
0x2cd: Push((bool) 1)
0x2ce: @ CameraSwitchToNormal(Stack[-1])
0x2cf: Pop(1)
0x2d0: PushEmpty(bool)
0x2d1: Call2 0x406

0x2d2: Pop(0)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: GOTO 0x2dd

0x2d5: Push("head")
0x2d6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d7: Pop(1)
0x2d8: Push(Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2da: Push("head")
0x2db: @ UnlookAsync(Stack[-1])
0x2dc: Pop(1)
0x2dd: Return(); Pop(2)

0x2de: PushEmpty(bool, float, float, bool, float, float)
0x2df: @ lshHasAnimation(Stack[-3], Stack[-7])
0x2e0: Pop(0)
0x2e1: Push(Stack[-3])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e3: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x2e4: Pop(0)
0x2e5: Push((bool) 0)
0x2e6: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(1)
0x2e8: GOTO 0x2ed

0x2e9: Push("Can't find lsh animation : ")
0x2ea: Pop(1); Push(Stack[-1] + Stack[-8]);
0x2eb: @ Trace(Stack[-1])
0x2ec: Pop(1)
0x2ed: Return(); Pop(6)

0x2ee: PushEmpty(bool, float, float, bool, float, float)
0x2ef: @ lshHasAnimation(Stack[-3], Stack[-8])
0x2f0: Pop(0)
0x2f1: Push(Stack[-3])
0x2f2: IF (Stack[-1] == 0) GOTO 0x2f8; Pop(1)

0x2f3: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x2f4: Pop(0)
0x2f5: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x2f6: Pop(0)
0x2f7: GOTO 0x2fc

0x2f8: Push("Can't find lsh animation : ")
0x2f9: Pop(1); Push(Stack[-1] + Stack[-9]);
0x2fa: @ Trace(Stack[-1])
0x2fb: Pop(1)
0x2fc: Return(); Pop(6)

0x2fd: PushEmpty(float, cvector, float, cvector)
0x2fe: @@ GetEyesHeight(Stack[-2])
0x2ff: Pop(0)
0x300: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x301: Push(CvectorIndex(Stack[-1], 1))
0x302: Stack[-1] = Stack[-3]
0x303: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x304: Push("head")
0x305: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x306: Pop(1)
0x307: Return(); Pop(4)

0x308: PushEmpty(bool)
0x309: Call2 0x406

0x30a: Pop(0)
0x30b: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30c: @ lshStopSpeech()
0x30d: Pop(0)
0x30e: Return(); Pop(0)

0x30f: PushEmpty(object, object)
0x310: @ self(Stack[-1])
0x311: Pop(0)
0x312: Stack[-3] = Stack[-1]
0x313: Return(); Pop(2)

0x314: Stack[-1] = 0
0x315: PushEmpty(float, float)
0x316: Pop(0); Push(Stack[-3] | Stack[-3]);
0x317: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x318: Push((float)0.0)
0x319: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x31b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x31c: Return(); Pop(2)

0x31d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x31e: Return(); Pop(2)

0x31f: PushEmpty(int, int)
0x320: @ GetVariable(Stack[-3], Stack[-1])
0x321: Pop(0)
0x322: Stack[-4] = Stack[-1]
0x323: Return(); Pop(2)

0x324: PushEmpty(object, object)
0x325: @ FindActor(Stack[-1], Stack[-4])
0x326: Pop(0)
0x327: Pop(0); Push((bool) Stack[-1] == 0)
0x328: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x329: Stack[-5] = (bool) 0
0x32a: Return(); Pop(2)

0x32b: @ Trigger(Stack[-1], Stack[-3])
0x32c: Pop(0)
0x32d: Stack[-5] = (bool) 1
0x32e: Return(); Pop(2)

0x32f: Stack[-1] = 0
0x330: PushEmpty(float, float)
0x331: @ GetGameTime(Stack[-1])
0x332: Pop(0)
0x333: Stack[-3] = Stack[-1]
0x334: Return(); Pop(2)

0x335: PushEmpty(string, string)
0x336: Stack[-1] = "idle"
0x337: Push(Stack[-3])
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x33a: Stack[-4] = Stack[-1]
0x33b: Return(); Pop(2)

0x33c: PushEmpty(int, bool, int, bool)
0x33d: Stack[-2] = (int) 0
0x33e: Push("all")
0x33f: PushEmpty(string, int)
0x340: Stack[-1] = Stack[-5]
0x341: Call2 0x335

0x342: Pop(1)
0x343: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x344: Pop(2)
0x345: Pop(0); Push((bool) Stack[-1] == 0)
0x346: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x347: GOTO 0x34b

0x348: Push((int) 1)
0x349: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x34a: GOTO 0x33e

0x34b: Stack[-5] = Stack[-2]
0x34c: Return(); Pop(4)

0x34d: PushEmpty()
0x34e: PushEmpty(object, string, float)
0x34f: PushEmpty(object)
0x350: Call2 0x3bb

0x351: Stack[-4] = Stack[-1]
0x352: Pop(1)
0x353: Stack[-2] = "pt_d5q01_girl_corpse1"
0x354: Stack[-1] = (int) 2
0x355: Call2 0x3cc

0x356: Pop(3)
0x357: PushEmpty(object)
0x358: Call2 0x3bb

0x359: Pop(0)
0x35a: @@ ShowMap(Stack[-1])
0x35b: Pop(1)
0x35c: Return(); Pop(0)

0x35d: PushEmpty(object, object)
0x35e: Push("d5q02")
0x35f: Push((int) 4)
0x360: @ SetVariable(Stack[-2], Stack[-1])
0x361: Pop(2)
0x362: PushEmpty(object)
0x363: Call2 0x3bb

0x364: Stack[-2] = Stack[-1]
0x365: Pop(1)
0x366: Push("d5q02NudeMeeting")
0x367: Push("pt_d5q01_girl_corpse1")
0x368: Push((int) 0)
0x369: Push((int) 515364)
0x36a: PushEmpty(float)
0x36b: Call2 0x330

0x36c: Pop(0)
0x36d: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x36e: Pop(5)
0x36f: PushEmpty()
0x370: Call2 0x385

0x371: Pop(0)
0x372: PushEmpty(bool, string, string)
0x373: Stack[-2] = "quest_d5_02"
0x374: Stack[-1] = "remove_girl"
0x375: Call2 0x324

0x376: Pop(3)
0x377: Return(); Pop(2)

0x378: Stack[-1] = 0
0x379: PushEmpty()
0x37a: PushEmpty(int, string)
0x37b: Stack[-1] = "d5q02"
0x37c: Call2 0x31f

0x37d: Pop(1)
0x37e: Push((int) 3)
0x37f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x380: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x381: Stack[-2] = (bool) 1
0x382: Return(); Pop(0)

0x383: Stack[-2] = (bool) 0
0x384: Return(); Pop(0)

0x385: PushEmpty(object, object)
0x386: Push((int) 152)
0x387: Push((int) 2)
0x388: Push((int) 515358)
0x389: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: PushEmpty(bool, object, int)
0x38c: Stack[-2] = Stack[-4]
0x38d: Stack[-1] = (int) 148
0x38e: Call2 0x39f

0x38f: Pop(3)
0x390: Return(); Pop(2)

0x391: Stack[-1] = 0
0x392: PushEmpty(object, object)
0x393: @ GetDiaryRoot(Stack[-1])
0x394: Pop(0)
0x395: Pop(0); Push((bool) Stack[-1] == 0)
0x396: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x397: Push("Can't retrieve diary root")
0x398: @ Trace(Stack[-1])
0x399: Pop(1)
0x39a: Stack[-3] = (bool) 0
0x39b: Return(); Pop(2)

0x39c: Stack[-3] = Stack[-1]
0x39d: Return(); Pop(2)

0x39e: Stack[-1] = 0
0x39f: PushEmpty(object, object, int, object, object, int)
0x3a0: PushEmpty(object)
0x3a1: Call2 0x392

0x3a2: Stack[-4] = Stack[-1]
0x3a3: Pop(1)
0x3a4: @@ Find(Stack[-7], Stack[-2])
0x3a5: Pop(0)
0x3a6: Pop(0); Push((bool) Stack[-2] == 0)
0x3a7: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a8: Push("Can't find diary parent with id: ")
0x3a9: Pop(1); Push(Stack[-1] + Stack[-8]);
0x3aa: @ Trace(Stack[-1])
0x3ab: Pop(1)
0x3ac: Stack[-9] = (bool) 0
0x3ad: Return(); Pop(6)

0x3ae: @@ AddChild(Stack[-8])
0x3af: Pop(0)
0x3b0: Push((int) 7)
0x3b1: @ SendWorldWndMessage(Stack[-1])
0x3b2: Pop(1)
0x3b3: @@ GetCategory(Stack[-1])
0x3b4: Pop(0)
0x3b5: @ SetDiarySection(Stack[-1])
0x3b6: Pop(0)
0x3b7: Stack[-9] = (bool) 0
0x3b8: Return(); Pop(6)

0x3b9: Stack[-2] = 0
0x3ba: Stack[-3] = 0
0x3bb: PushEmpty(object, object, object, object)
0x3bc: @ GetMainOutdoorScene(Stack[-2])
0x3bd: Pop(0)
0x3be: Pop(0); Push((bool) Stack[-2] == 0)
0x3bf: IF (Stack[-1] == 0) GOTO 0x3c6; Pop(1)

0x3c0: Push("Can't find main outdoor scene")
0x3c1: @ Trace(Stack[-1])
0x3c2: Pop(1)
0x3c3: Stack[-1] = 0
0x3c4: Stack[-5] = Stack[-1]
0x3c5: Return(); Pop(4)

0x3c6: @@ GetMap(Stack[-1])
0x3c7: Pop(0)
0x3c8: Stack[-5] = Stack[-1]
0x3c9: Return(); Pop(4)

0x3ca: Stack[-1] = 0
0x3cb: Stack[-2] = 0
0x3cc: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x3cd: @ GetMainOutdoorScene(Stack[-2])
0x3ce: Pop(0)
0x3cf: Pop(0); Push((bool) Stack[-2] == 0)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d1: Push("Can't find main outdoor scene")
0x3d2: @ Trace(Stack[-1])
0x3d3: Pop(1)
0x3d4: Return(); Pop(8)

0x3d5: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x3d6: Pop(0)
0x3d7: Pop(0); Push((bool) Stack[-1] == 0)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3df; Pop(1)

0x3d9: Push("Warning: outdoor scene locator ")
0x3da: Pop(1); Push(Stack[-1] + Stack[-11]);
0x3db: Push(" doesnt exist")
0x3dc: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3dd: @ Trace(Stack[-1])
0x3de: Pop(1)
0x3df: @@ GetMap(Stack[-11])
0x3e0: Pop(0)
0x3e1: Pop(0); Push((bool) Stack[-11] == 0)
0x3e2: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e3: Push("Can't find map")
0x3e4: @ Trace(Stack[-1])
0x3e5: Pop(1)
0x3e6: Return(); Pop(8)

0x3e7: Push(CvectorIndex(Stack[-4], 0))
0x3e8: Push(CvectorIndex(Stack[-5], 2))
0x3e9: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x3ea: Pop(2)
0x3eb: Return(); Pop(8)

0x3ec: Stack[-2] = 0
0x3ed: PushEmpty(int, int)
0x3ee: Push("branch")
0x3ef: @ GetVariable(Stack[-1], Stack[-2])
0x3f0: Pop(1)
0x3f1: Push((int) 0)
0x3f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f4: Stack[-3] = (int) 1
0x3f5: Return(); Pop(2)

0x3f6: GOTO 0x3fc

0x3f7: Push((int) 1)
0x3f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f9: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3fa: Stack[-3] = (int) 2
0x3fb: Return(); Pop(2)

0x3fc: Stack[-3] = (int) 3
0x3fd: Return(); Pop(2)

0x3fe: Stack[-1] = (int) 515593
0x3ff: Return(); Pop(0)

0x400: Stack[-1] = (int) 512582
0x401: Return(); Pop(0)

0x402: Stack[-1] = "ui/NPC_Citizen1.png"
0x403: Return(); Pop(0)

0x404: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x405: Return(); Pop(0)

0x406: Stack[-1] = (bool) 0
0x407: Return(); Pop(0)

