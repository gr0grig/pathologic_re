GlobalVarCount = 1
	G_VAR_0 bool 

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
	fdie
	GetPosition
	bdie
	GetScriptProperty
	Owner
	HasScriptProperty
	GetScriptProperty
	@GetEyesHeight
	GetEyesHeight
	head
	attack_on
	attack_stay
	attack_off
	Can't retreat, distance: 
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
	branch
	GetItemID
	Price
	BarterPrice
	player
	reputation
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	SetProperty
	liver
	kidney
	heart
	blood
	lemon
	rusk
	hook
	syringe
	watch
	razor
	beads
	bracelet
	ear_ring
	gold_ring
	silver_ring
	flower
	health
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	class
	rat
	rat_big
	dog
	GetSubContainerCount
	GetItemCount
	GetItem
	HasDurability
	durability
	repair.xml
	money
	SetItem
	Category
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	GetPosition (1 args)
	GetDirection (1 args)
	RemoveRTEnvelope (0 args)
	SetDeathState (0 args)
	Stop (0 args)
	StopAsync (0 args)
	LookAsync (3 args)
	UnlookAsync (1 args)
	LockAnimationEnd (2 args)
	RemoveEnvelope (0 args)
	StopSecondaryAnimation (0 args)
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
	rand (2 args)
	Sleep (1 args)
	GetRandomPFPointInCircle (4 args)
	RotatePath (2 args)
	FollowPath (3 args)
	GetCameraFarDistance (1 args)
	RequestClearPath (1 args)
	StopGroup0 (0 args)
	FindShiftedPathTo (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	Sleep (2 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	GetScene (1 args)
	IsDead (1 args)
	GetSecondaryAnimationType (1 args)
	FadeSecondaryAnimation (4 args)
	CreateVectorVector (1 args)
	GetGeometryLocator (4 args)
	AddActorByType (6 args)
	RotateAsync (2 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	IsExisting3DSound (2 args)
	Is3DSoundLoaded (2 args)
	PlayGlobalSound (2 args)
	self (1 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	FindActor (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	AddItem (4 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	GetProperty (2 args)
	SignalDeath (1 args)
	ReportReputationChange (3 args)
	HasAnimation (3 args)
	CanSee (2 args)
	CreateIntVector (1 args)
	ChooseItem (4 args)
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x715
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x29f Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x688 Vars = (object)
		EVENT_6 Op = 0x696 Vars = ()
		EVENT_22 Op = 0x70f Vars = (object, int, float, float)
		EVENT_16 Op = 0x711 Vars = (object, string)
		EVENT_41 Op = 0x713 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x72d Vars = (object)
		EVENT_17 Op = 0x741 Vars = (object)
		EVENT_30 Op = 0x759 Vars = (object, object, bool)
		EVENT_40 Op = 0x775 Vars = (object)
		EVENT_42 Op = 0x789 Vars = (object, string)
		EVENT_26 Op = 0x7ae Vars = (string)
		EVENT_1 Op = 0x7bc Vars = (object)
		EVENT_3 Op = 0x7cf Vars = (object)
		EVENT_7 Op = 0x7d5 Vars = (int)
		EVENT_6 Op = 0x7e1 Vars = ()
		EVENT_41 Op = 0x7f8 Vars = (object)
		EVENT_10 Op = 0x869 Vars = (object)
		EVENT_28 Op = 0x86d Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x886 Vars = (object)
		EVENT_17 Op = 0x89a Vars = (object)
		EVENT_30 Op = 0x8b2 Vars = (object, object, bool)
		EVENT_40 Op = 0x8ce Vars = (object)
		EVENT_42 Op = 0x8e2 Vars = (object, string)
		EVENT_26 Op = 0x907 Vars = (string)
		EVENT_6 Op = 0x915 Vars = ()
		EVENT_1 Op = 0x91c Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x9b8 Vars = (object)
		EVENT_17 Op = 0x9cc Vars = (object)
		EVENT_30 Op = 0x9e4 Vars = (object, object, bool)
		EVENT_40 Op = 0xa00 Vars = (object)
		EVENT_42 Op = 0xa14 Vars = (object, string)
		EVENT_26 Op = 0xa39 Vars = (string)
		EVENT_41 Op = 0xa52 Vars = (object)
		EVENT_7 Op = 0xa5b Vars = (int)
		EVENT_6 Op = 0xa7e Vars = ()
		EVENT_1 Op = 0xa85 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xaaf Vars = ()
		EVENT_7 Op = 0xb1d Vars = (int)
		EVENT_41 Op = 0xb58 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xbd8 Vars = (int)
		EVENT_41 Op = 0xc13 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xc2c Vars = ()
		EVENT_7 Op = 0xc9a Vars = (int)
		EVENT_41 Op = 0xcd5 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xcee Vars = ()
		EVENT_7 Op = 0xd5c Vars = (int)
		EVENT_41 Op = 0xd97 Vars = (object)

Events:
EVENT_16 Op = 0x1232 Vars = (object, string)
EVENT_41 Op = 0x123f Vars = (object)
EVENT_22 Op = 0x1245 Vars = (object, int, float, float)
EVENT_43 Op = 0x124d Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xea4

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1464

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1462

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1466

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1468

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x10b7

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
0x41: Call2 0xee9

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
0x4f: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xfca

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x200; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x289

0x58: Pop(1)
0x59: Push((int) 543180)
0x5a: @@ SetMessage(Stack[-1])
0x5b: Pop(1)
0x5c: @@ ClearReplies()
0x5d: Pop(0)
0x5e: PushEmpty(bool)
0x5f: Stack[-1] = (bool) 1
0x60: PushEmpty(bool)
0x61: Stack[-1] = (bool) 1
0x62: PushEmpty(bool)
0x63: Stack[-1] = (bool) 1
0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0xfd6

0x67: Pop(1)
0x68: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x69: PushEmpty(bool, object)
0x6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6b: Call2 0xfea

0x6c: Pop(1)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 0
0x6f: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x70: PushEmpty(bool, object)
0x71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72: Call2 0xff4

0x73: Pop(1)
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: Stack[-1] = (bool) 0
0x76: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x77: PushEmpty(bool, object)
0x78: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79: Call2 0xffe

0x7a: Pop(1)
0x7b: IF (Stack[-1] == 0) GOTO 0x7d; Pop(1)

0x7c: Stack[-1] = (bool) 0
0x7d: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x7e: Push((int) 543189)
0x7f: Push((int) 45648)
0x80: Push((int) 45645)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: PushEmpty(bool)
0x84: Stack[-1] = (bool) 1
0x85: PushEmpty(bool)
0x86: Stack[-1] = (bool) 1
0x87: PushEmpty(bool)
0x88: Stack[-1] = (bool) 1
0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0xfe0

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x8e: PushEmpty(bool, object)
0x8f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90: Call2 0x1008

0x91: Pop(1)
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x95: PushEmpty(bool, object)
0x96: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97: Call2 0x1026

0x98: Pop(1)
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0x9c: PushEmpty(bool, object)
0x9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e: Call2 0x1030

0x9f: Pop(1)
0xa0: IF (Stack[-1] == 0) GOTO 0xa2; Pop(1)

0xa1: Stack[-1] = (bool) 0
0xa2: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa3: Push((int) 543190)
0xa4: Push((int) 45655)
0xa5: Push((int) 45646)
0xa6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7: Pop(3)
0xa8: PushEmpty(bool)
0xa9: Stack[-1] = (bool) 1
0xaa: PushEmpty(bool)
0xab: Stack[-1] = (bool) 1
0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0x1012

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb1: PushEmpty(bool, object)
0xb2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb3: Call2 0x101c

0xb4: Pop(1)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Stack[-1] = (bool) 0
0xb7: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xb8: PushEmpty(bool, object)
0xb9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba: Call2 0xfea

0xbb: Pop(1)
0xbc: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xbd: Stack[-1] = (bool) 0
0xbe: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xbf: Push((int) 543191)
0xc0: Push((int) 45656)
0xc1: Push((int) 45647)
0xc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3: Pop(3)
0xc4: PushEmpty(bool)
0xc5: Stack[-1] = (bool) 1
0xc6: PushEmpty(bool)
0xc7: Stack[-1] = (bool) 1
0xc8: PushEmpty(bool, object)
0xc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xca: Call2 0xfd6

0xcb: Pop(1)
0xcc: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xcd: PushEmpty(bool, object)
0xce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Call2 0xfe0

0xd0: Pop(1)
0xd1: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xd2: Stack[-1] = (bool) 0
0xd3: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd4: PushEmpty(bool, object)
0xd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd6: Call2 0xfea

0xd7: Pop(1)
0xd8: IF (Stack[-1] == 0) GOTO 0xda; Pop(1)

0xd9: Stack[-1] = (bool) 0
0xda: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdb: Push((int) 543182)
0xdc: Push((int) -1)
0xdd: Push((int) 45638)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: PushEmpty(bool)
0xe1: Stack[-1] = (bool) 1
0xe2: PushEmpty(bool)
0xe3: Stack[-1] = (bool) 1
0xe4: PushEmpty(bool)
0xe5: Stack[-1] = (bool) 1
0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0xfd6

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xeb: PushEmpty(bool, object)
0xec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xed: Call2 0xfe0

0xee: Pop(1)
0xef: IF (Stack[-1] == 0) GOTO 0xf1; Pop(1)

0xf0: Stack[-1] = (bool) 0
0xf1: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf2: PushEmpty(bool, object)
0xf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf4: Call2 0xfea

0xf5: Pop(1)
0xf6: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf7: Stack[-1] = (bool) 0
0xf8: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xf9: PushEmpty(bool, object)
0xfa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfb: Call2 0xff4

0xfc: Pop(1)
0xfd: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfe: Stack[-1] = (bool) 0
0xff: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0x100: Push((int) 543183)
0x101: Push((int) -1)
0x102: Push((int) 45639)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: PushEmpty(bool)
0x106: Stack[-1] = (bool) 1
0x107: PushEmpty(bool)
0x108: Stack[-1] = (bool) 1
0x109: PushEmpty(bool)
0x10a: Stack[-1] = (bool) 1
0x10b: PushEmpty(bool)
0x10c: Stack[-1] = (bool) 1
0x10d: PushEmpty(bool, object)
0x10e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Call2 0xff4

0x110: Pop(1)
0x111: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0xffe

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Stack[-1] = (bool) 0
0x118: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x119: PushEmpty(bool, object)
0x11a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Call2 0x1008

0x11c: Pop(1)
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Stack[-1] = (bool) 0
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x1012

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 0
0x126: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0x101c

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-1] = (bool) 0
0x12d: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x12e: Push((int) 543187)
0x12f: Push((int) -1)
0x130: Push((int) 45643)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: PushEmpty(bool)
0x134: Stack[-1] = (bool) 1
0x135: PushEmpty(bool)
0x136: Stack[-1] = (bool) 1
0x137: PushEmpty(bool)
0x138: Stack[-1] = (bool) 1
0x139: PushEmpty(bool, object)
0x13a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13b: Call2 0x1026

0x13c: Pop(1)
0x13d: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13e: PushEmpty(bool, object)
0x13f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x140: Call2 0x1030

0x141: Pop(1)
0x142: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x143: Stack[-1] = (bool) 0
0x144: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0x103a

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x14a: Stack[-1] = (bool) 0
0x14b: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x14c: PushEmpty(bool, object)
0x14d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Call2 0x1044

0x14f: Pop(1)
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: Stack[-1] = (bool) 0
0x152: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x153: Push((int) 543208)
0x154: Push((int) -1)
0x155: Push((int) 45664)
0x156: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x157: Pop(3)
0x158: PushEmpty(bool)
0x159: Stack[-1] = (bool) 1
0x15a: PushEmpty(bool)
0x15b: Stack[-1] = (bool) 1
0x15c: PushEmpty(bool, object)
0x15d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15e: Call2 0xfd6

0x15f: Pop(1)
0x160: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x161: PushEmpty(bool, object)
0x162: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x163: Call2 0xfe0

0x164: Pop(1)
0x165: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x166: Stack[-1] = (bool) 0
0x167: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x168: PushEmpty(bool, object)
0x169: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x16a: Call2 0xfea

0x16b: Pop(1)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Stack[-1] = (bool) 0
0x16e: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x16f: Push((int) 543181)
0x170: Push((int) -1)
0x171: Push((int) 45637)
0x172: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x173: Pop(3)
0x174: PushEmpty(bool)
0x175: Stack[-1] = (bool) 1
0x176: PushEmpty(bool)
0x177: Stack[-1] = (bool) 1
0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0xff4

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x17d: PushEmpty(bool, object)
0x17e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17f: Call2 0xffe

0x180: Pop(1)
0x181: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x182: Stack[-1] = (bool) 0
0x183: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x184: PushEmpty(bool, object)
0x185: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x186: Call2 0x1008

0x187: Pop(1)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Stack[-1] = (bool) 0
0x18a: IF (Stack[-1] == 0) GOTO 0x190; Pop(1)

0x18b: Push((int) 543184)
0x18c: Push((int) -1)
0x18d: Push((int) 45640)
0x18e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18f: Pop(3)
0x190: PushEmpty(bool)
0x191: Stack[-1] = (bool) 1
0x192: PushEmpty(bool)
0x193: Stack[-1] = (bool) 1
0x194: PushEmpty(bool)
0x195: Stack[-1] = (bool) 1
0x196: PushEmpty(bool, object)
0x197: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x198: Call2 0xfea

0x199: Pop(1)
0x19a: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19b: PushEmpty(bool, object)
0x19c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x19d: Call2 0x1008

0x19e: Pop(1)
0x19f: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x1a0: Stack[-1] = (bool) 0
0x1a1: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a2: PushEmpty(bool, object)
0x1a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a4: Call2 0x1012

0x1a5: Pop(1)
0x1a6: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a7: Stack[-1] = (bool) 0
0x1a8: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1a9: PushEmpty(bool, object)
0x1aa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ab: Call2 0x101c

0x1ac: Pop(1)
0x1ad: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ae: Stack[-1] = (bool) 0
0x1af: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b0: Push((int) 543185)
0x1b1: Push((int) -1)
0x1b2: Push((int) 45641)
0x1b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b4: Pop(3)
0x1b5: PushEmpty(bool)
0x1b6: Stack[-1] = (bool) 1
0x1b7: PushEmpty(bool)
0x1b8: Stack[-1] = (bool) 1
0x1b9: PushEmpty(bool, object)
0x1ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Call2 0x1026

0x1bc: Pop(1)
0x1bd: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1be: PushEmpty(bool, object)
0x1bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c0: Call2 0x1030

0x1c1: Pop(1)
0x1c2: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1c3: Stack[-1] = (bool) 0
0x1c4: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1c5: PushEmpty(bool, object)
0x1c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c7: Call2 0x103a

0x1c8: Pop(1)
0x1c9: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1ca: Stack[-1] = (bool) 0
0x1cb: IF (Stack[-1] == 0) GOTO 0x1d1; Pop(1)

0x1cc: Push((int) 543186)
0x1cd: Push((int) -1)
0x1ce: Push((int) 45642)
0x1cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d0: Pop(3)
0x1d1: PushEmpty(bool)
0x1d2: Stack[-1] = (bool) 1
0x1d3: PushEmpty(bool)
0x1d4: Stack[-1] = (bool) 1
0x1d5: PushEmpty(bool)
0x1d6: Stack[-1] = (bool) 1
0x1d7: PushEmpty(bool)
0x1d8: Stack[-1] = (bool) 1
0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0x1008

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call2 0x101c

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = (bool) 0
0x1e4: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0x1026

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 0
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call2 0x1044

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (bool) 0
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f3: PushEmpty(bool, object)
0x1f4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f5: Call2 0x1030

0x1f6: Pop(1)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1f9; Pop(1)

0x1f8: Stack[-1] = (bool) 0
0x1f9: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0x1fa: Push((int) 543188)
0x1fb: Push((int) -1)
0x1fc: Push((int) 45644)
0x1fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fe: Pop(3)
0x1ff: GOTO 0x26b

0x200: PushEmpty(string)
0x201: Stack[-1] = "Neutral"
0x202: Call2 0x289

0x203: Pop(1)
0x204: Push((int) 538167)
0x205: @@ SetMessage(Stack[-1])
0x206: Pop(1)
0x207: @@ ClearReplies()
0x208: Pop(0)
0x209: Push((int) 538168)
0x20a: Push((int) -1)
0x20b: Push((int) 40043)
0x20c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x20d: Pop(3)
0x20e: PushEmpty(bool)
0x20f: Stack[-1] = (bool) 0
0x210: PushEmpty(bool, object)
0x211: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x212: Call2 0xfd6

0x213: Pop(1)
0x214: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x215: PushEmpty(bool, object)
0x216: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x217: Call2 0xfb2

0x218: Pop(1)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Stack[-1] = (bool) 1
0x21b: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x21c: Push((int) 538169)
0x21d: Push((int) 40045)
0x21e: Push((int) 40044)
0x21f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x220: Pop(3)
0x221: PushEmpty(bool)
0x222: Stack[-1] = (bool) 0
0x223: PushEmpty(bool)
0x224: Stack[-1] = (bool) 0
0x225: PushEmpty(bool, object)
0x226: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x227: Call2 0xfd6

0x228: Pop(1)
0x229: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22a: PushEmpty(bool, object)
0x22b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22c: Call2 0x104e

0x22d: Pop(1)
0x22e: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22f: Stack[-1] = (bool) 1
0x230: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x231: PushEmpty(bool, object)
0x232: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x233: Call2 0xfb2

0x234: Pop(1)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Stack[-1] = (bool) 1
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: Push((int) 538179)
0x239: Push((int) 40055)
0x23a: Push((int) 40054)
0x23b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23c: Pop(3)
0x23d: PushEmpty(bool)
0x23e: Stack[-1] = (bool) 0
0x23f: PushEmpty(bool, object)
0x240: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x241: Call2 0xfe0

0x242: Pop(1)
0x243: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x244: PushEmpty(bool, object)
0x245: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x246: Call2 0xfb2

0x247: Pop(1)
0x248: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x249: Stack[-1] = (bool) 1
0x24a: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24b: Push((int) 538190)
0x24c: Push((int) 40067)
0x24d: Push((int) 40066)
0x24e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24f: Pop(3)
0x250: PushEmpty(bool)
0x251: Stack[-1] = (bool) 1
0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call2 0xfb2

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x257: PushEmpty(bool, object)
0x258: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x259: Call2 0xfbe

0x25a: Pop(1)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[-1] = (bool) 0
0x25d: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25e: Push((int) 538204)
0x25f: Push((int) -1)
0x260: Push((int) 40081)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Push((int) 538205)
0x264: Push((int) -1)
0x265: Push((int) 40082)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: GOTO 0x26b

0x269: Return(); Pop(0)

0x26a: GOTO 0x4e

0x26b: PushEmpty(bool)
0x26c: Call2 0x146a

0x26d: Pop(0)
0x26e: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x26f: @ lshWaitForAnimEnd()
0x270: Pop(0)
0x271: Push( Stack[3 + Tasks[-1].StackPointer] )
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x279

0x274: PushEmpty(string)
0x275: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x276: Call2 0xefb

0x277: Pop(1)
0x278: GOTO 0x26f

0x279: GOTO 0x288

0x27a: Push("all")
0x27b: Push("idle")
0x27c: @ PlayAnimation(Stack[-2], Stack[-1])
0x27d: Pop(2)
0x27e: @ WaitForAnimEnd()
0x27f: Pop(0)
0x280: Push( Stack[3 + Tasks[-1].StackPointer] )
0x281: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x282: GOTO 0x288

0x283: Push("all")
0x284: Push("idle")
0x285: @ PlayAnimation(Stack[-2], Stack[-1])
0x286: Pop(2)
0x287: GOTO 0x27e

0x288: Return(); Pop(0)

0x289: PushEmpty()
0x28a: PushEmpty(bool)
0x28b: Call2 0x146a

0x28c: Pop(0)
0x28d: Pop(1); Push((bool) Stack[-1] == 0)
0x28e: IF (Stack[-1] == 0) GOTO 0x290; Pop(1)

0x28f: Return(); Pop(0)

0x290: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x291: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x292: Return(); Pop(0)

0x293: PushEmpty(string, bool)
0x294: Stack[-2] = Stack[-3]
0x295: Push("")
0x296: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x297: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x298: Stack[-1] = (bool) 0
0x299: GOTO 0x29b

0x29a: Stack[-1] = (bool) 1
0x29b: Call2 0xf0b

0x29c: Pop(2)
0x29d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x29e: Return(); Pop(0)

0x29f: PushEmpty()
0x2a0: Push((int) 1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x2a2: PushEmpty()
0x2a3: Call2 0xf25

0x2a4: Pop(0)
0x2a5: Push((int) 45638)
0x2a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2a7: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a8: PushEmpty(object, object)
0x2a9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ab: Call2 0xfad

0x2ac: Pop(2)
0x2ad: Push((int) 45639)
0x2ae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2af: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b0: PushEmpty(object, object)
0x2b1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2b2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b3: Call2 0xfad

0x2b4: Pop(2)
0x2b5: Push((int) 45643)
0x2b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2b8: PushEmpty(object, object)
0x2b9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2bb: Call2 0xfad

0x2bc: Pop(2)
0x2bd: Push((int) 45664)
0x2be: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c5; Pop(1)

0x2c0: PushEmpty(object, object)
0x2c1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c3: Call2 0xfad

0x2c4: Pop(2)
0x2c5: Push((int) 40043)
0x2c6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c7: IF (Stack[-1] == 0) GOTO 0x2cd; Pop(1)

0x2c8: PushEmpty(object, object)
0x2c9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cb: Call2 0xfad

0x2cc: Pop(2)
0x2cd: Push((int) 45636)
0x2ce: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2cf: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x2d0: PushEmpty(bool, object)
0x2d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d2: Call2 0xfca

0x2d3: Pop(1)
0x2d4: IF (Stack[-1] == 0) GOTO 0x480; Pop(1)

0x2d5: PushEmpty(string)
0x2d6: Stack[-1] = "Neutral"
0x2d7: Call2 0x289

0x2d8: Pop(1)
0x2d9: Push((int) 543180)
0x2da: @@ SetMessage(Stack[-1])
0x2db: Pop(1)
0x2dc: @@ ClearReplies()
0x2dd: Pop(0)
0x2de: PushEmpty(bool)
0x2df: Stack[-1] = (bool) 1
0x2e0: PushEmpty(bool)
0x2e1: Stack[-1] = (bool) 1
0x2e2: PushEmpty(bool)
0x2e3: Stack[-1] = (bool) 1
0x2e4: PushEmpty(bool, object)
0x2e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e6: Call2 0xfd6

0x2e7: Pop(1)
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2e9: PushEmpty(bool, object)
0x2ea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Call2 0xfea

0x2ec: Pop(1)
0x2ed: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ee: Stack[-1] = (bool) 0
0x2ef: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f0: PushEmpty(bool, object)
0x2f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f2: Call2 0xff4

0x2f3: Pop(1)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: Stack[-1] = (bool) 0
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2f7: PushEmpty(bool, object)
0x2f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f9: Call2 0xffe

0x2fa: Pop(1)
0x2fb: IF (Stack[-1] == 0) GOTO 0x2fd; Pop(1)

0x2fc: Stack[-1] = (bool) 0
0x2fd: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2fe: Push((int) 543189)
0x2ff: Push((int) 45648)
0x300: Push((int) 45645)
0x301: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x302: Pop(3)
0x303: PushEmpty(bool)
0x304: Stack[-1] = (bool) 1
0x305: PushEmpty(bool)
0x306: Stack[-1] = (bool) 1
0x307: PushEmpty(bool)
0x308: Stack[-1] = (bool) 1
0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call2 0xfe0

0x30c: Pop(1)
0x30d: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x30e: PushEmpty(bool, object)
0x30f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x310: Call2 0x1008

0x311: Pop(1)
0x312: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x313: Stack[-1] = (bool) 0
0x314: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x315: PushEmpty(bool, object)
0x316: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x317: Call2 0x1026

0x318: Pop(1)
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: Stack[-1] = (bool) 0
0x31b: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31e: Call2 0x1030

0x31f: Pop(1)
0x320: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x321: Stack[-1] = (bool) 0
0x322: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x323: Push((int) 543190)
0x324: Push((int) 45655)
0x325: Push((int) 45646)
0x326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x327: Pop(3)
0x328: PushEmpty(bool)
0x329: Stack[-1] = (bool) 1
0x32a: PushEmpty(bool)
0x32b: Stack[-1] = (bool) 1
0x32c: PushEmpty(bool, object)
0x32d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32e: Call2 0x1012

0x32f: Pop(1)
0x330: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x331: PushEmpty(bool, object)
0x332: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x333: Call2 0x101c

0x334: Pop(1)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: Stack[-1] = (bool) 0
0x337: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x338: PushEmpty(bool, object)
0x339: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33a: Call2 0xfea

0x33b: Pop(1)
0x33c: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33d: Stack[-1] = (bool) 0
0x33e: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x33f: Push((int) 543191)
0x340: Push((int) 45656)
0x341: Push((int) 45647)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: PushEmpty(bool)
0x345: Stack[-1] = (bool) 1
0x346: PushEmpty(bool)
0x347: Stack[-1] = (bool) 1
0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Call2 0xfd6

0x34b: Pop(1)
0x34c: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x34d: PushEmpty(bool, object)
0x34e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34f: Call2 0xfe0

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x353; Pop(1)

0x352: Stack[-1] = (bool) 0
0x353: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x354: PushEmpty(bool, object)
0x355: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x356: Call2 0xfea

0x357: Pop(1)
0x358: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x359: Stack[-1] = (bool) 0
0x35a: IF (Stack[-1] == 0) GOTO 0x360; Pop(1)

0x35b: Push((int) 543182)
0x35c: Push((int) -1)
0x35d: Push((int) 45638)
0x35e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35f: Pop(3)
0x360: PushEmpty(bool)
0x361: Stack[-1] = (bool) 1
0x362: PushEmpty(bool)
0x363: Stack[-1] = (bool) 1
0x364: PushEmpty(bool)
0x365: Stack[-1] = (bool) 1
0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0xfd6

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x36b: PushEmpty(bool, object)
0x36c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36d: Call2 0xfe0

0x36e: Pop(1)
0x36f: IF (Stack[-1] == 0) GOTO 0x371; Pop(1)

0x370: Stack[-1] = (bool) 0
0x371: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x372: PushEmpty(bool, object)
0x373: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x374: Call2 0xfea

0x375: Pop(1)
0x376: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x377: Stack[-1] = (bool) 0
0x378: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x379: PushEmpty(bool, object)
0x37a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37b: Call2 0xff4

0x37c: Pop(1)
0x37d: IF (Stack[-1] == 0) GOTO 0x37f; Pop(1)

0x37e: Stack[-1] = (bool) 0
0x37f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x380: Push((int) 543183)
0x381: Push((int) -1)
0x382: Push((int) 45639)
0x383: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x384: Pop(3)
0x385: PushEmpty(bool)
0x386: Stack[-1] = (bool) 1
0x387: PushEmpty(bool)
0x388: Stack[-1] = (bool) 1
0x389: PushEmpty(bool)
0x38a: Stack[-1] = (bool) 1
0x38b: PushEmpty(bool)
0x38c: Stack[-1] = (bool) 1
0x38d: PushEmpty(bool, object)
0x38e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38f: Call2 0xff4

0x390: Pop(1)
0x391: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x392: PushEmpty(bool, object)
0x393: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x394: Call2 0xffe

0x395: Pop(1)
0x396: IF (Stack[-1] == 0) GOTO 0x398; Pop(1)

0x397: Stack[-1] = (bool) 0
0x398: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39b: Call2 0x1008

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x39e: Stack[-1] = (bool) 0
0x39f: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a0: PushEmpty(bool, object)
0x3a1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a2: Call2 0x1012

0x3a3: Pop(1)
0x3a4: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a5: Stack[-1] = (bool) 0
0x3a6: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3a7: PushEmpty(bool, object)
0x3a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a9: Call2 0x101c

0x3aa: Pop(1)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Stack[-1] = (bool) 0
0x3ad: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ae: Push((int) 543187)
0x3af: Push((int) -1)
0x3b0: Push((int) 45643)
0x3b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b2: Pop(3)
0x3b3: PushEmpty(bool)
0x3b4: Stack[-1] = (bool) 1
0x3b5: PushEmpty(bool)
0x3b6: Stack[-1] = (bool) 1
0x3b7: PushEmpty(bool)
0x3b8: Stack[-1] = (bool) 1
0x3b9: PushEmpty(bool, object)
0x3ba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3bb: Call2 0x1026

0x3bc: Pop(1)
0x3bd: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3be: PushEmpty(bool, object)
0x3bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c0: Call2 0x1030

0x3c1: Pop(1)
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: Stack[-1] = (bool) 0
0x3c4: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c5: PushEmpty(bool, object)
0x3c6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3c7: Call2 0x103a

0x3c8: Pop(1)
0x3c9: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3ca: Stack[-1] = (bool) 0
0x3cb: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3cc: PushEmpty(bool, object)
0x3cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ce: Call2 0x1044

0x3cf: Pop(1)
0x3d0: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d1: Stack[-1] = (bool) 0
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d8; Pop(1)

0x3d3: Push((int) 543208)
0x3d4: Push((int) -1)
0x3d5: Push((int) 45664)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: PushEmpty(bool)
0x3d9: Stack[-1] = (bool) 1
0x3da: PushEmpty(bool)
0x3db: Stack[-1] = (bool) 1
0x3dc: PushEmpty(bool, object)
0x3dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3de: Call2 0xfd6

0x3df: Pop(1)
0x3e0: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Call2 0xfe0

0x3e4: Pop(1)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3e7; Pop(1)

0x3e6: Stack[-1] = (bool) 0
0x3e7: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e8: PushEmpty(bool, object)
0x3e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ea: Call2 0xfea

0x3eb: Pop(1)
0x3ec: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3ed: Stack[-1] = (bool) 0
0x3ee: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3ef: Push((int) 543181)
0x3f0: Push((int) -1)
0x3f1: Push((int) 45637)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: PushEmpty(bool)
0x3f5: Stack[-1] = (bool) 1
0x3f6: PushEmpty(bool)
0x3f7: Stack[-1] = (bool) 1
0x3f8: PushEmpty(bool, object)
0x3f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fa: Call2 0xff4

0x3fb: Pop(1)
0x3fc: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x3fd: PushEmpty(bool, object)
0x3fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ff: Call2 0xffe

0x400: Pop(1)
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: Stack[-1] = (bool) 0
0x403: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x404: PushEmpty(bool, object)
0x405: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x406: Call2 0x1008

0x407: Pop(1)
0x408: IF (Stack[-1] == 0) GOTO 0x40a; Pop(1)

0x409: Stack[-1] = (bool) 0
0x40a: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40b: Push((int) 543184)
0x40c: Push((int) -1)
0x40d: Push((int) 45640)
0x40e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40f: Pop(3)
0x410: PushEmpty(bool)
0x411: Stack[-1] = (bool) 1
0x412: PushEmpty(bool)
0x413: Stack[-1] = (bool) 1
0x414: PushEmpty(bool)
0x415: Stack[-1] = (bool) 1
0x416: PushEmpty(bool, object)
0x417: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x418: Call2 0xfea

0x419: Pop(1)
0x41a: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x41b: PushEmpty(bool, object)
0x41c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41d: Call2 0x1008

0x41e: Pop(1)
0x41f: IF (Stack[-1] == 0) GOTO 0x421; Pop(1)

0x420: Stack[-1] = (bool) 0
0x421: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x422: PushEmpty(bool, object)
0x423: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x424: Call2 0x1012

0x425: Pop(1)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 0
0x428: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x429: PushEmpty(bool, object)
0x42a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x42b: Call2 0x101c

0x42c: Pop(1)
0x42d: IF (Stack[-1] == 0) GOTO 0x42f; Pop(1)

0x42e: Stack[-1] = (bool) 0
0x42f: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x430: Push((int) 543185)
0x431: Push((int) -1)
0x432: Push((int) 45641)
0x433: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x434: Pop(3)
0x435: PushEmpty(bool)
0x436: Stack[-1] = (bool) 1
0x437: PushEmpty(bool)
0x438: Stack[-1] = (bool) 1
0x439: PushEmpty(bool, object)
0x43a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43b: Call2 0x1026

0x43c: Pop(1)
0x43d: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43e: PushEmpty(bool, object)
0x43f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x440: Call2 0x1030

0x441: Pop(1)
0x442: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x443: Stack[-1] = (bool) 0
0x444: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x445: PushEmpty(bool, object)
0x446: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x447: Call2 0x103a

0x448: Pop(1)
0x449: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x44a: Stack[-1] = (bool) 0
0x44b: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x44c: Push((int) 543186)
0x44d: Push((int) -1)
0x44e: Push((int) 45642)
0x44f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x450: Pop(3)
0x451: PushEmpty(bool)
0x452: Stack[-1] = (bool) 1
0x453: PushEmpty(bool)
0x454: Stack[-1] = (bool) 1
0x455: PushEmpty(bool)
0x456: Stack[-1] = (bool) 1
0x457: PushEmpty(bool)
0x458: Stack[-1] = (bool) 1
0x459: PushEmpty(bool, object)
0x45a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45b: Call2 0x1008

0x45c: Pop(1)
0x45d: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x45e: PushEmpty(bool, object)
0x45f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x460: Call2 0x101c

0x461: Pop(1)
0x462: IF (Stack[-1] == 0) GOTO 0x464; Pop(1)

0x463: Stack[-1] = (bool) 0
0x464: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x465: PushEmpty(bool, object)
0x466: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x467: Call2 0x1026

0x468: Pop(1)
0x469: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x46a: Stack[-1] = (bool) 0
0x46b: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46c: PushEmpty(bool, object)
0x46d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46e: Call2 0x1044

0x46f: Pop(1)
0x470: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x471: Stack[-1] = (bool) 0
0x472: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call2 0x1030

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x479; Pop(1)

0x478: Stack[-1] = (bool) 0
0x479: IF (Stack[-1] == 0) GOTO 0x47f; Pop(1)

0x47a: Push((int) 543188)
0x47b: Push((int) -1)
0x47c: Push((int) 45644)
0x47d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47e: Pop(3)
0x47f: Return(); Pop(0)

0x480: PushEmpty(string)
0x481: Stack[-1] = "Neutral"
0x482: Call2 0x289

0x483: Pop(1)
0x484: Push((int) 538167)
0x485: @@ SetMessage(Stack[-1])
0x486: Pop(1)
0x487: @@ ClearReplies()
0x488: Pop(0)
0x489: Push((int) 538168)
0x48a: Push((int) -1)
0x48b: Push((int) 40043)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: PushEmpty(bool)
0x48f: Stack[-1] = (bool) 0
0x490: PushEmpty(bool, object)
0x491: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x492: Call2 0xfd6

0x493: Pop(1)
0x494: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x495: PushEmpty(bool, object)
0x496: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x497: Call2 0xfb2

0x498: Pop(1)
0x499: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x49a: Stack[-1] = (bool) 1
0x49b: IF (Stack[-1] == 0) GOTO 0x4a1; Pop(1)

0x49c: Push((int) 538169)
0x49d: Push((int) 40045)
0x49e: Push((int) 40044)
0x49f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a0: Pop(3)
0x4a1: PushEmpty(bool)
0x4a2: Stack[-1] = (bool) 0
0x4a3: PushEmpty(bool)
0x4a4: Stack[-1] = (bool) 0
0x4a5: PushEmpty(bool, object)
0x4a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4a7: Call2 0xfd6

0x4a8: Pop(1)
0x4a9: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4aa: PushEmpty(bool, object)
0x4ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ac: Call2 0x104e

0x4ad: Pop(1)
0x4ae: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4af: Stack[-1] = (bool) 1
0x4b0: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b1: PushEmpty(bool, object)
0x4b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4b3: Call2 0xfb2

0x4b4: Pop(1)
0x4b5: IF (Stack[-1] == 0) GOTO 0x4b7; Pop(1)

0x4b6: Stack[-1] = (bool) 1
0x4b7: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4b8: Push((int) 538179)
0x4b9: Push((int) 40055)
0x4ba: Push((int) 40054)
0x4bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bc: Pop(3)
0x4bd: PushEmpty(bool)
0x4be: Stack[-1] = (bool) 0
0x4bf: PushEmpty(bool, object)
0x4c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c1: Call2 0xfe0

0x4c2: Pop(1)
0x4c3: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c4: PushEmpty(bool, object)
0x4c5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c6: Call2 0xfb2

0x4c7: Pop(1)
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ca; Pop(1)

0x4c9: Stack[-1] = (bool) 1
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d0; Pop(1)

0x4cb: Push((int) 538190)
0x4cc: Push((int) 40067)
0x4cd: Push((int) 40066)
0x4ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cf: Pop(3)
0x4d0: PushEmpty(bool)
0x4d1: Stack[-1] = (bool) 1
0x4d2: PushEmpty(bool, object)
0x4d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d4: Call2 0xfb2

0x4d5: Pop(1)
0x4d6: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4d7: PushEmpty(bool, object)
0x4d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Call2 0xfbe

0x4da: Pop(1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4dd; Pop(1)

0x4dc: Stack[-1] = (bool) 0
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e3; Pop(1)

0x4de: Push((int) 538204)
0x4df: Push((int) -1)
0x4e0: Push((int) 40081)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Push((int) 538205)
0x4e4: Push((int) -1)
0x4e5: Push((int) 40082)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 40067)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x500; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Neutral"
0x4ee: Call2 0x289

0x4ef: Pop(1)
0x4f0: Push((int) 538191)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 538192)
0x4f6: Push((int) 40069)
0x4f7: Push((int) 40068)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Push((int) 538203)
0x4fb: Push((int) 40069)
0x4fc: Push((int) 40079)
0x4fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fe: Pop(3)
0x4ff: Return(); Pop(0)

0x500: Push((int) 40069)
0x501: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x502: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x503: PushEmpty(string)
0x504: Stack[-1] = "Neutral"
0x505: Call2 0x289

0x506: Pop(1)
0x507: Push((int) 538193)
0x508: @@ SetMessage(Stack[-1])
0x509: Pop(1)
0x50a: @@ ClearReplies()
0x50b: Pop(0)
0x50c: Push((int) 538194)
0x50d: Push((int) 40071)
0x50e: Push((int) 40070)
0x50f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x510: Pop(3)
0x511: Push((int) 538202)
0x512: Push((int) -1)
0x513: Push((int) 40078)
0x514: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x515: Pop(3)
0x516: Return(); Pop(0)

0x517: Push((int) 40071)
0x518: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x519: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x51a: PushEmpty(string)
0x51b: Stack[-1] = "Neutral"
0x51c: Call2 0x289

0x51d: Pop(1)
0x51e: Push((int) 538195)
0x51f: @@ SetMessage(Stack[-1])
0x520: Pop(1)
0x521: @@ ClearReplies()
0x522: Pop(0)
0x523: Push((int) 538196)
0x524: Push((int) 40073)
0x525: Push((int) 40072)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Push((int) 538201)
0x529: Push((int) -1)
0x52a: Push((int) 40077)
0x52b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52c: Pop(3)
0x52d: Return(); Pop(0)

0x52e: Push((int) 40073)
0x52f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x530: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x531: PushEmpty(string)
0x532: Stack[-1] = "Neutral"
0x533: Call2 0x289

0x534: Pop(1)
0x535: Push((int) 538197)
0x536: @@ SetMessage(Stack[-1])
0x537: Pop(1)
0x538: @@ ClearReplies()
0x539: Pop(0)
0x53a: Push((int) 538198)
0x53b: Push((int) -1)
0x53c: Push((int) 40074)
0x53d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(3)
0x53f: Push((int) 538199)
0x540: Push((int) -1)
0x541: Push((int) 40075)
0x542: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x543: Pop(3)
0x544: Push((int) 538200)
0x545: Push((int) -1)
0x546: Push((int) 40076)
0x547: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x548: Pop(3)
0x549: Return(); Pop(0)

0x54a: Push((int) 40055)
0x54b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54c: IF (Stack[-1] == 0) GOTO 0x566; Pop(1)

0x54d: PushEmpty(string)
0x54e: Stack[-1] = "Neutral"
0x54f: Call2 0x289

0x550: Pop(1)
0x551: Push((int) 538180)
0x552: @@ SetMessage(Stack[-1])
0x553: Pop(1)
0x554: @@ ClearReplies()
0x555: Pop(0)
0x556: Push((int) 538181)
0x557: Push((int) 40057)
0x558: Push((int) 40056)
0x559: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55a: Pop(3)
0x55b: Push((int) 538188)
0x55c: Push((int) 40057)
0x55d: Push((int) 40063)
0x55e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55f: Pop(3)
0x560: Push((int) 538189)
0x561: Push((int) -1)
0x562: Push((int) 40065)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Return(); Pop(0)

0x566: Push((int) 40057)
0x567: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x568: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x569: PushEmpty(string)
0x56a: Stack[-1] = "Neutral"
0x56b: Call2 0x289

0x56c: Pop(1)
0x56d: Push((int) 538182)
0x56e: @@ SetMessage(Stack[-1])
0x56f: Pop(1)
0x570: @@ ClearReplies()
0x571: Pop(0)
0x572: Push((int) 538183)
0x573: Push((int) 40059)
0x574: Push((int) 40058)
0x575: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x576: Pop(3)
0x577: Push((int) 538187)
0x578: Push((int) -1)
0x579: Push((int) 40062)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 40059)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Neutral"
0x582: Call2 0x289

0x583: Pop(1)
0x584: Push((int) 538184)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: Push((int) 538185)
0x58a: Push((int) -1)
0x58b: Push((int) 40060)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Push((int) 538186)
0x58f: Push((int) -1)
0x590: Push((int) 40061)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 40045)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5b0; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Neutral"
0x599: Call2 0x289

0x59a: Pop(1)
0x59b: Push((int) 538170)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 538171)
0x5a1: Push((int) 40047)
0x5a2: Push((int) 40046)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Push((int) 538175)
0x5a6: Push((int) 40051)
0x5a7: Push((int) 40050)
0x5a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a9: Pop(3)
0x5aa: Push((int) 538178)
0x5ab: Push((int) -1)
0x5ac: Push((int) 40053)
0x5ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ae: Pop(3)
0x5af: Return(); Pop(0)

0x5b0: Push((int) 40051)
0x5b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b2: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5b3: PushEmpty(string)
0x5b4: Stack[-1] = "Neutral"
0x5b5: Call2 0x289

0x5b6: Pop(1)
0x5b7: Push((int) 538176)
0x5b8: @@ SetMessage(Stack[-1])
0x5b9: Pop(1)
0x5ba: @@ ClearReplies()
0x5bb: Pop(0)
0x5bc: Push((int) 538177)
0x5bd: Push((int) -1)
0x5be: Push((int) 40052)
0x5bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c0: Pop(3)
0x5c1: Return(); Pop(0)

0x5c2: Push((int) 40047)
0x5c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5c5: PushEmpty(string)
0x5c6: Stack[-1] = "Neutral"
0x5c7: Call2 0x289

0x5c8: Pop(1)
0x5c9: Push((int) 538172)
0x5ca: @@ SetMessage(Stack[-1])
0x5cb: Pop(1)
0x5cc: @@ ClearReplies()
0x5cd: Pop(0)
0x5ce: Push((int) 538173)
0x5cf: Push((int) -1)
0x5d0: Push((int) 40048)
0x5d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d2: Pop(3)
0x5d3: Push((int) 538174)
0x5d4: Push((int) -1)
0x5d5: Push((int) 40049)
0x5d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d7: Pop(3)
0x5d8: Return(); Pop(0)

0x5d9: Push((int) 45656)
0x5da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5db: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5dc: PushEmpty(string)
0x5dd: Stack[-1] = "Neutral"
0x5de: Call2 0x289

0x5df: Pop(1)
0x5e0: Push((int) 543200)
0x5e1: @@ SetMessage(Stack[-1])
0x5e2: Pop(1)
0x5e3: @@ ClearReplies()
0x5e4: Pop(0)
0x5e5: Push((int) 543205)
0x5e6: Push((int) -1)
0x5e7: Push((int) 45661)
0x5e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e9: Pop(3)
0x5ea: Push((int) 543206)
0x5eb: Push((int) -1)
0x5ec: Push((int) 45662)
0x5ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ee: Pop(3)
0x5ef: Push((int) 543207)
0x5f0: Push((int) -1)
0x5f1: Push((int) 45663)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 45655)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Neutral"
0x5fa: Call2 0x289

0x5fb: Pop(1)
0x5fc: Push((int) 543199)
0x5fd: @@ SetMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: @@ ClearReplies()
0x600: Pop(0)
0x601: Push((int) 543201)
0x602: Push((int) -1)
0x603: Push((int) 45657)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Push((int) 543202)
0x607: Push((int) -1)
0x608: Push((int) 45658)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: PushEmpty(bool, object)
0x60c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60d: Call2 0xfe0

0x60e: Pop(1)
0x60f: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x610: Push((int) 543203)
0x611: Push((int) -1)
0x612: Push((int) 45659)
0x613: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x614: Pop(3)
0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x617: Call2 0x1008

0x618: Pop(1)
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: Push((int) 543204)
0x61b: Push((int) -1)
0x61c: Push((int) 45660)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: Return(); Pop(0)

0x620: Push((int) 45648)
0x621: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x623: PushEmpty(bool, object)
0x624: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x625: Call2 0xfd6

0x626: Pop(1)
0x627: IF (Stack[-1] == 0) GOTO 0x641; Pop(1)

0x628: PushEmpty(string)
0x629: Stack[-1] = "Neutral"
0x62a: Call2 0x289

0x62b: Pop(1)
0x62c: Push((int) 543192)
0x62d: @@ SetMessage(Stack[-1])
0x62e: Pop(1)
0x62f: @@ ClearReplies()
0x630: Pop(0)
0x631: Push((int) 543193)
0x632: Push((int) -1)
0x633: Push((int) 45649)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Push((int) 543194)
0x637: Push((int) -1)
0x638: Push((int) 45650)
0x639: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63a: Pop(3)
0x63b: Push((int) 543195)
0x63c: Push((int) -1)
0x63d: Push((int) 45651)
0x63e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63f: Pop(3)
0x640: Return(); Pop(0)

0x641: PushEmpty(bool)
0x642: Stack[-1] = (bool) 1
0x643: PushEmpty(bool)
0x644: Stack[-1] = (bool) 1
0x645: PushEmpty(bool, object)
0x646: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x647: Call2 0xfea

0x648: Pop(1)
0x649: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64a: PushEmpty(bool, object)
0x64b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64c: Call2 0xff4

0x64d: Pop(1)
0x64e: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x64f: Stack[-1] = (bool) 0
0x650: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x651: PushEmpty(bool, object)
0x652: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x653: Call2 0xffe

0x654: Pop(1)
0x655: IF (Stack[-1] == 0) GOTO 0x657; Pop(1)

0x656: Stack[-1] = (bool) 0
0x657: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x658: PushEmpty(string)
0x659: Stack[-1] = "Neutral"
0x65a: Call2 0x289

0x65b: Pop(1)
0x65c: Push((int) 543196)
0x65d: @@ SetMessage(Stack[-1])
0x65e: Pop(1)
0x65f: @@ ClearReplies()
0x660: Pop(0)
0x661: Push((int) 543197)
0x662: Push((int) -1)
0x663: Push((int) 45653)
0x664: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x665: Pop(3)
0x666: Push((int) 543198)
0x667: Push((int) -1)
0x668: Push((int) 45654)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: Return(); Pop(0)

0x66c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x66d: PushEmpty(bool)
0x66e: Call2 0x146a

0x66f: Pop(0)
0x670: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x671: @ lshStopAnimation()
0x672: Pop(0)
0x673: GOTO 0x676

0x674: @ StopAnimation()
0x675: Pop(0)
0x676: Return(); Pop(0)

0x677: GOTO 0x2a0

0x678: Return(); Pop(0)

0x679: PushEmpty()
0x67a: EventDisable(0)
0x67b: PushEmpty(object)
0x67c: Stack[-1] = Stack[-2]
0x67d: Call2 0x69a

0x67e: Pop(1)
0x67f: PushEmpty(object)
0x680: Stack[-1] = Stack[-2]
0x681: Call2 0x1491

0x682: Pop(1)
0x683: EventEnable(0)
0x684: @ Hold()
0x685: Pop(0)
0x686: GOTO 0x684

0x687: Return(); Pop(0)

0x688: PushEmpty(int, int)
0x689: PushEmpty(int, object)
0x68a: Stack[-1] = Stack[-5]
0x68b: Call2 0x1370

0x68c: Stack[-3] = Stack[-2]
0x68d: Pop(2)
0x68e: Push((int) 0)
0x68f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x690: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x691: PushEmpty(object)
0x692: Stack[-1] = Stack[-4]
0x693: Call2 0x1373

0x694: Pop(1)
0x695: Return(); Pop(2)

0x696: PushEmpty()
0x697: Call2 0x1379

0x698: Pop(0)
0x699: Return(); Pop(0)

0x69a: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x69b: Pop(0); Push((bool) Stack[-21] == 0)
0x69c: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69d: PushEmpty(string)
0x69e: Stack[-1] = "fdie"
0x69f: Call2 0x6f5

0x6a0: Pop(1)
0x6a1: GOTO 0x6f4

0x6a2: @@ GetPosition(Stack[-10])
0x6a3: Pop(0)
0x6a4: @ GetPosition(Stack[-9])
0x6a5: Pop(0)
0x6a6: @ GetDirection(Stack[-8])
0x6a7: Pop(0)
0x6a8: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x6a9: Push(CvectorIndex(Stack[-7], 0))
0x6aa: Push(CvectorIndex(Stack[-9], 0))
0x6ab: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6ac: Push(CvectorIndex(Stack[-8], 2))
0x6ad: Push(CvectorIndex(Stack[-10], 2))
0x6ae: Pop(2); Push(Stack[-2] * Stack[-1]);
0x6af: Pop(2); Push(Stack[-2] + Stack[-1]);
0x6b0: Push((int) 0)
0x6b1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6b2: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6b3: Stack[-6] = "fdie"
0x6b4: GOTO 0x6b6

0x6b5: Stack[-6] = "bdie"
0x6b6: @ RemoveRTEnvelope()
0x6b7: Pop(0)
0x6b8: @ SetDeathState()
0x6b9: Pop(0)
0x6ba: @ Stop()
0x6bb: Pop(0)
0x6bc: @ StopAsync()
0x6bd: Pop(0)
0x6be: Stack[-5] = Stack[-21]
0x6bf: Push("GetScriptProperty")
0x6c0: Push((int) 2)
0x6c1: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x6c2: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c3: Push("Owner")
0x6c4: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x6c5: Pop(1)
0x6c6: Push(Stack[-4])
0x6c7: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6c8: Push("Owner")
0x6c9: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x6ca: Pop(1)
0x6cb: Pop(0); Push((bool) Stack[-5] == 0)
0x6cc: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cd: Stack[-5] = Stack[-21]
0x6ce: Push("@GetEyesHeight")
0x6cf: Push((int) 1)
0x6d0: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6d1: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6d2: @@ GetEyesHeight(Stack[-2])
0x6d3: Pop(0)
0x6d4: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6d5: Push(CvectorIndex(Stack[-1], 1))
0x6d6: Stack[-1] = Stack[-3]
0x6d7: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6d8: Push("head")
0x6d9: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6da: Pop(1)
0x6db: Stack[-3] = (bool) 1
0x6dc: GOTO 0x6de

0x6dd: Stack[-3] = (bool) 0
0x6de: PushEmpty(string)
0x6df: Stack[-1] = Stack[-7]
0x6e0: Call2 0xf2c

0x6e1: Pop(1)
0x6e2: Push("all")
0x6e3: @ PlayAnimation(Stack[-1], Stack[-7])
0x6e4: Pop(1)
0x6e5: @ WaitForAnimEnd()
0x6e6: Pop(0)
0x6e7: Push(Stack[-3])
0x6e8: IF (Stack[-1] == 0) GOTO 0x6ee; Pop(1)

0x6e9: @ StopAsync()
0x6ea: Pop(0)
0x6eb: Push("head")
0x6ec: @ UnlookAsync(Stack[-1])
0x6ed: Pop(1)
0x6ee: Push("all")
0x6ef: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x6f0: Pop(1)
0x6f1: @ RemoveEnvelope()
0x6f2: Pop(0)
0x6f3: Stack[-5] = 0
0x6f4: Return(); Pop(20)

0x6f5: PushEmpty()
0x6f6: @ RemoveRTEnvelope()
0x6f7: Pop(0)
0x6f8: @ SetDeathState()
0x6f9: Pop(0)
0x6fa: @ Stop()
0x6fb: Pop(0)
0x6fc: @ StopAsync()
0x6fd: Pop(0)
0x6fe: @ StopSecondaryAnimation()
0x6ff: Pop(0)
0x700: PushEmpty(string)
0x701: Stack[-1] = Stack[-2]
0x702: Call2 0xf2c

0x703: Pop(1)
0x704: Push("all")
0x705: @ PlayAnimation(Stack[-1], Stack[-2])
0x706: Pop(1)
0x707: @ WaitForAnimEnd()
0x708: Pop(0)
0x709: Push("all")
0x70a: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x70b: Pop(1)
0x70c: @ RemoveEnvelope()
0x70d: Pop(0)
0x70e: Return(); Pop(0)

0x70f: PushEmpty()
0x710: Return(); Pop(0)

0x711: PushEmpty()
0x712: Return(); Pop(0)

0x713: PushEmpty()
0x714: Return(); Pop(0)

0x715: Push((bool) 1)
0x716: @ SensePlayerOnly(Stack[-1])
0x717: Pop(1)
0x718: PushEmpty()
0x719: Call2 0x146c

0x71a: Pop(0)
0x71b: PushEmpty()
0x71c: Call2 0x724

0x71d: Pop(0)
0x71e: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x71f: PushEmpty()
0x720: Call2 0x829

0x721: Pop(0)
0x722: GOTO 0x71e

0x723: Return(); Pop(0)

0x724: PushEmpty(bool)
0x725: Call2 0xe9f

0x726: Pop(0)
0x727: Pop(1); Push((bool) Stack[-1] == 0)
0x728: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x729: PushEmpty()
0x72a: Call2 0x1379

0x72b: Pop(0)
0x72c: Return(); Pop(0)

0x72d: PushEmpty(int, int)
0x72e: PushEmpty(int, object)
0x72f: Stack[-1] = Stack[-5]
0x730: Call2 0x1370

0x731: Stack[-3] = Stack[-2]
0x732: Pop(2)
0x733: Push((int) 0)
0x734: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x735: IF (Stack[-1] == 0) GOTO 0x740; Pop(1)

0x736: Push((int) 1)
0x737: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x738: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x739: PushEmpty()
0x73a: Call2 0x7e8

0x73b: Pop(0)
0x73c: PushEmpty(object)
0x73d: Stack[-1] = Stack[-4]
0x73e: Call2 0x1373

0x73f: Pop(1)
0x740: Return(); Pop(2)

0x741: PushEmpty(int, int)
0x742: PushEmpty(object)
0x743: Stack[-1] = Stack[-4]
0x744: Call2 0x12ad

0x745: Pop(1)
0x746: PushEmpty(int, object)
0x747: Stack[-1] = Stack[-5]
0x748: Call2 0x1300

0x749: Stack[-3] = Stack[-2]
0x74a: Pop(2)
0x74b: Push((int) 0)
0x74c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x74d: IF (Stack[-1] == 0) GOTO 0x758; Pop(1)

0x74e: Push((int) 1)
0x74f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x750: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x751: PushEmpty()
0x752: Call2 0x7e8

0x753: Pop(0)
0x754: PushEmpty(object)
0x755: Stack[-1] = Stack[-4]
0x756: Call2 0x130a

0x757: Pop(1)
0x758: Return(); Pop(2)

0x759: PushEmpty(int, int)
0x75a: PushEmpty(bool, object, object, bool)
0x75b: Stack[-3] = Stack[-9]
0x75c: Stack[-2] = Stack[-8]
0x75d: Stack[-1] = Stack[-7]
0x75e: Call2 0x1488

0x75f: Pop(3)
0x760: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x761: PushEmpty(int, object, bool)
0x762: Stack[-2] = Stack[-8]
0x763: Stack[-1] = Stack[-6]
0x764: Call2 0x1312

0x765: Stack[-4] = Stack[-3]
0x766: Pop(3)
0x767: Push((int) 0)
0x768: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x769: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x76a: Push((int) 1)
0x76b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76d: PushEmpty()
0x76e: Call2 0x7e8

0x76f: Pop(0)
0x770: PushEmpty(object)
0x771: Stack[-1] = Stack[-6]
0x772: Call2 0x131c

0x773: Pop(1)
0x774: Return(); Pop(2)

0x775: PushEmpty(int, int)
0x776: PushEmpty(int, object)
0x777: Stack[-1] = Stack[-5]
0x778: Call2 0x1366

0x779: Stack[-3] = Stack[-2]
0x77a: Pop(2)
0x77b: Push((int) 0)
0x77c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x77d: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x77e: Push((int) 1)
0x77f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x784; Pop(1)

0x781: PushEmpty()
0x782: Call2 0x7e8

0x783: Pop(0)
0x784: PushEmpty(object)
0x785: Stack[-1] = Stack[-4]
0x786: Call2 0x1369

0x787: Pop(1)
0x788: Return(); Pop(2)

0x789: PushEmpty(int, int)
0x78a: PushEmpty(bool, object, string)
0x78b: Stack[-2] = Stack[-7]
0x78c: Stack[-1] = Stack[-6]
0x78d: Call2 0x1257

0x78e: Pop(2)
0x78f: IF (Stack[-1] == 0) GOTO 0x799; Pop(1)

0x790: PushEmpty()
0x791: Call2 0x7e8

0x792: Pop(0)
0x793: PushEmpty(object, string)
0x794: Stack[-2] = Stack[-6]
0x795: Stack[-1] = Stack[-5]
0x796: Call2 0x1277

0x797: Pop(2)
0x798: GOTO 0x7ad

0x799: PushEmpty(int, string, object)
0x79a: Stack[-2] = Stack[-6]
0x79b: Stack[-1] = Stack[-7]
0x79c: Call2 0x136b

0x79d: Stack[-4] = Stack[-3]
0x79e: Pop(3)
0x79f: Push((int) 0)
0x7a0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7a1: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a2: Push((int) 1)
0x7a3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7a4: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a5: PushEmpty()
0x7a6: Call2 0x7e8

0x7a7: Pop(0)
0x7a8: PushEmpty(string, object)
0x7a9: Stack[-2] = Stack[-5]
0x7aa: Stack[-1] = Stack[-6]
0x7ab: Call2 0x136e

0x7ac: Pop(2)
0x7ad: Return(); Pop(2)

0x7ae: PushEmpty()
0x7af: PushEmpty(bool, string)
0x7b0: Stack[-1] = Stack[-3]
0x7b1: Call2 0x12ba

0x7b2: Pop(1)
0x7b3: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b4: PushEmpty()
0x7b5: Call2 0x7e8

0x7b6: Pop(0)
0x7b7: PushEmpty(string)
0x7b8: Stack[-1] = Stack[-2]
0x7b9: Call2 0x12ca

0x7ba: Pop(1)
0x7bb: Return(); Pop(0)

0x7bc: PushEmpty()
0x7bd: PushEmpty(bool, object)
0x7be: Stack[-1] = Stack[-3]
0x7bf: Call2 0x1290

0x7c0: Pop(1)
0x7c1: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7c2: PushEmpty()
0x7c3: Call2 0x7e8

0x7c4: Pop(0)
0x7c5: PushEmpty(object)
0x7c6: Stack[-1] = Stack[-2]
0x7c7: Call2 0x12a7

0x7c8: Pop(1)
0x7c9: GOTO 0x7ce

0x7ca: PushEmpty(object)
0x7cb: Stack[-1] = Stack[-2]
0x7cc: Call2 0x801

0x7cd: Pop(1)
0x7ce: Return(); Pop(0)

0x7cf: PushEmpty()
0x7d0: PushEmpty(object)
0x7d1: Stack[-1] = Stack[-2]
0x7d2: Call2 0x801

0x7d3: Pop(1)
0x7d4: Return(); Pop(0)

0x7d5: PushEmpty()
0x7d6: Push((int) 110)
0x7d7: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7d8: IF (Stack[-1] == 0) GOTO 0x7da; Pop(1)

0x7d9: Return(); Pop(0)

0x7da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7db: Push((int) 110)
0x7dc: @ KillTimer(Stack[-1])
0x7dd: Pop(1)
0x7de: @ ResetAAS()
0x7df: Pop(0)
0x7e0: Return(); Pop(0)

0x7e1: PushEmpty()
0x7e2: Call2 0x7e8

0x7e3: Pop(0)
0x7e4: PushEmpty()
0x7e5: Call2 0x1379

0x7e6: Pop(0)
0x7e7: Return(); Pop(0)

0x7e8: Push((int) 110)
0x7e9: @ KillTimer(Stack[-1])
0x7ea: Pop(1)
0x7eb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7ec: PushEmpty()
0x7ed: Call2 0x870

0x7ee: Pop(0)
0x7ef: Return(); Pop(0)

0x7f0: Push((int) 110)
0x7f1: @ KillTimer(Stack[-1])
0x7f2: Pop(1)
0x7f3: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7f4: PushEmpty()
0x7f5: Call2 0x877

0x7f6: Pop(0)
0x7f7: Return(); Pop(0)

0x7f8: PushEmpty()
0x7f9: PushEmpty()
0x7fa: Call2 0x7e8

0x7fb: Pop(0)
0x7fc: PushEmpty(object)
0x7fd: Stack[-1] = Stack[-2]
0x7fe: Call2 0x123f

0x7ff: Pop(1)
0x800: Return(); Pop(0)

0x801: PushEmpty(bool, int, bool, int)
0x802: PushEmpty(bool, object)
0x803: Stack[-1] = Stack[-7]
0x804: Call2 0xdfe

0x805: Pop(1)
0x806: Pop(1); Push((bool) Stack[-1] == 0)
0x807: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x808: Return(); Pop(4)

0x809: Push( Stack[2 + Tasks[-1].StackPointer] )
0x80a: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x80b: Return(); Pop(4)

0x80c: @ IsPlayerActor(Stack[-5], Stack[-2])
0x80d: Pop(0)
0x80e: Pop(0); Push((bool) Stack[-2] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x811; Pop(1)

0x810: Return(); Pop(4)

0x811: PushEmpty(int, object)
0x812: Stack[-1] = Stack[-7]
0x813: Call2 0x12ef

0x814: Stack[-3] = Stack[-2]
0x815: Pop(2)
0x816: Push((int) 0)
0x817: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x818: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x819: Push((int) 1)
0x81a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x81b: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81c: PushEmpty()
0x81d: Call2 0x7f0

0x81e: Pop(0)
0x81f: PushEmpty(object)
0x820: Stack[-1] = Stack[-6]
0x821: Call2 0x12f8

0x822: Pop(1)
0x823: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x824: Push((int) 110)
0x825: Push((float)10.0)
0x826: @ SetTimer(Stack[-2], Stack[-1])
0x827: Pop(2)
0x828: Return(); Pop(4)

0x829: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x82a: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x82b: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x82c: Push((float)0.5)
0x82d: @ rand(Stack[-7], Stack[-1])
0x82e: Pop(1)
0x82f: @ Sleep(Stack[-6])
0x830: Pop(0)
0x831: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x832: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x833: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x834: IF (Stack[-1] == 0) GOTO 0x844; Pop(1)

0x835: @ GetPosition(Stack[-4])
0x836: Pop(0)
0x837: PushEmpty(float)
0x838: Call2 0x864

0x839: Pop(0)
0x83a: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x83b: Pop(1)
0x83c: Push(Stack[-3])
0x83d: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83e: GOTO 0x843

0x83f: Push((int) 1)
0x840: @ Sleep(Stack[-1])
0x841: Pop(1)
0x842: GOTO 0x835

0x843: GOTO 0x845

0x844: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x845: PushEmpty(object, cvector)
0x846: Stack[-1] = Stack[-7]
0x847: Call2 0x880

0x848: Stack[-4] = Stack[-2]
0x849: Pop(2)
0x84a: Pop(0); Push(( Stack[-2] != 0 )
0x84b: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x84c: @ RotatePath(Stack[-2], Stack[-1])
0x84d: Pop(0)
0x84e: Push(Stack[-1])
0x84f: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x850: PushEmpty(bool)
0x851: Call2 0x87e

0x852: Pop(0)
0x853: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x854: Pop(1)
0x855: Stack[-2] = 0
0x856: Push(Stack[-1])
0x857: IF (Stack[-1] == 0) GOTO 0x85d; Pop(1)

0x858: PushEmpty()
0x859: Push(-0, 0); TaskCall(4)
0x85a: Call2 0x92a

0x85b: Pop(-0, 0); TaskReturn
0x85c: Pop(0)
0x85d: GOTO 0x861

0x85e: Push((int) 1)
0x85f: @ Sleep(Stack[-1])
0x860: Pop(1)
0x861: Stack[-2] = 0
0x862: GOTO 0x831

0x863: Return(); Pop(12)

0x864: PushEmpty(float, float)
0x865: @ GetCameraFarDistance(Stack[-1])
0x866: Pop(0)
0x867: Stack[-3] = Stack[-1]
0x868: Return(); Pop(2)

0x869: PushEmpty()
0x86a: @ RequestClearPath(Stack[-1])
0x86b: Pop(0)
0x86c: Return(); Pop(0)

0x86d: @ Stop()
0x86e: Pop(0)
0x86f: Return(); Pop(0)

0x870: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x871: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x872: @ Stop()
0x873: Pop(0)
0x874: @ StopGroup0()
0x875: Pop(0)
0x876: Return(); Pop(0)

0x877: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x878: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x879: @ Stop()
0x87a: Pop(0)
0x87b: @ StopGroup0()
0x87c: Pop(0)
0x87d: Return(); Pop(0)

0x87e: Stack[-1] = (bool) 0
0x87f: Return(); Pop(0)

0x880: PushEmpty(object, object)
0x881: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x882: Pop(0)
0x883: Stack[-4] = Stack[-1]
0x884: Return(); Pop(2)

0x885: Stack[-1] = 0
0x886: PushEmpty(int, int)
0x887: PushEmpty(int, object)
0x888: Stack[-1] = Stack[-5]
0x889: Call2 0x1370

0x88a: Stack[-3] = Stack[-2]
0x88b: Pop(2)
0x88c: Push((int) 0)
0x88d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x88f: Push((int) 1)
0x890: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x891: IF (Stack[-1] == 0) GOTO 0x895; Pop(1)

0x892: PushEmpty()
0x893: Call2 0x97b

0x894: Pop(0)
0x895: PushEmpty(object)
0x896: Stack[-1] = Stack[-4]
0x897: Call2 0x1373

0x898: Pop(1)
0x899: Return(); Pop(2)

0x89a: PushEmpty(int, int)
0x89b: PushEmpty(object)
0x89c: Stack[-1] = Stack[-4]
0x89d: Call2 0x12ad

0x89e: Pop(1)
0x89f: PushEmpty(int, object)
0x8a0: Stack[-1] = Stack[-5]
0x8a1: Call2 0x1300

0x8a2: Stack[-3] = Stack[-2]
0x8a3: Pop(2)
0x8a4: Push((int) 0)
0x8a5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8a7: Push((int) 1)
0x8a8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8a9: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8aa: PushEmpty()
0x8ab: Call2 0x97b

0x8ac: Pop(0)
0x8ad: PushEmpty(object)
0x8ae: Stack[-1] = Stack[-4]
0x8af: Call2 0x130a

0x8b0: Pop(1)
0x8b1: Return(); Pop(2)

0x8b2: PushEmpty(int, int)
0x8b3: PushEmpty(bool, object, object, bool)
0x8b4: Stack[-3] = Stack[-9]
0x8b5: Stack[-2] = Stack[-8]
0x8b6: Stack[-1] = Stack[-7]
0x8b7: Call2 0x1488

0x8b8: Pop(3)
0x8b9: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8ba: PushEmpty(int, object, bool)
0x8bb: Stack[-2] = Stack[-8]
0x8bc: Stack[-1] = Stack[-6]
0x8bd: Call2 0x1312

0x8be: Stack[-4] = Stack[-3]
0x8bf: Pop(3)
0x8c0: Push((int) 0)
0x8c1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8c3: Push((int) 1)
0x8c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8c9; Pop(1)

0x8c6: PushEmpty()
0x8c7: Call2 0x97b

0x8c8: Pop(0)
0x8c9: PushEmpty(object)
0x8ca: Stack[-1] = Stack[-6]
0x8cb: Call2 0x131c

0x8cc: Pop(1)
0x8cd: Return(); Pop(2)

0x8ce: PushEmpty(int, int)
0x8cf: PushEmpty(int, object)
0x8d0: Stack[-1] = Stack[-5]
0x8d1: Call2 0x1366

0x8d2: Stack[-3] = Stack[-2]
0x8d3: Pop(2)
0x8d4: Push((int) 0)
0x8d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8d6: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8d7: Push((int) 1)
0x8d8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8d9: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8da: PushEmpty()
0x8db: Call2 0x97b

0x8dc: Pop(0)
0x8dd: PushEmpty(object)
0x8de: Stack[-1] = Stack[-4]
0x8df: Call2 0x1369

0x8e0: Pop(1)
0x8e1: Return(); Pop(2)

0x8e2: PushEmpty(int, int)
0x8e3: PushEmpty(bool, object, string)
0x8e4: Stack[-2] = Stack[-7]
0x8e5: Stack[-1] = Stack[-6]
0x8e6: Call2 0x1257

0x8e7: Pop(2)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8e9: PushEmpty()
0x8ea: Call2 0x97b

0x8eb: Pop(0)
0x8ec: PushEmpty(object, string)
0x8ed: Stack[-2] = Stack[-6]
0x8ee: Stack[-1] = Stack[-5]
0x8ef: Call2 0x1277

0x8f0: Pop(2)
0x8f1: GOTO 0x906

0x8f2: PushEmpty(int, string, object)
0x8f3: Stack[-2] = Stack[-6]
0x8f4: Stack[-1] = Stack[-7]
0x8f5: Call2 0x136b

0x8f6: Stack[-4] = Stack[-3]
0x8f7: Pop(3)
0x8f8: Push((int) 0)
0x8f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8fa: IF (Stack[-1] == 0) GOTO 0x906; Pop(1)

0x8fb: Push((int) 1)
0x8fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x901; Pop(1)

0x8fe: PushEmpty()
0x8ff: Call2 0x97b

0x900: Pop(0)
0x901: PushEmpty(string, object)
0x902: Stack[-2] = Stack[-5]
0x903: Stack[-1] = Stack[-6]
0x904: Call2 0x136e

0x905: Pop(2)
0x906: Return(); Pop(2)

0x907: PushEmpty()
0x908: PushEmpty(bool, string)
0x909: Stack[-1] = Stack[-3]
0x90a: Call2 0x12ba

0x90b: Pop(1)
0x90c: IF (Stack[-1] == 0) GOTO 0x914; Pop(1)

0x90d: PushEmpty()
0x90e: Call2 0x97b

0x90f: Pop(0)
0x910: PushEmpty(string)
0x911: Stack[-1] = Stack[-2]
0x912: Call2 0x12ca

0x913: Pop(1)
0x914: Return(); Pop(0)

0x915: PushEmpty()
0x916: Call2 0x97b

0x917: Pop(0)
0x918: PushEmpty()
0x919: Call2 0x1379

0x91a: Pop(0)
0x91b: Return(); Pop(0)

0x91c: PushEmpty()
0x91d: PushEmpty(bool, object)
0x91e: Stack[-1] = Stack[-3]
0x91f: Call2 0x1290

0x920: Pop(1)
0x921: IF (Stack[-1] == 0) GOTO 0x929; Pop(1)

0x922: PushEmpty()
0x923: Call2 0x97b

0x924: Pop(0)
0x925: PushEmpty(object)
0x926: Stack[-1] = Stack[-2]
0x927: Call2 0x12a7

0x928: Pop(1)
0x929: Return(); Pop(0)

0x92a: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x92b: @ WaitForAnimEnd()
0x92c: Pop(0)
0x92d: PushEmpty(bool)
0x92e: Call2 0xe9f

0x92f: Pop(0)
0x930: Pop(1); Push((bool) Stack[-1] == 0)
0x931: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x932: Return(); Pop(14)

0x933: PushEmpty(int)
0x934: Call2 0x12de

0x935: Stack[-8] = Stack[-1]
0x936: Pop(1)
0x937: Stack[-6] = (int) 0
0x938: PushEmpty(bool)
0x939: Stack[-1] = (bool) 0
0x93a: Push((int) 5)
0x93b: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x93c: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x93d: PushEmpty(bool)
0x93e: Call2 0xe9f

0x93f: Pop(0)
0x940: IF (Stack[-1] == 0) GOTO 0x942; Pop(1)

0x941: Stack[-1] = (bool) 1
0x942: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x943: Push((int) 3)
0x944: @ irand(Stack[-6], Stack[-1])
0x945: Pop(1)
0x946: Push((int) 0)
0x947: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x948: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x949: Push(Stack[-7])
0x94a: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x94b: @ irand(Stack[-4], Stack[-7])
0x94c: Pop(0)
0x94d: Push("all")
0x94e: PushEmpty(string, int)
0x94f: Stack[-1] = Stack[-7]
0x950: Call2 0x12d7

0x951: Pop(1)
0x952: @ PlayAnimation(Stack[-2], Stack[-1])
0x953: Pop(2)
0x954: @ WaitForAnimEnd(Stack[-3])
0x955: Pop(0)
0x956: Pop(0); Push((bool) Stack[-3] == 0)
0x957: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x958: GOTO 0x976

0x959: GOTO 0x96b

0x95a: Push((int) 1)
0x95b: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x95c: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x95d: Push((int) 4)
0x95e: @ rand(Stack[-3], Stack[-1])
0x95f: Pop(1)
0x960: Push((int) 1)
0x961: Pop(1); Push(Stack[-3] + Stack[-1]);
0x962: @ Sleep(Stack[-1], Stack[-2])
0x963: Pop(1)
0x964: Pop(0); Push((bool) Stack[-1] == 0)
0x965: IF (Stack[-1] == 0) GOTO 0x967; Pop(1)

0x966: GOTO 0x976

0x967: GOTO 0x96b

0x968: Push(Stack[-6])
0x969: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x96a: GOTO 0x976

0x96b: PushEmpty(bool)
0x96c: Call2 0x979

0x96d: Pop(0)
0x96e: Pop(1); Push((bool) Stack[-1] == 0)
0x96f: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x970: GOTO 0x976

0x971: @ ResetAAS()
0x972: Pop(0)
0x973: Push((int) 1)
0x974: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x975: GOTO 0x938

0x976: @ ResetAAS()
0x977: Pop(0)
0x978: Return(); Pop(14)

0x979: Stack[-1] = (bool) 1
0x97a: Return(); Pop(0)

0x97b: @ StopAnimation()
0x97c: Pop(0)
0x97d: @ StopGroup0()
0x97e: Pop(0)
0x97f: Return(); Pop(0)

0x980: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x981: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x982: PushEmpty()
0x983: Call2 0x9b3

0x984: Pop(0)
0x985: @ GetDirection(Stack[-3])
0x986: Pop(0)
0x987: PushEmpty(cvector, object)
0x988: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x989: Call2 0xdb5

0x98a: Stack[-4] = Stack[-2]
0x98b: Pop(2)
0x98c: PushEmpty(float, cvector, cvector)
0x98d: Stack[-2] = Stack[-6]
0x98e: Stack[-1] = Stack[-5]
0x98f: Call2 0xf86

0x990: Pop(2)
0x991: Push((int) 0)
0x992: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x993: IF (Stack[-1] == 0) GOTO 0x99a; Pop(1)

0x994: PushEmpty(object)
0x995: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x996: Call2 0xe94

0x997: Pop(1)
0x998: Stack[-1] = (bool) 1
0x999: GOTO 0x99d

0x99a: Push((float)1.5)
0x99b: @ Sleep(Stack[-1], Stack[-2])
0x99c: Pop(1)
0x99d: Push(Stack[-1])
0x99e: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x99f: PushEmpty(object)
0x9a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a1: Call2 0xe94

0x9a2: Pop(1)
0x9a3: Push((int) 111)
0x9a4: Push((float)0.5)
0x9a5: @ SetTimer(Stack[-2], Stack[-1])
0x9a6: Pop(2)
0x9a7: Push((float)5.0)
0x9a8: @ Sleep(Stack[-1])
0x9a9: Pop(1)
0x9aa: Push((int) 111)
0x9ab: @ KillTimer(Stack[-1])
0x9ac: Pop(1)
0x9ad: @ StopAsync()
0x9ae: Pop(0)
0x9af: Push("head")
0x9b0: @ UnlookAsync(Stack[-1])
0x9b1: Pop(1)
0x9b2: Return(); Pop(6)

0x9b3: PushEmpty(object)
0x9b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b5: Call2 0xf1a

0x9b6: Pop(1)
0x9b7: Return(); Pop(0)

0x9b8: PushEmpty(int, int)
0x9b9: PushEmpty(int, object)
0x9ba: Stack[-1] = Stack[-5]
0x9bb: Call2 0x1370

0x9bc: Stack[-3] = Stack[-2]
0x9bd: Pop(2)
0x9be: Push((int) 0)
0x9bf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c0: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c1: Push((int) 1)
0x9c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c7; Pop(1)

0x9c4: PushEmpty()
0x9c5: Call2 0xa47

0x9c6: Pop(0)
0x9c7: PushEmpty(object)
0x9c8: Stack[-1] = Stack[-4]
0x9c9: Call2 0x1373

0x9ca: Pop(1)
0x9cb: Return(); Pop(2)

0x9cc: PushEmpty(int, int)
0x9cd: PushEmpty(object)
0x9ce: Stack[-1] = Stack[-4]
0x9cf: Call2 0x12ad

0x9d0: Pop(1)
0x9d1: PushEmpty(int, object)
0x9d2: Stack[-1] = Stack[-5]
0x9d3: Call2 0x1300

0x9d4: Stack[-3] = Stack[-2]
0x9d5: Pop(2)
0x9d6: Push((int) 0)
0x9d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9d8: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9d9: Push((int) 1)
0x9da: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9db: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9dc: PushEmpty()
0x9dd: Call2 0xa47

0x9de: Pop(0)
0x9df: PushEmpty(object)
0x9e0: Stack[-1] = Stack[-4]
0x9e1: Call2 0x130a

0x9e2: Pop(1)
0x9e3: Return(); Pop(2)

0x9e4: PushEmpty(int, int)
0x9e5: PushEmpty(bool, object, object, bool)
0x9e6: Stack[-3] = Stack[-9]
0x9e7: Stack[-2] = Stack[-8]
0x9e8: Stack[-1] = Stack[-7]
0x9e9: Call2 0x1488

0x9ea: Pop(3)
0x9eb: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9ec: PushEmpty(int, object, bool)
0x9ed: Stack[-2] = Stack[-8]
0x9ee: Stack[-1] = Stack[-6]
0x9ef: Call2 0x1312

0x9f0: Stack[-4] = Stack[-3]
0x9f1: Pop(3)
0x9f2: Push((int) 0)
0x9f3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f4: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9f5: Push((int) 1)
0x9f6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f8: PushEmpty()
0x9f9: Call2 0xa47

0x9fa: Pop(0)
0x9fb: PushEmpty(object)
0x9fc: Stack[-1] = Stack[-6]
0x9fd: Call2 0x131c

0x9fe: Pop(1)
0x9ff: Return(); Pop(2)

0xa00: PushEmpty(int, int)
0xa01: PushEmpty(int, object)
0xa02: Stack[-1] = Stack[-5]
0xa03: Call2 0x1366

0xa04: Stack[-3] = Stack[-2]
0xa05: Pop(2)
0xa06: Push((int) 0)
0xa07: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa08: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa09: Push((int) 1)
0xa0a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0c: PushEmpty()
0xa0d: Call2 0xa47

0xa0e: Pop(0)
0xa0f: PushEmpty(object)
0xa10: Stack[-1] = Stack[-4]
0xa11: Call2 0x1369

0xa12: Pop(1)
0xa13: Return(); Pop(2)

0xa14: PushEmpty(int, int)
0xa15: PushEmpty(bool, object, string)
0xa16: Stack[-2] = Stack[-7]
0xa17: Stack[-1] = Stack[-6]
0xa18: Call2 0x1257

0xa19: Pop(2)
0xa1a: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1b: PushEmpty()
0xa1c: Call2 0xa47

0xa1d: Pop(0)
0xa1e: PushEmpty(object, string)
0xa1f: Stack[-2] = Stack[-6]
0xa20: Stack[-1] = Stack[-5]
0xa21: Call2 0x1277

0xa22: Pop(2)
0xa23: GOTO 0xa38

0xa24: PushEmpty(int, string, object)
0xa25: Stack[-2] = Stack[-6]
0xa26: Stack[-1] = Stack[-7]
0xa27: Call2 0x136b

0xa28: Stack[-4] = Stack[-3]
0xa29: Pop(3)
0xa2a: Push((int) 0)
0xa2b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa2c: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa2d: Push((int) 1)
0xa2e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa2f: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa30: PushEmpty()
0xa31: Call2 0xa47

0xa32: Pop(0)
0xa33: PushEmpty(string, object)
0xa34: Stack[-2] = Stack[-5]
0xa35: Stack[-1] = Stack[-6]
0xa36: Call2 0x136e

0xa37: Pop(2)
0xa38: Return(); Pop(2)

0xa39: PushEmpty()
0xa3a: PushEmpty(bool, string)
0xa3b: Stack[-1] = Stack[-3]
0xa3c: Call2 0x12ba

0xa3d: Pop(1)
0xa3e: IF (Stack[-1] == 0) GOTO 0xa46; Pop(1)

0xa3f: PushEmpty()
0xa40: Call2 0xa47

0xa41: Pop(0)
0xa42: PushEmpty(string)
0xa43: Stack[-1] = Stack[-2]
0xa44: Call2 0x12ca

0xa45: Pop(1)
0xa46: Return(); Pop(0)

0xa47: @ StopGroup0()
0xa48: Pop(0)
0xa49: @ StopAsync()
0xa4a: Pop(0)
0xa4b: Push("head")
0xa4c: @ UnlookAsync(Stack[-1])
0xa4d: Pop(1)
0xa4e: Push((int) 111)
0xa4f: @ KillTimer(Stack[-1])
0xa50: Pop(1)
0xa51: Return(); Pop(0)

0xa52: PushEmpty()
0xa53: PushEmpty()
0xa54: Call2 0xa47

0xa55: Pop(0)
0xa56: PushEmpty(object)
0xa57: Stack[-1] = Stack[-2]
0xa58: Call2 0x123f

0xa59: Pop(1)
0xa5a: Return(); Pop(0)

0xa5b: PushEmpty(cvector, cvector, cvector, cvector)
0xa5c: Push((int) 111)
0xa5d: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xa5e: IF (Stack[-1] == 0) GOTO 0xa60; Pop(1)

0xa5f: Return(); Pop(4)

0xa60: PushEmpty(bool, object)
0xa61: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa62: Call2 0xdfe

0xa63: Pop(1)
0xa64: Pop(1); Push((bool) Stack[-1] == 0)
0xa65: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa66: PushEmpty()
0xa67: Call2 0xa47

0xa68: Pop(0)
0xa69: Return(); Pop(4)

0xa6a: @ GetDirection(Stack[-2])
0xa6b: Pop(0)
0xa6c: PushEmpty(cvector, object)
0xa6d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6e: Call2 0xdb5

0xa6f: Stack[-3] = Stack[-2]
0xa70: Pop(2)
0xa71: PushEmpty(float, cvector, cvector)
0xa72: Stack[-2] = Stack[-5]
0xa73: Stack[-1] = Stack[-4]
0xa74: Call2 0xf86

0xa75: Pop(2)
0xa76: Push((float)0.5)
0xa77: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa78: IF (Stack[-1] == 0) GOTO 0xa7d; Pop(1)

0xa79: PushEmpty(object)
0xa7a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7b: Call2 0xe94

0xa7c: Pop(1)
0xa7d: Return(); Pop(4)

0xa7e: PushEmpty()
0xa7f: Call2 0xa47

0xa80: Pop(0)
0xa81: PushEmpty()
0xa82: Call2 0x1379

0xa83: Pop(0)
0xa84: Return(); Pop(0)

0xa85: PushEmpty()
0xa86: PushEmpty(bool, object)
0xa87: Stack[-1] = Stack[-3]
0xa88: Call2 0x1290

0xa89: Pop(1)
0xa8a: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa8b: PushEmpty()
0xa8c: Call2 0xa47

0xa8d: Pop(0)
0xa8e: PushEmpty(object)
0xa8f: Stack[-1] = Stack[-2]
0xa90: Call2 0x12a7

0xa91: Pop(1)
0xa92: Return(); Pop(0)

0xa93: PushEmpty()
0xa94: @ Face(Stack[-1])
0xa95: Pop(0)
0xa96: Push("all")
0xa97: Push("attack_on")
0xa98: @ PlayAnimation(Stack[-2], Stack[-1])
0xa99: Pop(2)
0xa9a: @ WaitForAnimEnd()
0xa9b: Pop(0)
0xa9c: Push("all")
0xa9d: Push("attack_stay")
0xa9e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa9f: Pop(2)
0xaa0: @ WaitForAnimEnd()
0xaa1: Pop(0)
0xaa2: Push("all")
0xaa3: Push("attack_off")
0xaa4: @ PlayAnimation(Stack[-2], Stack[-1])
0xaa5: Pop(2)
0xaa6: @ WaitForAnimEnd()
0xaa7: Pop(0)
0xaa8: @ StopAsync()
0xaa9: Pop(0)
0xaaa: PushEmpty(object)
0xaab: Stack[-1] = Stack[-2]
0xaac: Call2 0xad4

0xaad: Pop(1)
0xaae: Return(); Pop(0)

0xaaf: PushEmpty()
0xab0: Call2 0xb51

0xab1: Pop(0)
0xab2: PushEmpty()
0xab3: Call2 0x1379

0xab4: Pop(0)
0xab5: Return(); Pop(0)

0xab6: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xab7: @ GetPosition(Stack[-6])
0xab8: Pop(0)
0xab9: @@ GetPosition(Stack[-5])
0xaba: Pop(0)
0xabb: @ GetDirection(Stack[-4])
0xabc: Pop(0)
0xabd: PushEmpty(cvector, cvector)
0xabe: PushEmpty(cvector, cvector)
0xabf: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xac0: Call2 0xf5b

0xac1: Pop(1)
0xac2: Push((float)0.75)
0xac3: Pop(1); Push(Stack[-8] * Stack[-1]);
0xac4: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xac5: Call2 0xf5b

0xac6: Stack[-5] = Stack[-2]
0xac7: Pop(2)
0xac8: Push((int) 32)
0xac9: Push((float)7000.0)
0xaca: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xacb: Pop(2)
0xacc: Push((int) 100)
0xacd: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xace: Push((int) 0)
0xacf: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xad0: IF (Stack[-1] == 0) GOTO 0xad2; Pop(1)

0xad1: Stack[-1] = (int) 0
0xad2: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xad3: Return(); Pop(12)

0xad4: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xad5: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xad6: PushEmpty(cvector, float)
0xad7: Stack[-1] = (float) 1.74533
0xad8: Call2 0xab6

0xad9: Stack[-7] = Stack[-2]
0xada: Pop(2)
0xadb: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xadc: Push((float)2500.0)
0xadd: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xade: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xadf: PushEmpty(cvector, float)
0xae0: Stack[-1] = (float) 2.61799
0xae1: Call2 0xab6

0xae2: Stack[-7] = Stack[-2]
0xae3: Pop(2)
0xae4: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xae5: Push((float)2500.0)
0xae6: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xae7: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xae8: Push("Can't retreat, distance: ")
0xae9: Pop(0); Push(Sqrt(Stack[-5]))
0xaea: Pop(2); Push(Stack[-2] + Stack[-1]);
0xaeb: @ Trace(Stack[-1])
0xaec: Pop(1)
0xaed: Push((float)0.5)
0xaee: @ Sleep(Stack[-1])
0xaef: Pop(1)
0xaf0: Return(); Pop(10)

0xaf1: Push(CvectorIndex(Stack[-5], 0))
0xaf2: Push(CvectorIndex(Stack[-6], 2))
0xaf3: @ Rotate(Stack[-2], Stack[-1])
0xaf4: Pop(2)
0xaf5: PushEmpty(cvector)
0xaf6: Call2 0xdb0

0xaf7: Pop(0)
0xaf8: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xaf9: Push((int) 120)
0xafa: Push((float)0.5)
0xafb: @ SetTimer(Stack[-2], Stack[-1])
0xafc: Pop(2)
0xafd: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xafe: Push((int) 1)
0xaff: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xb00: Pop(1)
0xb01: Push(Stack[-3])
0xb02: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb03: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb04: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb05: GOTO 0xb1c

0xb06: GOTO 0xb1a

0xb07: PushEmpty(cvector, float)
0xb08: Stack[-1] = (float) 2.61799
0xb09: Call2 0xab6

0xb0a: Stack[-4] = Stack[-2]
0xb0b: Pop(2)
0xb0c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb0d: Push((float)2500.0)
0xb0e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb0f: IF (Stack[-1] == 0) GOTO 0xb19; Pop(1)

0xb10: PushEmpty(cvector)
0xb11: Call2 0xdb0

0xb12: Pop(0)
0xb13: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb14: Push((int) 120)
0xb15: Push((float)0.5)
0xb16: @ SetTimer(Stack[-2], Stack[-1])
0xb17: Pop(2)
0xb18: GOTO 0xb1a

0xb19: GOTO 0xb1c

0xb1a: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xb1b: IF (Stack[-1] == 0) GOTO 0xafe; Pop(1)

0xb1c: Return(); Pop(10)

0xb1d: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xb1e: Push((int) 120)
0xb1f: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xb20: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb21: Return(); Pop(8)

0xb22: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb23: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb24: @ Stop()
0xb25: Pop(0)
0xb26: Push((int) 1)
0xb27: @ KillTimer(Stack[-1])
0xb28: Pop(1)
0xb29: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb2a: GOTO 0xb50

0xb2b: @ GetDirection(Stack[-4])
0xb2c: Pop(0)
0xb2d: Push((float)7000.0)
0xb2e: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xb2f: Pop(1)
0xb30: PushEmpty(cvector, float)
0xb31: Stack[-1] = (float) 1.74533
0xb32: Call2 0xab6

0xb33: Stack[-4] = Stack[-2]
0xb34: Pop(2)
0xb35: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb36: PushEmpty(bool)
0xb37: Stack[-1] = (bool) 0
0xb38: Push((float)2500.0)
0xb39: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb3a: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb3b: PushEmpty(bool)
0xb3c: Stack[-1] = (bool) 1
0xb3d: Pop(0); Push(Stack[-5] * Stack[-5]);
0xb3e: Push((float)2.25)
0xb3f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb40: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xb41: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb42: PushEmpty(bool)
0xb43: Call2 0xb61

0xb44: Pop(0)
0xb45: IF (Stack[-1] == 0) GOTO 0xb47; Pop(1)

0xb46: Stack[-1] = (bool) 0
0xb47: IF (Stack[-1] == 0) GOTO 0xb49; Pop(1)

0xb48: Stack[-1] = (bool) 1
0xb49: IF (Stack[-1] == 0) GOTO 0xb50; Pop(1)

0xb4a: @ Stop()
0xb4b: Pop(0)
0xb4c: PushEmpty(cvector)
0xb4d: Call2 0xdb0

0xb4e: Pop(0)
0xb4f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb50: Return(); Pop(8)

0xb51: @ Stop()
0xb52: Pop(0)
0xb53: Push((int) 120)
0xb54: @ KillTimer(Stack[-1])
0xb55: Pop(1)
0xb56: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb57: Return(); Pop(0)

0xb58: PushEmpty()
0xb59: PushEmpty()
0xb5a: Call2 0xb51

0xb5b: Pop(0)
0xb5c: PushEmpty(object)
0xb5d: Stack[-1] = Stack[-2]
0xb5e: Call2 0x123f

0xb5f: Pop(1)
0xb60: Return(); Pop(0)

0xb61: PushEmpty(cvector, cvector, cvector, cvector)
0xb62: @ GetDirection(Stack[-2])
0xb63: Pop(0)
0xb64: PushEmpty(cvector, object)
0xb65: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb66: Call2 0xdb5

0xb67: Stack[-3] = Stack[-2]
0xb68: Pop(2)
0xb69: PushEmpty(float, cvector, cvector)
0xb6a: Stack[-2] = Stack[-5]
0xb6b: Stack[-1] = Stack[-4]
0xb6c: Call2 0xf6b

0xb6d: Pop(2)
0xb6e: Push((float)-0.34202)
0xb6f: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xb70: Return(); Pop(4)

0xb71: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xb72: @ GetPosition(Stack[-6])
0xb73: Pop(0)
0xb74: @@ GetPosition(Stack[-5])
0xb75: Pop(0)
0xb76: @ GetDirection(Stack[-4])
0xb77: Pop(0)
0xb78: PushEmpty(cvector, cvector)
0xb79: PushEmpty(cvector, cvector)
0xb7a: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xb7b: Call2 0xf5b

0xb7c: Pop(1)
0xb7d: Push((float)0.75)
0xb7e: Pop(1); Push(Stack[-8] * Stack[-1]);
0xb7f: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb80: Call2 0xf5b

0xb81: Stack[-5] = Stack[-2]
0xb82: Pop(2)
0xb83: Push((int) 32)
0xb84: Push((float)7000.0)
0xb85: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xb86: Pop(2)
0xb87: Push((int) 100)
0xb88: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xb89: Push((int) 0)
0xb8a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb8b: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb8c: Stack[-1] = (int) 0
0xb8d: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xb8e: Return(); Pop(12)

0xb8f: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xb90: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xb91: PushEmpty(cvector, float)
0xb92: Stack[-1] = (float) 1.74533
0xb93: Call2 0xb71

0xb94: Stack[-7] = Stack[-2]
0xb95: Pop(2)
0xb96: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb97: Push((float)2500.0)
0xb98: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb99: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xb9a: PushEmpty(cvector, float)
0xb9b: Stack[-1] = (float) 2.61799
0xb9c: Call2 0xb71

0xb9d: Stack[-7] = Stack[-2]
0xb9e: Pop(2)
0xb9f: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xba0: Push((float)2500.0)
0xba1: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xba2: IF (Stack[-1] == 0) GOTO 0xbac; Pop(1)

0xba3: Push("Can't retreat, distance: ")
0xba4: Pop(0); Push(Sqrt(Stack[-5]))
0xba5: Pop(2); Push(Stack[-2] + Stack[-1]);
0xba6: @ Trace(Stack[-1])
0xba7: Pop(1)
0xba8: Push((float)0.5)
0xba9: @ Sleep(Stack[-1])
0xbaa: Pop(1)
0xbab: Return(); Pop(10)

0xbac: Push(CvectorIndex(Stack[-5], 0))
0xbad: Push(CvectorIndex(Stack[-6], 2))
0xbae: @ Rotate(Stack[-2], Stack[-1])
0xbaf: Pop(2)
0xbb0: PushEmpty(cvector)
0xbb1: Call2 0xdb0

0xbb2: Pop(0)
0xbb3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xbb4: Push((int) 120)
0xbb5: Push((float)0.5)
0xbb6: @ SetTimer(Stack[-2], Stack[-1])
0xbb7: Pop(2)
0xbb8: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xbb9: Push((int) 1)
0xbba: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xbbb: Pop(1)
0xbbc: Push(Stack[-3])
0xbbd: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbbe: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc2; Pop(1)

0xbc0: GOTO 0xbd7

0xbc1: GOTO 0xbd5

0xbc2: PushEmpty(cvector, float)
0xbc3: Stack[-1] = (float) 2.61799
0xbc4: Call2 0xb71

0xbc5: Stack[-4] = Stack[-2]
0xbc6: Pop(2)
0xbc7: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbc8: Push((float)2500.0)
0xbc9: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbcb: PushEmpty(cvector)
0xbcc: Call2 0xdb0

0xbcd: Pop(0)
0xbce: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xbcf: Push((int) 120)
0xbd0: Push((float)0.5)
0xbd1: @ SetTimer(Stack[-2], Stack[-1])
0xbd2: Pop(2)
0xbd3: GOTO 0xbd5

0xbd4: GOTO 0xbd7

0xbd5: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xbd6: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xbd7: Return(); Pop(10)

0xbd8: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xbd9: Push((int) 120)
0xbda: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xbdb: IF (Stack[-1] == 0) GOTO 0xbdd; Pop(1)

0xbdc: Return(); Pop(8)

0xbdd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xbde: IF (Stack[-1] == 0) GOTO 0xbe6; Pop(1)

0xbdf: @ Stop()
0xbe0: Pop(0)
0xbe1: Push((int) 1)
0xbe2: @ KillTimer(Stack[-1])
0xbe3: Pop(1)
0xbe4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xbe5: GOTO 0xc0b

0xbe6: @ GetDirection(Stack[-4])
0xbe7: Pop(0)
0xbe8: Push((float)7000.0)
0xbe9: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xbea: Pop(1)
0xbeb: PushEmpty(cvector, float)
0xbec: Stack[-1] = (float) 1.74533
0xbed: Call2 0xb71

0xbee: Stack[-4] = Stack[-2]
0xbef: Pop(2)
0xbf0: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbf1: PushEmpty(bool)
0xbf2: Stack[-1] = (bool) 0
0xbf3: Push((float)2500.0)
0xbf4: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbf5: IF (Stack[-1] == 0) GOTO 0xc04; Pop(1)

0xbf6: PushEmpty(bool)
0xbf7: Stack[-1] = (bool) 1
0xbf8: Pop(0); Push(Stack[-5] * Stack[-5]);
0xbf9: Push((float)2.25)
0xbfa: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbfb: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xbfc: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbfd: PushEmpty(bool)
0xbfe: Call2 0xc1c

0xbff: Pop(0)
0xc00: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xc01: Stack[-1] = (bool) 0
0xc02: IF (Stack[-1] == 0) GOTO 0xc04; Pop(1)

0xc03: Stack[-1] = (bool) 1
0xc04: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc05: @ Stop()
0xc06: Pop(0)
0xc07: PushEmpty(cvector)
0xc08: Call2 0xdb0

0xc09: Pop(0)
0xc0a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc0b: Return(); Pop(8)

0xc0c: @ Stop()
0xc0d: Pop(0)
0xc0e: Push((int) 120)
0xc0f: @ KillTimer(Stack[-1])
0xc10: Pop(1)
0xc11: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc12: Return(); Pop(0)

0xc13: PushEmpty()
0xc14: PushEmpty()
0xc15: Call2 0xc0c

0xc16: Pop(0)
0xc17: PushEmpty(object)
0xc18: Stack[-1] = Stack[-2]
0xc19: Call2 0x123f

0xc1a: Pop(1)
0xc1b: Return(); Pop(0)

0xc1c: PushEmpty(cvector, cvector, cvector, cvector)
0xc1d: @ GetDirection(Stack[-2])
0xc1e: Pop(0)
0xc1f: PushEmpty(cvector, object)
0xc20: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc21: Call2 0xdb5

0xc22: Stack[-3] = Stack[-2]
0xc23: Pop(2)
0xc24: PushEmpty(float, cvector, cvector)
0xc25: Stack[-2] = Stack[-5]
0xc26: Stack[-1] = Stack[-4]
0xc27: Call2 0xf6b

0xc28: Pop(2)
0xc29: Push((float)-0.34202)
0xc2a: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xc2b: Return(); Pop(4)

0xc2c: PushEmpty()
0xc2d: Call2 0xcce

0xc2e: Pop(0)
0xc2f: PushEmpty()
0xc30: Call2 0x1379

0xc31: Pop(0)
0xc32: Return(); Pop(0)

0xc33: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xc34: @ GetPosition(Stack[-6])
0xc35: Pop(0)
0xc36: @@ GetPosition(Stack[-5])
0xc37: Pop(0)
0xc38: @ GetDirection(Stack[-4])
0xc39: Pop(0)
0xc3a: PushEmpty(cvector, cvector)
0xc3b: PushEmpty(cvector, cvector)
0xc3c: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xc3d: Call2 0xf5b

0xc3e: Pop(1)
0xc3f: Push((float)0.75)
0xc40: Pop(1); Push(Stack[-8] * Stack[-1]);
0xc41: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc42: Call2 0xf5b

0xc43: Stack[-5] = Stack[-2]
0xc44: Pop(2)
0xc45: Push((int) 32)
0xc46: Push((float)7000.0)
0xc47: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xc48: Pop(2)
0xc49: Push((int) 100)
0xc4a: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xc4b: Push((int) 0)
0xc4c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc4d: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4e: Stack[-1] = (int) 0
0xc4f: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xc50: Return(); Pop(12)

0xc51: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xc52: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xc53: PushEmpty(cvector, float)
0xc54: Stack[-1] = (float) 1.74533
0xc55: Call2 0xc33

0xc56: Stack[-7] = Stack[-2]
0xc57: Pop(2)
0xc58: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc59: Push((float)2500.0)
0xc5a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc5b: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc5c: PushEmpty(cvector, float)
0xc5d: Stack[-1] = (float) 2.61799
0xc5e: Call2 0xc33

0xc5f: Stack[-7] = Stack[-2]
0xc60: Pop(2)
0xc61: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc62: Push((float)2500.0)
0xc63: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc64: IF (Stack[-1] == 0) GOTO 0xc6e; Pop(1)

0xc65: Push("Can't retreat, distance: ")
0xc66: Pop(0); Push(Sqrt(Stack[-5]))
0xc67: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc68: @ Trace(Stack[-1])
0xc69: Pop(1)
0xc6a: Push((float)0.5)
0xc6b: @ Sleep(Stack[-1])
0xc6c: Pop(1)
0xc6d: Return(); Pop(10)

0xc6e: Push(CvectorIndex(Stack[-5], 0))
0xc6f: Push(CvectorIndex(Stack[-6], 2))
0xc70: @ Rotate(Stack[-2], Stack[-1])
0xc71: Pop(2)
0xc72: PushEmpty(cvector)
0xc73: Call2 0xdb0

0xc74: Pop(0)
0xc75: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xc76: Push((int) 120)
0xc77: Push((float)0.5)
0xc78: @ SetTimer(Stack[-2], Stack[-1])
0xc79: Pop(2)
0xc7a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc7b: Push((int) 1)
0xc7c: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xc7d: Pop(1)
0xc7e: Push(Stack[-3])
0xc7f: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc80: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc81: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc82: GOTO 0xc99

0xc83: GOTO 0xc97

0xc84: PushEmpty(cvector, float)
0xc85: Stack[-1] = (float) 2.61799
0xc86: Call2 0xc33

0xc87: Stack[-4] = Stack[-2]
0xc88: Pop(2)
0xc89: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc8a: Push((float)2500.0)
0xc8b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc8c: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc8d: PushEmpty(cvector)
0xc8e: Call2 0xdb0

0xc8f: Pop(0)
0xc90: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc91: Push((int) 120)
0xc92: Push((float)0.5)
0xc93: @ SetTimer(Stack[-2], Stack[-1])
0xc94: Pop(2)
0xc95: GOTO 0xc97

0xc96: GOTO 0xc99

0xc97: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc98: IF (Stack[-1] == 0) GOTO 0xc7b; Pop(1)

0xc99: Return(); Pop(10)

0xc9a: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xc9b: Push((int) 120)
0xc9c: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc9e: Return(); Pop(8)

0xc9f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xca0: IF (Stack[-1] == 0) GOTO 0xca8; Pop(1)

0xca1: @ Stop()
0xca2: Pop(0)
0xca3: Push((int) 1)
0xca4: @ KillTimer(Stack[-1])
0xca5: Pop(1)
0xca6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xca7: GOTO 0xccd

0xca8: @ GetDirection(Stack[-4])
0xca9: Pop(0)
0xcaa: Push((float)7000.0)
0xcab: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xcac: Pop(1)
0xcad: PushEmpty(cvector, float)
0xcae: Stack[-1] = (float) 1.74533
0xcaf: Call2 0xc33

0xcb0: Stack[-4] = Stack[-2]
0xcb1: Pop(2)
0xcb2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xcb3: PushEmpty(bool)
0xcb4: Stack[-1] = (bool) 0
0xcb5: Push((float)2500.0)
0xcb6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xcb7: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcb8: PushEmpty(bool)
0xcb9: Stack[-1] = (bool) 1
0xcba: Pop(0); Push(Stack[-5] * Stack[-5]);
0xcbb: Push((float)2.25)
0xcbc: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcbd: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xcbe: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcbf: PushEmpty(bool)
0xcc0: Call2 0xcde

0xcc1: Pop(0)
0xcc2: IF (Stack[-1] == 0) GOTO 0xcc4; Pop(1)

0xcc3: Stack[-1] = (bool) 0
0xcc4: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcc5: Stack[-1] = (bool) 1
0xcc6: IF (Stack[-1] == 0) GOTO 0xccd; Pop(1)

0xcc7: @ Stop()
0xcc8: Pop(0)
0xcc9: PushEmpty(cvector)
0xcca: Call2 0xdb0

0xccb: Pop(0)
0xccc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xccd: Return(); Pop(8)

0xcce: @ Stop()
0xccf: Pop(0)
0xcd0: Push((int) 120)
0xcd1: @ KillTimer(Stack[-1])
0xcd2: Pop(1)
0xcd3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcd4: Return(); Pop(0)

0xcd5: PushEmpty()
0xcd6: PushEmpty()
0xcd7: Call2 0xcce

0xcd8: Pop(0)
0xcd9: PushEmpty(object)
0xcda: Stack[-1] = Stack[-2]
0xcdb: Call2 0x123f

0xcdc: Pop(1)
0xcdd: Return(); Pop(0)

0xcde: PushEmpty(cvector, cvector, cvector, cvector)
0xcdf: @ GetDirection(Stack[-2])
0xce0: Pop(0)
0xce1: PushEmpty(cvector, object)
0xce2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce3: Call2 0xdb5

0xce4: Stack[-3] = Stack[-2]
0xce5: Pop(2)
0xce6: PushEmpty(float, cvector, cvector)
0xce7: Stack[-2] = Stack[-5]
0xce8: Stack[-1] = Stack[-4]
0xce9: Call2 0xf6b

0xcea: Pop(2)
0xceb: Push((float)-0.34202)
0xcec: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xced: Return(); Pop(4)

0xcee: PushEmpty()
0xcef: Call2 0xd90

0xcf0: Pop(0)
0xcf1: PushEmpty()
0xcf2: Call2 0x1379

0xcf3: Pop(0)
0xcf4: Return(); Pop(0)

0xcf5: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xcf6: @ GetPosition(Stack[-6])
0xcf7: Pop(0)
0xcf8: @@ GetPosition(Stack[-5])
0xcf9: Pop(0)
0xcfa: @ GetDirection(Stack[-4])
0xcfb: Pop(0)
0xcfc: PushEmpty(cvector, cvector)
0xcfd: PushEmpty(cvector, cvector)
0xcfe: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xcff: Call2 0xf5b

0xd00: Pop(1)
0xd01: Push((float)0.75)
0xd02: Pop(1); Push(Stack[-8] * Stack[-1]);
0xd03: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd04: Call2 0xf5b

0xd05: Stack[-5] = Stack[-2]
0xd06: Pop(2)
0xd07: Push((int) 32)
0xd08: Push((float)7000.0)
0xd09: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xd0a: Pop(2)
0xd0b: Push((int) 100)
0xd0c: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xd0d: Push((int) 0)
0xd0e: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd0f: IF (Stack[-1] == 0) GOTO 0xd11; Pop(1)

0xd10: Stack[-1] = (int) 0
0xd11: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xd12: Return(); Pop(12)

0xd13: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xd14: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xd15: PushEmpty(cvector, float)
0xd16: Stack[-1] = (float) 1.74533
0xd17: Call2 0xcf5

0xd18: Stack[-7] = Stack[-2]
0xd19: Pop(2)
0xd1a: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd1b: Push((float)2500.0)
0xd1c: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd1d: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd1e: PushEmpty(cvector, float)
0xd1f: Stack[-1] = (float) 2.61799
0xd20: Call2 0xcf5

0xd21: Stack[-7] = Stack[-2]
0xd22: Pop(2)
0xd23: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd24: Push((float)2500.0)
0xd25: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd26: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd27: Push("Can't retreat, distance: ")
0xd28: Pop(0); Push(Sqrt(Stack[-5]))
0xd29: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd2a: @ Trace(Stack[-1])
0xd2b: Pop(1)
0xd2c: Push((float)0.5)
0xd2d: @ Sleep(Stack[-1])
0xd2e: Pop(1)
0xd2f: Return(); Pop(10)

0xd30: Push(CvectorIndex(Stack[-5], 0))
0xd31: Push(CvectorIndex(Stack[-6], 2))
0xd32: @ Rotate(Stack[-2], Stack[-1])
0xd33: Pop(2)
0xd34: PushEmpty(cvector)
0xd35: Call2 0xdb0

0xd36: Pop(0)
0xd37: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xd38: Push((int) 120)
0xd39: Push((float)0.5)
0xd3a: @ SetTimer(Stack[-2], Stack[-1])
0xd3b: Pop(2)
0xd3c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd3d: Push((int) 1)
0xd3e: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xd3f: Pop(1)
0xd40: Push(Stack[-3])
0xd41: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd42: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd43: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd44: GOTO 0xd5b

0xd45: GOTO 0xd59

0xd46: PushEmpty(cvector, float)
0xd47: Stack[-1] = (float) 2.61799
0xd48: Call2 0xcf5

0xd49: Stack[-4] = Stack[-2]
0xd4a: Pop(2)
0xd4b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd4c: Push((float)2500.0)
0xd4d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd4e: IF (Stack[-1] == 0) GOTO 0xd58; Pop(1)

0xd4f: PushEmpty(cvector)
0xd50: Call2 0xdb0

0xd51: Pop(0)
0xd52: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd53: Push((int) 120)
0xd54: Push((float)0.5)
0xd55: @ SetTimer(Stack[-2], Stack[-1])
0xd56: Pop(2)
0xd57: GOTO 0xd59

0xd58: GOTO 0xd5b

0xd59: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd5a: IF (Stack[-1] == 0) GOTO 0xd3d; Pop(1)

0xd5b: Return(); Pop(10)

0xd5c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xd5d: Push((int) 120)
0xd5e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xd5f: IF (Stack[-1] == 0) GOTO 0xd61; Pop(1)

0xd60: Return(); Pop(8)

0xd61: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd62: IF (Stack[-1] == 0) GOTO 0xd6a; Pop(1)

0xd63: @ Stop()
0xd64: Pop(0)
0xd65: Push((int) 1)
0xd66: @ KillTimer(Stack[-1])
0xd67: Pop(1)
0xd68: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd69: GOTO 0xd8f

0xd6a: @ GetDirection(Stack[-4])
0xd6b: Pop(0)
0xd6c: Push((float)7000.0)
0xd6d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xd6e: Pop(1)
0xd6f: PushEmpty(cvector, float)
0xd70: Stack[-1] = (float) 1.74533
0xd71: Call2 0xcf5

0xd72: Stack[-4] = Stack[-2]
0xd73: Pop(2)
0xd74: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd75: PushEmpty(bool)
0xd76: Stack[-1] = (bool) 0
0xd77: Push((float)2500.0)
0xd78: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xd79: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd7a: PushEmpty(bool)
0xd7b: Stack[-1] = (bool) 1
0xd7c: Pop(0); Push(Stack[-5] * Stack[-5]);
0xd7d: Push((float)2.25)
0xd7e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd7f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xd80: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd81: PushEmpty(bool)
0xd82: Call2 0xda0

0xd83: Pop(0)
0xd84: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd85: Stack[-1] = (bool) 0
0xd86: IF (Stack[-1] == 0) GOTO 0xd88; Pop(1)

0xd87: Stack[-1] = (bool) 1
0xd88: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd89: @ Stop()
0xd8a: Pop(0)
0xd8b: PushEmpty(cvector)
0xd8c: Call2 0xdb0

0xd8d: Pop(0)
0xd8e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd8f: Return(); Pop(8)

0xd90: @ Stop()
0xd91: Pop(0)
0xd92: Push((int) 120)
0xd93: @ KillTimer(Stack[-1])
0xd94: Pop(1)
0xd95: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd96: Return(); Pop(0)

0xd97: PushEmpty()
0xd98: PushEmpty()
0xd99: Call2 0xd90

0xd9a: Pop(0)
0xd9b: PushEmpty(object)
0xd9c: Stack[-1] = Stack[-2]
0xd9d: Call2 0x123f

0xd9e: Pop(1)
0xd9f: Return(); Pop(0)

0xda0: PushEmpty(cvector, cvector, cvector, cvector)
0xda1: @ GetDirection(Stack[-2])
0xda2: Pop(0)
0xda3: PushEmpty(cvector, object)
0xda4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda5: Call2 0xdb5

0xda6: Stack[-3] = Stack[-2]
0xda7: Pop(2)
0xda8: PushEmpty(float, cvector, cvector)
0xda9: Stack[-2] = Stack[-5]
0xdaa: Stack[-1] = Stack[-4]
0xdab: Call2 0xf6b

0xdac: Pop(2)
0xdad: Push((float)-0.34202)
0xdae: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xdaf: Return(); Pop(4)

0xdb0: PushEmpty(cvector, cvector)
0xdb1: @ GetPosition(Stack[-1])
0xdb2: Pop(0)
0xdb3: Stack[-3] = Stack[-1]
0xdb4: Return(); Pop(2)

0xdb5: PushEmpty(cvector, cvector, cvector, cvector)
0xdb6: @ GetPosition(Stack[-2])
0xdb7: Pop(0)
0xdb8: @@ GetPosition(Stack[-1])
0xdb9: Pop(0)
0xdba: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xdbb: Return(); Pop(4)

0xdbc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xdbd: @ GetPosition(Stack[-3])
0xdbe: Pop(0)
0xdbf: @@ GetPosition(Stack[-2])
0xdc0: Pop(0)
0xdc1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xdc2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xdc3: Return(); Pop(6)

0xdc4: PushEmpty(bool, bool)
0xdc5: @ IsPlayerActor(Stack[-3], Stack[-1])
0xdc6: Pop(0)
0xdc7: Stack[-4] = Stack[-1]
0xdc8: Return(); Pop(2)

0xdc9: PushEmpty(bool, bool)
0xdca: Push("HasProperty")
0xdcb: Push((int) 2)
0xdcc: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xdcd: Pop(1); Push((bool) Stack[-1] == 0)
0xdce: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdcf: Stack[-5] = (bool) 0
0xdd0: Return(); Pop(2)

0xdd1: @@ HasProperty(Stack[-3], Stack[-1])
0xdd2: Pop(0)
0xdd3: Stack[-5] = Stack[-1]
0xdd4: Return(); Pop(2)

0xdd5: PushEmpty(bool, bool)
0xdd6: @@ IsDead(Stack[-1])
0xdd7: Pop(0)
0xdd8: Stack[-4] = Stack[-1]
0xdd9: Return(); Pop(2)

0xdda: PushEmpty(object, object, object, object)
0xddb: Pop(0); Push((bool) Stack[-5] == 0)
0xddc: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xddd: Stack[-6] = (bool) 0
0xdde: Return(); Pop(4)

0xddf: PushEmpty(bool)
0xde0: Stack[-1] = (bool) 0
0xde1: Push("IsDead")
0xde2: Push((int) 1)
0xde3: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xde4: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xde5: PushEmpty(bool, object)
0xde6: Stack[-1] = Stack[-8]
0xde7: Call2 0xdd5

0xde8: Pop(1)
0xde9: IF (Stack[-1] == 0) GOTO 0xdeb; Pop(1)

0xdea: Stack[-1] = (bool) 1
0xdeb: IF (Stack[-1] == 0) GOTO 0xdee; Pop(1)

0xdec: Stack[-6] = (bool) 0
0xded: Return(); Pop(4)

0xdee: @ GetScene(Stack[-2])
0xdef: Pop(0)
0xdf0: Pop(0); Push((bool) Stack[-2] == 0)
0xdf1: IF (Stack[-1] == 0) GOTO 0xdf4; Pop(1)

0xdf2: Stack[-6] = (bool) 0
0xdf3: Return(); Pop(4)

0xdf4: @@ GetScene(Stack[-1])
0xdf5: Pop(0)
0xdf6: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xdf7: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf8: Stack[-6] = (bool) 0
0xdf9: Return(); Pop(4)

0xdfa: Stack[-6] = (bool) 1
0xdfb: Return(); Pop(4)

0xdfc: Stack[-1] = 0
0xdfd: Stack[-2] = 0
0xdfe: PushEmpty(int, int)
0xdff: PushEmpty(bool, object)
0xe00: Stack[-1] = Stack[-5]
0xe01: Call2 0xdda

0xe02: Pop(1)
0xe03: Pop(1); Push((bool) Stack[-1] == 0)
0xe04: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe05: Stack[-4] = (bool) 0
0xe06: Return(); Pop(2)

0xe07: PushEmpty(bool, object, string)
0xe08: Stack[-2] = Stack[-6]
0xe09: Stack[-1] = "noaccess"
0xe0a: Call2 0xdc9

0xe0b: Pop(2)
0xe0c: Pop(1); Push((bool) Stack[-1] == 0)
0xe0d: IF (Stack[-1] == 0) GOTO 0xe10; Pop(1)

0xe0e: Stack[-4] = (bool) 1
0xe0f: Return(); Pop(2)

0xe10: Push("noaccess")
0xe11: @@ GetProperty(Stack[-1], Stack[-2])
0xe12: Pop(1)
0xe13: Push((int) 0)
0xe14: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xe15: Return(); Pop(2)

0xe16: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xe17: Pop(0); Push((bool) Stack[-15] == 0)
0xe18: IF (Stack[-1] == 0) GOTO 0xe1a; Pop(1)

0xe19: Return(); Pop(14)

0xe1a: @ IsDead(Stack[-7])
0xe1b: Pop(0)
0xe1c: Push(Stack[-7])
0xe1d: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1e: Return(); Pop(14)

0xe1f: @ GetSecondaryAnimationType(Stack[-6])
0xe20: Pop(0)
0xe21: Push((int) 0)
0xe22: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe23: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe24: Return(); Pop(14)

0xe25: @@ GetPosition(Stack[-5])
0xe26: Pop(0)
0xe27: @ GetPosition(Stack[-4])
0xe28: Pop(0)
0xe29: @ GetDirection(Stack[-3])
0xe2a: Pop(0)
0xe2b: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe2c: Push(CvectorIndex(Stack[-2], 0))
0xe2d: Push(CvectorIndex(Stack[-4], 0))
0xe2e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe2f: Push(CvectorIndex(Stack[-3], 2))
0xe30: Push(CvectorIndex(Stack[-5], 2))
0xe31: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe32: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe33: Push((int) 0)
0xe34: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe35: IF (Stack[-1] == 0) GOTO 0xe38; Pop(1)

0xe36: Stack[-1] = "fhit"
0xe37: GOTO 0xe39

0xe38: Stack[-1] = "bhit"
0xe39: Push("hit_react")
0xe3a: Push("1")
0xe3b: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe3c: Push("2")
0xe3d: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe3e: Push((int) -10)
0xe3f: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe40: Pop(4)
0xe41: Return(); Pop(14)

0xe42: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xe43: PushEmpty(bool)
0xe44: Stack[-1] = (bool) 0
0xe45: PushEmpty(bool)
0xe46: Stack[-1] = (bool) 0
0xe47: Push(Stack[-23])
0xe48: IF (Stack[-1] == 0) GOTO 0xe4d; Pop(1)

0xe49: Push((int) 4)
0xe4a: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe4d; Pop(1)

0xe4c: Stack[-1] = (bool) 1
0xe4d: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe4e: Push((int) 5)
0xe4f: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xe50: IF (Stack[-1] == 0) GOTO 0xe52; Pop(1)

0xe51: Stack[-1] = (bool) 1
0xe52: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe53: PushEmpty(cvector, cvector)
0xe54: PushEmpty(cvector, object)
0xe55: Stack[-1] = Stack[-25]
0xe56: Call2 0xdb5

0xe57: Stack[-3] = Stack[-2]
0xe58: Pop(2)
0xe59: Call2 0xf5b

0xe5a: Stack[-11] = Stack[-2]
0xe5b: Pop(2)
0xe5c: @ CreateVectorVector(Stack[-8])
0xe5d: Pop(0)
0xe5e: Stack[-7] = (int) 1
0xe5f: Push("hit")
0xe60: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe61: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xe62: Pop(1)
0xe63: Pop(0); Push((bool) Stack[-6] == 0)
0xe64: IF (Stack[-1] == 0) GOTO 0xe66; Pop(1)

0xe65: GOTO 0xe6f

0xe66: Pop(0); Push(Stack[-4] | Stack[-9]);
0xe67: Push((float)0.70711)
0xe68: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe69: IF (Stack[-1] == 0) GOTO 0xe6c; Pop(1)

0xe6a: @@ add(Stack[-5])
0xe6b: Pop(0)
0xe6c: Push((int) 1)
0xe6d: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xe6e: GOTO 0xe5f

0xe6f: @@ size(Stack[-3])
0xe70: Pop(0)
0xe71: Push(Stack[-3])
0xe72: IF (Stack[-1] == 0) GOTO 0xe80; Pop(1)

0xe73: @ irand(Stack[-2], Stack[-3])
0xe74: Pop(0)
0xe75: @@ get(Stack[-1], Stack[-2])
0xe76: Pop(0)
0xe77: PushEmpty(object, int, float, cvector, cvector)
0xe78: Stack[-5] = Stack[-26]
0xe79: Stack[-4] = Stack[-25]
0xe7a: Stack[-3] = Stack[-24]
0xe7b: Stack[-2] = Stack[-6]
0xe7c: Stack[-1] = -Stack[-14]; Pop(0);
0xe7d: Call2 0xe86

0xe7e: Pop(5)
0xe7f: Return(); Pop(18)

0xe80: Stack[-8] = 0
0xe81: PushEmpty(object)
0xe82: Stack[-1] = Stack[-22]
0xe83: Call2 0xe16

0xe84: Pop(1)
0xe85: Return(); Pop(18)

0xe86: PushEmpty(object, object, object, object)
0xe87: @ GetScene(Stack[-2])
0xe88: Pop(0)
0xe89: Push("scripted")
0xe8a: Push("blood_dir.xml")
0xe8b: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xe8c: Pop(2)
0xe8d: PushEmpty(object)
0xe8e: Stack[-1] = Stack[-10]
0xe8f: Call2 0xe16

0xe90: Pop(1)
0xe91: Return(); Pop(4)

0xe92: Stack[-1] = 0
0xe93: Stack[-2] = 0
0xe94: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe95: @@ GetPosition(Stack[-3])
0xe96: Pop(0)
0xe97: @ GetPosition(Stack[-2])
0xe98: Pop(0)
0xe99: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xe9a: Push(CvectorIndex(Stack[-1], 0))
0xe9b: Push(CvectorIndex(Stack[-2], 2))
0xe9c: @ RotateAsync(Stack[-2], Stack[-1])
0xe9d: Pop(2)
0xe9e: Return(); Pop(6)

0xe9f: PushEmpty(bool, bool)
0xea0: @ IsLoaded(Stack[-1])
0xea1: Pop(0)
0xea2: Stack[-3] = Stack[-1]
0xea3: Return(); Pop(2)

0xea4: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xea5: @@ GetPosition(Stack[-8])
0xea6: Pop(0)
0xea7: @@ GetEyesHeight(Stack[-9])
0xea8: Pop(0)
0xea9: Push(CvectorIndex(Stack[-8], 1))
0xeaa: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xeab: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xeac: @ GetPosition(Stack[-7])
0xead: Pop(0)
0xeae: @ GetEyesHeight(Stack[-9])
0xeaf: Pop(0)
0xeb0: Push(CvectorIndex(Stack[-7], 1))
0xeb1: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xeb2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xeb3: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xeb4: Push(CvectorIndex(Stack[-6], 1))
0xeb5: Stack[-1] = (int) 0
0xeb6: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xeb7: Pop(0); Push(Stack[-6] | Stack[-6]);
0xeb8: Pop(1); Push(Sqrt(Stack[-1]))
0xeb9: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xeba: Stack[-5] = -Stack[-6]; Pop(0);
0xebb: Pop(0); Push(Stack[-6] * Stack[-19]);
0xebc: PushEmpty(cvector, cvector)
0xebd: Push(CVector(0.0, 1.0, 0.0))
0xebe: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xebf: Call2 0xf5b

0xec0: Pop(1)
0xec1: Push((int) 25)
0xec2: Pop(2); Push(Stack[-2] * Stack[-1]);
0xec3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xec4: Push(CVector(0.0, 10.0, 0.0))
0xec5: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xec6: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xec7: @ IsOverrideActive(Stack[-2])
0xec8: Pop(0)
0xec9: Push(Stack[-2])
0xeca: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xecb: Stack[-21] = (bool) 0
0xecc: Return(); Pop(18)

0xecd: @ StopWorld()
0xece: Pop(0)
0xecf: Push((bool) 1)
0xed0: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xed1: Pop(1)
0xed2: Push(CvectorIndex(Stack[-4], 0))
0xed3: Push(CvectorIndex(Stack[-5], 2))
0xed4: @ Rotate(Stack[-2], Stack[-1])
0xed5: Pop(2)
0xed6: PushEmpty(bool)
0xed7: Call2 0x146a

0xed8: Pop(0)
0xed9: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xeda: GOTO 0xee3

0xedb: Push("head")
0xedc: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xedd: Pop(1)
0xede: Push(Stack[-1])
0xedf: IF (Stack[-1] == 0) GOTO 0xee3; Pop(1)

0xee0: Push("head")
0xee1: @ LookAsyncCamera(Stack[-1])
0xee2: Pop(1)
0xee3: @ CameraWaitForPlayFinish()
0xee4: Pop(0)
0xee5: @ ResumeWorld()
0xee6: Pop(0)
0xee7: Stack[-21] = (bool) 1
0xee8: Return(); Pop(18)

0xee9: PushEmpty(bool, bool)
0xeea: Push((bool) 1)
0xeeb: @ CameraSwitchToNormal(Stack[-1])
0xeec: Pop(1)
0xeed: PushEmpty(bool)
0xeee: Call2 0x146a

0xeef: Pop(0)
0xef0: IF (Stack[-1] == 0) GOTO 0xef2; Pop(1)

0xef1: GOTO 0xefa

0xef2: Push("head")
0xef3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xef4: Pop(1)
0xef5: Push(Stack[-1])
0xef6: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef7: Push("head")
0xef8: @ UnlookAsync(Stack[-1])
0xef9: Pop(1)
0xefa: Return(); Pop(2)

0xefb: PushEmpty(bool, float, float, bool, float, float)
0xefc: @ lshHasAnimation(Stack[-3], Stack[-7])
0xefd: Pop(0)
0xefe: Push(Stack[-3])
0xeff: IF (Stack[-1] == 0) GOTO 0xf06; Pop(1)

0xf00: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf01: Pop(0)
0xf02: Push((bool) 0)
0xf03: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf04: Pop(1)
0xf05: GOTO 0xf0a

0xf06: Push("Can't find lsh animation : ")
0xf07: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf08: @ Trace(Stack[-1])
0xf09: Pop(1)
0xf0a: Return(); Pop(6)

0xf0b: PushEmpty(bool, float, float, bool, float, float)
0xf0c: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf0d: Pop(0)
0xf0e: Push(Stack[-3])
0xf0f: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf10: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf11: Pop(0)
0xf12: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf13: Pop(0)
0xf14: GOTO 0xf19

0xf15: Push("Can't find lsh animation : ")
0xf16: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf17: @ Trace(Stack[-1])
0xf18: Pop(1)
0xf19: Return(); Pop(6)

0xf1a: PushEmpty(float, cvector, float, cvector)
0xf1b: @@ GetEyesHeight(Stack[-2])
0xf1c: Pop(0)
0xf1d: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xf1e: Push(CvectorIndex(Stack[-1], 1))
0xf1f: Stack[-1] = Stack[-3]
0xf20: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf21: Push("head")
0xf22: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xf23: Pop(1)
0xf24: Return(); Pop(4)

0xf25: PushEmpty(bool)
0xf26: Call2 0x146a

0xf27: Pop(0)
0xf28: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf29: @ lshStopSpeech()
0xf2a: Pop(0)
0xf2b: Return(); Pop(0)

0xf2c: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xf2d: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xf2e: Pop(0)
0xf2f: Pop(0); Push((bool) Stack[-8] == 0)
0xf30: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf31: Stack[-7] = (int) 0
0xf32: Push((int) 1)
0xf33: Pop(1); Push(Stack[-8] + Stack[-1]);
0xf34: Pop(1); Push(Stack[-18] + Stack[-1]);
0xf35: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xf36: Pop(1)
0xf37: Pop(0); Push((bool) Stack[-6] == 0)
0xf38: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xf39: GOTO 0xf3d

0xf3a: Push((int) 1)
0xf3b: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf3c: GOTO 0xf32

0xf3d: Pop(0); Push((bool) Stack[-7] == 0)
0xf3e: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3f: Return(); Pop(16)

0xf40: @ irand(Stack[-5], Stack[-7])
0xf41: Pop(0)
0xf42: Push((int) 1)
0xf43: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf44: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xf45: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xf46: Pop(0)
0xf47: Push(Stack[-4])
0xf48: IF (Stack[-1] == 0) GOTO 0xf54; Pop(1)

0xf49: @ GetEyesHeight(Stack[-3])
0xf4a: Pop(0)
0xf4b: @ GetDirection(Stack[-2])
0xf4c: Pop(0)
0xf4d: Push((int) 50)
0xf4e: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xf4f: Push(CvectorIndex(Stack[-1], 1))
0xf50: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xf51: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf52: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xf53: Pop(0)
0xf54: Return(); Pop(16)

0xf55: PushEmpty(object, object)
0xf56: @ self(Stack[-1])
0xf57: Pop(0)
0xf58: Stack[-3] = Stack[-1]
0xf59: Return(); Pop(2)

0xf5a: Stack[-1] = 0
0xf5b: PushEmpty(float, float)
0xf5c: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf5d: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf5e: Push((float)0.0)
0xf5f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf60: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xf61: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf62: Return(); Pop(2)

0xf63: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf64: Return(); Pop(2)

0xf65: PushEmpty(object, object)
0xf66: @ CreateObjectVector(Stack[-1])
0xf67: Pop(0)
0xf68: Stack[-3] = Stack[-1]
0xf69: Return(); Pop(2)

0xf6a: Stack[-1] = 0
0xf6b: PushEmpty()
0xf6c: Pop(0); Push(Stack[-2] | Stack[-1]);
0xf6d: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf6e: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf6f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf70: Pop(1); Push(Sqrt(Stack[-1]))
0xf71: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xf72: Return(); Pop(0)

0xf73: PushEmpty()
0xf74: Push(CvectorIndex(Stack[-2], 0))
0xf75: Push(CvectorIndex(Stack[-2], 0))
0xf76: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf77: Push(CvectorIndex(Stack[-3], 2))
0xf78: Push(CvectorIndex(Stack[-3], 2))
0xf79: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf7a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf7b: Return(); Pop(0)

0xf7c: PushEmpty()
0xf7d: Push(CvectorIndex(Stack[-1], 0))
0xf7e: Push(CvectorIndex(Stack[-2], 0))
0xf7f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf80: Push(CvectorIndex(Stack[-2], 2))
0xf81: Push(CvectorIndex(Stack[-3], 2))
0xf82: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf83: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf84: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xf85: Return(); Pop(0)

0xf86: PushEmpty()
0xf87: PushEmpty(float, cvector, cvector)
0xf88: Stack[-2] = Stack[-5]
0xf89: Stack[-1] = Stack[-4]
0xf8a: Call2 0xf73

0xf8b: Pop(2)
0xf8c: PushEmpty(float, cvector)
0xf8d: Stack[-1] = Stack[-5]
0xf8e: Call2 0xf7c

0xf8f: Pop(1)
0xf90: PushEmpty(float, cvector)
0xf91: Stack[-1] = Stack[-5]
0xf92: Call2 0xf7c

0xf93: Pop(1)
0xf94: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf95: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xf96: Return(); Pop(0)

0xf97: PushEmpty(int, int)
0xf98: @ GetVariable(Stack[-3], Stack[-1])
0xf99: Pop(0)
0xf9a: Stack[-4] = Stack[-1]
0xf9b: Return(); Pop(2)

0xf9c: PushEmpty(float, float)
0xf9d: @ GetGameTime(Stack[-1])
0xf9e: Pop(0)
0xf9f: Push((int) 1)
0xfa0: PushEmpty(int)
0xfa1: Push((int) 24)
0xfa2: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xfa3: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfa4: Return(); Pop(2)

0xfa5: PushEmpty(float, float)
0xfa6: @ GetGameTime(Stack[-1])
0xfa7: Pop(0)
0xfa8: PushEmpty(int)
0xfa9: Stack[-1] = Stack[-2]
0xfaa: Push((int) 24)
0xfab: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xfac: Return(); Pop(2)

0xfad: PushEmpty()
0xfae: Push((int) 100)
0xfaf: @@ SetReturnValue(Stack[-1])
0xfb0: Pop(1)
0xfb1: Return(); Pop(0)

0xfb2: PushEmpty()
0xfb3: PushEmpty(int, string)
0xfb4: Stack[-1] = "branch"
0xfb5: Call2 0xf97

0xfb6: Pop(1)
0xfb7: Push((int) 0)
0xfb8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfb9: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfba: Stack[-2] = (bool) 1
0xfbb: Return(); Pop(0)

0xfbc: Stack[-2] = (bool) 0
0xfbd: Return(); Pop(0)

0xfbe: PushEmpty()
0xfbf: PushEmpty(int, string)
0xfc0: Stack[-1] = "branch"
0xfc1: Call2 0xf97

0xfc2: Pop(1)
0xfc3: Push((int) 1)
0xfc4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfc5: IF (Stack[-1] == 0) GOTO 0xfc8; Pop(1)

0xfc6: Stack[-2] = (bool) 1
0xfc7: Return(); Pop(0)

0xfc8: Stack[-2] = (bool) 0
0xfc9: Return(); Pop(0)

0xfca: PushEmpty()
0xfcb: PushEmpty(int, string)
0xfcc: Stack[-1] = "branch"
0xfcd: Call2 0xf97

0xfce: Pop(1)
0xfcf: Push((int) 2)
0xfd0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfd2: Stack[-2] = (bool) 1
0xfd3: Return(); Pop(0)

0xfd4: Stack[-2] = (bool) 0
0xfd5: Return(); Pop(0)

0xfd6: PushEmpty()
0xfd7: PushEmpty(bool, object)
0xfd8: Stack[-1] = Stack[-3]
0xfd9: Call2 0x1058

0xfda: Pop(1)
0xfdb: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdc: Stack[-2] = (bool) 1
0xfdd: Return(); Pop(0)

0xfde: Stack[-2] = (bool) 0
0xfdf: Return(); Pop(0)

0xfe0: PushEmpty()
0xfe1: PushEmpty(bool, object)
0xfe2: Stack[-1] = Stack[-3]
0xfe3: Call2 0x105f

0xfe4: Pop(1)
0xfe5: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfe6: Stack[-2] = (bool) 1
0xfe7: Return(); Pop(0)

0xfe8: Stack[-2] = (bool) 0
0xfe9: Return(); Pop(0)

0xfea: PushEmpty()
0xfeb: PushEmpty(bool, object)
0xfec: Stack[-1] = Stack[-3]
0xfed: Call2 0x1066

0xfee: Pop(1)
0xfef: IF (Stack[-1] == 0) GOTO 0xff2; Pop(1)

0xff0: Stack[-2] = (bool) 1
0xff1: Return(); Pop(0)

0xff2: Stack[-2] = (bool) 0
0xff3: Return(); Pop(0)

0xff4: PushEmpty()
0xff5: PushEmpty(bool, object)
0xff6: Stack[-1] = Stack[-3]
0xff7: Call2 0x106d

0xff8: Pop(1)
0xff9: IF (Stack[-1] == 0) GOTO 0xffc; Pop(1)

0xffa: Stack[-2] = (bool) 1
0xffb: Return(); Pop(0)

0xffc: Stack[-2] = (bool) 0
0xffd: Return(); Pop(0)

0xffe: PushEmpty()
0xfff: PushEmpty(bool, object)
0x1000: Stack[-1] = Stack[-3]
0x1001: Call2 0x1074

0x1002: Pop(1)
0x1003: IF (Stack[-1] == 0) GOTO 0x1006; Pop(1)

0x1004: Stack[-2] = (bool) 1
0x1005: Return(); Pop(0)

0x1006: Stack[-2] = (bool) 0
0x1007: Return(); Pop(0)

0x1008: PushEmpty()
0x1009: PushEmpty(bool, object)
0x100a: Stack[-1] = Stack[-3]
0x100b: Call2 0x107b

0x100c: Pop(1)
0x100d: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100e: Stack[-2] = (bool) 1
0x100f: Return(); Pop(0)

0x1010: Stack[-2] = (bool) 0
0x1011: Return(); Pop(0)

0x1012: PushEmpty()
0x1013: PushEmpty(bool, object)
0x1014: Stack[-1] = Stack[-3]
0x1015: Call2 0x1082

0x1016: Pop(1)
0x1017: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1018: Stack[-2] = (bool) 1
0x1019: Return(); Pop(0)

0x101a: Stack[-2] = (bool) 0
0x101b: Return(); Pop(0)

0x101c: PushEmpty()
0x101d: PushEmpty(bool, object)
0x101e: Stack[-1] = Stack[-3]
0x101f: Call2 0x1089

0x1020: Pop(1)
0x1021: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1022: Stack[-2] = (bool) 1
0x1023: Return(); Pop(0)

0x1024: Stack[-2] = (bool) 0
0x1025: Return(); Pop(0)

0x1026: PushEmpty()
0x1027: PushEmpty(bool, object)
0x1028: Stack[-1] = Stack[-3]
0x1029: Call2 0x1090

0x102a: Pop(1)
0x102b: IF (Stack[-1] == 0) GOTO 0x102e; Pop(1)

0x102c: Stack[-2] = (bool) 1
0x102d: Return(); Pop(0)

0x102e: Stack[-2] = (bool) 0
0x102f: Return(); Pop(0)

0x1030: PushEmpty()
0x1031: PushEmpty(bool, object)
0x1032: Stack[-1] = Stack[-3]
0x1033: Call2 0x1097

0x1034: Pop(1)
0x1035: IF (Stack[-1] == 0) GOTO 0x1038; Pop(1)

0x1036: Stack[-2] = (bool) 1
0x1037: Return(); Pop(0)

0x1038: Stack[-2] = (bool) 0
0x1039: Return(); Pop(0)

0x103a: PushEmpty()
0x103b: PushEmpty(bool, object)
0x103c: Stack[-1] = Stack[-3]
0x103d: Call2 0x109e

0x103e: Pop(1)
0x103f: IF (Stack[-1] == 0) GOTO 0x1042; Pop(1)

0x1040: Stack[-2] = (bool) 1
0x1041: Return(); Pop(0)

0x1042: Stack[-2] = (bool) 0
0x1043: Return(); Pop(0)

0x1044: PushEmpty()
0x1045: PushEmpty(bool, object)
0x1046: Stack[-1] = Stack[-3]
0x1047: Call2 0x10a5

0x1048: Pop(1)
0x1049: IF (Stack[-1] == 0) GOTO 0x104c; Pop(1)

0x104a: Stack[-2] = (bool) 1
0x104b: Return(); Pop(0)

0x104c: Stack[-2] = (bool) 0
0x104d: Return(); Pop(0)

0x104e: PushEmpty()
0x104f: PushEmpty(bool, object)
0x1050: Stack[-1] = Stack[-3]
0x1051: Call2 0x10ac

0x1052: Pop(1)
0x1053: IF (Stack[-1] == 0) GOTO 0x1056; Pop(1)

0x1054: Stack[-2] = (bool) 1
0x1055: Return(); Pop(0)

0x1056: Stack[-2] = (bool) 0
0x1057: Return(); Pop(0)

0x1058: PushEmpty()
0x1059: PushEmpty(int)
0x105a: Call2 0xf9c

0x105b: Pop(0)
0x105c: Push((int) 1)
0x105d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x105e: Return(); Pop(0)

0x105f: PushEmpty()
0x1060: PushEmpty(int)
0x1061: Call2 0xf9c

0x1062: Pop(0)
0x1063: Push((int) 2)
0x1064: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1065: Return(); Pop(0)

0x1066: PushEmpty()
0x1067: PushEmpty(int)
0x1068: Call2 0xf9c

0x1069: Pop(0)
0x106a: Push((int) 3)
0x106b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x106c: Return(); Pop(0)

0x106d: PushEmpty()
0x106e: PushEmpty(int)
0x106f: Call2 0xf9c

0x1070: Pop(0)
0x1071: Push((int) 4)
0x1072: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1073: Return(); Pop(0)

0x1074: PushEmpty()
0x1075: PushEmpty(int)
0x1076: Call2 0xf9c

0x1077: Pop(0)
0x1078: Push((int) 5)
0x1079: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x107a: Return(); Pop(0)

0x107b: PushEmpty()
0x107c: PushEmpty(int)
0x107d: Call2 0xf9c

0x107e: Pop(0)
0x107f: Push((int) 6)
0x1080: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1081: Return(); Pop(0)

0x1082: PushEmpty()
0x1083: PushEmpty(int)
0x1084: Call2 0xf9c

0x1085: Pop(0)
0x1086: Push((int) 7)
0x1087: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1088: Return(); Pop(0)

0x1089: PushEmpty()
0x108a: PushEmpty(int)
0x108b: Call2 0xf9c

0x108c: Pop(0)
0x108d: Push((int) 8)
0x108e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x108f: Return(); Pop(0)

0x1090: PushEmpty()
0x1091: PushEmpty(int)
0x1092: Call2 0xf9c

0x1093: Pop(0)
0x1094: Push((int) 9)
0x1095: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1096: Return(); Pop(0)

0x1097: PushEmpty()
0x1098: PushEmpty(int)
0x1099: Call2 0xf9c

0x109a: Pop(0)
0x109b: Push((int) 10)
0x109c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x109d: Return(); Pop(0)

0x109e: PushEmpty()
0x109f: PushEmpty(int)
0x10a0: Call2 0xf9c

0x10a1: Pop(0)
0x10a2: Push((int) 11)
0x10a3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10a4: Return(); Pop(0)

0x10a5: PushEmpty()
0x10a6: PushEmpty(int)
0x10a7: Call2 0xf9c

0x10a8: Pop(0)
0x10a9: Push((int) 12)
0x10aa: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x10ab: Return(); Pop(0)

0x10ac: PushEmpty()
0x10ad: PushEmpty(int)
0x10ae: Call2 0xfa5

0x10af: Pop(0)
0x10b0: Push((int) 12)
0x10b1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x10b2: IF (Stack[-1] == 0) GOTO 0x10b5; Pop(1)

0x10b3: Stack[-2] = (bool) 1
0x10b4: Return(); Pop(0)

0x10b5: Stack[-2] = (bool) 0
0x10b6: Return(); Pop(0)

0x10b7: PushEmpty(int, int)
0x10b8: Push("branch")
0x10b9: @ GetVariable(Stack[-1], Stack[-2])
0x10ba: Pop(1)
0x10bb: Push((int) 0)
0x10bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10bd: IF (Stack[-1] == 0) GOTO 0x10c1; Pop(1)

0x10be: Stack[-3] = (int) 1
0x10bf: Return(); Pop(2)

0x10c0: GOTO 0x10c6

0x10c1: Push((int) 1)
0x10c2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c3: IF (Stack[-1] == 0) GOTO 0x10c6; Pop(1)

0x10c4: Stack[-3] = (int) 2
0x10c5: Return(); Pop(2)

0x10c6: Stack[-3] = (int) 3
0x10c7: Return(); Pop(2)

0x10c8: PushEmpty(int, int)
0x10c9: Push("branch")
0x10ca: @ GetVariable(Stack[-1], Stack[-2])
0x10cb: Pop(1)
0x10cc: Stack[-3] = Stack[-1]
0x10cd: Return(); Pop(2)

0x10ce: PushEmpty(int, int)
0x10cf: @@ GetItemID(Stack[-1])
0x10d0: Pop(0)
0x10d1: Stack[-4] = Stack[-1]
0x10d2: Return(); Pop(2)

0x10d3: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0x10d4: Push((int) 0)
0x10d5: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0x10d6: IF (Stack[-1] == 0) GOTO 0x10f8; Pop(1)

0x10d7: PushEmpty(int)
0x10d8: Call2 0xf9c

0x10d9: Stack[-8] = Stack[-1]
0x10da: Pop(1)
0x10db: Stack[-6] = (int) 0
0x10dc: Stack[-5] = (int) 1
0x10dd: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0x10de: IF (Stack[-1] == 0) GOTO 0x10f6; Pop(1)

0x10df: Stack[-4] = "Price"
0x10e0: Push((int) 1)
0x10e1: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x10e2: IF (Stack[-1] == 0) GOTO 0x10e4; Pop(1)

0x10e3: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0x10e4: PushEmpty(int, object)
0x10e5: Stack[-1] = Stack[-18]
0x10e6: Call2 0x10ce

0x10e7: Pop(1)
0x10e8: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0x10e9: Pop(1)
0x10ea: Pop(0); Push((bool) Stack[-3] == 0)
0x10eb: IF (Stack[-1] == 0) GOTO 0x10ed; Pop(1)

0x10ec: GOTO 0x10f3

0x10ed: PushEmpty(int, object)
0x10ee: Stack[-1] = Stack[-18]
0x10ef: Call2 0x10ce

0x10f0: Pop(1)
0x10f1: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0x10f2: Pop(1)
0x10f3: Push((int) 1)
0x10f4: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x10f5: GOTO 0x10dd

0x10f6: Stack[-17] = Stack[-6]
0x10f7: Return(); Pop(14)

0x10f8: PushEmpty(int, object)
0x10f9: Stack[-1] = Stack[-18]
0x10fa: Call2 0x10ce

0x10fb: Pop(1)
0x10fc: Push("BarterPrice")
0x10fd: Pop(1); Push(Stack[-1] + Stack[-17]);
0x10fe: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0x10ff: Pop(2)
0x1100: Pop(0); Push((bool) Stack[-2] == 0)
0x1101: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x1102: Stack[-17] = (int) 0
0x1103: Return(); Pop(14)

0x1104: PushEmpty(int, object)
0x1105: Stack[-1] = Stack[-18]
0x1106: Call2 0x10ce

0x1107: Pop(1)
0x1108: Push("BarterPrice")
0x1109: Pop(1); Push(Stack[-1] + Stack[-17]);
0x110a: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0x110b: Pop(2)
0x110c: Push((int) 0)
0x110d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x110e: IF (Stack[-1] == 0) GOTO 0x1111; Pop(1)

0x110f: Stack[-17] = Stack[-1]
0x1110: Return(); Pop(14)

0x1111: Stack[-17] = -Stack[-1]; Pop(0);
0x1112: Return(); Pop(14)

0x1113: PushEmpty(object, float, object, float)
0x1114: Push("player")
0x1115: @ FindActor(Stack[-3], Stack[-1])
0x1116: Pop(1)
0x1117: Pop(0); Push((bool) Stack[-2] == 0)
0x1118: IF (Stack[-1] == 0) GOTO 0x111b; Pop(1)

0x1119: Stack[-5] = (int) 0
0x111a: Return(); Pop(4)

0x111b: Push("reputation")
0x111c: @@ GetProperty(Stack[-1], Stack[-2])
0x111d: Pop(1)
0x111e: Stack[-5] = Stack[-1]
0x111f: Return(); Pop(4)

0x1120: Stack[-2] = 0
0x1121: PushEmpty()
0x1122: PushEmpty(int)
0x1123: Call2 0x10c8

0x1124: Pop(0)
0x1125: Push((int) 1)
0x1126: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1127: IF (Stack[-1] == 0) GOTO 0x112b; Pop(1)

0x1128: @ WorkWithCorpse(Stack[-1])
0x1129: Pop(0)
0x112a: GOTO 0x112d

0x112b: @ Barter(Stack[-1])
0x112c: Pop(0)
0x112d: Return(); Pop(0)

0x112e: PushEmpty(int, bool, int, bool)
0x112f: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x1130: IF (Stack[-1] == 0) GOTO 0x1135; Pop(1)

0x1131: Push("GenerateMoney: iMin > iMax")
0x1132: @ Trace(Stack[-1])
0x1133: Pop(1)
0x1134: Return(); Pop(4)

0x1135: Stack[-2] = (int) 0
0x1136: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1137: IF (Stack[-1] == 0) GOTO 0x113c; Pop(1)

0x1138: Pop(0); Push(Stack[-5] - Stack[-6]);
0x1139: @ irand(Stack[-3], Stack[-1])
0x113a: Pop(1)
0x113b: GOTO 0x1140

0x113c: Push((int) 0)
0x113d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x113e: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113f: Return(); Pop(4)

0x1140: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x1141: Push((int) 0)
0x1142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1143: IF (Stack[-1] == 0) GOTO 0x1145; Pop(1)

0x1144: Return(); Pop(4)

0x1145: PushEmpty(int, string)
0x1146: Stack[-1] = "Money"
0x1147: Call2 0x1225

0x1148: Pop(1)
0x1149: Push((int) 0)
0x114a: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x114b: Pop(2)
0x114c: Return(); Pop(4)

0x114d: PushEmpty(object, int, bool, object, int, bool)
0x114e: @ CreateInvItem(Stack[-3])
0x114f: Pop(0)
0x1150: @@ SetItemName(Stack[-7])
0x1151: Pop(0)
0x1152: Push("Organ")
0x1153: Push((int) 1)
0x1154: @@ SetProperty(Stack[-2], Stack[-1])
0x1155: Pop(2)
0x1156: @@ GetItemID(Stack[-2])
0x1157: Pop(0)
0x1158: Push((int) 0)
0x1159: Push((int) 1)
0x115a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x115b: Pop(2)
0x115c: Return(); Pop(6)

0x115d: Stack[-3] = 0
0x115e: PushEmpty(int)
0x115f: Call2 0x10c8

0x1160: Pop(0)
0x1161: Push((int) 1)
0x1162: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1163: IF (Stack[-1] == 0) GOTO 0x1165; Pop(1)

0x1164: Return(); Pop(0)

0x1165: PushEmpty(string)
0x1166: Stack[-1] = "liver"
0x1167: Call2 0x114d

0x1168: Pop(1)
0x1169: PushEmpty(string)
0x116a: Stack[-1] = "kidney"
0x116b: Call2 0x114d

0x116c: Pop(1)
0x116d: PushEmpty(string)
0x116e: Stack[-1] = "heart"
0x116f: Call2 0x114d

0x1170: Pop(1)
0x1171: PushEmpty(string)
0x1172: Stack[-1] = "blood"
0x1173: Call2 0x114d

0x1174: Pop(1)
0x1175: Return(); Pop(0)

0x1176: PushEmpty(int, bool, int, bool)
0x1177: Push(Stack[-5])
0x1178: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x1179: PushEmpty(int, int)
0x117a: Stack[-2] = (int) 0
0x117b: Push((int) 100)
0x117c: PushEmpty(int)
0x117d: Call2 0xf9c

0x117e: Pop(0)
0x117f: Push((int) 100)
0x1180: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1181: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1182: Call2 0x112e

0x1183: Pop(2)
0x1184: Push((int) 8)
0x1185: @ irand(Stack[-3], Stack[-1])
0x1186: Pop(1)
0x1187: Push((int) 0)
0x1188: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1189: IF (Stack[-1] == 0) GOTO 0x1193; Pop(1)

0x118a: PushEmpty(int, string)
0x118b: Stack[-1] = "lemon"
0x118c: Call2 0x1225

0x118d: Pop(1)
0x118e: Push((int) 0)
0x118f: Push((int) 1)
0x1190: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1191: Pop(3)
0x1192: GOTO 0x11ce

0x1193: Push((int) 1)
0x1194: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1195: IF (Stack[-1] == 0) GOTO 0x119f; Pop(1)

0x1196: PushEmpty(int, string)
0x1197: Stack[-1] = "rusk"
0x1198: Call2 0x1225

0x1199: Pop(1)
0x119a: Push((int) 0)
0x119b: Push((int) 1)
0x119c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x119d: Pop(3)
0x119e: GOTO 0x11ce

0x119f: Push((int) 2)
0x11a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a1: IF (Stack[-1] == 0) GOTO 0x11ab; Pop(1)

0x11a2: PushEmpty(int, string)
0x11a3: Stack[-1] = "hook"
0x11a4: Call2 0x1225

0x11a5: Pop(1)
0x11a6: Push((int) 0)
0x11a7: Push((int) 1)
0x11a8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11a9: Pop(3)
0x11aa: GOTO 0x11ce

0x11ab: Push((int) 4)
0x11ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ad: IF (Stack[-1] == 0) GOTO 0x11b7; Pop(1)

0x11ae: PushEmpty(int, string)
0x11af: Stack[-1] = "syringe"
0x11b0: Call2 0x1225

0x11b1: Pop(1)
0x11b2: Push((int) 0)
0x11b3: Push((int) 1)
0x11b4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11b5: Pop(3)
0x11b6: GOTO 0x11ce

0x11b7: Push((int) 5)
0x11b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b9: IF (Stack[-1] == 0) GOTO 0x11c3; Pop(1)

0x11ba: PushEmpty(int, string)
0x11bb: Stack[-1] = "watch"
0x11bc: Call2 0x1225

0x11bd: Pop(1)
0x11be: Push((int) 0)
0x11bf: Push((int) 1)
0x11c0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11c1: Pop(3)
0x11c2: GOTO 0x11ce

0x11c3: Push((int) 6)
0x11c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c5: IF (Stack[-1] == 0) GOTO 0x11ce; Pop(1)

0x11c6: PushEmpty(int, string)
0x11c7: Stack[-1] = "razor"
0x11c8: Call2 0x1225

0x11c9: Pop(1)
0x11ca: Push((int) 0)
0x11cb: Push((int) 1)
0x11cc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11cd: Pop(3)
0x11ce: GOTO 0x1224

0x11cf: PushEmpty(int, int)
0x11d0: Stack[-2] = (int) 0
0x11d1: Push((int) 50)
0x11d2: PushEmpty(int)
0x11d3: Call2 0xf9c

0x11d4: Pop(0)
0x11d5: Push((int) 50)
0x11d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x11d8: Call2 0x112e

0x11d9: Pop(2)
0x11da: Push((int) 7)
0x11db: @ irand(Stack[-3], Stack[-1])
0x11dc: Pop(1)
0x11dd: Push((int) 0)
0x11de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11df: IF (Stack[-1] == 0) GOTO 0x11e9; Pop(1)

0x11e0: PushEmpty(int, string)
0x11e1: Stack[-1] = "beads"
0x11e2: Call2 0x1225

0x11e3: Pop(1)
0x11e4: Push((int) 0)
0x11e5: Push((int) 1)
0x11e6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11e7: Pop(3)
0x11e8: GOTO 0x1224

0x11e9: Push((int) 1)
0x11ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11eb: IF (Stack[-1] == 0) GOTO 0x11f5; Pop(1)

0x11ec: PushEmpty(int, string)
0x11ed: Stack[-1] = "bracelet"
0x11ee: Call2 0x1225

0x11ef: Pop(1)
0x11f0: Push((int) 0)
0x11f1: Push((int) 1)
0x11f2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11f3: Pop(3)
0x11f4: GOTO 0x1224

0x11f5: Push((int) 2)
0x11f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f7: IF (Stack[-1] == 0) GOTO 0x1201; Pop(1)

0x11f8: PushEmpty(int, string)
0x11f9: Stack[-1] = "ear_ring"
0x11fa: Call2 0x1225

0x11fb: Pop(1)
0x11fc: Push((int) 0)
0x11fd: Push((int) 1)
0x11fe: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11ff: Pop(3)
0x1200: GOTO 0x1224

0x1201: Push((int) 3)
0x1202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1203: IF (Stack[-1] == 0) GOTO 0x120d; Pop(1)

0x1204: PushEmpty(int, string)
0x1205: Stack[-1] = "gold_ring"
0x1206: Call2 0x1225

0x1207: Pop(1)
0x1208: Push((int) 0)
0x1209: Push((int) 1)
0x120a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x120b: Pop(3)
0x120c: GOTO 0x1224

0x120d: Push((int) 4)
0x120e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x120f: IF (Stack[-1] == 0) GOTO 0x1219; Pop(1)

0x1210: PushEmpty(int, string)
0x1211: Stack[-1] = "silver_ring"
0x1212: Call2 0x1225

0x1213: Pop(1)
0x1214: Push((int) 0)
0x1215: Push((int) 1)
0x1216: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1217: Pop(3)
0x1218: GOTO 0x1224

0x1219: Push((int) 5)
0x121a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121b: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x121c: PushEmpty(int, string)
0x121d: Stack[-1] = "flower"
0x121e: Call2 0x1225

0x121f: Pop(1)
0x1220: Push((int) 0)
0x1221: Push((int) 1)
0x1222: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1223: Pop(3)
0x1224: Return(); Pop(4)

0x1225: PushEmpty(int, int)
0x1226: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1227: Pop(0)
0x1228: Stack[-4] = Stack[-1]
0x1229: Return(); Pop(2)

0x122a: PushEmpty()
0x122b: PushEmpty(object)
0x122c: Stack[-1] = Stack[-2]
0x122d: Push(-1, 0); TaskCall(2)
0x122e: Call2 0x679

0x122f: Pop(-1, 0); TaskReturn
0x1230: Pop(1)
0x1231: Return(); Pop(0)

0x1232: PushEmpty(float, float)
0x1233: Push("health")
0x1234: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1235: IF (Stack[-1] == 0) GOTO 0x123e; Pop(1)

0x1236: Push("health")
0x1237: @ GetProperty(Stack[-1], Stack[-2])
0x1238: Pop(1)
0x1239: Push((int) 0)
0x123a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x123b: IF (Stack[-1] == 0) GOTO 0x123e; Pop(1)

0x123c: @ SignalDeath(Stack[-4])
0x123d: Pop(0)
0x123e: Return(); Pop(2)

0x123f: PushEmpty()
0x1240: PushEmpty(object)
0x1241: Stack[-1] = Stack[-2]
0x1242: Call2 0x122a

0x1243: Pop(1)
0x1244: Return(); Pop(0)

0x1245: PushEmpty()
0x1246: PushEmpty(object, int, float)
0x1247: Stack[-3] = Stack[-7]
0x1248: Stack[-2] = Stack[-6]
0x1249: Stack[-1] = Stack[-5]
0x124a: Call2 0xe42

0x124b: Pop(3)
0x124c: Return(); Pop(0)

0x124d: PushEmpty()
0x124e: PushEmpty(object, int, float, cvector, cvector)
0x124f: Stack[-5] = Stack[-11]
0x1250: Stack[-4] = Stack[-10]
0x1251: Stack[-3] = Stack[-9]
0x1252: Stack[-2] = Stack[-7]
0x1253: Stack[-1] = Stack[-6]
0x1254: Call2 0xe86

0x1255: Pop(5)
0x1256: Return(); Pop(0)

0x1257: PushEmpty()
0x1258: Push("unholster")
0x1259: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x125a: IF (Stack[-1] == 0) GOTO 0x1262; Pop(1)

0x125b: PushEmpty(bool, object)
0x125c: Stack[-1] = Stack[-4]
0x125d: Call2 0x137a

0x125e: Stack[-5] = Stack[-2]
0x125f: Pop(2)
0x1260: Return(); Pop(0)

0x1261: GOTO 0x1275

0x1262: Push("player_shot")
0x1263: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1264: IF (Stack[-1] == 0) GOTO 0x126c; Pop(1)

0x1265: PushEmpty(bool, object)
0x1266: Stack[-1] = Stack[-4]
0x1267: Call2 0x1387

0x1268: Stack[-5] = Stack[-2]
0x1269: Pop(2)
0x126a: Return(); Pop(0)

0x126b: GOTO 0x1275

0x126c: Push("battle")
0x126d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x126e: IF (Stack[-1] == 0) GOTO 0x1275; Pop(1)

0x126f: PushEmpty(bool, object)
0x1270: Stack[-1] = Stack[-4]
0x1271: Call2 0x139e

0x1272: Stack[-5] = Stack[-2]
0x1273: Pop(2)
0x1274: Return(); Pop(0)

0x1275: Stack[-3] = (bool) 0
0x1276: Return(); Pop(0)

0x1277: PushEmpty()
0x1278: Push("unholster")
0x1279: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x127a: IF (Stack[-1] == 0) GOTO 0x1280; Pop(1)

0x127b: PushEmpty(object)
0x127c: Stack[-1] = Stack[-3]
0x127d: Call2 0x137f

0x127e: Pop(1)
0x127f: GOTO 0x128f

0x1280: Push("player_shot")
0x1281: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1282: IF (Stack[-1] == 0) GOTO 0x1288; Pop(1)

0x1283: PushEmpty(object)
0x1284: Stack[-1] = Stack[-3]
0x1285: Call2 0x1396

0x1286: Pop(1)
0x1287: GOTO 0x128f

0x1288: Push("battle")
0x1289: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x128a: IF (Stack[-1] == 0) GOTO 0x128f; Pop(1)

0x128b: PushEmpty(object)
0x128c: Stack[-1] = Stack[-3]
0x128d: Call2 0x13a5

0x128e: Pop(1)
0x128f: Return(); Pop(0)

0x1290: PushEmpty(bool, bool)
0x1291: PushEmpty(bool)
0x1292: Stack[-1] = (bool) 0
0x1293: PushEmpty(bool, object)
0x1294: Stack[-1] = Stack[-6]
0x1295: Call2 0x137a

0x1296: Pop(1)
0x1297: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x1298: PushEmpty(bool, object)
0x1299: Stack[-1] = Stack[-6]
0x129a: Call2 0xdc4

0x129b: Pop(1)
0x129c: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x129d: Stack[-1] = (bool) 1
0x129e: IF (Stack[-1] == 0) GOTO 0x12a5; Pop(1)

0x129f: @@ IsWeaponHolstered(Stack[-1])
0x12a0: Pop(0)
0x12a1: Pop(0); Push((bool) Stack[-1] == 0)
0x12a2: IF (Stack[-1] == 0) GOTO 0x12a5; Pop(1)

0x12a3: Stack[-4] = (bool) 1
0x12a4: Return(); Pop(2)

0x12a5: Stack[-4] = (bool) 0
0x12a6: Return(); Pop(2)

0x12a7: PushEmpty()
0x12a8: PushEmpty(object)
0x12a9: Stack[-1] = Stack[-2]
0x12aa: Call2 0x137f

0x12ab: Pop(1)
0x12ac: Return(); Pop(0)

0x12ad: PushEmpty()
0x12ae: PushEmpty(bool, object)
0x12af: Stack[-1] = Stack[-3]
0x12b0: Call2 0xdc4

0x12b1: Pop(1)
0x12b2: IF (Stack[-1] == 0) GOTO 0x12b9; Pop(1)

0x12b3: PushEmpty(object)
0x12b4: Call2 0xf55

0x12b5: Pop(0)
0x12b6: Push((float)-0.05)
0x12b7: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x12b8: Pop(2)
0x12b9: Return(); Pop(0)

0x12ba: PushEmpty(object, object)
0x12bb: Push("heal")
0x12bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12bd: IF (Stack[-1] == 0) GOTO 0x12c8; Pop(1)

0x12be: Push("player")
0x12bf: @ FindActor(Stack[-2], Stack[-1])
0x12c0: Pop(1)
0x12c1: PushEmpty(bool, object)
0x12c2: Stack[-1] = Stack[-3]
0x12c3: Call2 0x13ab

0x12c4: Stack[-6] = Stack[-2]
0x12c5: Pop(2)
0x12c6: Return(); Pop(2)

0x12c7: Stack[-1] = 0
0x12c8: Stack[-4] = (bool) 0
0x12c9: Return(); Pop(2)

0x12ca: PushEmpty(object, object)
0x12cb: Push("heal")
0x12cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12cd: IF (Stack[-1] == 0) GOTO 0x12d6; Pop(1)

0x12ce: Push("player")
0x12cf: @ FindActor(Stack[-2], Stack[-1])
0x12d0: Pop(1)
0x12d1: PushEmpty(object)
0x12d2: Stack[-1] = Stack[-2]
0x12d3: Call2 0x13ae

0x12d4: Pop(1)
0x12d5: Stack[-1] = 0
0x12d6: Return(); Pop(2)

0x12d7: PushEmpty(string, string)
0x12d8: Stack[-1] = "idle"
0x12d9: Push(Stack[-3])
0x12da: IF (Stack[-1] == 0) GOTO 0x12dc; Pop(1)

0x12db: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x12dc: Stack[-4] = Stack[-1]
0x12dd: Return(); Pop(2)

0x12de: PushEmpty(int, bool, int, bool)
0x12df: Stack[-2] = (int) 0
0x12e0: Push("all")
0x12e1: PushEmpty(string, int)
0x12e2: Stack[-1] = Stack[-5]
0x12e3: Call2 0x12d7

0x12e4: Pop(1)
0x12e5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x12e6: Pop(2)
0x12e7: Pop(0); Push((bool) Stack[-1] == 0)
0x12e8: IF (Stack[-1] == 0) GOTO 0x12ea; Pop(1)

0x12e9: GOTO 0x12ed

0x12ea: Push((int) 1)
0x12eb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x12ec: GOTO 0x12e0

0x12ed: Stack[-5] = Stack[-2]
0x12ee: Return(); Pop(4)

0x12ef: PushEmpty()
0x12f0: PushEmpty(bool)
0x12f1: Call2 0x1482

0x12f2: Pop(0)
0x12f3: IF (Stack[-1] == 0) GOTO 0x12f6; Pop(1)

0x12f4: Stack[-2] = (int) 2
0x12f5: GOTO 0x12f7

0x12f6: Stack[-2] = (int) 0
0x12f7: Return(); Pop(0)

0x12f8: PushEmpty()
0x12f9: PushEmpty(object)
0x12fa: Stack[-1] = Stack[-2]
0x12fb: Push(-1, 1); TaskCall(5)
0x12fc: Call2 0x980

0x12fd: Pop(-1, 1); TaskReturn
0x12fe: Pop(1)
0x12ff: Return(); Pop(0)

0x1300: PushEmpty()
0x1301: PushEmpty(bool, object)
0x1302: Stack[-1] = Stack[-3]
0x1303: Call2 0xdfe

0x1304: Pop(1)
0x1305: IF (Stack[-1] == 0) GOTO 0x1308; Pop(1)

0x1306: Stack[-2] = (int) 2
0x1307: GOTO 0x1309

0x1308: Stack[-2] = (int) 0
0x1309: Return(); Pop(0)

0x130a: PushEmpty()
0x130b: PushEmpty(object)
0x130c: Stack[-1] = Stack[-2]
0x130d: Push(-1, 3); TaskCall(6)
0x130e: Call2 0xa93

0x130f: Pop(-1, 3); TaskReturn
0x1310: Pop(1)
0x1311: Return(); Pop(0)

0x1312: PushEmpty()
0x1313: PushEmpty(bool, object)
0x1314: Stack[-1] = Stack[-4]
0x1315: Call2 0xdfe

0x1316: Pop(1)
0x1317: IF (Stack[-1] == 0) GOTO 0x131a; Pop(1)

0x1318: Stack[-3] = (int) 2
0x1319: GOTO 0x131b

0x131a: Stack[-3] = (int) 0
0x131b: Return(); Pop(0)

0x131c: PushEmpty()
0x131d: PushEmpty(object)
0x131e: Stack[-1] = Stack[-2]
0x131f: Push(-1, 3); TaskCall(7)
0x1320: Call2 0xb8f

0x1321: Pop(-1, 3); TaskReturn
0x1322: Pop(1)
0x1323: Return(); Pop(0)

0x1324: PushEmpty(string, bool, string, bool)
0x1325: PushEmpty(bool, object, string)
0x1326: Stack[-2] = Stack[-9]
0x1327: Stack[-1] = "class"
0x1328: Call2 0xdc9

0x1329: Pop(2)
0x132a: Pop(1); Push((bool) Stack[-1] == 0)
0x132b: IF (Stack[-1] == 0) GOTO 0x132e; Pop(1)

0x132c: Stack[-8] = (bool) 0
0x132d: Return(); Pop(4)

0x132e: Push("class")
0x132f: @@ GetProperty(Stack[-1], Stack[-3])
0x1330: Pop(1)
0x1331: Push("rat")
0x1332: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1333: IF (Stack[-1] == 0) GOTO 0x1337; Pop(1)

0x1334: Stack[-8] = (bool) 0
0x1335: Return(); Pop(4)

0x1336: GOTO 0x1342

0x1337: Push("rat_big")
0x1338: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1339: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x133a: Stack[-8] = (bool) 0
0x133b: Return(); Pop(4)

0x133c: GOTO 0x1342

0x133d: Push("dog")
0x133e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x133f: IF (Stack[-1] == 0) GOTO 0x1342; Pop(1)

0x1340: Stack[-8] = (bool) 0
0x1341: Return(); Pop(4)

0x1342: @ CanSee(Stack[-1], Stack[-7])
0x1343: Pop(0)
0x1344: PushEmpty(bool)
0x1345: Stack[-1] = (bool) 1
0x1346: Push(Stack[-2])
0x1347: IF (Stack[-1] == 0) GOTO 0x1350; Pop(1)

0x1348: PushEmpty(float, object)
0x1349: Stack[-1] = Stack[-10]
0x134a: Call2 0xdbc

0x134b: Pop(1)
0x134c: Pop(0); Push(Stack[-7] * Stack[-7]);
0x134d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x134e: IF (Stack[-1] == 0) GOTO 0x1350; Pop(1)

0x134f: Stack[-1] = (bool) 0
0x1350: IF (Stack[-1] == 0) GOTO 0x1353; Pop(1)

0x1351: Stack[-8] = (bool) 1
0x1352: Return(); Pop(4)

0x1353: @ CanSee(Stack[-1], Stack[-6])
0x1354: Pop(0)
0x1355: PushEmpty(bool)
0x1356: Stack[-1] = (bool) 1
0x1357: Push(Stack[-2])
0x1358: IF (Stack[-1] == 0) GOTO 0x1361; Pop(1)

0x1359: PushEmpty(float, object)
0x135a: Stack[-1] = Stack[-9]
0x135b: Call2 0xdbc

0x135c: Pop(1)
0x135d: Pop(0); Push(Stack[-7] * Stack[-7]);
0x135e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x135f: IF (Stack[-1] == 0) GOTO 0x1361; Pop(1)

0x1360: Stack[-1] = (bool) 0
0x1361: IF (Stack[-1] == 0) GOTO 0x1364; Pop(1)

0x1362: Stack[-8] = (bool) 1
0x1363: Return(); Pop(4)

0x1364: Stack[-8] = (bool) 0
0x1365: Return(); Pop(4)

0x1366: PushEmpty()
0x1367: Stack[-2] = (int) 0
0x1368: Return(); Pop(0)

0x1369: PushEmpty()
0x136a: Return(); Pop(0)

0x136b: PushEmpty()
0x136c: Stack[-3] = (int) 0
0x136d: Return(); Pop(0)

0x136e: PushEmpty()
0x136f: Return(); Pop(0)

0x1370: PushEmpty()
0x1371: Stack[-2] = (int) 2
0x1372: Return(); Pop(0)

0x1373: PushEmpty()
0x1374: PushEmpty(object)
0x1375: Stack[-1] = Stack[-2]
0x1376: Call2 0x1470

0x1377: Pop(1)
0x1378: Return(); Pop(0)

0x1379: Return(); Pop(0)

0x137a: PushEmpty(bool, bool)
0x137b: @ CanSee(Stack[-1], Stack[-3])
0x137c: Pop(0)
0x137d: Stack[-4] = Stack[-1]
0x137e: Return(); Pop(2)

0x137f: PushEmpty()
0x1380: PushEmpty(object)
0x1381: Stack[-1] = Stack[-2]
0x1382: Push(-1, 3); TaskCall(8)
0x1383: Call2 0xc51

0x1384: Pop(-1, 3); TaskReturn
0x1385: Pop(1)
0x1386: Return(); Pop(0)

0x1387: PushEmpty(bool, bool)
0x1388: @ CanSee(Stack[-1], Stack[-3])
0x1389: Pop(0)
0x138a: Stack[-4] = (bool) 1
0x138b: Push(Stack[-1])
0x138c: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x138d: PushEmpty(float, object)
0x138e: Stack[-1] = Stack[-5]
0x138f: Call2 0xdbc

0x1390: Pop(1)
0x1391: Push((int) 4000000)
0x1392: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1393: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x1394: Stack[-4] = (bool) 0
0x1395: Return(); Pop(2)

0x1396: PushEmpty()
0x1397: PushEmpty(object)
0x1398: Stack[-1] = Stack[-2]
0x1399: Push(-1, 3); TaskCall(9)
0x139a: Call2 0xd13

0x139b: Pop(-1, 3); TaskReturn
0x139c: Pop(1)
0x139d: Return(); Pop(0)

0x139e: PushEmpty()
0x139f: PushEmpty(bool, object)
0x13a0: Stack[-1] = Stack[-3]
0x13a1: Call2 0x1387

0x13a2: Stack[-4] = Stack[-2]
0x13a3: Pop(2)
0x13a4: Return(); Pop(0)

0x13a5: PushEmpty()
0x13a6: PushEmpty(object)
0x13a7: Stack[-1] = Stack[-2]
0x13a8: Call2 0x1396

0x13a9: Pop(1)
0x13aa: Return(); Pop(0)

0x13ab: PushEmpty()
0x13ac: Stack[-2] = (bool) 0
0x13ad: Return(); Pop(0)

0x13ae: PushEmpty()
0x13af: Return(); Pop(0)

0x13b0: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x13b1: PushEmpty(object)
0x13b2: Call2 0xf65

0x13b3: Stack[-27] = Stack[-1]
0x13b4: Pop(1)
0x13b5: @ CreateIntVector(Stack[-25])
0x13b6: Pop(0)
0x13b7: @ CreateIntVector(Stack[-24])
0x13b8: Pop(0)
0x13b9: @ CreateIntVector(Stack[-23])
0x13ba: Pop(0)
0x13bb: @@ GetSubContainerCount(Stack[-22])
0x13bc: Pop(0)
0x13bd: Stack[-21] = (int) 0
0x13be: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x13bf: IF (Stack[-1] == 0) GOTO 0x1406; Pop(1)

0x13c0: @@ GetItemCount(Stack[-20], Stack[-21])
0x13c1: Pop(0)
0x13c2: Stack[-19] = (int) 0
0x13c3: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x13c4: IF (Stack[-1] == 0) GOTO 0x1403; Pop(1)

0x13c5: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x13c6: Pop(0)
0x13c7: @@ GetItemID(Stack[-17])
0x13c8: Pop(0)
0x13c9: Push("HasDurability")
0x13ca: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x13cb: Pop(1)
0x13cc: Push(Stack[-16])
0x13cd: IF (Stack[-1] == 0) GOTO 0x13ff; Pop(1)

0x13ce: Push("durability")
0x13cf: @@ HasProperty(Stack[-17], Stack[-1])
0x13d0: Pop(1)
0x13d1: Push(Stack[-16])
0x13d2: IF (Stack[-1] == 0) GOTO 0x13ff; Pop(1)

0x13d3: Push("durability")
0x13d4: @@ GetProperty(Stack[-16], Stack[-1])
0x13d5: Pop(1)
0x13d6: PushEmpty(bool)
0x13d7: Stack[-1] = (bool) 0
0x13d8: Push((int) 100)
0x13d9: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x13da: IF (Stack[-1] == 0) GOTO 0x13e1; Pop(1)

0x13db: PushEmpty(bool, object)
0x13dc: Stack[-1] = Stack[-21]
0x13dd: Call2 0x1443

0x13de: Pop(1)
0x13df: IF (Stack[-1] == 0) GOTO 0x13e1; Pop(1)

0x13e0: Stack[-1] = (bool) 1
0x13e1: IF (Stack[-1] == 0) GOTO 0x13ff; Pop(1)

0x13e2: @@ add(Stack[-18])
0x13e3: Pop(0)
0x13e4: @@ add(Stack[-21])
0x13e5: Pop(0)
0x13e6: @@ add(Stack[-19])
0x13e7: Pop(0)
0x13e8: PushEmpty(int, object, int)
0x13e9: Stack[-2] = Stack[-21]
0x13ea: Stack[-1] = (int) 0
0x13eb: Call2 0x10d3

0x13ec: Stack[-17] = Stack[-3]
0x13ed: Pop(3)
0x13ee: Push((float)1.0)
0x13ef: Push((float)2.0)
0x13f0: Pop(1); Push(Stack[-1] * Stack[-17]);
0x13f1: Push((float)100.0)
0x13f2: Pop(2); Push(Stack[-2] / Stack[-1]);
0x13f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13f4: Pop(1); Push(Stack[-15] * Stack[-1]);
0x13f5: Push((int) 100)
0x13f6: Pop(1); Push(Stack[-1] - Stack[-17]);
0x13f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x13f8: Push((int) 300)
0x13f9: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x13fa: Pop(0); Push((bool) Stack[-13] == 0)
0x13fb: IF (Stack[-1] == 0) GOTO 0x13fd; Pop(1)

0x13fc: Stack[-13] = (int) 1
0x13fd: @@ add(Stack[-13])
0x13fe: Pop(0)
0x13ff: Stack[-18] = 0
0x1400: Push((int) 1)
0x1401: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x1402: GOTO 0x13c3

0x1403: Push((int) 1)
0x1404: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x1405: GOTO 0x13be

0x1406: @ CreateIntVector(Stack[-12])
0x1407: Pop(0)
0x1408: Push("repair.xml")
0x1409: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x140a: Pop(1)
0x140b: @@ size(Stack[-11])
0x140c: Pop(0)
0x140d: Pop(0); Push((bool) Stack[-11] == 0)
0x140e: IF (Stack[-1] == 0) GOTO 0x1410; Pop(1)

0x140f: Return(); Pop(52)

0x1410: Stack[-10] = (int) 0
0x1411: Stack[-9] = (int) 0
0x1412: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x1413: IF (Stack[-1] == 0) GOTO 0x141c; Pop(1)

0x1414: @@ get(Stack[-8], Stack[-9])
0x1415: Pop(0)
0x1416: @@ get(Stack[-7], Stack[-8])
0x1417: Pop(0)
0x1418: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x1419: Push((int) 1)
0x141a: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x141b: GOTO 0x1412

0x141c: Push("money")
0x141d: @@ GetProperty(Stack[-1], Stack[-7])
0x141e: Pop(1)
0x141f: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x1420: Push((int) 0)
0x1421: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1422: IF (Stack[-1] == 0) GOTO 0x1424; Pop(1)

0x1423: Return(); Pop(52)

0x1424: Push("money")
0x1425: @@ SetProperty(Stack[-1], Stack[-7])
0x1426: Pop(1)
0x1427: Stack[-5] = (int) 0
0x1428: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x1429: IF (Stack[-1] == 0) GOTO 0x143d; Pop(1)

0x142a: @@ get(Stack[-4], Stack[-5])
0x142b: Pop(0)
0x142c: @@ get(Stack[-3], Stack[-4])
0x142d: Pop(0)
0x142e: @@ get(Stack[-2], Stack[-4])
0x142f: Pop(0)
0x1430: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x1431: Pop(0)
0x1432: Push("durability")
0x1433: Push((int) 100)
0x1434: @@ SetProperty(Stack[-2], Stack[-1])
0x1435: Pop(2)
0x1436: Push((int) 1)
0x1437: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x1438: Pop(1)
0x1439: Stack[-1] = 0
0x143a: Push((int) 1)
0x143b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x143c: GOTO 0x1428

0x143d: Return(); Pop(52)

0x143e: Stack[-12] = 0
0x143f: Stack[-23] = 0
0x1440: Stack[-24] = 0
0x1441: Stack[-25] = 0
0x1442: Stack[-26] = 0
0x1443: PushEmpty(int, bool, int, int, bool, int)
0x1444: @@ GetItemID(Stack[-3])
0x1445: Pop(0)
0x1446: Push("Category")
0x1447: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1448: Pop(1)
0x1449: Pop(0); Push((bool) Stack[-2] == 0)
0x144a: IF (Stack[-1] == 0) GOTO 0x144d; Pop(1)

0x144b: Stack[-8] = (bool) 0
0x144c: Return(); Pop(6)

0x144d: Push("Category")
0x144e: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x144f: Pop(1)
0x1450: Push((int) 1)
0x1451: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x1452: Return(); Pop(6)

0x1453: PushEmpty()
0x1454: PushEmpty(int, object)
0x1455: Stack[-1] = Stack[-3]
0x1456: Push(-2, 1); TaskCall(0)
0x1457: Call2 0x0

0x1458: Pop(-2, 1); TaskReturn
0x1459: Pop(1)
0x145a: Push((int) 100)
0x145b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x145c: IF (Stack[-1] == 0) GOTO 0x1461; Pop(1)

0x145d: PushEmpty(object)
0x145e: Stack[-1] = Stack[-2]
0x145f: Call2 0x13b0

0x1460: Pop(1)
0x1461: Return(); Pop(0)

0x1462: Stack[-1] = (int) 515567
0x1463: Return(); Pop(0)

0x1464: Stack[-1] = (int) 503352
0x1465: Return(); Pop(0)

0x1466: Stack[-1] = "ui/NPC_Citizen3.png"
0x1467: Return(); Pop(0)

0x1468: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1469: Return(); Pop(0)

0x146a: Stack[-1] = (bool) 0
0x146b: Return(); Pop(0)

0x146c: Push(GlobalVars[0])
0x146d: Stack[-1] = (bool) 0
0x146e: GlobalVars[0] = Stack[-1]; Pop(1)
0x146f: Return(); Pop(0)

0x1470: PushEmpty(bool, bool)
0x1471: Push(GlobalVars[0])
0x1472: IF (Stack[-1] == 0) GOTO 0x147d; Pop(1)

0x1473: @ IsOverrideActive(Stack[-1])
0x1474: Pop(0)
0x1475: Pop(0); Push((bool) Stack[-1] == 0)
0x1476: IF (Stack[-1] == 0) GOTO 0x147b; Pop(1)

0x1477: PushEmpty(object)
0x1478: Stack[-1] = Stack[-4]
0x1479: Call2 0x1121

0x147a: Pop(1)
0x147b: Return(); Pop(2)

0x147c: GOTO 0x1481

0x147d: PushEmpty(object)
0x147e: Stack[-1] = Stack[-4]
0x147f: Call2 0x1453

0x1480: Pop(1)
0x1481: Return(); Pop(2)

0x1482: PushEmpty(float)
0x1483: Call2 0x1113

0x1484: Pop(0)
0x1485: Push((float)0.7)
0x1486: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x1487: Return(); Pop(0)

0x1488: PushEmpty()
0x1489: PushEmpty(bool, object, object, float)
0x148a: Stack[-3] = Stack[-7]
0x148b: Stack[-2] = Stack[-6]
0x148c: Stack[-1] = (float) 700.0
0x148d: Call2 0x1324

0x148e: Stack[-8] = Stack[-4]
0x148f: Pop(4)
0x1490: Return(); Pop(0)

0x1491: PushEmpty()
0x1492: PushEmpty(bool, object)
0x1493: Stack[-1] = Stack[-3]
0x1494: Call2 0xdc4

0x1495: Pop(1)
0x1496: IF (Stack[-1] == 0) GOTO 0x14a2; Pop(1)

0x1497: PushEmpty(object)
0x1498: Call2 0xf55

0x1499: Pop(0)
0x149a: Push((float)-0.1)
0x149b: Push((bool) 1)
0x149c: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x149d: Pop(3)
0x149e: PushEmpty(bool)
0x149f: Stack[-1] = (bool) 0
0x14a0: Call2 0x1176

0x14a1: Pop(1)
0x14a2: PushEmpty()
0x14a3: Call2 0x115e

0x14a4: Pop(0)
0x14a5: Push(GlobalVars[0])
0x14a6: Stack[-1] = (bool) 1
0x14a7: GlobalVars[0] = Stack[-1]; Pop(1)
0x14a8: Push((int) 50)
0x14a9: Push((int) 40)
0x14aa: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x14ab: Pop(2)
0x14ac: Return(); Pop(0)

