GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	quest_d3_03
	boy_free
	noaccess
	GetPosition
	Can't retreat, distance: 
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	GetProperty
	scripted
	blood.xml
	fhit
	bhit
	hit_react
	1
	2
	playing 
	start: 
	end: 
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	playsound
	giveitem
	d3q03
	disease
	SetProperty
	powder is given
	powder
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	player_diary
	GetCategory
	player
	Adding diary entry
	ui/NPC_None.png
	health
	boy_attacked

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
	Hold (0 args)
	SetProperty (2 args)
	rand (2 args)
	Sleep (1 args)
	GetPosition (1 args)
	GetCameraFarDistance (1 args)
	GetRandomPFPointInCircle (4 args)
	FindShiftedPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	GetScene (1 args)
	GetEyesHeight (1 args)
	AddActorByType (6 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	IsLoaded (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0x108
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x84 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x10c Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_17 Op = 0x127 Vars = (object)
		EVENT_10 Op = 0x16e Vars = (object)
		EVENT_28 Op = 0x172 Vars = ()
		EVENT_41 Op = 0x17c Vars = (object)
	GTASK_4  Params = 0
		EVENT_17 Op = 0x187 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x23d Vars = (int)
		EVENT_41 Op = 0x278 Vars = (object)
	GTASK_6  Params = 1
		EVENT_22 Op = 0x307 Vars = (object, int, float, float)
		EVENT_16 Op = 0x309 Vars = (object, string)
		EVENT_41 Op = 0x30b Vars = (object)

Events:
EVENT_22 Op = 0x4d0 Vars = (object, int, float, float)
EVENT_16 Op = 0x4d8 Vars = (object, string)
EVENT_41 Op = 0x4e5 Vars = (object)
EVENT_17 Op = 0x4fa Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x3ae

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x4c2

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x4c4

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x4a1

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x3e6

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x45: PushEmpty(string)
0x46: Stack[-1] = "Neutral"
0x47: Call 0x74

0x48: Pop(1)
0x49: Push((int) 10904)
0x4a: @@ SetMessage(Stack[-1])
0x4b: Pop(1)
0x4c: @@ ClearReplies()
0x4d: Pop(0)
0x4e: Push((int) 10905)
0x4f: Push((int) 12054)
0x50: Push((int) 12053)
0x51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(3)
0x53: GOTO 0x56

0x54: Return(); Pop(0)

0x55: GOTO 0x43

0x56: PushEmpty(bool)
0x57: Call 0x4c6

0x58: Pop(0)
0x59: IF (Stack[-1] == 0) GOTO 0x65; Pop(1)

0x5a: @ lshWaitForAnimEnd()
0x5b: Pop(0)
0x5c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d: IF (Stack[-1] == 0) GOTO 0x5f; Pop(1)

0x5e: GOTO 0x64

0x5f: PushEmpty(string)
0x60: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x61: Call 0x3ea

0x62: Pop(1)
0x63: GOTO 0x5a

0x64: GOTO 0x73

0x65: Push("all")
0x66: Push("idle")
0x67: @ PlayAnimation(Stack[-2], Stack[-1])
0x68: Pop(2)
0x69: @ WaitForAnimEnd()
0x6a: Pop(0)
0x6b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6c: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x6d: GOTO 0x73

0x6e: Push("all")
0x6f: Push("idle")
0x70: @ PlayAnimation(Stack[-2], Stack[-1])
0x71: Pop(2)
0x72: GOTO 0x69

0x73: Return(); Pop(0)

0x74: PushEmpty()
0x75: PushEmpty(bool)
0x76: Call 0x4c6

0x77: Pop(0)
0x78: Pop(1); Push((bool) Stack[-1] == 0)
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: Return(); Pop(0)

0x7b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: Return(); Pop(0)

0x7e: PushEmpty(string)
0x7f: Stack[-1] = Stack[-2]
0x80: Call 0x3ea

0x81: Pop(1)
0x82: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: Push((int) 1)
0x86: IF (Stack[-1] == 0) GOTO 0x107; Pop(1)

0x87: PushEmpty()
0x88: Call 0x3fc

0x89: Pop(0)
0x8a: Push((int) 12062)
0x8b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8c: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x8d: PushEmpty(object, object)
0x8e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x8f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x90: Call 0x459

0x91: Pop(2)
0x92: PushEmpty(object, object)
0x93: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x94: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x95: Call 0x46c

0x96: Pop(2)
0x97: PushEmpty(object, object)
0x98: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x99: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a: Call 0x453

0x9b: Pop(2)
0x9c: Push((int) 12052)
0x9d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0x9f: PushEmpty(string)
0xa0: Stack[-1] = "Neutral"
0xa1: Call 0x74

0xa2: Pop(1)
0xa3: Push((int) 10904)
0xa4: @@ SetMessage(Stack[-1])
0xa5: Pop(1)
0xa6: @@ ClearReplies()
0xa7: Pop(0)
0xa8: Push((int) 10905)
0xa9: Push((int) 12054)
0xaa: Push((int) 12053)
0xab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac: Pop(3)
0xad: Return(); Pop(0)

0xae: Push((int) 12054)
0xaf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb1: PushEmpty(string)
0xb2: Stack[-1] = "Neutral"
0xb3: Call 0x74

0xb4: Pop(1)
0xb5: Push((int) 10906)
0xb6: @@ SetMessage(Stack[-1])
0xb7: Pop(1)
0xb8: @@ ClearReplies()
0xb9: Pop(0)
0xba: Push((int) 10907)
0xbb: Push((int) 12056)
0xbc: Push((int) 12055)
0xbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe: Pop(3)
0xbf: Return(); Pop(0)

0xc0: Push((int) 12056)
0xc1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc3: PushEmpty(string)
0xc4: Stack[-1] = "Neutral"
0xc5: Call 0x74

0xc6: Pop(1)
0xc7: Push((int) 10908)
0xc8: @@ SetMessage(Stack[-1])
0xc9: Pop(1)
0xca: @@ ClearReplies()
0xcb: Pop(0)
0xcc: Push((int) 10909)
0xcd: Push((int) 12058)
0xce: Push((int) 12057)
0xcf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0: Pop(3)
0xd1: Return(); Pop(0)

0xd2: Push((int) 12058)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xd5: PushEmpty(string)
0xd6: Stack[-1] = "Neutral"
0xd7: Call 0x74

0xd8: Pop(1)
0xd9: Push((int) 10910)
0xda: @@ SetMessage(Stack[-1])
0xdb: Pop(1)
0xdc: @@ ClearReplies()
0xdd: Pop(0)
0xde: Push((int) 10911)
0xdf: Push((int) 12061)
0xe0: Push((int) 12059)
0xe1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe2: Pop(3)
0xe3: Push((int) 10912)
0xe4: Push((int) 12061)
0xe5: Push((int) 12060)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Return(); Pop(0)

0xe9: Push((int) 12061)
0xea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call 0x74

0xef: Pop(1)
0xf0: Push((int) 10913)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: Push((int) 10914)
0xf6: Push((int) -1)
0xf7: Push((int) 12062)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Return(); Pop(0)

0xfb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xfc: PushEmpty(bool)
0xfd: Call 0x4c6

0xfe: Pop(0)
0xff: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0x100: @ lshStopAnimation()
0x101: Pop(0)
0x102: GOTO 0x105

0x103: @ StopAnimation()
0x104: Pop(0)
0x105: Return(); Pop(0)

0x106: GOTO 0x85

0x107: Return(); Pop(0)

0x108: @ Hold()
0x109: Pop(0)
0x10a: GOTO 0x108

0x10b: Return(); Pop(0)

0x10c: PushEmpty()
0x10d: PushEmpty(int, object)
0x10e: Stack[-1] = Stack[-3]
0x10f: Push(-2, 1); TaskCall(0)
0x110: Call 0x0

0x111: Pop(-2, 1); TaskReturn
0x112: Pop(2)
0x113: PushEmpty()
0x114: Push(-0, 2); TaskCall(3)
0x115: Call 0x119

0x116: Pop(-0, 2); TaskReturn
0x117: Pop(0)
0x118: Return(); Pop(0)

0x119: PushEmpty(bool, string, string)
0x11a: Stack[-2] = "quest_d3_03"
0x11b: Stack[-1] = "boy_free"
0x11c: Call 0x42f

0x11d: Pop(3)
0x11e: Push("noaccess")
0x11f: Push((int) 0)
0x120: @ SetProperty(Stack[-2], Stack[-1])
0x121: Pop(2)
0x122: PushEmpty()
0x123: Call 0x135

0x124: Pop(0)
0x125: GOTO 0x122

0x126: Return(); Pop(0)

0x127: PushEmpty()
0x128: PushEmpty(bool, object)
0x129: Stack[-1] = Stack[-3]
0x12a: Call 0x4eb

0x12b: Pop(1)
0x12c: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12d: PushEmpty()
0x12e: Call 0x175

0x12f: Pop(0)
0x130: PushEmpty(object)
0x131: Stack[-1] = Stack[-2]
0x132: Call 0x4f2

0x133: Pop(1)
0x134: Return(); Pop(0)

0x135: PushEmpty(float, cvector, cvector, float, bool, object, bool, float, cvector, cvector, float, bool, object, bool)
0x136: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x137: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x138: Push((float)0.5)
0x139: @ rand(Stack[-8], Stack[-1])
0x13a: Pop(1)
0x13b: @ Sleep(Stack[-7])
0x13c: Pop(0)
0x13d: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x13e: IF (Stack[-1] == 0) GOTO 0x16d; Pop(1)

0x13f: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x140: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x141: @ GetPosition(Stack[-5])
0x142: Pop(0)
0x143: @ GetCameraFarDistance(Stack[-4])
0x144: Pop(0)
0x145: Push((float)2.5)
0x146: Stack[-5] = Stack[-5] * Stack[-1]; Pop(1);
0x147: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-4], Stack[-3])
0x148: Pop(0)
0x149: Push(Stack[-3])
0x14a: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x14b: GOTO 0x150

0x14c: Push((int) 1)
0x14d: @ Sleep(Stack[-1])
0x14e: Pop(1)
0x14f: GOTO 0x141

0x150: GOTO 0x152

0x151: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x152: @ FindShiftedPathTo(Stack[-2], Stack[-6])
0x153: Pop(0)
0x154: Pop(0); Push(( Stack[-2] != 0 )
0x155: IF (Stack[-1] == 0) GOTO 0x168; Pop(1)

0x156: @ RotatePath(Stack[-2], Stack[-1])
0x157: Pop(0)
0x158: Push(Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15a: PushEmpty(bool)
0x15b: Call 0x185

0x15c: Pop(0)
0x15d: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x15e: Pop(1)
0x15f: Stack[-2] = 0
0x160: Push(Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x162: PushEmpty()
0x163: Push(-0, 0); TaskCall(4)
0x164: Call 0x195

0x165: Pop(-0, 0); TaskReturn
0x166: Pop(0)
0x167: GOTO 0x16b

0x168: Push((int) 1)
0x169: @ Sleep(Stack[-1])
0x16a: Pop(1)
0x16b: Stack[-2] = 0
0x16c: GOTO 0x13d

0x16d: Return(); Pop(14)

0x16e: PushEmpty()
0x16f: @ RequestClearPath(Stack[-1])
0x170: Pop(0)
0x171: Return(); Pop(0)

0x172: @ Stop()
0x173: Pop(0)
0x174: Return(); Pop(0)

0x175: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x176: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x177: @ Stop()
0x178: Pop(0)
0x179: @ StopGroup0()
0x17a: Pop(0)
0x17b: Return(); Pop(0)

0x17c: PushEmpty()
0x17d: PushEmpty()
0x17e: Call 0x175

0x17f: Pop(0)
0x180: PushEmpty(object)
0x181: Stack[-1] = Stack[-2]
0x182: Call 0x4e5

0x183: Pop(1)
0x184: Return(); Pop(0)

0x185: Stack[-1] = (bool) 0
0x186: Return(); Pop(0)

0x187: PushEmpty()
0x188: PushEmpty(bool, object)
0x189: Stack[-1] = Stack[-3]
0x18a: Call 0x4eb

0x18b: Pop(1)
0x18c: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18d: PushEmpty()
0x18e: Call 0x1da

0x18f: Pop(0)
0x190: PushEmpty(object)
0x191: Stack[-1] = Stack[-2]
0x192: Call 0x4f2

0x193: Pop(1)
0x194: Return(); Pop(0)

0x195: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x196: @ WaitForAnimEnd()
0x197: Pop(0)
0x198: PushEmpty(bool)
0x199: Call 0x3a9

0x19a: Pop(0)
0x19b: Pop(1); Push((bool) Stack[-1] == 0)
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Return(); Pop(14)

0x19e: PushEmpty(int)
0x19f: Call 0x442

0x1a0: Stack[-8] = Stack[-1]
0x1a1: Pop(1)
0x1a2: Stack[-6] = (int) 0
0x1a3: PushEmpty(bool)
0x1a4: Stack[-1] = (bool) 0
0x1a5: Push((int) 5)
0x1a6: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x1a7: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1a8: PushEmpty(bool)
0x1a9: Call 0x3a9

0x1aa: Pop(0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1ad; Pop(1)

0x1ac: Stack[-1] = (bool) 1
0x1ad: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1ae: Push((int) 3)
0x1af: @ irand(Stack[-6], Stack[-1])
0x1b0: Pop(1)
0x1b1: Push((int) 0)
0x1b2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x1b4: Push(Stack[-7])
0x1b5: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1b6: @ irand(Stack[-4], Stack[-7])
0x1b7: Pop(0)
0x1b8: Push("all")
0x1b9: PushEmpty(string, int)
0x1ba: Stack[-1] = Stack[-7]
0x1bb: Call 0x43b

0x1bc: Pop(1)
0x1bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x1be: Pop(2)
0x1bf: @ WaitForAnimEnd(Stack[-3])
0x1c0: Pop(0)
0x1c1: Pop(0); Push((bool) Stack[-3] == 0)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: GOTO 0x1d9

0x1c4: GOTO 0x1d6

0x1c5: Push((int) 1)
0x1c6: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1c7: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1c8: Push((int) 4)
0x1c9: @ rand(Stack[-3], Stack[-1])
0x1ca: Pop(1)
0x1cb: Push((int) 1)
0x1cc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cd: @ Sleep(Stack[-1], Stack[-2])
0x1ce: Pop(1)
0x1cf: Pop(0); Push((bool) Stack[-1] == 0)
0x1d0: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1d1: GOTO 0x1d9

0x1d2: GOTO 0x1d6

0x1d3: Push(Stack[-6])
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: GOTO 0x1d9

0x1d6: Push((int) 1)
0x1d7: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1d8: GOTO 0x1a3

0x1d9: Return(); Pop(14)

0x1da: @ StopAnimation()
0x1db: Pop(0)
0x1dc: @ StopGroup0()
0x1dd: Pop(0)
0x1de: Return(); Pop(0)

0x1df: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x1e0: @ GetPosition(Stack[-6])
0x1e1: Pop(0)
0x1e2: @@ GetPosition(Stack[-5])
0x1e3: Pop(0)
0x1e4: @ GetDirection(Stack[-4])
0x1e5: Pop(0)
0x1e6: PushEmpty(cvector, cvector)
0x1e7: PushEmpty(cvector, cvector)
0x1e8: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x1e9: Call 0x403

0x1ea: Pop(1)
0x1eb: Push((float)0.75)
0x1ec: Pop(1); Push(Stack[-8] * Stack[-1]);
0x1ed: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1ee: Call 0x403

0x1ef: Stack[-5] = Stack[-2]
0x1f0: Pop(2)
0x1f1: Push((int) 32)
0x1f2: Push((float)7000.0)
0x1f3: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x1f4: Pop(2)
0x1f5: Push((int) 100)
0x1f6: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x1f7: Push((int) 0)
0x1f8: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Stack[-1] = (int) 0
0x1fb: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x1fc: Return(); Pop(12)

0x1fd: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x1fe: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x1ff: PushEmpty(cvector, float)
0x200: Stack[-1] = (float) 1.74533
0x201: Call 0x1df

0x202: Stack[-7] = Stack[-2]
0x203: Pop(2)
0x204: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x205: Push((float)10000.0)
0x206: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x208: Push("Can't retreat, distance: ")
0x209: Pop(0); Push(Sqrt(Stack[-5]))
0x20a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x20b: @ Trace(Stack[-1])
0x20c: Pop(1)
0x20d: Push((float)0.5)
0x20e: @ Sleep(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(10)

0x211: Push(CvectorIndex(Stack[-5], 0))
0x212: Push(CvectorIndex(Stack[-6], 2))
0x213: @ Rotate(Stack[-2], Stack[-1])
0x214: Pop(2)
0x215: PushEmpty(cvector)
0x216: Call 0x30d

0x217: Pop(0)
0x218: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x219: Push((int) 120)
0x21a: Push((float)0.5)
0x21b: @ SetTimer(Stack[-2], Stack[-1])
0x21c: Pop(2)
0x21d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x21e: Push((int) 1)
0x21f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x220: Pop(1)
0x221: Push(Stack[-3])
0x222: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x223: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x224: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x225: GOTO 0x23c

0x226: GOTO 0x23a

0x227: PushEmpty(cvector, float)
0x228: Stack[-1] = (float) 2.61799
0x229: Call 0x1df

0x22a: Stack[-4] = Stack[-2]
0x22b: Pop(2)
0x22c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x22d: Push((float)10000.0)
0x22e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x239; Pop(1)

0x230: PushEmpty(cvector)
0x231: Call 0x30d

0x232: Pop(0)
0x233: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x234: Push((int) 120)
0x235: Push((float)0.5)
0x236: @ SetTimer(Stack[-2], Stack[-1])
0x237: Pop(2)
0x238: GOTO 0x23a

0x239: GOTO 0x23c

0x23a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x23b: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x23c: Return(); Pop(10)

0x23d: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x23e: Push((int) 120)
0x23f: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Return(); Pop(8)

0x242: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x243: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x244: @ Stop()
0x245: Pop(0)
0x246: Push((int) 1)
0x247: @ KillTimer(Stack[-1])
0x248: Pop(1)
0x249: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x24a: GOTO 0x270

0x24b: @ GetDirection(Stack[-4])
0x24c: Pop(0)
0x24d: Push((float)7000.0)
0x24e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x24f: Pop(1)
0x250: PushEmpty(cvector, float)
0x251: Stack[-1] = (float) 1.74533
0x252: Call 0x1df

0x253: Stack[-4] = Stack[-2]
0x254: Pop(2)
0x255: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x256: PushEmpty(bool)
0x257: Stack[-1] = (bool) 0
0x258: Push((float)10000.0)
0x259: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x25a: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x25b: PushEmpty(bool)
0x25c: Stack[-1] = (bool) 1
0x25d: Pop(0); Push(Stack[-5] * Stack[-5]);
0x25e: Push((float)2.25)
0x25f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x260: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x261: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x262: PushEmpty(bool)
0x263: Call 0x281

0x264: Pop(0)
0x265: IF (Stack[-1] == 0) GOTO 0x267; Pop(1)

0x266: Stack[-1] = (bool) 0
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: Stack[-1] = (bool) 1
0x269: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26a: @ Stop()
0x26b: Pop(0)
0x26c: PushEmpty(cvector)
0x26d: Call 0x30d

0x26e: Pop(0)
0x26f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x270: Return(); Pop(8)

0x271: @ Stop()
0x272: Pop(0)
0x273: Push((int) 120)
0x274: @ KillTimer(Stack[-1])
0x275: Pop(1)
0x276: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x277: Return(); Pop(0)

0x278: PushEmpty()
0x279: PushEmpty()
0x27a: Call 0x271

0x27b: Pop(0)
0x27c: PushEmpty(object)
0x27d: Stack[-1] = Stack[-2]
0x27e: Call 0x4e5

0x27f: Pop(1)
0x280: Return(); Pop(0)

0x281: PushEmpty(cvector, cvector, cvector, cvector)
0x282: @ GetDirection(Stack[-2])
0x283: Pop(0)
0x284: PushEmpty(cvector, object)
0x285: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x286: Call 0x312

0x287: Stack[-3] = Stack[-2]
0x288: Pop(2)
0x289: PushEmpty(float, cvector, cvector)
0x28a: Stack[-2] = Stack[-5]
0x28b: Stack[-1] = Stack[-4]
0x28c: Call 0x40d

0x28d: Pop(2)
0x28e: Push((float)-0.34202)
0x28f: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x290: Return(); Pop(4)

0x291: PushEmpty()
0x292: PushEmpty(object)
0x293: Stack[-1] = Stack[-2]
0x294: Call 0x29a

0x295: Pop(1)
0x296: @ Hold()
0x297: Pop(0)
0x298: GOTO 0x296

0x299: Return(); Pop(0)

0x29a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x29b: Pop(0); Push((bool) Stack[-21] == 0)
0x29c: IF (Stack[-1] == 0) GOTO 0x2a2; Pop(1)

0x29d: PushEmpty(string)
0x29e: Stack[-1] = "fdie"
0x29f: Call 0x2f1

0x2a0: Pop(1)
0x2a1: GOTO 0x2f0

0x2a2: @@ GetPosition(Stack[-10])
0x2a3: Pop(0)
0x2a4: @ GetPosition(Stack[-9])
0x2a5: Pop(0)
0x2a6: @ GetDirection(Stack[-8])
0x2a7: Pop(0)
0x2a8: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x2a9: Push(CvectorIndex(Stack[-7], 0))
0x2aa: Push(CvectorIndex(Stack[-9], 0))
0x2ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2ac: Push(CvectorIndex(Stack[-8], 2))
0x2ad: Push(CvectorIndex(Stack[-10], 2))
0x2ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b0: Push((int) 0)
0x2b1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b3: Stack[-6] = "fdie"
0x2b4: GOTO 0x2b6

0x2b5: Stack[-6] = "bdie"
0x2b6: @ RemoveRTEnvelope()
0x2b7: Pop(0)
0x2b8: @ SetDeathState()
0x2b9: Pop(0)
0x2ba: @ Stop()
0x2bb: Pop(0)
0x2bc: @ StopAsync()
0x2bd: Pop(0)
0x2be: Stack[-5] = Stack[-21]
0x2bf: Push("GetScriptProperty")
0x2c0: Push((int) 2)
0x2c1: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x2c2: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c3: Push("Owner")
0x2c4: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x2c5: Pop(1)
0x2c6: Push(Stack[-4])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c8: Push("Owner")
0x2c9: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x2ca: Pop(1)
0x2cb: Pop(0); Push((bool) Stack[-5] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-5] = Stack[-21]
0x2ce: Push("@GetEyesHeight")
0x2cf: Push((int) 1)
0x2d0: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x2d1: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d2: @@ GetEyesHeight(Stack[-2])
0x2d3: Pop(0)
0x2d4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2d5: Push(CvectorIndex(Stack[-1], 1))
0x2d6: Stack[-1] = Stack[-3]
0x2d7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2d8: Push("head")
0x2d9: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x2da: Pop(1)
0x2db: Stack[-3] = (bool) 1
0x2dc: GOTO 0x2de

0x2dd: Stack[-3] = (bool) 0
0x2de: Push("all")
0x2df: @ PlayAnimation(Stack[-1], Stack[-7])
0x2e0: Pop(1)
0x2e1: @ WaitForAnimEnd()
0x2e2: Pop(0)
0x2e3: Push(Stack[-3])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2ea; Pop(1)

0x2e5: @ StopAsync()
0x2e6: Pop(0)
0x2e7: Push("head")
0x2e8: @ UnlookAsync(Stack[-1])
0x2e9: Pop(1)
0x2ea: Push("all")
0x2eb: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x2ec: Pop(1)
0x2ed: @ RemoveEnvelope()
0x2ee: Pop(0)
0x2ef: Stack[-5] = 0
0x2f0: Return(); Pop(20)

0x2f1: PushEmpty()
0x2f2: @ RemoveRTEnvelope()
0x2f3: Pop(0)
0x2f4: @ SetDeathState()
0x2f5: Pop(0)
0x2f6: @ Stop()
0x2f7: Pop(0)
0x2f8: @ StopAsync()
0x2f9: Pop(0)
0x2fa: @ StopSecondaryAnimation()
0x2fb: Pop(0)
0x2fc: Push("all")
0x2fd: @ PlayAnimation(Stack[-1], Stack[-2])
0x2fe: Pop(1)
0x2ff: @ WaitForAnimEnd()
0x300: Pop(0)
0x301: Push("all")
0x302: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x303: Pop(1)
0x304: @ RemoveEnvelope()
0x305: Pop(0)
0x306: Return(); Pop(0)

0x307: PushEmpty()
0x308: Return(); Pop(0)

0x309: PushEmpty()
0x30a: Return(); Pop(0)

0x30b: PushEmpty()
0x30c: Return(); Pop(0)

0x30d: PushEmpty(cvector, cvector)
0x30e: @ GetPosition(Stack[-1])
0x30f: Pop(0)
0x310: Stack[-3] = Stack[-1]
0x311: Return(); Pop(2)

0x312: PushEmpty(cvector, cvector, cvector, cvector)
0x313: @ GetPosition(Stack[-2])
0x314: Pop(0)
0x315: @@ GetPosition(Stack[-1])
0x316: Pop(0)
0x317: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x318: Return(); Pop(4)

0x319: PushEmpty(bool, bool)
0x31a: Push("HasProperty")
0x31b: Push((int) 2)
0x31c: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x31d: Pop(1); Push((bool) Stack[-1] == 0)
0x31e: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x31f: Stack[-5] = (bool) 0
0x320: Return(); Pop(2)

0x321: @@ HasProperty(Stack[-3], Stack[-1])
0x322: Pop(0)
0x323: Stack[-5] = Stack[-1]
0x324: Return(); Pop(2)

0x325: PushEmpty(bool, bool)
0x326: @@ IsDead(Stack[-1])
0x327: Pop(0)
0x328: Stack[-4] = Stack[-1]
0x329: Return(); Pop(2)

0x32a: PushEmpty(object, object, object, object)
0x32b: Pop(0); Push((bool) Stack[-5] == 0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: Stack[-6] = (bool) 0
0x32e: Return(); Pop(4)

0x32f: PushEmpty(bool)
0x330: Stack[-1] = (bool) 0
0x331: Push("IsDead")
0x332: Push((int) 1)
0x333: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x334: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x335: PushEmpty(bool, object)
0x336: Stack[-1] = Stack[-8]
0x337: Call 0x325

0x338: Pop(1)
0x339: IF (Stack[-1] == 0) GOTO 0x33b; Pop(1)

0x33a: Stack[-1] = (bool) 1
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-6] = (bool) 0
0x33d: Return(); Pop(4)

0x33e: @ GetScene(Stack[-2])
0x33f: Pop(0)
0x340: Pop(0); Push((bool) Stack[-2] == 0)
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: Stack[-6] = (bool) 0
0x343: Return(); Pop(4)

0x344: @@ GetScene(Stack[-1])
0x345: Pop(0)
0x346: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x348: Stack[-6] = (bool) 0
0x349: Return(); Pop(4)

0x34a: Stack[-6] = (bool) 1
0x34b: Return(); Pop(4)

0x34c: Stack[-1] = 0
0x34d: Stack[-2] = 0
0x34e: PushEmpty(int, int)
0x34f: PushEmpty(bool, object)
0x350: Stack[-1] = Stack[-5]
0x351: Call 0x32a

0x352: Pop(1)
0x353: Pop(1); Push((bool) Stack[-1] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x355: Stack[-4] = (bool) 0
0x356: Return(); Pop(2)

0x357: PushEmpty(bool, object, string)
0x358: Stack[-2] = Stack[-6]
0x359: Stack[-1] = "noaccess"
0x35a: Call 0x319

0x35b: Pop(2)
0x35c: Pop(1); Push((bool) Stack[-1] == 0)
0x35d: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35e: Stack[-4] = (bool) 1
0x35f: Return(); Pop(2)

0x360: Push("noaccess")
0x361: @@ GetProperty(Stack[-1], Stack[-2])
0x362: Pop(1)
0x363: Push((int) 0)
0x364: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x365: Return(); Pop(2)

0x366: PushEmpty(object, object, cvector, float, int, cvector, cvector, cvector, cvector, string, object, object, cvector, float, int, cvector, cvector, cvector, cvector, string)
0x367: PushEmpty(bool)
0x368: Stack[-1] = (bool) 0
0x369: Push((int) 4)
0x36a: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36c: Push((int) 5)
0x36d: Pop(1); Push((bool) Stack[-24] != Stack[-1])
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 1
0x370: IF (Stack[-1] == 0) GOTO 0x383; Pop(1)

0x371: @ GetScene(Stack[-10])
0x372: Pop(0)
0x373: @ GetPosition(Stack[-8])
0x374: Pop(0)
0x375: @ GetEyesHeight(Stack[-7])
0x376: Pop(0)
0x377: Push(CvectorIndex(Stack[-8], 1))
0x378: Push((int) 2)
0x379: Pop(1); Push(Stack[-9] / Stack[-1]);
0x37a: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x37b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x37c: Push("scripted")
0x37d: Push(CVector(0.0, 0.0, 1.0))
0x37e: Push("blood.xml")
0x37f: @ AddActorByType(Stack[-12], Stack[-3], Stack[-13], Stack[-11], Stack[-2], Stack[-1])
0x380: Pop(3)
0x381: Stack[-9] = 0
0x382: Stack[-10] = 0
0x383: Pop(0); Push((bool) Stack[-23] == 0)
0x384: IF (Stack[-1] == 0) GOTO 0x386; Pop(1)

0x385: Return(); Pop(20)

0x386: @ GetSecondaryAnimationType(Stack[-6])
0x387: Pop(0)
0x388: Push((int) 0)
0x389: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x38a: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38b: Return(); Pop(20)

0x38c: @@ GetPosition(Stack[-5])
0x38d: Pop(0)
0x38e: @ GetPosition(Stack[-4])
0x38f: Pop(0)
0x390: @ GetDirection(Stack[-3])
0x391: Pop(0)
0x392: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x393: Push(CvectorIndex(Stack[-2], 0))
0x394: Push(CvectorIndex(Stack[-4], 0))
0x395: Pop(2); Push(Stack[-2] * Stack[-1]);
0x396: Push(CvectorIndex(Stack[-3], 2))
0x397: Push(CvectorIndex(Stack[-5], 2))
0x398: Pop(2); Push(Stack[-2] * Stack[-1]);
0x399: Pop(2); Push(Stack[-2] + Stack[-1]);
0x39a: Push((int) 0)
0x39b: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x39c: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39d: Stack[-1] = "fhit"
0x39e: GOTO 0x3a0

0x39f: Stack[-1] = "bhit"
0x3a0: Push("hit_react")
0x3a1: Push("1")
0x3a2: Pop(1); Push(Stack[-3] + Stack[-1]);
0x3a3: Push("2")
0x3a4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x3a5: Push((int) -10)
0x3a6: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x3a7: Pop(4)
0x3a8: Return(); Pop(20)

0x3a9: PushEmpty(bool, bool)
0x3aa: @ IsLoaded(Stack[-1])
0x3ab: Pop(0)
0x3ac: Stack[-3] = Stack[-1]
0x3ad: Return(); Pop(2)

0x3ae: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x3af: @@ GetPosition(Stack[-7])
0x3b0: Pop(0)
0x3b1: @@ GetEyesHeight(Stack[-8])
0x3b2: Pop(0)
0x3b3: Push(CvectorIndex(Stack[-7], 1))
0x3b4: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x3b5: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3b6: @ GetPosition(Stack[-6])
0x3b7: Pop(0)
0x3b8: @ GetEyesHeight(Stack[-8])
0x3b9: Pop(0)
0x3ba: Push(CvectorIndex(Stack[-6], 1))
0x3bb: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x3bc: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3bd: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x3be: Push(CvectorIndex(Stack[-5], 1))
0x3bf: Stack[-1] = (int) 0
0x3c0: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x3c1: Pop(0); Push(Stack[-5] | Stack[-5]);
0x3c2: Pop(1); Push(Sqrt(Stack[-1]))
0x3c3: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x3c4: Stack[-4] = -Stack[-5]; Pop(0);
0x3c5: Push((int) 70)
0x3c6: Pop(1); Push(Stack[-6] * Stack[-1]);
0x3c7: PushEmpty(cvector, cvector)
0x3c8: Push(CVector(0.0, 1.0, 0.0))
0x3c9: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x3ca: Call 0x403

0x3cb: Pop(1)
0x3cc: Push((int) 25)
0x3cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3cf: Push(CVector(0.0, 10.0, 0.0))
0x3d0: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x3d1: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x3d2: @ IsOverrideActive(Stack[-1])
0x3d3: Pop(0)
0x3d4: Push(Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d6: Stack[-18] = (bool) 0
0x3d7: Return(); Pop(16)

0x3d8: @ StopWorld()
0x3d9: Pop(0)
0x3da: @ CameraTransit(Stack[-2], Stack[-4])
0x3db: Pop(0)
0x3dc: Push(CvectorIndex(Stack[-3], 0))
0x3dd: Push(CvectorIndex(Stack[-4], 2))
0x3de: @ Rotate(Stack[-2], Stack[-1])
0x3df: Pop(2)
0x3e0: @ CameraWaitForPlayFinish()
0x3e1: Pop(0)
0x3e2: @ ResumeWorld()
0x3e3: Pop(0)
0x3e4: Stack[-18] = (bool) 1
0x3e5: Return(); Pop(16)

0x3e6: PushEmpty()
0x3e7: @ CameraSwitchToNormal()
0x3e8: Pop(0)
0x3e9: Return(); Pop(0)

0x3ea: PushEmpty(float, float, float, float)
0x3eb: Push("playing ")
0x3ec: Pop(1); Push(Stack[-1] + Stack[-6]);
0x3ed: @ Trace(Stack[-1])
0x3ee: Pop(1)
0x3ef: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x3f0: Pop(0)
0x3f1: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x3f2: Pop(0)
0x3f3: Push("start: ")
0x3f4: Pop(1); Push(Stack[-1] + Stack[-3]);
0x3f5: @ Trace(Stack[-1])
0x3f6: Pop(1)
0x3f7: Push("end: ")
0x3f8: Pop(1); Push(Stack[-1] + Stack[-2]);
0x3f9: @ Trace(Stack[-1])
0x3fa: Pop(1)
0x3fb: Return(); Pop(4)

0x3fc: PushEmpty(bool)
0x3fd: Call 0x4c6

0x3fe: Pop(0)
0x3ff: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x400: @ lshStopSpeech()
0x401: Pop(0)
0x402: Return(); Pop(0)

0x403: PushEmpty(float, float)
0x404: Pop(0); Push(Stack[-3] | Stack[-3]);
0x405: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x406: Push((float)0.0)
0x407: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x408: IF (Stack[-1] == 0) GOTO 0x40b; Pop(1)

0x409: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x40a: Return(); Pop(2)

0x40b: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x40c: Return(); Pop(2)

0x40d: PushEmpty()
0x40e: Pop(0); Push(Stack[-2] | Stack[-1]);
0x40f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x410: Pop(0); Push(Stack[-3] | Stack[-3]);
0x411: Pop(2); Push(Stack[-2] * Stack[-1]);
0x412: Pop(1); Push(Sqrt(Stack[-1]))
0x413: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x414: Return(); Pop(0)

0x415: PushEmpty(int, int, bool, int, int, bool)
0x416: @@ GetItemID(Stack[-3])
0x417: Pop(0)
0x418: Push("Category")
0x419: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x41a: Pop(1)
0x41b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x41c: Pop(0)
0x41d: Pop(0); Push((bool) Stack[-1] == 0)
0x41e: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41f: @@ DropItems(Stack[-8], Stack[-7])
0x420: Pop(0)
0x421: Return(); Pop(6)

0x422: PushEmpty(object, object)
0x423: @ CreateInvItem(Stack[-1])
0x424: Pop(0)
0x425: @@ SetItemName(Stack[-4])
0x426: Pop(0)
0x427: PushEmpty(object, object, int)
0x428: Stack[-3] = Stack[-8]
0x429: Stack[-2] = Stack[-4]
0x42a: Stack[-1] = Stack[-6]
0x42b: Call 0x415

0x42c: Pop(3)
0x42d: Return(); Pop(2)

0x42e: Stack[-1] = 0
0x42f: PushEmpty(object, object)
0x430: @ FindActor(Stack[-1], Stack[-4])
0x431: Pop(0)
0x432: Pop(0); Push((bool) Stack[-1] == 0)
0x433: IF (Stack[-1] == 0) GOTO 0x436; Pop(1)

0x434: Stack[-5] = (bool) 0
0x435: Return(); Pop(2)

0x436: @ Trigger(Stack[-1], Stack[-3])
0x437: Pop(0)
0x438: Stack[-5] = (bool) 1
0x439: Return(); Pop(2)

0x43a: Stack[-1] = 0
0x43b: PushEmpty(string, string)
0x43c: Stack[-1] = "idle"
0x43d: Push(Stack[-3])
0x43e: IF (Stack[-1] == 0) GOTO 0x440; Pop(1)

0x43f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x440: Stack[-4] = Stack[-1]
0x441: Return(); Pop(2)

0x442: PushEmpty(int, bool, int, bool)
0x443: Stack[-2] = (int) 0
0x444: Push("all")
0x445: PushEmpty(string, int)
0x446: Stack[-1] = Stack[-5]
0x447: Call 0x43b

0x448: Pop(1)
0x449: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x44a: Pop(2)
0x44b: Pop(0); Push((bool) Stack[-1] == 0)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: GOTO 0x451

0x44e: Push((int) 1)
0x44f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x450: GOTO 0x444

0x451: Stack[-5] = Stack[-2]
0x452: Return(); Pop(4)

0x453: PushEmpty()
0x454: Push("playsound")
0x455: Push("giveitem")
0x456: @ TriggerWorld(Stack[-2], Stack[-1])
0x457: Pop(2)
0x458: Return(); Pop(0)

0x459: PushEmpty(float, float)
0x45a: Push("d3q03")
0x45b: Push((int) 2)
0x45c: @ SetVariable(Stack[-2], Stack[-1])
0x45d: Pop(2)
0x45e: PushEmpty()
0x45f: Call 0x4b2

0x460: Pop(0)
0x461: Push("disease")
0x462: @@ GetProperty(Stack[-1], Stack[-2])
0x463: Pop(1)
0x464: Push((float)0.5)
0x465: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x466: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x467: Push("disease")
0x468: Push((float)0.5)
0x469: @@ SetProperty(Stack[-2], Stack[-1])
0x46a: Pop(2)
0x46b: Return(); Pop(2)

0x46c: PushEmpty()
0x46d: Push("powder is given")
0x46e: @ Trace(Stack[-1])
0x46f: Pop(1)
0x470: PushEmpty(object, string, int)
0x471: Stack[-3] = Stack[-5]
0x472: Stack[-2] = "powder"
0x473: Stack[-1] = (int) 1
0x474: Call 0x422

0x475: Pop(3)
0x476: Return(); Pop(0)

0x477: PushEmpty(object, object)
0x478: @ GetDiaryRoot(Stack[-1])
0x479: Pop(0)
0x47a: Pop(0); Push((bool) Stack[-1] == 0)
0x47b: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x47c: Push("Can't retrieve diary root")
0x47d: @ Trace(Stack[-1])
0x47e: Pop(1)
0x47f: Stack[-3] = (bool) 0
0x480: Return(); Pop(2)

0x481: Stack[-3] = Stack[-1]
0x482: Return(); Pop(2)

0x483: Stack[-1] = 0
0x484: PushEmpty(object, object, int, object, object, int)
0x485: PushEmpty(object)
0x486: Call 0x477

0x487: Stack[-4] = Stack[-1]
0x488: Pop(1)
0x489: @@ Find(Stack[-7], Stack[-2])
0x48a: Pop(0)
0x48b: Pop(0); Push((bool) Stack[-2] == 0)
0x48c: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48d: Push("Can't find diary parent with id: ")
0x48e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x48f: @ Trace(Stack[-1])
0x490: Pop(1)
0x491: Stack[-9] = (bool) 0
0x492: Return(); Pop(6)

0x493: @@ AddChild(Stack[-8])
0x494: Pop(0)
0x495: Push("player_diary")
0x496: Push((int) 1)
0x497: @ SetVariable(Stack[-2], Stack[-1])
0x498: Pop(2)
0x499: @@ GetCategory(Stack[-1])
0x49a: Pop(0)
0x49b: @ SetDiarySection(Stack[-1])
0x49c: Pop(0)
0x49d: Stack[-9] = (bool) 0
0x49e: Return(); Pop(6)

0x49f: Stack[-2] = 0
0x4a0: Stack[-3] = 0
0x4a1: PushEmpty(int, int)
0x4a2: Push("player")
0x4a3: @ GetVariable(Stack[-1], Stack[-2])
0x4a4: Pop(1)
0x4a5: Push((int) 0)
0x4a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x4a8: Stack[-3] = (int) 200001
0x4a9: Return(); Pop(2)

0x4aa: GOTO 0x4b0

0x4ab: Push((int) 1)
0x4ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4ae: Stack[-3] = (int) 200002
0x4af: Return(); Pop(2)

0x4b0: Stack[-3] = (int) 200003
0x4b1: Return(); Pop(2)

0x4b2: PushEmpty(object, object)
0x4b3: Push("Adding diary entry")
0x4b4: @ Trace(Stack[-1])
0x4b5: Pop(1)
0x4b6: Push((int) 84)
0x4b7: Push((int) 2)
0x4b8: Push((int) 12166)
0x4b9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: PushEmpty(bool, object, int)
0x4bc: Stack[-2] = Stack[-4]
0x4bd: Stack[-1] = (int) 27
0x4be: Call 0x484

0x4bf: Pop(3)
0x4c0: Return(); Pop(2)

0x4c1: Stack[-1] = 0
0x4c2: Stack[-1] = (int) 3345
0x4c3: Return(); Pop(0)

0x4c4: Stack[-1] = "ui/NPC_None.png"
0x4c5: Return(); Pop(0)

0x4c6: Stack[-1] = (bool) 0
0x4c7: Return(); Pop(0)

0x4c8: PushEmpty()
0x4c9: PushEmpty(object)
0x4ca: Stack[-1] = Stack[-2]
0x4cb: Push(-1, 0); TaskCall(6)
0x4cc: Call 0x291

0x4cd: Pop(-1, 0); TaskReturn
0x4ce: Pop(1)
0x4cf: Return(); Pop(0)

0x4d0: PushEmpty()
0x4d1: PushEmpty(object, int, float)
0x4d2: Stack[-3] = Stack[-7]
0x4d3: Stack[-2] = Stack[-6]
0x4d4: Stack[-1] = Stack[-5]
0x4d5: Call 0x366

0x4d6: Pop(3)
0x4d7: Return(); Pop(0)

0x4d8: PushEmpty(float, float)
0x4d9: Push("health")
0x4da: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4dc: Push("health")
0x4dd: @ GetProperty(Stack[-1], Stack[-2])
0x4de: Pop(1)
0x4df: Push((int) 0)
0x4e0: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x4e1: IF (Stack[-1] == 0) GOTO 0x4e4; Pop(1)

0x4e2: @ SignalDeath(Stack[-4])
0x4e3: Pop(0)
0x4e4: Return(); Pop(2)

0x4e5: PushEmpty()
0x4e6: PushEmpty(object)
0x4e7: Stack[-1] = Stack[-2]
0x4e8: Call 0x4c8

0x4e9: Pop(1)
0x4ea: Return(); Pop(0)

0x4eb: PushEmpty()
0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[-3]
0x4ee: Call 0x34e

0x4ef: Stack[-4] = Stack[-2]
0x4f0: Pop(2)
0x4f1: Return(); Pop(0)

0x4f2: PushEmpty()
0x4f3: PushEmpty(object)
0x4f4: Stack[-1] = Stack[-2]
0x4f5: Push(-1, 3); TaskCall(5)
0x4f6: Call 0x1fd

0x4f7: Pop(-1, 3); TaskReturn
0x4f8: Pop(1)
0x4f9: Return(); Pop(0)

0x4fa: PushEmpty(bool, bool)
0x4fb: @ IsPlayerActor(Stack[-3], Stack[-1])
0x4fc: Pop(0)
0x4fd: Push(Stack[-1])
0x4fe: IF (Stack[-1] == 0) GOTO 0x504; Pop(1)

0x4ff: PushEmpty(bool, string, string)
0x500: Stack[-2] = "quest_d3_03"
0x501: Stack[-1] = "boy_attacked"
0x502: Call 0x42f

0x503: Pop(3)
0x504: Return(); Pop(2)

