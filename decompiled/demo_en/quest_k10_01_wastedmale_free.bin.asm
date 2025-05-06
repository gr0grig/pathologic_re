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
	RemoveStationaryActor
	player
	head
	GetPosition
	Can't retreat, distance: 
	fhit
	bhit
	hit_react
	1
	2
	add
	size
	get
	scripted
	blood_dir.xml
	GetEyesHeight
	Can't find lsh animation : 
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	k10q01
	k10q01WastedGotoBurah
	pt_gmap_factory
	AddMark
	quest_k10_01
	init_factory
	ShowMap
	SetReturnValue
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
	Sleep (1 args)
	GetScene (1 args)
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
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	Stop (0 args)
	FindDirLength (3 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
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

RunOp = 0x181
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb3 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x18b Vars = (object)
		EVENT_7 Op = 0x1d2 Vars = (int)
	GTASK_3 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x2b4 Vars = (int)
		EVENT_41 Op = 0x2ef Vars = (object)

Events:
EVENT_22 Op = 0x54d Vars = (object, int, float, float)
EVENT_43 Op = 0x555 Vars = (object, int, float, float, cvector, cvector)
EVENT_41 Op = 0x55f Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x39f

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x46d

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x46b

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x46f

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x471

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x53c

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
0x41: Call2 0x3e3

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
0x52: Call2 0x4af

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x9d

0x58: Pop(1)
0x59: Push((int) 526972)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: Push((int) 528069)
0x5f: Push((int) 29412)
0x60: Push((int) 29411)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x7f

0x64: PushEmpty(string)
0x65: Stack[-1] = "Neutral"
0x66: Call2 0x9d

0x67: Pop(1)
0x68: Push((int) 526976)
0x69: @@ SetMessage(Stack[-1])
0x6a: Pop(1)
0x6b: @@ ClearReplies()
0x6c: Pop(0)
0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x4bb

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x77; Pop(1)

0x72: Push((int) 526981)
0x73: Push((int) 28274)
0x74: Push((int) 28273)
0x75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76: Pop(3)
0x77: Push((int) 526977)
0x78: Push((int) -1)
0x79: Push((int) 28269)
0x7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b: Pop(3)
0x7c: GOTO 0x7f

0x7d: Return(); Pop(0)

0x7e: GOTO 0x4e

0x7f: PushEmpty(bool)
0x80: Call2 0x473

0x81: Pop(0)
0x82: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x83: @ lshWaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: PushEmpty(string)
0x89: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8a: Call2 0x3f4

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
0x9f: Call2 0x473

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
0xaf: Call2 0x404

0xb0: Pop(2)
0xb1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb2: Return(); Pop(0)

0xb3: PushEmpty()
0xb4: Push((int) 1)
0xb5: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0xb6: PushEmpty()
0xb7: Call2 0x41e

0xb8: Pop(0)
0xb9: Push((int) 28267)
0xba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbb: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbc: PushEmpty(object, object)
0xbd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbe: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf: Call2 0x475

0xc0: Pop(2)
0xc1: Push((int) 28275)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x47e

0xc8: Pop(2)
0xc9: PushEmpty(object, object)
0xca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcc: Call2 0x4aa

0xcd: Pop(2)
0xce: PushEmpty(object, object)
0xcf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd1: Call2 0x49a

0xd2: Pop(2)
0xd3: Push((int) 29417)
0xd4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call2 0x47e

0xda: Pop(2)
0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x4aa

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x49a

0xe4: Pop(2)
0xe5: Push((int) 28264)
0xe6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0xe8: PushEmpty(bool, object)
0xe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xea: Call2 0x4af

0xeb: Pop(1)
0xec: IF (Stack[-1] == 0) GOTO 0xfc; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x9d

0xf0: Pop(1)
0xf1: Push((int) 526972)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 528069)
0xf7: Push((int) 29412)
0xf8: Push((int) 29411)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Return(); Pop(0)

0xfc: PushEmpty(string)
0xfd: Stack[-1] = "Neutral"
0xfe: Call2 0x9d

0xff: Pop(1)
0x100: Push((int) 526976)
0x101: @@ SetMessage(Stack[-1])
0x102: Pop(1)
0x103: @@ ClearReplies()
0x104: Pop(0)
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107: Call2 0x4bb

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x10f; Pop(1)

0x10a: Push((int) 526981)
0x10b: Push((int) 28274)
0x10c: Push((int) 28273)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Push((int) 526977)
0x110: Push((int) -1)
0x111: Push((int) 28269)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 28274)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Neutral"
0x11a: Call2 0x9d

0x11b: Pop(1)
0x11c: Push((int) 526982)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 528073)
0x122: Push((int) 29416)
0x123: Push((int) 29415)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 528075)
0x127: Push((int) -1)
0x128: Push((int) 29417)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 29416)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call2 0x9d

0x132: Pop(1)
0x133: Push((int) 528074)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 526983)
0x139: Push((int) -1)
0x13a: Push((int) 28275)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 29412)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call2 0x9d

0x144: Pop(1)
0x145: Push((int) 528070)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 528071)
0x14b: Push((int) 29414)
0x14c: Push((int) 29413)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Push((int) 29414)
0x151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x152: IF (Stack[-1] == 0) GOTO 0x162; Pop(1)

0x153: PushEmpty(string)
0x154: Stack[-1] = "Neutral"
0x155: Call2 0x9d

0x156: Pop(1)
0x157: Push((int) 528072)
0x158: @@ SetMessage(Stack[-1])
0x159: Pop(1)
0x15a: @@ ClearReplies()
0x15b: Pop(0)
0x15c: Push((int) 526973)
0x15d: Push((int) 28266)
0x15e: Push((int) 28265)
0x15f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x160: Pop(3)
0x161: Return(); Pop(0)

0x162: Push((int) 28266)
0x163: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x165: PushEmpty(string)
0x166: Stack[-1] = "Neutral"
0x167: Call2 0x9d

0x168: Pop(1)
0x169: Push((int) 526974)
0x16a: @@ SetMessage(Stack[-1])
0x16b: Pop(1)
0x16c: @@ ClearReplies()
0x16d: Pop(0)
0x16e: Push((int) 526975)
0x16f: Push((int) -1)
0x170: Push((int) 28267)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x175: PushEmpty(bool)
0x176: Call2 0x473

0x177: Pop(0)
0x178: IF (Stack[-1] == 0) GOTO 0x17c; Pop(1)

0x179: @ lshStopAnimation()
0x17a: Pop(0)
0x17b: GOTO 0x17e

0x17c: @ StopAnimation()
0x17d: Pop(0)
0x17e: Return(); Pop(0)

0x17f: GOTO 0xb4

0x180: Return(); Pop(0)

0x181: Push((int) 3)
0x182: @ Sleep(Stack[-1])
0x183: Pop(1)
0x184: PushEmpty(float, float)
0x185: Stack[-2] = (int) 300
0x186: Stack[-1] = (int) 100
0x187: Call2 0x1a8

0x188: Pop(2)
0x189: GOTO 0x181

0x18a: Return(); Pop(0)

0x18b: PushEmpty(int, object, int, object)
0x18c: PushEmpty()
0x18d: Call2 0x1e9

0x18e: Pop(0)
0x18f: PushEmpty(int, object)
0x190: Stack[-1] = Stack[-7]
0x191: Push(-2, 1); TaskCall(0)
0x192: Call2 0x0

0x193: Pop(-2, 1); TaskReturn
0x194: Stack[-4] = Stack[-2]
0x195: Pop(2)
0x196: Push((int) 0)
0x197: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x199: @ GetScene(Stack[-1])
0x19a: Pop(0)
0x19b: PushEmpty(object)
0x19c: Call2 0x425

0x19d: Pop(0)
0x19e: @@ RemoveStationaryActor(Stack[-1])
0x19f: Pop(1)
0x1a0: PushEmpty(object)
0x1a1: Stack[-1] = Stack[-6]
0x1a2: Push(-1, 3); TaskCall(3)
0x1a3: Call2 0x26b

0x1a4: Pop(-1, 3); TaskReturn
0x1a5: Pop(1)
0x1a6: Stack[-1] = 0
0x1a7: Return(); Pop(4)

0x1a8: PushEmpty()
0x1a9: PushEmpty(bool)
0x1aa: Call2 0x39a

0x1ab: Pop(0)
0x1ac: Pop(1); Push((bool) Stack[-1] == 0)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Return(); Pop(0)

0x1af: Push("player")
0x1b0: @ FindActor(Stack[-4], Stack[-1])
0x1b1: Pop(1)
0x1b2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1b3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1b4: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x1b5: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x1b6: Push((int) 10)
0x1b7: Push((float)1.0)
0x1b8: @ SetTimer(Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: PushEmpty()
0x1bb: Call2 0x1f7

0x1bc: Pop(0)
0x1bd: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x1be: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1bf: Push((int) 10)
0x1c0: @ KillTimer(Stack[-1])
0x1c1: Pop(1)
0x1c2: Return(); Pop(0)

0x1c3: PushEmpty(float, float)
0x1c4: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x1c5: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c6: Stack[-3] = (bool) 0
0x1c7: Return(); Pop(2)

0x1c8: PushEmpty(float, object)
0x1c9: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1ca: Call2 0x314

0x1cb: Pop(1)
0x1cc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1cd: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x1d0: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x1d1: Return(); Pop(2)

0x1d2: PushEmpty()
0x1d3: Push((int) 10)
0x1d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x1c3

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e2; Pop(1)

0x1da: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: PushEmpty(object)
0x1dd: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x1de: Call2 0x413

0x1df: Pop(1)
0x1e0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1e1: GOTO 0x1e8

0x1e2: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e8; Pop(1)

0x1e4: Push("head")
0x1e5: @ UnlookAsync(Stack[-1])
0x1e6: Pop(1)
0x1e7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1e8: Return(); Pop(0)

0x1e9: PushEmpty()
0x1ea: Call2 0x248

0x1eb: Pop(0)
0x1ec: Push((int) 10)
0x1ed: @ KillTimer(Stack[-1])
0x1ee: Pop(1)
0x1ef: Push( Stack[2 + Tasks[-1].StackPointer] )
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f1: Push("head")
0x1f2: @ UnlookAsync(Stack[-1])
0x1f3: Pop(1)
0x1f4: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1f5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x1f8: @ WaitForAnimEnd()
0x1f9: Pop(0)
0x1fa: PushEmpty(bool)
0x1fb: Call2 0x39a

0x1fc: Pop(0)
0x1fd: Pop(1); Push((bool) Stack[-1] == 0)
0x1fe: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x1ff: Return(); Pop(14)

0x200: PushEmpty(int)
0x201: Call2 0x45a

0x202: Stack[-8] = Stack[-1]
0x203: Pop(1)
0x204: Stack[-6] = (int) 0
0x205: PushEmpty(bool)
0x206: Stack[-1] = (bool) 0
0x207: Push((int) 5)
0x208: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x209: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20a: PushEmpty(bool)
0x20b: Call2 0x39a

0x20c: Pop(0)
0x20d: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x20e: Stack[-1] = (bool) 1
0x20f: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x210: Push((int) 3)
0x211: @ irand(Stack[-6], Stack[-1])
0x212: Pop(1)
0x213: Push((int) 0)
0x214: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x215: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x216: Push(Stack[-7])
0x217: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x218: @ irand(Stack[-4], Stack[-7])
0x219: Pop(0)
0x21a: Push("all")
0x21b: PushEmpty(string, int)
0x21c: Stack[-1] = Stack[-7]
0x21d: Call2 0x453

0x21e: Pop(1)
0x21f: @ PlayAnimation(Stack[-2], Stack[-1])
0x220: Pop(2)
0x221: @ WaitForAnimEnd(Stack[-3])
0x222: Pop(0)
0x223: Pop(0); Push((bool) Stack[-3] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x225: GOTO 0x243

0x226: GOTO 0x238

0x227: Push((int) 1)
0x228: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x229: IF (Stack[-1] == 0) GOTO 0x235; Pop(1)

0x22a: Push((int) 4)
0x22b: @ rand(Stack[-3], Stack[-1])
0x22c: Pop(1)
0x22d: Push((int) 1)
0x22e: Pop(1); Push(Stack[-3] + Stack[-1]);
0x22f: @ Sleep(Stack[-1], Stack[-2])
0x230: Pop(1)
0x231: Pop(0); Push((bool) Stack[-1] == 0)
0x232: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x233: GOTO 0x243

0x234: GOTO 0x238

0x235: Push(Stack[-6])
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: GOTO 0x243

0x238: PushEmpty(bool)
0x239: Call2 0x246

0x23a: Pop(0)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: GOTO 0x243

0x23e: @ ResetAAS()
0x23f: Pop(0)
0x240: Push((int) 1)
0x241: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x242: GOTO 0x205

0x243: @ ResetAAS()
0x244: Pop(0)
0x245: Return(); Pop(14)

0x246: Stack[-1] = (bool) 1
0x247: Return(); Pop(0)

0x248: @ StopAnimation()
0x249: Pop(0)
0x24a: @ StopGroup0()
0x24b: Pop(0)
0x24c: Return(); Pop(0)

0x24d: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x24e: @ GetPosition(Stack[-6])
0x24f: Pop(0)
0x250: @@ GetPosition(Stack[-5])
0x251: Pop(0)
0x252: @ GetDirection(Stack[-4])
0x253: Pop(0)
0x254: PushEmpty(cvector, cvector)
0x255: PushEmpty(cvector, cvector)
0x256: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x257: Call2 0x42b

0x258: Pop(1)
0x259: Push((float)0.75)
0x25a: Pop(1); Push(Stack[-8] * Stack[-1]);
0x25b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x25c: Call2 0x42b

0x25d: Stack[-5] = Stack[-2]
0x25e: Pop(2)
0x25f: Push((int) 32)
0x260: Push((float)7000.0)
0x261: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x262: Pop(2)
0x263: Push((int) 100)
0x264: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x265: Push((int) 0)
0x266: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (int) 0
0x269: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x26a: Return(); Pop(12)

0x26b: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x26c: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x26d: PushEmpty(cvector, float)
0x26e: Stack[-1] = (float) 1.74533
0x26f: Call2 0x24d

0x270: Stack[-7] = Stack[-2]
0x271: Pop(2)
0x272: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x273: Push((float)2500.0)
0x274: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x275: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x276: PushEmpty(cvector, float)
0x277: Stack[-1] = (float) 2.61799
0x278: Call2 0x24d

0x279: Stack[-7] = Stack[-2]
0x27a: Pop(2)
0x27b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x27c: Push((float)2500.0)
0x27d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x27f: Push("Can't retreat, distance: ")
0x280: Pop(0); Push(Sqrt(Stack[-5]))
0x281: Pop(2); Push(Stack[-2] + Stack[-1]);
0x282: @ Trace(Stack[-1])
0x283: Pop(1)
0x284: Push((float)0.5)
0x285: @ Sleep(Stack[-1])
0x286: Pop(1)
0x287: Return(); Pop(10)

0x288: Push(CvectorIndex(Stack[-5], 0))
0x289: Push(CvectorIndex(Stack[-6], 2))
0x28a: @ Rotate(Stack[-2], Stack[-1])
0x28b: Pop(2)
0x28c: PushEmpty(cvector)
0x28d: Call2 0x308

0x28e: Pop(0)
0x28f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x290: Push((int) 120)
0x291: Push((float)0.5)
0x292: @ SetTimer(Stack[-2], Stack[-1])
0x293: Pop(2)
0x294: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x295: Push((int) 1)
0x296: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x297: Pop(1)
0x298: Push(Stack[-3])
0x299: IF (Stack[-1] == 0) GOTO 0x2b1; Pop(1)

0x29a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x29b: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x29c: GOTO 0x2b3

0x29d: GOTO 0x2b1

0x29e: PushEmpty(cvector, float)
0x29f: Stack[-1] = (float) 2.61799
0x2a0: Call2 0x24d

0x2a1: Stack[-4] = Stack[-2]
0x2a2: Pop(2)
0x2a3: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2a4: Push((float)2500.0)
0x2a5: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2b0; Pop(1)

0x2a7: PushEmpty(cvector)
0x2a8: Call2 0x308

0x2a9: Pop(0)
0x2aa: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2ab: Push((int) 120)
0x2ac: Push((float)0.5)
0x2ad: @ SetTimer(Stack[-2], Stack[-1])
0x2ae: Pop(2)
0x2af: GOTO 0x2b1

0x2b0: GOTO 0x2b3

0x2b1: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x295; Pop(1)

0x2b3: Return(); Pop(10)

0x2b4: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2b5: Push((int) 120)
0x2b6: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Return(); Pop(8)

0x2b9: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2ba: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2bb: @ Stop()
0x2bc: Pop(0)
0x2bd: Push((int) 1)
0x2be: @ KillTimer(Stack[-1])
0x2bf: Pop(1)
0x2c0: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2c1: GOTO 0x2e7

0x2c2: @ GetDirection(Stack[-4])
0x2c3: Pop(0)
0x2c4: Push((float)7000.0)
0x2c5: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x2c6: Pop(1)
0x2c7: PushEmpty(cvector, float)
0x2c8: Stack[-1] = (float) 1.74533
0x2c9: Call2 0x24d

0x2ca: Stack[-4] = Stack[-2]
0x2cb: Pop(2)
0x2cc: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2cd: PushEmpty(bool)
0x2ce: Stack[-1] = (bool) 0
0x2cf: Push((float)2500.0)
0x2d0: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x2d1: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2d2: PushEmpty(bool)
0x2d3: Stack[-1] = (bool) 1
0x2d4: Pop(0); Push(Stack[-5] * Stack[-5]);
0x2d5: Push((float)2.25)
0x2d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2d7: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: PushEmpty(bool)
0x2da: Call2 0x2f8

0x2db: Pop(0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dd: Stack[-1] = (bool) 0
0x2de: IF (Stack[-1] == 0) GOTO 0x2e0; Pop(1)

0x2df: Stack[-1] = (bool) 1
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e1: @ Stop()
0x2e2: Pop(0)
0x2e3: PushEmpty(cvector)
0x2e4: Call2 0x308

0x2e5: Pop(0)
0x2e6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2e7: Return(); Pop(8)

0x2e8: @ Stop()
0x2e9: Pop(0)
0x2ea: Push((int) 120)
0x2eb: @ KillTimer(Stack[-1])
0x2ec: Pop(1)
0x2ed: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x2ee: Return(); Pop(0)

0x2ef: PushEmpty()
0x2f0: PushEmpty()
0x2f1: Call2 0x2e8

0x2f2: Pop(0)
0x2f3: PushEmpty(object)
0x2f4: Stack[-1] = Stack[-2]
0x2f5: Call2 0x55f

0x2f6: Pop(1)
0x2f7: Return(); Pop(0)

0x2f8: PushEmpty(cvector, cvector, cvector, cvector)
0x2f9: @ GetDirection(Stack[-2])
0x2fa: Pop(0)
0x2fb: PushEmpty(cvector, object)
0x2fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fd: Call2 0x30d

0x2fe: Stack[-3] = Stack[-2]
0x2ff: Pop(2)
0x300: PushEmpty(float, cvector, cvector)
0x301: Stack[-2] = Stack[-5]
0x302: Stack[-1] = Stack[-4]
0x303: Call2 0x435

0x304: Pop(2)
0x305: Push((float)-0.34202)
0x306: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x307: Return(); Pop(4)

0x308: PushEmpty(cvector, cvector)
0x309: @ GetPosition(Stack[-1])
0x30a: Pop(0)
0x30b: Stack[-3] = Stack[-1]
0x30c: Return(); Pop(2)

0x30d: PushEmpty(cvector, cvector, cvector, cvector)
0x30e: @ GetPosition(Stack[-2])
0x30f: Pop(0)
0x310: @@ GetPosition(Stack[-1])
0x311: Pop(0)
0x312: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x313: Return(); Pop(4)

0x314: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x315: @ GetPosition(Stack[-3])
0x316: Pop(0)
0x317: @@ GetPosition(Stack[-2])
0x318: Pop(0)
0x319: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x31a: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x31b: Return(); Pop(6)

0x31c: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x31d: Pop(0); Push((bool) Stack[-15] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Return(); Pop(14)

0x320: @ IsDead(Stack[-7])
0x321: Pop(0)
0x322: Push(Stack[-7])
0x323: IF (Stack[-1] == 0) GOTO 0x325; Pop(1)

0x324: Return(); Pop(14)

0x325: @ GetSecondaryAnimationType(Stack[-6])
0x326: Pop(0)
0x327: Push((int) 0)
0x328: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: Return(); Pop(14)

0x32b: @@ GetPosition(Stack[-5])
0x32c: Pop(0)
0x32d: @ GetPosition(Stack[-4])
0x32e: Pop(0)
0x32f: @ GetDirection(Stack[-3])
0x330: Pop(0)
0x331: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x332: Push(CvectorIndex(Stack[-2], 0))
0x333: Push(CvectorIndex(Stack[-4], 0))
0x334: Pop(2); Push(Stack[-2] * Stack[-1]);
0x335: Push(CvectorIndex(Stack[-3], 2))
0x336: Push(CvectorIndex(Stack[-5], 2))
0x337: Pop(2); Push(Stack[-2] * Stack[-1]);
0x338: Pop(2); Push(Stack[-2] + Stack[-1]);
0x339: Push((int) 0)
0x33a: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-1] = "fhit"
0x33d: GOTO 0x33f

0x33e: Stack[-1] = "bhit"
0x33f: Push("hit_react")
0x340: Push("1")
0x341: Pop(1); Push(Stack[-3] + Stack[-1]);
0x342: Push("2")
0x343: Pop(1); Push(Stack[-4] + Stack[-1]);
0x344: Push((int) -10)
0x345: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(4)
0x347: Return(); Pop(14)

0x348: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x349: PushEmpty(bool)
0x34a: Stack[-1] = (bool) 0
0x34b: PushEmpty(bool)
0x34c: Stack[-1] = (bool) 0
0x34d: Push(Stack[-23])
0x34e: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34f: Push((int) 4)
0x350: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: Stack[-1] = (bool) 1
0x353: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x354: Push((int) 5)
0x355: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x356: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x357: Stack[-1] = (bool) 1
0x358: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x359: PushEmpty(cvector, cvector)
0x35a: PushEmpty(cvector, object)
0x35b: Stack[-1] = Stack[-25]
0x35c: Call2 0x30d

0x35d: Stack[-3] = Stack[-2]
0x35e: Pop(2)
0x35f: Call2 0x42b

0x360: Stack[-11] = Stack[-2]
0x361: Pop(2)
0x362: @ CreateVectorVector(Stack[-8])
0x363: Pop(0)
0x364: Stack[-7] = (int) 1
0x365: Push("hit")
0x366: Pop(1); Push(Stack[-1] + Stack[-8]);
0x367: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x368: Pop(1)
0x369: Pop(0); Push((bool) Stack[-6] == 0)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: GOTO 0x375

0x36c: Pop(0); Push(Stack[-4] | Stack[-9]);
0x36d: Push((float)0.70711)
0x36e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: @@ add(Stack[-5])
0x371: Pop(0)
0x372: Push((int) 1)
0x373: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x374: GOTO 0x365

0x375: @@ size(Stack[-3])
0x376: Pop(0)
0x377: Push(Stack[-3])
0x378: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x379: @ irand(Stack[-2], Stack[-3])
0x37a: Pop(0)
0x37b: @@ get(Stack[-1], Stack[-2])
0x37c: Pop(0)
0x37d: PushEmpty(object, int, float, cvector, cvector)
0x37e: Stack[-5] = Stack[-26]
0x37f: Stack[-4] = Stack[-25]
0x380: Stack[-3] = Stack[-24]
0x381: Stack[-2] = Stack[-6]
0x382: Stack[-1] = -Stack[-14]; Pop(0);
0x383: Call2 0x38c

0x384: Pop(5)
0x385: Return(); Pop(18)

0x386: Stack[-8] = 0
0x387: PushEmpty(object)
0x388: Stack[-1] = Stack[-22]
0x389: Call2 0x31c

0x38a: Pop(1)
0x38b: Return(); Pop(18)

0x38c: PushEmpty(object, object, object, object)
0x38d: @ GetScene(Stack[-2])
0x38e: Pop(0)
0x38f: Push("scripted")
0x390: Push("blood_dir.xml")
0x391: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x392: Pop(2)
0x393: PushEmpty(object)
0x394: Stack[-1] = Stack[-10]
0x395: Call2 0x31c

0x396: Pop(1)
0x397: Return(); Pop(4)

0x398: Stack[-1] = 0
0x399: Stack[-2] = 0
0x39a: PushEmpty(bool, bool)
0x39b: @ IsLoaded(Stack[-1])
0x39c: Pop(0)
0x39d: Stack[-3] = Stack[-1]
0x39e: Return(); Pop(2)

0x39f: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3a0: @@ GetPosition(Stack[-8])
0x3a1: Pop(0)
0x3a2: @@ GetEyesHeight(Stack[-9])
0x3a3: Pop(0)
0x3a4: Push(CvectorIndex(Stack[-8], 1))
0x3a5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3a6: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3a7: @ GetPosition(Stack[-7])
0x3a8: Pop(0)
0x3a9: @ GetEyesHeight(Stack[-9])
0x3aa: Pop(0)
0x3ab: Push(CvectorIndex(Stack[-7], 1))
0x3ac: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ad: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3ae: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3af: Push(CvectorIndex(Stack[-6], 1))
0x3b0: Stack[-1] = (int) 0
0x3b1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3b2: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3b3: Pop(1); Push(Sqrt(Stack[-1]))
0x3b4: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3b5: Stack[-5] = -Stack[-6]; Pop(0);
0x3b6: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3b7: PushEmpty(cvector, cvector)
0x3b8: Push(CVector(0.0, 1.0, 0.0))
0x3b9: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x3ba: Call2 0x42b

0x3bb: Pop(1)
0x3bc: Push((int) 25)
0x3bd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3be: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3bf: Push(CVector(0.0, 10.0, 0.0))
0x3c0: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x3c1: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x3c2: @ IsOverrideActive(Stack[-2])
0x3c3: Pop(0)
0x3c4: Push(Stack[-2])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-21] = (bool) 0
0x3c7: Return(); Pop(18)

0x3c8: @ StopWorld()
0x3c9: Pop(0)
0x3ca: @ CameraTransit(Stack[-3], Stack[-5])
0x3cb: Pop(0)
0x3cc: Push(CvectorIndex(Stack[-4], 0))
0x3cd: Push(CvectorIndex(Stack[-5], 2))
0x3ce: @ Rotate(Stack[-2], Stack[-1])
0x3cf: Pop(2)
0x3d0: PushEmpty(bool)
0x3d1: Call2 0x473

0x3d2: Pop(0)
0x3d3: IF (Stack[-1] == 0) GOTO 0x3d5; Pop(1)

0x3d4: GOTO 0x3dd

0x3d5: Push("head")
0x3d6: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3d7: Pop(1)
0x3d8: Push(Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3da: Push("head")
0x3db: @ LookAsyncCamera(Stack[-1])
0x3dc: Pop(1)
0x3dd: @ CameraWaitForPlayFinish()
0x3de: Pop(0)
0x3df: @ ResumeWorld()
0x3e0: Pop(0)
0x3e1: Stack[-21] = (bool) 1
0x3e2: Return(); Pop(18)

0x3e3: PushEmpty(bool, bool)
0x3e4: @ CameraSwitchToNormal()
0x3e5: Pop(0)
0x3e6: PushEmpty(bool)
0x3e7: Call2 0x473

0x3e8: Pop(0)
0x3e9: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3ea: GOTO 0x3f3

0x3eb: Push("head")
0x3ec: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x3ed: Pop(1)
0x3ee: Push(Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f3; Pop(1)

0x3f0: Push("head")
0x3f1: @ UnlookAsync(Stack[-1])
0x3f2: Pop(1)
0x3f3: Return(); Pop(2)

0x3f4: PushEmpty(bool, float, float, bool, float, float)
0x3f5: @ lshHasAnimation(Stack[-3], Stack[-7])
0x3f6: Pop(0)
0x3f7: Push(Stack[-3])
0x3f8: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f9: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x3fa: Pop(0)
0x3fb: Push((bool) 0)
0x3fc: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(1)
0x3fe: GOTO 0x403

0x3ff: Push("Can't find lsh animation : ")
0x400: Pop(1); Push(Stack[-1] + Stack[-8]);
0x401: @ Trace(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(6)

0x404: PushEmpty(bool, float, float, bool, float, float)
0x405: @ lshHasAnimation(Stack[-3], Stack[-8])
0x406: Pop(0)
0x407: Push(Stack[-3])
0x408: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x409: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x40a: Pop(0)
0x40b: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x40c: Pop(0)
0x40d: GOTO 0x412

0x40e: Push("Can't find lsh animation : ")
0x40f: Pop(1); Push(Stack[-1] + Stack[-9]);
0x410: @ Trace(Stack[-1])
0x411: Pop(1)
0x412: Return(); Pop(6)

0x413: PushEmpty(float, cvector, float, cvector)
0x414: @@ GetEyesHeight(Stack[-2])
0x415: Pop(0)
0x416: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x417: Push(CvectorIndex(Stack[-1], 1))
0x418: Stack[-1] = Stack[-3]
0x419: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x41a: Push("head")
0x41b: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x41c: Pop(1)
0x41d: Return(); Pop(4)

0x41e: PushEmpty(bool)
0x41f: Call2 0x473

0x420: Pop(0)
0x421: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x422: @ lshStopSpeech()
0x423: Pop(0)
0x424: Return(); Pop(0)

0x425: PushEmpty(object, object)
0x426: @ self(Stack[-1])
0x427: Pop(0)
0x428: Stack[-3] = Stack[-1]
0x429: Return(); Pop(2)

0x42a: Stack[-1] = 0
0x42b: PushEmpty(float, float)
0x42c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x42d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x42e: Push((float)0.0)
0x42f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x430: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x431: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x432: Return(); Pop(2)

0x433: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x434: Return(); Pop(2)

0x435: PushEmpty()
0x436: Pop(0); Push(Stack[-2] | Stack[-1]);
0x437: Pop(0); Push(Stack[-3] | Stack[-3]);
0x438: Pop(0); Push(Stack[-3] | Stack[-3]);
0x439: Pop(2); Push(Stack[-2] * Stack[-1]);
0x43a: Pop(1); Push(Sqrt(Stack[-1]))
0x43b: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x43c: Return(); Pop(0)

0x43d: PushEmpty(int, int)
0x43e: @ GetVariable(Stack[-3], Stack[-1])
0x43f: Pop(0)
0x440: Stack[-4] = Stack[-1]
0x441: Return(); Pop(2)

0x442: PushEmpty(object, object)
0x443: @ FindActor(Stack[-1], Stack[-4])
0x444: Pop(0)
0x445: Pop(0); Push((bool) Stack[-1] == 0)
0x446: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x447: Stack[-5] = (bool) 0
0x448: Return(); Pop(2)

0x449: @ Trigger(Stack[-1], Stack[-3])
0x44a: Pop(0)
0x44b: Stack[-5] = (bool) 1
0x44c: Return(); Pop(2)

0x44d: Stack[-1] = 0
0x44e: PushEmpty(float, float)
0x44f: @ GetGameTime(Stack[-1])
0x450: Pop(0)
0x451: Stack[-3] = Stack[-1]
0x452: Return(); Pop(2)

0x453: PushEmpty(string, string)
0x454: Stack[-1] = "idle"
0x455: Push(Stack[-3])
0x456: IF (Stack[-1] == 0) GOTO 0x458; Pop(1)

0x457: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x458: Stack[-4] = Stack[-1]
0x459: Return(); Pop(2)

0x45a: PushEmpty(int, bool, int, bool)
0x45b: Stack[-2] = (int) 0
0x45c: Push("all")
0x45d: PushEmpty(string, int)
0x45e: Stack[-1] = Stack[-5]
0x45f: Call2 0x453

0x460: Pop(1)
0x461: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x462: Pop(2)
0x463: Pop(0); Push((bool) Stack[-1] == 0)
0x464: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x465: GOTO 0x469

0x466: Push((int) 1)
0x467: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x468: GOTO 0x45c

0x469: Stack[-5] = Stack[-2]
0x46a: Return(); Pop(4)

0x46b: Stack[-1] = (int) 515556
0x46c: Return(); Pop(0)

0x46d: Stack[-1] = (int) 503341
0x46e: Return(); Pop(0)

0x46f: Stack[-1] = "ui/NPC_Citizen3.png"
0x470: Return(); Pop(0)

0x471: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x472: Return(); Pop(0)

0x473: Stack[-1] = (bool) 0
0x474: Return(); Pop(0)

0x475: PushEmpty()
0x476: Push("k10q01")
0x477: Push((int) 4)
0x478: @ SetVariable(Stack[-2], Stack[-1])
0x479: Pop(2)
0x47a: PushEmpty()
0x47b: Call2 0x4c7

0x47c: Pop(0)
0x47d: Return(); Pop(0)

0x47e: PushEmpty(object, object)
0x47f: Push("k10q01")
0x480: Push((int) 6)
0x481: @ SetVariable(Stack[-2], Stack[-1])
0x482: Pop(2)
0x483: PushEmpty(object)
0x484: Call2 0x50a

0x485: Stack[-2] = Stack[-1]
0x486: Pop(1)
0x487: Push("k10q01WastedGotoBurah")
0x488: Push("pt_gmap_factory")
0x489: Push((int) 1)
0x48a: Push((int) 530196)
0x48b: PushEmpty(float)
0x48c: Call2 0x44e

0x48d: Pop(0)
0x48e: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(5)
0x490: PushEmpty()
0x491: Call2 0x4d4

0x492: Pop(0)
0x493: PushEmpty(bool, string, string)
0x494: Stack[-2] = "quest_k10_01"
0x495: Stack[-1] = "init_factory"
0x496: Call2 0x442

0x497: Pop(3)
0x498: Return(); Pop(2)

0x499: Stack[-1] = 0
0x49a: PushEmpty()
0x49b: PushEmpty(object, string, float)
0x49c: PushEmpty(object)
0x49d: Call2 0x50a

0x49e: Stack[-4] = Stack[-1]
0x49f: Pop(1)
0x4a0: Stack[-2] = "pt_gmap_factory"
0x4a1: Stack[-1] = (int) 2
0x4a2: Call2 0x51b

0x4a3: Pop(3)
0x4a4: PushEmpty(object)
0x4a5: Call2 0x50a

0x4a6: Pop(0)
0x4a7: @@ ShowMap(Stack[-1])
0x4a8: Pop(1)
0x4a9: Return(); Pop(0)

0x4aa: PushEmpty()
0x4ab: Push((int) 0)
0x4ac: @@ SetReturnValue(Stack[-1])
0x4ad: Pop(1)
0x4ae: Return(); Pop(0)

0x4af: PushEmpty()
0x4b0: PushEmpty(int, string)
0x4b1: Stack[-1] = "k10q01"
0x4b2: Call2 0x43d

0x4b3: Pop(1)
0x4b4: Push((int) 3)
0x4b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4b6: IF (Stack[-1] == 0) GOTO 0x4b9; Pop(1)

0x4b7: Stack[-2] = (bool) 1
0x4b8: Return(); Pop(0)

0x4b9: Stack[-2] = (bool) 0
0x4ba: Return(); Pop(0)

0x4bb: PushEmpty()
0x4bc: PushEmpty(int, string)
0x4bd: Stack[-1] = "k10q01"
0x4be: Call2 0x43d

0x4bf: Pop(1)
0x4c0: Push((int) 5)
0x4c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4c5; Pop(1)

0x4c3: Stack[-2] = (bool) 1
0x4c4: Return(); Pop(0)

0x4c5: Stack[-2] = (bool) 0
0x4c6: Return(); Pop(0)

0x4c7: PushEmpty(object, object)
0x4c8: Push((int) 451)
0x4c9: Push((int) 1)
0x4ca: Push((int) 527009)
0x4cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: PushEmpty(bool, object, int)
0x4ce: Stack[-2] = Stack[-4]
0x4cf: Stack[-1] = (int) 447
0x4d0: Call2 0x4ee

0x4d1: Pop(3)
0x4d2: Return(); Pop(2)

0x4d3: Stack[-1] = 0
0x4d4: PushEmpty(object, object)
0x4d5: Push((int) 453)
0x4d6: Push((int) 1)
0x4d7: Push((int) 527011)
0x4d8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4d9: Pop(3)
0x4da: PushEmpty(bool, object, int)
0x4db: Stack[-2] = Stack[-4]
0x4dc: Stack[-1] = (int) 447
0x4dd: Call2 0x4ee

0x4de: Pop(3)
0x4df: Return(); Pop(2)

0x4e0: Stack[-1] = 0
0x4e1: PushEmpty(object, object)
0x4e2: @ GetDiaryRoot(Stack[-1])
0x4e3: Pop(0)
0x4e4: Pop(0); Push((bool) Stack[-1] == 0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4e6: Push("Can't retrieve diary root")
0x4e7: @ Trace(Stack[-1])
0x4e8: Pop(1)
0x4e9: Stack[-3] = (bool) 0
0x4ea: Return(); Pop(2)

0x4eb: Stack[-3] = Stack[-1]
0x4ec: Return(); Pop(2)

0x4ed: Stack[-1] = 0
0x4ee: PushEmpty(object, object, int, object, object, int)
0x4ef: PushEmpty(object)
0x4f0: Call2 0x4e1

0x4f1: Stack[-4] = Stack[-1]
0x4f2: Pop(1)
0x4f3: @@ Find(Stack[-7], Stack[-2])
0x4f4: Pop(0)
0x4f5: Pop(0); Push((bool) Stack[-2] == 0)
0x4f6: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f7: Push("Can't find diary parent with id: ")
0x4f8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4f9: @ Trace(Stack[-1])
0x4fa: Pop(1)
0x4fb: Stack[-9] = (bool) 0
0x4fc: Return(); Pop(6)

0x4fd: @@ AddChild(Stack[-8])
0x4fe: Pop(0)
0x4ff: Push((int) 7)
0x500: @ SendWorldWndMessage(Stack[-1])
0x501: Pop(1)
0x502: @@ GetCategory(Stack[-1])
0x503: Pop(0)
0x504: @ SetDiarySection(Stack[-1])
0x505: Pop(0)
0x506: Stack[-9] = (bool) 0
0x507: Return(); Pop(6)

0x508: Stack[-2] = 0
0x509: Stack[-3] = 0
0x50a: PushEmpty(object, object, object, object)
0x50b: @ GetMainOutdoorScene(Stack[-2])
0x50c: Pop(0)
0x50d: Pop(0); Push((bool) Stack[-2] == 0)
0x50e: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x50f: Push("Can't find main outdoor scene")
0x510: @ Trace(Stack[-1])
0x511: Pop(1)
0x512: Stack[-1] = 0
0x513: Stack[-5] = Stack[-1]
0x514: Return(); Pop(4)

0x515: @@ GetMap(Stack[-1])
0x516: Pop(0)
0x517: Stack[-5] = Stack[-1]
0x518: Return(); Pop(4)

0x519: Stack[-1] = 0
0x51a: Stack[-2] = 0
0x51b: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x51c: @ GetMainOutdoorScene(Stack[-2])
0x51d: Pop(0)
0x51e: Pop(0); Push((bool) Stack[-2] == 0)
0x51f: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x520: Push("Can't find main outdoor scene")
0x521: @ Trace(Stack[-1])
0x522: Pop(1)
0x523: Return(); Pop(8)

0x524: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x525: Pop(0)
0x526: Pop(0); Push((bool) Stack[-1] == 0)
0x527: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x528: Push("Warning: outdoor scene locator ")
0x529: Pop(1); Push(Stack[-1] + Stack[-11]);
0x52a: Push(" doesnt exist")
0x52b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x52c: @ Trace(Stack[-1])
0x52d: Pop(1)
0x52e: @@ GetMap(Stack[-11])
0x52f: Pop(0)
0x530: Pop(0); Push((bool) Stack[-11] == 0)
0x531: IF (Stack[-1] == 0) GOTO 0x536; Pop(1)

0x532: Push("Can't find map")
0x533: @ Trace(Stack[-1])
0x534: Pop(1)
0x535: Return(); Pop(8)

0x536: Push(CvectorIndex(Stack[-4], 0))
0x537: Push(CvectorIndex(Stack[-5], 2))
0x538: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x539: Pop(2)
0x53a: Return(); Pop(8)

0x53b: Stack[-2] = 0
0x53c: PushEmpty(int, int)
0x53d: Push("branch")
0x53e: @ GetVariable(Stack[-1], Stack[-2])
0x53f: Pop(1)
0x540: Push((int) 0)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x543: Stack[-3] = (int) 1
0x544: Return(); Pop(2)

0x545: GOTO 0x54b

0x546: Push((int) 1)
0x547: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-3] = (int) 2
0x54a: Return(); Pop(2)

0x54b: Stack[-3] = (int) 3
0x54c: Return(); Pop(2)

0x54d: PushEmpty()
0x54e: PushEmpty(object, int, float)
0x54f: Stack[-3] = Stack[-7]
0x550: Stack[-2] = Stack[-6]
0x551: Stack[-1] = Stack[-5]
0x552: Call2 0x348

0x553: Pop(3)
0x554: Return(); Pop(0)

0x555: PushEmpty()
0x556: PushEmpty(object, int, float, cvector, cvector)
0x557: Stack[-5] = Stack[-11]
0x558: Stack[-4] = Stack[-10]
0x559: Stack[-3] = Stack[-9]
0x55a: Stack[-2] = Stack[-7]
0x55b: Stack[-1] = Stack[-6]
0x55c: Call2 0x38c

0x55d: Pop(5)
0x55e: Return(); Pop(0)

0x55f: PushEmpty()
0x560: Return(); Pop(0)

