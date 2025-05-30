GlobalVarCount = 3
	G_VAR_0 string 
	G_VAR_1 bool 
	G_VAR_2 object 

Strings:
	player
	ptidle
	all
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
	GetLocator
	loc
	walk_stopl
	walk_stopr
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	Can't find lsh animation : 
	add
	money
	Money
	pt_
	cleanup
	restore
	money10000 is given
	playsound
	givemoney
	d5q02
	d5q02GorbunFindTheDaughter
	pt_map_gorbun
	AddMark
	ood5Gorbun1
	d5q02AnnaGotoGorbun
	FindMark
	Remove
	d5q02AnnaGotoGorbunSelf
	d5q02AnnaGotoKabak
	d5q02NudeMeeting
	quest_d5_02
	completed
	ood5Gorbun2
	ood5Gorbun3
	money 50000 is given
	d5q02KnowNudeIsDead
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

Import:
	Hold (0 args)
	StopGroup0 (0 args)
	sync (0 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	WaitForAnimEnd (1 args)
	Rotate (3 args)
	IsOverrideActive (1 args)
	IsPlayerActor (2 args)
	FindActor (2 args)
	Stop (0 args)
	Sleep (1 args)
	StopAnimation (0 args)
	HasProperty (2 args)
	GetProperty (2 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	HasAnimation (3 args)
	CreateDialog (1 args)
	DoDialog (1 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	SensePlayerOnly (1 args)
	GetScene (1 args)
	GetHeight (1 args)
	CanReachByPF (2 args)
	GetAnimationOffset (3 args)
	GetPosition (1 args)
	RotateAsync (2 args)
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
	UnlookAsync (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	RemoveActor (1 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x4c4
RunTask = 6

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_5 Op = 0x8 Vars = ()
	GTASK_1 Vars = (bool) Params = 3
		EVENT_6 Op = 0x38 Vars = ()
		EVENT_0 Op = 0x45 Vars = (object)
		EVENT_10 Op = 0x59 Vars = (object)
		EVENT_7 Op = 0x6d Vars = (int)
	GTASK_2  Params = 1
		EVENT_6 Op = 0xa2 Vars = ()
		EVENT_0 Op = 0xae Vars = (object)
	GTASK_3  Params = 1
		EVENT_6 Op = 0xf7 Vars = ()
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x210 Vars = (int, int)
	GTASK_6 Vars = (float, float, int) Params = 0
		EVENT_6 Op = 0x53a Vars = ()
		EVENT_0 Op = 0x543 Vars = (object)

Events:
EVENT_26 Op = 0x681 Vars = (string)
EVENT_6 Op = 0x699 Vars = ()

0x0: @ Hold()
0x1: Pop(0)
0x2: PushEmpty(bool)
0x3: Call2 0x585

0x4: Pop(0)
0x5: Pop(1); Push((bool) Stack[-1] == 0)
0x6: IF (Stack[-1] == 0) GOTO 0x0; Pop(1)

0x7: Return(); Pop(0)

0x8: @ StopGroup0()
0x9: Pop(0)
0xa: @ sync()
0xb: Pop(0)
0xc: Return(); Pop(0)

0xd: PushEmpty(bool, bool)
0xe: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xf: Push((int) 21)
0x10: Push((float)0.5)
0x11: @ SetTimer(Stack[-2], Stack[-1])
0x12: Pop(2)
0x13: PushEmpty(bool, cvector)
0x14: Stack[-1] = Stack[-6]
0x15: Call2 0x567

0x16: Pop(1)
0x17: Pop(1); Push((bool) Stack[-1] == 0)
0x18: IF (Stack[-1] == 0) GOTO 0x1a; Pop(1)

0x19: GOTO 0x13

0x1a: Push((bool) 0)
0x1b: @ MovePoint(Stack[-5], Stack[-1], Stack[-2])
0x1c: Pop(1)
0x1d: Push(Stack[-1])
0x1e: IF (Stack[-1] == 0) GOTO 0x20; Pop(1)

0x1f: GOTO 0x21

0x20: GOTO 0x13

0x21: Push((int) 20)
0x22: @ KillTimer(Stack[-1])
0x23: Pop(1)
0x24: Push((int) 21)
0x25: @ KillTimer(Stack[-1])
0x26: Pop(1)
0x27: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x28: @ WaitForAnimEnd(Stack[-1])
0x29: Pop(0)
0x2a: Pop(0); Push((bool) Stack[-1] == 0)
0x2b: IF (Stack[-1] == 0) GOTO 0x2e; Pop(1)

0x2c: Stack[-5] = (bool) 0
0x2d: Return(); Pop(2)

0x2e: Push(CvectorIndex(Stack[-3], 0))
0x2f: Push(CvectorIndex(Stack[-4], 2))
0x30: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x31: Pop(2)
0x32: Pop(0); Push((bool) Stack[-1] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x36; Pop(1)

0x34: Stack[-5] = (bool) 0
0x35: Return(); Pop(2)

0x36: Stack[-5] = (bool) 1
0x37: Return(); Pop(2)

0x38: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x39: PushEmpty()
0x3a: Call2 0x91

0x3b: Pop(0)
0x3c: PushEmpty()
0x3d: Call2 0x699

0x3e: Pop(0)
0x3f: PushEmpty()
0x40: Push(-0, 0); TaskCall(0)
0x41: Call2 0x0

0x42: Pop(-0, 0); TaskReturn
0x43: Pop(0)
0x44: Return(); Pop(0)

0x45: PushEmpty(bool, bool)
0x46: @ IsOverrideActive(Stack[-1])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-1] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x58; Pop(1)

0x4a: PushEmpty()
0x4b: Call2 0x91

0x4c: Pop(0)
0x4d: EventDisable(0)
0x4e: PushEmpty(bool, object)
0x4f: Stack[-1] = Stack[-5]
0x50: Call2 0x571

0x51: Pop(2)
0x52: EventEnable(0)
0x53: PushEmpty(object)
0x54: Stack[-1] = Stack[-4]
0x55: Call2 0x7e4

0x56: Pop(1)
0x57: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x58: Return(); Pop(2)

0x59: PushEmpty(bool, bool)
0x5a: @ IsPlayerActor(Stack[-3], Stack[-1])
0x5b: Pop(0)
0x5c: Push(Stack[-1])
0x5d: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x5e: PushEmpty()
0x5f: Call2 0x91

0x60: Pop(0)
0x61: PushEmpty(object)
0x62: Stack[-1] = Stack[-4]
0x63: Push(-1, 0); TaskCall(2)
0x64: Call2 0x94

0x65: Pop(-1, 0); TaskReturn
0x66: Pop(1)
0x67: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x68: Push((int) 20)
0x69: Push((float)10.0)
0x6a: @ SetTimer(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Return(); Pop(2)

0x6d: PushEmpty(object, object)
0x6e: Push((int) 20)
0x6f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x70: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x71: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x72: Push((int) 20)
0x73: @ KillTimer(Stack[-1])
0x74: Pop(1)
0x75: GOTO 0x90

0x76: Push((int) 21)
0x77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x78: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x79: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7a: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x7b: Push("player")
0x7c: @ FindActor(Stack[-2], Stack[-1])
0x7d: Pop(1)
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 0
0x80: Push(Stack[-2])
0x81: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x82: PushEmpty(float, object)
0x83: Stack[-1] = Stack[-4]
0x84: Call2 0x558

0x85: Pop(1)
0x86: Push((float)62500.0)
0x87: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: Stack[-1] = (bool) 1
0x8a: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8b: PushEmpty(object)
0x8c: Stack[-1] = Stack[-2]
0x8d: Call2 0x59

0x8e: Pop(1)
0x8f: Stack[-1] = 0
0x90: Return(); Pop(2)

0x91: @ Stop()
0x92: Pop(0)
0x93: Return(); Pop(0)

0x94: PushEmpty(bool, bool)
0x95: @ WaitForAnimEnd(Stack[-1])
0x96: Pop(0)
0x97: Pop(0); Push((bool) Stack[-1] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(2)

0x9a: PushEmpty(object)
0x9b: Stack[-1] = Stack[-4]
0x9c: Call2 0x57a

0x9d: Pop(1)
0x9e: Push((int) 6)
0x9f: @ Sleep(Stack[-1])
0xa0: Pop(1)
0xa1: Return(); Pop(2)

0xa2: PushEmpty()
0xa3: Call2 0xc1

0xa4: Pop(0)
0xa5: PushEmpty()
0xa6: Call2 0x699

0xa7: Pop(0)
0xa8: PushEmpty()
0xa9: Push(-0, 0); TaskCall(0)
0xaa: Call2 0x0

0xab: Pop(-0, 0); TaskReturn
0xac: Pop(0)
0xad: Return(); Pop(0)

0xae: PushEmpty(bool, bool)
0xaf: @ IsOverrideActive(Stack[-1])
0xb0: Pop(0)
0xb1: Pop(0); Push((bool) Stack[-1] == 0)
0xb2: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb3: PushEmpty()
0xb4: Call2 0xc1

0xb5: Pop(0)
0xb6: EventDisable(0)
0xb7: PushEmpty(bool, object)
0xb8: Stack[-1] = Stack[-5]
0xb9: Call2 0x571

0xba: Pop(2)
0xbb: EventEnable(0)
0xbc: PushEmpty(object)
0xbd: Stack[-1] = Stack[-4]
0xbe: Call2 0x7e4

0xbf: Pop(1)
0xc0: Return(); Pop(2)

0xc1: @ StopGroup0()
0xc2: Pop(0)
0xc3: @ StopAnimation()
0xc4: Pop(0)
0xc5: Return(); Pop(0)

0xc6: PushEmpty(string, bool, string, int, int, int, int, string, bool, string, int, int, int, int)
0xc7: Push(Stack[-15])
0xc8: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc9: Push("ptidle")
0xca: Stack[-8] = Stack[-1] + Stack[-16]; Pop(1);
0xcb: GOTO 0xcd

0xcc: Stack[-7] = "ptidle"
0xcd: @ HasProperty(Stack[-7], Stack[-6])
0xce: Pop(0)
0xcf: Push(Stack[-6])
0xd0: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xd1: @ GetProperty(Stack[-7], Stack[-5])
0xd2: Pop(0)
0xd3: PushEmpty(int, string)
0xd4: Stack[-1] = Stack[-7]
0xd5: Call2 0x108

0xd6: Stack[-6] = Stack[-2]
0xd7: Pop(2)
0xd8: @ irand(Stack[-3], Stack[-4])
0xd9: Pop(0)
0xda: Push("all")
0xdb: PushEmpty(string, string, int)
0xdc: Stack[-2] = Stack[-9]
0xdd: Stack[-1] = Stack[-7]
0xde: Call2 0x100

0xdf: Pop(2)
0xe0: @ PlayAnimation(Stack[-2], Stack[-1])
0xe1: Pop(2)
0xe2: @ WaitForAnimEnd()
0xe3: Pop(0)
0xe4: GOTO 0xf6

0xe5: PushEmpty(int)
0xe6: Call2 0x663

0xe7: Stack[-3] = Stack[-1]
0xe8: Pop(1)
0xe9: Push(Stack[-2])
0xea: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xeb: @ irand(Stack[-1], Stack[-2])
0xec: Pop(0)
0xed: Push("all")
0xee: PushEmpty(string, int)
0xef: Stack[-1] = Stack[-4]
0xf0: Call2 0x65c

0xf1: Pop(1)
0xf2: @ PlayAnimation(Stack[-2], Stack[-1])
0xf3: Pop(2)
0xf4: @ WaitForAnimEnd()
0xf5: Pop(0)
0xf6: Return(); Pop(14)

0xf7: PushEmpty()
0xf8: Call2 0x699

0xf9: Pop(0)
0xfa: PushEmpty()
0xfb: Push(-0, 0); TaskCall(0)
0xfc: Call2 0x0

0xfd: Pop(-0, 0); TaskReturn
0xfe: Pop(0)
0xff: Return(); Pop(0)

0x100: PushEmpty()
0x101: Push((int) 0)
0x102: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0x104: Stack[-3] = Stack[-2]
0x105: GOTO 0x107

0x106: Stack[-3] = Stack[-2] + Stack[-1]; Pop(0);
0x107: Return(); Pop(0)

0x108: PushEmpty(int, bool, int, bool)
0x109: Stack[-2] = (int) 0
0x10a: Push("all")
0x10b: PushEmpty(string, string, int)
0x10c: Stack[-2] = Stack[-9]
0x10d: Stack[-1] = Stack[-6]
0x10e: Call2 0x100

0x10f: Pop(2)
0x110: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x111: Pop(2)
0x112: Pop(0); Push((bool) Stack[-1] == 0)
0x113: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x114: GOTO 0x118

0x115: Push((int) 1)
0x116: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x117: GOTO 0x10a

0x118: Stack[-6] = Stack[-2]
0x119: Return(); Pop(4)

0x11a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x11b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x11c: PushEmpty(bool, object, float)
0x11d: Stack[-2] = Stack[-12]
0x11e: Stack[-1] = (float) 100.0
0x11f: Call2 0x58a

0x120: Pop(2)
0x121: Pop(1); Push((bool) Stack[-1] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x125; Pop(1)

0x123: Stack[-10] = (int) -2
0x124: Return(); Pop(8)

0x125: @ CreateDialog(Stack[-4])
0x126: Pop(0)
0x127: PushEmpty(int)
0x128: Call2 0x7dc

0x129: Pop(0)
0x12a: @@ SetNPCName(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty(int)
0x12d: Call2 0x7da

0x12e: Pop(0)
0x12f: @@ SetNPCDescription(Stack[-1])
0x130: Pop(1)
0x131: PushEmpty(string)
0x132: Call2 0x7de

0x133: Pop(0)
0x134: @@ SetPhoto(Stack[-1])
0x135: Pop(1)
0x136: PushEmpty(string)
0x137: Call2 0x7e0

0x138: Pop(0)
0x139: @@ SetPhoto2(Stack[-1])
0x13a: Pop(1)
0x13b: PushEmpty(int)
0x13c: Call2 0x7c9

0x13d: Pop(0)
0x13e: @@ SetPlayerName(Stack[-1])
0x13f: Pop(1)
0x140: Stack[-2] = (int) -1
0x141: @ IsOverrideActive(Stack[-3])
0x142: Pop(0)
0x143: Push(Stack[-3])
0x144: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x145: Stack[-10] = (int) -2
0x146: Return(); Pop(8)

0x147: @ DoDialog(Stack[-4])
0x148: Pop(0)
0x149: PushEmpty(object, object)
0x14a: Stack[-2] = Stack[-11]
0x14b: Stack[-1] = Stack[-6]
0x14c: Push(-2, 4); TaskCall(5)
0x14d: Call2 0x164

0x14e: Pop(-2, 4); TaskReturn
0x14f: Pop(2)
0x150: @@ IsDialogEnd(Stack[-1])
0x151: Pop(0)
0x152: Pop(0); Push((bool) Stack[-1] == 0)
0x153: IF (Stack[-1] == 0) GOTO 0x159; Pop(1)

0x154: @ sync()
0x155: Pop(0)
0x156: @@ IsDialogEnd(Stack[-1])
0x157: Pop(0)
0x158: GOTO 0x152

0x159: PushEmpty(object)
0x15a: Stack[-1] = Stack[-10]
0x15b: Call2 0x5ce

0x15c: Pop(1)
0x15d: @ StopDialog(Stack[-4])
0x15e: Pop(0)
0x15f: @@ GetReturnValue(Stack[-2])
0x160: Pop(0)
0x161: Stack[-10] = Stack[-2]
0x162: Return(); Pop(8)

0x163: Stack[-4] = 0
0x164: PushEmpty()
0x165: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x166: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x167: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x168: Push((int) 1)
0x169: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x16a: PushEmpty(bool)
0x16b: Stack[-1] = (bool) 0
0x16c: PushEmpty(bool, object)
0x16d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16e: Call2 0x720

0x16f: Pop(1)
0x170: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x171: PushEmpty(bool, object)
0x172: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x173: Call2 0x72c

0x174: Pop(1)
0x175: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x176: Stack[-1] = (bool) 1
0x177: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x178: PushEmpty(object, object)
0x179: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17b: Call2 0x6d1

0x17c: Pop(2)
0x17d: PushEmpty(string)
0x17e: Stack[-1] = "Neutral"
0x17f: Call2 0x1fa

0x180: Pop(1)
0x181: Push((int) 511917)
0x182: @@ SetMessage(Stack[-1])
0x183: Pop(1)
0x184: @@ ClearReplies()
0x185: Pop(0)
0x186: Push((int) 515734)
0x187: Push((int) 16793)
0x188: Push((int) 16792)
0x189: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18a: Pop(3)
0x18b: Push((int) 515732)
0x18c: Push((int) 16791)
0x18d: Push((int) 16790)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: GOTO 0x1dc

0x191: PushEmpty(string)
0x192: Stack[-1] = "Neutral"
0x193: Call2 0x1fa

0x194: Pop(1)
0x195: Push((int) 511935)
0x196: @@ SetMessage(Stack[-1])
0x197: Pop(1)
0x198: @@ ClearReplies()
0x199: Pop(0)
0x19a: PushEmpty(bool, object)
0x19b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Call2 0x720

0x19d: Pop(1)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x19f: Push((int) 512489)
0x1a0: Push((int) 13660)
0x1a1: Push((int) 13658)
0x1a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a3: Pop(3)
0x1a4: PushEmpty(bool)
0x1a5: Stack[-1] = (bool) 0
0x1a6: PushEmpty(bool)
0x1a7: Stack[-1] = (bool) 0
0x1a8: PushEmpty(bool, object)
0x1a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1aa: Call2 0x738

0x1ab: Pop(1)
0x1ac: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1ad: PushEmpty(bool, object)
0x1ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Call2 0x744

0x1b0: Pop(1)
0x1b1: Pop(1); Push((bool) Stack[-1] == 0)
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: Stack[-1] = (bool) 1
0x1b4: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b5: PushEmpty(bool, object)
0x1b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b7: Call2 0x75c

0x1b8: Pop(1)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1ba: Stack[-1] = (bool) 1
0x1bb: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1bc: Push((int) 511936)
0x1bd: Push((int) 13155)
0x1be: Push((int) 13153)
0x1bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c0: Pop(3)
0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 0
0x1c3: PushEmpty(bool, object)
0x1c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c5: Call2 0x744

0x1c6: Pop(1)
0x1c7: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ca: Call2 0x750

0x1cb: Pop(1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1cd: Stack[-1] = (bool) 1
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cf: Push((int) 511937)
0x1d0: Push((int) 13156)
0x1d1: Push((int) 13154)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Push((int) 512490)
0x1d5: Push((int) -1)
0x1d6: Push((int) 13659)
0x1d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d8: Pop(3)
0x1d9: GOTO 0x1dc

0x1da: Return(); Pop(0)

0x1db: GOTO 0x168

0x1dc: PushEmpty(bool)
0x1dd: Call2 0x7e2

0x1de: Pop(0)
0x1df: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e0: @ lshWaitForAnimEnd()
0x1e1: Pop(0)
0x1e2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1e3: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e4: GOTO 0x1ea

0x1e5: PushEmpty(string)
0x1e6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1e7: Call2 0x5df

0x1e8: Pop(1)
0x1e9: GOTO 0x1e0

0x1ea: GOTO 0x1f9

0x1eb: Push("all")
0x1ec: Push("idle")
0x1ed: @ PlayAnimation(Stack[-2], Stack[-1])
0x1ee: Pop(2)
0x1ef: @ WaitForAnimEnd()
0x1f0: Pop(0)
0x1f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x1f9

0x1f4: Push("all")
0x1f5: Push("idle")
0x1f6: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f7: Pop(2)
0x1f8: GOTO 0x1ef

0x1f9: Return(); Pop(0)

0x1fa: PushEmpty()
0x1fb: PushEmpty(bool)
0x1fc: Call2 0x7e2

0x1fd: Pop(0)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Return(); Pop(0)

0x201: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x202: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x203: Return(); Pop(0)

0x204: PushEmpty(string, bool)
0x205: Stack[-2] = Stack[-3]
0x206: Push("")
0x207: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-1] = (bool) 0
0x20a: GOTO 0x20c

0x20b: Stack[-1] = (bool) 1
0x20c: Call2 0x5ef

0x20d: Pop(2)
0x20e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x20f: Return(); Pop(0)

0x210: PushEmpty()
0x211: Push((int) 1)
0x212: IF (Stack[-1] == 0) GOTO 0x4c3; Pop(1)

0x213: PushEmpty()
0x214: Call2 0x5fe

0x215: Pop(0)
0x216: Push((int) 13144)
0x217: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x219: PushEmpty(object, object)
0x21a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21c: Call2 0x6ba

0x21d: Pop(2)
0x21e: PushEmpty(object, object)
0x21f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x220: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x221: Call2 0x6a1

0x222: Pop(2)
0x223: PushEmpty(object, object)
0x224: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x225: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x226: Call2 0x6ab

0x227: Pop(2)
0x228: Push((int) 16800)
0x229: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0x6b1

0x22f: Pop(2)
0x230: Push((int) 13151)
0x231: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: PushEmpty(object, object)
0x234: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x235: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x236: Call2 0x6b1

0x237: Pop(2)
0x238: Push((int) 16809)
0x239: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23b: PushEmpty(object, object)
0x23c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x23e: Call2 0x6b1

0x23f: Pop(2)
0x240: Push((int) 13661)
0x241: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x242: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x243: PushEmpty(object, object)
0x244: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x245: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x246: Call2 0x6ba

0x247: Pop(2)
0x248: PushEmpty(object, object)
0x249: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x24b: Call2 0x6a1

0x24c: Pop(2)
0x24d: PushEmpty(object, object)
0x24e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x250: Call2 0x6ab

0x251: Pop(2)
0x252: Push((int) 13170)
0x253: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x255: PushEmpty(object, object)
0x256: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x257: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x258: Call2 0x710

0x259: Pop(2)
0x25a: PushEmpty(object, object)
0x25b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x25c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x25d: Call2 0x716

0x25e: Pop(2)
0x25f: PushEmpty(object, object)
0x260: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x261: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x262: Call2 0x6ab

0x263: Pop(2)
0x264: Push((int) 13154)
0x265: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x266: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x267: PushEmpty(object, object)
0x268: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x269: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x26a: Call2 0x70a

0x26b: Pop(2)
0x26c: Push((int) 13172)
0x26d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x26e: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x26f: PushEmpty(object, object)
0x270: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x271: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x272: Call2 0x6d7

0x273: Pop(2)
0x274: Push((int) 16820)
0x275: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x277: PushEmpty(object, object)
0x278: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x279: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x27a: Call2 0x6d7

0x27b: Pop(2)
0x27c: Push((int) 13133)
0x27d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x27e: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x27f: PushEmpty(bool)
0x280: Stack[-1] = (bool) 0
0x281: PushEmpty(bool, object)
0x282: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x283: Call2 0x720

0x284: Pop(1)
0x285: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x286: PushEmpty(bool, object)
0x287: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x288: Call2 0x72c

0x289: Pop(1)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Stack[-1] = (bool) 1
0x28c: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x28d: PushEmpty(object, object)
0x28e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x28f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x290: Call2 0x6d1

0x291: Pop(2)
0x292: PushEmpty(string)
0x293: Stack[-1] = "Neutral"
0x294: Call2 0x1fa

0x295: Pop(1)
0x296: Push((int) 511917)
0x297: @@ SetMessage(Stack[-1])
0x298: Pop(1)
0x299: @@ ClearReplies()
0x29a: Pop(0)
0x29b: Push((int) 515734)
0x29c: Push((int) 16793)
0x29d: Push((int) 16792)
0x29e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29f: Pop(3)
0x2a0: Push((int) 515732)
0x2a1: Push((int) 16791)
0x2a2: Push((int) 16790)
0x2a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a4: Pop(3)
0x2a5: Return(); Pop(0)

0x2a6: PushEmpty(string)
0x2a7: Stack[-1] = "Neutral"
0x2a8: Call2 0x1fa

0x2a9: Pop(1)
0x2aa: Push((int) 511935)
0x2ab: @@ SetMessage(Stack[-1])
0x2ac: Pop(1)
0x2ad: @@ ClearReplies()
0x2ae: Pop(0)
0x2af: PushEmpty(bool, object)
0x2b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b1: Call2 0x720

0x2b2: Pop(1)
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: Push((int) 512489)
0x2b5: Push((int) 13660)
0x2b6: Push((int) 13658)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: PushEmpty(bool)
0x2ba: Stack[-1] = (bool) 0
0x2bb: PushEmpty(bool)
0x2bc: Stack[-1] = (bool) 0
0x2bd: PushEmpty(bool, object)
0x2be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bf: Call2 0x738

0x2c0: Pop(1)
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c2: PushEmpty(bool, object)
0x2c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c4: Call2 0x744

0x2c5: Pop(1)
0x2c6: Pop(1); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Stack[-1] = (bool) 1
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Call2 0x75c

0x2cd: Pop(1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Stack[-1] = (bool) 1
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d1: Push((int) 511936)
0x2d2: Push((int) 13155)
0x2d3: Push((int) 13153)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: PushEmpty(bool)
0x2d7: Stack[-1] = (bool) 0
0x2d8: PushEmpty(bool, object)
0x2d9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2da: Call2 0x744

0x2db: Pop(1)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2dd: PushEmpty(bool, object)
0x2de: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2df: Call2 0x750

0x2e0: Pop(1)
0x2e1: IF (Stack[-1] == 0) GOTO 0x2e3; Pop(1)

0x2e2: Stack[-1] = (bool) 1
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e9; Pop(1)

0x2e4: Push((int) 511937)
0x2e5: Push((int) 13156)
0x2e6: Push((int) 13154)
0x2e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e8: Pop(3)
0x2e9: Push((int) 512490)
0x2ea: Push((int) -1)
0x2eb: Push((int) 13659)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Return(); Pop(0)

0x2ef: Push((int) 13156)
0x2f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f1: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x2f2: PushEmpty(string)
0x2f3: Stack[-1] = "Neutral"
0x2f4: Call2 0x1fa

0x2f5: Pop(1)
0x2f6: Push((int) 511939)
0x2f7: @@ SetMessage(Stack[-1])
0x2f8: Pop(1)
0x2f9: @@ ClearReplies()
0x2fa: Pop(0)
0x2fb: Push((int) 511947)
0x2fc: Push((int) 13165)
0x2fd: Push((int) 13164)
0x2fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ff: Pop(3)
0x300: Return(); Pop(0)

0x301: Push((int) 13165)
0x302: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x303: IF (Stack[-1] == 0) GOTO 0x318; Pop(1)

0x304: PushEmpty(string)
0x305: Stack[-1] = "Neutral"
0x306: Call2 0x1fa

0x307: Pop(1)
0x308: Push((int) 511948)
0x309: @@ SetMessage(Stack[-1])
0x30a: Pop(1)
0x30b: @@ ClearReplies()
0x30c: Pop(0)
0x30d: Push((int) 511949)
0x30e: Push((int) 13167)
0x30f: Push((int) 13166)
0x310: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x311: Pop(3)
0x312: Push((int) 515752)
0x313: Push((int) 13167)
0x314: Push((int) 16816)
0x315: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x316: Pop(3)
0x317: Return(); Pop(0)

0x318: Push((int) 13167)
0x319: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x31b: PushEmpty(string)
0x31c: Stack[-1] = "Neutral"
0x31d: Call2 0x1fa

0x31e: Pop(1)
0x31f: Push((int) 511950)
0x320: @@ SetMessage(Stack[-1])
0x321: Pop(1)
0x322: @@ ClearReplies()
0x323: Pop(0)
0x324: Push((int) 511951)
0x325: Push((int) 13171)
0x326: Push((int) 13168)
0x327: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x328: Pop(3)
0x329: Return(); Pop(0)

0x32a: Push((int) 13171)
0x32b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x32d: PushEmpty(string)
0x32e: Stack[-1] = "Neutral"
0x32f: Call2 0x1fa

0x330: Pop(1)
0x331: Push((int) 511954)
0x332: @@ SetMessage(Stack[-1])
0x333: Pop(1)
0x334: @@ ClearReplies()
0x335: Pop(0)
0x336: Push((int) 511955)
0x337: Push((int) -1)
0x338: Push((int) 13172)
0x339: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33a: Pop(3)
0x33b: Push((int) 515754)
0x33c: Push((int) -1)
0x33d: Push((int) 16820)
0x33e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33f: Pop(3)
0x340: Return(); Pop(0)

0x341: Push((int) 13155)
0x342: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x344: PushEmpty(string)
0x345: Stack[-1] = "Neutral"
0x346: Call2 0x1fa

0x347: Pop(1)
0x348: Push((int) 511938)
0x349: @@ SetMessage(Stack[-1])
0x34a: Pop(1)
0x34b: @@ ClearReplies()
0x34c: Pop(0)
0x34d: Push((int) 511940)
0x34e: Push((int) 13158)
0x34f: Push((int) 13157)
0x350: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x351: Pop(3)
0x352: Push((int) 515753)
0x353: Push((int) 13160)
0x354: Push((int) 16818)
0x355: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x356: Pop(3)
0x357: Return(); Pop(0)

0x358: Push((int) 13158)
0x359: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x35a: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x35b: PushEmpty(string)
0x35c: Stack[-1] = "Neutral"
0x35d: Call2 0x1fa

0x35e: Pop(1)
0x35f: Push((int) 511941)
0x360: @@ SetMessage(Stack[-1])
0x361: Pop(1)
0x362: @@ ClearReplies()
0x363: Pop(0)
0x364: Push((int) 511942)
0x365: Push((int) 13160)
0x366: Push((int) 13159)
0x367: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x368: Pop(3)
0x369: Push((int) 515749)
0x36a: Push((int) 13160)
0x36b: Push((int) 16811)
0x36c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x36d: Pop(3)
0x36e: Return(); Pop(0)

0x36f: Push((int) 13160)
0x370: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x372: PushEmpty(string)
0x373: Stack[-1] = "Neutral"
0x374: Call2 0x1fa

0x375: Pop(1)
0x376: Push((int) 511943)
0x377: @@ SetMessage(Stack[-1])
0x378: Pop(1)
0x379: @@ ClearReplies()
0x37a: Pop(0)
0x37b: Push((int) 511944)
0x37c: Push((int) 13162)
0x37d: Push((int) 13161)
0x37e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37f: Pop(3)
0x380: Return(); Pop(0)

0x381: Push((int) 13162)
0x382: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x383: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x384: PushEmpty(string)
0x385: Stack[-1] = "Neutral"
0x386: Call2 0x1fa

0x387: Pop(1)
0x388: Push((int) 511945)
0x389: @@ SetMessage(Stack[-1])
0x38a: Pop(1)
0x38b: @@ ClearReplies()
0x38c: Pop(0)
0x38d: Push((int) 511946)
0x38e: Push((int) 13169)
0x38f: Push((int) 13163)
0x390: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x391: Pop(3)
0x392: Return(); Pop(0)

0x393: Push((int) 13169)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Neutral"
0x398: Call2 0x1fa

0x399: Pop(1)
0x39a: Push((int) 511952)
0x39b: @@ SetMessage(Stack[-1])
0x39c: Pop(1)
0x39d: @@ ClearReplies()
0x39e: Pop(0)
0x39f: Push((int) 511953)
0x3a0: Push((int) -1)
0x3a1: Push((int) 13170)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Return(); Pop(0)

0x3a5: Push((int) 13660)
0x3a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x3a8: PushEmpty(string)
0x3a9: Stack[-1] = "Neutral"
0x3aa: Call2 0x1fa

0x3ab: Pop(1)
0x3ac: Push((int) 512491)
0x3ad: @@ SetMessage(Stack[-1])
0x3ae: Pop(1)
0x3af: @@ ClearReplies()
0x3b0: Pop(0)
0x3b1: Push((int) 512492)
0x3b2: Push((int) -1)
0x3b3: Push((int) 13661)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: Push((int) 16791)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Neutral"
0x3bc: Call2 0x1fa

0x3bd: Pop(1)
0x3be: Push((int) 515733)
0x3bf: @@ SetMessage(Stack[-1])
0x3c0: Pop(1)
0x3c1: @@ ClearReplies()
0x3c2: Pop(0)
0x3c3: Push((int) 515737)
0x3c4: Push((int) 16793)
0x3c5: Push((int) 16795)
0x3c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: Return(); Pop(0)

0x3c9: Push((int) 16793)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3e0; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Neutral"
0x3ce: Call2 0x1fa

0x3cf: Pop(1)
0x3d0: Push((int) 515735)
0x3d1: @@ SetMessage(Stack[-1])
0x3d2: Pop(1)
0x3d3: @@ ClearReplies()
0x3d4: Pop(0)
0x3d5: Push((int) 511918)
0x3d6: Push((int) 13135)
0x3d7: Push((int) 13134)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: Push((int) 515736)
0x3db: Push((int) 16797)
0x3dc: Push((int) 16794)
0x3dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3de: Pop(3)
0x3df: Return(); Pop(0)

0x3e0: Push((int) 16797)
0x3e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e2: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3e3: PushEmpty(string)
0x3e4: Stack[-1] = "Neutral"
0x3e5: Call2 0x1fa

0x3e6: Pop(1)
0x3e7: Push((int) 515738)
0x3e8: @@ SetMessage(Stack[-1])
0x3e9: Pop(1)
0x3ea: @@ ClearReplies()
0x3eb: Pop(0)
0x3ec: Push((int) 515739)
0x3ed: Push((int) 13137)
0x3ee: Push((int) 16798)
0x3ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: Push((int) 13135)
0x3f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x3f5: PushEmpty(string)
0x3f6: Stack[-1] = "Neutral"
0x3f7: Call2 0x1fa

0x3f8: Pop(1)
0x3f9: Push((int) 511919)
0x3fa: @@ SetMessage(Stack[-1])
0x3fb: Pop(1)
0x3fc: @@ ClearReplies()
0x3fd: Pop(0)
0x3fe: Push((int) 511920)
0x3ff: Push((int) 13137)
0x400: Push((int) 13136)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Push((int) 515743)
0x404: Push((int) 16805)
0x405: Push((int) 16804)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: Return(); Pop(0)

0x409: Push((int) 16805)
0x40a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x40c: PushEmpty(string)
0x40d: Stack[-1] = "Neutral"
0x40e: Call2 0x1fa

0x40f: Pop(1)
0x410: Push((int) 515744)
0x411: @@ SetMessage(Stack[-1])
0x412: Pop(1)
0x413: @@ ClearReplies()
0x414: Pop(0)
0x415: Push((int) 515745)
0x416: Push((int) 16807)
0x417: Push((int) 16806)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 16807)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Neutral"
0x420: Call2 0x1fa

0x421: Pop(1)
0x422: Push((int) 515746)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 515747)
0x428: Push((int) 13137)
0x429: Push((int) 16808)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 515748)
0x42d: Push((int) -1)
0x42e: Push((int) 16809)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 13137)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x449; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral"
0x437: Call2 0x1fa

0x438: Pop(1)
0x439: Push((int) 511921)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 511924)
0x43f: Push((int) 13141)
0x440: Push((int) 13140)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Push((int) 511922)
0x444: Push((int) 13139)
0x445: Push((int) 13138)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Return(); Pop(0)

0x449: Push((int) 13139)
0x44a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44b: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x44c: PushEmpty(string)
0x44d: Stack[-1] = "Neutral"
0x44e: Call2 0x1fa

0x44f: Pop(1)
0x450: Push((int) 511923)
0x451: @@ SetMessage(Stack[-1])
0x452: Pop(1)
0x453: @@ ClearReplies()
0x454: Pop(0)
0x455: Push((int) 511929)
0x456: Push((int) 13141)
0x457: Push((int) 13145)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: Push((int) 13141)
0x45c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x45e: PushEmpty(string)
0x45f: Stack[-1] = "Neutral"
0x460: Call2 0x1fa

0x461: Pop(1)
0x462: Push((int) 511925)
0x463: @@ SetMessage(Stack[-1])
0x464: Pop(1)
0x465: @@ ClearReplies()
0x466: Pop(0)
0x467: Push((int) 511926)
0x468: Push((int) 13143)
0x469: Push((int) 13142)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Push((int) 511930)
0x46d: Push((int) 13148)
0x46e: Push((int) 13147)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Return(); Pop(0)

0x472: Push((int) 13148)
0x473: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x474: IF (Stack[-1] == 0) GOTO 0x489; Pop(1)

0x475: PushEmpty(string)
0x476: Stack[-1] = "Neutral"
0x477: Call2 0x1fa

0x478: Pop(1)
0x479: Push((int) 511931)
0x47a: @@ SetMessage(Stack[-1])
0x47b: Pop(1)
0x47c: @@ ClearReplies()
0x47d: Pop(0)
0x47e: Push((int) 511932)
0x47f: Push((int) 13150)
0x480: Push((int) 13149)
0x481: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x482: Pop(3)
0x483: Push((int) 515741)
0x484: Push((int) 13150)
0x485: Push((int) 16801)
0x486: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x487: Pop(3)
0x488: Return(); Pop(0)

0x489: Push((int) 13150)
0x48a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48b: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x48c: PushEmpty(string)
0x48d: Stack[-1] = "Neutral"
0x48e: Call2 0x1fa

0x48f: Pop(1)
0x490: Push((int) 511933)
0x491: @@ SetMessage(Stack[-1])
0x492: Pop(1)
0x493: @@ ClearReplies()
0x494: Pop(0)
0x495: Push((int) 511934)
0x496: Push((int) -1)
0x497: Push((int) 13151)
0x498: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x499: Pop(3)
0x49a: Push((int) 515742)
0x49b: Push((int) 13143)
0x49c: Push((int) 16803)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: Return(); Pop(0)

0x4a0: Push((int) 13143)
0x4a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a2: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4a3: PushEmpty(string)
0x4a4: Stack[-1] = "Neutral"
0x4a5: Call2 0x1fa

0x4a6: Pop(1)
0x4a7: Push((int) 511927)
0x4a8: @@ SetMessage(Stack[-1])
0x4a9: Pop(1)
0x4aa: @@ ClearReplies()
0x4ab: Pop(0)
0x4ac: Push((int) 511928)
0x4ad: Push((int) -1)
0x4ae: Push((int) 13144)
0x4af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b0: Pop(3)
0x4b1: Push((int) 515740)
0x4b2: Push((int) -1)
0x4b3: Push((int) 16800)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: Return(); Pop(0)

0x4b7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4b8: PushEmpty(bool)
0x4b9: Call2 0x7e2

0x4ba: Pop(0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4bc: @ lshStopAnimation()
0x4bd: Pop(0)
0x4be: GOTO 0x4c1

0x4bf: @ StopAnimation()
0x4c0: Pop(0)
0x4c1: Return(); Pop(0)

0x4c2: GOTO 0x211

0x4c3: Return(); Pop(0)

0x4c4: PushEmpty(object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector, object, bool, int, bool, cvector, cvector, cvector, float, cvector, bool, cvector)
0x4c5: Push((bool) 1)
0x4c6: @ SensePlayerOnly(Stack[-1])
0x4c7: Pop(1)
0x4c8: PushEmpty()
0x4c9: Call2 0x51c

0x4ca: Pop(0)
0x4cb: @ GetScene(Stack[-11])
0x4cc: Pop(0)
0x4cd: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x4ce: PushEmpty(string, int)
0x4cf: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4d0: Call2 0x674

0x4d1: Pop(1)
0x4d2: @@ GetLocator(Stack[-1], Stack[-11])
0x4d3: Pop(1)
0x4d4: Pop(0); Push((bool) Stack[-10] == 0)
0x4d5: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4d6: GOTO 0x4da

0x4d7: Push((int) 1)
0x4d8: Stack[2 + Tasks[-1].StackPointer] = Stack[2 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x4d9: GOTO 0x4ce

0x4da: PushEmpty(bool)
0x4db: Call2 0x585

0x4dc: Pop(0)
0x4dd: Pop(1); Push((bool) Stack[-1] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4df: PushEmpty()
0x4e0: Push(-0, 0); TaskCall(0)
0x4e1: Call2 0x0

0x4e2: Pop(-0, 0); TaskReturn
0x4e3: Pop(0)
0x4e4: PushEmpty()
0x4e5: Call2 0x524

0x4e6: Pop(0)
0x4e7: @ irand(Stack[-9], Stack[-2])
0x4e8: Pop(0)
0x4e9: PushEmpty(string, int)
0x4ea: Stack[-1] = Stack[-11]
0x4eb: Call2 0x674

0x4ec: Pop(1)
0x4ed: @@ GetLocator(Stack[-1], Stack[-9], Stack[-8], Stack[-7])
0x4ee: Pop(1)
0x4ef: PushEmpty(cvector)
0x4f0: Call2 0x553

0x4f1: Pop(0)
0x4f2: Stack[-6] = Stack[-8] - Stack[-1]; Pop(1);
0x4f3: PushEmpty(float, cvector)
0x4f4: Stack[-1] = Stack[-7]
0x4f5: Call2 0x61d

0x4f6: Pop(1)
0x4f7: Pop(1); Push((bool) Stack[-1] > Stack[1 + Tasks[-1].StackPointer])
0x4f8: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x4f9: @ GetHeight(Stack[-4])
0x4fa: Pop(0)
0x4fb: Stack[-3] = Stack[-7]
0x4fc: Push(CvectorIndex(Stack[-3], 1))
0x4fd: Stack[-1] = Stack[-1] + Stack[-5]; Pop(0);
0x4fe: CvectorIndex(Stack[-4], 1) = Stack[-1];
0x4ff: @ CanReachByPF(Stack[-2], Stack[-3])
0x500: Pop(0)
0x501: Push(Stack[-2])
0x502: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x503: Pop(0); Push(Stack[-5] | Stack[-5]);
0x504: Pop(1); Push(Sqrt(Stack[-1]))
0x505: Pop(1); Push(Stack[0 + StackPtr] / Stack[-1]);
0x506: Pop(1); Push(Stack[-6] * Stack[-1]);
0x507: Stack[-2] = Stack[-8] - Stack[-1]; Pop(1);
0x508: PushEmpty(bool, cvector, cvector)
0x509: Stack[-2] = Stack[-4]
0x50a: Stack[-1] = Stack[-9]
0x50b: Push(-3, 1); TaskCall(1)
0x50c: Call2 0xd

0x50d: Pop(-3, 1); TaskReturn
0x50e: Pop(2)
0x50f: IF (Stack[-1] == 0) GOTO 0x516; Pop(1)

0x510: PushEmpty(int)
0x511: Stack[-1] = Stack[-10]
0x512: Push(-1, 0); TaskCall(3)
0x513: Call2 0xc6

0x514: Pop(-1, 0); TaskReturn
0x515: Pop(1)
0x516: Push((int) 1)
0x517: @ Sleep(Stack[-1])
0x518: Pop(1)
0x519: GOTO 0x4e7

0x51a: Return(); Pop(22)

0x51b: Stack[-11] = 0
0x51c: PushEmpty(string, string)
0x51d: Push("loc")
0x51e: @ GetProperty(Stack[-1], Stack[-2])
0x51f: Pop(1)
0x520: Push(GlobalVars[0])
0x521: Stack[-1] = Stack[-2]
0x522: GlobalVars[0] = Stack[-1]; Pop(1)
0x523: Return(); Pop(2)

0x524: PushEmpty(cvector, cvector, cvector, cvector)
0x525: Push("all")
0x526: Push("walk_stopl")
0x527: @ GetAnimationOffset(Stack[-4], Stack[-2], Stack[-1])
0x528: Pop(2)
0x529: Push("all")
0x52a: Push("walk_stopr")
0x52b: @ GetAnimationOffset(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(2)
0x52d: Push(CvectorIndex(Stack[-2], 2))
0x52e: Push(CvectorIndex(Stack[-2], 2))
0x52f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x530: Push((float)2.0)
0x531: Stack[0 + Tasks[-1].StackPointer] = Stack[-2] / Stack[-1]; Pop(2);
0x532: PushEmpty(float, float)
0x533: Push(CvectorIndex(Stack[-4], 2))
0x534: Stack[-2] = Stack[-1] - Stack[0 + Tasks[-1].StackPointer]; Pop(1);
0x535: Call2 0x615

0x536: Pop(1)
0x537: Push((int) 40)
0x538: Stack[1 + Tasks[-1].StackPointer] = Stack[-2] + Stack[-1]; Pop(2);
0x539: Return(); Pop(4)

0x53a: PushEmpty()
0x53b: Call2 0x699

0x53c: Pop(0)
0x53d: PushEmpty()
0x53e: Push(-0, 0); TaskCall(0)
0x53f: Call2 0x0

0x540: Pop(-0, 0); TaskReturn
0x541: Pop(0)
0x542: Return(); Pop(0)

0x543: PushEmpty(bool, bool)
0x544: @ IsOverrideActive(Stack[-1])
0x545: Pop(0)
0x546: Pop(0); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x552; Pop(1)

0x548: EventDisable(0)
0x549: PushEmpty(bool, object)
0x54a: Stack[-1] = Stack[-5]
0x54b: Call2 0x571

0x54c: Pop(2)
0x54d: EventEnable(0)
0x54e: PushEmpty(object)
0x54f: Stack[-1] = Stack[-4]
0x550: Call2 0x7e4

0x551: Pop(1)
0x552: Return(); Pop(2)

0x553: PushEmpty(cvector, cvector)
0x554: @ GetPosition(Stack[-1])
0x555: Pop(0)
0x556: Stack[-3] = Stack[-1]
0x557: Return(); Pop(2)

0x558: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x559: @ GetPosition(Stack[-3])
0x55a: Pop(0)
0x55b: @@ GetPosition(Stack[-2])
0x55c: Pop(0)
0x55d: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x55e: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x55f: Return(); Pop(6)

0x560: PushEmpty(int, int)
0x561: @@ GetProperty(Stack[-4], Stack[-1])
0x562: Pop(0)
0x563: Pop(0); Push(Stack[-1] + Stack[-3]);
0x564: @@ SetProperty(Stack[-5], Stack[-1])
0x565: Pop(1)
0x566: Return(); Pop(2)

0x567: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x568: @ GetPosition(Stack[-3])
0x569: Pop(0)
0x56a: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x56b: Push(CvectorIndex(Stack[-2], 0))
0x56c: Push(CvectorIndex(Stack[-3], 2))
0x56d: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x56e: Pop(2)
0x56f: Stack[-8] = Stack[-1]
0x570: Return(); Pop(6)

0x571: PushEmpty(cvector, cvector)
0x572: @@ GetPosition(Stack[-1])
0x573: Pop(0)
0x574: PushEmpty(bool, cvector)
0x575: Stack[-1] = Stack[-3]
0x576: Call2 0x567

0x577: Stack[-6] = Stack[-2]
0x578: Pop(2)
0x579: Return(); Pop(2)

0x57a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x57b: @@ GetPosition(Stack[-3])
0x57c: Pop(0)
0x57d: @ GetPosition(Stack[-2])
0x57e: Pop(0)
0x57f: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x580: Push(CvectorIndex(Stack[-1], 0))
0x581: Push(CvectorIndex(Stack[-2], 2))
0x582: @ RotateAsync(Stack[-2], Stack[-1])
0x583: Pop(2)
0x584: Return(); Pop(6)

0x585: PushEmpty(bool, bool)
0x586: @ IsLoaded(Stack[-1])
0x587: Pop(0)
0x588: Stack[-3] = Stack[-1]
0x589: Return(); Pop(2)

0x58a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x58b: @@ GetPosition(Stack[-8])
0x58c: Pop(0)
0x58d: @@ GetEyesHeight(Stack[-9])
0x58e: Pop(0)
0x58f: Push(CvectorIndex(Stack[-8], 1))
0x590: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x591: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x592: @ GetPosition(Stack[-7])
0x593: Pop(0)
0x594: @ GetEyesHeight(Stack[-9])
0x595: Pop(0)
0x596: Push(CvectorIndex(Stack[-7], 1))
0x597: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x598: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x599: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x59a: Push(CvectorIndex(Stack[-6], 1))
0x59b: Stack[-1] = (int) 0
0x59c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x59d: Pop(0); Push(Stack[-6] | Stack[-6]);
0x59e: Pop(1); Push(Sqrt(Stack[-1]))
0x59f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x5a0: Stack[-5] = -Stack[-6]; Pop(0);
0x5a1: Pop(0); Push(Stack[-6] * Stack[-19]);
0x5a2: PushEmpty(cvector, cvector)
0x5a3: Push(CVector(0.0, 1.0, 0.0))
0x5a4: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x5a5: Call2 0x60b

0x5a6: Pop(1)
0x5a7: Push((int) 25)
0x5a8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5a9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5aa: Push(CVector(0.0, 10.0, 0.0))
0x5ab: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x5ac: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x5ad: @ IsOverrideActive(Stack[-2])
0x5ae: Pop(0)
0x5af: Push(Stack[-2])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5b1: Stack[-21] = (bool) 0
0x5b2: Return(); Pop(18)

0x5b3: @ StopWorld()
0x5b4: Pop(0)
0x5b5: @ CameraTransit(Stack[-3], Stack[-5])
0x5b6: Pop(0)
0x5b7: Push(CvectorIndex(Stack[-4], 0))
0x5b8: Push(CvectorIndex(Stack[-5], 2))
0x5b9: @ Rotate(Stack[-2], Stack[-1])
0x5ba: Pop(2)
0x5bb: PushEmpty(bool)
0x5bc: Call2 0x7e2

0x5bd: Pop(0)
0x5be: IF (Stack[-1] == 0) GOTO 0x5c0; Pop(1)

0x5bf: GOTO 0x5c8

0x5c0: Push("head")
0x5c1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5c2: Pop(1)
0x5c3: Push(Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c5: Push("head")
0x5c6: @ LookAsyncCamera(Stack[-1])
0x5c7: Pop(1)
0x5c8: @ CameraWaitForPlayFinish()
0x5c9: Pop(0)
0x5ca: @ ResumeWorld()
0x5cb: Pop(0)
0x5cc: Stack[-21] = (bool) 1
0x5cd: Return(); Pop(18)

0x5ce: PushEmpty(bool, bool)
0x5cf: @ CameraSwitchToNormal()
0x5d0: Pop(0)
0x5d1: PushEmpty(bool)
0x5d2: Call2 0x7e2

0x5d3: Pop(0)
0x5d4: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5d5: GOTO 0x5de

0x5d6: Push("head")
0x5d7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x5d8: Pop(1)
0x5d9: Push(Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5db: Push("head")
0x5dc: @ UnlookAsync(Stack[-1])
0x5dd: Pop(1)
0x5de: Return(); Pop(2)

0x5df: PushEmpty(bool, float, float, bool, float, float)
0x5e0: @ lshHasAnimation(Stack[-3], Stack[-7])
0x5e1: Pop(0)
0x5e2: Push(Stack[-3])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5ea; Pop(1)

0x5e4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x5e5: Pop(0)
0x5e6: Push((bool) 0)
0x5e7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5e8: Pop(1)
0x5e9: GOTO 0x5ee

0x5ea: Push("Can't find lsh animation : ")
0x5eb: Pop(1); Push(Stack[-1] + Stack[-8]);
0x5ec: @ Trace(Stack[-1])
0x5ed: Pop(1)
0x5ee: Return(); Pop(6)

0x5ef: PushEmpty(bool, float, float, bool, float, float)
0x5f0: @ lshHasAnimation(Stack[-3], Stack[-8])
0x5f1: Pop(0)
0x5f2: Push(Stack[-3])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x5f5: Pop(0)
0x5f6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x5f7: Pop(0)
0x5f8: GOTO 0x5fd

0x5f9: Push("Can't find lsh animation : ")
0x5fa: Pop(1); Push(Stack[-1] + Stack[-9]);
0x5fb: @ Trace(Stack[-1])
0x5fc: Pop(1)
0x5fd: Return(); Pop(6)

0x5fe: PushEmpty(bool)
0x5ff: Call2 0x7e2

0x600: Pop(0)
0x601: IF (Stack[-1] == 0) GOTO 0x604; Pop(1)

0x602: @ lshStopSpeech()
0x603: Pop(0)
0x604: Return(); Pop(0)

0x605: PushEmpty(object, object)
0x606: @ self(Stack[-1])
0x607: Pop(0)
0x608: Stack[-3] = Stack[-1]
0x609: Return(); Pop(2)

0x60a: Stack[-1] = 0
0x60b: PushEmpty(float, float)
0x60c: Pop(0); Push(Stack[-3] | Stack[-3]);
0x60d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x60e: Push((float)0.0)
0x60f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x610: IF (Stack[-1] == 0) GOTO 0x613; Pop(1)

0x611: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x612: Return(); Pop(2)

0x613: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x614: Return(); Pop(2)

0x615: PushEmpty()
0x616: Push((int) 0)
0x617: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x619: Stack[-2] = -Stack[-1]; Pop(0);
0x61a: GOTO 0x61c

0x61b: Stack[-2] = Stack[-1]
0x61c: Return(); Pop(0)

0x61d: PushEmpty()
0x61e: Push(CvectorIndex(Stack[-1], 0))
0x61f: Push(CvectorIndex(Stack[-2], 0))
0x620: Pop(2); Push(Stack[-2] * Stack[-1]);
0x621: Push(CvectorIndex(Stack[-2], 2))
0x622: Push(CvectorIndex(Stack[-3], 2))
0x623: Pop(2); Push(Stack[-2] * Stack[-1]);
0x624: Pop(2); Push(Stack[-2] + Stack[-1]);
0x625: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x626: Return(); Pop(0)

0x627: PushEmpty(int, int)
0x628: @ GetVariable(Stack[-3], Stack[-1])
0x629: Pop(0)
0x62a: Stack[-4] = Stack[-1]
0x62b: Return(); Pop(2)

0x62c: PushEmpty(object, object)
0x62d: @ CreateIntVector(Stack[-1])
0x62e: Pop(0)
0x62f: @@ add(Stack[-4])
0x630: Pop(0)
0x631: @@ add(Stack[-3])
0x632: Pop(0)
0x633: Push((int) 3)
0x634: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x635: Pop(1)
0x636: Return(); Pop(2)

0x637: Stack[-1] = 0
0x638: PushEmpty(int, int)
0x639: PushEmpty(object, string, int)
0x63a: Stack[-3] = Stack[-7]
0x63b: Stack[-2] = "money"
0x63c: Stack[-1] = Stack[-6]
0x63d: Call2 0x560

0x63e: Pop(3)
0x63f: Push((int) 0)
0x640: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x641: IF (Stack[-1] == 0) GOTO 0x64a; Pop(1)

0x642: Push("Money")
0x643: @ GetInvItemByName(Stack[-2], Stack[-1])
0x644: Pop(1)
0x645: PushEmpty(int, int)
0x646: Stack[-2] = Stack[-3]
0x647: Stack[-1] = Stack[-5]
0x648: Call2 0x62c

0x649: Pop(2)
0x64a: Return(); Pop(2)

0x64b: PushEmpty(object, object)
0x64c: @ FindActor(Stack[-1], Stack[-4])
0x64d: Pop(0)
0x64e: Pop(0); Push((bool) Stack[-1] == 0)
0x64f: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x650: Stack[-5] = (bool) 0
0x651: Return(); Pop(2)

0x652: @ Trigger(Stack[-1], Stack[-3])
0x653: Pop(0)
0x654: Stack[-5] = (bool) 1
0x655: Return(); Pop(2)

0x656: Stack[-1] = 0
0x657: PushEmpty(float, float)
0x658: @ GetGameTime(Stack[-1])
0x659: Pop(0)
0x65a: Stack[-3] = Stack[-1]
0x65b: Return(); Pop(2)

0x65c: PushEmpty(string, string)
0x65d: Stack[-1] = "idle"
0x65e: Push(Stack[-3])
0x65f: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x660: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x661: Stack[-4] = Stack[-1]
0x662: Return(); Pop(2)

0x663: PushEmpty(int, bool, int, bool)
0x664: Stack[-2] = (int) 0
0x665: Push("all")
0x666: PushEmpty(string, int)
0x667: Stack[-1] = Stack[-5]
0x668: Call2 0x65c

0x669: Pop(1)
0x66a: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x66b: Pop(2)
0x66c: Pop(0); Push((bool) Stack[-1] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x66f; Pop(1)

0x66e: GOTO 0x672

0x66f: Push((int) 1)
0x670: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x671: GOTO 0x665

0x672: Stack[-5] = Stack[-2]
0x673: Return(); Pop(4)

0x674: PushEmpty()
0x675: Push((int) 0)
0x676: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x678: Push("pt_")
0x679: Push(GlobalVars[0])
0x67a: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x67b: GOTO 0x680

0x67c: Push("pt_")
0x67d: Push(GlobalVars[0])
0x67e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x67f: Stack[-3] = Stack[-1] + Stack[-2]; Pop(1);
0x680: Return(); Pop(0)

0x681: PushEmpty(bool, bool)
0x682: Push("cleanup")
0x683: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x684: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x685: Push(GlobalVars[1])
0x686: Stack[-1] = (bool) 1
0x687: GlobalVars[1] = Stack[-1]; Pop(1)
0x688: @ IsLoaded(Stack[-1])
0x689: Pop(0)
0x68a: Pop(0); Push((bool) Stack[-1] == 0)
0x68b: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68c: PushEmpty(object)
0x68d: Call2 0x605

0x68e: Pop(0)
0x68f: @ RemoveActor(Stack[-1])
0x690: Pop(1)
0x691: GOTO 0x698

0x692: Push("restore")
0x693: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x698; Pop(1)

0x695: Push(GlobalVars[1])
0x696: Stack[-1] = (bool) 0
0x697: GlobalVars[1] = Stack[-1]; Pop(1)
0x698: Return(); Pop(2)

0x699: Push(GlobalVars[1])
0x69a: IF (Stack[-1] == 0) GOTO 0x6a0; Pop(1)

0x69b: PushEmpty(object)
0x69c: Call2 0x605

0x69d: Pop(0)
0x69e: @ RemoveActor(Stack[-1])
0x69f: Pop(1)
0x6a0: Return(); Pop(0)

0x6a1: PushEmpty()
0x6a2: Push("money10000 is given")
0x6a3: @ Trace(Stack[-1])
0x6a4: Pop(1)
0x6a5: PushEmpty(object, int)
0x6a6: Stack[-2] = Stack[-4]
0x6a7: Stack[-1] = (int) 10000
0x6a8: Call2 0x638

0x6a9: Pop(2)
0x6aa: Return(); Pop(0)

0x6ab: PushEmpty()
0x6ac: Push("playsound")
0x6ad: Push("givemoney")
0x6ae: @ TriggerWorld(Stack[-2], Stack[-1])
0x6af: Pop(2)
0x6b0: Return(); Pop(0)

0x6b1: PushEmpty()
0x6b2: Push("d5q02")
0x6b3: Push((int) -1)
0x6b4: @ SetVariable(Stack[-2], Stack[-1])
0x6b5: Pop(2)
0x6b6: PushEmpty()
0x6b7: Call2 0x768

0x6b8: Pop(0)
0x6b9: Return(); Pop(0)

0x6ba: PushEmpty(object, object)
0x6bb: Push("d5q02")
0x6bc: Push((int) 2)
0x6bd: @ SetVariable(Stack[-2], Stack[-1])
0x6be: Pop(2)
0x6bf: PushEmpty(object)
0x6c0: Call2 0x7b8

0x6c1: Stack[-2] = Stack[-1]
0x6c2: Pop(1)
0x6c3: Push("d5q02GorbunFindTheDaughter")
0x6c4: Push("pt_map_gorbun")
0x6c5: Push((int) 0)
0x6c6: Push((int) 515362)
0x6c7: PushEmpty(float)
0x6c8: Call2 0x657

0x6c9: Pop(0)
0x6ca: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(5)
0x6cc: PushEmpty()
0x6cd: Call2 0x775

0x6ce: Pop(0)
0x6cf: Return(); Pop(2)

0x6d0: Stack[-1] = 0
0x6d1: PushEmpty()
0x6d2: Push("ood5Gorbun1")
0x6d3: Push((int) 1)
0x6d4: @ SetVariable(Stack[-2], Stack[-1])
0x6d5: Pop(2)
0x6d6: Return(); Pop(0)

0x6d7: PushEmpty(object, object, object, object)
0x6d8: PushEmpty(object)
0x6d9: Call2 0x7b8

0x6da: Stack[-3] = Stack[-1]
0x6db: Pop(1)
0x6dc: Push("d5q02AnnaGotoGorbun")
0x6dd: @@ FindMark(Stack[-2], Stack[-1])
0x6de: Pop(1)
0x6df: Push(Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6e3; Pop(1)

0x6e1: @@ Remove()
0x6e2: Pop(0)
0x6e3: Push("d5q02AnnaGotoGorbunSelf")
0x6e4: @@ FindMark(Stack[-2], Stack[-1])
0x6e5: Pop(1)
0x6e6: Push(Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e8: @@ Remove()
0x6e9: Pop(0)
0x6ea: Push("d5q02AnnaGotoKabak")
0x6eb: @@ FindMark(Stack[-2], Stack[-1])
0x6ec: Pop(1)
0x6ed: Push(Stack[-1])
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f1; Pop(1)

0x6ef: @@ Remove()
0x6f0: Pop(0)
0x6f1: Push("d5q02GorbunFindTheDaughter")
0x6f2: @@ FindMark(Stack[-2], Stack[-1])
0x6f3: Pop(1)
0x6f4: Push(Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x6f8; Pop(1)

0x6f6: @@ Remove()
0x6f7: Pop(0)
0x6f8: Push("d5q02NudeMeeting")
0x6f9: @@ FindMark(Stack[-2], Stack[-1])
0x6fa: Pop(1)
0x6fb: Push(Stack[-1])
0x6fc: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fd: @@ Remove()
0x6fe: Pop(0)
0x6ff: PushEmpty()
0x700: Call2 0x782

0x701: Pop(0)
0x702: PushEmpty(bool, string, string)
0x703: Stack[-2] = "quest_d5_02"
0x704: Stack[-1] = "completed"
0x705: Call2 0x64b

0x706: Pop(3)
0x707: Return(); Pop(4)

0x708: Stack[-1] = 0
0x709: Stack[-2] = 0
0x70a: PushEmpty()
0x70b: Push("ood5Gorbun2")
0x70c: Push((int) 1)
0x70d: @ SetVariable(Stack[-2], Stack[-1])
0x70e: Pop(2)
0x70f: Return(); Pop(0)

0x710: PushEmpty()
0x711: Push("ood5Gorbun3")
0x712: Push((int) 1)
0x713: @ SetVariable(Stack[-2], Stack[-1])
0x714: Pop(2)
0x715: Return(); Pop(0)

0x716: PushEmpty()
0x717: Push("money 50000 is given")
0x718: @ Trace(Stack[-1])
0x719: Pop(1)
0x71a: PushEmpty(object, int)
0x71b: Stack[-2] = Stack[-4]
0x71c: Stack[-1] = (int) 50000
0x71d: Call2 0x638

0x71e: Pop(2)
0x71f: Return(); Pop(0)

0x720: PushEmpty()
0x721: PushEmpty(int, string)
0x722: Stack[-1] = "d5q02"
0x723: Call2 0x627

0x724: Pop(1)
0x725: Push((int) 1)
0x726: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72a; Pop(1)

0x728: Stack[-2] = (bool) 1
0x729: Return(); Pop(0)

0x72a: Stack[-2] = (bool) 0
0x72b: Return(); Pop(0)

0x72c: PushEmpty()
0x72d: PushEmpty(int, string)
0x72e: Stack[-1] = "ood5Gorbun1"
0x72f: Call2 0x627

0x730: Pop(1)
0x731: Push((int) 0)
0x732: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x733: IF (Stack[-1] == 0) GOTO 0x736; Pop(1)

0x734: Stack[-2] = (bool) 1
0x735: Return(); Pop(0)

0x736: Stack[-2] = (bool) 0
0x737: Return(); Pop(0)

0x738: PushEmpty()
0x739: PushEmpty(int, string)
0x73a: Stack[-1] = "d5q02"
0x73b: Call2 0x627

0x73c: Pop(1)
0x73d: Push((int) 4)
0x73e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x740: Stack[-2] = (bool) 1
0x741: Return(); Pop(0)

0x742: Stack[-2] = (bool) 0
0x743: Return(); Pop(0)

0x744: PushEmpty()
0x745: PushEmpty(int, string)
0x746: Stack[-1] = "d5q02KnowNudeIsDead"
0x747: Call2 0x627

0x748: Pop(1)
0x749: Push((int) 1)
0x74a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x74b: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x74c: Stack[-2] = (bool) 1
0x74d: Return(); Pop(0)

0x74e: Stack[-2] = (bool) 0
0x74f: Return(); Pop(0)

0x750: PushEmpty()
0x751: PushEmpty(int, string)
0x752: Stack[-1] = "ood5Gorbun2"
0x753: Call2 0x627

0x754: Pop(1)
0x755: Push((int) 0)
0x756: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x757: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x758: Stack[-2] = (bool) 1
0x759: Return(); Pop(0)

0x75a: Stack[-2] = (bool) 0
0x75b: Return(); Pop(0)

0x75c: PushEmpty()
0x75d: PushEmpty(int, string)
0x75e: Stack[-1] = "ood5Gorbun3"
0x75f: Call2 0x627

0x760: Pop(1)
0x761: Push((int) 0)
0x762: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: Stack[-2] = (bool) 1
0x765: Return(); Pop(0)

0x766: Stack[-2] = (bool) 0
0x767: Return(); Pop(0)

0x768: PushEmpty(object, object)
0x769: Push((int) 715)
0x76a: Push((int) 2)
0x76b: Push((int) 536323)
0x76c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x76d: Pop(3)
0x76e: PushEmpty(bool, object, int)
0x76f: Stack[-2] = Stack[-4]
0x770: Stack[-1] = (int) 148
0x771: Call2 0x79c

0x772: Pop(3)
0x773: Return(); Pop(2)

0x774: Stack[-1] = 0
0x775: PushEmpty(object, object)
0x776: Push((int) 150)
0x777: Push((int) 2)
0x778: Push((int) 515356)
0x779: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: PushEmpty(bool, object, int)
0x77c: Stack[-2] = Stack[-4]
0x77d: Stack[-1] = (int) 148
0x77e: Call2 0x79c

0x77f: Pop(3)
0x780: Return(); Pop(2)

0x781: Stack[-1] = 0
0x782: PushEmpty(object, object)
0x783: Push((int) 153)
0x784: Push((int) 2)
0x785: Push((int) 515359)
0x786: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x787: Pop(3)
0x788: PushEmpty(bool, object, int)
0x789: Stack[-2] = Stack[-4]
0x78a: Stack[-1] = (int) 148
0x78b: Call2 0x79c

0x78c: Pop(3)
0x78d: Return(); Pop(2)

0x78e: Stack[-1] = 0
0x78f: PushEmpty(object, object)
0x790: @ GetDiaryRoot(Stack[-1])
0x791: Pop(0)
0x792: Pop(0); Push((bool) Stack[-1] == 0)
0x793: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x794: Push("Can't retrieve diary root")
0x795: @ Trace(Stack[-1])
0x796: Pop(1)
0x797: Stack[-3] = (bool) 0
0x798: Return(); Pop(2)

0x799: Stack[-3] = Stack[-1]
0x79a: Return(); Pop(2)

0x79b: Stack[-1] = 0
0x79c: PushEmpty(object, object, int, object, object, int)
0x79d: PushEmpty(object)
0x79e: Call2 0x78f

0x79f: Stack[-4] = Stack[-1]
0x7a0: Pop(1)
0x7a1: @@ Find(Stack[-7], Stack[-2])
0x7a2: Pop(0)
0x7a3: Pop(0); Push((bool) Stack[-2] == 0)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7ab; Pop(1)

0x7a5: Push("Can't find diary parent with id: ")
0x7a6: Pop(1); Push(Stack[-1] + Stack[-8]);
0x7a7: @ Trace(Stack[-1])
0x7a8: Pop(1)
0x7a9: Stack[-9] = (bool) 0
0x7aa: Return(); Pop(6)

0x7ab: @@ AddChild(Stack[-8])
0x7ac: Pop(0)
0x7ad: Push((int) 7)
0x7ae: @ SendWorldWndMessage(Stack[-1])
0x7af: Pop(1)
0x7b0: @@ GetCategory(Stack[-1])
0x7b1: Pop(0)
0x7b2: @ SetDiarySection(Stack[-1])
0x7b3: Pop(0)
0x7b4: Stack[-9] = (bool) 0
0x7b5: Return(); Pop(6)

0x7b6: Stack[-2] = 0
0x7b7: Stack[-3] = 0
0x7b8: PushEmpty(object, object, object, object)
0x7b9: @ GetMainOutdoorScene(Stack[-2])
0x7ba: Pop(0)
0x7bb: Pop(0); Push((bool) Stack[-2] == 0)
0x7bc: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x7bd: Push("Can't find main outdoor scene")
0x7be: @ Trace(Stack[-1])
0x7bf: Pop(1)
0x7c0: Stack[-1] = 0
0x7c1: Stack[-5] = Stack[-1]
0x7c2: Return(); Pop(4)

0x7c3: @@ GetMap(Stack[-1])
0x7c4: Pop(0)
0x7c5: Stack[-5] = Stack[-1]
0x7c6: Return(); Pop(4)

0x7c7: Stack[-1] = 0
0x7c8: Stack[-2] = 0
0x7c9: PushEmpty(int, int)
0x7ca: Push("branch")
0x7cb: @ GetVariable(Stack[-1], Stack[-2])
0x7cc: Pop(1)
0x7cd: Push((int) 0)
0x7ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d3; Pop(1)

0x7d0: Stack[-3] = (int) 1
0x7d1: Return(); Pop(2)

0x7d2: GOTO 0x7d8

0x7d3: Push((int) 1)
0x7d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7d5: IF (Stack[-1] == 0) GOTO 0x7d8; Pop(1)

0x7d6: Stack[-3] = (int) 2
0x7d7: Return(); Pop(2)

0x7d8: Stack[-3] = (int) 3
0x7d9: Return(); Pop(2)

0x7da: Stack[-1] = (int) 515594
0x7db: Return(); Pop(0)

0x7dc: Stack[-1] = (int) 512583
0x7dd: Return(); Pop(0)

0x7de: Stack[-1] = "ui/NPC_Citizen3.png"
0x7df: Return(); Pop(0)

0x7e0: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x7e1: Return(); Pop(0)

0x7e2: Stack[-1] = (bool) 0
0x7e3: Return(); Pop(0)

0x7e4: PushEmpty()
0x7e5: PushEmpty(int, object)
0x7e6: Stack[-1] = Stack[-3]
0x7e7: Push(-2, 1); TaskCall(4)
0x7e8: Call2 0x11a

0x7e9: Pop(-2, 1); TaskReturn
0x7ea: Pop(2)
0x7eb: Return(); Pop(0)

