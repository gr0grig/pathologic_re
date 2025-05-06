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
	Can't find lsh animation : 
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
	fail
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
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
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	Stop (0 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	ResetAAS (0 args)
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
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	FindActor (2 args)
	Trigger (2 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetVariable (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	IsPlayerActor (2 args)

RunOp = 0x1a6
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x1aa Vars = (object)
	GTASK_3 Vars = (bool, bool) Params = 0
		EVENT_17 Op = 0x1c7 Vars = (object)
		EVENT_10 Op = 0x215 Vars = (object)
		EVENT_28 Op = 0x219 Vars = ()
		EVENT_41 Op = 0x223 Vars = (object)
	GTASK_4  Params = 0
		EVENT_17 Op = 0x232 Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x2fd Vars = (int)
		EVENT_41 Op = 0x338 Vars = (object)
	GTASK_6  Params = 1
		EVENT_22 Op = 0x3cf Vars = (object, int, float, float)
		EVENT_16 Op = 0x3d1 Vars = (object, string)
		EVENT_41 Op = 0x3d3 Vars = (object)

Events:
EVENT_22 Op = 0x64b Vars = (object, int, float, float)
EVENT_43 Op = 0x653 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0x65d Vars = (object, string)
EVENT_41 Op = 0x66a Vars = (object)
EVENT_17 Op = 0x67f Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x4b1

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x63b

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x639

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x63d

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x63f

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x628

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
0x41: Call2 0x4f5

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
0x54: Push((int) 510904)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: Push((int) 510905)
0x5a: Push((int) 35745)
0x5b: Push((int) 12053)
0x5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d: Pop(3)
0x5e: Push((int) 534166)
0x5f: Push((int) -1)
0x60: Push((int) 35746)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x641

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x506

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
0x86: Call2 0x641

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
0x96: Call2 0x516

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x525

0x9f: Pop(0)
0xa0: Push((int) 12062)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x5bd

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x5d0

0xac: Pop(2)
0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x5b7

0xb1: Pop(2)
0xb2: Push((int) 35869)
0xb3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x5db

0xb9: Pop(2)
0xba: Push((int) 35746)
0xbb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xc2; Pop(1)

0xbd: PushEmpty(object, object)
0xbe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0: Call2 0x5db

0xc1: Pop(2)
0xc2: Push((int) 12052)
0xc3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xc5: PushEmpty(string)
0xc6: Stack[-1] = "Neutral"
0xc7: Call2 0x84

0xc8: Pop(1)
0xc9: Push((int) 510904)
0xca: @@ SetMessage(Stack[-1])
0xcb: Pop(1)
0xcc: @@ ClearReplies()
0xcd: Pop(0)
0xce: Push((int) 510905)
0xcf: Push((int) 35745)
0xd0: Push((int) 12053)
0xd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(3)
0xd3: Push((int) 534166)
0xd4: Push((int) -1)
0xd5: Push((int) 35746)
0xd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(3)
0xd8: Return(); Pop(0)

0xd9: Push((int) 35745)
0xda: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xf0; Pop(1)

0xdc: PushEmpty(string)
0xdd: Stack[-1] = "Neutral"
0xde: Call2 0x84

0xdf: Pop(1)
0xe0: Push((int) 534165)
0xe1: @@ SetMessage(Stack[-1])
0xe2: Pop(1)
0xe3: @@ ClearReplies()
0xe4: Pop(0)
0xe5: Push((int) 534167)
0xe6: Push((int) 12054)
0xe7: Push((int) 35747)
0xe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe9: Pop(3)
0xea: Push((int) 534169)
0xeb: Push((int) 35750)
0xec: Push((int) 35749)
0xed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee: Pop(3)
0xef: Return(); Pop(0)

0xf0: Push((int) 35750)
0xf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf2: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xf3: PushEmpty(string)
0xf4: Stack[-1] = "Neutral"
0xf5: Call2 0x84

0xf6: Pop(1)
0xf7: Push((int) 534170)
0xf8: @@ SetMessage(Stack[-1])
0xf9: Pop(1)
0xfa: @@ ClearReplies()
0xfb: Pop(0)
0xfc: Push((int) 534272)
0xfd: Push((int) 35857)
0xfe: Push((int) 35861)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 12054)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call2 0x84

0x108: Pop(1)
0x109: Push((int) 510906)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 510907)
0x10f: Push((int) 12056)
0x110: Push((int) 12055)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 12056)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Neutral"
0x119: Call2 0x84

0x11a: Pop(1)
0x11b: Push((int) 510908)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 510909)
0x121: Push((int) 12058)
0x122: Push((int) 12057)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 534168)
0x126: Push((int) 35857)
0x127: Push((int) 35748)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 12058)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral"
0x130: Call2 0x84

0x131: Pop(1)
0x132: Push((int) 510910)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 534268)
0x138: Push((int) 35857)
0x139: Push((int) 35856)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 534270)
0x13d: Push((int) 35860)
0x13e: Push((int) 35859)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 35860)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call2 0x84

0x148: Pop(1)
0x149: Push((int) 534271)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 534276)
0x14f: Push((int) 12061)
0x150: Push((int) 35865)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 35857)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0x84

0x15a: Pop(1)
0x15b: Push((int) 534269)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 510911)
0x161: Push((int) 12061)
0x162: Push((int) 12059)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 510912)
0x166: Push((int) 12061)
0x167: Push((int) 12060)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 12061)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x182; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call2 0x84

0x171: Pop(1)
0x172: Push((int) 510913)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 534273)
0x178: Push((int) 35864)
0x179: Push((int) 35862)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Push((int) 534274)
0x17d: Push((int) 35864)
0x17e: Push((int) 35863)
0x17f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x180: Pop(3)
0x181: Return(); Pop(0)

0x182: Push((int) 35864)
0x183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x184: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x185: PushEmpty(string)
0x186: Stack[-1] = "Neutral"
0x187: Call2 0x84

0x188: Pop(1)
0x189: Push((int) 534275)
0x18a: @@ SetMessage(Stack[-1])
0x18b: Pop(1)
0x18c: @@ ClearReplies()
0x18d: Pop(0)
0x18e: Push((int) 510914)
0x18f: Push((int) -1)
0x190: Push((int) 12062)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Push((int) 534277)
0x194: Push((int) -1)
0x195: Push((int) 35869)
0x196: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x197: Pop(3)
0x198: Return(); Pop(0)

0x199: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x19a: PushEmpty(bool)
0x19b: Call2 0x641

0x19c: Pop(0)
0x19d: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19e: @ lshStopAnimation()
0x19f: Pop(0)
0x1a0: GOTO 0x1a3

0x1a1: @ StopAnimation()
0x1a2: Pop(0)
0x1a3: Return(); Pop(0)

0x1a4: GOTO 0x9b

0x1a5: Return(); Pop(0)

0x1a6: @ Hold()
0x1a7: Pop(0)
0x1a8: GOTO 0x1a6

0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: PushEmpty(int, object)
0x1ac: Stack[-1] = Stack[-3]
0x1ad: Push(-2, 1); TaskCall(0)
0x1ae: Call2 0x0

0x1af: Pop(-2, 1); TaskReturn
0x1b0: Pop(2)
0x1b1: PushEmpty()
0x1b2: Push(-0, 2); TaskCall(3)
0x1b3: Call2 0x1b7

0x1b4: Pop(-0, 2); TaskReturn
0x1b5: Pop(0)
0x1b6: Return(); Pop(0)

0x1b7: PushEmpty(bool, string, string)
0x1b8: Stack[-2] = "quest_d3_03"
0x1b9: Stack[-1] = "boy_free"
0x1ba: Call2 0x593

0x1bb: Pop(3)
0x1bc: Push("noaccess")
0x1bd: Push((int) 0)
0x1be: @ SetProperty(Stack[-2], Stack[-1])
0x1bf: Pop(2)
0x1c0: PushEmpty()
0x1c1: Call2 0x1d5

0x1c2: Pop(0)
0x1c3: GOTO 0x1c0

0x1c4: Return(); Pop(0)

0x1c5: Stack[-1] = (bool) 1
0x1c6: Return(); Pop(0)

0x1c7: PushEmpty()
0x1c8: PushEmpty(bool, object)
0x1c9: Stack[-1] = Stack[-3]
0x1ca: Call2 0x670

0x1cb: Pop(1)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cd: PushEmpty()
0x1ce: Call2 0x21c

0x1cf: Pop(0)
0x1d0: PushEmpty(object)
0x1d1: Stack[-1] = Stack[-2]
0x1d2: Call2 0x677

0x1d3: Pop(1)
0x1d4: Return(); Pop(0)

0x1d5: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x1d6: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x1d7: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1d8: Push((float)0.5)
0x1d9: @ rand(Stack[-7], Stack[-1])
0x1da: Pop(1)
0x1db: @ Sleep(Stack[-6])
0x1dc: Pop(0)
0x1dd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x20f; Pop(1)

0x1df: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x1e0: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1e1: @ GetPosition(Stack[-4])
0x1e2: Pop(0)
0x1e3: PushEmpty(float)
0x1e4: Call2 0x210

0x1e5: Pop(0)
0x1e6: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x1e7: Pop(1)
0x1e8: Push(Stack[-3])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: GOTO 0x1ef

0x1eb: Push((int) 1)
0x1ec: @ Sleep(Stack[-1])
0x1ed: Pop(1)
0x1ee: GOTO 0x1e1

0x1ef: GOTO 0x1f1

0x1f0: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x1f1: PushEmpty(object, cvector)
0x1f2: Stack[-1] = Stack[-7]
0x1f3: Call2 0x22c

0x1f4: Stack[-4] = Stack[-2]
0x1f5: Pop(2)
0x1f6: Pop(0); Push(( Stack[-2] != 0 )
0x1f7: IF (Stack[-1] == 0) GOTO 0x20a; Pop(1)

0x1f8: @ RotatePath(Stack[-2], Stack[-1])
0x1f9: Pop(0)
0x1fa: Push(Stack[-1])
0x1fb: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x1c5

0x1fe: Pop(0)
0x1ff: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x200: Pop(1)
0x201: Stack[-2] = 0
0x202: Push(Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x209; Pop(1)

0x204: PushEmpty()
0x205: Push(-0, 0); TaskCall(4)
0x206: Call2 0x240

0x207: Pop(-0, 0); TaskReturn
0x208: Pop(0)
0x209: GOTO 0x20d

0x20a: Push((int) 1)
0x20b: @ Sleep(Stack[-1])
0x20c: Pop(1)
0x20d: Stack[-2] = 0
0x20e: GOTO 0x1dd

0x20f: Return(); Pop(12)

0x210: PushEmpty(float, float)
0x211: @ GetCameraFarDistance(Stack[-1])
0x212: Pop(0)
0x213: Stack[-3] = Stack[-1]
0x214: Return(); Pop(2)

0x215: PushEmpty()
0x216: @ RequestClearPath(Stack[-1])
0x217: Pop(0)
0x218: Return(); Pop(0)

0x219: @ Stop()
0x21a: Pop(0)
0x21b: Return(); Pop(0)

0x21c: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x21d: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x21e: @ Stop()
0x21f: Pop(0)
0x220: @ StopGroup0()
0x221: Pop(0)
0x222: Return(); Pop(0)

0x223: PushEmpty()
0x224: PushEmpty()
0x225: Call2 0x21c

0x226: Pop(0)
0x227: PushEmpty(object)
0x228: Stack[-1] = Stack[-2]
0x229: Call2 0x66a

0x22a: Pop(1)
0x22b: Return(); Pop(0)

0x22c: PushEmpty(object, object)
0x22d: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x22e: Pop(0)
0x22f: Stack[-4] = Stack[-1]
0x230: Return(); Pop(2)

0x231: Stack[-1] = 0
0x232: PushEmpty()
0x233: PushEmpty(bool, object)
0x234: Stack[-1] = Stack[-3]
0x235: Call2 0x670

0x236: Pop(1)
0x237: IF (Stack[-1] == 0) GOTO 0x23f; Pop(1)

0x238: PushEmpty()
0x239: Call2 0x291

0x23a: Pop(0)
0x23b: PushEmpty(object)
0x23c: Stack[-1] = Stack[-2]
0x23d: Call2 0x677

0x23e: Pop(1)
0x23f: Return(); Pop(0)

0x240: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x241: @ WaitForAnimEnd()
0x242: Pop(0)
0x243: PushEmpty(bool)
0x244: Call2 0x4ac

0x245: Pop(0)
0x246: Pop(1); Push((bool) Stack[-1] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x249; Pop(1)

0x248: Return(); Pop(14)

0x249: PushEmpty(int)
0x24a: Call2 0x5a6

0x24b: Stack[-8] = Stack[-1]
0x24c: Pop(1)
0x24d: Stack[-6] = (int) 0
0x24e: PushEmpty(bool)
0x24f: Stack[-1] = (bool) 0
0x250: Push((int) 5)
0x251: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x252: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x253: PushEmpty(bool)
0x254: Call2 0x4ac

0x255: Pop(0)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 1
0x258: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x259: Push((int) 3)
0x25a: @ irand(Stack[-6], Stack[-1])
0x25b: Pop(1)
0x25c: Push((int) 0)
0x25d: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25e: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x25f: Push(Stack[-7])
0x260: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x261: @ irand(Stack[-4], Stack[-7])
0x262: Pop(0)
0x263: Push("all")
0x264: PushEmpty(string, int)
0x265: Stack[-1] = Stack[-7]
0x266: Call2 0x59f

0x267: Pop(1)
0x268: @ PlayAnimation(Stack[-2], Stack[-1])
0x269: Pop(2)
0x26a: @ WaitForAnimEnd(Stack[-3])
0x26b: Pop(0)
0x26c: Pop(0); Push((bool) Stack[-3] == 0)
0x26d: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x26e: GOTO 0x28c

0x26f: GOTO 0x281

0x270: Push((int) 1)
0x271: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x272: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x273: Push((int) 4)
0x274: @ rand(Stack[-3], Stack[-1])
0x275: Pop(1)
0x276: Push((int) 1)
0x277: Pop(1); Push(Stack[-3] + Stack[-1]);
0x278: @ Sleep(Stack[-1], Stack[-2])
0x279: Pop(1)
0x27a: Pop(0); Push((bool) Stack[-1] == 0)
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: GOTO 0x28c

0x27d: GOTO 0x281

0x27e: Push(Stack[-6])
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: GOTO 0x28c

0x281: PushEmpty(bool)
0x282: Call2 0x28f

0x283: Pop(0)
0x284: Pop(1); Push((bool) Stack[-1] == 0)
0x285: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x286: GOTO 0x28c

0x287: @ ResetAAS()
0x288: Pop(0)
0x289: Push((int) 1)
0x28a: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x28b: GOTO 0x24e

0x28c: @ ResetAAS()
0x28d: Pop(0)
0x28e: Return(); Pop(14)

0x28f: Stack[-1] = (bool) 1
0x290: Return(); Pop(0)

0x291: @ StopAnimation()
0x292: Pop(0)
0x293: @ StopGroup0()
0x294: Pop(0)
0x295: Return(); Pop(0)

0x296: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x297: @ GetPosition(Stack[-6])
0x298: Pop(0)
0x299: @@ GetPosition(Stack[-5])
0x29a: Pop(0)
0x29b: @ GetDirection(Stack[-4])
0x29c: Pop(0)
0x29d: PushEmpty(cvector, cvector)
0x29e: PushEmpty(cvector, cvector)
0x29f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x2a0: Call2 0x555

0x2a1: Pop(1)
0x2a2: Push((float)0.75)
0x2a3: Pop(1); Push(Stack[-8] * Stack[-1]);
0x2a4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x2a5: Call2 0x555

0x2a6: Stack[-5] = Stack[-2]
0x2a7: Pop(2)
0x2a8: Push((int) 32)
0x2a9: Push((float)7000.0)
0x2aa: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x2ab: Pop(2)
0x2ac: Push((int) 100)
0x2ad: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x2ae: Push((int) 0)
0x2af: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Stack[-1] = (int) 0
0x2b2: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x2b3: Return(); Pop(12)

0x2b4: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x2b5: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x2b6: PushEmpty(cvector, float)
0x2b7: Stack[-1] = (float) 1.74533
0x2b8: Call2 0x296

0x2b9: Stack[-7] = Stack[-2]
0x2ba: Pop(2)
0x2bb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2bc: Push((float)2500.0)
0x2bd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2be: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2bf: PushEmpty(cvector, float)
0x2c0: Stack[-1] = (float) 2.61799
0x2c1: Call2 0x296

0x2c2: Stack[-7] = Stack[-2]
0x2c3: Pop(2)
0x2c4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x2c5: Push((float)2500.0)
0x2c6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2c8: Push("Can't retreat, distance: ")
0x2c9: Pop(0); Push(Sqrt(Stack[-5]))
0x2ca: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2cb: @ Trace(Stack[-1])
0x2cc: Pop(1)
0x2cd: Push((float)0.5)
0x2ce: @ Sleep(Stack[-1])
0x2cf: Pop(1)
0x2d0: Return(); Pop(10)

0x2d1: Push(CvectorIndex(Stack[-5], 0))
0x2d2: Push(CvectorIndex(Stack[-6], 2))
0x2d3: @ Rotate(Stack[-2], Stack[-1])
0x2d4: Pop(2)
0x2d5: PushEmpty(cvector)
0x2d6: Call2 0x3d5

0x2d7: Pop(0)
0x2d8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x2d9: Push((int) 120)
0x2da: Push((float)0.5)
0x2db: @ SetTimer(Stack[-2], Stack[-1])
0x2dc: Pop(2)
0x2dd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x2de: Push((int) 1)
0x2df: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x2e0: Pop(1)
0x2e1: Push(Stack[-3])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: GOTO 0x2fc

0x2e6: GOTO 0x2fa

0x2e7: PushEmpty(cvector, float)
0x2e8: Stack[-1] = (float) 2.61799
0x2e9: Call2 0x296

0x2ea: Stack[-4] = Stack[-2]
0x2eb: Pop(2)
0x2ec: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x2ed: Push((float)2500.0)
0x2ee: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f0: PushEmpty(cvector)
0x2f1: Call2 0x3d5

0x2f2: Pop(0)
0x2f3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x2f4: Push((int) 120)
0x2f5: Push((float)0.5)
0x2f6: @ SetTimer(Stack[-2], Stack[-1])
0x2f7: Pop(2)
0x2f8: GOTO 0x2fa

0x2f9: GOTO 0x2fc

0x2fa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2fc: Return(); Pop(10)

0x2fd: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x2fe: Push((int) 120)
0x2ff: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x302; Pop(1)

0x301: Return(); Pop(8)

0x302: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x303: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x304: @ Stop()
0x305: Pop(0)
0x306: Push((int) 1)
0x307: @ KillTimer(Stack[-1])
0x308: Pop(1)
0x309: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x30a: GOTO 0x330

0x30b: @ GetDirection(Stack[-4])
0x30c: Pop(0)
0x30d: Push((float)7000.0)
0x30e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x30f: Pop(1)
0x310: PushEmpty(cvector, float)
0x311: Stack[-1] = (float) 1.74533
0x312: Call2 0x296

0x313: Stack[-4] = Stack[-2]
0x314: Pop(2)
0x315: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x316: PushEmpty(bool)
0x317: Stack[-1] = (bool) 0
0x318: Push((float)2500.0)
0x319: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x31a: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x31b: PushEmpty(bool)
0x31c: Stack[-1] = (bool) 1
0x31d: Pop(0); Push(Stack[-5] * Stack[-5]);
0x31e: Push((float)2.25)
0x31f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x320: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x321: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x322: PushEmpty(bool)
0x323: Call2 0x341

0x324: Pop(0)
0x325: IF (Stack[-1] == 0) GOTO 0x327; Pop(1)

0x326: Stack[-1] = (bool) 0
0x327: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x328: Stack[-1] = (bool) 1
0x329: IF (Stack[-1] == 0) GOTO 0x330; Pop(1)

0x32a: @ Stop()
0x32b: Pop(0)
0x32c: PushEmpty(cvector)
0x32d: Call2 0x3d5

0x32e: Pop(0)
0x32f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x330: Return(); Pop(8)

0x331: @ Stop()
0x332: Pop(0)
0x333: Push((int) 120)
0x334: @ KillTimer(Stack[-1])
0x335: Pop(1)
0x336: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x337: Return(); Pop(0)

0x338: PushEmpty()
0x339: PushEmpty()
0x33a: Call2 0x331

0x33b: Pop(0)
0x33c: PushEmpty(object)
0x33d: Stack[-1] = Stack[-2]
0x33e: Call2 0x66a

0x33f: Pop(1)
0x340: Return(); Pop(0)

0x341: PushEmpty(cvector, cvector, cvector, cvector)
0x342: @ GetDirection(Stack[-2])
0x343: Pop(0)
0x344: PushEmpty(cvector, object)
0x345: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x346: Call2 0x3da

0x347: Stack[-3] = Stack[-2]
0x348: Pop(2)
0x349: PushEmpty(float, cvector, cvector)
0x34a: Stack[-2] = Stack[-5]
0x34b: Stack[-1] = Stack[-4]
0x34c: Call2 0x55f

0x34d: Pop(2)
0x34e: Push((float)-0.34202)
0x34f: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x350: Return(); Pop(4)

0x351: PushEmpty()
0x352: PushEmpty(object)
0x353: Stack[-1] = Stack[-2]
0x354: Call2 0x35a

0x355: Pop(1)
0x356: @ Hold()
0x357: Pop(0)
0x358: GOTO 0x356

0x359: Return(); Pop(0)

0x35a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x35b: Pop(0); Push((bool) Stack[-21] == 0)
0x35c: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x35d: PushEmpty(string)
0x35e: Stack[-1] = "fdie"
0x35f: Call2 0x3b5

0x360: Pop(1)
0x361: GOTO 0x3b4

0x362: @@ GetPosition(Stack[-10])
0x363: Pop(0)
0x364: @ GetPosition(Stack[-9])
0x365: Pop(0)
0x366: @ GetDirection(Stack[-8])
0x367: Pop(0)
0x368: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x369: Push(CvectorIndex(Stack[-7], 0))
0x36a: Push(CvectorIndex(Stack[-9], 0))
0x36b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36c: Push(CvectorIndex(Stack[-8], 2))
0x36d: Push(CvectorIndex(Stack[-10], 2))
0x36e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x36f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x370: Push((int) 0)
0x371: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-6] = "fdie"
0x374: GOTO 0x376

0x375: Stack[-6] = "bdie"
0x376: @ RemoveRTEnvelope()
0x377: Pop(0)
0x378: @ SetDeathState()
0x379: Pop(0)
0x37a: @ Stop()
0x37b: Pop(0)
0x37c: @ StopAsync()
0x37d: Pop(0)
0x37e: Stack[-5] = Stack[-21]
0x37f: Push("GetScriptProperty")
0x380: Push((int) 2)
0x381: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x382: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x383: Push("Owner")
0x384: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x385: Pop(1)
0x386: Push(Stack[-4])
0x387: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x388: Push("Owner")
0x389: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x38a: Pop(1)
0x38b: Pop(0); Push((bool) Stack[-5] == 0)
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: Stack[-5] = Stack[-21]
0x38e: Push("@GetEyesHeight")
0x38f: Push((int) 1)
0x390: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x391: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x392: @@ GetEyesHeight(Stack[-2])
0x393: Pop(0)
0x394: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x395: Push(CvectorIndex(Stack[-1], 1))
0x396: Stack[-1] = Stack[-3]
0x397: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x398: Push("head")
0x399: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x39a: Pop(1)
0x39b: Stack[-3] = (bool) 1
0x39c: GOTO 0x39e

0x39d: Stack[-3] = (bool) 0
0x39e: PushEmpty(string)
0x39f: Stack[-1] = Stack[-7]
0x3a0: Call2 0x52c

0x3a1: Pop(1)
0x3a2: Push("all")
0x3a3: @ PlayAnimation(Stack[-1], Stack[-7])
0x3a4: Pop(1)
0x3a5: @ WaitForAnimEnd()
0x3a6: Pop(0)
0x3a7: Push(Stack[-3])
0x3a8: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3a9: @ StopAsync()
0x3aa: Pop(0)
0x3ab: Push("head")
0x3ac: @ UnlookAsync(Stack[-1])
0x3ad: Pop(1)
0x3ae: Push("all")
0x3af: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x3b0: Pop(1)
0x3b1: @ RemoveEnvelope()
0x3b2: Pop(0)
0x3b3: Stack[-5] = 0
0x3b4: Return(); Pop(20)

0x3b5: PushEmpty()
0x3b6: @ RemoveRTEnvelope()
0x3b7: Pop(0)
0x3b8: @ SetDeathState()
0x3b9: Pop(0)
0x3ba: @ Stop()
0x3bb: Pop(0)
0x3bc: @ StopAsync()
0x3bd: Pop(0)
0x3be: @ StopSecondaryAnimation()
0x3bf: Pop(0)
0x3c0: PushEmpty(string)
0x3c1: Stack[-1] = Stack[-2]
0x3c2: Call2 0x52c

0x3c3: Pop(1)
0x3c4: Push("all")
0x3c5: @ PlayAnimation(Stack[-1], Stack[-2])
0x3c6: Pop(1)
0x3c7: @ WaitForAnimEnd()
0x3c8: Pop(0)
0x3c9: Push("all")
0x3ca: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x3cb: Pop(1)
0x3cc: @ RemoveEnvelope()
0x3cd: Pop(0)
0x3ce: Return(); Pop(0)

0x3cf: PushEmpty()
0x3d0: Return(); Pop(0)

0x3d1: PushEmpty()
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty()
0x3d4: Return(); Pop(0)

0x3d5: PushEmpty(cvector, cvector)
0x3d6: @ GetPosition(Stack[-1])
0x3d7: Pop(0)
0x3d8: Stack[-3] = Stack[-1]
0x3d9: Return(); Pop(2)

0x3da: PushEmpty(cvector, cvector, cvector, cvector)
0x3db: @ GetPosition(Stack[-2])
0x3dc: Pop(0)
0x3dd: @@ GetPosition(Stack[-1])
0x3de: Pop(0)
0x3df: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x3e0: Return(); Pop(4)

0x3e1: PushEmpty(bool, bool)
0x3e2: Push("HasProperty")
0x3e3: Push((int) 2)
0x3e4: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x3e5: Pop(1); Push((bool) Stack[-1] == 0)
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-5] = (bool) 0
0x3e8: Return(); Pop(2)

0x3e9: @@ HasProperty(Stack[-3], Stack[-1])
0x3ea: Pop(0)
0x3eb: Stack[-5] = Stack[-1]
0x3ec: Return(); Pop(2)

0x3ed: PushEmpty(bool, bool)
0x3ee: @@ IsDead(Stack[-1])
0x3ef: Pop(0)
0x3f0: Stack[-4] = Stack[-1]
0x3f1: Return(); Pop(2)

0x3f2: PushEmpty(object, object, object, object)
0x3f3: Pop(0); Push((bool) Stack[-5] == 0)
0x3f4: IF (Stack[-1] == 0) GOTO 0x3f7; Pop(1)

0x3f5: Stack[-6] = (bool) 0
0x3f6: Return(); Pop(4)

0x3f7: PushEmpty(bool)
0x3f8: Stack[-1] = (bool) 0
0x3f9: Push("IsDead")
0x3fa: Push((int) 1)
0x3fb: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x3fc: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fd: PushEmpty(bool, object)
0x3fe: Stack[-1] = Stack[-8]
0x3ff: Call2 0x3ed

0x400: Pop(1)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[-1] = (bool) 1
0x403: IF (Stack[-1] == 0) GOTO 0x406; Pop(1)

0x404: Stack[-6] = (bool) 0
0x405: Return(); Pop(4)

0x406: @ GetScene(Stack[-2])
0x407: Pop(0)
0x408: Pop(0); Push((bool) Stack[-2] == 0)
0x409: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x40a: Stack[-6] = (bool) 0
0x40b: Return(); Pop(4)

0x40c: @@ GetScene(Stack[-1])
0x40d: Pop(0)
0x40e: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x40f: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x410: Stack[-6] = (bool) 0
0x411: Return(); Pop(4)

0x412: Stack[-6] = (bool) 1
0x413: Return(); Pop(4)

0x414: Stack[-1] = 0
0x415: Stack[-2] = 0
0x416: PushEmpty(int, int)
0x417: PushEmpty(bool, object)
0x418: Stack[-1] = Stack[-5]
0x419: Call2 0x3f2

0x41a: Pop(1)
0x41b: Pop(1); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x41d: Stack[-4] = (bool) 0
0x41e: Return(); Pop(2)

0x41f: PushEmpty(bool, object, string)
0x420: Stack[-2] = Stack[-6]
0x421: Stack[-1] = "noaccess"
0x422: Call2 0x3e1

0x423: Pop(2)
0x424: Pop(1); Push((bool) Stack[-1] == 0)
0x425: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x426: Stack[-4] = (bool) 1
0x427: Return(); Pop(2)

0x428: Push("noaccess")
0x429: @@ GetProperty(Stack[-1], Stack[-2])
0x42a: Pop(1)
0x42b: Push((int) 0)
0x42c: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x42d: Return(); Pop(2)

0x42e: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x42f: Pop(0); Push((bool) Stack[-15] == 0)
0x430: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x431: Return(); Pop(14)

0x432: @ IsDead(Stack[-7])
0x433: Pop(0)
0x434: Push(Stack[-7])
0x435: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x436: Return(); Pop(14)

0x437: @ GetSecondaryAnimationType(Stack[-6])
0x438: Pop(0)
0x439: Push((int) 0)
0x43a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x43b: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x43c: Return(); Pop(14)

0x43d: @@ GetPosition(Stack[-5])
0x43e: Pop(0)
0x43f: @ GetPosition(Stack[-4])
0x440: Pop(0)
0x441: @ GetDirection(Stack[-3])
0x442: Pop(0)
0x443: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x444: Push(CvectorIndex(Stack[-2], 0))
0x445: Push(CvectorIndex(Stack[-4], 0))
0x446: Pop(2); Push(Stack[-2] * Stack[-1]);
0x447: Push(CvectorIndex(Stack[-3], 2))
0x448: Push(CvectorIndex(Stack[-5], 2))
0x449: Pop(2); Push(Stack[-2] * Stack[-1]);
0x44a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x44b: Push((int) 0)
0x44c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-1] = "fhit"
0x44f: GOTO 0x451

0x450: Stack[-1] = "bhit"
0x451: Push("hit_react")
0x452: Push("1")
0x453: Pop(1); Push(Stack[-3] + Stack[-1]);
0x454: Push("2")
0x455: Pop(1); Push(Stack[-4] + Stack[-1]);
0x456: Push((int) -10)
0x457: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(4)
0x459: Return(); Pop(14)

0x45a: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x45b: PushEmpty(bool)
0x45c: Stack[-1] = (bool) 0
0x45d: PushEmpty(bool)
0x45e: Stack[-1] = (bool) 0
0x45f: Push(Stack[-23])
0x460: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x461: Push((int) 4)
0x462: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x463: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x464: Stack[-1] = (bool) 1
0x465: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x466: Push((int) 5)
0x467: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x46a; Pop(1)

0x469: Stack[-1] = (bool) 1
0x46a: IF (Stack[-1] == 0) GOTO 0x499; Pop(1)

0x46b: PushEmpty(cvector, cvector)
0x46c: PushEmpty(cvector, object)
0x46d: Stack[-1] = Stack[-25]
0x46e: Call2 0x3da

0x46f: Stack[-3] = Stack[-2]
0x470: Pop(2)
0x471: Call2 0x555

0x472: Stack[-11] = Stack[-2]
0x473: Pop(2)
0x474: @ CreateVectorVector(Stack[-8])
0x475: Pop(0)
0x476: Stack[-7] = (int) 1
0x477: Push("hit")
0x478: Pop(1); Push(Stack[-1] + Stack[-8]);
0x479: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x47a: Pop(1)
0x47b: Pop(0); Push((bool) Stack[-6] == 0)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: GOTO 0x487

0x47e: Pop(0); Push(Stack[-4] | Stack[-9]);
0x47f: Push((float)0.70711)
0x480: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x481: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x482: @@ add(Stack[-5])
0x483: Pop(0)
0x484: Push((int) 1)
0x485: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x486: GOTO 0x477

0x487: @@ size(Stack[-3])
0x488: Pop(0)
0x489: Push(Stack[-3])
0x48a: IF (Stack[-1] == 0) GOTO 0x498; Pop(1)

0x48b: @ irand(Stack[-2], Stack[-3])
0x48c: Pop(0)
0x48d: @@ get(Stack[-1], Stack[-2])
0x48e: Pop(0)
0x48f: PushEmpty(object, int, float, cvector, cvector)
0x490: Stack[-5] = Stack[-26]
0x491: Stack[-4] = Stack[-25]
0x492: Stack[-3] = Stack[-24]
0x493: Stack[-2] = Stack[-6]
0x494: Stack[-1] = -Stack[-14]; Pop(0);
0x495: Call2 0x49e

0x496: Pop(5)
0x497: Return(); Pop(18)

0x498: Stack[-8] = 0
0x499: PushEmpty(object)
0x49a: Stack[-1] = Stack[-22]
0x49b: Call2 0x42e

0x49c: Pop(1)
0x49d: Return(); Pop(18)

0x49e: PushEmpty(object, object, object, object)
0x49f: @ GetScene(Stack[-2])
0x4a0: Pop(0)
0x4a1: Push("scripted")
0x4a2: Push("blood_dir.xml")
0x4a3: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x4a4: Pop(2)
0x4a5: PushEmpty(object)
0x4a6: Stack[-1] = Stack[-10]
0x4a7: Call2 0x42e

0x4a8: Pop(1)
0x4a9: Return(); Pop(4)

0x4aa: Stack[-1] = 0
0x4ab: Stack[-2] = 0
0x4ac: PushEmpty(bool, bool)
0x4ad: @ IsLoaded(Stack[-1])
0x4ae: Pop(0)
0x4af: Stack[-3] = Stack[-1]
0x4b0: Return(); Pop(2)

0x4b1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x4b2: @@ GetPosition(Stack[-8])
0x4b3: Pop(0)
0x4b4: @@ GetEyesHeight(Stack[-9])
0x4b5: Pop(0)
0x4b6: Push(CvectorIndex(Stack[-8], 1))
0x4b7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4b8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x4b9: @ GetPosition(Stack[-7])
0x4ba: Pop(0)
0x4bb: @ GetEyesHeight(Stack[-9])
0x4bc: Pop(0)
0x4bd: Push(CvectorIndex(Stack[-7], 1))
0x4be: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x4bf: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x4c0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x4c1: Push(CvectorIndex(Stack[-6], 1))
0x4c2: Stack[-1] = (int) 0
0x4c3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x4c4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x4c5: Pop(1); Push(Sqrt(Stack[-1]))
0x4c6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x4c7: Stack[-5] = -Stack[-6]; Pop(0);
0x4c8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x4c9: PushEmpty(cvector, cvector)
0x4ca: Push(CVector(0.0, 1.0, 0.0))
0x4cb: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x4cc: Call2 0x555

0x4cd: Pop(1)
0x4ce: Push((int) 25)
0x4cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4d0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4d1: Push(CVector(0.0, 10.0, 0.0))
0x4d2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x4d3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x4d4: @ IsOverrideActive(Stack[-2])
0x4d5: Pop(0)
0x4d6: Push(Stack[-2])
0x4d7: IF (Stack[-1] == 0) GOTO 0x4da; Pop(1)

0x4d8: Stack[-21] = (bool) 0
0x4d9: Return(); Pop(18)

0x4da: @ StopWorld()
0x4db: Pop(0)
0x4dc: @ CameraTransit(Stack[-3], Stack[-5])
0x4dd: Pop(0)
0x4de: Push(CvectorIndex(Stack[-4], 0))
0x4df: Push(CvectorIndex(Stack[-5], 2))
0x4e0: @ Rotate(Stack[-2], Stack[-1])
0x4e1: Pop(2)
0x4e2: PushEmpty(bool)
0x4e3: Call2 0x641

0x4e4: Pop(0)
0x4e5: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4e6: GOTO 0x4ef

0x4e7: Push("head")
0x4e8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4e9: Pop(1)
0x4ea: Push(Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ef; Pop(1)

0x4ec: Push("head")
0x4ed: @ LookAsyncCamera(Stack[-1])
0x4ee: Pop(1)
0x4ef: @ CameraWaitForPlayFinish()
0x4f0: Pop(0)
0x4f1: @ ResumeWorld()
0x4f2: Pop(0)
0x4f3: Stack[-21] = (bool) 1
0x4f4: Return(); Pop(18)

0x4f5: PushEmpty(bool, bool)
0x4f6: @ CameraSwitchToNormal()
0x4f7: Pop(0)
0x4f8: PushEmpty(bool)
0x4f9: Call2 0x641

0x4fa: Pop(0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4fc: GOTO 0x505

0x4fd: Push("head")
0x4fe: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x4ff: Pop(1)
0x500: Push(Stack[-1])
0x501: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x502: Push("head")
0x503: @ UnlookAsync(Stack[-1])
0x504: Pop(1)
0x505: Return(); Pop(2)

0x506: PushEmpty(bool, float, float, bool, float, float)
0x507: @ lshHasAnimation(Stack[-3], Stack[-7])
0x508: Pop(0)
0x509: Push(Stack[-3])
0x50a: IF (Stack[-1] == 0) GOTO 0x511; Pop(1)

0x50b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x50c: Pop(0)
0x50d: Push((bool) 0)
0x50e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x50f: Pop(1)
0x510: GOTO 0x515

0x511: Push("Can't find lsh animation : ")
0x512: Pop(1); Push(Stack[-1] + Stack[-8]);
0x513: @ Trace(Stack[-1])
0x514: Pop(1)
0x515: Return(); Pop(6)

0x516: PushEmpty(bool, float, float, bool, float, float)
0x517: @ lshHasAnimation(Stack[-3], Stack[-8])
0x518: Pop(0)
0x519: Push(Stack[-3])
0x51a: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x51c: Pop(0)
0x51d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x51e: Pop(0)
0x51f: GOTO 0x524

0x520: Push("Can't find lsh animation : ")
0x521: Pop(1); Push(Stack[-1] + Stack[-9]);
0x522: @ Trace(Stack[-1])
0x523: Pop(1)
0x524: Return(); Pop(6)

0x525: PushEmpty(bool)
0x526: Call2 0x641

0x527: Pop(0)
0x528: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x529: @ lshStopSpeech()
0x52a: Pop(0)
0x52b: Return(); Pop(0)

0x52c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x52d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x52e: Pop(0)
0x52f: Pop(0); Push((bool) Stack[-8] == 0)
0x530: IF (Stack[-1] == 0) GOTO 0x545; Pop(1)

0x531: Stack[-7] = (int) 0
0x532: Push((int) 1)
0x533: Pop(1); Push(Stack[-8] + Stack[-1]);
0x534: Pop(1); Push(Stack[-18] + Stack[-1]);
0x535: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x536: Pop(1)
0x537: Pop(0); Push((bool) Stack[-6] == 0)
0x538: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x539: GOTO 0x53d

0x53a: Push((int) 1)
0x53b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x53c: GOTO 0x532

0x53d: Pop(0); Push((bool) Stack[-7] == 0)
0x53e: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x53f: Return(); Pop(16)

0x540: @ irand(Stack[-5], Stack[-7])
0x541: Pop(0)
0x542: Push((int) 1)
0x543: Pop(1); Push(Stack[-6] + Stack[-1]);
0x544: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x545: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x546: Pop(0)
0x547: Push(Stack[-4])
0x548: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x549: @ GetEyesHeight(Stack[-3])
0x54a: Pop(0)
0x54b: @ GetDirection(Stack[-2])
0x54c: Pop(0)
0x54d: Push((int) 50)
0x54e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x54f: Push(CvectorIndex(Stack[-1], 1))
0x550: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x551: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x552: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x553: Pop(0)
0x554: Return(); Pop(16)

0x555: PushEmpty(float, float)
0x556: Pop(0); Push(Stack[-3] | Stack[-3]);
0x557: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x558: Push((float)0.0)
0x559: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x55a: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x55b: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x55c: Return(); Pop(2)

0x55d: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x55e: Return(); Pop(2)

0x55f: PushEmpty()
0x560: Pop(0); Push(Stack[-2] | Stack[-1]);
0x561: Pop(0); Push(Stack[-3] | Stack[-3]);
0x562: Pop(0); Push(Stack[-3] | Stack[-3]);
0x563: Pop(2); Push(Stack[-2] * Stack[-1]);
0x564: Pop(1); Push(Sqrt(Stack[-1]))
0x565: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x566: Return(); Pop(0)

0x567: PushEmpty(object, object)
0x568: @ CreateIntVector(Stack[-1])
0x569: Pop(0)
0x56a: @@ add(Stack[-4])
0x56b: Pop(0)
0x56c: @@ add(Stack[-3])
0x56d: Pop(0)
0x56e: Push((int) 3)
0x56f: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x570: Pop(1)
0x571: Return(); Pop(2)

0x572: Stack[-1] = 0
0x573: PushEmpty(int, int, bool, int, int, bool)
0x574: @@ GetItemID(Stack[-3])
0x575: Pop(0)
0x576: Push("Category")
0x577: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x578: Pop(1)
0x579: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x57a: Pop(0)
0x57b: Pop(0); Push((bool) Stack[-1] == 0)
0x57c: IF (Stack[-1] == 0) GOTO 0x580; Pop(1)

0x57d: @@ DropItems(Stack[-8], Stack[-7])
0x57e: Pop(0)
0x57f: GOTO 0x585

0x580: PushEmpty(int, int)
0x581: Stack[-2] = Stack[-5]
0x582: Stack[-1] = Stack[-9]
0x583: Call2 0x567

0x584: Pop(2)
0x585: Return(); Pop(6)

0x586: PushEmpty(object, object)
0x587: @ CreateInvItem(Stack[-1])
0x588: Pop(0)
0x589: @@ SetItemName(Stack[-4])
0x58a: Pop(0)
0x58b: PushEmpty(object, object, int)
0x58c: Stack[-3] = Stack[-8]
0x58d: Stack[-2] = Stack[-4]
0x58e: Stack[-1] = Stack[-6]
0x58f: Call2 0x573

0x590: Pop(3)
0x591: Return(); Pop(2)

0x592: Stack[-1] = 0
0x593: PushEmpty(object, object)
0x594: @ FindActor(Stack[-1], Stack[-4])
0x595: Pop(0)
0x596: Pop(0); Push((bool) Stack[-1] == 0)
0x597: IF (Stack[-1] == 0) GOTO 0x59a; Pop(1)

0x598: Stack[-5] = (bool) 0
0x599: Return(); Pop(2)

0x59a: @ Trigger(Stack[-1], Stack[-3])
0x59b: Pop(0)
0x59c: Stack[-5] = (bool) 1
0x59d: Return(); Pop(2)

0x59e: Stack[-1] = 0
0x59f: PushEmpty(string, string)
0x5a0: Stack[-1] = "idle"
0x5a1: Push(Stack[-3])
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a4; Pop(1)

0x5a3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x5a4: Stack[-4] = Stack[-1]
0x5a5: Return(); Pop(2)

0x5a6: PushEmpty(int, bool, int, bool)
0x5a7: Stack[-2] = (int) 0
0x5a8: Push("all")
0x5a9: PushEmpty(string, int)
0x5aa: Stack[-1] = Stack[-5]
0x5ab: Call2 0x59f

0x5ac: Pop(1)
0x5ad: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(2)
0x5af: Pop(0); Push((bool) Stack[-1] == 0)
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: GOTO 0x5b5

0x5b2: Push((int) 1)
0x5b3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x5b4: GOTO 0x5a8

0x5b5: Stack[-5] = Stack[-2]
0x5b6: Return(); Pop(4)

0x5b7: PushEmpty()
0x5b8: Push("playsound")
0x5b9: Push("giveitem")
0x5ba: @ TriggerWorld(Stack[-2], Stack[-1])
0x5bb: Pop(2)
0x5bc: Return(); Pop(0)

0x5bd: PushEmpty(float, float)
0x5be: Push("d3q03")
0x5bf: Push((int) 2)
0x5c0: @ SetVariable(Stack[-2], Stack[-1])
0x5c1: Pop(2)
0x5c2: PushEmpty()
0x5c3: Call2 0x5e5

0x5c4: Pop(0)
0x5c5: Push("disease")
0x5c6: @@ GetProperty(Stack[-1], Stack[-2])
0x5c7: Pop(1)
0x5c8: Push((float)0.5)
0x5c9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5cb: Push("disease")
0x5cc: Push((float)0.5)
0x5cd: @@ SetProperty(Stack[-2], Stack[-1])
0x5ce: Pop(2)
0x5cf: Return(); Pop(2)

0x5d0: PushEmpty()
0x5d1: Push("powder is given")
0x5d2: @ Trace(Stack[-1])
0x5d3: Pop(1)
0x5d4: PushEmpty(object, string, int)
0x5d5: Stack[-3] = Stack[-5]
0x5d6: Stack[-2] = "powder"
0x5d7: Stack[-1] = (int) 1
0x5d8: Call2 0x586

0x5d9: Pop(3)
0x5da: Return(); Pop(0)

0x5db: PushEmpty()
0x5dc: PushEmpty()
0x5dd: Call2 0x5f2

0x5de: Pop(0)
0x5df: PushEmpty(bool, string, string)
0x5e0: Stack[-2] = "quest_d3_03"
0x5e1: Stack[-1] = "fail"
0x5e2: Call2 0x593

0x5e3: Pop(3)
0x5e4: Return(); Pop(0)

0x5e5: PushEmpty(object, object)
0x5e6: Push((int) 84)
0x5e7: Push((int) 2)
0x5e8: Push((int) 512166)
0x5e9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5ea: Pop(3)
0x5eb: PushEmpty(bool, object, int)
0x5ec: Stack[-2] = Stack[-4]
0x5ed: Stack[-1] = (int) 27
0x5ee: Call2 0x60c

0x5ef: Pop(3)
0x5f0: Return(); Pop(2)

0x5f1: Stack[-1] = 0
0x5f2: PushEmpty(object, object)
0x5f3: Push((int) 86)
0x5f4: Push((int) 2)
0x5f5: Push((int) 512168)
0x5f6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x5f7: Pop(3)
0x5f8: PushEmpty(bool, object, int)
0x5f9: Stack[-2] = Stack[-4]
0x5fa: Stack[-1] = (int) 27
0x5fb: Call2 0x60c

0x5fc: Pop(3)
0x5fd: Return(); Pop(2)

0x5fe: Stack[-1] = 0
0x5ff: PushEmpty(object, object)
0x600: @ GetDiaryRoot(Stack[-1])
0x601: Pop(0)
0x602: Pop(0); Push((bool) Stack[-1] == 0)
0x603: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x604: Push("Can't retrieve diary root")
0x605: @ Trace(Stack[-1])
0x606: Pop(1)
0x607: Stack[-3] = (bool) 0
0x608: Return(); Pop(2)

0x609: Stack[-3] = Stack[-1]
0x60a: Return(); Pop(2)

0x60b: Stack[-1] = 0
0x60c: PushEmpty(object, object, int, object, object, int)
0x60d: PushEmpty(object)
0x60e: Call2 0x5ff

0x60f: Stack[-4] = Stack[-1]
0x610: Pop(1)
0x611: @@ Find(Stack[-7], Stack[-2])
0x612: Pop(0)
0x613: Pop(0); Push((bool) Stack[-2] == 0)
0x614: IF (Stack[-1] == 0) GOTO 0x61b; Pop(1)

0x615: Push("Can't find diary parent with id: ")
0x616: Pop(1); Push(Stack[-1] + Stack[-8]);
0x617: @ Trace(Stack[-1])
0x618: Pop(1)
0x619: Stack[-9] = (bool) 0
0x61a: Return(); Pop(6)

0x61b: @@ AddChild(Stack[-8])
0x61c: Pop(0)
0x61d: Push((int) 7)
0x61e: @ SendWorldWndMessage(Stack[-1])
0x61f: Pop(1)
0x620: @@ GetCategory(Stack[-1])
0x621: Pop(0)
0x622: @ SetDiarySection(Stack[-1])
0x623: Pop(0)
0x624: Stack[-9] = (bool) 0
0x625: Return(); Pop(6)

0x626: Stack[-2] = 0
0x627: Stack[-3] = 0
0x628: PushEmpty(int, int)
0x629: Push("branch")
0x62a: @ GetVariable(Stack[-1], Stack[-2])
0x62b: Pop(1)
0x62c: Push((int) 0)
0x62d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x632; Pop(1)

0x62f: Stack[-3] = (int) 1
0x630: Return(); Pop(2)

0x631: GOTO 0x637

0x632: Push((int) 1)
0x633: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x634: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x635: Stack[-3] = (int) 2
0x636: Return(); Pop(2)

0x637: Stack[-3] = (int) 3
0x638: Return(); Pop(2)

0x639: Stack[-1] = (int) 515560
0x63a: Return(); Pop(0)

0x63b: Stack[-1] = (int) 503345
0x63c: Return(); Pop(0)

0x63d: Stack[-1] = "ui/NPC_Citizen3.png"
0x63e: Return(); Pop(0)

0x63f: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x640: Return(); Pop(0)

0x641: Stack[-1] = (bool) 0
0x642: Return(); Pop(0)

0x643: PushEmpty()
0x644: PushEmpty(object)
0x645: Stack[-1] = Stack[-2]
0x646: Push(-1, 0); TaskCall(6)
0x647: Call2 0x351

0x648: Pop(-1, 0); TaskReturn
0x649: Pop(1)
0x64a: Return(); Pop(0)

0x64b: PushEmpty()
0x64c: PushEmpty(object, int, float)
0x64d: Stack[-3] = Stack[-7]
0x64e: Stack[-2] = Stack[-6]
0x64f: Stack[-1] = Stack[-5]
0x650: Call2 0x45a

0x651: Pop(3)
0x652: Return(); Pop(0)

0x653: PushEmpty()
0x654: PushEmpty(object, int, float, cvector, cvector)
0x655: Stack[-5] = Stack[-11]
0x656: Stack[-4] = Stack[-10]
0x657: Stack[-3] = Stack[-9]
0x658: Stack[-2] = Stack[-7]
0x659: Stack[-1] = Stack[-6]
0x65a: Call2 0x49e

0x65b: Pop(5)
0x65c: Return(); Pop(0)

0x65d: PushEmpty(float, float)
0x65e: Push("health")
0x65f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x661: Push("health")
0x662: @ GetProperty(Stack[-1], Stack[-2])
0x663: Pop(1)
0x664: Push((int) 0)
0x665: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x666: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x667: @ SignalDeath(Stack[-4])
0x668: Pop(0)
0x669: Return(); Pop(2)

0x66a: PushEmpty()
0x66b: PushEmpty(object)
0x66c: Stack[-1] = Stack[-2]
0x66d: Call2 0x643

0x66e: Pop(1)
0x66f: Return(); Pop(0)

0x670: PushEmpty()
0x671: PushEmpty(bool, object)
0x672: Stack[-1] = Stack[-3]
0x673: Call2 0x416

0x674: Stack[-4] = Stack[-2]
0x675: Pop(2)
0x676: Return(); Pop(0)

0x677: PushEmpty()
0x678: PushEmpty(object)
0x679: Stack[-1] = Stack[-2]
0x67a: Push(-1, 3); TaskCall(5)
0x67b: Call2 0x2b4

0x67c: Pop(-1, 3); TaskReturn
0x67d: Pop(1)
0x67e: Return(); Pop(0)

0x67f: PushEmpty(bool, bool)
0x680: @ IsPlayerActor(Stack[-3], Stack[-1])
0x681: Pop(0)
0x682: Push(Stack[-1])
0x683: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x684: PushEmpty(bool, string, string)
0x685: Stack[-2] = "quest_d3_03"
0x686: Stack[-1] = "boy_attacked"
0x687: Call2 0x593

0x688: Pop(3)
0x689: Return(); Pop(2)

