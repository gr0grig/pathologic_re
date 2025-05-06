GlobalVarCount = 6
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 int 
	G_VAR_3 object 
	G_VAR_4 object 
	G_VAR_5 int 

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
	Unknown FSM state
	player
	GetPosition
	Can't retreat, distance: 
	head
	pt_b9q03_bonfire
	GetLocator
	walk
	run
	hunt
	GetPFPosition
	fdie
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	cleanup
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
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
	SetReturnValue
	oob9BoyFollower1
	b9q03Bonfire1
	pt_bonfire1
	AddMark
	b9q03Bonfire2
	pt_bonfire2
	b9q03Bonfire3
	pt_bonfire3
	b9q03Bonfire4
	pt_bonfire4
	ShowMap
	b9q03BonefiresCount
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Can't find main outdoor scene
	GetMap
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch
	SetItemName
	Organ
	SetProperty
	GetItemID
	liver
	kidney
	heart
	blood
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	b9q03Bonfire
	enable_bonfire
	quest_b9_03
	bonfire_burn
	changing state to c_iStateWaitForCommand
	changing state to c_iStateFollow
	changing state to c_iStateIdleAndFollow
	changing state to c_iStateRetreatPlayer
	changing state to c_iStateBurn
	changing state to c_iStateWaitForLoad
	changing state to c_iStateGoAway
	changing state to c_iStateRetreat
	changing state to c_iStateRetreatPDamage
	health
	fail

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
	Trace (1 args)
	FindActor (2 args)
	Stop (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	GetDirection (1 args)
	FindLongestDir (6 args)
	Sleep (1 args)
	Rotate (2 args)
	SetTimer (2 args)
	MovePoint (3 args)
	KillTimer (1 args)
	FindDirLength (3 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	GetScene (1 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (5 args)
	RotateAsync (2 args)
	RequestClearPath (1 args)
	HasAnimation (3 args)
	RemoveActor (1 args)
	Hold (0 args)
	SetRTEnvelope (2 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	IsPlayerActor (2 args)
	Rotate (3 args)
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
	self (1 args)
	GetVariable (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetVariable (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	CreateInvItem (1 args)
	AddItem (4 args)
	TriggerWorld (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)

RunOp = 0x197
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd6 Vars = (int, int)
	GTASK_2  Params = 0
	GTASK_3  Params = 0
		EVENT_0 Op = 0x28e Vars = (object)
		EVENT_17 Op = 0x294 Vars = (object)
		EVENT_30 Op = 0x2a4 Vars = (object, object, bool)
		EVENT_6 Op = 0x2bc Vars = ()
	GTASK_4  Params = 1
		EVENT_0 Op = 0x2ce Vars = (object)
		EVENT_17 Op = 0x2d4 Vars = (object)
		EVENT_30 Op = 0x2e4 Vars = (object, object, bool)
		EVENT_6 Op = 0x2fc Vars = ()
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x316 Vars = ()
		EVENT_7 Op = 0x385 Vars = (int)
		EVENT_41 Op = 0x3c0 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool, bool) Params = 0
		EVENT_6 Op = 0x3f7 Vars = ()
		EVENT_7 Op = 0x469 Vars = (int)
		EVENT_41 Op = 0x4a4 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool, bool) Params = 0
		EVENT_7 Op = 0x4d9 Vars = (int)
		EVENT_17 Op = 0x4ee Vars = (object)
		EVENT_6 Op = 0x4fe Vars = ()
		EVENT_41 Op = 0x5a8 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x5ce Vars = (int)
		EVENT_17 Op = 0x5df Vars = (object)
		EVENT_6 Op = 0x5f5 Vars = ()
		EVENT_41 Op = 0x69f Vars = (object)
	GTASK_9 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x6be Vars = (object)
		EVENT_17 Op = 0x6c7 Vars = (object)
		EVENT_30 Op = 0x6dd Vars = (object, object, bool)
		EVENT_6 Op = 0x6f8 Vars = ()
		EVENT_7 Op = 0x72a Vars = (int)
	GTASK_10 Vars = (bool) Params = 0
		EVENT_7 Op = 0x7d1 Vars = (int)
		EVENT_0 Op = 0x7e3 Vars = (object)
		EVENT_17 Op = 0x7ed Vars = (object)
		EVENT_30 Op = 0x805 Vars = (object, object, bool)
		EVENT_6 Op = 0x821 Vars = ()
	GTASK_11 Vars = (bool) Params = 1
		EVENT_0 Op = 0x85e Vars = (object)
		EVENT_17 Op = 0x867 Vars = (object)
		EVENT_30 Op = 0x87d Vars = (object, object, bool)
		EVENT_6 Op = 0x898 Vars = ()
		EVENT_7 Op = 0x909 Vars = (int)
		EVENT_10 Op = 0x91a Vars = (object)
		EVENT_41 Op = 0x925 Vars = (object)
	GTASK_12 Vars = (bool) Params = 0
		EVENT_17 Op = 0x937 Vars = (object)
		EVENT_30 Op = 0x94d Vars = (object, object, bool)
		EVENT_6 Op = 0x968 Vars = ()
	GTASK_13 Vars = (bool, object, bool) Params = 0
		EVENT_0 Op = 0x9ab Vars = (object)
		EVENT_17 Op = 0x9b5 Vars = (object)
		EVENT_30 Op = 0x9cb Vars = (object, object, bool)
		EVENT_6 Op = 0x9e6 Vars = ()
		EVENT_7 Op = 0xa55 Vars = (int)
		EVENT_10 Op = 0xa67 Vars = (object)
		EVENT_41 Op = 0xa72 Vars = (object)
	GTASK_14  Params = 1
		EVENT_6 Op = 0xa8f Vars = ()
		EVENT_0 Op = 0xaa6 Vars = (object)
		EVENT_22 Op = 0xb25 Vars = (object, int, float, float)
		EVENT_16 Op = 0xb27 Vars = (object, string)
		EVENT_41 Op = 0xb29 Vars = (object)
	GTASK_15  Params = 0
		EVENT_26 Op = 0xb3d Vars = (string)
		EVENT_5 Op = 0xb49 Vars = ()

Events:
EVENT_26 Op = 0xec2 Vars = (string)
EVENT_22 Op = 0xf1e Vars = (object, int, float, float)
EVENT_43 Op = 0xf26 Vars = (object, int, float, float, cvector, cvector)
EVENT_16 Op = 0xf30 Vars = (object, string)
EVENT_41 Op = 0xf69 Vars = (object)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc4a

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe85

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe83

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe87

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe89

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xe36

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
0x41: Call2 0xc8e

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
0x4f: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xd9c

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x6e; Pop(1)

0x55: PushEmpty(object, object)
0x56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x58: Call2 0xd4e

0x59: Pop(2)
0x5a: PushEmpty(string)
0x5b: Stack[-1] = "Neutral"
0x5c: Call2 0xc0

0x5d: Pop(1)
0x5e: Push((int) 530322)
0x5f: @@ SetMessage(Stack[-1])
0x60: Pop(1)
0x61: @@ ClearReplies()
0x62: Pop(0)
0x63: Push((int) 530323)
0x64: Push((int) 31711)
0x65: Push((int) 31710)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 531020)
0x69: Push((int) 32350)
0x6a: Push((int) 32349)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0xa2

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0xda8

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x82; Pop(1)

0x73: PushEmpty(string)
0x74: Stack[-1] = "Neutral"
0x75: Call2 0xc0

0x76: Pop(1)
0x77: Push((int) 530326)
0x78: @@ SetMessage(Stack[-1])
0x79: Pop(1)
0x7a: @@ ClearReplies()
0x7b: Pop(0)
0x7c: Push((int) 530327)
0x7d: Push((int) -1)
0x7e: Push((int) 31714)
0x7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80: Pop(3)
0x81: GOTO 0xa2

0x82: PushEmpty(string)
0x83: Stack[-1] = "Neutral"
0x84: Call2 0xc0

0x85: Pop(1)
0x86: Push((int) 530270)
0x87: @@ SetMessage(Stack[-1])
0x88: Pop(1)
0x89: @@ ClearReplies()
0x8a: Pop(0)
0x8b: Push((int) 530271)
0x8c: Push((int) -1)
0x8d: Push((int) 31661)
0x8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f: Pop(3)
0x90: Push((int) 530273)
0x91: Push((int) -1)
0x92: Push((int) 31663)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: Push((int) 530274)
0x96: Push((int) -1)
0x97: Push((int) 31664)
0x98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99: Pop(3)
0x9a: Push((int) 530272)
0x9b: Push((int) -1)
0x9c: Push((int) 31662)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: GOTO 0xa2

0xa0: Return(); Pop(0)

0xa1: GOTO 0x4e

0xa2: PushEmpty(bool)
0xa3: Call2 0xe8b

0xa4: Pop(0)
0xa5: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xa6: @ lshWaitForAnimEnd()
0xa7: Pop(0)
0xa8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: GOTO 0xb0

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xad: Call2 0xc9f

0xae: Pop(1)
0xaf: GOTO 0xa6

0xb0: GOTO 0xbf

0xb1: Push("all")
0xb2: Push("idle")
0xb3: @ PlayAnimation(Stack[-2], Stack[-1])
0xb4: Pop(2)
0xb5: @ WaitForAnimEnd()
0xb6: Pop(0)
0xb7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: GOTO 0xbf

0xba: Push("all")
0xbb: Push("idle")
0xbc: @ PlayAnimation(Stack[-2], Stack[-1])
0xbd: Pop(2)
0xbe: GOTO 0xb5

0xbf: Return(); Pop(0)

0xc0: PushEmpty()
0xc1: PushEmpty(bool)
0xc2: Call2 0xe8b

0xc3: Pop(0)
0xc4: Pop(1); Push((bool) Stack[-1] == 0)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Return(); Pop(0)

0xc7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc8: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc9: Return(); Pop(0)

0xca: PushEmpty(string, bool)
0xcb: Stack[-2] = Stack[-3]
0xcc: Push("")
0xcd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xcf: Stack[-1] = (bool) 0
0xd0: GOTO 0xd2

0xd1: Stack[-1] = (bool) 1
0xd2: Call2 0xcaf

0xd3: Pop(2)
0xd4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd5: Return(); Pop(0)

0xd6: PushEmpty()
0xd7: Push((int) 1)
0xd8: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0xd9: PushEmpty()
0xda: Call2 0xcc9

0xdb: Pop(0)
0xdc: Push((int) 31712)
0xdd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xde: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xdf: PushEmpty(object, object)
0xe0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe2: Call2 0xd3f

0xe3: Pop(2)
0xe4: PushEmpty(object, object)
0xe5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe7: Call2 0xd54

0xe8: Pop(2)
0xe9: PushEmpty(object, object)
0xea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xec: Call2 0xd8c

0xed: Pop(2)
0xee: Push((int) 31714)
0xef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf0: IF (Stack[-1] == 0) GOTO 0xfb; Pop(1)

0xf1: PushEmpty(object, object)
0xf2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf4: Call2 0xd82

0xf5: Pop(2)
0xf6: PushEmpty(object, object)
0xf7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf9: Call2 0xd87

0xfa: Pop(2)
0xfb: Push((int) 31661)
0xfc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: PushEmpty(object, object)
0xff: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x100: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x101: Call2 0xd44

0x102: Pop(2)
0x103: Push((int) 31663)
0x104: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x106: PushEmpty(object, object)
0x107: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x108: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x109: Call2 0xd3f

0x10a: Pop(2)
0x10b: Push((int) 31664)
0x10c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10d: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x10e: PushEmpty(object, object)
0x10f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x110: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x111: Call2 0xd49

0x112: Pop(2)
0x113: Push((int) 31709)
0x114: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x116: PushEmpty(bool, object)
0x117: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x118: Call2 0xd9c

0x119: Pop(1)
0x11a: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x11b: PushEmpty(object, object)
0x11c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x11e: Call2 0xd4e

0x11f: Pop(2)
0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0xc0

0x123: Pop(1)
0x124: Push((int) 530322)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 530323)
0x12a: Push((int) 31711)
0x12b: Push((int) 31710)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 531020)
0x12f: Push((int) 32350)
0x130: Push((int) 32349)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: PushEmpty(bool, object)
0x135: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x136: Call2 0xda8

0x137: Pop(1)
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xc0

0x13c: Pop(1)
0x13d: Push((int) 530326)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 530327)
0x143: Push((int) -1)
0x144: Push((int) 31714)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0xc0

0x14b: Pop(1)
0x14c: Push((int) 530270)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 530271)
0x152: Push((int) -1)
0x153: Push((int) 31661)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Push((int) 530273)
0x157: Push((int) -1)
0x158: Push((int) 31663)
0x159: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15a: Pop(3)
0x15b: Push((int) 530274)
0x15c: Push((int) -1)
0x15d: Push((int) 31664)
0x15e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15f: Pop(3)
0x160: Push((int) 530272)
0x161: Push((int) -1)
0x162: Push((int) 31662)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Return(); Pop(0)

0x166: Push((int) 32350)
0x167: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x169: PushEmpty(string)
0x16a: Stack[-1] = "Neutral"
0x16b: Call2 0xc0

0x16c: Pop(1)
0x16d: Push((int) 531021)
0x16e: @@ SetMessage(Stack[-1])
0x16f: Pop(1)
0x170: @@ ClearReplies()
0x171: Pop(0)
0x172: Push((int) 531023)
0x173: Push((int) 31711)
0x174: Push((int) 32352)
0x175: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x176: Pop(3)
0x177: Return(); Pop(0)

0x178: Push((int) 31711)
0x179: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17a: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x17b: PushEmpty(string)
0x17c: Stack[-1] = "Neutral"
0x17d: Call2 0xc0

0x17e: Pop(1)
0x17f: Push((int) 530324)
0x180: @@ SetMessage(Stack[-1])
0x181: Pop(1)
0x182: @@ ClearReplies()
0x183: Pop(0)
0x184: Push((int) 530325)
0x185: Push((int) -1)
0x186: Push((int) 31712)
0x187: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x188: Pop(3)
0x189: Return(); Pop(0)

0x18a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18b: PushEmpty(bool)
0x18c: Call2 0xe8b

0x18d: Pop(0)
0x18e: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x18f: @ lshStopAnimation()
0x190: Pop(0)
0x191: GOTO 0x194

0x192: @ StopAnimation()
0x193: Pop(0)
0x194: Return(); Pop(0)

0x195: GOTO 0xd7

0x196: Return(); Pop(0)

0x197: Push(GlobalVars[2])
0x198: Stack[-1] = (int) 0
0x199: GlobalVars[2] = Stack[-1]; Pop(1)
0x19a: Push(GlobalVars[5])
0x19b: Stack[-1] = (int) 1
0x19c: GlobalVars[5] = Stack[-1]; Pop(1)
0x19d: Push((bool) 1)
0x19e: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x19f: Push((int) 0)
0x1a0: Push(GlobalVars[2])
0x1a1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1a3: PushEmpty()
0x1a4: Push(-0, 0); TaskCall(15)
0x1a5: Call2 0xb2b

0x1a6: Pop(-0, 0); TaskReturn
0x1a7: Pop(0)
0x1a8: PushEmpty(bool, int)
0x1a9: Push(GlobalVars[5])
0x1aa: Stack[-2] = Stack[-1]
0x1ab: Pop(1)
0x1ac: Call2 0xeca

0x1ad: Pop(1)
0x1ae: Pop(1); Push((bool) Stack[-1] == 0)
0x1af: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b0: PushEmpty(bool, int)
0x1b1: Stack[-1] = (int) 2
0x1b2: Call2 0xeca

0x1b3: Pop(2)
0x1b4: GOTO 0x27d

0x1b5: Push((int) 1)
0x1b6: Push(GlobalVars[2])
0x1b7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1b9: PushEmpty()
0x1ba: Push(-0, 0); TaskCall(3)
0x1bb: Call2 0x281

0x1bc: Pop(-0, 0); TaskReturn
0x1bd: Pop(0)
0x1be: Push((int) 1)
0x1bf: Push(GlobalVars[2])
0x1c0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c7; Pop(1)

0x1c2: PushEmpty()
0x1c3: Push(-0, 5); TaskCall(9)
0x1c4: Call2 0x6b8

0x1c5: Pop(-0, 5); TaskReturn
0x1c6: Pop(0)
0x1c7: GOTO 0x27d

0x1c8: Push((int) 2)
0x1c9: Push(GlobalVars[2])
0x1ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d2; Pop(1)

0x1cc: PushEmpty()
0x1cd: Push(-0, 3); TaskCall(13)
0x1ce: Call2 0x98b

0x1cf: Pop(-0, 3); TaskReturn
0x1d0: Pop(0)
0x1d1: GOTO 0x27d

0x1d2: Push((int) 3)
0x1d3: Push(GlobalVars[2])
0x1d4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1d6: PushEmpty()
0x1d7: Push(-0, 0); TaskCall(3)
0x1d8: Call2 0x281

0x1d9: Pop(-0, 0); TaskReturn
0x1da: Pop(0)
0x1db: Push((int) 3)
0x1dc: Push(GlobalVars[2])
0x1dd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty()
0x1e0: Push(-0, 1); TaskCall(10)
0x1e1: Call2 0x7a5

0x1e2: Pop(-0, 1); TaskReturn
0x1e3: Pop(0)
0x1e4: GOTO 0x27d

0x1e5: Push((int) 8)
0x1e6: Push(GlobalVars[2])
0x1e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1e8: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e9: PushEmpty()
0x1ea: Push(-0, 4); TaskCall(6)
0x1eb: Call2 0x3d9

0x1ec: Pop(-0, 4); TaskReturn
0x1ed: Pop(0)
0x1ee: GOTO 0x27d

0x1ef: Push((int) 4)
0x1f0: Push(GlobalVars[2])
0x1f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f3: PushEmpty()
0x1f4: Push(-0, 4); TaskCall(7)
0x1f5: Call2 0x4bd

0x1f6: Pop(-0, 4); TaskReturn
0x1f7: Pop(0)
0x1f8: GOTO 0x27d

0x1f9: Push((int) 5)
0x1fa: Push(GlobalVars[2])
0x1fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1fc: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x1fd: PushEmpty(bool)
0x1fe: Push(-1, 1); TaskCall(11)
0x1ff: Call2 0x82a

0x200: Pop(-1, 1); TaskReturn
0x201: Pop(0)
0x202: Pop(1); Push((bool) Stack[-1] == 0)
0x203: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x204: Push((int) 5)
0x205: Push(GlobalVars[2])
0x206: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x207: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x208: PushEmpty()
0x209: Push(-0, 1); TaskCall(12)
0x20a: Call2 0x932

0x20b: Pop(-0, 1); TaskReturn
0x20c: Pop(0)
0x20d: Push((int) 5)
0x20e: Push(GlobalVars[2])
0x20f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x215; Pop(1)

0x211: PushEmpty(bool, int)
0x212: Stack[-1] = (int) 1
0x213: Call2 0xeca

0x214: Pop(2)
0x215: Push((int) 5)
0x216: Push(GlobalVars[2])
0x217: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x218: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x219: PushEmpty()
0x21a: Push(-0, 1); TaskCall(12)
0x21b: Call2 0x932

0x21c: Pop(-0, 1); TaskReturn
0x21d: Pop(0)
0x21e: Push((int) 5)
0x21f: Push(GlobalVars[2])
0x220: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x221: IF (Stack[-1] == 0) GOTO 0x226; Pop(1)

0x222: PushEmpty(bool, int)
0x223: Stack[-1] = (int) 2
0x224: Call2 0xeca

0x225: Pop(2)
0x226: GOTO 0x27d

0x227: Push((int) 6)
0x228: Push(GlobalVars[2])
0x229: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x234; Pop(1)

0x22b: PushEmpty(object)
0x22c: Push(GlobalVars[3])
0x22d: Stack[-2] = Stack[-1]
0x22e: Pop(1)
0x22f: Push(-1, 3); TaskCall(5)
0x230: Call2 0x305

0x231: Pop(-1, 3); TaskReturn
0x232: Pop(1)
0x233: GOTO 0x27d

0x234: Push((int) 7)
0x235: Push(GlobalVars[2])
0x236: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x238: PushEmpty(object)
0x239: Push(GlobalVars[4])
0x23a: Stack[-2] = Stack[-1]
0x23b: Pop(1)
0x23c: Push(-1, 3); TaskCall(8)
0x23d: Call2 0x5c1

0x23e: Pop(-1, 3); TaskReturn
0x23f: Pop(1)
0x240: Push((int) 7)
0x241: Push(GlobalVars[2])
0x242: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x243: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x244: PushEmpty(bool)
0x245: Stack[-1] = (bool) 1
0x246: PushEmpty(bool, object)
0x247: Push(GlobalVars[4])
0x248: Stack[-2] = Stack[-1]
0x249: Pop(1)
0x24a: Call2 0xb9c

0x24b: Pop(1)
0x24c: Pop(1); Push((bool) Stack[-1] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x24e: PushEmpty(float, object)
0x24f: Push(GlobalVars[4])
0x250: Stack[-2] = Stack[-1]
0x251: Pop(1)
0x252: Call2 0xb5a

0x253: Pop(1)
0x254: Push((float)1000000.0)
0x255: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 0
0x258: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x259: PushEmpty(bool, object)
0x25a: Push(GlobalVars[4])
0x25b: Stack[-2] = Stack[-1]
0x25c: Pop(1)
0x25d: Call2 0xb9c

0x25e: Pop(1)
0x25f: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x260: PushEmpty(object)
0x261: Push(GlobalVars[4])
0x262: Stack[-2] = Stack[-1]
0x263: Pop(1)
0x264: Push(-1, 0); TaskCall(4)
0x265: Call2 0x2c5

0x266: Pop(-1, 0); TaskReturn
0x267: Pop(1)
0x268: Push((int) 7)
0x269: Push(GlobalVars[2])
0x26a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x26c: PushEmpty()
0x26d: Push(-0, 1); TaskCall(12)
0x26e: Call2 0x932

0x26f: Pop(-0, 1); TaskReturn
0x270: Pop(0)
0x271: Push((int) 7)
0x272: Push(GlobalVars[2])
0x273: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x274: IF (Stack[-1] == 0) GOTO 0x279; Pop(1)

0x275: PushEmpty(bool, int)
0x276: Stack[-1] = (int) 1
0x277: Call2 0xeca

0x278: Pop(2)
0x279: GOTO 0x27d

0x27a: Push("Unknown FSM state")
0x27b: @ Trace(Stack[-1])
0x27c: Pop(1)
0x27d: @ sync()
0x27e: Pop(0)
0x27f: GOTO 0x19d

0x280: Return(); Pop(0)

0x281: PushEmpty(object, object)
0x282: Push("player")
0x283: @ FindActor(Stack[-2], Stack[-1])
0x284: Pop(1)
0x285: Pop(0); Push((bool) Stack[-1] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Return(); Pop(2)

0x288: PushEmpty(bool, object)
0x289: Stack[-1] = Stack[-3]
0x28a: Call2 0xbbe

0x28b: Pop(2)
0x28c: Return(); Pop(2)

0x28d: Stack[-1] = 0
0x28e: PushEmpty()
0x28f: PushEmpty(bool, object)
0x290: Stack[-1] = Stack[-3]
0x291: Call2 0xf3d

0x292: Pop(2)
0x293: Return(); Pop(0)

0x294: PushEmpty()
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[-3]
0x297: Call2 0xb62

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x29f; Pop(1)

0x29a: PushEmpty(bool, int)
0x29b: Stack[-1] = (int) 4
0x29c: Call2 0xeca

0x29d: Pop(2)
0x29e: GOTO 0x2a3

0x29f: PushEmpty(object)
0x2a0: Stack[-1] = Stack[-2]
0x2a1: Call2 0xf08

0x2a2: Pop(1)
0x2a3: Return(); Pop(0)

0x2a4: PushEmpty()
0x2a5: PushEmpty(bool)
0x2a6: Stack[-1] = (bool) 1
0x2a7: PushEmpty(bool, object)
0x2a8: Stack[-1] = Stack[-5]
0x2a9: Call2 0xb9c

0x2aa: Pop(1)
0x2ab: Pop(1); Push((bool) Stack[-1] == 0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2ad: PushEmpty(float, object)
0x2ae: Stack[-1] = Stack[-5]
0x2af: Call2 0xb5a

0x2b0: Pop(1)
0x2b1: Push((float)1000000.0)
0x2b2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b4: Stack[-1] = (bool) 0
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(object)
0x2b8: Stack[-1] = Stack[-3]
0x2b9: Call2 0xf13

0x2ba: Pop(1)
0x2bb: Return(); Pop(0)

0x2bc: @ Stop()
0x2bd: Pop(0)
0x2be: @ StopGroup0()
0x2bf: Pop(0)
0x2c0: PushEmpty(bool, int)
0x2c1: Stack[-1] = (int) 0
0x2c2: Call2 0xeca

0x2c3: Pop(2)
0x2c4: Return(); Pop(0)

0x2c5: PushEmpty()
0x2c6: Pop(0); Push((bool) Stack[-1] == 0)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(bool, object)
0x2ca: Stack[-1] = Stack[-3]
0x2cb: Call2 0xbbe

0x2cc: Pop(2)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty()
0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[-3]
0x2d1: Call2 0xf3d

0x2d2: Pop(2)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty()
0x2d5: PushEmpty(bool, object)
0x2d6: Stack[-1] = Stack[-3]
0x2d7: Call2 0xb62

0x2d8: Pop(1)
0x2d9: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2da: PushEmpty(bool, int)
0x2db: Stack[-1] = (int) 4
0x2dc: Call2 0xeca

0x2dd: Pop(2)
0x2de: GOTO 0x2e3

0x2df: PushEmpty(object)
0x2e0: Stack[-1] = Stack[-2]
0x2e1: Call2 0xf08

0x2e2: Pop(1)
0x2e3: Return(); Pop(0)

0x2e4: PushEmpty()
0x2e5: PushEmpty(bool)
0x2e6: Stack[-1] = (bool) 1
0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[-5]
0x2e9: Call2 0xb9c

0x2ea: Pop(1)
0x2eb: Pop(1); Push((bool) Stack[-1] == 0)
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2ed: PushEmpty(float, object)
0x2ee: Stack[-1] = Stack[-5]
0x2ef: Call2 0xb5a

0x2f0: Pop(1)
0x2f1: Push((float)1000000.0)
0x2f2: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f5; Pop(1)

0x2f4: Stack[-1] = (bool) 0
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Return(); Pop(0)

0x2f7: PushEmpty(object)
0x2f8: Stack[-1] = Stack[-3]
0x2f9: Call2 0xf13

0x2fa: Pop(1)
0x2fb: Return(); Pop(0)

0x2fc: @ Stop()
0x2fd: Pop(0)
0x2fe: @ StopGroup0()
0x2ff: Pop(0)
0x300: PushEmpty(bool, int)
0x301: Stack[-1] = (int) 0
0x302: Call2 0xeca

0x303: Pop(2)
0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[-3]
0x308: Call2 0xb9c

0x309: Pop(1)
0x30a: Pop(1); Push((bool) Stack[-1] == 0)
0x30b: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x30c: PushEmpty(bool, int)
0x30d: Stack[-1] = (int) 1
0x30e: Call2 0xeca

0x30f: Pop(2)
0x310: Return(); Pop(0)

0x311: PushEmpty(object)
0x312: Stack[-1] = Stack[-2]
0x313: Call2 0x33c

0x314: Pop(1)
0x315: Return(); Pop(0)

0x316: PushEmpty()
0x317: Call2 0x3b9

0x318: Pop(0)
0x319: PushEmpty(bool, int)
0x31a: Stack[-1] = (int) 0
0x31b: Call2 0xeca

0x31c: Pop(2)
0x31d: Return(); Pop(0)

0x31e: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x31f: @ GetPosition(Stack[-6])
0x320: Pop(0)
0x321: @@ GetPosition(Stack[-5])
0x322: Pop(0)
0x323: @ GetDirection(Stack[-4])
0x324: Pop(0)
0x325: PushEmpty(cvector, cvector)
0x326: PushEmpty(cvector, cvector)
0x327: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x328: Call2 0xcff

0x329: Pop(1)
0x32a: Push((float)0.75)
0x32b: Pop(1); Push(Stack[-8] * Stack[-1]);
0x32c: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x32d: Call2 0xcff

0x32e: Stack[-5] = Stack[-2]
0x32f: Pop(2)
0x330: Push((int) 32)
0x331: Push((float)7000.0)
0x332: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x333: Pop(2)
0x334: Push((int) 100)
0x335: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x336: Push((int) 0)
0x337: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x339: Stack[-1] = (int) 0
0x33a: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x33b: Return(); Pop(12)

0x33c: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x33d: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x33e: PushEmpty(cvector, float)
0x33f: Stack[-1] = (float) 1.74533
0x340: Call2 0x31e

0x341: Stack[-7] = Stack[-2]
0x342: Pop(2)
0x343: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x344: Push((float)2500.0)
0x345: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x346: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x347: PushEmpty(cvector, float)
0x348: Stack[-1] = (float) 2.61799
0x349: Call2 0x31e

0x34a: Stack[-7] = Stack[-2]
0x34b: Pop(2)
0x34c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x34d: Push((float)2500.0)
0x34e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x34f: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x350: Push("Can't retreat, distance: ")
0x351: Pop(0); Push(Sqrt(Stack[-5]))
0x352: Pop(2); Push(Stack[-2] + Stack[-1]);
0x353: @ Trace(Stack[-1])
0x354: Pop(1)
0x355: Push((float)0.5)
0x356: @ Sleep(Stack[-1])
0x357: Pop(1)
0x358: Return(); Pop(10)

0x359: Push(CvectorIndex(Stack[-5], 0))
0x35a: Push(CvectorIndex(Stack[-6], 2))
0x35b: @ Rotate(Stack[-2], Stack[-1])
0x35c: Pop(2)
0x35d: PushEmpty(cvector)
0x35e: Call2 0xb4e

0x35f: Pop(0)
0x360: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x361: Push((int) 120)
0x362: Push((float)0.5)
0x363: @ SetTimer(Stack[-2], Stack[-1])
0x364: Pop(2)
0x365: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x366: Push((int) 1)
0x367: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x368: Pop(1)
0x369: Push(Stack[-3])
0x36a: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x36b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: GOTO 0x384

0x36e: GOTO 0x382

0x36f: PushEmpty(cvector, float)
0x370: Stack[-1] = (float) 2.61799
0x371: Call2 0x31e

0x372: Stack[-4] = Stack[-2]
0x373: Pop(2)
0x374: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x375: Push((float)2500.0)
0x376: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x378: PushEmpty(cvector)
0x379: Call2 0xb4e

0x37a: Pop(0)
0x37b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x37c: Push((int) 120)
0x37d: Push((float)0.5)
0x37e: @ SetTimer(Stack[-2], Stack[-1])
0x37f: Pop(2)
0x380: GOTO 0x382

0x381: GOTO 0x384

0x382: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x383: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x384: Return(); Pop(10)

0x385: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x386: Push((int) 120)
0x387: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: Return(); Pop(8)

0x38a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x38b: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x38c: @ Stop()
0x38d: Pop(0)
0x38e: Push((int) 1)
0x38f: @ KillTimer(Stack[-1])
0x390: Pop(1)
0x391: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x392: GOTO 0x3b8

0x393: @ GetDirection(Stack[-4])
0x394: Pop(0)
0x395: Push((float)7000.0)
0x396: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x397: Pop(1)
0x398: PushEmpty(cvector, float)
0x399: Stack[-1] = (float) 1.74533
0x39a: Call2 0x31e

0x39b: Stack[-4] = Stack[-2]
0x39c: Pop(2)
0x39d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x39e: PushEmpty(bool)
0x39f: Stack[-1] = (bool) 0
0x3a0: Push((float)2500.0)
0x3a1: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3a3: PushEmpty(bool)
0x3a4: Stack[-1] = (bool) 1
0x3a5: Pop(0); Push(Stack[-5] * Stack[-5]);
0x3a6: Push((float)2.25)
0x3a7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x3a8: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x3a9: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3aa: PushEmpty(bool)
0x3ab: Call2 0x3c9

0x3ac: Pop(0)
0x3ad: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ae: Stack[-1] = (bool) 0
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: Stack[-1] = (bool) 1
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b2: @ Stop()
0x3b3: Pop(0)
0x3b4: PushEmpty(cvector)
0x3b5: Call2 0xb4e

0x3b6: Pop(0)
0x3b7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x3b8: Return(); Pop(8)

0x3b9: @ Stop()
0x3ba: Pop(0)
0x3bb: Push((int) 120)
0x3bc: @ KillTimer(Stack[-1])
0x3bd: Pop(1)
0x3be: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x3bf: Return(); Pop(0)

0x3c0: PushEmpty()
0x3c1: PushEmpty()
0x3c2: Call2 0x3b9

0x3c3: Pop(0)
0x3c4: PushEmpty(object)
0x3c5: Stack[-1] = Stack[-2]
0x3c6: Call2 0xf69

0x3c7: Pop(1)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(cvector, cvector, cvector, cvector)
0x3ca: @ GetDirection(Stack[-2])
0x3cb: Pop(0)
0x3cc: PushEmpty(cvector, object)
0x3cd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ce: Call2 0xb53

0x3cf: Stack[-3] = Stack[-2]
0x3d0: Pop(2)
0x3d1: PushEmpty(float, cvector, cvector)
0x3d2: Stack[-2] = Stack[-5]
0x3d3: Stack[-1] = Stack[-4]
0x3d4: Call2 0xd09

0x3d5: Pop(2)
0x3d6: Push((float)-0.34202)
0x3d7: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x3d8: Return(); Pop(4)

0x3d9: PushEmpty(object, object)
0x3da: Push((bool) 1)
0x3db: IF (Stack[-1] == 0) GOTO 0x3f6; Pop(1)

0x3dc: Push("player")
0x3dd: @ FindActor(Stack[-2], Stack[-1])
0x3de: Pop(1)
0x3df: PushEmpty(bool, object)
0x3e0: Stack[-1] = Stack[-3]
0x3e1: Call2 0xb9c

0x3e2: Pop(1)
0x3e3: Pop(1); Push((bool) Stack[-1] == 0)
0x3e4: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3e5: Push((int) 3)
0x3e6: @ Sleep(Stack[-1])
0x3e7: Pop(1)
0x3e8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3e9: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3ea: GOTO 0x3f6

0x3eb: GOTO 0x3ed

0x3ec: GOTO 0x3da

0x3ed: PushEmpty(object)
0x3ee: Stack[-1] = Stack[-2]
0x3ef: Call2 0x420

0x3f0: Pop(1)
0x3f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: GOTO 0x3f6

0x3f4: Stack[-1] = 0
0x3f5: GOTO 0x3da

0x3f6: Return(); Pop(2)

0x3f7: @ StopGroup0()
0x3f8: Pop(0)
0x3f9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x3fa: PushEmpty()
0x3fb: Call2 0x49d

0x3fc: Pop(0)
0x3fd: PushEmpty(bool, int)
0x3fe: Stack[-1] = (int) 0
0x3ff: Call2 0xeca

0x400: Pop(2)
0x401: Return(); Pop(0)

0x402: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x403: @ GetPosition(Stack[-6])
0x404: Pop(0)
0x405: @@ GetPosition(Stack[-5])
0x406: Pop(0)
0x407: @ GetDirection(Stack[-4])
0x408: Pop(0)
0x409: PushEmpty(cvector, cvector)
0x40a: PushEmpty(cvector, cvector)
0x40b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x40c: Call2 0xcff

0x40d: Pop(1)
0x40e: Push((float)0.75)
0x40f: Pop(1); Push(Stack[-8] * Stack[-1]);
0x410: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x411: Call2 0xcff

0x412: Stack[-5] = Stack[-2]
0x413: Pop(2)
0x414: Push((int) 32)
0x415: Push((float)7000.0)
0x416: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x417: Pop(2)
0x418: Push((int) 100)
0x419: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x41a: Push((int) 0)
0x41b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x41c: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x41d: Stack[-1] = (int) 0
0x41e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x41f: Return(); Pop(12)

0x420: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x421: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x422: PushEmpty(cvector, float)
0x423: Stack[-1] = (float) 1.74533
0x424: Call2 0x402

0x425: Stack[-7] = Stack[-2]
0x426: Pop(2)
0x427: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x428: Push((float)2500.0)
0x429: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x42a: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x42b: PushEmpty(cvector, float)
0x42c: Stack[-1] = (float) 2.61799
0x42d: Call2 0x402

0x42e: Stack[-7] = Stack[-2]
0x42f: Pop(2)
0x430: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x431: Push((float)2500.0)
0x432: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x434: Push("Can't retreat, distance: ")
0x435: Pop(0); Push(Sqrt(Stack[-5]))
0x436: Pop(2); Push(Stack[-2] + Stack[-1]);
0x437: @ Trace(Stack[-1])
0x438: Pop(1)
0x439: Push((float)0.5)
0x43a: @ Sleep(Stack[-1])
0x43b: Pop(1)
0x43c: Return(); Pop(10)

0x43d: Push(CvectorIndex(Stack[-5], 0))
0x43e: Push(CvectorIndex(Stack[-6], 2))
0x43f: @ Rotate(Stack[-2], Stack[-1])
0x440: Pop(2)
0x441: PushEmpty(cvector)
0x442: Call2 0xb4e

0x443: Pop(0)
0x444: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x445: Push((int) 120)
0x446: Push((float)0.5)
0x447: @ SetTimer(Stack[-2], Stack[-1])
0x448: Pop(2)
0x449: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x44a: Push((int) 1)
0x44b: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x44c: Pop(1)
0x44d: Push(Stack[-3])
0x44e: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x44f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x450: IF (Stack[-1] == 0) GOTO 0x453; Pop(1)

0x451: GOTO 0x468

0x452: GOTO 0x466

0x453: PushEmpty(cvector, float)
0x454: Stack[-1] = (float) 2.61799
0x455: Call2 0x402

0x456: Stack[-4] = Stack[-2]
0x457: Pop(2)
0x458: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x459: Push((float)2500.0)
0x45a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x465; Pop(1)

0x45c: PushEmpty(cvector)
0x45d: Call2 0xb4e

0x45e: Pop(0)
0x45f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x460: Push((int) 120)
0x461: Push((float)0.5)
0x462: @ SetTimer(Stack[-2], Stack[-1])
0x463: Pop(2)
0x464: GOTO 0x466

0x465: GOTO 0x468

0x466: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x468: Return(); Pop(10)

0x469: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x46a: Push((int) 120)
0x46b: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x46c: IF (Stack[-1] == 0) GOTO 0x46e; Pop(1)

0x46d: Return(); Pop(8)

0x46e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x470: @ Stop()
0x471: Pop(0)
0x472: Push((int) 1)
0x473: @ KillTimer(Stack[-1])
0x474: Pop(1)
0x475: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x476: GOTO 0x49c

0x477: @ GetDirection(Stack[-4])
0x478: Pop(0)
0x479: Push((float)7000.0)
0x47a: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x47b: Pop(1)
0x47c: PushEmpty(cvector, float)
0x47d: Stack[-1] = (float) 1.74533
0x47e: Call2 0x402

0x47f: Stack[-4] = Stack[-2]
0x480: Pop(2)
0x481: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x482: PushEmpty(bool)
0x483: Stack[-1] = (bool) 0
0x484: Push((float)2500.0)
0x485: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x486: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x487: PushEmpty(bool)
0x488: Stack[-1] = (bool) 1
0x489: Pop(0); Push(Stack[-5] * Stack[-5]);
0x48a: Push((float)2.25)
0x48b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x48c: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x48e: PushEmpty(bool)
0x48f: Call2 0x4ad

0x490: Pop(0)
0x491: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x492: Stack[-1] = (bool) 0
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: Stack[-1] = (bool) 1
0x495: IF (Stack[-1] == 0) GOTO 0x49c; Pop(1)

0x496: @ Stop()
0x497: Pop(0)
0x498: PushEmpty(cvector)
0x499: Call2 0xb4e

0x49a: Pop(0)
0x49b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x49c: Return(); Pop(8)

0x49d: @ Stop()
0x49e: Pop(0)
0x49f: Push((int) 120)
0x4a0: @ KillTimer(Stack[-1])
0x4a1: Pop(1)
0x4a2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4a3: Return(); Pop(0)

0x4a4: PushEmpty()
0x4a5: PushEmpty()
0x4a6: Call2 0x49d

0x4a7: Pop(0)
0x4a8: PushEmpty(object)
0x4a9: Stack[-1] = Stack[-2]
0x4aa: Call2 0xf69

0x4ab: Pop(1)
0x4ac: Return(); Pop(0)

0x4ad: PushEmpty(cvector, cvector, cvector, cvector)
0x4ae: @ GetDirection(Stack[-2])
0x4af: Pop(0)
0x4b0: PushEmpty(cvector, object)
0x4b1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4b2: Call2 0xb53

0x4b3: Stack[-3] = Stack[-2]
0x4b4: Pop(2)
0x4b5: PushEmpty(float, cvector, cvector)
0x4b6: Stack[-2] = Stack[-5]
0x4b7: Stack[-1] = Stack[-4]
0x4b8: Call2 0xd09

0x4b9: Pop(2)
0x4ba: Push((float)-0.34202)
0x4bb: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x4bc: Return(); Pop(4)

0x4bd: PushEmpty(object, object)
0x4be: Push("player")
0x4bf: @ FindActor(Stack[-2], Stack[-1])
0x4c0: Pop(1)
0x4c1: PushEmpty(bool, object)
0x4c2: Stack[-1] = Stack[-3]
0x4c3: Call2 0xb9c

0x4c4: Pop(1)
0x4c5: Pop(1); Push((bool) Stack[-1] == 0)
0x4c6: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4c7: PushEmpty(bool, int)
0x4c8: Stack[-1] = (int) 1
0x4c9: Call2 0xeca

0x4ca: Pop(2)
0x4cb: Return(); Pop(2)

0x4cc: Push((int) 0)
0x4cd: Push((int) 5)
0x4ce: @ SetTimer(Stack[-2], Stack[-1])
0x4cf: Pop(2)
0x4d0: PushEmpty(object)
0x4d1: Stack[-1] = Stack[-2]
0x4d2: Call2 0x524

0x4d3: Pop(1)
0x4d4: Push((int) 0)
0x4d5: @ KillTimer(Stack[-1])
0x4d6: Pop(1)
0x4d7: Return(); Pop(2)

0x4d8: Stack[-1] = 0
0x4d9: PushEmpty()
0x4da: Push((int) 0)
0x4db: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4dc: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4dd: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x4de: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4df: PushEmpty()
0x4e0: Call2 0x5a1

0x4e1: Pop(0)
0x4e2: PushEmpty(bool, int)
0x4e3: Stack[-1] = (int) 1
0x4e4: Call2 0xeca

0x4e5: Pop(2)
0x4e6: GOTO 0x4e8

0x4e7: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e8: Return(); Pop(0)

0x4e9: PushEmpty(int)
0x4ea: Stack[-1] = Stack[-2]
0x4eb: Call2 0x56d

0x4ec: Pop(1)
0x4ed: Return(); Pop(0)

0x4ee: PushEmpty()
0x4ef: PushEmpty(bool, object)
0x4f0: Stack[-1] = Stack[-3]
0x4f1: Call2 0xb62

0x4f2: Pop(1)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4f6; Pop(1)

0x4f4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4f5: GOTO 0x4fd

0x4f6: PushEmpty()
0x4f7: Call2 0x5a1

0x4f8: Pop(0)
0x4f9: PushEmpty(object)
0x4fa: Stack[-1] = Stack[-2]
0x4fb: Call2 0xf08

0x4fc: Pop(1)
0x4fd: Return(); Pop(0)

0x4fe: PushEmpty()
0x4ff: Call2 0x5a1

0x500: Pop(0)
0x501: PushEmpty(bool, int)
0x502: Stack[-1] = (int) 0
0x503: Call2 0xeca

0x504: Pop(2)
0x505: Return(); Pop(0)

0x506: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x507: @ GetPosition(Stack[-6])
0x508: Pop(0)
0x509: @@ GetPosition(Stack[-5])
0x50a: Pop(0)
0x50b: @ GetDirection(Stack[-4])
0x50c: Pop(0)
0x50d: PushEmpty(cvector, cvector)
0x50e: PushEmpty(cvector, cvector)
0x50f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x510: Call2 0xcff

0x511: Pop(1)
0x512: Push((float)0.75)
0x513: Pop(1); Push(Stack[-8] * Stack[-1]);
0x514: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x515: Call2 0xcff

0x516: Stack[-5] = Stack[-2]
0x517: Pop(2)
0x518: Push((int) 32)
0x519: Push((float)7000.0)
0x51a: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x51b: Pop(2)
0x51c: Push((int) 100)
0x51d: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x51e: Push((int) 0)
0x51f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x522; Pop(1)

0x521: Stack[-1] = (int) 0
0x522: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x523: Return(); Pop(12)

0x524: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x525: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x526: PushEmpty(cvector, float)
0x527: Stack[-1] = (float) 1.74533
0x528: Call2 0x506

0x529: Stack[-7] = Stack[-2]
0x52a: Pop(2)
0x52b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x52c: Push((float)2500.0)
0x52d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x52e: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x52f: PushEmpty(cvector, float)
0x530: Stack[-1] = (float) 2.61799
0x531: Call2 0x506

0x532: Stack[-7] = Stack[-2]
0x533: Pop(2)
0x534: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x535: Push((float)2500.0)
0x536: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x541; Pop(1)

0x538: Push("Can't retreat, distance: ")
0x539: Pop(0); Push(Sqrt(Stack[-5]))
0x53a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x53b: @ Trace(Stack[-1])
0x53c: Pop(1)
0x53d: Push((float)0.5)
0x53e: @ Sleep(Stack[-1])
0x53f: Pop(1)
0x540: Return(); Pop(10)

0x541: Push(CvectorIndex(Stack[-5], 0))
0x542: Push(CvectorIndex(Stack[-6], 2))
0x543: @ Rotate(Stack[-2], Stack[-1])
0x544: Pop(2)
0x545: PushEmpty(cvector)
0x546: Call2 0xb4e

0x547: Pop(0)
0x548: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x549: Push((int) 120)
0x54a: Push((float)0.5)
0x54b: @ SetTimer(Stack[-2], Stack[-1])
0x54c: Pop(2)
0x54d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x54e: Push((int) 1)
0x54f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x550: Pop(1)
0x551: Push(Stack[-3])
0x552: IF (Stack[-1] == 0) GOTO 0x56a; Pop(1)

0x553: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x554: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x555: GOTO 0x56c

0x556: GOTO 0x56a

0x557: PushEmpty(cvector, float)
0x558: Stack[-1] = (float) 2.61799
0x559: Call2 0x506

0x55a: Stack[-4] = Stack[-2]
0x55b: Pop(2)
0x55c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x55d: Push((float)2500.0)
0x55e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x560: PushEmpty(cvector)
0x561: Call2 0xb4e

0x562: Pop(0)
0x563: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x564: Push((int) 120)
0x565: Push((float)0.5)
0x566: @ SetTimer(Stack[-2], Stack[-1])
0x567: Pop(2)
0x568: GOTO 0x56a

0x569: GOTO 0x56c

0x56a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x56b: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x56c: Return(); Pop(10)

0x56d: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x56e: Push((int) 120)
0x56f: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x570: IF (Stack[-1] == 0) GOTO 0x572; Pop(1)

0x571: Return(); Pop(8)

0x572: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x573: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x574: @ Stop()
0x575: Pop(0)
0x576: Push((int) 1)
0x577: @ KillTimer(Stack[-1])
0x578: Pop(1)
0x579: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x57a: GOTO 0x5a0

0x57b: @ GetDirection(Stack[-4])
0x57c: Pop(0)
0x57d: Push((float)7000.0)
0x57e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x57f: Pop(1)
0x580: PushEmpty(cvector, float)
0x581: Stack[-1] = (float) 1.74533
0x582: Call2 0x506

0x583: Stack[-4] = Stack[-2]
0x584: Pop(2)
0x585: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x586: PushEmpty(bool)
0x587: Stack[-1] = (bool) 0
0x588: Push((float)2500.0)
0x589: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x58a: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x58b: PushEmpty(bool)
0x58c: Stack[-1] = (bool) 1
0x58d: Pop(0); Push(Stack[-5] * Stack[-5]);
0x58e: Push((float)2.25)
0x58f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x590: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x591: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x592: PushEmpty(bool)
0x593: Call2 0x5b1

0x594: Pop(0)
0x595: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x596: Stack[-1] = (bool) 0
0x597: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x598: Stack[-1] = (bool) 1
0x599: IF (Stack[-1] == 0) GOTO 0x5a0; Pop(1)

0x59a: @ Stop()
0x59b: Pop(0)
0x59c: PushEmpty(cvector)
0x59d: Call2 0xb4e

0x59e: Pop(0)
0x59f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5a0: Return(); Pop(8)

0x5a1: @ Stop()
0x5a2: Pop(0)
0x5a3: Push((int) 120)
0x5a4: @ KillTimer(Stack[-1])
0x5a5: Pop(1)
0x5a6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5a7: Return(); Pop(0)

0x5a8: PushEmpty()
0x5a9: PushEmpty()
0x5aa: Call2 0x5a1

0x5ab: Pop(0)
0x5ac: PushEmpty(object)
0x5ad: Stack[-1] = Stack[-2]
0x5ae: Call2 0xf69

0x5af: Pop(1)
0x5b0: Return(); Pop(0)

0x5b1: PushEmpty(cvector, cvector, cvector, cvector)
0x5b2: @ GetDirection(Stack[-2])
0x5b3: Pop(0)
0x5b4: PushEmpty(cvector, object)
0x5b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5b6: Call2 0xb53

0x5b7: Stack[-3] = Stack[-2]
0x5b8: Pop(2)
0x5b9: PushEmpty(float, cvector, cvector)
0x5ba: Stack[-2] = Stack[-5]
0x5bb: Stack[-1] = Stack[-4]
0x5bc: Call2 0xd09

0x5bd: Pop(2)
0x5be: Push((float)-0.34202)
0x5bf: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x5c0: Return(); Pop(4)

0x5c1: PushEmpty()
0x5c2: Push((int) 1)
0x5c3: Push((int) 3)
0x5c4: @ SetTimer(Stack[-2], Stack[-1])
0x5c5: Pop(2)
0x5c6: PushEmpty(object)
0x5c7: Stack[-1] = Stack[-2]
0x5c8: Call2 0x61b

0x5c9: Pop(1)
0x5ca: Push((int) 1)
0x5cb: @ KillTimer(Stack[-1])
0x5cc: Pop(1)
0x5cd: Return(); Pop(0)

0x5ce: PushEmpty()
0x5cf: Push((int) 1)
0x5d0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d2: PushEmpty()
0x5d3: Call2 0x698

0x5d4: Pop(0)
0x5d5: PushEmpty(bool, int)
0x5d6: Stack[-1] = (int) 1
0x5d7: Call2 0xeca

0x5d8: Pop(2)
0x5d9: Return(); Pop(0)

0x5da: PushEmpty(int)
0x5db: Stack[-1] = Stack[-2]
0x5dc: Call2 0x664

0x5dd: Pop(1)
0x5de: Return(); Pop(0)

0x5df: PushEmpty()
0x5e0: PushEmpty(bool, object)
0x5e1: Stack[-1] = Stack[-3]
0x5e2: Call2 0xb62

0x5e3: Pop(1)
0x5e4: IF (Stack[-1] == 0) GOTO 0x5ed; Pop(1)

0x5e5: PushEmpty()
0x5e6: Call2 0x698

0x5e7: Pop(0)
0x5e8: PushEmpty(bool, int)
0x5e9: Stack[-1] = (int) 4
0x5ea: Call2 0xeca

0x5eb: Pop(2)
0x5ec: GOTO 0x5f4

0x5ed: PushEmpty()
0x5ee: Call2 0x698

0x5ef: Pop(0)
0x5f0: PushEmpty(object)
0x5f1: Stack[-1] = Stack[-2]
0x5f2: Call2 0xf08

0x5f3: Pop(1)
0x5f4: Return(); Pop(0)

0x5f5: PushEmpty()
0x5f6: Call2 0x698

0x5f7: Pop(0)
0x5f8: PushEmpty(bool, int)
0x5f9: Stack[-1] = (int) 0
0x5fa: Call2 0xeca

0x5fb: Pop(2)
0x5fc: Return(); Pop(0)

0x5fd: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x5fe: @ GetPosition(Stack[-6])
0x5ff: Pop(0)
0x600: @@ GetPosition(Stack[-5])
0x601: Pop(0)
0x602: @ GetDirection(Stack[-4])
0x603: Pop(0)
0x604: PushEmpty(cvector, cvector)
0x605: PushEmpty(cvector, cvector)
0x606: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x607: Call2 0xcff

0x608: Pop(1)
0x609: Push((float)0.75)
0x60a: Pop(1); Push(Stack[-8] * Stack[-1]);
0x60b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x60c: Call2 0xcff

0x60d: Stack[-5] = Stack[-2]
0x60e: Pop(2)
0x60f: Push((int) 32)
0x610: Push((float)7000.0)
0x611: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x612: Pop(2)
0x613: Push((int) 100)
0x614: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x615: Push((int) 0)
0x616: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x618: Stack[-1] = (int) 0
0x619: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x61a: Return(); Pop(12)

0x61b: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x61c: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x61d: PushEmpty(cvector, float)
0x61e: Stack[-1] = (float) 1.74533
0x61f: Call2 0x5fd

0x620: Stack[-7] = Stack[-2]
0x621: Pop(2)
0x622: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x623: Push((float)2500.0)
0x624: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x626: PushEmpty(cvector, float)
0x627: Stack[-1] = (float) 2.61799
0x628: Call2 0x5fd

0x629: Stack[-7] = Stack[-2]
0x62a: Pop(2)
0x62b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62c: Push((float)2500.0)
0x62d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x62f: Push("Can't retreat, distance: ")
0x630: Pop(0); Push(Sqrt(Stack[-5]))
0x631: Pop(2); Push(Stack[-2] + Stack[-1]);
0x632: @ Trace(Stack[-1])
0x633: Pop(1)
0x634: Push((float)0.5)
0x635: @ Sleep(Stack[-1])
0x636: Pop(1)
0x637: Return(); Pop(10)

0x638: Push(CvectorIndex(Stack[-5], 0))
0x639: Push(CvectorIndex(Stack[-6], 2))
0x63a: @ Rotate(Stack[-2], Stack[-1])
0x63b: Pop(2)
0x63c: PushEmpty(cvector)
0x63d: Call2 0xb4e

0x63e: Pop(0)
0x63f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x640: Push((int) 120)
0x641: Push((float)0.5)
0x642: @ SetTimer(Stack[-2], Stack[-1])
0x643: Pop(2)
0x644: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x645: Push((int) 1)
0x646: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x647: Pop(1)
0x648: Push(Stack[-3])
0x649: IF (Stack[-1] == 0) GOTO 0x661; Pop(1)

0x64a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x64b: IF (Stack[-1] == 0) GOTO 0x64e; Pop(1)

0x64c: GOTO 0x663

0x64d: GOTO 0x661

0x64e: PushEmpty(cvector, float)
0x64f: Stack[-1] = (float) 2.61799
0x650: Call2 0x5fd

0x651: Stack[-4] = Stack[-2]
0x652: Pop(2)
0x653: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x654: Push((float)2500.0)
0x655: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x656: IF (Stack[-1] == 0) GOTO 0x660; Pop(1)

0x657: PushEmpty(cvector)
0x658: Call2 0xb4e

0x659: Pop(0)
0x65a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x65b: Push((int) 120)
0x65c: Push((float)0.5)
0x65d: @ SetTimer(Stack[-2], Stack[-1])
0x65e: Pop(2)
0x65f: GOTO 0x661

0x660: GOTO 0x663

0x661: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x662: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x663: Return(); Pop(10)

0x664: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x665: Push((int) 120)
0x666: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x668: Return(); Pop(8)

0x669: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x66a: IF (Stack[-1] == 0) GOTO 0x672; Pop(1)

0x66b: @ Stop()
0x66c: Pop(0)
0x66d: Push((int) 1)
0x66e: @ KillTimer(Stack[-1])
0x66f: Pop(1)
0x670: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x671: GOTO 0x697

0x672: @ GetDirection(Stack[-4])
0x673: Pop(0)
0x674: Push((float)7000.0)
0x675: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x676: Pop(1)
0x677: PushEmpty(cvector, float)
0x678: Stack[-1] = (float) 1.74533
0x679: Call2 0x5fd

0x67a: Stack[-4] = Stack[-2]
0x67b: Pop(2)
0x67c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x67d: PushEmpty(bool)
0x67e: Stack[-1] = (bool) 0
0x67f: Push((float)2500.0)
0x680: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x681: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x682: PushEmpty(bool)
0x683: Stack[-1] = (bool) 1
0x684: Pop(0); Push(Stack[-5] * Stack[-5]);
0x685: Push((float)2.25)
0x686: Pop(2); Push(Stack[-2] * Stack[-1]);
0x687: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x688: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x689: PushEmpty(bool)
0x68a: Call2 0x6a8

0x68b: Pop(0)
0x68c: IF (Stack[-1] == 0) GOTO 0x68e; Pop(1)

0x68d: Stack[-1] = (bool) 0
0x68e: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68f: Stack[-1] = (bool) 1
0x690: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x691: @ Stop()
0x692: Pop(0)
0x693: PushEmpty(cvector)
0x694: Call2 0xb4e

0x695: Pop(0)
0x696: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x697: Return(); Pop(8)

0x698: @ Stop()
0x699: Pop(0)
0x69a: Push((int) 120)
0x69b: @ KillTimer(Stack[-1])
0x69c: Pop(1)
0x69d: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x69e: Return(); Pop(0)

0x69f: PushEmpty()
0x6a0: PushEmpty()
0x6a1: Call2 0x698

0x6a2: Pop(0)
0x6a3: PushEmpty(object)
0x6a4: Stack[-1] = Stack[-2]
0x6a5: Call2 0xf69

0x6a6: Pop(1)
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty(cvector, cvector, cvector, cvector)
0x6a9: @ GetDirection(Stack[-2])
0x6aa: Pop(0)
0x6ab: PushEmpty(cvector, object)
0x6ac: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6ad: Call2 0xb53

0x6ae: Stack[-3] = Stack[-2]
0x6af: Pop(2)
0x6b0: PushEmpty(float, cvector, cvector)
0x6b1: Stack[-2] = Stack[-5]
0x6b2: Stack[-1] = Stack[-4]
0x6b3: Call2 0xd09

0x6b4: Pop(2)
0x6b5: Push((float)-0.34202)
0x6b6: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6b7: Return(); Pop(4)

0x6b8: PushEmpty(float, float)
0x6b9: Stack[-2] = (int) 300
0x6ba: Stack[-1] = (int) 100
0x6bb: Call2 0x700

0x6bc: Pop(2)
0x6bd: Return(); Pop(0)

0x6be: PushEmpty()
0x6bf: PushEmpty()
0x6c0: Call2 0x741

0x6c1: Pop(0)
0x6c2: PushEmpty(bool, object)
0x6c3: Stack[-1] = Stack[-3]
0x6c4: Call2 0xf3d

0x6c5: Pop(2)
0x6c6: Return(); Pop(0)

0x6c7: PushEmpty()
0x6c8: PushEmpty(bool, object)
0x6c9: Stack[-1] = Stack[-3]
0x6ca: Call2 0xb62

0x6cb: Pop(1)
0x6cc: IF (Stack[-1] == 0) GOTO 0x6d5; Pop(1)

0x6cd: PushEmpty()
0x6ce: Call2 0x741

0x6cf: Pop(0)
0x6d0: PushEmpty(bool, int)
0x6d1: Stack[-1] = (int) 4
0x6d2: Call2 0xeca

0x6d3: Pop(2)
0x6d4: GOTO 0x6dc

0x6d5: PushEmpty()
0x6d6: Call2 0x741

0x6d7: Pop(0)
0x6d8: PushEmpty(object)
0x6d9: Stack[-1] = Stack[-2]
0x6da: Call2 0xf08

0x6db: Pop(1)
0x6dc: Return(); Pop(0)

0x6dd: PushEmpty()
0x6de: PushEmpty(bool)
0x6df: Stack[-1] = (bool) 1
0x6e0: PushEmpty(bool, object)
0x6e1: Stack[-1] = Stack[-5]
0x6e2: Call2 0xb9c

0x6e3: Pop(1)
0x6e4: Pop(1); Push((bool) Stack[-1] == 0)
0x6e5: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e6: PushEmpty(float, object)
0x6e7: Stack[-1] = Stack[-5]
0x6e8: Call2 0xb5a

0x6e9: Pop(1)
0x6ea: Push((float)1000000.0)
0x6eb: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x6ec: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6ed: Stack[-1] = (bool) 0
0x6ee: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ef: Return(); Pop(0)

0x6f0: PushEmpty()
0x6f1: Call2 0x741

0x6f2: Pop(0)
0x6f3: PushEmpty(object)
0x6f4: Stack[-1] = Stack[-3]
0x6f5: Call2 0xf13

0x6f6: Pop(1)
0x6f7: Return(); Pop(0)

0x6f8: PushEmpty()
0x6f9: Call2 0x741

0x6fa: Pop(0)
0x6fb: PushEmpty(bool, int)
0x6fc: Stack[-1] = (int) 0
0x6fd: Call2 0xeca

0x6fe: Pop(2)
0x6ff: Return(); Pop(0)

0x700: PushEmpty()
0x701: PushEmpty(bool)
0x702: Call2 0xc45

0x703: Pop(0)
0x704: Pop(1); Push((bool) Stack[-1] == 0)
0x705: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x706: Return(); Pop(0)

0x707: Push("player")
0x708: @ FindActor(Stack[-4], Stack[-1])
0x709: Pop(1)
0x70a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x70b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x70c: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x70d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x70e: Push((int) 10)
0x70f: Push((float)1.0)
0x710: @ SetTimer(Stack[-2], Stack[-1])
0x711: Pop(2)
0x712: PushEmpty()
0x713: Call2 0x74f

0x714: Pop(0)
0x715: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x716: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x717: Push((int) 10)
0x718: @ KillTimer(Stack[-1])
0x719: Pop(1)
0x71a: Return(); Pop(0)

0x71b: PushEmpty(float, float)
0x71c: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x71d: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71e: Stack[-3] = (bool) 0
0x71f: Return(); Pop(2)

0x720: PushEmpty(float, object)
0x721: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x722: Call2 0xb5a

0x723: Pop(1)
0x724: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x725: Push( Stack[2 + Tasks[-1].StackPointer] )
0x726: IF (Stack[-1] == 0) GOTO 0x728; Pop(1)

0x727: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x728: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x729: Return(); Pop(2)

0x72a: PushEmpty()
0x72b: Push((int) 10)
0x72c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x72d: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x72e: PushEmpty(bool)
0x72f: Call2 0x71b

0x730: Pop(0)
0x731: IF (Stack[-1] == 0) GOTO 0x73a; Pop(1)

0x732: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x733: IF (Stack[-1] == 0) GOTO 0x739; Pop(1)

0x734: PushEmpty(object)
0x735: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x736: Call2 0xcbe

0x737: Pop(1)
0x738: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x739: GOTO 0x740

0x73a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x73b: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x73c: Push("head")
0x73d: @ UnlookAsync(Stack[-1])
0x73e: Pop(1)
0x73f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x740: Return(); Pop(0)

0x741: PushEmpty()
0x742: Call2 0x7a0

0x743: Pop(0)
0x744: Push((int) 10)
0x745: @ KillTimer(Stack[-1])
0x746: Pop(1)
0x747: Push( Stack[2 + Tasks[-1].StackPointer] )
0x748: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x749: Push("head")
0x74a: @ UnlookAsync(Stack[-1])
0x74b: Pop(1)
0x74c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x74d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x74e: Return(); Pop(0)

0x74f: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x750: @ WaitForAnimEnd()
0x751: Pop(0)
0x752: PushEmpty(bool)
0x753: Call2 0xc45

0x754: Pop(0)
0x755: Pop(1); Push((bool) Stack[-1] == 0)
0x756: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x757: Return(); Pop(14)

0x758: PushEmpty(int)
0x759: Call2 0xd2e

0x75a: Stack[-8] = Stack[-1]
0x75b: Pop(1)
0x75c: Stack[-6] = (int) 0
0x75d: PushEmpty(bool)
0x75e: Stack[-1] = (bool) 0
0x75f: Push((int) 5)
0x760: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x761: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x762: PushEmpty(bool)
0x763: Call2 0xc45

0x764: Pop(0)
0x765: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x766: Stack[-1] = (bool) 1
0x767: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x768: Push((int) 3)
0x769: @ irand(Stack[-6], Stack[-1])
0x76a: Pop(1)
0x76b: Push((int) 0)
0x76c: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x76d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x76e: Push(Stack[-7])
0x76f: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x770: @ irand(Stack[-4], Stack[-7])
0x771: Pop(0)
0x772: Push("all")
0x773: PushEmpty(string, int)
0x774: Stack[-1] = Stack[-7]
0x775: Call2 0xd27

0x776: Pop(1)
0x777: @ PlayAnimation(Stack[-2], Stack[-1])
0x778: Pop(2)
0x779: @ WaitForAnimEnd(Stack[-3])
0x77a: Pop(0)
0x77b: Pop(0); Push((bool) Stack[-3] == 0)
0x77c: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77d: GOTO 0x79b

0x77e: GOTO 0x790

0x77f: Push((int) 1)
0x780: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x781: IF (Stack[-1] == 0) GOTO 0x78d; Pop(1)

0x782: Push((int) 4)
0x783: @ rand(Stack[-3], Stack[-1])
0x784: Pop(1)
0x785: Push((int) 1)
0x786: Pop(1); Push(Stack[-3] + Stack[-1]);
0x787: @ Sleep(Stack[-1], Stack[-2])
0x788: Pop(1)
0x789: Pop(0); Push((bool) Stack[-1] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: GOTO 0x79b

0x78c: GOTO 0x790

0x78d: Push(Stack[-6])
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: GOTO 0x79b

0x790: PushEmpty(bool)
0x791: Call2 0x79e

0x792: Pop(0)
0x793: Pop(1); Push((bool) Stack[-1] == 0)
0x794: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x795: GOTO 0x79b

0x796: @ ResetAAS()
0x797: Pop(0)
0x798: Push((int) 1)
0x799: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x79a: GOTO 0x75d

0x79b: @ ResetAAS()
0x79c: Pop(0)
0x79d: Return(); Pop(14)

0x79e: Stack[-1] = (bool) 1
0x79f: Return(); Pop(0)

0x7a0: @ StopAnimation()
0x7a1: Pop(0)
0x7a2: @ StopGroup0()
0x7a3: Pop(0)
0x7a4: Return(); Pop(0)

0x7a5: PushEmpty(object, float, object, float)
0x7a6: Push((int) 2)
0x7a7: Push((int) 1)
0x7a8: @ SetTimer(Stack[-2], Stack[-1])
0x7a9: Pop(2)
0x7aa: Push("player")
0x7ab: @ FindActor(Stack[-3], Stack[-1])
0x7ac: Pop(1)
0x7ad: Push((int) 4)
0x7ae: @ rand(Stack[-2], Stack[-1])
0x7af: Pop(1)
0x7b0: Push((int) 1)
0x7b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x7b3: PushEmpty(object)
0x7b4: Stack[-1] = Stack[-3]
0x7b5: Call2 0xcbe

0x7b6: Pop(1)
0x7b7: Push((int) 2)
0x7b8: Pop(1); Push(Stack[-2] + Stack[-1]);
0x7b9: @ Sleep(Stack[-1])
0x7ba: Pop(1)
0x7bb: Push("head")
0x7bc: @ UnlookAsync(Stack[-1])
0x7bd: Pop(1)
0x7be: GOTO 0x7c3

0x7bf: Push((int) 2)
0x7c0: Pop(1); Push(Stack[-2] + Stack[-1]);
0x7c1: @ Sleep(Stack[-1])
0x7c2: Pop(1)
0x7c3: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c5: PushEmpty(bool, int)
0x7c6: Stack[-1] = (int) 2
0x7c7: Call2 0xeca

0x7c8: Pop(2)
0x7c9: Push((int) 2)
0x7ca: @ KillTimer(Stack[-1])
0x7cb: Pop(1)
0x7cc: Return(); Pop(4)

0x7cd: Stack[-2] = 0
0x7ce: @ StopGroup0()
0x7cf: Pop(0)
0x7d0: Return(); Pop(0)

0x7d1: PushEmpty()
0x7d2: Push((int) 2)
0x7d3: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d5: Return(); Pop(0)

0x7d6: PushEmpty(bool, object)
0x7d7: PushEmpty(object)
0x7d8: Call2 0xcf9

0x7d9: Stack[-2] = Stack[-1]
0x7da: Pop(1)
0x7db: Call2 0xf79

0x7dc: Pop(1)
0x7dd: Pop(1); Push((bool) Stack[-1] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7df: PushEmpty()
0x7e0: Call2 0x7ce

0x7e1: Pop(0)
0x7e2: Return(); Pop(0)

0x7e3: PushEmpty()
0x7e4: PushEmpty()
0x7e5: Call2 0x7ce

0x7e6: Pop(0)
0x7e7: PushEmpty(bool, object)
0x7e8: Stack[-1] = Stack[-3]
0x7e9: Call2 0xf3d

0x7ea: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x7eb: Pop(2)
0x7ec: Return(); Pop(0)

0x7ed: PushEmpty()
0x7ee: PushEmpty(bool, object)
0x7ef: Stack[-1] = Stack[-3]
0x7f0: Call2 0xb62

0x7f1: Pop(1)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7fc; Pop(1)

0x7f3: PushEmpty()
0x7f4: Call2 0x7ce

0x7f5: Pop(0)
0x7f6: PushEmpty(bool, int)
0x7f7: Stack[-1] = (int) 4
0x7f8: Call2 0xeca

0x7f9: Pop(2)
0x7fa: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x7fb: GOTO 0x804

0x7fc: PushEmpty()
0x7fd: Call2 0x7ce

0x7fe: Pop(0)
0x7ff: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x800: PushEmpty(object)
0x801: Stack[-1] = Stack[-2]
0x802: Call2 0xf08

0x803: Pop(1)
0x804: Return(); Pop(0)

0x805: PushEmpty()
0x806: PushEmpty(bool)
0x807: Stack[-1] = (bool) 1
0x808: PushEmpty(bool, object)
0x809: Stack[-1] = Stack[-5]
0x80a: Call2 0xb9c

0x80b: Pop(1)
0x80c: Pop(1); Push((bool) Stack[-1] == 0)
0x80d: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x80e: PushEmpty(float, object)
0x80f: Stack[-1] = Stack[-5]
0x810: Call2 0xb5a

0x811: Pop(1)
0x812: Push((float)1000000.0)
0x813: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x814: IF (Stack[-1] == 0) GOTO 0x816; Pop(1)

0x815: Stack[-1] = (bool) 0
0x816: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x817: Return(); Pop(0)

0x818: PushEmpty()
0x819: Call2 0x7ce

0x81a: Pop(0)
0x81b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x81c: PushEmpty(object)
0x81d: Stack[-1] = Stack[-3]
0x81e: Call2 0xf13

0x81f: Pop(1)
0x820: Return(); Pop(0)

0x821: PushEmpty()
0x822: Call2 0x7ce

0x823: Pop(0)
0x824: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x825: PushEmpty(bool, int)
0x826: Stack[-1] = (int) 0
0x827: Call2 0xeca

0x828: Pop(2)
0x829: Return(); Pop(0)

0x82a: PushEmpty(int, cvector, cvector, bool, object, bool, int, cvector, cvector, bool, object, bool)
0x82b: PushEmpty(int)
0x82c: Call2 0xe8d

0x82d: Stack[-7] = Stack[-1]
0x82e: Pop(1)
0x82f: PushEmpty(bool)
0x830: Stack[-1] = (bool) 1
0x831: Push((int) -1)
0x832: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x833: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x834: PushEmpty(bool, int)
0x835: Stack[-1] = Stack[-9]
0x836: Call2 0xeaa

0x837: Pop(1)
0x838: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x839: Stack[-1] = (bool) 0
0x83a: IF (Stack[-1] == 0) GOTO 0x841; Pop(1)

0x83b: PushEmpty(bool, int)
0x83c: Stack[-1] = (int) 1
0x83d: Call2 0xeca

0x83e: Pop(2)
0x83f: Stack[-13] = (bool) 0
0x840: Return(); Pop(12)

0x841: @ GetScene(Stack[-2])
0x842: Pop(0)
0x843: Push("pt_b9q03_bonfire")
0x844: Pop(1); Push(Stack[-1] + Stack[-7]);
0x845: @@ GetLocator(Stack[-1], Stack[-4], Stack[-6], Stack[-5])
0x846: Pop(1)
0x847: Push(CvectorIndex(Stack[-5], 1))
0x848: Push((int) 50)
0x849: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x84a: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x84b: PushEmpty(bool, cvector, cvector, float, float, bool, bool)
0x84c: Stack[-6] = Stack[-12]
0x84d: Stack[-5] = Stack[-11]
0x84e: Stack[-4] = (int) 100
0x84f: Stack[-3] = (int) 3000
0x850: Stack[-2] = (bool) 0
0x851: Stack[-1] = (bool) 1
0x852: Call2 0x8a2

0x853: Stack[-8] = Stack[-7]
0x854: Pop(7)
0x855: Push(Stack[-1])
0x856: IF (Stack[-1] == 0) GOTO 0x85b; Pop(1)

0x857: PushEmpty(int)
0x858: Stack[-1] = Stack[-7]
0x859: Call2 0xeb2

0x85a: Pop(1)
0x85b: Stack[-13] = Stack[-1]
0x85c: Return(); Pop(12)

0x85d: Stack[-2] = 0
0x85e: PushEmpty()
0x85f: PushEmpty()
0x860: Call2 0x91e

0x861: Pop(0)
0x862: PushEmpty(bool, object)
0x863: Stack[-1] = Stack[-3]
0x864: Call2 0xf3d

0x865: Pop(2)
0x866: Return(); Pop(0)

0x867: PushEmpty()
0x868: PushEmpty(bool, object)
0x869: Stack[-1] = Stack[-3]
0x86a: Call2 0xb62

0x86b: Pop(1)
0x86c: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x86d: PushEmpty()
0x86e: Call2 0x91e

0x86f: Pop(0)
0x870: PushEmpty(bool, int)
0x871: Stack[-1] = (int) 4
0x872: Call2 0xeca

0x873: Pop(2)
0x874: GOTO 0x87c

0x875: PushEmpty()
0x876: Call2 0x91e

0x877: Pop(0)
0x878: PushEmpty(object)
0x879: Stack[-1] = Stack[-2]
0x87a: Call2 0xf08

0x87b: Pop(1)
0x87c: Return(); Pop(0)

0x87d: PushEmpty()
0x87e: PushEmpty(bool)
0x87f: Stack[-1] = (bool) 1
0x880: PushEmpty(bool, object)
0x881: Stack[-1] = Stack[-5]
0x882: Call2 0xb9c

0x883: Pop(1)
0x884: Pop(1); Push((bool) Stack[-1] == 0)
0x885: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x886: PushEmpty(float, object)
0x887: Stack[-1] = Stack[-5]
0x888: Call2 0xb5a

0x889: Pop(1)
0x88a: Push((float)1000000.0)
0x88b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x88c: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x88d: Stack[-1] = (bool) 0
0x88e: IF (Stack[-1] == 0) GOTO 0x890; Pop(1)

0x88f: Return(); Pop(0)

0x890: PushEmpty()
0x891: Call2 0x91e

0x892: Pop(0)
0x893: PushEmpty(object)
0x894: Stack[-1] = Stack[-3]
0x895: Call2 0xf13

0x896: Pop(1)
0x897: Return(); Pop(0)

0x898: PushEmpty()
0x899: Call2 0x91e

0x89a: Pop(0)
0x89b: PushEmpty(bool, int)
0x89c: Stack[-1] = (int) 0
0x89d: Call2 0xeca

0x89e: Pop(2)
0x89f: Return(); Pop(0)

0x8a0: Stack[-1] = (bool) 1
0x8a1: Return(); Pop(0)

0x8a2: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x8a3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x8a4: Stack[-7] = Stack[-17]
0x8a5: PushEmpty(bool)
0x8a6: Call2 0x8a0

0x8a7: Pop(0)
0x8a8: Pop(1); Push((bool) Stack[-1] == 0)
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ac; Pop(1)

0x8aa: Stack[-23] = (bool) 0
0x8ab: Return(); Pop(16)

0x8ac: Stack[-5] = Stack[-22]
0x8ad: @ GetPosition(Stack[-4])
0x8ae: Pop(0)
0x8af: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0x8b0: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0x8b1: PushEmpty(bool)
0x8b2: Stack[-1] = (bool) 0
0x8b3: Push((int) 0)
0x8b4: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0x8b5: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b6: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8b7: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x8b8: IF (Stack[-1] == 0) GOTO 0x8ba; Pop(1)

0x8b9: Stack[-1] = (bool) 1
0x8ba: IF (Stack[-1] == 0) GOTO 0x8bf; Pop(1)

0x8bb: @ Stop()
0x8bc: Pop(0)
0x8bd: Stack[-23] = (bool) 0
0x8be: Return(); Pop(16)

0x8bf: Pop(0); Push(Stack[-20] * Stack[-20]);
0x8c0: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x8c1: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8c2: @ FindPathTo(Stack[-1], Stack[-5])
0x8c3: Pop(0)
0x8c4: Pop(0); Push(( Stack[-1] != 0 )
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c8; Pop(1)

0x8c6: Stack[-6] = Stack[-1]
0x8c7: Stack[-1] = 0
0x8c8: Pop(0); Push(( Stack[-6] != 0 )
0x8c9: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8ca: Push(Stack[-7])
0x8cb: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8cc: Stack[-7] = (bool) 0
0x8cd: @ RotatePath(Stack[-6], Stack[-8])
0x8ce: Pop(0)
0x8cf: Pop(0); Push((bool) Stack[-8] == 0)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8d1: GOTO 0x901

0x8d2: Push((int) 0)
0x8d3: Push((float)0.3)
0x8d4: @ SetTimer(Stack[-2], Stack[-1])
0x8d5: Pop(2)
0x8d6: PushEmpty(string)
0x8d7: Call2 0x92e

0x8d8: Pop(0)
0x8d9: PushEmpty(string)
0x8da: Call2 0x930

0x8db: Pop(0)
0x8dc: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0x8dd: Pop(2)
0x8de: Pop(0); Push((bool) Stack[-8] == 0)
0x8df: IF (Stack[-1] == 0) GOTO 0x8e7; Pop(1)

0x8e0: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8e1: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8e2: Stack[-6] = 0
0x8e3: GOTO 0x901

0x8e4: GOTO 0x8e6

0x8e5: GOTO 0x900

0x8e6: GOTO 0x8e8

0x8e7: Stack[-6] = 0
0x8e8: GOTO 0x8f9

0x8e9: Push((int) 0)
0x8ea: @ KillTimer(Stack[-1])
0x8eb: Pop(1)
0x8ec: Push((float)0.5)
0x8ed: @ Sleep(Stack[-1], Stack[-9])
0x8ee: Pop(1)
0x8ef: Pop(0); Push((bool) Stack[-8] == 0)
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f1: Push( Stack[0 + Tasks[-1].StackPointer] )
0x8f2: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8f3: Stack[-6] = 0
0x8f4: GOTO 0x901

0x8f5: Push((int) 0)
0x8f6: Push((float)0.3)
0x8f7: @ SetTimer(Stack[-2], Stack[-1])
0x8f8: Pop(2)
0x8f9: Stack[-1] = 0
0x8fa: GOTO 0x8ff

0x8fb: Push((int) 0)
0x8fc: @ KillTimer(Stack[-1])
0x8fd: Pop(1)
0x8fe: GOTO 0x901

0x8ff: Stack[-6] = 0
0x900: GOTO 0x8a5

0x901: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x902: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x903: Push(CvectorIndex(Stack[-21], 0))
0x904: Push(CvectorIndex(Stack[-22], 2))
0x905: @ RotateAsync(Stack[-2], Stack[-1])
0x906: Pop(2)
0x907: Stack[-23] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x908: Return(); Pop(16)

0x909: PushEmpty()
0x90a: Push((int) 0)
0x90b: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x90c: IF (Stack[-1] == 0) GOTO 0x90e; Pop(1)

0x90d: Return(); Pop(0)

0x90e: PushEmpty(bool)
0x90f: Call2 0x8a0

0x910: Pop(0)
0x911: Pop(1); Push((bool) Stack[-1] == 0)
0x912: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x913: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x914: Push((int) 0)
0x915: @ KillTimer(Stack[-1])
0x916: Pop(1)
0x917: @ Stop()
0x918: Pop(0)
0x919: Return(); Pop(0)

0x91a: PushEmpty()
0x91b: @ RequestClearPath(Stack[-1])
0x91c: Pop(0)
0x91d: Return(); Pop(0)

0x91e: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x91f: Push((int) 0)
0x920: @ KillTimer(Stack[-1])
0x921: Pop(1)
0x922: @ Stop()
0x923: Pop(0)
0x924: Return(); Pop(0)

0x925: PushEmpty()
0x926: PushEmpty()
0x927: Call2 0x91e

0x928: Pop(0)
0x929: PushEmpty(object)
0x92a: Stack[-1] = Stack[-2]
0x92b: Call2 0xf69

0x92c: Pop(1)
0x92d: Return(); Pop(0)

0x92e: Stack[-1] = "walk"
0x92f: Return(); Pop(0)

0x930: Stack[-1] = "run"
0x931: Return(); Pop(0)

0x932: PushEmpty(string)
0x933: Stack[-1] = "hunt"
0x934: Call2 0x971

0x935: Pop(1)
0x936: Return(); Pop(0)

0x937: PushEmpty()
0x938: PushEmpty(bool, object)
0x939: Stack[-1] = Stack[-3]
0x93a: Call2 0xb62

0x93b: Pop(1)
0x93c: IF (Stack[-1] == 0) GOTO 0x945; Pop(1)

0x93d: PushEmpty()
0x93e: Call2 0x986

0x93f: Pop(0)
0x940: PushEmpty(bool, int)
0x941: Stack[-1] = (int) 4
0x942: Call2 0xeca

0x943: Pop(2)
0x944: GOTO 0x94c

0x945: PushEmpty()
0x946: Call2 0x986

0x947: Pop(0)
0x948: PushEmpty(object)
0x949: Stack[-1] = Stack[-2]
0x94a: Call2 0xf08

0x94b: Pop(1)
0x94c: Return(); Pop(0)

0x94d: PushEmpty()
0x94e: PushEmpty(bool)
0x94f: Stack[-1] = (bool) 1
0x950: PushEmpty(bool, object)
0x951: Stack[-1] = Stack[-5]
0x952: Call2 0xb9c

0x953: Pop(1)
0x954: Pop(1); Push((bool) Stack[-1] == 0)
0x955: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x956: PushEmpty(float, object)
0x957: Stack[-1] = Stack[-5]
0x958: Call2 0xb5a

0x959: Pop(1)
0x95a: Push((float)1000000.0)
0x95b: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x95e; Pop(1)

0x95d: Stack[-1] = (bool) 0
0x95e: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95f: Return(); Pop(0)

0x960: PushEmpty()
0x961: Call2 0x986

0x962: Pop(0)
0x963: PushEmpty(object)
0x964: Stack[-1] = Stack[-3]
0x965: Call2 0xf13

0x966: Pop(1)
0x967: Return(); Pop(0)

0x968: PushEmpty()
0x969: Call2 0x986

0x96a: Pop(0)
0x96b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x96c: PushEmpty(bool, int)
0x96d: Stack[-1] = (int) 0
0x96e: Call2 0xeca

0x96f: Pop(2)
0x970: Return(); Pop(0)

0x971: PushEmpty(bool, bool, bool, bool)
0x972: @ WaitForAnimEnd()
0x973: Pop(0)
0x974: PushEmpty(bool)
0x975: Call2 0xc45

0x976: Pop(0)
0x977: Pop(1); Push((bool) Stack[-1] == 0)
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: Return(); Pop(4)

0x97a: Push("all")
0x97b: @ HasAnimation(Stack[-3], Stack[-1], Stack[-6])
0x97c: Pop(1)
0x97d: Pop(0); Push((bool) Stack[-2] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97f: Return(); Pop(4)

0x980: Push("all")
0x981: @ PlayAnimation(Stack[-1], Stack[-6])
0x982: Pop(1)
0x983: @ WaitForAnimEnd(Stack[-1])
0x984: Pop(0)
0x985: Return(); Pop(4)

0x986: @ StopAnimation()
0x987: Pop(0)
0x988: @ StopGroup0()
0x989: Pop(0)
0x98a: Return(); Pop(0)

0x98b: PushEmpty(object, object)
0x98c: Push("player")
0x98d: @ FindActor(Stack[-2], Stack[-1])
0x98e: Pop(1)
0x98f: PushEmpty(bool, object)
0x990: Stack[-1] = Stack[-3]
0x991: Call2 0xb9c

0x992: Pop(1)
0x993: Pop(1); Push((bool) Stack[-1] == 0)
0x994: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x995: PushEmpty(bool, int)
0x996: Stack[-1] = (int) 1
0x997: Call2 0xeca

0x998: Pop(2)
0x999: Return(); Pop(2)

0x99a: PushEmpty(bool, object, float, float, bool, bool)
0x99b: Stack[-5] = Stack[-7]
0x99c: Stack[-4] = (float) 250.0
0x99d: Stack[-3] = (int) 6000
0x99e: Stack[-2] = (bool) 1
0x99f: Stack[-1] = (bool) 1
0x9a0: Call2 0x9ef

0x9a1: Pop(5)
0x9a2: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a3: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a5: PushEmpty(bool, int)
0x9a6: Stack[-1] = (int) 3
0x9a7: Call2 0xeca

0x9a8: Pop(2)
0x9a9: Return(); Pop(2)

0x9aa: Stack[-1] = 0
0x9ab: PushEmpty()
0x9ac: PushEmpty()
0x9ad: Call2 0xa6b

0x9ae: Pop(0)
0x9af: PushEmpty(bool, object)
0x9b0: Stack[-1] = Stack[-3]
0x9b1: Call2 0xf3d

0x9b2: Stack[2 + Tasks[-1].StackPointer] = Stack[-2]
0x9b3: Pop(2)
0x9b4: Return(); Pop(0)

0x9b5: PushEmpty()
0x9b6: PushEmpty(bool, object)
0x9b7: Stack[-1] = Stack[-3]
0x9b8: Call2 0xb62

0x9b9: Pop(1)
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9bb: PushEmpty()
0x9bc: Call2 0xa6b

0x9bd: Pop(0)
0x9be: PushEmpty(bool, int)
0x9bf: Stack[-1] = (int) 4
0x9c0: Call2 0xeca

0x9c1: Pop(2)
0x9c2: GOTO 0x9ca

0x9c3: PushEmpty()
0x9c4: Call2 0xa6b

0x9c5: Pop(0)
0x9c6: PushEmpty(object)
0x9c7: Stack[-1] = Stack[-2]
0x9c8: Call2 0xf08

0x9c9: Pop(1)
0x9ca: Return(); Pop(0)

0x9cb: PushEmpty()
0x9cc: PushEmpty(bool)
0x9cd: Stack[-1] = (bool) 1
0x9ce: PushEmpty(bool, object)
0x9cf: Stack[-1] = Stack[-5]
0x9d0: Call2 0xb9c

0x9d1: Pop(1)
0x9d2: Pop(1); Push((bool) Stack[-1] == 0)
0x9d3: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9d4: PushEmpty(float, object)
0x9d5: Stack[-1] = Stack[-5]
0x9d6: Call2 0xb5a

0x9d7: Pop(1)
0x9d8: Push((float)1000000.0)
0x9d9: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x9da: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9db: Stack[-1] = (bool) 0
0x9dc: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9dd: Return(); Pop(0)

0x9de: PushEmpty()
0x9df: Call2 0xa6b

0x9e0: Pop(0)
0x9e1: PushEmpty(object)
0x9e2: Stack[-1] = Stack[-3]
0x9e3: Call2 0xf13

0x9e4: Pop(1)
0x9e5: Return(); Pop(0)

0x9e6: PushEmpty()
0x9e7: Call2 0xa6b

0x9e8: Pop(0)
0x9e9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x9ea: PushEmpty(bool, int)
0x9eb: Stack[-1] = (int) 0
0x9ec: Call2 0xeca

0x9ed: Pop(2)
0x9ee: Return(); Pop(0)

0x9ef: PushEmpty(bool, bool, object, cvector, cvector, cvector, float, object, bool, bool, object, cvector, cvector, cvector, float, object)
0x9f0: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x9f1: Stack[1 + Tasks[-1].StackPointer] = Stack[-21]
0x9f2: Stack[-7] = Stack[-17]
0x9f3: PushEmpty(bool, object)
0x9f4: Stack[-1] = Stack[-23]
0x9f5: Call2 0xa7b

0x9f6: Pop(1)
0x9f7: Pop(1); Push((bool) Stack[-1] == 0)
0x9f8: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f9: Stack[-22] = (bool) 0
0x9fa: Return(); Pop(16)

0x9fb: @@ GetPosition(Stack[-5])
0x9fc: Pop(0)
0x9fd: @ GetPosition(Stack[-4])
0x9fe: Pop(0)
0x9ff: Stack[-3] = Stack[-5] - Stack[-4]; Pop(0);
0xa00: Stack[-2] = Stack[-3] | Stack[-3]; Pop(0);
0xa01: PushEmpty(bool)
0xa02: Stack[-1] = (bool) 0
0xa03: Push((int) 0)
0xa04: Pop(1); Push((bool) Stack[-21] > Stack[-1])
0xa05: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa06: Pop(0); Push(Stack[-20] * Stack[-20]);
0xa07: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xa08: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0xa09: Stack[-1] = (bool) 1
0xa0a: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0b: @ Stop()
0xa0c: Pop(0)
0xa0d: Stack[-22] = (bool) 0
0xa0e: Return(); Pop(16)

0xa0f: Pop(0); Push(Stack[-20] * Stack[-20]);
0xa10: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0xa11: IF (Stack[-1] == 0) GOTO 0xa4d; Pop(1)

0xa12: @@ GetPFPosition(Stack[-5])
0xa13: Pop(0)
0xa14: @ FindPathTo(Stack[-1], Stack[-5])
0xa15: Pop(0)
0xa16: Pop(0); Push(( Stack[-1] != 0 )
0xa17: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa18: Stack[-6] = Stack[-1]
0xa19: Stack[-1] = 0
0xa1a: Pop(0); Push(( Stack[-6] != 0 )
0xa1b: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa1c: Push(Stack[-7])
0xa1d: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1e: Stack[-7] = (bool) 0
0xa1f: @ RotatePath(Stack[-6], Stack[-8])
0xa20: Pop(0)
0xa21: Pop(0); Push((bool) Stack[-8] == 0)
0xa22: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa23: GOTO 0xa53

0xa24: Push((int) 0)
0xa25: Push((float)0.3)
0xa26: @ SetTimer(Stack[-2], Stack[-1])
0xa27: Pop(2)
0xa28: PushEmpty(string)
0xa29: Call2 0xa82

0xa2a: Pop(0)
0xa2b: PushEmpty(string)
0xa2c: Call2 0xa84

0xa2d: Pop(0)
0xa2e: @ FollowPath(Stack[-8], Stack[-20], Stack[-10], Stack[-2], Stack[-1])
0xa2f: Pop(2)
0xa30: Pop(0); Push((bool) Stack[-8] == 0)
0xa31: IF (Stack[-1] == 0) GOTO 0xa39; Pop(1)

0xa32: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa33: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa34: Stack[-6] = 0
0xa35: GOTO 0xa53

0xa36: GOTO 0xa38

0xa37: GOTO 0xa52

0xa38: GOTO 0xa3a

0xa39: Stack[-6] = 0
0xa3a: GOTO 0xa4b

0xa3b: Push((int) 0)
0xa3c: @ KillTimer(Stack[-1])
0xa3d: Pop(1)
0xa3e: Push((float)0.5)
0xa3f: @ Sleep(Stack[-1], Stack[-9])
0xa40: Pop(1)
0xa41: Pop(0); Push((bool) Stack[-8] == 0)
0xa42: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa43: Push( Stack[0 + Tasks[-1].StackPointer] )
0xa44: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa45: Stack[-6] = 0
0xa46: GOTO 0xa53

0xa47: Push((int) 0)
0xa48: Push((float)0.3)
0xa49: @ SetTimer(Stack[-2], Stack[-1])
0xa4a: Pop(2)
0xa4b: Stack[-1] = 0
0xa4c: GOTO 0xa51

0xa4d: Push((int) 0)
0xa4e: @ KillTimer(Stack[-1])
0xa4f: Pop(1)
0xa50: GOTO 0xa53

0xa51: Stack[-6] = 0
0xa52: GOTO 0x9f3

0xa53: Stack[-22] = !Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0xa54: Return(); Pop(16)

0xa55: PushEmpty()
0xa56: Push((int) 0)
0xa57: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa58: IF (Stack[-1] == 0) GOTO 0xa5a; Pop(1)

0xa59: Return(); Pop(0)

0xa5a: PushEmpty(bool, object)
0xa5b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5c: Call2 0xa7b

0xa5d: Pop(1)
0xa5e: Pop(1); Push((bool) Stack[-1] == 0)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa61; Pop(1)

0xa60: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa61: Push((int) 0)
0xa62: @ KillTimer(Stack[-1])
0xa63: Pop(1)
0xa64: @ Stop()
0xa65: Pop(0)
0xa66: Return(); Pop(0)

0xa67: PushEmpty()
0xa68: @ RequestClearPath(Stack[-1])
0xa69: Pop(0)
0xa6a: Return(); Pop(0)

0xa6b: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xa6c: Push((int) 0)
0xa6d: @ KillTimer(Stack[-1])
0xa6e: Pop(1)
0xa6f: @ Stop()
0xa70: Pop(0)
0xa71: Return(); Pop(0)

0xa72: PushEmpty()
0xa73: PushEmpty()
0xa74: Call2 0xa6b

0xa75: Pop(0)
0xa76: PushEmpty(object)
0xa77: Stack[-1] = Stack[-2]
0xa78: Call2 0xf69

0xa79: Pop(1)
0xa7a: Return(); Pop(0)

0xa7b: PushEmpty()
0xa7c: PushEmpty(bool, object)
0xa7d: Stack[-1] = Stack[-3]
0xa7e: Call2 0xb9c

0xa7f: Stack[-4] = Stack[-2]
0xa80: Pop(2)
0xa81: Return(); Pop(0)

0xa82: Stack[-1] = "walk"
0xa83: Return(); Pop(0)

0xa84: Stack[-1] = "run"
0xa85: Return(); Pop(0)

0xa86: PushEmpty()
0xa87: PushEmpty()
0xa88: Call2 0xe6b

0xa89: Pop(0)
0xa8a: PushEmpty(object)
0xa8b: Stack[-1] = Stack[-2]
0xa8c: Call2 0xa97

0xa8d: Pop(1)
0xa8e: Return(); Pop(0)

0xa8f: PushEmpty(object)
0xa90: Call2 0xcf9

0xa91: Pop(0)
0xa92: @ RemoveActor(Stack[-1])
0xa93: Pop(1)
0xa94: @ Hold()
0xa95: Pop(0)
0xa96: Return(); Pop(0)

0xa97: PushEmpty()
0xa98: EventDisable(0)
0xa99: PushEmpty(object)
0xa9a: Stack[-1] = Stack[-2]
0xa9b: Call2 0xab0

0xa9c: Pop(1)
0xa9d: Push((int) 50)
0xa9e: Push((int) 40)
0xa9f: @ SetRTEnvelope(Stack[-2], Stack[-1])
0xaa0: Pop(2)
0xaa1: EventEnable(0)
0xaa2: @ Hold()
0xaa3: Pop(0)
0xaa4: GOTO 0xaa2

0xaa5: Return(); Pop(0)

0xaa6: PushEmpty(bool, bool)
0xaa7: @ IsOverrideActive(Stack[-1])
0xaa8: Pop(0)
0xaa9: Pop(0); Push((bool) Stack[-1] == 0)
0xaaa: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaab: PushEmpty(object)
0xaac: Stack[-1] = Stack[-4]
0xaad: Call2 0xe4d

0xaae: Pop(1)
0xaaf: Return(); Pop(2)

0xab0: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0xab1: Pop(0); Push((bool) Stack[-21] == 0)
0xab2: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab3: PushEmpty(string)
0xab4: Stack[-1] = "fdie"
0xab5: Call2 0xb0b

0xab6: Pop(1)
0xab7: GOTO 0xb0a

0xab8: @@ GetPosition(Stack[-10])
0xab9: Pop(0)
0xaba: @ GetPosition(Stack[-9])
0xabb: Pop(0)
0xabc: @ GetDirection(Stack[-8])
0xabd: Pop(0)
0xabe: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0xabf: Push(CvectorIndex(Stack[-7], 0))
0xac0: Push(CvectorIndex(Stack[-9], 0))
0xac1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xac2: Push(CvectorIndex(Stack[-8], 2))
0xac3: Push(CvectorIndex(Stack[-10], 2))
0xac4: Pop(2); Push(Stack[-2] * Stack[-1]);
0xac5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xac6: Push((int) 0)
0xac7: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xac8: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xac9: Stack[-6] = "fdie"
0xaca: GOTO 0xacc

0xacb: Stack[-6] = "bdie"
0xacc: @ RemoveRTEnvelope()
0xacd: Pop(0)
0xace: @ SetDeathState()
0xacf: Pop(0)
0xad0: @ Stop()
0xad1: Pop(0)
0xad2: @ StopAsync()
0xad3: Pop(0)
0xad4: Stack[-5] = Stack[-21]
0xad5: Push("GetScriptProperty")
0xad6: Push((int) 2)
0xad7: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0xad8: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xad9: Push("Owner")
0xada: @@ HasScriptProperty(Stack[-5], Stack[-1])
0xadb: Pop(1)
0xadc: Push(Stack[-4])
0xadd: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xade: Push("Owner")
0xadf: @@ GetScriptProperty(Stack[-6], Stack[-1])
0xae0: Pop(1)
0xae1: Pop(0); Push((bool) Stack[-5] == 0)
0xae2: IF (Stack[-1] == 0) GOTO 0xae4; Pop(1)

0xae3: Stack[-5] = Stack[-21]
0xae4: Push("@GetEyesHeight")
0xae5: Push((int) 1)
0xae6: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0xae7: IF (Stack[-1] == 0) GOTO 0xaf3; Pop(1)

0xae8: @@ GetEyesHeight(Stack[-2])
0xae9: Pop(0)
0xaea: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xaeb: Push(CvectorIndex(Stack[-1], 1))
0xaec: Stack[-1] = Stack[-3]
0xaed: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xaee: Push("head")
0xaef: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0xaf0: Pop(1)
0xaf1: Stack[-3] = (bool) 1
0xaf2: GOTO 0xaf4

0xaf3: Stack[-3] = (bool) 0
0xaf4: PushEmpty(string)
0xaf5: Stack[-1] = Stack[-7]
0xaf6: Call2 0xcd0

0xaf7: Pop(1)
0xaf8: Push("all")
0xaf9: @ PlayAnimation(Stack[-1], Stack[-7])
0xafa: Pop(1)
0xafb: @ WaitForAnimEnd()
0xafc: Pop(0)
0xafd: Push(Stack[-3])
0xafe: IF (Stack[-1] == 0) GOTO 0xb04; Pop(1)

0xaff: @ StopAsync()
0xb00: Pop(0)
0xb01: Push("head")
0xb02: @ UnlookAsync(Stack[-1])
0xb03: Pop(1)
0xb04: Push("all")
0xb05: @ LockAnimationEnd(Stack[-1], Stack[-7])
0xb06: Pop(1)
0xb07: @ RemoveEnvelope()
0xb08: Pop(0)
0xb09: Stack[-5] = 0
0xb0a: Return(); Pop(20)

0xb0b: PushEmpty()
0xb0c: @ RemoveRTEnvelope()
0xb0d: Pop(0)
0xb0e: @ SetDeathState()
0xb0f: Pop(0)
0xb10: @ Stop()
0xb11: Pop(0)
0xb12: @ StopAsync()
0xb13: Pop(0)
0xb14: @ StopSecondaryAnimation()
0xb15: Pop(0)
0xb16: PushEmpty(string)
0xb17: Stack[-1] = Stack[-2]
0xb18: Call2 0xcd0

0xb19: Pop(1)
0xb1a: Push("all")
0xb1b: @ PlayAnimation(Stack[-1], Stack[-2])
0xb1c: Pop(1)
0xb1d: @ WaitForAnimEnd()
0xb1e: Pop(0)
0xb1f: Push("all")
0xb20: @ LockAnimationEnd(Stack[-1], Stack[-2])
0xb21: Pop(1)
0xb22: @ RemoveEnvelope()
0xb23: Pop(0)
0xb24: Return(); Pop(0)

0xb25: PushEmpty()
0xb26: Return(); Pop(0)

0xb27: PushEmpty()
0xb28: Return(); Pop(0)

0xb29: PushEmpty()
0xb2a: Return(); Pop(0)

0xb2b: Push(GlobalVars[1])
0xb2c: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb2d: PushEmpty(object)
0xb2e: Call2 0xcf9

0xb2f: Pop(0)
0xb30: @ RemoveActor(Stack[-1])
0xb31: Pop(1)
0xb32: @ Hold()
0xb33: Pop(0)
0xb34: PushEmpty(bool)
0xb35: Call2 0xc45

0xb36: Pop(0)
0xb37: Pop(1); Push((bool) Stack[-1] == 0)
0xb38: IF (Stack[-1] == 0) GOTO 0xb3c; Pop(1)

0xb39: @ Hold()
0xb3a: Pop(0)
0xb3b: GOTO 0xb34

0xb3c: Return(); Pop(0)

0xb3d: PushEmpty()
0xb3e: Push("cleanup")
0xb3f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb40: IF (Stack[-1] == 0) GOTO 0xb48; Pop(1)

0xb41: PushEmpty(object)
0xb42: Call2 0xcf9

0xb43: Pop(0)
0xb44: @ RemoveActor(Stack[-1])
0xb45: Pop(1)
0xb46: @ Hold()
0xb47: Pop(0)
0xb48: Return(); Pop(0)

0xb49: @ StopGroup0()
0xb4a: Pop(0)
0xb4b: @ sync()
0xb4c: Pop(0)
0xb4d: Return(); Pop(0)

0xb4e: PushEmpty(cvector, cvector)
0xb4f: @ GetPosition(Stack[-1])
0xb50: Pop(0)
0xb51: Stack[-3] = Stack[-1]
0xb52: Return(); Pop(2)

0xb53: PushEmpty(cvector, cvector, cvector, cvector)
0xb54: @ GetPosition(Stack[-2])
0xb55: Pop(0)
0xb56: @@ GetPosition(Stack[-1])
0xb57: Pop(0)
0xb58: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xb59: Return(); Pop(4)

0xb5a: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xb5b: @ GetPosition(Stack[-3])
0xb5c: Pop(0)
0xb5d: @@ GetPosition(Stack[-2])
0xb5e: Pop(0)
0xb5f: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xb60: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xb61: Return(); Pop(6)

0xb62: PushEmpty(bool, bool)
0xb63: @ IsPlayerActor(Stack[-3], Stack[-1])
0xb64: Pop(0)
0xb65: Stack[-4] = Stack[-1]
0xb66: Return(); Pop(2)

0xb67: PushEmpty(bool, bool)
0xb68: Push("HasProperty")
0xb69: Push((int) 2)
0xb6a: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xb6b: Pop(1); Push((bool) Stack[-1] == 0)
0xb6c: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6d: Stack[-5] = (bool) 0
0xb6e: Return(); Pop(2)

0xb6f: @@ HasProperty(Stack[-3], Stack[-1])
0xb70: Pop(0)
0xb71: Stack[-5] = Stack[-1]
0xb72: Return(); Pop(2)

0xb73: PushEmpty(bool, bool)
0xb74: @@ IsDead(Stack[-1])
0xb75: Pop(0)
0xb76: Stack[-4] = Stack[-1]
0xb77: Return(); Pop(2)

0xb78: PushEmpty(object, object, object, object)
0xb79: Pop(0); Push((bool) Stack[-5] == 0)
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7d; Pop(1)

0xb7b: Stack[-6] = (bool) 0
0xb7c: Return(); Pop(4)

0xb7d: PushEmpty(bool)
0xb7e: Stack[-1] = (bool) 0
0xb7f: Push("IsDead")
0xb80: Push((int) 1)
0xb81: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xb82: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb83: PushEmpty(bool, object)
0xb84: Stack[-1] = Stack[-8]
0xb85: Call2 0xb73

0xb86: Pop(1)
0xb87: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb88: Stack[-1] = (bool) 1
0xb89: IF (Stack[-1] == 0) GOTO 0xb8c; Pop(1)

0xb8a: Stack[-6] = (bool) 0
0xb8b: Return(); Pop(4)

0xb8c: @ GetScene(Stack[-2])
0xb8d: Pop(0)
0xb8e: Pop(0); Push((bool) Stack[-2] == 0)
0xb8f: IF (Stack[-1] == 0) GOTO 0xb92; Pop(1)

0xb90: Stack[-6] = (bool) 0
0xb91: Return(); Pop(4)

0xb92: @@ GetScene(Stack[-1])
0xb93: Pop(0)
0xb94: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xb95: IF (Stack[-1] == 0) GOTO 0xb98; Pop(1)

0xb96: Stack[-6] = (bool) 0
0xb97: Return(); Pop(4)

0xb98: Stack[-6] = (bool) 1
0xb99: Return(); Pop(4)

0xb9a: Stack[-1] = 0
0xb9b: Stack[-2] = 0
0xb9c: PushEmpty(int, int)
0xb9d: PushEmpty(bool, object)
0xb9e: Stack[-1] = Stack[-5]
0xb9f: Call2 0xb78

0xba0: Pop(1)
0xba1: Pop(1); Push((bool) Stack[-1] == 0)
0xba2: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba3: Stack[-4] = (bool) 0
0xba4: Return(); Pop(2)

0xba5: PushEmpty(bool, object, string)
0xba6: Stack[-2] = Stack[-6]
0xba7: Stack[-1] = "noaccess"
0xba8: Call2 0xb67

0xba9: Pop(2)
0xbaa: Pop(1); Push((bool) Stack[-1] == 0)
0xbab: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xbac: Stack[-4] = (bool) 1
0xbad: Return(); Pop(2)

0xbae: Push("noaccess")
0xbaf: @@ GetProperty(Stack[-1], Stack[-2])
0xbb0: Pop(1)
0xbb1: Push((int) 0)
0xbb2: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xbb3: Return(); Pop(2)

0xbb4: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbb5: @ GetPosition(Stack[-3])
0xbb6: Pop(0)
0xbb7: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xbb8: Push(CvectorIndex(Stack[-2], 0))
0xbb9: Push(CvectorIndex(Stack[-3], 2))
0xbba: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xbbb: Pop(2)
0xbbc: Stack[-8] = Stack[-1]
0xbbd: Return(); Pop(6)

0xbbe: PushEmpty(cvector, cvector)
0xbbf: @@ GetPosition(Stack[-1])
0xbc0: Pop(0)
0xbc1: PushEmpty(bool, cvector)
0xbc2: Stack[-1] = Stack[-3]
0xbc3: Call2 0xbb4

0xbc4: Stack[-6] = Stack[-2]
0xbc5: Pop(2)
0xbc6: Return(); Pop(2)

0xbc7: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xbc8: Pop(0); Push((bool) Stack[-15] == 0)
0xbc9: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbca: Return(); Pop(14)

0xbcb: @ IsDead(Stack[-7])
0xbcc: Pop(0)
0xbcd: Push(Stack[-7])
0xbce: IF (Stack[-1] == 0) GOTO 0xbd0; Pop(1)

0xbcf: Return(); Pop(14)

0xbd0: @ GetSecondaryAnimationType(Stack[-6])
0xbd1: Pop(0)
0xbd2: Push((int) 0)
0xbd3: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbd5: Return(); Pop(14)

0xbd6: @@ GetPosition(Stack[-5])
0xbd7: Pop(0)
0xbd8: @ GetPosition(Stack[-4])
0xbd9: Pop(0)
0xbda: @ GetDirection(Stack[-3])
0xbdb: Pop(0)
0xbdc: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xbdd: Push(CvectorIndex(Stack[-2], 0))
0xbde: Push(CvectorIndex(Stack[-4], 0))
0xbdf: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe0: Push(CvectorIndex(Stack[-3], 2))
0xbe1: Push(CvectorIndex(Stack[-5], 2))
0xbe2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbe3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xbe4: Push((int) 0)
0xbe5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbe7: Stack[-1] = "fhit"
0xbe8: GOTO 0xbea

0xbe9: Stack[-1] = "bhit"
0xbea: Push("hit_react")
0xbeb: Push("1")
0xbec: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbed: Push("2")
0xbee: Pop(1); Push(Stack[-4] + Stack[-1]);
0xbef: Push((int) -10)
0xbf0: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(4)
0xbf2: Return(); Pop(14)

0xbf3: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xbf4: PushEmpty(bool)
0xbf5: Stack[-1] = (bool) 0
0xbf6: PushEmpty(bool)
0xbf7: Stack[-1] = (bool) 0
0xbf8: Push(Stack[-23])
0xbf9: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfa: Push((int) 4)
0xbfb: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xbfc: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfd: Stack[-1] = (bool) 1
0xbfe: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xbff: Push((int) 5)
0xc00: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xc01: IF (Stack[-1] == 0) GOTO 0xc03; Pop(1)

0xc02: Stack[-1] = (bool) 1
0xc03: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc04: PushEmpty(cvector, cvector)
0xc05: PushEmpty(cvector, object)
0xc06: Stack[-1] = Stack[-25]
0xc07: Call2 0xb53

0xc08: Stack[-3] = Stack[-2]
0xc09: Pop(2)
0xc0a: Call2 0xcff

0xc0b: Stack[-11] = Stack[-2]
0xc0c: Pop(2)
0xc0d: @ CreateVectorVector(Stack[-8])
0xc0e: Pop(0)
0xc0f: Stack[-7] = (int) 1
0xc10: Push("hit")
0xc11: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc12: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xc13: Pop(1)
0xc14: Pop(0); Push((bool) Stack[-6] == 0)
0xc15: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc16: GOTO 0xc20

0xc17: Pop(0); Push(Stack[-4] | Stack[-9]);
0xc18: Push((float)0.70711)
0xc19: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc1a: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc1b: @@ add(Stack[-5])
0xc1c: Pop(0)
0xc1d: Push((int) 1)
0xc1e: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc1f: GOTO 0xc10

0xc20: @@ size(Stack[-3])
0xc21: Pop(0)
0xc22: Push(Stack[-3])
0xc23: IF (Stack[-1] == 0) GOTO 0xc31; Pop(1)

0xc24: @ irand(Stack[-2], Stack[-3])
0xc25: Pop(0)
0xc26: @@ get(Stack[-1], Stack[-2])
0xc27: Pop(0)
0xc28: PushEmpty(object, int, float, cvector, cvector)
0xc29: Stack[-5] = Stack[-26]
0xc2a: Stack[-4] = Stack[-25]
0xc2b: Stack[-3] = Stack[-24]
0xc2c: Stack[-2] = Stack[-6]
0xc2d: Stack[-1] = -Stack[-14]; Pop(0);
0xc2e: Call2 0xc37

0xc2f: Pop(5)
0xc30: Return(); Pop(18)

0xc31: Stack[-8] = 0
0xc32: PushEmpty(object)
0xc33: Stack[-1] = Stack[-22]
0xc34: Call2 0xbc7

0xc35: Pop(1)
0xc36: Return(); Pop(18)

0xc37: PushEmpty(object, object, object, object)
0xc38: @ GetScene(Stack[-2])
0xc39: Pop(0)
0xc3a: Push("scripted")
0xc3b: Push("blood_dir.xml")
0xc3c: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xc3d: Pop(2)
0xc3e: PushEmpty(object)
0xc3f: Stack[-1] = Stack[-10]
0xc40: Call2 0xbc7

0xc41: Pop(1)
0xc42: Return(); Pop(4)

0xc43: Stack[-1] = 0
0xc44: Stack[-2] = 0
0xc45: PushEmpty(bool, bool)
0xc46: @ IsLoaded(Stack[-1])
0xc47: Pop(0)
0xc48: Stack[-3] = Stack[-1]
0xc49: Return(); Pop(2)

0xc4a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc4b: @@ GetPosition(Stack[-8])
0xc4c: Pop(0)
0xc4d: @@ GetEyesHeight(Stack[-9])
0xc4e: Pop(0)
0xc4f: Push(CvectorIndex(Stack[-8], 1))
0xc50: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc51: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc52: @ GetPosition(Stack[-7])
0xc53: Pop(0)
0xc54: @ GetEyesHeight(Stack[-9])
0xc55: Pop(0)
0xc56: Push(CvectorIndex(Stack[-7], 1))
0xc57: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc58: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc59: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc5a: Push(CvectorIndex(Stack[-6], 1))
0xc5b: Stack[-1] = (int) 0
0xc5c: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc5d: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc5e: Pop(1); Push(Sqrt(Stack[-1]))
0xc5f: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc60: Stack[-5] = -Stack[-6]; Pop(0);
0xc61: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc62: PushEmpty(cvector, cvector)
0xc63: Push(CVector(0.0, 1.0, 0.0))
0xc64: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc65: Call2 0xcff

0xc66: Pop(1)
0xc67: Push((int) 25)
0xc68: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc69: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc6a: Push(CVector(0.0, 10.0, 0.0))
0xc6b: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc6c: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc6d: @ IsOverrideActive(Stack[-2])
0xc6e: Pop(0)
0xc6f: Push(Stack[-2])
0xc70: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc71: Stack[-21] = (bool) 0
0xc72: Return(); Pop(18)

0xc73: @ StopWorld()
0xc74: Pop(0)
0xc75: @ CameraTransit(Stack[-3], Stack[-5])
0xc76: Pop(0)
0xc77: Push(CvectorIndex(Stack[-4], 0))
0xc78: Push(CvectorIndex(Stack[-5], 2))
0xc79: @ Rotate(Stack[-2], Stack[-1])
0xc7a: Pop(2)
0xc7b: PushEmpty(bool)
0xc7c: Call2 0xe8b

0xc7d: Pop(0)
0xc7e: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc7f: GOTO 0xc88

0xc80: Push("head")
0xc81: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc82: Pop(1)
0xc83: Push(Stack[-1])
0xc84: IF (Stack[-1] == 0) GOTO 0xc88; Pop(1)

0xc85: Push("head")
0xc86: @ LookAsyncCamera(Stack[-1])
0xc87: Pop(1)
0xc88: @ CameraWaitForPlayFinish()
0xc89: Pop(0)
0xc8a: @ ResumeWorld()
0xc8b: Pop(0)
0xc8c: Stack[-21] = (bool) 1
0xc8d: Return(); Pop(18)

0xc8e: PushEmpty(bool, bool)
0xc8f: @ CameraSwitchToNormal()
0xc90: Pop(0)
0xc91: PushEmpty(bool)
0xc92: Call2 0xe8b

0xc93: Pop(0)
0xc94: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc95: GOTO 0xc9e

0xc96: Push("head")
0xc97: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc98: Pop(1)
0xc99: Push(Stack[-1])
0xc9a: IF (Stack[-1] == 0) GOTO 0xc9e; Pop(1)

0xc9b: Push("head")
0xc9c: @ UnlookAsync(Stack[-1])
0xc9d: Pop(1)
0xc9e: Return(); Pop(2)

0xc9f: PushEmpty(bool, float, float, bool, float, float)
0xca0: @ lshHasAnimation(Stack[-3], Stack[-7])
0xca1: Pop(0)
0xca2: Push(Stack[-3])
0xca3: IF (Stack[-1] == 0) GOTO 0xcaa; Pop(1)

0xca4: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xca5: Pop(0)
0xca6: Push((bool) 0)
0xca7: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xca8: Pop(1)
0xca9: GOTO 0xcae

0xcaa: Push("Can't find lsh animation : ")
0xcab: Pop(1); Push(Stack[-1] + Stack[-8]);
0xcac: @ Trace(Stack[-1])
0xcad: Pop(1)
0xcae: Return(); Pop(6)

0xcaf: PushEmpty(bool, float, float, bool, float, float)
0xcb0: @ lshHasAnimation(Stack[-3], Stack[-8])
0xcb1: Pop(0)
0xcb2: Push(Stack[-3])
0xcb3: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb4: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xcb5: Pop(0)
0xcb6: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xcb7: Pop(0)
0xcb8: GOTO 0xcbd

0xcb9: Push("Can't find lsh animation : ")
0xcba: Pop(1); Push(Stack[-1] + Stack[-9]);
0xcbb: @ Trace(Stack[-1])
0xcbc: Pop(1)
0xcbd: Return(); Pop(6)

0xcbe: PushEmpty(float, cvector, float, cvector)
0xcbf: @@ GetEyesHeight(Stack[-2])
0xcc0: Pop(0)
0xcc1: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xcc2: Push(CvectorIndex(Stack[-1], 1))
0xcc3: Stack[-1] = Stack[-3]
0xcc4: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xcc5: Push("head")
0xcc6: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xcc7: Pop(1)
0xcc8: Return(); Pop(4)

0xcc9: PushEmpty(bool)
0xcca: Call2 0xe8b

0xccb: Pop(0)
0xccc: IF (Stack[-1] == 0) GOTO 0xccf; Pop(1)

0xccd: @ lshStopSpeech()
0xcce: Pop(0)
0xccf: Return(); Pop(0)

0xcd0: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xcd1: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xcd2: Pop(0)
0xcd3: Pop(0); Push((bool) Stack[-8] == 0)
0xcd4: IF (Stack[-1] == 0) GOTO 0xce9; Pop(1)

0xcd5: Stack[-7] = (int) 0
0xcd6: Push((int) 1)
0xcd7: Pop(1); Push(Stack[-8] + Stack[-1]);
0xcd8: Pop(1); Push(Stack[-18] + Stack[-1]);
0xcd9: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xcda: Pop(1)
0xcdb: Pop(0); Push((bool) Stack[-6] == 0)
0xcdc: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcdd: GOTO 0xce1

0xcde: Push((int) 1)
0xcdf: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xce0: GOTO 0xcd6

0xce1: Pop(0); Push((bool) Stack[-7] == 0)
0xce2: IF (Stack[-1] == 0) GOTO 0xce4; Pop(1)

0xce3: Return(); Pop(16)

0xce4: @ irand(Stack[-5], Stack[-7])
0xce5: Pop(0)
0xce6: Push((int) 1)
0xce7: Pop(1); Push(Stack[-6] + Stack[-1]);
0xce8: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xce9: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xcea: Pop(0)
0xceb: Push(Stack[-4])
0xcec: IF (Stack[-1] == 0) GOTO 0xcf8; Pop(1)

0xced: @ GetEyesHeight(Stack[-3])
0xcee: Pop(0)
0xcef: @ GetDirection(Stack[-2])
0xcf0: Pop(0)
0xcf1: Push((int) 50)
0xcf2: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xcf3: Push(CvectorIndex(Stack[-1], 1))
0xcf4: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xcf5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xcf6: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xcf7: Pop(0)
0xcf8: Return(); Pop(16)

0xcf9: PushEmpty(object, object)
0xcfa: @ self(Stack[-1])
0xcfb: Pop(0)
0xcfc: Stack[-3] = Stack[-1]
0xcfd: Return(); Pop(2)

0xcfe: Stack[-1] = 0
0xcff: PushEmpty(float, float)
0xd00: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd01: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd02: Push((float)0.0)
0xd03: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd04: IF (Stack[-1] == 0) GOTO 0xd07; Pop(1)

0xd05: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd06: Return(); Pop(2)

0xd07: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd08: Return(); Pop(2)

0xd09: PushEmpty()
0xd0a: Pop(0); Push(Stack[-2] | Stack[-1]);
0xd0b: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd0c: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd0d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd0e: Pop(1); Push(Sqrt(Stack[-1]))
0xd0f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xd10: Return(); Pop(0)

0xd11: PushEmpty(int, int)
0xd12: @ GetVariable(Stack[-3], Stack[-1])
0xd13: Pop(0)
0xd14: Stack[-4] = Stack[-1]
0xd15: Return(); Pop(2)

0xd16: PushEmpty(object, object)
0xd17: @ FindActor(Stack[-1], Stack[-4])
0xd18: Pop(0)
0xd19: Pop(0); Push((bool) Stack[-1] == 0)
0xd1a: IF (Stack[-1] == 0) GOTO 0xd1d; Pop(1)

0xd1b: Stack[-5] = (bool) 0
0xd1c: Return(); Pop(2)

0xd1d: @ Trigger(Stack[-1], Stack[-3])
0xd1e: Pop(0)
0xd1f: Stack[-5] = (bool) 1
0xd20: Return(); Pop(2)

0xd21: Stack[-1] = 0
0xd22: PushEmpty(float, float)
0xd23: @ GetGameTime(Stack[-1])
0xd24: Pop(0)
0xd25: Stack[-3] = Stack[-1]
0xd26: Return(); Pop(2)

0xd27: PushEmpty(string, string)
0xd28: Stack[-1] = "idle"
0xd29: Push(Stack[-3])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd2b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xd2c: Stack[-4] = Stack[-1]
0xd2d: Return(); Pop(2)

0xd2e: PushEmpty(int, bool, int, bool)
0xd2f: Stack[-2] = (int) 0
0xd30: Push("all")
0xd31: PushEmpty(string, int)
0xd32: Stack[-1] = Stack[-5]
0xd33: Call2 0xd27

0xd34: Pop(1)
0xd35: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd36: Pop(2)
0xd37: Pop(0); Push((bool) Stack[-1] == 0)
0xd38: IF (Stack[-1] == 0) GOTO 0xd3a; Pop(1)

0xd39: GOTO 0xd3d

0xd3a: Push((int) 1)
0xd3b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xd3c: GOTO 0xd30

0xd3d: Stack[-5] = Stack[-2]
0xd3e: Return(); Pop(4)

0xd3f: PushEmpty()
0xd40: Push((int) 2)
0xd41: @@ SetReturnValue(Stack[-1])
0xd42: Pop(1)
0xd43: Return(); Pop(0)

0xd44: PushEmpty()
0xd45: Push((int) 1)
0xd46: @@ SetReturnValue(Stack[-1])
0xd47: Pop(1)
0xd48: Return(); Pop(0)

0xd49: PushEmpty()
0xd4a: Push((int) 3)
0xd4b: @@ SetReturnValue(Stack[-1])
0xd4c: Pop(1)
0xd4d: Return(); Pop(0)

0xd4e: PushEmpty()
0xd4f: Push("oob9BoyFollower1")
0xd50: Push((int) 1)
0xd51: @ SetVariable(Stack[-2], Stack[-1])
0xd52: Pop(2)
0xd53: Return(); Pop(0)

0xd54: PushEmpty(object, object)
0xd55: PushEmpty(object)
0xd56: Call2 0xe04

0xd57: Stack[-2] = Stack[-1]
0xd58: Pop(1)
0xd59: Push("b9q03Bonfire1")
0xd5a: Push("pt_bonfire1")
0xd5b: Push((int) 0)
0xd5c: Push((int) 531507)
0xd5d: PushEmpty(float)
0xd5e: Call2 0xd22

0xd5f: Pop(0)
0xd60: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd61: Pop(5)
0xd62: Push("b9q03Bonfire2")
0xd63: Push("pt_bonfire2")
0xd64: Push((int) 0)
0xd65: Push((int) 531508)
0xd66: PushEmpty(float)
0xd67: Call2 0xd22

0xd68: Pop(0)
0xd69: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd6a: Pop(5)
0xd6b: Push("b9q03Bonfire3")
0xd6c: Push("pt_bonfire3")
0xd6d: Push((int) 0)
0xd6e: Push((int) 531509)
0xd6f: PushEmpty(float)
0xd70: Call2 0xd22

0xd71: Pop(0)
0xd72: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd73: Pop(5)
0xd74: Push("b9q03Bonfire4")
0xd75: Push("pt_bonfire4")
0xd76: Push((int) 0)
0xd77: Push((int) 531510)
0xd78: PushEmpty(float)
0xd79: Call2 0xd22

0xd7a: Pop(0)
0xd7b: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xd7c: Pop(5)
0xd7d: PushEmpty()
0xd7e: Call2 0xdc1

0xd7f: Pop(0)
0xd80: Return(); Pop(2)

0xd81: Stack[-1] = 0
0xd82: PushEmpty()
0xd83: Push((int) 4)
0xd84: @@ SetReturnValue(Stack[-1])
0xd85: Pop(1)
0xd86: Return(); Pop(0)

0xd87: PushEmpty()
0xd88: PushEmpty()
0xd89: Call2 0xdce

0xd8a: Pop(0)
0xd8b: Return(); Pop(0)

0xd8c: PushEmpty()
0xd8d: PushEmpty(object, string, float)
0xd8e: PushEmpty(object)
0xd8f: Call2 0xe04

0xd90: Stack[-4] = Stack[-1]
0xd91: Pop(1)
0xd92: Stack[-2] = "pt_bonfire1"
0xd93: Stack[-1] = (int) 2
0xd94: Call2 0xe15

0xd95: Pop(3)
0xd96: PushEmpty(object)
0xd97: Call2 0xe04

0xd98: Pop(0)
0xd99: @@ ShowMap(Stack[-1])
0xd9a: Pop(1)
0xd9b: Return(); Pop(0)

0xd9c: PushEmpty()
0xd9d: PushEmpty(int, string)
0xd9e: Stack[-1] = "oob9BoyFollower1"
0xd9f: Call2 0xd11

0xda0: Pop(1)
0xda1: Push((int) 0)
0xda2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xda3: IF (Stack[-1] == 0) GOTO 0xda6; Pop(1)

0xda4: Stack[-2] = (bool) 1
0xda5: Return(); Pop(0)

0xda6: Stack[-2] = (bool) 0
0xda7: Return(); Pop(0)

0xda8: PushEmpty()
0xda9: PushEmpty(int, string)
0xdaa: Stack[-1] = "b9q03BonefiresCount"
0xdab: Call2 0xd11

0xdac: Pop(1)
0xdad: Push((int) 4)
0xdae: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdaf: IF (Stack[-1] == 0) GOTO 0xdb2; Pop(1)

0xdb0: Stack[-2] = (bool) 1
0xdb1: Return(); Pop(0)

0xdb2: Stack[-2] = (bool) 0
0xdb3: Return(); Pop(0)

0xdb4: PushEmpty(object, object)
0xdb5: Push((int) 543)
0xdb6: Push((int) 2)
0xdb7: Push((int) 530355)
0xdb8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdb9: Pop(3)
0xdba: PushEmpty(bool, object, int)
0xdbb: Stack[-2] = Stack[-4]
0xdbc: Stack[-1] = (int) 532
0xdbd: Call2 0xde8

0xdbe: Pop(3)
0xdbf: Return(); Pop(2)

0xdc0: Stack[-1] = 0
0xdc1: PushEmpty(object, object)
0xdc2: Push((int) 534)
0xdc3: Push((int) 2)
0xdc4: Push((int) 530346)
0xdc5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdc6: Pop(3)
0xdc7: PushEmpty(bool, object, int)
0xdc8: Stack[-2] = Stack[-4]
0xdc9: Stack[-1] = (int) 532
0xdca: Call2 0xde8

0xdcb: Pop(3)
0xdcc: Return(); Pop(2)

0xdcd: Stack[-1] = 0
0xdce: PushEmpty(object, object)
0xdcf: Push((int) 535)
0xdd0: Push((int) 2)
0xdd1: Push((int) 530347)
0xdd2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xdd3: Pop(3)
0xdd4: PushEmpty(bool, object, int)
0xdd5: Stack[-2] = Stack[-4]
0xdd6: Stack[-1] = (int) 532
0xdd7: Call2 0xde8

0xdd8: Pop(3)
0xdd9: Return(); Pop(2)

0xdda: Stack[-1] = 0
0xddb: PushEmpty(object, object)
0xddc: @ GetDiaryRoot(Stack[-1])
0xddd: Pop(0)
0xdde: Pop(0); Push((bool) Stack[-1] == 0)
0xddf: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xde0: Push("Can't retrieve diary root")
0xde1: @ Trace(Stack[-1])
0xde2: Pop(1)
0xde3: Stack[-3] = (bool) 0
0xde4: Return(); Pop(2)

0xde5: Stack[-3] = Stack[-1]
0xde6: Return(); Pop(2)

0xde7: Stack[-1] = 0
0xde8: PushEmpty(object, object, int, object, object, int)
0xde9: PushEmpty(object)
0xdea: Call2 0xddb

0xdeb: Stack[-4] = Stack[-1]
0xdec: Pop(1)
0xded: @@ Find(Stack[-7], Stack[-2])
0xdee: Pop(0)
0xdef: Pop(0); Push((bool) Stack[-2] == 0)
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xdf1: Push("Can't find diary parent with id: ")
0xdf2: Pop(1); Push(Stack[-1] + Stack[-8]);
0xdf3: @ Trace(Stack[-1])
0xdf4: Pop(1)
0xdf5: Stack[-9] = (bool) 0
0xdf6: Return(); Pop(6)

0xdf7: @@ AddChild(Stack[-8])
0xdf8: Pop(0)
0xdf9: Push((int) 7)
0xdfa: @ SendWorldWndMessage(Stack[-1])
0xdfb: Pop(1)
0xdfc: @@ GetCategory(Stack[-1])
0xdfd: Pop(0)
0xdfe: @ SetDiarySection(Stack[-1])
0xdff: Pop(0)
0xe00: Stack[-9] = (bool) 0
0xe01: Return(); Pop(6)

0xe02: Stack[-2] = 0
0xe03: Stack[-3] = 0
0xe04: PushEmpty(object, object, object, object)
0xe05: @ GetMainOutdoorScene(Stack[-2])
0xe06: Pop(0)
0xe07: Pop(0); Push((bool) Stack[-2] == 0)
0xe08: IF (Stack[-1] == 0) GOTO 0xe0f; Pop(1)

0xe09: Push("Can't find main outdoor scene")
0xe0a: @ Trace(Stack[-1])
0xe0b: Pop(1)
0xe0c: Stack[-1] = 0
0xe0d: Stack[-5] = Stack[-1]
0xe0e: Return(); Pop(4)

0xe0f: @@ GetMap(Stack[-1])
0xe10: Pop(0)
0xe11: Stack[-5] = Stack[-1]
0xe12: Return(); Pop(4)

0xe13: Stack[-1] = 0
0xe14: Stack[-2] = 0
0xe15: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0xe16: @ GetMainOutdoorScene(Stack[-2])
0xe17: Pop(0)
0xe18: Pop(0); Push((bool) Stack[-2] == 0)
0xe19: IF (Stack[-1] == 0) GOTO 0xe1e; Pop(1)

0xe1a: Push("Can't find main outdoor scene")
0xe1b: @ Trace(Stack[-1])
0xe1c: Pop(1)
0xe1d: Return(); Pop(8)

0xe1e: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0xe1f: Pop(0)
0xe20: Pop(0); Push((bool) Stack[-1] == 0)
0xe21: IF (Stack[-1] == 0) GOTO 0xe28; Pop(1)

0xe22: Push("Warning: outdoor scene locator ")
0xe23: Pop(1); Push(Stack[-1] + Stack[-11]);
0xe24: Push(" doesnt exist")
0xe25: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe26: @ Trace(Stack[-1])
0xe27: Pop(1)
0xe28: @@ GetMap(Stack[-11])
0xe29: Pop(0)
0xe2a: Pop(0); Push((bool) Stack[-11] == 0)
0xe2b: IF (Stack[-1] == 0) GOTO 0xe30; Pop(1)

0xe2c: Push("Can't find map")
0xe2d: @ Trace(Stack[-1])
0xe2e: Pop(1)
0xe2f: Return(); Pop(8)

0xe30: Push(CvectorIndex(Stack[-4], 0))
0xe31: Push(CvectorIndex(Stack[-5], 2))
0xe32: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0xe33: Pop(2)
0xe34: Return(); Pop(8)

0xe35: Stack[-2] = 0
0xe36: PushEmpty(int, int)
0xe37: Push("branch")
0xe38: @ GetVariable(Stack[-1], Stack[-2])
0xe39: Pop(1)
0xe3a: Push((int) 0)
0xe3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe3c: IF (Stack[-1] == 0) GOTO 0xe40; Pop(1)

0xe3d: Stack[-3] = (int) 1
0xe3e: Return(); Pop(2)

0xe3f: GOTO 0xe45

0xe40: Push((int) 1)
0xe41: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe42: IF (Stack[-1] == 0) GOTO 0xe45; Pop(1)

0xe43: Stack[-3] = (int) 2
0xe44: Return(); Pop(2)

0xe45: Stack[-3] = (int) 3
0xe46: Return(); Pop(2)

0xe47: PushEmpty(int, int)
0xe48: Push("branch")
0xe49: @ GetVariable(Stack[-1], Stack[-2])
0xe4a: Pop(1)
0xe4b: Stack[-3] = Stack[-1]
0xe4c: Return(); Pop(2)

0xe4d: PushEmpty()
0xe4e: PushEmpty(int)
0xe4f: Call2 0xe47

0xe50: Pop(0)
0xe51: Push((int) 1)
0xe52: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xe53: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe54: @ WorkWithCorpse(Stack[-1])
0xe55: Pop(0)
0xe56: GOTO 0xe59

0xe57: @ Barter(Stack[-1])
0xe58: Pop(0)
0xe59: Return(); Pop(0)

0xe5a: PushEmpty(object, int, bool, object, int, bool)
0xe5b: @ CreateInvItem(Stack[-3])
0xe5c: Pop(0)
0xe5d: @@ SetItemName(Stack[-7])
0xe5e: Pop(0)
0xe5f: Push("Organ")
0xe60: Push((int) 1)
0xe61: @@ SetProperty(Stack[-2], Stack[-1])
0xe62: Pop(2)
0xe63: @@ GetItemID(Stack[-2])
0xe64: Pop(0)
0xe65: Push((int) 0)
0xe66: Push((int) 1)
0xe67: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xe68: Pop(2)
0xe69: Return(); Pop(6)

0xe6a: Stack[-3] = 0
0xe6b: PushEmpty(int)
0xe6c: Call2 0xe47

0xe6d: Pop(0)
0xe6e: Push((int) 1)
0xe6f: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xe70: IF (Stack[-1] == 0) GOTO 0xe72; Pop(1)

0xe71: Return(); Pop(0)

0xe72: PushEmpty(string)
0xe73: Stack[-1] = "liver"
0xe74: Call2 0xe5a

0xe75: Pop(1)
0xe76: PushEmpty(string)
0xe77: Stack[-1] = "kidney"
0xe78: Call2 0xe5a

0xe79: Pop(1)
0xe7a: PushEmpty(string)
0xe7b: Stack[-1] = "heart"
0xe7c: Call2 0xe5a

0xe7d: Pop(1)
0xe7e: PushEmpty(string)
0xe7f: Stack[-1] = "blood"
0xe80: Call2 0xe5a

0xe81: Pop(1)
0xe82: Return(); Pop(0)

0xe83: Stack[-1] = (int) 515558
0xe84: Return(); Pop(0)

0xe85: Stack[-1] = (int) 503343
0xe86: Return(); Pop(0)

0xe87: Stack[-1] = "ui/NPC_Citizen3.png"
0xe88: Return(); Pop(0)

0xe89: Stack[-1] = "ui/NPC_Citizen3_b.png"
0xe8a: Return(); Pop(0)

0xe8b: Stack[-1] = (bool) 0
0xe8c: Return(); Pop(0)

0xe8d: PushEmpty(object, cvector, cvector, cvector, bool, float, int, int, cvector, float, object, cvector, cvector, cvector, bool, float, int, int, cvector, float)
0xe8e: @ GetScene(Stack[-10])
0xe8f: Pop(0)
0xe90: @ GetPosition(Stack[-9])
0xe91: Pop(0)
0xe92: Stack[-5] = (int) 9000000
0xe93: Stack[-4] = (int) 1
0xe94: Stack[-3] = (int) -1
0xe95: Push((bool) 1)
0xe96: IF (Stack[-1] == 0) GOTO 0xea7; Pop(1)

0xe97: Push("pt_b9q03_bonfire")
0xe98: Pop(1); Push(Stack[-1] + Stack[-5]);
0xe99: @@ GetLocator(Stack[-1], Stack[-7], Stack[-9], Stack[-8])
0xe9a: Pop(1)
0xe9b: Pop(0); Push((bool) Stack[-6] == 0)
0xe9c: IF (Stack[-1] == 0) GOTO 0xe9e; Pop(1)

0xe9d: GOTO 0xea7

0xe9e: Stack[-2] = Stack[-9] - Stack[-8]; Pop(0);
0xe9f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xea0: Pop(0); Push((bool) Stack[-1] < Stack[-5])
0xea1: IF (Stack[-1] == 0) GOTO 0xea4; Pop(1)

0xea2: Stack[-5] = Stack[-1]
0xea3: Stack[-3] = Stack[-4]
0xea4: Push((int) 1)
0xea5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xea6: GOTO 0xe95

0xea7: Stack[-21] = Stack[-3]
0xea8: Return(); Pop(20)

0xea9: Stack[-10] = 0
0xeaa: PushEmpty(int, int)
0xeab: Push("b9q03Bonfire")
0xeac: Pop(1); Push(Stack[-1] + Stack[-4]);
0xead: @ GetVariable(Stack[-1], Stack[-2])
0xeae: Pop(1)
0xeaf: Push((int) 0)
0xeb0: Stack[-5] = Stack[-2] != Stack[-1]; Pop(1);
0xeb1: Return(); Pop(2)

0xeb2: PushEmpty(string, string)
0xeb3: Stack[-1] = Stack[-3]
0xeb4: Push("enable_bonfire")
0xeb5: @ TriggerWorld(Stack[-1], Stack[-2])
0xeb6: Pop(1)
0xeb7: PushEmpty(bool, string, string)
0xeb8: Stack[-2] = "quest_b9_03"
0xeb9: Stack[-1] = "bonfire_burn"
0xeba: Call2 0xd16

0xebb: Pop(3)
0xebc: Push("b9q03Bonfire")
0xebd: Pop(1); Push(Stack[-1] + Stack[-4]);
0xebe: Push((int) 1)
0xebf: @ SetVariable(Stack[-2], Stack[-1])
0xec0: Pop(2)
0xec1: Return(); Pop(2)

0xec2: PushEmpty()
0xec3: Push("cleanup")
0xec4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec5: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec6: Push(GlobalVars[1])
0xec7: Stack[-1] = (bool) 1
0xec8: GlobalVars[1] = Stack[-1]; Pop(1)
0xec9: Return(); Pop(0)

0xeca: PushEmpty()
0xecb: Push((int) 1)
0xecc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xecd: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xece: Push("changing state to c_iStateWaitForCommand")
0xecf: @ Trace(Stack[-1])
0xed0: Pop(1)
0xed1: GOTO 0xf03

0xed2: Push((int) 2)
0xed3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed4: IF (Stack[-1] == 0) GOTO 0xed9; Pop(1)

0xed5: Push("changing state to c_iStateFollow")
0xed6: @ Trace(Stack[-1])
0xed7: Pop(1)
0xed8: GOTO 0xf03

0xed9: Push((int) 3)
0xeda: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xedb: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xedc: Push("changing state to c_iStateIdleAndFollow")
0xedd: @ Trace(Stack[-1])
0xede: Pop(1)
0xedf: GOTO 0xf03

0xee0: Push((int) 4)
0xee1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee2: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee3: Push("changing state to c_iStateRetreatPlayer")
0xee4: @ Trace(Stack[-1])
0xee5: Pop(1)
0xee6: GOTO 0xf03

0xee7: Push((int) 5)
0xee8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xee9: IF (Stack[-1] == 0) GOTO 0xeee; Pop(1)

0xeea: Push("changing state to c_iStateBurn")
0xeeb: @ Trace(Stack[-1])
0xeec: Pop(1)
0xeed: GOTO 0xf03

0xeee: Push((int) 0)
0xeef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xef0: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef1: Push(GlobalVars[5])
0xef2: Push(GlobalVars[2])
0xef3: Stack[-2] = Stack[-1]
0xef4: Pop(1)
0xef5: GlobalVars[5] = Stack[-1]; Pop(1)
0xef6: Push("changing state to c_iStateWaitForLoad")
0xef7: @ Trace(Stack[-1])
0xef8: Pop(1)
0xef9: GOTO 0xf03

0xefa: Push((int) 8)
0xefb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xefc: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xefd: Push("changing state to c_iStateGoAway")
0xefe: @ Trace(Stack[-1])
0xeff: Pop(1)
0xf00: GOTO 0xf03

0xf01: Stack[-2] = (bool) 0
0xf02: Return(); Pop(0)

0xf03: Push(GlobalVars[2])
0xf04: Stack[-1] = Stack[-2]
0xf05: GlobalVars[2] = Stack[-1]; Pop(1)
0xf06: Stack[-2] = (bool) 1
0xf07: Return(); Pop(0)

0xf08: PushEmpty()
0xf09: Push("changing state to c_iStateRetreat")
0xf0a: @ Trace(Stack[-1])
0xf0b: Pop(1)
0xf0c: Push(GlobalVars[2])
0xf0d: Stack[-1] = (int) 6
0xf0e: GlobalVars[2] = Stack[-1]; Pop(1)
0xf0f: Push(GlobalVars[3])
0xf10: Stack[-1] = Stack[-2]
0xf11: GlobalVars[3] = Stack[-1]; Pop(1)
0xf12: Return(); Pop(0)

0xf13: PushEmpty()
0xf14: Push("changing state to c_iStateRetreatPDamage")
0xf15: @ Trace(Stack[-1])
0xf16: Pop(1)
0xf17: Push(GlobalVars[2])
0xf18: Stack[-1] = (int) 7
0xf19: GlobalVars[2] = Stack[-1]; Pop(1)
0xf1a: Push(GlobalVars[4])
0xf1b: Stack[-1] = Stack[-2]
0xf1c: GlobalVars[4] = Stack[-1]; Pop(1)
0xf1d: Return(); Pop(0)

0xf1e: PushEmpty()
0xf1f: PushEmpty(object, int, float)
0xf20: Stack[-3] = Stack[-7]
0xf21: Stack[-2] = Stack[-6]
0xf22: Stack[-1] = Stack[-5]
0xf23: Call2 0xbf3

0xf24: Pop(3)
0xf25: Return(); Pop(0)

0xf26: PushEmpty()
0xf27: PushEmpty(object, int, float, cvector, cvector)
0xf28: Stack[-5] = Stack[-11]
0xf29: Stack[-4] = Stack[-10]
0xf2a: Stack[-3] = Stack[-9]
0xf2b: Stack[-2] = Stack[-7]
0xf2c: Stack[-1] = Stack[-6]
0xf2d: Call2 0xc37

0xf2e: Pop(5)
0xf2f: Return(); Pop(0)

0xf30: PushEmpty(float, float)
0xf31: Push("health")
0xf32: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf33: IF (Stack[-1] == 0) GOTO 0xf3c; Pop(1)

0xf34: Push("health")
0xf35: @ GetProperty(Stack[-1], Stack[-2])
0xf36: Pop(1)
0xf37: Push((int) 0)
0xf38: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0xf39: IF (Stack[-1] == 0) GOTO 0xf3c; Pop(1)

0xf3a: @ SignalDeath(Stack[-4])
0xf3b: Pop(0)
0xf3c: Return(); Pop(2)

0xf3d: PushEmpty(int, int)
0xf3e: PushEmpty(int, object)
0xf3f: Stack[-1] = Stack[-5]
0xf40: Push(-2, 1); TaskCall(0)
0xf41: Call2 0x0

0xf42: Pop(-2, 1); TaskReturn
0xf43: Stack[-3] = Stack[-2]
0xf44: Pop(2)
0xf45: Push((int) 2)
0xf46: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf47: IF (Stack[-1] == 0) GOTO 0xf4d; Pop(1)

0xf48: PushEmpty(bool, int)
0xf49: Stack[-1] = (int) 2
0xf4a: Call2 0xeca

0xf4b: Pop(2)
0xf4c: GOTO 0xf67

0xf4d: Push((int) 1)
0xf4e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4f: IF (Stack[-1] == 0) GOTO 0xf55; Pop(1)

0xf50: PushEmpty(bool, int)
0xf51: Stack[-1] = (int) 1
0xf52: Call2 0xeca

0xf53: Pop(2)
0xf54: GOTO 0xf67

0xf55: Push((int) 3)
0xf56: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf57: IF (Stack[-1] == 0) GOTO 0xf5d; Pop(1)

0xf58: PushEmpty(bool, int)
0xf59: Stack[-1] = (int) 5
0xf5a: Call2 0xeca

0xf5b: Pop(2)
0xf5c: GOTO 0xf67

0xf5d: Push((int) 4)
0xf5e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf60: PushEmpty(bool, int)
0xf61: Stack[-1] = (int) 8
0xf62: Call2 0xeca

0xf63: Pop(2)
0xf64: GOTO 0xf67

0xf65: Stack[-4] = (bool) 0
0xf66: Return(); Pop(2)

0xf67: Stack[-4] = (bool) 1
0xf68: Return(); Pop(2)

0xf69: PushEmpty()
0xf6a: PushEmpty()
0xf6b: Call2 0xdb4

0xf6c: Pop(0)
0xf6d: PushEmpty(bool, string, string)
0xf6e: Stack[-2] = "quest_b9_03"
0xf6f: Stack[-1] = "fail"
0xf70: Call2 0xd16

0xf71: Pop(3)
0xf72: PushEmpty(object)
0xf73: Stack[-1] = Stack[-2]
0xf74: Push(-1, 0); TaskCall(14)
0xf75: Call2 0xa86

0xf76: Pop(-1, 0); TaskReturn
0xf77: Pop(1)
0xf78: Return(); Pop(0)

0xf79: PushEmpty(object, cvector, cvector, cvector, float, object, cvector, cvector, cvector, float)
0xf7a: Push("player")
0xf7b: @ FindActor(Stack[-6], Stack[-1])
0xf7c: Pop(1)
0xf7d: PushEmpty(bool, object)
0xf7e: Stack[-1] = Stack[-7]
0xf7f: Call2 0xb9c

0xf80: Pop(1)
0xf81: Pop(1); Push((bool) Stack[-1] == 0)
0xf82: IF (Stack[-1] == 0) GOTO 0xf85; Pop(1)

0xf83: Stack[-12] = (bool) 0
0xf84: Return(); Pop(10)

0xf85: @@ GetPosition(Stack[-4])
0xf86: Pop(0)
0xf87: @@ GetPosition(Stack[-3])
0xf88: Pop(0)
0xf89: Stack[-2] = Stack[-4] - Stack[-3]; Pop(0);
0xf8a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xf8b: Push((float)75625.0)
0xf8c: Stack[-13] = Stack[-2] < Stack[-1]; Pop(1);
0xf8d: Return(); Pop(10)

0xf8e: Stack[-5] = 0
