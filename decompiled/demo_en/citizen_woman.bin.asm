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

RunOp = 0x534
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x20a Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x4a7 Vars = (object)
		EVENT_6 Op = 0x4b5 Vars = ()
		EVENT_22 Op = 0x52e Vars = (object, int, float, float)
		EVENT_16 Op = 0x530 Vars = (object, string)
		EVENT_41 Op = 0x532 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x54c Vars = (object)
		EVENT_17 Op = 0x560 Vars = (object)
		EVENT_30 Op = 0x578 Vars = (object, object, bool)
		EVENT_40 Op = 0x594 Vars = (object)
		EVENT_42 Op = 0x5a8 Vars = (object, string)
		EVENT_26 Op = 0x5cd Vars = (string)
		EVENT_1 Op = 0x5db Vars = (object)
		EVENT_3 Op = 0x5ee Vars = (object)
		EVENT_7 Op = 0x5f4 Vars = (int)
		EVENT_6 Op = 0x600 Vars = ()
		EVENT_41 Op = 0x617 Vars = (object)
		EVENT_10 Op = 0x688 Vars = (object)
		EVENT_28 Op = 0x68c Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x6a5 Vars = (object)
		EVENT_17 Op = 0x6b9 Vars = (object)
		EVENT_30 Op = 0x6d1 Vars = (object, object, bool)
		EVENT_40 Op = 0x6ed Vars = (object)
		EVENT_42 Op = 0x701 Vars = (object, string)
		EVENT_26 Op = 0x726 Vars = (string)
		EVENT_6 Op = 0x734 Vars = ()
		EVENT_1 Op = 0x73b Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x7d7 Vars = (object)
		EVENT_17 Op = 0x7eb Vars = (object)
		EVENT_30 Op = 0x803 Vars = (object, object, bool)
		EVENT_40 Op = 0x81f Vars = (object)
		EVENT_42 Op = 0x833 Vars = (object, string)
		EVENT_26 Op = 0x858 Vars = (string)
		EVENT_41 Op = 0x871 Vars = (object)
		EVENT_7 Op = 0x87a Vars = (int)
		EVENT_6 Op = 0x89d Vars = ()
		EVENT_1 Op = 0x8a4 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x8ce Vars = ()
		EVENT_7 Op = 0x93c Vars = (int)
		EVENT_41 Op = 0x977 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x9f7 Vars = (int)
		EVENT_41 Op = 0xa32 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xa4b Vars = ()
		EVENT_7 Op = 0xab9 Vars = (int)
		EVENT_41 Op = 0xaf4 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xb0d Vars = ()
		EVENT_7 Op = 0xb7b Vars = (int)
		EVENT_41 Op = 0xbb6 Vars = (object)

Events:
EVENT_16 Op = 0x1032 Vars = (object, string)
EVENT_41 Op = 0x103f Vars = (object)
EVENT_22 Op = 0x1045 Vars = (object, int, float, float)
EVENT_43 Op = 0x104d Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xcc3

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1264

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1262

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1266

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1268

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0xeb7

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
0x41: Call2 0xd07

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
0x4f: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xddf

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x19a; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x1f4

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
0x62: PushEmpty(bool, object)
0x63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x64: Call2 0xdeb

0x65: Pop(1)
0x66: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call2 0xdf5

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x6c: Stack[-1] = (bool) 0
0x6d: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x6e: PushEmpty(bool, object)
0x6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x70: Call2 0xdff

0x71: Pop(1)
0x72: IF (Stack[-1] == 0) GOTO 0x74; Pop(1)

0x73: Stack[-1] = (bool) 0
0x74: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x75: Push((int) 543182)
0x76: Push((int) -1)
0x77: Push((int) 45638)
0x78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79: Pop(3)
0x7a: PushEmpty(bool)
0x7b: Stack[-1] = (bool) 1
0x7c: PushEmpty(bool)
0x7d: Stack[-1] = (bool) 1
0x7e: PushEmpty(bool)
0x7f: Stack[-1] = (bool) 1
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0xdeb

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x85: PushEmpty(bool, object)
0x86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87: Call2 0xdf5

0x88: Pop(1)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Stack[-1] = (bool) 0
0x8b: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0xdff

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Stack[-1] = (bool) 0
0x92: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x93: PushEmpty(bool, object)
0x94: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95: Call2 0xe09

0x96: Pop(1)
0x97: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x98: Stack[-1] = (bool) 0
0x99: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9a: Push((int) 543183)
0x9b: Push((int) -1)
0x9c: Push((int) 45639)
0x9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e: Pop(3)
0x9f: PushEmpty(bool)
0xa0: Stack[-1] = (bool) 1
0xa1: PushEmpty(bool)
0xa2: Stack[-1] = (bool) 1
0xa3: PushEmpty(bool)
0xa4: Stack[-1] = (bool) 1
0xa5: PushEmpty(bool)
0xa6: Stack[-1] = (bool) 1
0xa7: PushEmpty(bool, object)
0xa8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9: Call2 0xe09

0xaa: Pop(1)
0xab: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xac: PushEmpty(bool, object)
0xad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae: Call2 0xe13

0xaf: Pop(1)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: Stack[-1] = (bool) 0
0xb2: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb3: PushEmpty(bool, object)
0xb4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb5: Call2 0xe1d

0xb6: Pop(1)
0xb7: IF (Stack[-1] == 0) GOTO 0xb9; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xba: PushEmpty(bool, object)
0xbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Call2 0xe27

0xbd: Pop(1)
0xbe: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xbf: Stack[-1] = (bool) 0
0xc0: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc1: PushEmpty(bool, object)
0xc2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc3: Call2 0xe31

0xc4: Pop(1)
0xc5: IF (Stack[-1] == 0) GOTO 0xc7; Pop(1)

0xc6: Stack[-1] = (bool) 0
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: Push((int) 543187)
0xc9: Push((int) -1)
0xca: Push((int) 45643)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: PushEmpty(bool)
0xce: Stack[-1] = (bool) 1
0xcf: PushEmpty(bool)
0xd0: Stack[-1] = (bool) 1
0xd1: PushEmpty(bool)
0xd2: Stack[-1] = (bool) 1
0xd3: PushEmpty(bool, object)
0xd4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd5: Call2 0xe3b

0xd6: Pop(1)
0xd7: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0xe45

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xde; Pop(1)

0xdd: Stack[-1] = (bool) 0
0xde: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdf: PushEmpty(bool, object)
0xe0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe1: Call2 0xe4f

0xe2: Pop(1)
0xe3: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xe4: Stack[-1] = (bool) 0
0xe5: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe6: PushEmpty(bool, object)
0xe7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Call2 0xe59

0xe9: Pop(1)
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Stack[-1] = (bool) 0
0xec: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xed: Push((int) 543208)
0xee: Push((int) -1)
0xef: Push((int) 45664)
0xf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1: Pop(3)
0xf2: PushEmpty(bool)
0xf3: Stack[-1] = (bool) 1
0xf4: PushEmpty(bool)
0xf5: Stack[-1] = (bool) 1
0xf6: PushEmpty(bool, object)
0xf7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf8: Call2 0xdeb

0xf9: Pop(1)
0xfa: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0xfb: PushEmpty(bool, object)
0xfc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfd: Call2 0xdf5

0xfe: Pop(1)
0xff: IF (Stack[-1] == 0) GOTO 0x101; Pop(1)

0x100: Stack[-1] = (bool) 0
0x101: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x102: PushEmpty(bool, object)
0x103: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x104: Call2 0xdff

0x105: Pop(1)
0x106: IF (Stack[-1] == 0) GOTO 0x108; Pop(1)

0x107: Stack[-1] = (bool) 0
0x108: IF (Stack[-1] == 0) GOTO 0x10e; Pop(1)

0x109: Push((int) 543181)
0x10a: Push((int) -1)
0x10b: Push((int) 45637)
0x10c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d: Pop(3)
0x10e: PushEmpty(bool)
0x10f: Stack[-1] = (bool) 1
0x110: PushEmpty(bool)
0x111: Stack[-1] = (bool) 1
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0xe09

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x117: PushEmpty(bool, object)
0x118: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x119: Call2 0xe13

0x11a: Pop(1)
0x11b: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x11c: Stack[-1] = (bool) 0
0x11d: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11e: PushEmpty(bool, object)
0x11f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x120: Call2 0xe1d

0x121: Pop(1)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Stack[-1] = (bool) 0
0x124: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x125: Push((int) 543184)
0x126: Push((int) -1)
0x127: Push((int) 45640)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: PushEmpty(bool)
0x12b: Stack[-1] = (bool) 1
0x12c: PushEmpty(bool)
0x12d: Stack[-1] = (bool) 1
0x12e: PushEmpty(bool)
0x12f: Stack[-1] = (bool) 1
0x130: PushEmpty(bool, object)
0x131: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x132: Call2 0xdff

0x133: Pop(1)
0x134: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x135: PushEmpty(bool, object)
0x136: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x137: Call2 0xe1d

0x138: Pop(1)
0x139: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x13a: Stack[-1] = (bool) 0
0x13b: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x13c: PushEmpty(bool, object)
0x13d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x13e: Call2 0xe27

0x13f: Pop(1)
0x140: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x141: Stack[-1] = (bool) 0
0x142: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x143: PushEmpty(bool, object)
0x144: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x145: Call2 0xe31

0x146: Pop(1)
0x147: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x148: Stack[-1] = (bool) 0
0x149: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14a: Push((int) 543185)
0x14b: Push((int) -1)
0x14c: Push((int) 45641)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: PushEmpty(bool)
0x150: Stack[-1] = (bool) 1
0x151: PushEmpty(bool)
0x152: Stack[-1] = (bool) 1
0x153: PushEmpty(bool, object)
0x154: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x155: Call2 0xe3b

0x156: Pop(1)
0x157: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0xe45

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x15d: Stack[-1] = (bool) 0
0x15e: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0xe4f

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x165; Pop(1)

0x164: Stack[-1] = (bool) 0
0x165: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x166: Push((int) 543186)
0x167: Push((int) -1)
0x168: Push((int) 45642)
0x169: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16a: Pop(3)
0x16b: PushEmpty(bool)
0x16c: Stack[-1] = (bool) 1
0x16d: PushEmpty(bool)
0x16e: Stack[-1] = (bool) 1
0x16f: PushEmpty(bool)
0x170: Stack[-1] = (bool) 1
0x171: PushEmpty(bool)
0x172: Stack[-1] = (bool) 1
0x173: PushEmpty(bool, object)
0x174: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x175: Call2 0xe1d

0x176: Pop(1)
0x177: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x178: PushEmpty(bool, object)
0x179: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x17a: Call2 0xe31

0x17b: Pop(1)
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: Stack[-1] = (bool) 0
0x17e: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x17f: PushEmpty(bool, object)
0x180: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x181: Call2 0xe3b

0x182: Pop(1)
0x183: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x184: Stack[-1] = (bool) 0
0x185: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x186: PushEmpty(bool, object)
0x187: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x188: Call2 0xe59

0x189: Pop(1)
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: Stack[-1] = (bool) 0
0x18c: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x18d: PushEmpty(bool, object)
0x18e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18f: Call2 0xe45

0x190: Pop(1)
0x191: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x192: Stack[-1] = (bool) 0
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: Push((int) 543188)
0x195: Push((int) -1)
0x196: Push((int) 45644)
0x197: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x198: Pop(3)
0x199: GOTO 0x1d6

0x19a: PushEmpty(string)
0x19b: Stack[-1] = "Neutral"
0x19c: Call2 0x1f4

0x19d: Pop(1)
0x19e: Push((int) 538167)
0x19f: @@ SetMessage(Stack[-1])
0x1a0: Pop(1)
0x1a1: @@ ClearReplies()
0x1a2: Pop(0)
0x1a3: Push((int) 538168)
0x1a4: Push((int) -1)
0x1a5: Push((int) 40043)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0xdeb

0x1ad: Pop(1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Call2 0xdc7

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: Push((int) 538169)
0x1b7: Push((int) 40045)
0x1b8: Push((int) 40044)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: PushEmpty(bool)
0x1bc: Stack[-1] = (bool) 1
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Call2 0xdc7

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c2: PushEmpty(bool, object)
0x1c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Call2 0xdd3

0x1c5: Pop(1)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 0
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: Push((int) 538204)
0x1ca: Push((int) -1)
0x1cb: Push((int) 40081)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Push((int) 538205)
0x1cf: Push((int) -1)
0x1d0: Push((int) 40082)
0x1d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d2: Pop(3)
0x1d3: GOTO 0x1d6

0x1d4: Return(); Pop(0)

0x1d5: GOTO 0x4e

0x1d6: PushEmpty(bool)
0x1d7: Call2 0x126a

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1da: @ lshWaitForAnimEnd()
0x1db: Pop(0)
0x1dc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: GOTO 0x1e4

0x1df: PushEmpty(string)
0x1e0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1e1: Call2 0xd18

0x1e2: Pop(1)
0x1e3: GOTO 0x1da

0x1e4: GOTO 0x1f3

0x1e5: Push("all")
0x1e6: Push("idle")
0x1e7: @ PlayAnimation(Stack[-2], Stack[-1])
0x1e8: Pop(2)
0x1e9: @ WaitForAnimEnd()
0x1ea: Pop(0)
0x1eb: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: GOTO 0x1f3

0x1ee: Push("all")
0x1ef: Push("idle")
0x1f0: @ PlayAnimation(Stack[-2], Stack[-1])
0x1f1: Pop(2)
0x1f2: GOTO 0x1e9

0x1f3: Return(); Pop(0)

0x1f4: PushEmpty()
0x1f5: PushEmpty(bool)
0x1f6: Call2 0x126a

0x1f7: Pop(0)
0x1f8: Pop(1); Push((bool) Stack[-1] == 0)
0x1f9: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1fa: Return(); Pop(0)

0x1fb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1fc: IF (Stack[-1] == 0) GOTO 0x1fe; Pop(1)

0x1fd: Return(); Pop(0)

0x1fe: PushEmpty(string, bool)
0x1ff: Stack[-2] = Stack[-3]
0x200: Push("")
0x201: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x202: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x203: Stack[-1] = (bool) 0
0x204: GOTO 0x206

0x205: Stack[-1] = (bool) 1
0x206: Call2 0xd28

0x207: Pop(2)
0x208: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: Push((int) 1)
0x20c: IF (Stack[-1] == 0) GOTO 0x497; Pop(1)

0x20d: PushEmpty()
0x20e: Call2 0xd42

0x20f: Pop(0)
0x210: Push((int) 45638)
0x211: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x212: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x213: PushEmpty(object, object)
0x214: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x215: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x216: Call2 0xdc2

0x217: Pop(2)
0x218: Push((int) 45639)
0x219: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x220; Pop(1)

0x21b: PushEmpty(object, object)
0x21c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x21e: Call2 0xdc2

0x21f: Pop(2)
0x220: Push((int) 45643)
0x221: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x222: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x223: PushEmpty(object, object)
0x224: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x225: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x226: Call2 0xdc2

0x227: Pop(2)
0x228: Push((int) 45664)
0x229: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x22a: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x22b: PushEmpty(object, object)
0x22c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x22e: Call2 0xdc2

0x22f: Pop(2)
0x230: Push((int) 40043)
0x231: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: PushEmpty(object, object)
0x234: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x235: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x236: Call2 0xdc2

0x237: Pop(2)
0x238: Push((int) 45636)
0x239: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23a: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x23b: PushEmpty(bool, object)
0x23c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23d: Call2 0xddf

0x23e: Pop(1)
0x23f: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Neutral"
0x242: Call2 0x1f4

0x243: Pop(1)
0x244: Push((int) 543180)
0x245: @@ SetMessage(Stack[-1])
0x246: Pop(1)
0x247: @@ ClearReplies()
0x248: Pop(0)
0x249: PushEmpty(bool)
0x24a: Stack[-1] = (bool) 1
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 1
0x24d: PushEmpty(bool, object)
0x24e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24f: Call2 0xdeb

0x250: Pop(1)
0x251: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x252: PushEmpty(bool, object)
0x253: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x254: Call2 0xdf5

0x255: Pop(1)
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-1] = (bool) 0
0x258: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x259: PushEmpty(bool, object)
0x25a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25b: Call2 0xdff

0x25c: Pop(1)
0x25d: IF (Stack[-1] == 0) GOTO 0x25f; Pop(1)

0x25e: Stack[-1] = (bool) 0
0x25f: IF (Stack[-1] == 0) GOTO 0x265; Pop(1)

0x260: Push((int) 543182)
0x261: Push((int) -1)
0x262: Push((int) 45638)
0x263: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x264: Pop(3)
0x265: PushEmpty(bool)
0x266: Stack[-1] = (bool) 1
0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 1
0x269: PushEmpty(bool)
0x26a: Stack[-1] = (bool) 1
0x26b: PushEmpty(bool, object)
0x26c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x26d: Call2 0xdeb

0x26e: Pop(1)
0x26f: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x270: PushEmpty(bool, object)
0x271: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x272: Call2 0xdf5

0x273: Pop(1)
0x274: IF (Stack[-1] == 0) GOTO 0x276; Pop(1)

0x275: Stack[-1] = (bool) 0
0x276: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x277: PushEmpty(bool, object)
0x278: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x279: Call2 0xdff

0x27a: Pop(1)
0x27b: IF (Stack[-1] == 0) GOTO 0x27d; Pop(1)

0x27c: Stack[-1] = (bool) 0
0x27d: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x27e: PushEmpty(bool, object)
0x27f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x280: Call2 0xe09

0x281: Pop(1)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: Stack[-1] = (bool) 0
0x284: IF (Stack[-1] == 0) GOTO 0x28a; Pop(1)

0x285: Push((int) 543183)
0x286: Push((int) -1)
0x287: Push((int) 45639)
0x288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x289: Pop(3)
0x28a: PushEmpty(bool)
0x28b: Stack[-1] = (bool) 1
0x28c: PushEmpty(bool)
0x28d: Stack[-1] = (bool) 1
0x28e: PushEmpty(bool)
0x28f: Stack[-1] = (bool) 1
0x290: PushEmpty(bool)
0x291: Stack[-1] = (bool) 1
0x292: PushEmpty(bool, object)
0x293: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x294: Call2 0xe09

0x295: Pop(1)
0x296: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x297: PushEmpty(bool, object)
0x298: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x299: Call2 0xe13

0x29a: Pop(1)
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: Stack[-1] = (bool) 0
0x29d: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x29e: PushEmpty(bool, object)
0x29f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a0: Call2 0xe1d

0x2a1: Pop(1)
0x2a2: IF (Stack[-1] == 0) GOTO 0x2a4; Pop(1)

0x2a3: Stack[-1] = (bool) 0
0x2a4: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2a5: PushEmpty(bool, object)
0x2a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2a7: Call2 0xe27

0x2a8: Pop(1)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2ab; Pop(1)

0x2aa: Stack[-1] = (bool) 0
0x2ab: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2ac: PushEmpty(bool, object)
0x2ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ae: Call2 0xe31

0x2af: Pop(1)
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: Stack[-1] = (bool) 0
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b3: Push((int) 543187)
0x2b4: Push((int) -1)
0x2b5: Push((int) 45643)
0x2b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b7: Pop(3)
0x2b8: PushEmpty(bool)
0x2b9: Stack[-1] = (bool) 1
0x2ba: PushEmpty(bool)
0x2bb: Stack[-1] = (bool) 1
0x2bc: PushEmpty(bool)
0x2bd: Stack[-1] = (bool) 1
0x2be: PushEmpty(bool, object)
0x2bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c0: Call2 0xe3b

0x2c1: Pop(1)
0x2c2: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c3: PushEmpty(bool, object)
0x2c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c5: Call2 0xe45

0x2c6: Pop(1)
0x2c7: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c8: Stack[-1] = (bool) 0
0x2c9: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ca: PushEmpty(bool, object)
0x2cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2cc: Call2 0xe4f

0x2cd: Pop(1)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: Stack[-1] = (bool) 0
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d1: PushEmpty(bool, object)
0x2d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Call2 0xe59

0x2d4: Pop(1)
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Stack[-1] = (bool) 0
0x2d7: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2d8: Push((int) 543208)
0x2d9: Push((int) -1)
0x2da: Push((int) 45664)
0x2db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2dc: Pop(3)
0x2dd: PushEmpty(bool)
0x2de: Stack[-1] = (bool) 1
0x2df: PushEmpty(bool)
0x2e0: Stack[-1] = (bool) 1
0x2e1: PushEmpty(bool, object)
0x2e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Call2 0xdeb

0x2e4: Pop(1)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2e6: PushEmpty(bool, object)
0x2e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e8: Call2 0xdf5

0x2e9: Pop(1)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2eb: Stack[-1] = (bool) 0
0x2ec: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2ed: PushEmpty(bool, object)
0x2ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ef: Call2 0xdff

0x2f0: Pop(1)
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = (bool) 0
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f9; Pop(1)

0x2f4: Push((int) 543181)
0x2f5: Push((int) -1)
0x2f6: Push((int) 45637)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: PushEmpty(bool)
0x2fa: Stack[-1] = (bool) 1
0x2fb: PushEmpty(bool)
0x2fc: Stack[-1] = (bool) 1
0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Call2 0xe09

0x300: Pop(1)
0x301: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x302: PushEmpty(bool, object)
0x303: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x304: Call2 0xe13

0x305: Pop(1)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: Stack[-1] = (bool) 0
0x308: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x309: PushEmpty(bool, object)
0x30a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Call2 0xe1d

0x30c: Pop(1)
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: Stack[-1] = (bool) 0
0x30f: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x310: Push((int) 543184)
0x311: Push((int) -1)
0x312: Push((int) 45640)
0x313: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x314: Pop(3)
0x315: PushEmpty(bool)
0x316: Stack[-1] = (bool) 1
0x317: PushEmpty(bool)
0x318: Stack[-1] = (bool) 1
0x319: PushEmpty(bool)
0x31a: Stack[-1] = (bool) 1
0x31b: PushEmpty(bool, object)
0x31c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x31d: Call2 0xdff

0x31e: Pop(1)
0x31f: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x320: PushEmpty(bool, object)
0x321: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x322: Call2 0xe1d

0x323: Pop(1)
0x324: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x325: Stack[-1] = (bool) 0
0x326: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x327: PushEmpty(bool, object)
0x328: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x329: Call2 0xe27

0x32a: Pop(1)
0x32b: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32c: Stack[-1] = (bool) 0
0x32d: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x32e: PushEmpty(bool, object)
0x32f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x330: Call2 0xe31

0x331: Pop(1)
0x332: IF (Stack[-1] == 0) GOTO 0x334; Pop(1)

0x333: Stack[-1] = (bool) 0
0x334: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x335: Push((int) 543185)
0x336: Push((int) -1)
0x337: Push((int) 45641)
0x338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x339: Pop(3)
0x33a: PushEmpty(bool)
0x33b: Stack[-1] = (bool) 1
0x33c: PushEmpty(bool)
0x33d: Stack[-1] = (bool) 1
0x33e: PushEmpty(bool, object)
0x33f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x340: Call2 0xe3b

0x341: Pop(1)
0x342: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x343: PushEmpty(bool, object)
0x344: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x345: Call2 0xe45

0x346: Pop(1)
0x347: IF (Stack[-1] == 0) GOTO 0x349; Pop(1)

0x348: Stack[-1] = (bool) 0
0x349: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34a: PushEmpty(bool, object)
0x34b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34c: Call2 0xe4f

0x34d: Pop(1)
0x34e: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34f: Stack[-1] = (bool) 0
0x350: IF (Stack[-1] == 0) GOTO 0x356; Pop(1)

0x351: Push((int) 543186)
0x352: Push((int) -1)
0x353: Push((int) 45642)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: PushEmpty(bool)
0x357: Stack[-1] = (bool) 1
0x358: PushEmpty(bool)
0x359: Stack[-1] = (bool) 1
0x35a: PushEmpty(bool)
0x35b: Stack[-1] = (bool) 1
0x35c: PushEmpty(bool)
0x35d: Stack[-1] = (bool) 1
0x35e: PushEmpty(bool, object)
0x35f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x360: Call2 0xe1d

0x361: Pop(1)
0x362: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x363: PushEmpty(bool, object)
0x364: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x365: Call2 0xe31

0x366: Pop(1)
0x367: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x368: Stack[-1] = (bool) 0
0x369: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36a: PushEmpty(bool, object)
0x36b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36c: Call2 0xe3b

0x36d: Pop(1)
0x36e: IF (Stack[-1] == 0) GOTO 0x370; Pop(1)

0x36f: Stack[-1] = (bool) 0
0x370: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x371: PushEmpty(bool, object)
0x372: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x373: Call2 0xe59

0x374: Pop(1)
0x375: IF (Stack[-1] == 0) GOTO 0x377; Pop(1)

0x376: Stack[-1] = (bool) 0
0x377: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x378: PushEmpty(bool, object)
0x379: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37a: Call2 0xe45

0x37b: Pop(1)
0x37c: IF (Stack[-1] == 0) GOTO 0x37e; Pop(1)

0x37d: Stack[-1] = (bool) 0
0x37e: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x37f: Push((int) 543188)
0x380: Push((int) -1)
0x381: Push((int) 45644)
0x382: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(3)
0x384: Return(); Pop(0)

0x385: PushEmpty(string)
0x386: Stack[-1] = "Neutral"
0x387: Call2 0x1f4

0x388: Pop(1)
0x389: Push((int) 538167)
0x38a: @@ SetMessage(Stack[-1])
0x38b: Pop(1)
0x38c: @@ ClearReplies()
0x38d: Pop(0)
0x38e: Push((int) 538168)
0x38f: Push((int) -1)
0x390: Push((int) 40043)
0x391: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x392: Pop(3)
0x393: PushEmpty(bool)
0x394: Stack[-1] = (bool) 0
0x395: PushEmpty(bool, object)
0x396: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x397: Call2 0xdeb

0x398: Pop(1)
0x399: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39a: PushEmpty(bool, object)
0x39b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39c: Call2 0xdc7

0x39d: Pop(1)
0x39e: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39f: Stack[-1] = (bool) 1
0x3a0: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a1: Push((int) 538169)
0x3a2: Push((int) 40045)
0x3a3: Push((int) 40044)
0x3a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a5: Pop(3)
0x3a6: PushEmpty(bool)
0x3a7: Stack[-1] = (bool) 1
0x3a8: PushEmpty(bool, object)
0x3a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3aa: Call2 0xdc7

0x3ab: Pop(1)
0x3ac: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3ad: PushEmpty(bool, object)
0x3ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3af: Call2 0xdd3

0x3b0: Pop(1)
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b3; Pop(1)

0x3b2: Stack[-1] = (bool) 0
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b4: Push((int) 538204)
0x3b5: Push((int) -1)
0x3b6: Push((int) 40081)
0x3b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b8: Pop(3)
0x3b9: Push((int) 538205)
0x3ba: Push((int) -1)
0x3bb: Push((int) 40082)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: Push((int) 40067)
0x3c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3c2; Pop(1)

0x3c2: Push((int) 40069)
0x3c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c4: IF (Stack[-1] == 0) GOTO 0x3d9; Pop(1)

0x3c5: PushEmpty(string)
0x3c6: Stack[-1] = "Neutral"
0x3c7: Call2 0x1f4

0x3c8: Pop(1)
0x3c9: Push((int) 538193)
0x3ca: @@ SetMessage(Stack[-1])
0x3cb: Pop(1)
0x3cc: @@ ClearReplies()
0x3cd: Pop(0)
0x3ce: Push((int) 538194)
0x3cf: Push((int) 40071)
0x3d0: Push((int) 40070)
0x3d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d2: Pop(3)
0x3d3: Push((int) 538202)
0x3d4: Push((int) -1)
0x3d5: Push((int) 40078)
0x3d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d7: Pop(3)
0x3d8: Return(); Pop(0)

0x3d9: Push((int) 40071)
0x3da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3db: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3dc: PushEmpty(string)
0x3dd: Stack[-1] = "Neutral"
0x3de: Call2 0x1f4

0x3df: Pop(1)
0x3e0: Push((int) 538195)
0x3e1: @@ SetMessage(Stack[-1])
0x3e2: Pop(1)
0x3e3: @@ ClearReplies()
0x3e4: Pop(0)
0x3e5: Push((int) 538196)
0x3e6: Push((int) 40073)
0x3e7: Push((int) 40072)
0x3e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e9: Pop(3)
0x3ea: Push((int) 538201)
0x3eb: Push((int) -1)
0x3ec: Push((int) 40077)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Return(); Pop(0)

0x3f0: Push((int) 40073)
0x3f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3f3: PushEmpty(string)
0x3f4: Stack[-1] = "Neutral"
0x3f5: Call2 0x1f4

0x3f6: Pop(1)
0x3f7: Push((int) 538197)
0x3f8: @@ SetMessage(Stack[-1])
0x3f9: Pop(1)
0x3fa: @@ ClearReplies()
0x3fb: Pop(0)
0x3fc: Push((int) 538198)
0x3fd: Push((int) -1)
0x3fe: Push((int) 40074)
0x3ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x400: Pop(3)
0x401: Push((int) 538199)
0x402: Push((int) -1)
0x403: Push((int) 40075)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Push((int) 538200)
0x407: Push((int) -1)
0x408: Push((int) 40076)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Return(); Pop(0)

0x40c: Push((int) 40055)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x40f; Pop(1)

0x40f: Push((int) 40057)
0x410: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x411: IF (Stack[-1] == 0) GOTO 0x426; Pop(1)

0x412: PushEmpty(string)
0x413: Stack[-1] = "Neutral"
0x414: Call2 0x1f4

0x415: Pop(1)
0x416: Push((int) 538182)
0x417: @@ SetMessage(Stack[-1])
0x418: Pop(1)
0x419: @@ ClearReplies()
0x41a: Pop(0)
0x41b: Push((int) 538183)
0x41c: Push((int) 40059)
0x41d: Push((int) 40058)
0x41e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41f: Pop(3)
0x420: Push((int) 538187)
0x421: Push((int) -1)
0x422: Push((int) 40062)
0x423: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x424: Pop(3)
0x425: Return(); Pop(0)

0x426: Push((int) 40059)
0x427: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x428: IF (Stack[-1] == 0) GOTO 0x43d; Pop(1)

0x429: PushEmpty(string)
0x42a: Stack[-1] = "Neutral"
0x42b: Call2 0x1f4

0x42c: Pop(1)
0x42d: Push((int) 538184)
0x42e: @@ SetMessage(Stack[-1])
0x42f: Pop(1)
0x430: @@ ClearReplies()
0x431: Pop(0)
0x432: Push((int) 538185)
0x433: Push((int) -1)
0x434: Push((int) 40060)
0x435: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x436: Pop(3)
0x437: Push((int) 538186)
0x438: Push((int) -1)
0x439: Push((int) 40061)
0x43a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43b: Pop(3)
0x43c: Return(); Pop(0)

0x43d: Push((int) 40045)
0x43e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x43f: IF (Stack[-1] == 0) GOTO 0x459; Pop(1)

0x440: PushEmpty(string)
0x441: Stack[-1] = "Neutral"
0x442: Call2 0x1f4

0x443: Pop(1)
0x444: Push((int) 538170)
0x445: @@ SetMessage(Stack[-1])
0x446: Pop(1)
0x447: @@ ClearReplies()
0x448: Pop(0)
0x449: Push((int) 538171)
0x44a: Push((int) 40047)
0x44b: Push((int) 40046)
0x44c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44d: Pop(3)
0x44e: Push((int) 538175)
0x44f: Push((int) 40051)
0x450: Push((int) 40050)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Push((int) 538178)
0x454: Push((int) -1)
0x455: Push((int) 40053)
0x456: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x457: Pop(3)
0x458: Return(); Pop(0)

0x459: Push((int) 40051)
0x45a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45b: IF (Stack[-1] == 0) GOTO 0x46b; Pop(1)

0x45c: PushEmpty(string)
0x45d: Stack[-1] = "Neutral"
0x45e: Call2 0x1f4

0x45f: Pop(1)
0x460: Push((int) 538176)
0x461: @@ SetMessage(Stack[-1])
0x462: Pop(1)
0x463: @@ ClearReplies()
0x464: Pop(0)
0x465: Push((int) 538177)
0x466: Push((int) -1)
0x467: Push((int) 40052)
0x468: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x469: Pop(3)
0x46a: Return(); Pop(0)

0x46b: Push((int) 40047)
0x46c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46d: IF (Stack[-1] == 0) GOTO 0x482; Pop(1)

0x46e: PushEmpty(string)
0x46f: Stack[-1] = "Neutral"
0x470: Call2 0x1f4

0x471: Pop(1)
0x472: Push((int) 538172)
0x473: @@ SetMessage(Stack[-1])
0x474: Pop(1)
0x475: @@ ClearReplies()
0x476: Pop(0)
0x477: Push((int) 538173)
0x478: Push((int) -1)
0x479: Push((int) 40048)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Push((int) 538174)
0x47d: Push((int) -1)
0x47e: Push((int) 40049)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Return(); Pop(0)

0x482: Push((int) 45656)
0x483: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x484: IF (Stack[-1] == 0) GOTO 0x485; Pop(1)

0x485: Push((int) 45655)
0x486: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x488; Pop(1)

0x488: Push((int) 45648)
0x489: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48a: IF (Stack[-1] == 0) GOTO 0x48b; Pop(1)

0x48b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x48c: PushEmpty(bool)
0x48d: Call2 0x126a

0x48e: Pop(0)
0x48f: IF (Stack[-1] == 0) GOTO 0x493; Pop(1)

0x490: @ lshStopAnimation()
0x491: Pop(0)
0x492: GOTO 0x495

0x493: @ StopAnimation()
0x494: Pop(0)
0x495: Return(); Pop(0)

0x496: GOTO 0x20b

0x497: Return(); Pop(0)

0x498: PushEmpty()
0x499: EventDisable(0)
0x49a: PushEmpty(object)
0x49b: Stack[-1] = Stack[-2]
0x49c: Call2 0x4b9

0x49d: Pop(1)
0x49e: PushEmpty(object)
0x49f: Stack[-1] = Stack[-2]
0x4a0: Call2 0x1291

0x4a1: Pop(1)
0x4a2: EventEnable(0)
0x4a3: @ Hold()
0x4a4: Pop(0)
0x4a5: GOTO 0x4a3

0x4a6: Return(); Pop(0)

0x4a7: PushEmpty(int, int)
0x4a8: PushEmpty(int, object)
0x4a9: Stack[-1] = Stack[-5]
0x4aa: Call2 0x1170

0x4ab: Stack[-3] = Stack[-2]
0x4ac: Pop(2)
0x4ad: Push((int) 0)
0x4ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4af: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b0: PushEmpty(object)
0x4b1: Stack[-1] = Stack[-4]
0x4b2: Call2 0x1173

0x4b3: Pop(1)
0x4b4: Return(); Pop(2)

0x4b5: PushEmpty()
0x4b6: Call2 0x1179

0x4b7: Pop(0)
0x4b8: Return(); Pop(0)

0x4b9: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x4ba: Pop(0); Push((bool) Stack[-21] == 0)
0x4bb: IF (Stack[-1] == 0) GOTO 0x4c1; Pop(1)

0x4bc: PushEmpty(string)
0x4bd: Stack[-1] = "fdie"
0x4be: Call2 0x514

0x4bf: Pop(1)
0x4c0: GOTO 0x513

0x4c1: @@ GetPosition(Stack[-10])
0x4c2: Pop(0)
0x4c3: @ GetPosition(Stack[-9])
0x4c4: Pop(0)
0x4c5: @ GetDirection(Stack[-8])
0x4c6: Pop(0)
0x4c7: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x4c8: Push(CvectorIndex(Stack[-7], 0))
0x4c9: Push(CvectorIndex(Stack[-9], 0))
0x4ca: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4cb: Push(CvectorIndex(Stack[-8], 2))
0x4cc: Push(CvectorIndex(Stack[-10], 2))
0x4cd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x4ce: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4cf: Push((int) 0)
0x4d0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x4d1: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4d2: Stack[-6] = "fdie"
0x4d3: GOTO 0x4d5

0x4d4: Stack[-6] = "bdie"
0x4d5: @ RemoveRTEnvelope()
0x4d6: Pop(0)
0x4d7: @ SetDeathState()
0x4d8: Pop(0)
0x4d9: @ Stop()
0x4da: Pop(0)
0x4db: @ StopAsync()
0x4dc: Pop(0)
0x4dd: Stack[-5] = Stack[-21]
0x4de: Push("GetScriptProperty")
0x4df: Push((int) 2)
0x4e0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x4e1: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e2: Push("Owner")
0x4e3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x4e4: Pop(1)
0x4e5: Push(Stack[-4])
0x4e6: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4e7: Push("Owner")
0x4e8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x4e9: Pop(1)
0x4ea: Pop(0); Push((bool) Stack[-5] == 0)
0x4eb: IF (Stack[-1] == 0) GOTO 0x4ed; Pop(1)

0x4ec: Stack[-5] = Stack[-21]
0x4ed: Push("@GetEyesHeight")
0x4ee: Push((int) 1)
0x4ef: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x4f0: IF (Stack[-1] == 0) GOTO 0x4fc; Pop(1)

0x4f1: @@ GetEyesHeight(Stack[-2])
0x4f2: Pop(0)
0x4f3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x4f4: Push(CvectorIndex(Stack[-1], 1))
0x4f5: Stack[-1] = Stack[-3]
0x4f6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x4f7: Push("head")
0x4f8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x4f9: Pop(1)
0x4fa: Stack[-3] = (bool) 1
0x4fb: GOTO 0x4fd

0x4fc: Stack[-3] = (bool) 0
0x4fd: PushEmpty(string)
0x4fe: Stack[-1] = Stack[-7]
0x4ff: Call2 0xd49

0x500: Pop(1)
0x501: Push("all")
0x502: @ PlayAnimation(Stack[-1], Stack[-7])
0x503: Pop(1)
0x504: @ WaitForAnimEnd()
0x505: Pop(0)
0x506: Push(Stack[-3])
0x507: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x508: @ StopAsync()
0x509: Pop(0)
0x50a: Push("head")
0x50b: @ UnlookAsync(Stack[-1])
0x50c: Pop(1)
0x50d: Push("all")
0x50e: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x50f: Pop(1)
0x510: @ RemoveEnvelope()
0x511: Pop(0)
0x512: Stack[-5] = 0
0x513: Return(); Pop(20)

0x514: PushEmpty()
0x515: @ RemoveRTEnvelope()
0x516: Pop(0)
0x517: @ SetDeathState()
0x518: Pop(0)
0x519: @ Stop()
0x51a: Pop(0)
0x51b: @ StopAsync()
0x51c: Pop(0)
0x51d: @ StopSecondaryAnimation()
0x51e: Pop(0)
0x51f: PushEmpty(string)
0x520: Stack[-1] = Stack[-2]
0x521: Call2 0xd49

0x522: Pop(1)
0x523: Push("all")
0x524: @ PlayAnimation(Stack[-1], Stack[-2])
0x525: Pop(1)
0x526: @ WaitForAnimEnd()
0x527: Pop(0)
0x528: Push("all")
0x529: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x52a: Pop(1)
0x52b: @ RemoveEnvelope()
0x52c: Pop(0)
0x52d: Return(); Pop(0)

0x52e: PushEmpty()
0x52f: Return(); Pop(0)

0x530: PushEmpty()
0x531: Return(); Pop(0)

0x532: PushEmpty()
0x533: Return(); Pop(0)

0x534: Push((bool) 1)
0x535: @ SensePlayerOnly(Stack[-1])
0x536: Pop(1)
0x537: PushEmpty()
0x538: Call2 0x126c

0x539: Pop(0)
0x53a: PushEmpty()
0x53b: Call2 0x543

0x53c: Pop(0)
0x53d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x53e: PushEmpty()
0x53f: Call2 0x648

0x540: Pop(0)
0x541: GOTO 0x53d

0x542: Return(); Pop(0)

0x543: PushEmpty(bool)
0x544: Call2 0xcbe

0x545: Pop(0)
0x546: Pop(1); Push((bool) Stack[-1] == 0)
0x547: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x548: PushEmpty()
0x549: Call2 0x1179

0x54a: Pop(0)
0x54b: Return(); Pop(0)

0x54c: PushEmpty(int, int)
0x54d: PushEmpty(int, object)
0x54e: Stack[-1] = Stack[-5]
0x54f: Call2 0x1170

0x550: Stack[-3] = Stack[-2]
0x551: Pop(2)
0x552: Push((int) 0)
0x553: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x554: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x555: Push((int) 1)
0x556: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55b; Pop(1)

0x558: PushEmpty()
0x559: Call2 0x607

0x55a: Pop(0)
0x55b: PushEmpty(object)
0x55c: Stack[-1] = Stack[-4]
0x55d: Call2 0x1173

0x55e: Pop(1)
0x55f: Return(); Pop(2)

0x560: PushEmpty(int, int)
0x561: PushEmpty(object)
0x562: Stack[-1] = Stack[-4]
0x563: Call2 0x10ad

0x564: Pop(1)
0x565: PushEmpty(int, object)
0x566: Stack[-1] = Stack[-5]
0x567: Call2 0x1100

0x568: Stack[-3] = Stack[-2]
0x569: Pop(2)
0x56a: Push((int) 0)
0x56b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56c: IF (Stack[-1] == 0) GOTO 0x577; Pop(1)

0x56d: Push((int) 1)
0x56e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x56f: IF (Stack[-1] == 0) GOTO 0x573; Pop(1)

0x570: PushEmpty()
0x571: Call2 0x607

0x572: Pop(0)
0x573: PushEmpty(object)
0x574: Stack[-1] = Stack[-4]
0x575: Call2 0x110a

0x576: Pop(1)
0x577: Return(); Pop(2)

0x578: PushEmpty(int, int)
0x579: PushEmpty(bool, object, object, bool)
0x57a: Stack[-3] = Stack[-9]
0x57b: Stack[-2] = Stack[-8]
0x57c: Stack[-1] = Stack[-7]
0x57d: Call2 0x1288

0x57e: Pop(3)
0x57f: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x580: PushEmpty(int, object, bool)
0x581: Stack[-2] = Stack[-8]
0x582: Stack[-1] = Stack[-6]
0x583: Call2 0x1112

0x584: Stack[-4] = Stack[-3]
0x585: Pop(3)
0x586: Push((int) 0)
0x587: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x588: IF (Stack[-1] == 0) GOTO 0x593; Pop(1)

0x589: Push((int) 1)
0x58a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x58b: IF (Stack[-1] == 0) GOTO 0x58f; Pop(1)

0x58c: PushEmpty()
0x58d: Call2 0x607

0x58e: Pop(0)
0x58f: PushEmpty(object)
0x590: Stack[-1] = Stack[-6]
0x591: Call2 0x111c

0x592: Pop(1)
0x593: Return(); Pop(2)

0x594: PushEmpty(int, int)
0x595: PushEmpty(int, object)
0x596: Stack[-1] = Stack[-5]
0x597: Call2 0x1166

0x598: Stack[-3] = Stack[-2]
0x599: Pop(2)
0x59a: Push((int) 0)
0x59b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x59c: IF (Stack[-1] == 0) GOTO 0x5a7; Pop(1)

0x59d: Push((int) 1)
0x59e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x5a0: PushEmpty()
0x5a1: Call2 0x607

0x5a2: Pop(0)
0x5a3: PushEmpty(object)
0x5a4: Stack[-1] = Stack[-4]
0x5a5: Call2 0x1169

0x5a6: Pop(1)
0x5a7: Return(); Pop(2)

0x5a8: PushEmpty(int, int)
0x5a9: PushEmpty(bool, object, string)
0x5aa: Stack[-2] = Stack[-7]
0x5ab: Stack[-1] = Stack[-6]
0x5ac: Call2 0x1057

0x5ad: Pop(2)
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5af: PushEmpty()
0x5b0: Call2 0x607

0x5b1: Pop(0)
0x5b2: PushEmpty(object, string)
0x5b3: Stack[-2] = Stack[-6]
0x5b4: Stack[-1] = Stack[-5]
0x5b5: Call2 0x1077

0x5b6: Pop(2)
0x5b7: GOTO 0x5cc

0x5b8: PushEmpty(int, string, object)
0x5b9: Stack[-2] = Stack[-6]
0x5ba: Stack[-1] = Stack[-7]
0x5bb: Call2 0x116b

0x5bc: Stack[-4] = Stack[-3]
0x5bd: Pop(3)
0x5be: Push((int) 0)
0x5bf: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5c0: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5c1: Push((int) 1)
0x5c2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5c4: PushEmpty()
0x5c5: Call2 0x607

0x5c6: Pop(0)
0x5c7: PushEmpty(string, object)
0x5c8: Stack[-2] = Stack[-5]
0x5c9: Stack[-1] = Stack[-6]
0x5ca: Call2 0x116e

0x5cb: Pop(2)
0x5cc: Return(); Pop(2)

0x5cd: PushEmpty()
0x5ce: PushEmpty(bool, string)
0x5cf: Stack[-1] = Stack[-3]
0x5d0: Call2 0x10ba

0x5d1: Pop(1)
0x5d2: IF (Stack[-1] == 0) GOTO 0x5da; Pop(1)

0x5d3: PushEmpty()
0x5d4: Call2 0x607

0x5d5: Pop(0)
0x5d6: PushEmpty(string)
0x5d7: Stack[-1] = Stack[-2]
0x5d8: Call2 0x10ca

0x5d9: Pop(1)
0x5da: Return(); Pop(0)

0x5db: PushEmpty()
0x5dc: PushEmpty(bool, object)
0x5dd: Stack[-1] = Stack[-3]
0x5de: Call2 0x1090

0x5df: Pop(1)
0x5e0: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5e1: PushEmpty()
0x5e2: Call2 0x607

0x5e3: Pop(0)
0x5e4: PushEmpty(object)
0x5e5: Stack[-1] = Stack[-2]
0x5e6: Call2 0x10a7

0x5e7: Pop(1)
0x5e8: GOTO 0x5ed

0x5e9: PushEmpty(object)
0x5ea: Stack[-1] = Stack[-2]
0x5eb: Call2 0x620

0x5ec: Pop(1)
0x5ed: Return(); Pop(0)

0x5ee: PushEmpty()
0x5ef: PushEmpty(object)
0x5f0: Stack[-1] = Stack[-2]
0x5f1: Call2 0x620

0x5f2: Pop(1)
0x5f3: Return(); Pop(0)

0x5f4: PushEmpty()
0x5f5: Push((int) 110)
0x5f6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f8: Return(); Pop(0)

0x5f9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x5fa: Push((int) 110)
0x5fb: @ KillTimer(Stack[-1])
0x5fc: Pop(1)
0x5fd: @ ResetAAS()
0x5fe: Pop(0)
0x5ff: Return(); Pop(0)

0x600: PushEmpty()
0x601: Call2 0x607

0x602: Pop(0)
0x603: PushEmpty()
0x604: Call2 0x1179

0x605: Pop(0)
0x606: Return(); Pop(0)

0x607: Push((int) 110)
0x608: @ KillTimer(Stack[-1])
0x609: Pop(1)
0x60a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x60b: PushEmpty()
0x60c: Call2 0x68f

0x60d: Pop(0)
0x60e: Return(); Pop(0)

0x60f: Push((int) 110)
0x610: @ KillTimer(Stack[-1])
0x611: Pop(1)
0x612: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x613: PushEmpty()
0x614: Call2 0x696

0x615: Pop(0)
0x616: Return(); Pop(0)

0x617: PushEmpty()
0x618: PushEmpty()
0x619: Call2 0x607

0x61a: Pop(0)
0x61b: PushEmpty(object)
0x61c: Stack[-1] = Stack[-2]
0x61d: Call2 0x103f

0x61e: Pop(1)
0x61f: Return(); Pop(0)

0x620: PushEmpty(bool, int, bool, int)
0x621: PushEmpty(bool, object)
0x622: Stack[-1] = Stack[-7]
0x623: Call2 0xc1d

0x624: Pop(1)
0x625: Pop(1); Push((bool) Stack[-1] == 0)
0x626: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x627: Return(); Pop(4)

0x628: Push( Stack[2 + Tasks[-1].StackPointer] )
0x629: IF (Stack[-1] == 0) GOTO 0x62b; Pop(1)

0x62a: Return(); Pop(4)

0x62b: @ IsPlayerActor(Stack[-5], Stack[-2])
0x62c: Pop(0)
0x62d: Pop(0); Push((bool) Stack[-2] == 0)
0x62e: IF (Stack[-1] == 0) GOTO 0x630; Pop(1)

0x62f: Return(); Pop(4)

0x630: PushEmpty(int, object)
0x631: Stack[-1] = Stack[-7]
0x632: Call2 0x10ef

0x633: Stack[-3] = Stack[-2]
0x634: Pop(2)
0x635: Push((int) 0)
0x636: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x638: Push((int) 1)
0x639: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x63a: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63b: PushEmpty()
0x63c: Call2 0x60f

0x63d: Pop(0)
0x63e: PushEmpty(object)
0x63f: Stack[-1] = Stack[-6]
0x640: Call2 0x10f8

0x641: Pop(1)
0x642: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x643: Push((int) 110)
0x644: Push((float)10.0)
0x645: @ SetTimer(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: Return(); Pop(4)

0x648: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x649: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x64a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x64b: Push((float)0.5)
0x64c: @ rand(Stack[-7], Stack[-1])
0x64d: Pop(1)
0x64e: @ Sleep(Stack[-6])
0x64f: Pop(0)
0x650: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x651: IF (Stack[-1] == 0) GOTO 0x682; Pop(1)

0x652: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x653: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x654: @ GetPosition(Stack[-4])
0x655: Pop(0)
0x656: PushEmpty(float)
0x657: Call2 0x683

0x658: Pop(0)
0x659: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x65a: Pop(1)
0x65b: Push(Stack[-3])
0x65c: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x65d: GOTO 0x662

0x65e: Push((int) 1)
0x65f: @ Sleep(Stack[-1])
0x660: Pop(1)
0x661: GOTO 0x654

0x662: GOTO 0x664

0x663: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x664: PushEmpty(object, cvector)
0x665: Stack[-1] = Stack[-7]
0x666: Call2 0x69f

0x667: Stack[-4] = Stack[-2]
0x668: Pop(2)
0x669: Pop(0); Push(( Stack[-2] != 0 )
0x66a: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x66b: @ RotatePath(Stack[-2], Stack[-1])
0x66c: Pop(0)
0x66d: Push(Stack[-1])
0x66e: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x66f: PushEmpty(bool)
0x670: Call2 0x69d

0x671: Pop(0)
0x672: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x673: Pop(1)
0x674: Stack[-2] = 0
0x675: Push(Stack[-1])
0x676: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x677: PushEmpty()
0x678: Push(-0, 0); TaskCall(4)
0x679: Call2 0x749

0x67a: Pop(-0, 0); TaskReturn
0x67b: Pop(0)
0x67c: GOTO 0x680

0x67d: Push((int) 1)
0x67e: @ Sleep(Stack[-1])
0x67f: Pop(1)
0x680: Stack[-2] = 0
0x681: GOTO 0x650

0x682: Return(); Pop(12)

0x683: PushEmpty(float, float)
0x684: @ GetCameraFarDistance(Stack[-1])
0x685: Pop(0)
0x686: Stack[-3] = Stack[-1]
0x687: Return(); Pop(2)

0x688: PushEmpty()
0x689: @ RequestClearPath(Stack[-1])
0x68a: Pop(0)
0x68b: Return(); Pop(0)

0x68c: @ Stop()
0x68d: Pop(0)
0x68e: Return(); Pop(0)

0x68f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x690: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x691: @ Stop()
0x692: Pop(0)
0x693: @ StopGroup0()
0x694: Pop(0)
0x695: Return(); Pop(0)

0x696: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x697: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x698: @ Stop()
0x699: Pop(0)
0x69a: @ StopGroup0()
0x69b: Pop(0)
0x69c: Return(); Pop(0)

0x69d: Stack[-1] = (bool) 0
0x69e: Return(); Pop(0)

0x69f: PushEmpty(object, object)
0x6a0: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x6a1: Pop(0)
0x6a2: Stack[-4] = Stack[-1]
0x6a3: Return(); Pop(2)

0x6a4: Stack[-1] = 0
0x6a5: PushEmpty(int, int)
0x6a6: PushEmpty(int, object)
0x6a7: Stack[-1] = Stack[-5]
0x6a8: Call2 0x1170

0x6a9: Stack[-3] = Stack[-2]
0x6aa: Pop(2)
0x6ab: Push((int) 0)
0x6ac: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x6ae: Push((int) 1)
0x6af: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b1: PushEmpty()
0x6b2: Call2 0x79a

0x6b3: Pop(0)
0x6b4: PushEmpty(object)
0x6b5: Stack[-1] = Stack[-4]
0x6b6: Call2 0x1173

0x6b7: Pop(1)
0x6b8: Return(); Pop(2)

0x6b9: PushEmpty(int, int)
0x6ba: PushEmpty(object)
0x6bb: Stack[-1] = Stack[-4]
0x6bc: Call2 0x10ad

0x6bd: Pop(1)
0x6be: PushEmpty(int, object)
0x6bf: Stack[-1] = Stack[-5]
0x6c0: Call2 0x1100

0x6c1: Stack[-3] = Stack[-2]
0x6c2: Pop(2)
0x6c3: Push((int) 0)
0x6c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6c6: Push((int) 1)
0x6c7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6c8: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c9: PushEmpty()
0x6ca: Call2 0x79a

0x6cb: Pop(0)
0x6cc: PushEmpty(object)
0x6cd: Stack[-1] = Stack[-4]
0x6ce: Call2 0x110a

0x6cf: Pop(1)
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(int, int)
0x6d2: PushEmpty(bool, object, object, bool)
0x6d3: Stack[-3] = Stack[-9]
0x6d4: Stack[-2] = Stack[-8]
0x6d5: Stack[-1] = Stack[-7]
0x6d6: Call2 0x1288

0x6d7: Pop(3)
0x6d8: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6d9: PushEmpty(int, object, bool)
0x6da: Stack[-2] = Stack[-8]
0x6db: Stack[-1] = Stack[-6]
0x6dc: Call2 0x1112

0x6dd: Stack[-4] = Stack[-3]
0x6de: Pop(3)
0x6df: Push((int) 0)
0x6e0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6e1: IF (Stack[-1] == 0) GOTO 0x6ec; Pop(1)

0x6e2: Push((int) 1)
0x6e3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6e4: IF (Stack[-1] == 0) GOTO 0x6e8; Pop(1)

0x6e5: PushEmpty()
0x6e6: Call2 0x79a

0x6e7: Pop(0)
0x6e8: PushEmpty(object)
0x6e9: Stack[-1] = Stack[-6]
0x6ea: Call2 0x111c

0x6eb: Pop(1)
0x6ec: Return(); Pop(2)

0x6ed: PushEmpty(int, int)
0x6ee: PushEmpty(int, object)
0x6ef: Stack[-1] = Stack[-5]
0x6f0: Call2 0x1166

0x6f1: Stack[-3] = Stack[-2]
0x6f2: Pop(2)
0x6f3: Push((int) 0)
0x6f4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6f5: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6f6: Push((int) 1)
0x6f7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x6f8: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f9: PushEmpty()
0x6fa: Call2 0x79a

0x6fb: Pop(0)
0x6fc: PushEmpty(object)
0x6fd: Stack[-1] = Stack[-4]
0x6fe: Call2 0x1169

0x6ff: Pop(1)
0x700: Return(); Pop(2)

0x701: PushEmpty(int, int)
0x702: PushEmpty(bool, object, string)
0x703: Stack[-2] = Stack[-7]
0x704: Stack[-1] = Stack[-6]
0x705: Call2 0x1057

0x706: Pop(2)
0x707: IF (Stack[-1] == 0) GOTO 0x711; Pop(1)

0x708: PushEmpty()
0x709: Call2 0x79a

0x70a: Pop(0)
0x70b: PushEmpty(object, string)
0x70c: Stack[-2] = Stack[-6]
0x70d: Stack[-1] = Stack[-5]
0x70e: Call2 0x1077

0x70f: Pop(2)
0x710: GOTO 0x725

0x711: PushEmpty(int, string, object)
0x712: Stack[-2] = Stack[-6]
0x713: Stack[-1] = Stack[-7]
0x714: Call2 0x116b

0x715: Stack[-4] = Stack[-3]
0x716: Pop(3)
0x717: Push((int) 0)
0x718: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x719: IF (Stack[-1] == 0) GOTO 0x725; Pop(1)

0x71a: Push((int) 1)
0x71b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x71c: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71d: PushEmpty()
0x71e: Call2 0x79a

0x71f: Pop(0)
0x720: PushEmpty(string, object)
0x721: Stack[-2] = Stack[-5]
0x722: Stack[-1] = Stack[-6]
0x723: Call2 0x116e

0x724: Pop(2)
0x725: Return(); Pop(2)

0x726: PushEmpty()
0x727: PushEmpty(bool, string)
0x728: Stack[-1] = Stack[-3]
0x729: Call2 0x10ba

0x72a: Pop(1)
0x72b: IF (Stack[-1] == 0) GOTO 0x733; Pop(1)

0x72c: PushEmpty()
0x72d: Call2 0x79a

0x72e: Pop(0)
0x72f: PushEmpty(string)
0x730: Stack[-1] = Stack[-2]
0x731: Call2 0x10ca

0x732: Pop(1)
0x733: Return(); Pop(0)

0x734: PushEmpty()
0x735: Call2 0x79a

0x736: Pop(0)
0x737: PushEmpty()
0x738: Call2 0x1179

0x739: Pop(0)
0x73a: Return(); Pop(0)

0x73b: PushEmpty()
0x73c: PushEmpty(bool, object)
0x73d: Stack[-1] = Stack[-3]
0x73e: Call2 0x1090

0x73f: Pop(1)
0x740: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x741: PushEmpty()
0x742: Call2 0x79a

0x743: Pop(0)
0x744: PushEmpty(object)
0x745: Stack[-1] = Stack[-2]
0x746: Call2 0x10a7

0x747: Pop(1)
0x748: Return(); Pop(0)

0x749: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x74a: @ WaitForAnimEnd()
0x74b: Pop(0)
0x74c: PushEmpty(bool)
0x74d: Call2 0xcbe

0x74e: Pop(0)
0x74f: Pop(1); Push((bool) Stack[-1] == 0)
0x750: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x751: Return(); Pop(14)

0x752: PushEmpty(int)
0x753: Call2 0x10de

0x754: Stack[-8] = Stack[-1]
0x755: Pop(1)
0x756: Stack[-6] = (int) 0
0x757: PushEmpty(bool)
0x758: Stack[-1] = (bool) 0
0x759: Push((int) 5)
0x75a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x75c: PushEmpty(bool)
0x75d: Call2 0xcbe

0x75e: Pop(0)
0x75f: IF (Stack[-1] == 0) GOTO 0x761; Pop(1)

0x760: Stack[-1] = (bool) 1
0x761: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x762: Push((int) 3)
0x763: @ irand(Stack[-6], Stack[-1])
0x764: Pop(1)
0x765: Push((int) 0)
0x766: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x767: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x768: Push(Stack[-7])
0x769: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x76a: @ irand(Stack[-4], Stack[-7])
0x76b: Pop(0)
0x76c: Push("all")
0x76d: PushEmpty(string, int)
0x76e: Stack[-1] = Stack[-7]
0x76f: Call2 0x10d7

0x770: Pop(1)
0x771: @ PlayAnimation(Stack[-2], Stack[-1])
0x772: Pop(2)
0x773: @ WaitForAnimEnd(Stack[-3])
0x774: Pop(0)
0x775: Pop(0); Push((bool) Stack[-3] == 0)
0x776: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x777: GOTO 0x795

0x778: GOTO 0x78a

0x779: Push((int) 1)
0x77a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x77b: IF (Stack[-1] == 0) GOTO 0x787; Pop(1)

0x77c: Push((int) 4)
0x77d: @ rand(Stack[-3], Stack[-1])
0x77e: Pop(1)
0x77f: Push((int) 1)
0x780: Pop(1); Push(Stack[-3] + Stack[-1]);
0x781: @ Sleep(Stack[-1], Stack[-2])
0x782: Pop(1)
0x783: Pop(0); Push((bool) Stack[-1] == 0)
0x784: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x785: GOTO 0x795

0x786: GOTO 0x78a

0x787: Push(Stack[-6])
0x788: IF (Stack[-1] == 0) GOTO 0x78a; Pop(1)

0x789: GOTO 0x795

0x78a: PushEmpty(bool)
0x78b: Call2 0x798

0x78c: Pop(0)
0x78d: Pop(1); Push((bool) Stack[-1] == 0)
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: GOTO 0x795

0x790: @ ResetAAS()
0x791: Pop(0)
0x792: Push((int) 1)
0x793: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x794: GOTO 0x757

0x795: @ ResetAAS()
0x796: Pop(0)
0x797: Return(); Pop(14)

0x798: Stack[-1] = (bool) 1
0x799: Return(); Pop(0)

0x79a: @ StopAnimation()
0x79b: Pop(0)
0x79c: @ StopGroup0()
0x79d: Pop(0)
0x79e: Return(); Pop(0)

0x79f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x7a0: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x7a1: PushEmpty()
0x7a2: Call2 0x7d2

0x7a3: Pop(0)
0x7a4: @ GetDirection(Stack[-3])
0x7a5: Pop(0)
0x7a6: PushEmpty(cvector, object)
0x7a7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a8: Call2 0xbd4

0x7a9: Stack[-4] = Stack[-2]
0x7aa: Pop(2)
0x7ab: PushEmpty(float, cvector, cvector)
0x7ac: Stack[-2] = Stack[-6]
0x7ad: Stack[-1] = Stack[-5]
0x7ae: Call2 0xda3

0x7af: Pop(2)
0x7b0: Push((int) 0)
0x7b1: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b3: PushEmpty(object)
0x7b4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b5: Call2 0xcb3

0x7b6: Pop(1)
0x7b7: Stack[-1] = (bool) 1
0x7b8: GOTO 0x7bc

0x7b9: Push((float)1.5)
0x7ba: @ Sleep(Stack[-1], Stack[-2])
0x7bb: Pop(1)
0x7bc: Push(Stack[-1])
0x7bd: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7be: PushEmpty(object)
0x7bf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c0: Call2 0xcb3

0x7c1: Pop(1)
0x7c2: Push((int) 111)
0x7c3: Push((float)0.5)
0x7c4: @ SetTimer(Stack[-2], Stack[-1])
0x7c5: Pop(2)
0x7c6: Push((float)5.0)
0x7c7: @ Sleep(Stack[-1])
0x7c8: Pop(1)
0x7c9: Push((int) 111)
0x7ca: @ KillTimer(Stack[-1])
0x7cb: Pop(1)
0x7cc: @ StopAsync()
0x7cd: Pop(0)
0x7ce: Push("head")
0x7cf: @ UnlookAsync(Stack[-1])
0x7d0: Pop(1)
0x7d1: Return(); Pop(6)

0x7d2: PushEmpty(object)
0x7d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d4: Call2 0xd37

0x7d5: Pop(1)
0x7d6: Return(); Pop(0)

0x7d7: PushEmpty(int, int)
0x7d8: PushEmpty(int, object)
0x7d9: Stack[-1] = Stack[-5]
0x7da: Call2 0x1170

0x7db: Stack[-3] = Stack[-2]
0x7dc: Pop(2)
0x7dd: Push((int) 0)
0x7de: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7df: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e0: Push((int) 1)
0x7e1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e6; Pop(1)

0x7e3: PushEmpty()
0x7e4: Call2 0x866

0x7e5: Pop(0)
0x7e6: PushEmpty(object)
0x7e7: Stack[-1] = Stack[-4]
0x7e8: Call2 0x1173

0x7e9: Pop(1)
0x7ea: Return(); Pop(2)

0x7eb: PushEmpty(int, int)
0x7ec: PushEmpty(object)
0x7ed: Stack[-1] = Stack[-4]
0x7ee: Call2 0x10ad

0x7ef: Pop(1)
0x7f0: PushEmpty(int, object)
0x7f1: Stack[-1] = Stack[-5]
0x7f2: Call2 0x1100

0x7f3: Stack[-3] = Stack[-2]
0x7f4: Pop(2)
0x7f5: Push((int) 0)
0x7f6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x802; Pop(1)

0x7f8: Push((int) 1)
0x7f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7fa: IF (Stack[-1] == 0) GOTO 0x7fe; Pop(1)

0x7fb: PushEmpty()
0x7fc: Call2 0x866

0x7fd: Pop(0)
0x7fe: PushEmpty(object)
0x7ff: Stack[-1] = Stack[-4]
0x800: Call2 0x110a

0x801: Pop(1)
0x802: Return(); Pop(2)

0x803: PushEmpty(int, int)
0x804: PushEmpty(bool, object, object, bool)
0x805: Stack[-3] = Stack[-9]
0x806: Stack[-2] = Stack[-8]
0x807: Stack[-1] = Stack[-7]
0x808: Call2 0x1288

0x809: Pop(3)
0x80a: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x80b: PushEmpty(int, object, bool)
0x80c: Stack[-2] = Stack[-8]
0x80d: Stack[-1] = Stack[-6]
0x80e: Call2 0x1112

0x80f: Stack[-4] = Stack[-3]
0x810: Pop(3)
0x811: Push((int) 0)
0x812: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x813: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x814: Push((int) 1)
0x815: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x816: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x817: PushEmpty()
0x818: Call2 0x866

0x819: Pop(0)
0x81a: PushEmpty(object)
0x81b: Stack[-1] = Stack[-6]
0x81c: Call2 0x111c

0x81d: Pop(1)
0x81e: Return(); Pop(2)

0x81f: PushEmpty(int, int)
0x820: PushEmpty(int, object)
0x821: Stack[-1] = Stack[-5]
0x822: Call2 0x1166

0x823: Stack[-3] = Stack[-2]
0x824: Pop(2)
0x825: Push((int) 0)
0x826: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x827: IF (Stack[-1] == 0) GOTO 0x832; Pop(1)

0x828: Push((int) 1)
0x829: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82b: PushEmpty()
0x82c: Call2 0x866

0x82d: Pop(0)
0x82e: PushEmpty(object)
0x82f: Stack[-1] = Stack[-4]
0x830: Call2 0x1169

0x831: Pop(1)
0x832: Return(); Pop(2)

0x833: PushEmpty(int, int)
0x834: PushEmpty(bool, object, string)
0x835: Stack[-2] = Stack[-7]
0x836: Stack[-1] = Stack[-6]
0x837: Call2 0x1057

0x838: Pop(2)
0x839: IF (Stack[-1] == 0) GOTO 0x843; Pop(1)

0x83a: PushEmpty()
0x83b: Call2 0x866

0x83c: Pop(0)
0x83d: PushEmpty(object, string)
0x83e: Stack[-2] = Stack[-6]
0x83f: Stack[-1] = Stack[-5]
0x840: Call2 0x1077

0x841: Pop(2)
0x842: GOTO 0x857

0x843: PushEmpty(int, string, object)
0x844: Stack[-2] = Stack[-6]
0x845: Stack[-1] = Stack[-7]
0x846: Call2 0x116b

0x847: Stack[-4] = Stack[-3]
0x848: Pop(3)
0x849: Push((int) 0)
0x84a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x84b: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x84c: Push((int) 1)
0x84d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x84e: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84f: PushEmpty()
0x850: Call2 0x866

0x851: Pop(0)
0x852: PushEmpty(string, object)
0x853: Stack[-2] = Stack[-5]
0x854: Stack[-1] = Stack[-6]
0x855: Call2 0x116e

0x856: Pop(2)
0x857: Return(); Pop(2)

0x858: PushEmpty()
0x859: PushEmpty(bool, string)
0x85a: Stack[-1] = Stack[-3]
0x85b: Call2 0x10ba

0x85c: Pop(1)
0x85d: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x85e: PushEmpty()
0x85f: Call2 0x866

0x860: Pop(0)
0x861: PushEmpty(string)
0x862: Stack[-1] = Stack[-2]
0x863: Call2 0x10ca

0x864: Pop(1)
0x865: Return(); Pop(0)

0x866: @ StopGroup0()
0x867: Pop(0)
0x868: @ StopAsync()
0x869: Pop(0)
0x86a: Push("head")
0x86b: @ UnlookAsync(Stack[-1])
0x86c: Pop(1)
0x86d: Push((int) 111)
0x86e: @ KillTimer(Stack[-1])
0x86f: Pop(1)
0x870: Return(); Pop(0)

0x871: PushEmpty()
0x872: PushEmpty()
0x873: Call2 0x866

0x874: Pop(0)
0x875: PushEmpty(object)
0x876: Stack[-1] = Stack[-2]
0x877: Call2 0x103f

0x878: Pop(1)
0x879: Return(); Pop(0)

0x87a: PushEmpty(cvector, cvector, cvector, cvector)
0x87b: Push((int) 111)
0x87c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x87f; Pop(1)

0x87e: Return(); Pop(4)

0x87f: PushEmpty(bool, object)
0x880: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x881: Call2 0xc1d

0x882: Pop(1)
0x883: Pop(1); Push((bool) Stack[-1] == 0)
0x884: IF (Stack[-1] == 0) GOTO 0x889; Pop(1)

0x885: PushEmpty()
0x886: Call2 0x866

0x887: Pop(0)
0x888: Return(); Pop(4)

0x889: @ GetDirection(Stack[-2])
0x88a: Pop(0)
0x88b: PushEmpty(cvector, object)
0x88c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x88d: Call2 0xbd4

0x88e: Stack[-3] = Stack[-2]
0x88f: Pop(2)
0x890: PushEmpty(float, cvector, cvector)
0x891: Stack[-2] = Stack[-5]
0x892: Stack[-1] = Stack[-4]
0x893: Call2 0xda3

0x894: Pop(2)
0x895: Push((float)0.5)
0x896: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x897: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x898: PushEmpty(object)
0x899: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x89a: Call2 0xcb3

0x89b: Pop(1)
0x89c: Return(); Pop(4)

0x89d: PushEmpty()
0x89e: Call2 0x866

0x89f: Pop(0)
0x8a0: PushEmpty()
0x8a1: Call2 0x1179

0x8a2: Pop(0)
0x8a3: Return(); Pop(0)

0x8a4: PushEmpty()
0x8a5: PushEmpty(bool, object)
0x8a6: Stack[-1] = Stack[-3]
0x8a7: Call2 0x1090

0x8a8: Pop(1)
0x8a9: IF (Stack[-1] == 0) GOTO 0x8b1; Pop(1)

0x8aa: PushEmpty()
0x8ab: Call2 0x866

0x8ac: Pop(0)
0x8ad: PushEmpty(object)
0x8ae: Stack[-1] = Stack[-2]
0x8af: Call2 0x10a7

0x8b0: Pop(1)
0x8b1: Return(); Pop(0)

0x8b2: PushEmpty()
0x8b3: @ Face(Stack[-1])
0x8b4: Pop(0)
0x8b5: Push("all")
0x8b6: Push("attack_on")
0x8b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b8: Pop(2)
0x8b9: @ WaitForAnimEnd()
0x8ba: Pop(0)
0x8bb: Push("all")
0x8bc: Push("attack_stay")
0x8bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x8be: Pop(2)
0x8bf: @ WaitForAnimEnd()
0x8c0: Pop(0)
0x8c1: Push("all")
0x8c2: Push("attack_off")
0x8c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x8c4: Pop(2)
0x8c5: @ WaitForAnimEnd()
0x8c6: Pop(0)
0x8c7: @ StopAsync()
0x8c8: Pop(0)
0x8c9: PushEmpty(object)
0x8ca: Stack[-1] = Stack[-2]
0x8cb: Call2 0x8f3

0x8cc: Pop(1)
0x8cd: Return(); Pop(0)

0x8ce: PushEmpty()
0x8cf: Call2 0x970

0x8d0: Pop(0)
0x8d1: PushEmpty()
0x8d2: Call2 0x1179

0x8d3: Pop(0)
0x8d4: Return(); Pop(0)

0x8d5: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x8d6: @ GetPosition(Stack[-6])
0x8d7: Pop(0)
0x8d8: @@ GetPosition(Stack[-5])
0x8d9: Pop(0)
0x8da: @ GetDirection(Stack[-4])
0x8db: Pop(0)
0x8dc: PushEmpty(cvector, cvector)
0x8dd: PushEmpty(cvector, cvector)
0x8de: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x8df: Call2 0xd78

0x8e0: Pop(1)
0x8e1: Push((float)0.75)
0x8e2: Pop(1); Push(Stack[-8] * Stack[-1]);
0x8e3: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x8e4: Call2 0xd78

0x8e5: Stack[-5] = Stack[-2]
0x8e6: Pop(2)
0x8e7: Push((int) 32)
0x8e8: Push((float)7000.0)
0x8e9: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x8ea: Pop(2)
0x8eb: Push((int) 100)
0x8ec: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x8ed: Push((int) 0)
0x8ee: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x8ef: IF (Stack[-1] == 0) GOTO 0x8f1; Pop(1)

0x8f0: Stack[-1] = (int) 0
0x8f1: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x8f2: Return(); Pop(12)

0x8f3: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x8f4: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x8f5: PushEmpty(cvector, float)
0x8f6: Stack[-1] = (float) 1.74533
0x8f7: Call2 0x8d5

0x8f8: Stack[-7] = Stack[-2]
0x8f9: Pop(2)
0x8fa: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x8fb: Push((float)2500.0)
0x8fc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x8fe: PushEmpty(cvector, float)
0x8ff: Stack[-1] = (float) 2.61799
0x900: Call2 0x8d5

0x901: Stack[-7] = Stack[-2]
0x902: Pop(2)
0x903: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x904: Push((float)2500.0)
0x905: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x906: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x907: Push("Can't retreat, distance: ")
0x908: Pop(0); Push(Sqrt(Stack[-5]))
0x909: Pop(2); Push(Stack[-2] + Stack[-1]);
0x90a: @ Trace(Stack[-1])
0x90b: Pop(1)
0x90c: Push((float)0.5)
0x90d: @ Sleep(Stack[-1])
0x90e: Pop(1)
0x90f: Return(); Pop(10)

0x910: Push(CvectorIndex(Stack[-5], 0))
0x911: Push(CvectorIndex(Stack[-6], 2))
0x912: @ Rotate(Stack[-2], Stack[-1])
0x913: Pop(2)
0x914: PushEmpty(cvector)
0x915: Call2 0xbcf

0x916: Pop(0)
0x917: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x918: Push((int) 120)
0x919: Push((float)0.5)
0x91a: @ SetTimer(Stack[-2], Stack[-1])
0x91b: Pop(2)
0x91c: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x91d: Push((int) 1)
0x91e: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x91f: Pop(1)
0x920: Push(Stack[-3])
0x921: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x922: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x923: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x924: GOTO 0x93b

0x925: GOTO 0x939

0x926: PushEmpty(cvector, float)
0x927: Stack[-1] = (float) 2.61799
0x928: Call2 0x8d5

0x929: Stack[-4] = Stack[-2]
0x92a: Pop(2)
0x92b: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x92c: Push((float)2500.0)
0x92d: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x92e: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x92f: PushEmpty(cvector)
0x930: Call2 0xbcf

0x931: Pop(0)
0x932: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x933: Push((int) 120)
0x934: Push((float)0.5)
0x935: @ SetTimer(Stack[-2], Stack[-1])
0x936: Pop(2)
0x937: GOTO 0x939

0x938: GOTO 0x93b

0x939: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x93a: IF (Stack[-1] == 0) GOTO 0x91d; Pop(1)

0x93b: Return(); Pop(10)

0x93c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x93d: Push((int) 120)
0x93e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x93f: IF (Stack[-1] == 0) GOTO 0x941; Pop(1)

0x940: Return(); Pop(8)

0x941: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x942: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x943: @ Stop()
0x944: Pop(0)
0x945: Push((int) 1)
0x946: @ KillTimer(Stack[-1])
0x947: Pop(1)
0x948: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x949: GOTO 0x96f

0x94a: @ GetDirection(Stack[-4])
0x94b: Pop(0)
0x94c: Push((float)7000.0)
0x94d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x94e: Pop(1)
0x94f: PushEmpty(cvector, float)
0x950: Stack[-1] = (float) 1.74533
0x951: Call2 0x8d5

0x952: Stack[-4] = Stack[-2]
0x953: Pop(2)
0x954: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x955: PushEmpty(bool)
0x956: Stack[-1] = (bool) 0
0x957: Push((float)2500.0)
0x958: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x959: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x95a: PushEmpty(bool)
0x95b: Stack[-1] = (bool) 1
0x95c: Pop(0); Push(Stack[-5] * Stack[-5]);
0x95d: Push((float)2.25)
0x95e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x95f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x961: PushEmpty(bool)
0x962: Call2 0x980

0x963: Pop(0)
0x964: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x965: Stack[-1] = (bool) 0
0x966: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x967: Stack[-1] = (bool) 1
0x968: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x969: @ Stop()
0x96a: Pop(0)
0x96b: PushEmpty(cvector)
0x96c: Call2 0xbcf

0x96d: Pop(0)
0x96e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x96f: Return(); Pop(8)

0x970: @ Stop()
0x971: Pop(0)
0x972: Push((int) 120)
0x973: @ KillTimer(Stack[-1])
0x974: Pop(1)
0x975: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x976: Return(); Pop(0)

0x977: PushEmpty()
0x978: PushEmpty()
0x979: Call2 0x970

0x97a: Pop(0)
0x97b: PushEmpty(object)
0x97c: Stack[-1] = Stack[-2]
0x97d: Call2 0x103f

0x97e: Pop(1)
0x97f: Return(); Pop(0)

0x980: PushEmpty(cvector, cvector, cvector, cvector)
0x981: @ GetDirection(Stack[-2])
0x982: Pop(0)
0x983: PushEmpty(cvector, object)
0x984: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x985: Call2 0xbd4

0x986: Stack[-3] = Stack[-2]
0x987: Pop(2)
0x988: PushEmpty(float, cvector, cvector)
0x989: Stack[-2] = Stack[-5]
0x98a: Stack[-1] = Stack[-4]
0x98b: Call2 0xd88

0x98c: Pop(2)
0x98d: Push((float)-0.34202)
0x98e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x98f: Return(); Pop(4)

0x990: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x991: @ GetPosition(Stack[-6])
0x992: Pop(0)
0x993: @@ GetPosition(Stack[-5])
0x994: Pop(0)
0x995: @ GetDirection(Stack[-4])
0x996: Pop(0)
0x997: PushEmpty(cvector, cvector)
0x998: PushEmpty(cvector, cvector)
0x999: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x99a: Call2 0xd78

0x99b: Pop(1)
0x99c: Push((float)0.75)
0x99d: Pop(1); Push(Stack[-8] * Stack[-1]);
0x99e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x99f: Call2 0xd78

0x9a0: Stack[-5] = Stack[-2]
0x9a1: Pop(2)
0x9a2: Push((int) 32)
0x9a3: Push((float)7000.0)
0x9a4: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x9a5: Pop(2)
0x9a6: Push((int) 100)
0x9a7: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x9a8: Push((int) 0)
0x9a9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9ab: Stack[-1] = (int) 0
0x9ac: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x9ad: Return(); Pop(12)

0x9ae: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x9af: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x9b0: PushEmpty(cvector, float)
0x9b1: Stack[-1] = (float) 1.74533
0x9b2: Call2 0x990

0x9b3: Stack[-7] = Stack[-2]
0x9b4: Pop(2)
0x9b5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x9b6: Push((float)2500.0)
0x9b7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x9b8: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9b9: PushEmpty(cvector, float)
0x9ba: Stack[-1] = (float) 2.61799
0x9bb: Call2 0x990

0x9bc: Stack[-7] = Stack[-2]
0x9bd: Pop(2)
0x9be: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x9bf: Push((float)2500.0)
0x9c0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x9c1: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c2: Push("Can't retreat, distance: ")
0x9c3: Pop(0); Push(Sqrt(Stack[-5]))
0x9c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x9c5: @ Trace(Stack[-1])
0x9c6: Pop(1)
0x9c7: Push((float)0.5)
0x9c8: @ Sleep(Stack[-1])
0x9c9: Pop(1)
0x9ca: Return(); Pop(10)

0x9cb: Push(CvectorIndex(Stack[-5], 0))
0x9cc: Push(CvectorIndex(Stack[-6], 2))
0x9cd: @ Rotate(Stack[-2], Stack[-1])
0x9ce: Pop(2)
0x9cf: PushEmpty(cvector)
0x9d0: Call2 0xbcf

0x9d1: Pop(0)
0x9d2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x9d3: Push((int) 120)
0x9d4: Push((float)0.5)
0x9d5: @ SetTimer(Stack[-2], Stack[-1])
0x9d6: Pop(2)
0x9d7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x9d8: Push((int) 1)
0x9d9: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x9da: Pop(1)
0x9db: Push(Stack[-3])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9f4; Pop(1)

0x9dd: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9de: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9df: GOTO 0x9f6

0x9e0: GOTO 0x9f4

0x9e1: PushEmpty(cvector, float)
0x9e2: Stack[-1] = (float) 2.61799
0x9e3: Call2 0x990

0x9e4: Stack[-4] = Stack[-2]
0x9e5: Pop(2)
0x9e6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x9e7: Push((float)2500.0)
0x9e8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x9e9: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9ea: PushEmpty(cvector)
0x9eb: Call2 0xbcf

0x9ec: Pop(0)
0x9ed: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x9ee: Push((int) 120)
0x9ef: Push((float)0.5)
0x9f0: @ SetTimer(Stack[-2], Stack[-1])
0x9f1: Pop(2)
0x9f2: GOTO 0x9f4

0x9f3: GOTO 0x9f6

0x9f4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x9f5: IF (Stack[-1] == 0) GOTO 0x9d8; Pop(1)

0x9f6: Return(); Pop(10)

0x9f7: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x9f8: Push((int) 120)
0x9f9: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x9fa: IF (Stack[-1] == 0) GOTO 0x9fc; Pop(1)

0x9fb: Return(); Pop(8)

0x9fc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x9fd: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0x9fe: @ Stop()
0x9ff: Pop(0)
0xa00: Push((int) 1)
0xa01: @ KillTimer(Stack[-1])
0xa02: Pop(1)
0xa03: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa04: GOTO 0xa2a

0xa05: @ GetDirection(Stack[-4])
0xa06: Pop(0)
0xa07: Push((float)7000.0)
0xa08: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xa09: Pop(1)
0xa0a: PushEmpty(cvector, float)
0xa0b: Stack[-1] = (float) 1.74533
0xa0c: Call2 0x990

0xa0d: Stack[-4] = Stack[-2]
0xa0e: Pop(2)
0xa0f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xa10: PushEmpty(bool)
0xa11: Stack[-1] = (bool) 0
0xa12: Push((float)2500.0)
0xa13: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xa14: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa15: PushEmpty(bool)
0xa16: Stack[-1] = (bool) 1
0xa17: Pop(0); Push(Stack[-5] * Stack[-5]);
0xa18: Push((float)2.25)
0xa19: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa1a: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xa1b: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa1c: PushEmpty(bool)
0xa1d: Call2 0xa3b

0xa1e: Pop(0)
0xa1f: IF (Stack[-1] == 0) GOTO 0xa21; Pop(1)

0xa20: Stack[-1] = (bool) 0
0xa21: IF (Stack[-1] == 0) GOTO 0xa23; Pop(1)

0xa22: Stack[-1] = (bool) 1
0xa23: IF (Stack[-1] == 0) GOTO 0xa2a; Pop(1)

0xa24: @ Stop()
0xa25: Pop(0)
0xa26: PushEmpty(cvector)
0xa27: Call2 0xbcf

0xa28: Pop(0)
0xa29: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xa2a: Return(); Pop(8)

0xa2b: @ Stop()
0xa2c: Pop(0)
0xa2d: Push((int) 120)
0xa2e: @ KillTimer(Stack[-1])
0xa2f: Pop(1)
0xa30: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa31: Return(); Pop(0)

0xa32: PushEmpty()
0xa33: PushEmpty()
0xa34: Call2 0xa2b

0xa35: Pop(0)
0xa36: PushEmpty(object)
0xa37: Stack[-1] = Stack[-2]
0xa38: Call2 0x103f

0xa39: Pop(1)
0xa3a: Return(); Pop(0)

0xa3b: PushEmpty(cvector, cvector, cvector, cvector)
0xa3c: @ GetDirection(Stack[-2])
0xa3d: Pop(0)
0xa3e: PushEmpty(cvector, object)
0xa3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa40: Call2 0xbd4

0xa41: Stack[-3] = Stack[-2]
0xa42: Pop(2)
0xa43: PushEmpty(float, cvector, cvector)
0xa44: Stack[-2] = Stack[-5]
0xa45: Stack[-1] = Stack[-4]
0xa46: Call2 0xd88

0xa47: Pop(2)
0xa48: Push((float)-0.34202)
0xa49: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xa4a: Return(); Pop(4)

0xa4b: PushEmpty()
0xa4c: Call2 0xaed

0xa4d: Pop(0)
0xa4e: PushEmpty()
0xa4f: Call2 0x1179

0xa50: Pop(0)
0xa51: Return(); Pop(0)

0xa52: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xa53: @ GetPosition(Stack[-6])
0xa54: Pop(0)
0xa55: @@ GetPosition(Stack[-5])
0xa56: Pop(0)
0xa57: @ GetDirection(Stack[-4])
0xa58: Pop(0)
0xa59: PushEmpty(cvector, cvector)
0xa5a: PushEmpty(cvector, cvector)
0xa5b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xa5c: Call2 0xd78

0xa5d: Pop(1)
0xa5e: Push((float)0.75)
0xa5f: Pop(1); Push(Stack[-8] * Stack[-1]);
0xa60: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xa61: Call2 0xd78

0xa62: Stack[-5] = Stack[-2]
0xa63: Pop(2)
0xa64: Push((int) 32)
0xa65: Push((float)7000.0)
0xa66: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xa67: Pop(2)
0xa68: Push((int) 100)
0xa69: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xa6a: Push((int) 0)
0xa6b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa6d: Stack[-1] = (int) 0
0xa6e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xa6f: Return(); Pop(12)

0xa70: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xa71: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xa72: PushEmpty(cvector, float)
0xa73: Stack[-1] = (float) 1.74533
0xa74: Call2 0xa52

0xa75: Stack[-7] = Stack[-2]
0xa76: Pop(2)
0xa77: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa78: Push((float)2500.0)
0xa79: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa7b: PushEmpty(cvector, float)
0xa7c: Stack[-1] = (float) 2.61799
0xa7d: Call2 0xa52

0xa7e: Stack[-7] = Stack[-2]
0xa7f: Pop(2)
0xa80: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xa81: Push((float)2500.0)
0xa82: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xa83: IF (Stack[-1] == 0) GOTO 0xa8d; Pop(1)

0xa84: Push("Can't retreat, distance: ")
0xa85: Pop(0); Push(Sqrt(Stack[-5]))
0xa86: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa87: @ Trace(Stack[-1])
0xa88: Pop(1)
0xa89: Push((float)0.5)
0xa8a: @ Sleep(Stack[-1])
0xa8b: Pop(1)
0xa8c: Return(); Pop(10)

0xa8d: Push(CvectorIndex(Stack[-5], 0))
0xa8e: Push(CvectorIndex(Stack[-6], 2))
0xa8f: @ Rotate(Stack[-2], Stack[-1])
0xa90: Pop(2)
0xa91: PushEmpty(cvector)
0xa92: Call2 0xbcf

0xa93: Pop(0)
0xa94: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xa95: Push((int) 120)
0xa96: Push((float)0.5)
0xa97: @ SetTimer(Stack[-2], Stack[-1])
0xa98: Pop(2)
0xa99: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa9a: Push((int) 1)
0xa9b: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xa9c: Pop(1)
0xa9d: Push(Stack[-3])
0xa9e: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xa9f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa3; Pop(1)

0xaa1: GOTO 0xab8

0xaa2: GOTO 0xab6

0xaa3: PushEmpty(cvector, float)
0xaa4: Stack[-1] = (float) 2.61799
0xaa5: Call2 0xa52

0xaa6: Stack[-4] = Stack[-2]
0xaa7: Pop(2)
0xaa8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xaa9: Push((float)2500.0)
0xaaa: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xaab: IF (Stack[-1] == 0) GOTO 0xab5; Pop(1)

0xaac: PushEmpty(cvector)
0xaad: Call2 0xbcf

0xaae: Pop(0)
0xaaf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xab0: Push((int) 120)
0xab1: Push((float)0.5)
0xab2: @ SetTimer(Stack[-2], Stack[-1])
0xab3: Pop(2)
0xab4: GOTO 0xab6

0xab5: GOTO 0xab8

0xab6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xab7: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xab8: Return(); Pop(10)

0xab9: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xaba: Push((int) 120)
0xabb: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xabc: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xabd: Return(); Pop(8)

0xabe: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xabf: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac0: @ Stop()
0xac1: Pop(0)
0xac2: Push((int) 1)
0xac3: @ KillTimer(Stack[-1])
0xac4: Pop(1)
0xac5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xac6: GOTO 0xaec

0xac7: @ GetDirection(Stack[-4])
0xac8: Pop(0)
0xac9: Push((float)7000.0)
0xaca: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xacb: Pop(1)
0xacc: PushEmpty(cvector, float)
0xacd: Stack[-1] = (float) 1.74533
0xace: Call2 0xa52

0xacf: Stack[-4] = Stack[-2]
0xad0: Pop(2)
0xad1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xad2: PushEmpty(bool)
0xad3: Stack[-1] = (bool) 0
0xad4: Push((float)2500.0)
0xad5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xad6: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xad7: PushEmpty(bool)
0xad8: Stack[-1] = (bool) 1
0xad9: Pop(0); Push(Stack[-5] * Stack[-5]);
0xada: Push((float)2.25)
0xadb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xadc: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xadd: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xade: PushEmpty(bool)
0xadf: Call2 0xafd

0xae0: Pop(0)
0xae1: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xae2: Stack[-1] = (bool) 0
0xae3: IF (Stack[-1] == 0) GOTO 0xae5; Pop(1)

0xae4: Stack[-1] = (bool) 1
0xae5: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xae6: @ Stop()
0xae7: Pop(0)
0xae8: PushEmpty(cvector)
0xae9: Call2 0xbcf

0xaea: Pop(0)
0xaeb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xaec: Return(); Pop(8)

0xaed: @ Stop()
0xaee: Pop(0)
0xaef: Push((int) 120)
0xaf0: @ KillTimer(Stack[-1])
0xaf1: Pop(1)
0xaf2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xaf3: Return(); Pop(0)

0xaf4: PushEmpty()
0xaf5: PushEmpty()
0xaf6: Call2 0xaed

0xaf7: Pop(0)
0xaf8: PushEmpty(object)
0xaf9: Stack[-1] = Stack[-2]
0xafa: Call2 0x103f

0xafb: Pop(1)
0xafc: Return(); Pop(0)

0xafd: PushEmpty(cvector, cvector, cvector, cvector)
0xafe: @ GetDirection(Stack[-2])
0xaff: Pop(0)
0xb00: PushEmpty(cvector, object)
0xb01: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb02: Call2 0xbd4

0xb03: Stack[-3] = Stack[-2]
0xb04: Pop(2)
0xb05: PushEmpty(float, cvector, cvector)
0xb06: Stack[-2] = Stack[-5]
0xb07: Stack[-1] = Stack[-4]
0xb08: Call2 0xd88

0xb09: Pop(2)
0xb0a: Push((float)-0.34202)
0xb0b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xb0c: Return(); Pop(4)

0xb0d: PushEmpty()
0xb0e: Call2 0xbaf

0xb0f: Pop(0)
0xb10: PushEmpty()
0xb11: Call2 0x1179

0xb12: Pop(0)
0xb13: Return(); Pop(0)

0xb14: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xb15: @ GetPosition(Stack[-6])
0xb16: Pop(0)
0xb17: @@ GetPosition(Stack[-5])
0xb18: Pop(0)
0xb19: @ GetDirection(Stack[-4])
0xb1a: Pop(0)
0xb1b: PushEmpty(cvector, cvector)
0xb1c: PushEmpty(cvector, cvector)
0xb1d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xb1e: Call2 0xd78

0xb1f: Pop(1)
0xb20: Push((float)0.75)
0xb21: Pop(1); Push(Stack[-8] * Stack[-1]);
0xb22: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb23: Call2 0xd78

0xb24: Stack[-5] = Stack[-2]
0xb25: Pop(2)
0xb26: Push((int) 32)
0xb27: Push((float)7000.0)
0xb28: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xb29: Pop(2)
0xb2a: Push((int) 100)
0xb2b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xb2c: Push((int) 0)
0xb2d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb2e: IF (Stack[-1] == 0) GOTO 0xb30; Pop(1)

0xb2f: Stack[-1] = (int) 0
0xb30: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xb31: Return(); Pop(12)

0xb32: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xb33: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xb34: PushEmpty(cvector, float)
0xb35: Stack[-1] = (float) 1.74533
0xb36: Call2 0xb14

0xb37: Stack[-7] = Stack[-2]
0xb38: Pop(2)
0xb39: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb3a: Push((float)2500.0)
0xb3b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb3d: PushEmpty(cvector, float)
0xb3e: Stack[-1] = (float) 2.61799
0xb3f: Call2 0xb14

0xb40: Stack[-7] = Stack[-2]
0xb41: Pop(2)
0xb42: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb43: Push((float)2500.0)
0xb44: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb45: IF (Stack[-1] == 0) GOTO 0xb4f; Pop(1)

0xb46: Push("Can't retreat, distance: ")
0xb47: Pop(0); Push(Sqrt(Stack[-5]))
0xb48: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb49: @ Trace(Stack[-1])
0xb4a: Pop(1)
0xb4b: Push((float)0.5)
0xb4c: @ Sleep(Stack[-1])
0xb4d: Pop(1)
0xb4e: Return(); Pop(10)

0xb4f: Push(CvectorIndex(Stack[-5], 0))
0xb50: Push(CvectorIndex(Stack[-6], 2))
0xb51: @ Rotate(Stack[-2], Stack[-1])
0xb52: Pop(2)
0xb53: PushEmpty(cvector)
0xb54: Call2 0xbcf

0xb55: Pop(0)
0xb56: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xb57: Push((int) 120)
0xb58: Push((float)0.5)
0xb59: @ SetTimer(Stack[-2], Stack[-1])
0xb5a: Pop(2)
0xb5b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xb5c: Push((int) 1)
0xb5d: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xb5e: Pop(1)
0xb5f: Push(Stack[-3])
0xb60: IF (Stack[-1] == 0) GOTO 0xb78; Pop(1)

0xb61: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb62: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb63: GOTO 0xb7a

0xb64: GOTO 0xb78

0xb65: PushEmpty(cvector, float)
0xb66: Stack[-1] = (float) 2.61799
0xb67: Call2 0xb14

0xb68: Stack[-4] = Stack[-2]
0xb69: Pop(2)
0xb6a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb6b: Push((float)2500.0)
0xb6c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xb6d: IF (Stack[-1] == 0) GOTO 0xb77; Pop(1)

0xb6e: PushEmpty(cvector)
0xb6f: Call2 0xbcf

0xb70: Pop(0)
0xb71: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb72: Push((int) 120)
0xb73: Push((float)0.5)
0xb74: @ SetTimer(Stack[-2], Stack[-1])
0xb75: Pop(2)
0xb76: GOTO 0xb78

0xb77: GOTO 0xb7a

0xb78: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xb79: IF (Stack[-1] == 0) GOTO 0xb5c; Pop(1)

0xb7a: Return(); Pop(10)

0xb7b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xb7c: Push((int) 120)
0xb7d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xb7e: IF (Stack[-1] == 0) GOTO 0xb80; Pop(1)

0xb7f: Return(); Pop(8)

0xb80: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb81: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb82: @ Stop()
0xb83: Pop(0)
0xb84: Push((int) 1)
0xb85: @ KillTimer(Stack[-1])
0xb86: Pop(1)
0xb87: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb88: GOTO 0xbae

0xb89: @ GetDirection(Stack[-4])
0xb8a: Pop(0)
0xb8b: Push((float)7000.0)
0xb8c: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xb8d: Pop(1)
0xb8e: PushEmpty(cvector, float)
0xb8f: Stack[-1] = (float) 1.74533
0xb90: Call2 0xb14

0xb91: Stack[-4] = Stack[-2]
0xb92: Pop(2)
0xb93: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb94: PushEmpty(bool)
0xb95: Stack[-1] = (bool) 0
0xb96: Push((float)2500.0)
0xb97: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb98: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb99: PushEmpty(bool)
0xb9a: Stack[-1] = (bool) 1
0xb9b: Pop(0); Push(Stack[-5] * Stack[-5]);
0xb9c: Push((float)2.25)
0xb9d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb9e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xb9f: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba0: PushEmpty(bool)
0xba1: Call2 0xbbf

0xba2: Pop(0)
0xba3: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba4: Stack[-1] = (bool) 0
0xba5: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xba6: Stack[-1] = (bool) 1
0xba7: IF (Stack[-1] == 0) GOTO 0xbae; Pop(1)

0xba8: @ Stop()
0xba9: Pop(0)
0xbaa: PushEmpty(cvector)
0xbab: Call2 0xbcf

0xbac: Pop(0)
0xbad: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xbae: Return(); Pop(8)

0xbaf: @ Stop()
0xbb0: Pop(0)
0xbb1: Push((int) 120)
0xbb2: @ KillTimer(Stack[-1])
0xbb3: Pop(1)
0xbb4: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xbb5: Return(); Pop(0)

0xbb6: PushEmpty()
0xbb7: PushEmpty()
0xbb8: Call2 0xbaf

0xbb9: Pop(0)
0xbba: PushEmpty(object)
0xbbb: Stack[-1] = Stack[-2]
0xbbc: Call2 0x103f

0xbbd: Pop(1)
0xbbe: Return(); Pop(0)

0xbbf: PushEmpty(cvector, cvector, cvector, cvector)
0xbc0: @ GetDirection(Stack[-2])
0xbc1: Pop(0)
0xbc2: PushEmpty(cvector, object)
0xbc3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbc4: Call2 0xbd4

0xbc5: Stack[-3] = Stack[-2]
0xbc6: Pop(2)
0xbc7: PushEmpty(float, cvector, cvector)
0xbc8: Stack[-2] = Stack[-5]
0xbc9: Stack[-1] = Stack[-4]
0xbca: Call2 0xd88

0xbcb: Pop(2)
0xbcc: Push((float)-0.34202)
0xbcd: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xbce: Return(); Pop(4)

0xbcf: PushEmpty(cvector, cvector)
0xbd0: @ GetPosition(Stack[-1])
0xbd1: Pop(0)
0xbd2: Stack[-3] = Stack[-1]
0xbd3: Return(); Pop(2)

0xbd4: PushEmpty(cvector, cvector, cvector, cvector)
0xbd5: @ GetPosition(Stack[-2])
0xbd6: Pop(0)
0xbd7: @@ GetPosition(Stack[-1])
0xbd8: Pop(0)
0xbd9: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xbda: Return(); Pop(4)

0xbdb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbdc: @ GetPosition(Stack[-3])
0xbdd: Pop(0)
0xbde: @@ GetPosition(Stack[-2])
0xbdf: Pop(0)
0xbe0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbe1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbe2: Return(); Pop(6)

0xbe3: PushEmpty(bool, bool)
0xbe4: @ IsPlayerActor(Stack[-3], Stack[-1])
0xbe5: Pop(0)
0xbe6: Stack[-4] = Stack[-1]
0xbe7: Return(); Pop(2)

0xbe8: PushEmpty(bool, bool)
0xbe9: Push("HasProperty")
0xbea: Push((int) 2)
0xbeb: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xbec: Pop(1); Push((bool) Stack[-1] == 0)
0xbed: IF (Stack[-1] == 0) GOTO 0xbf0; Pop(1)

0xbee: Stack[-5] = (bool) 0
0xbef: Return(); Pop(2)

0xbf0: @@ HasProperty(Stack[-3], Stack[-1])
0xbf1: Pop(0)
0xbf2: Stack[-5] = Stack[-1]
0xbf3: Return(); Pop(2)

0xbf4: PushEmpty(bool, bool)
0xbf5: @@ IsDead(Stack[-1])
0xbf6: Pop(0)
0xbf7: Stack[-4] = Stack[-1]
0xbf8: Return(); Pop(2)

0xbf9: PushEmpty(object, object, object, object)
0xbfa: Pop(0); Push((bool) Stack[-5] == 0)
0xbfb: IF (Stack[-1] == 0) GOTO 0xbfe; Pop(1)

0xbfc: Stack[-6] = (bool) 0
0xbfd: Return(); Pop(4)

0xbfe: PushEmpty(bool)
0xbff: Stack[-1] = (bool) 0
0xc00: Push("IsDead")
0xc01: Push((int) 1)
0xc02: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xc03: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc04: PushEmpty(bool, object)
0xc05: Stack[-1] = Stack[-8]
0xc06: Call2 0xbf4

0xc07: Pop(1)
0xc08: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc09: Stack[-1] = (bool) 1
0xc0a: IF (Stack[-1] == 0) GOTO 0xc0d; Pop(1)

0xc0b: Stack[-6] = (bool) 0
0xc0c: Return(); Pop(4)

0xc0d: @ GetScene(Stack[-2])
0xc0e: Pop(0)
0xc0f: Pop(0); Push((bool) Stack[-2] == 0)
0xc10: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc11: Stack[-6] = (bool) 0
0xc12: Return(); Pop(4)

0xc13: @@ GetScene(Stack[-1])
0xc14: Pop(0)
0xc15: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc17: Stack[-6] = (bool) 0
0xc18: Return(); Pop(4)

0xc19: Stack[-6] = (bool) 1
0xc1a: Return(); Pop(4)

0xc1b: Stack[-1] = 0
0xc1c: Stack[-2] = 0
0xc1d: PushEmpty(int, int)
0xc1e: PushEmpty(bool, object)
0xc1f: Stack[-1] = Stack[-5]
0xc20: Call2 0xbf9

0xc21: Pop(1)
0xc22: Pop(1); Push((bool) Stack[-1] == 0)
0xc23: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc24: Stack[-4] = (bool) 0
0xc25: Return(); Pop(2)

0xc26: PushEmpty(bool, object, string)
0xc27: Stack[-2] = Stack[-6]
0xc28: Stack[-1] = "noaccess"
0xc29: Call2 0xbe8

0xc2a: Pop(2)
0xc2b: Pop(1); Push((bool) Stack[-1] == 0)
0xc2c: IF (Stack[-1] == 0) GOTO 0xc2f; Pop(1)

0xc2d: Stack[-4] = (bool) 1
0xc2e: Return(); Pop(2)

0xc2f: Push("noaccess")
0xc30: @@ GetProperty(Stack[-1], Stack[-2])
0xc31: Pop(1)
0xc32: Push((int) 0)
0xc33: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xc34: Return(); Pop(2)

0xc35: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xc36: Pop(0); Push((bool) Stack[-15] == 0)
0xc37: IF (Stack[-1] == 0) GOTO 0xc39; Pop(1)

0xc38: Return(); Pop(14)

0xc39: @ IsDead(Stack[-7])
0xc3a: Pop(0)
0xc3b: Push(Stack[-7])
0xc3c: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc3d: Return(); Pop(14)

0xc3e: @ GetSecondaryAnimationType(Stack[-6])
0xc3f: Pop(0)
0xc40: Push((int) 0)
0xc41: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xc42: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xc43: Return(); Pop(14)

0xc44: @@ GetPosition(Stack[-5])
0xc45: Pop(0)
0xc46: @ GetPosition(Stack[-4])
0xc47: Pop(0)
0xc48: @ GetDirection(Stack[-3])
0xc49: Pop(0)
0xc4a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xc4b: Push(CvectorIndex(Stack[-2], 0))
0xc4c: Push(CvectorIndex(Stack[-4], 0))
0xc4d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc4e: Push(CvectorIndex(Stack[-3], 2))
0xc4f: Push(CvectorIndex(Stack[-5], 2))
0xc50: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc51: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc52: Push((int) 0)
0xc53: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc57; Pop(1)

0xc55: Stack[-1] = "fhit"
0xc56: GOTO 0xc58

0xc57: Stack[-1] = "bhit"
0xc58: Push("hit_react")
0xc59: Push("1")
0xc5a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xc5b: Push("2")
0xc5c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xc5d: Push((int) -10)
0xc5e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xc5f: Pop(4)
0xc60: Return(); Pop(14)

0xc61: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xc62: PushEmpty(bool)
0xc63: Stack[-1] = (bool) 0
0xc64: PushEmpty(bool)
0xc65: Stack[-1] = (bool) 0
0xc66: Push(Stack[-23])
0xc67: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc68: Push((int) 4)
0xc69: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xc6a: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc6b: Stack[-1] = (bool) 1
0xc6c: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc6d: Push((int) 5)
0xc6e: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xc6f: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc70: Stack[-1] = (bool) 1
0xc71: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc72: PushEmpty(cvector, cvector)
0xc73: PushEmpty(cvector, object)
0xc74: Stack[-1] = Stack[-25]
0xc75: Call2 0xbd4

0xc76: Stack[-3] = Stack[-2]
0xc77: Pop(2)
0xc78: Call2 0xd78

0xc79: Stack[-11] = Stack[-2]
0xc7a: Pop(2)
0xc7b: @ CreateVectorVector(Stack[-8])
0xc7c: Pop(0)
0xc7d: Stack[-7] = (int) 1
0xc7e: Push("hit")
0xc7f: Pop(1); Push(Stack[-1] + Stack[-8]);
0xc80: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xc81: Pop(1)
0xc82: Pop(0); Push((bool) Stack[-6] == 0)
0xc83: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc84: GOTO 0xc8e

0xc85: Pop(0); Push(Stack[-4] | Stack[-9]);
0xc86: Push((float)0.70711)
0xc87: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xc88: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc89: @@ add(Stack[-5])
0xc8a: Pop(0)
0xc8b: Push((int) 1)
0xc8c: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xc8d: GOTO 0xc7e

0xc8e: @@ size(Stack[-3])
0xc8f: Pop(0)
0xc90: Push(Stack[-3])
0xc91: IF (Stack[-1] == 0) GOTO 0xc9f; Pop(1)

0xc92: @ irand(Stack[-2], Stack[-3])
0xc93: Pop(0)
0xc94: @@ get(Stack[-1], Stack[-2])
0xc95: Pop(0)
0xc96: PushEmpty(object, int, float, cvector, cvector)
0xc97: Stack[-5] = Stack[-26]
0xc98: Stack[-4] = Stack[-25]
0xc99: Stack[-3] = Stack[-24]
0xc9a: Stack[-2] = Stack[-6]
0xc9b: Stack[-1] = -Stack[-14]; Pop(0);
0xc9c: Call2 0xca5

0xc9d: Pop(5)
0xc9e: Return(); Pop(18)

0xc9f: Stack[-8] = 0
0xca0: PushEmpty(object)
0xca1: Stack[-1] = Stack[-22]
0xca2: Call2 0xc35

0xca3: Pop(1)
0xca4: Return(); Pop(18)

0xca5: PushEmpty(object, object, object, object)
0xca6: @ GetScene(Stack[-2])
0xca7: Pop(0)
0xca8: Push("scripted")
0xca9: Push("blood_dir.xml")
0xcaa: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xcab: Pop(2)
0xcac: PushEmpty(object)
0xcad: Stack[-1] = Stack[-10]
0xcae: Call2 0xc35

0xcaf: Pop(1)
0xcb0: Return(); Pop(4)

0xcb1: Stack[-1] = 0
0xcb2: Stack[-2] = 0
0xcb3: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xcb4: @@ GetPosition(Stack[-3])
0xcb5: Pop(0)
0xcb6: @ GetPosition(Stack[-2])
0xcb7: Pop(0)
0xcb8: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xcb9: Push(CvectorIndex(Stack[-1], 0))
0xcba: Push(CvectorIndex(Stack[-2], 2))
0xcbb: @ RotateAsync(Stack[-2], Stack[-1])
0xcbc: Pop(2)
0xcbd: Return(); Pop(6)

0xcbe: PushEmpty(bool, bool)
0xcbf: @ IsLoaded(Stack[-1])
0xcc0: Pop(0)
0xcc1: Stack[-3] = Stack[-1]
0xcc2: Return(); Pop(2)

0xcc3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xcc4: @@ GetPosition(Stack[-8])
0xcc5: Pop(0)
0xcc6: @@ GetEyesHeight(Stack[-9])
0xcc7: Pop(0)
0xcc8: Push(CvectorIndex(Stack[-8], 1))
0xcc9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xcca: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xccb: @ GetPosition(Stack[-7])
0xccc: Pop(0)
0xccd: @ GetEyesHeight(Stack[-9])
0xcce: Pop(0)
0xccf: Push(CvectorIndex(Stack[-7], 1))
0xcd0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xcd1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xcd2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xcd3: Push(CvectorIndex(Stack[-6], 1))
0xcd4: Stack[-1] = (int) 0
0xcd5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xcd6: Pop(0); Push(Stack[-6] | Stack[-6]);
0xcd7: Pop(1); Push(Sqrt(Stack[-1]))
0xcd8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xcd9: Stack[-5] = -Stack[-6]; Pop(0);
0xcda: Pop(0); Push(Stack[-6] * Stack[-19]);
0xcdb: PushEmpty(cvector, cvector)
0xcdc: Push(CVector(0.0, 1.0, 0.0))
0xcdd: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xcde: Call2 0xd78

0xcdf: Pop(1)
0xce0: Push((int) 25)
0xce1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xce2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xce3: Push(CVector(0.0, 10.0, 0.0))
0xce4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xce5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xce6: @ IsOverrideActive(Stack[-2])
0xce7: Pop(0)
0xce8: Push(Stack[-2])
0xce9: IF (Stack[-1] == 0) GOTO 0xcec; Pop(1)

0xcea: Stack[-21] = (bool) 0
0xceb: Return(); Pop(18)

0xcec: @ StopWorld()
0xced: Pop(0)
0xcee: @ CameraTransit(Stack[-3], Stack[-5])
0xcef: Pop(0)
0xcf0: Push(CvectorIndex(Stack[-4], 0))
0xcf1: Push(CvectorIndex(Stack[-5], 2))
0xcf2: @ Rotate(Stack[-2], Stack[-1])
0xcf3: Pop(2)
0xcf4: PushEmpty(bool)
0xcf5: Call2 0x126a

0xcf6: Pop(0)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcf9; Pop(1)

0xcf8: GOTO 0xd01

0xcf9: Push("head")
0xcfa: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xcfb: Pop(1)
0xcfc: Push(Stack[-1])
0xcfd: IF (Stack[-1] == 0) GOTO 0xd01; Pop(1)

0xcfe: Push("head")
0xcff: @ LookAsyncCamera(Stack[-1])
0xd00: Pop(1)
0xd01: @ CameraWaitForPlayFinish()
0xd02: Pop(0)
0xd03: @ ResumeWorld()
0xd04: Pop(0)
0xd05: Stack[-21] = (bool) 1
0xd06: Return(); Pop(18)

0xd07: PushEmpty(bool, bool)
0xd08: @ CameraSwitchToNormal()
0xd09: Pop(0)
0xd0a: PushEmpty(bool)
0xd0b: Call2 0x126a

0xd0c: Pop(0)
0xd0d: IF (Stack[-1] == 0) GOTO 0xd0f; Pop(1)

0xd0e: GOTO 0xd17

0xd0f: Push("head")
0xd10: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xd11: Pop(1)
0xd12: Push(Stack[-1])
0xd13: IF (Stack[-1] == 0) GOTO 0xd17; Pop(1)

0xd14: Push("head")
0xd15: @ UnlookAsync(Stack[-1])
0xd16: Pop(1)
0xd17: Return(); Pop(2)

0xd18: PushEmpty(bool, float, float, bool, float, float)
0xd19: @ lshHasAnimation(Stack[-3], Stack[-7])
0xd1a: Pop(0)
0xd1b: Push(Stack[-3])
0xd1c: IF (Stack[-1] == 0) GOTO 0xd23; Pop(1)

0xd1d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xd1e: Pop(0)
0xd1f: Push((bool) 0)
0xd20: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd21: Pop(1)
0xd22: GOTO 0xd27

0xd23: Push("Can't find lsh animation : ")
0xd24: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd25: @ Trace(Stack[-1])
0xd26: Pop(1)
0xd27: Return(); Pop(6)

0xd28: PushEmpty(bool, float, float, bool, float, float)
0xd29: @ lshHasAnimation(Stack[-3], Stack[-8])
0xd2a: Pop(0)
0xd2b: Push(Stack[-3])
0xd2c: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd2d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd2e: Pop(0)
0xd2f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd30: Pop(0)
0xd31: GOTO 0xd36

0xd32: Push("Can't find lsh animation : ")
0xd33: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd34: @ Trace(Stack[-1])
0xd35: Pop(1)
0xd36: Return(); Pop(6)

0xd37: PushEmpty(float, cvector, float, cvector)
0xd38: @@ GetEyesHeight(Stack[-2])
0xd39: Pop(0)
0xd3a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xd3b: Push(CvectorIndex(Stack[-1], 1))
0xd3c: Stack[-1] = Stack[-3]
0xd3d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xd3e: Push("head")
0xd3f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xd40: Pop(1)
0xd41: Return(); Pop(4)

0xd42: PushEmpty(bool)
0xd43: Call2 0x126a

0xd44: Pop(0)
0xd45: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xd46: @ lshStopSpeech()
0xd47: Pop(0)
0xd48: Return(); Pop(0)

0xd49: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xd4a: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xd4b: Pop(0)
0xd4c: Pop(0); Push((bool) Stack[-8] == 0)
0xd4d: IF (Stack[-1] == 0) GOTO 0xd62; Pop(1)

0xd4e: Stack[-7] = (int) 0
0xd4f: Push((int) 1)
0xd50: Pop(1); Push(Stack[-8] + Stack[-1]);
0xd51: Pop(1); Push(Stack[-18] + Stack[-1]);
0xd52: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xd53: Pop(1)
0xd54: Pop(0); Push((bool) Stack[-6] == 0)
0xd55: IF (Stack[-1] == 0) GOTO 0xd57; Pop(1)

0xd56: GOTO 0xd5a

0xd57: Push((int) 1)
0xd58: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xd59: GOTO 0xd4f

0xd5a: Pop(0); Push((bool) Stack[-7] == 0)
0xd5b: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd5c: Return(); Pop(16)

0xd5d: @ irand(Stack[-5], Stack[-7])
0xd5e: Pop(0)
0xd5f: Push((int) 1)
0xd60: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd61: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xd62: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xd63: Pop(0)
0xd64: Push(Stack[-4])
0xd65: IF (Stack[-1] == 0) GOTO 0xd71; Pop(1)

0xd66: @ GetEyesHeight(Stack[-3])
0xd67: Pop(0)
0xd68: @ GetDirection(Stack[-2])
0xd69: Pop(0)
0xd6a: Push((int) 50)
0xd6b: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xd6c: Push(CvectorIndex(Stack[-1], 1))
0xd6d: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xd6e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xd6f: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xd70: Pop(0)
0xd71: Return(); Pop(16)

0xd72: PushEmpty(object, object)
0xd73: @ self(Stack[-1])
0xd74: Pop(0)
0xd75: Stack[-3] = Stack[-1]
0xd76: Return(); Pop(2)

0xd77: Stack[-1] = 0
0xd78: PushEmpty(float, float)
0xd79: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd7a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd7b: Push((float)0.0)
0xd7c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd7d: IF (Stack[-1] == 0) GOTO 0xd80; Pop(1)

0xd7e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd7f: Return(); Pop(2)

0xd80: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd81: Return(); Pop(2)

0xd82: PushEmpty(object, object)
0xd83: @ CreateObjectVector(Stack[-1])
0xd84: Pop(0)
0xd85: Stack[-3] = Stack[-1]
0xd86: Return(); Pop(2)

0xd87: Stack[-1] = 0
0xd88: PushEmpty()
0xd89: Pop(0); Push(Stack[-2] | Stack[-1]);
0xd8a: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd8b: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd8c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd8d: Pop(1); Push(Sqrt(Stack[-1]))
0xd8e: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xd8f: Return(); Pop(0)

0xd90: PushEmpty()
0xd91: Push(CvectorIndex(Stack[-2], 0))
0xd92: Push(CvectorIndex(Stack[-2], 0))
0xd93: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd94: Push(CvectorIndex(Stack[-3], 2))
0xd95: Push(CvectorIndex(Stack[-3], 2))
0xd96: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd97: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xd98: Return(); Pop(0)

0xd99: PushEmpty()
0xd9a: Push(CvectorIndex(Stack[-1], 0))
0xd9b: Push(CvectorIndex(Stack[-2], 0))
0xd9c: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd9d: Push(CvectorIndex(Stack[-2], 2))
0xd9e: Push(CvectorIndex(Stack[-3], 2))
0xd9f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xda0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xda1: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xda2: Return(); Pop(0)

0xda3: PushEmpty()
0xda4: PushEmpty(float, cvector, cvector)
0xda5: Stack[-2] = Stack[-5]
0xda6: Stack[-1] = Stack[-4]
0xda7: Call2 0xd90

0xda8: Pop(2)
0xda9: PushEmpty(float, cvector)
0xdaa: Stack[-1] = Stack[-5]
0xdab: Call2 0xd99

0xdac: Pop(1)
0xdad: PushEmpty(float, cvector)
0xdae: Stack[-1] = Stack[-5]
0xdaf: Call2 0xd99

0xdb0: Pop(1)
0xdb1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xdb2: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xdb3: Return(); Pop(0)

0xdb4: PushEmpty(int, int)
0xdb5: @ GetVariable(Stack[-3], Stack[-1])
0xdb6: Pop(0)
0xdb7: Stack[-4] = Stack[-1]
0xdb8: Return(); Pop(2)

0xdb9: PushEmpty(float, float)
0xdba: @ GetGameTime(Stack[-1])
0xdbb: Pop(0)
0xdbc: Push((int) 1)
0xdbd: PushEmpty(int)
0xdbe: Push((int) 24)
0xdbf: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xdc0: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xdc1: Return(); Pop(2)

0xdc2: PushEmpty()
0xdc3: Push((int) 100)
0xdc4: @@ SetReturnValue(Stack[-1])
0xdc5: Pop(1)
0xdc6: Return(); Pop(0)

0xdc7: PushEmpty()
0xdc8: PushEmpty(int, string)
0xdc9: Stack[-1] = "branch"
0xdca: Call2 0xdb4

0xdcb: Pop(1)
0xdcc: Push((int) 0)
0xdcd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdce: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdcf: Stack[-2] = (bool) 1
0xdd0: Return(); Pop(0)

0xdd1: Stack[-2] = (bool) 0
0xdd2: Return(); Pop(0)

0xdd3: PushEmpty()
0xdd4: PushEmpty(int, string)
0xdd5: Stack[-1] = "branch"
0xdd6: Call2 0xdb4

0xdd7: Pop(1)
0xdd8: Push((int) 1)
0xdd9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xdda: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xddb: Stack[-2] = (bool) 1
0xddc: Return(); Pop(0)

0xddd: Stack[-2] = (bool) 0
0xdde: Return(); Pop(0)

0xddf: PushEmpty()
0xde0: PushEmpty(int, string)
0xde1: Stack[-1] = "branch"
0xde2: Call2 0xdb4

0xde3: Pop(1)
0xde4: Push((int) 2)
0xde5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xde6: IF (Stack[-1] == 0) GOTO 0xde9; Pop(1)

0xde7: Stack[-2] = (bool) 1
0xde8: Return(); Pop(0)

0xde9: Stack[-2] = (bool) 0
0xdea: Return(); Pop(0)

0xdeb: PushEmpty()
0xdec: PushEmpty(bool, object)
0xded: Stack[-1] = Stack[-3]
0xdee: Call2 0xe63

0xdef: Pop(1)
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf3; Pop(1)

0xdf1: Stack[-2] = (bool) 1
0xdf2: Return(); Pop(0)

0xdf3: Stack[-2] = (bool) 0
0xdf4: Return(); Pop(0)

0xdf5: PushEmpty()
0xdf6: PushEmpty(bool, object)
0xdf7: Stack[-1] = Stack[-3]
0xdf8: Call2 0xe6a

0xdf9: Pop(1)
0xdfa: IF (Stack[-1] == 0) GOTO 0xdfd; Pop(1)

0xdfb: Stack[-2] = (bool) 1
0xdfc: Return(); Pop(0)

0xdfd: Stack[-2] = (bool) 0
0xdfe: Return(); Pop(0)

0xdff: PushEmpty()
0xe00: PushEmpty(bool, object)
0xe01: Stack[-1] = Stack[-3]
0xe02: Call2 0xe71

0xe03: Pop(1)
0xe04: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe05: Stack[-2] = (bool) 1
0xe06: Return(); Pop(0)

0xe07: Stack[-2] = (bool) 0
0xe08: Return(); Pop(0)

0xe09: PushEmpty()
0xe0a: PushEmpty(bool, object)
0xe0b: Stack[-1] = Stack[-3]
0xe0c: Call2 0xe78

0xe0d: Pop(1)
0xe0e: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xe0f: Stack[-2] = (bool) 1
0xe10: Return(); Pop(0)

0xe11: Stack[-2] = (bool) 0
0xe12: Return(); Pop(0)

0xe13: PushEmpty()
0xe14: PushEmpty(bool, object)
0xe15: Stack[-1] = Stack[-3]
0xe16: Call2 0xe7f

0xe17: Pop(1)
0xe18: IF (Stack[-1] == 0) GOTO 0xe1b; Pop(1)

0xe19: Stack[-2] = (bool) 1
0xe1a: Return(); Pop(0)

0xe1b: Stack[-2] = (bool) 0
0xe1c: Return(); Pop(0)

0xe1d: PushEmpty()
0xe1e: PushEmpty(bool, object)
0xe1f: Stack[-1] = Stack[-3]
0xe20: Call2 0xe86

0xe21: Pop(1)
0xe22: IF (Stack[-1] == 0) GOTO 0xe25; Pop(1)

0xe23: Stack[-2] = (bool) 1
0xe24: Return(); Pop(0)

0xe25: Stack[-2] = (bool) 0
0xe26: Return(); Pop(0)

0xe27: PushEmpty()
0xe28: PushEmpty(bool, object)
0xe29: Stack[-1] = Stack[-3]
0xe2a: Call2 0xe8d

0xe2b: Pop(1)
0xe2c: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe2d: Stack[-2] = (bool) 1
0xe2e: Return(); Pop(0)

0xe2f: Stack[-2] = (bool) 0
0xe30: Return(); Pop(0)

0xe31: PushEmpty()
0xe32: PushEmpty(bool, object)
0xe33: Stack[-1] = Stack[-3]
0xe34: Call2 0xe94

0xe35: Pop(1)
0xe36: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe37: Stack[-2] = (bool) 1
0xe38: Return(); Pop(0)

0xe39: Stack[-2] = (bool) 0
0xe3a: Return(); Pop(0)

0xe3b: PushEmpty()
0xe3c: PushEmpty(bool, object)
0xe3d: Stack[-1] = Stack[-3]
0xe3e: Call2 0xe9b

0xe3f: Pop(1)
0xe40: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe41: Stack[-2] = (bool) 1
0xe42: Return(); Pop(0)

0xe43: Stack[-2] = (bool) 0
0xe44: Return(); Pop(0)

0xe45: PushEmpty()
0xe46: PushEmpty(bool, object)
0xe47: Stack[-1] = Stack[-3]
0xe48: Call2 0xea2

0xe49: Pop(1)
0xe4a: IF (Stack[-1] == 0) GOTO 0xe4d; Pop(1)

0xe4b: Stack[-2] = (bool) 1
0xe4c: Return(); Pop(0)

0xe4d: Stack[-2] = (bool) 0
0xe4e: Return(); Pop(0)

0xe4f: PushEmpty()
0xe50: PushEmpty(bool, object)
0xe51: Stack[-1] = Stack[-3]
0xe52: Call2 0xea9

0xe53: Pop(1)
0xe54: IF (Stack[-1] == 0) GOTO 0xe57; Pop(1)

0xe55: Stack[-2] = (bool) 1
0xe56: Return(); Pop(0)

0xe57: Stack[-2] = (bool) 0
0xe58: Return(); Pop(0)

0xe59: PushEmpty()
0xe5a: PushEmpty(bool, object)
0xe5b: Stack[-1] = Stack[-3]
0xe5c: Call2 0xeb0

0xe5d: Pop(1)
0xe5e: IF (Stack[-1] == 0) GOTO 0xe61; Pop(1)

0xe5f: Stack[-2] = (bool) 1
0xe60: Return(); Pop(0)

0xe61: Stack[-2] = (bool) 0
0xe62: Return(); Pop(0)

0xe63: PushEmpty()
0xe64: PushEmpty(int)
0xe65: Call2 0xdb9

0xe66: Pop(0)
0xe67: Push((int) 1)
0xe68: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe69: Return(); Pop(0)

0xe6a: PushEmpty()
0xe6b: PushEmpty(int)
0xe6c: Call2 0xdb9

0xe6d: Pop(0)
0xe6e: Push((int) 2)
0xe6f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe70: Return(); Pop(0)

0xe71: PushEmpty()
0xe72: PushEmpty(int)
0xe73: Call2 0xdb9

0xe74: Pop(0)
0xe75: Push((int) 3)
0xe76: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe77: Return(); Pop(0)

0xe78: PushEmpty()
0xe79: PushEmpty(int)
0xe7a: Call2 0xdb9

0xe7b: Pop(0)
0xe7c: Push((int) 4)
0xe7d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe7e: Return(); Pop(0)

0xe7f: PushEmpty()
0xe80: PushEmpty(int)
0xe81: Call2 0xdb9

0xe82: Pop(0)
0xe83: Push((int) 5)
0xe84: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe85: Return(); Pop(0)

0xe86: PushEmpty()
0xe87: PushEmpty(int)
0xe88: Call2 0xdb9

0xe89: Pop(0)
0xe8a: Push((int) 6)
0xe8b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe8c: Return(); Pop(0)

0xe8d: PushEmpty()
0xe8e: PushEmpty(int)
0xe8f: Call2 0xdb9

0xe90: Pop(0)
0xe91: Push((int) 7)
0xe92: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe93: Return(); Pop(0)

0xe94: PushEmpty()
0xe95: PushEmpty(int)
0xe96: Call2 0xdb9

0xe97: Pop(0)
0xe98: Push((int) 8)
0xe99: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xe9a: Return(); Pop(0)

0xe9b: PushEmpty()
0xe9c: PushEmpty(int)
0xe9d: Call2 0xdb9

0xe9e: Pop(0)
0xe9f: Push((int) 9)
0xea0: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xea1: Return(); Pop(0)

0xea2: PushEmpty()
0xea3: PushEmpty(int)
0xea4: Call2 0xdb9

0xea5: Pop(0)
0xea6: Push((int) 10)
0xea7: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xea8: Return(); Pop(0)

0xea9: PushEmpty()
0xeaa: PushEmpty(int)
0xeab: Call2 0xdb9

0xeac: Pop(0)
0xead: Push((int) 11)
0xeae: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xeaf: Return(); Pop(0)

0xeb0: PushEmpty()
0xeb1: PushEmpty(int)
0xeb2: Call2 0xdb9

0xeb3: Pop(0)
0xeb4: Push((int) 12)
0xeb5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xeb6: Return(); Pop(0)

0xeb7: PushEmpty(int, int)
0xeb8: Push("branch")
0xeb9: @ GetVariable(Stack[-1], Stack[-2])
0xeba: Pop(1)
0xebb: Push((int) 0)
0xebc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xebd: IF (Stack[-1] == 0) GOTO 0xec1; Pop(1)

0xebe: Stack[-3] = (int) 1
0xebf: Return(); Pop(2)

0xec0: GOTO 0xec6

0xec1: Push((int) 1)
0xec2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xec3: IF (Stack[-1] == 0) GOTO 0xec6; Pop(1)

0xec4: Stack[-3] = (int) 2
0xec5: Return(); Pop(2)

0xec6: Stack[-3] = (int) 3
0xec7: Return(); Pop(2)

0xec8: PushEmpty(int, int)
0xec9: Push("branch")
0xeca: @ GetVariable(Stack[-1], Stack[-2])
0xecb: Pop(1)
0xecc: Stack[-3] = Stack[-1]
0xecd: Return(); Pop(2)

0xece: PushEmpty(int, int)
0xecf: @@ GetItemID(Stack[-1])
0xed0: Pop(0)
0xed1: Stack[-4] = Stack[-1]
0xed2: Return(); Pop(2)

0xed3: PushEmpty(int, int, int, string, bool, bool, int, int, int, int, string, bool, bool, int)
0xed4: Push((int) 0)
0xed5: Pop(1); Push((bool) Stack[-16] == Stack[-1])
0xed6: IF (Stack[-1] == 0) GOTO 0xef8; Pop(1)

0xed7: PushEmpty(int)
0xed8: Call2 0xdb9

0xed9: Stack[-8] = Stack[-1]
0xeda: Pop(1)
0xedb: Stack[-6] = (int) 0
0xedc: Stack[-5] = (int) 1
0xedd: Pop(0); Push((bool) Stack[-5] <= Stack[-7])
0xede: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xedf: Stack[-4] = "Price"
0xee0: Push((int) 1)
0xee1: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xee2: IF (Stack[-1] == 0) GOTO 0xee4; Pop(1)

0xee3: Stack[-4] = Stack[-4] + Stack[-5]; Pop(0);
0xee4: PushEmpty(int, object)
0xee5: Stack[-1] = Stack[-18]
0xee6: Call2 0xece

0xee7: Pop(1)
0xee8: @ HasInvItemProperty(Stack[-4], Stack[-1], Stack[-5])
0xee9: Pop(1)
0xeea: Pop(0); Push((bool) Stack[-3] == 0)
0xeeb: IF (Stack[-1] == 0) GOTO 0xeed; Pop(1)

0xeec: GOTO 0xef3

0xeed: PushEmpty(int, object)
0xeee: Stack[-1] = Stack[-18]
0xeef: Call2 0xece

0xef0: Pop(1)
0xef1: @ GetInvItemProperty(Stack[-7], Stack[-1], Stack[-5])
0xef2: Pop(1)
0xef3: Push((int) 1)
0xef4: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xef5: GOTO 0xedd

0xef6: Stack[-17] = Stack[-6]
0xef7: Return(); Pop(14)

0xef8: PushEmpty(int, object)
0xef9: Stack[-1] = Stack[-18]
0xefa: Call2 0xece

0xefb: Pop(1)
0xefc: Push("BarterPrice")
0xefd: Pop(1); Push(Stack[-1] + Stack[-17]);
0xefe: @ HasInvItemProperty(Stack[-4], Stack[-2], Stack[-1])
0xeff: Pop(2)
0xf00: Pop(0); Push((bool) Stack[-2] == 0)
0xf01: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xf02: Stack[-17] = (int) 0
0xf03: Return(); Pop(14)

0xf04: PushEmpty(int, object)
0xf05: Stack[-1] = Stack[-18]
0xf06: Call2 0xece

0xf07: Pop(1)
0xf08: Push("BarterPrice")
0xf09: Pop(1); Push(Stack[-1] + Stack[-17]);
0xf0a: @ GetInvItemProperty(Stack[-3], Stack[-2], Stack[-1])
0xf0b: Pop(2)
0xf0c: Push((int) 0)
0xf0d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf0e: IF (Stack[-1] == 0) GOTO 0xf11; Pop(1)

0xf0f: Stack[-17] = Stack[-1]
0xf10: Return(); Pop(14)

0xf11: Stack[-17] = -Stack[-1]; Pop(0);
0xf12: Return(); Pop(14)

0xf13: PushEmpty(object, float, object, float)
0xf14: Push("player")
0xf15: @ FindActor(Stack[-3], Stack[-1])
0xf16: Pop(1)
0xf17: Pop(0); Push((bool) Stack[-2] == 0)
0xf18: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf19: Stack[-5] = (int) 0
0xf1a: Return(); Pop(4)

0xf1b: Push("reputation")
0xf1c: @@ GetProperty(Stack[-1], Stack[-2])
0xf1d: Pop(1)
0xf1e: Stack[-5] = Stack[-1]
0xf1f: Return(); Pop(4)

0xf20: Stack[-2] = 0
0xf21: PushEmpty()
0xf22: PushEmpty(int)
0xf23: Call2 0xec8

0xf24: Pop(0)
0xf25: Push((int) 1)
0xf26: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf27: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf28: @ WorkWithCorpse(Stack[-1])
0xf29: Pop(0)
0xf2a: GOTO 0xf2d

0xf2b: @ Barter(Stack[-1])
0xf2c: Pop(0)
0xf2d: Return(); Pop(0)

0xf2e: PushEmpty(int, bool, int, bool)
0xf2f: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0xf30: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf31: Push("GenerateMoney: iMin > iMax")
0xf32: @ Trace(Stack[-1])
0xf33: Pop(1)
0xf34: Return(); Pop(4)

0xf35: Stack[-2] = (int) 0
0xf36: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0xf37: IF (Stack[-1] == 0) GOTO 0xf3c; Pop(1)

0xf38: Pop(0); Push(Stack[-5] - Stack[-6]);
0xf39: @ irand(Stack[-3], Stack[-1])
0xf3a: Pop(1)
0xf3b: GOTO 0xf40

0xf3c: Push((int) 0)
0xf3d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0xf3e: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3f: Return(); Pop(4)

0xf40: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0xf41: Push((int) 0)
0xf42: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf43: IF (Stack[-1] == 0) GOTO 0xf45; Pop(1)

0xf44: Return(); Pop(4)

0xf45: PushEmpty(int, string)
0xf46: Stack[-1] = "Money"
0xf47: Call2 0x1025

0xf48: Pop(1)
0xf49: Push((int) 0)
0xf4a: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0xf4b: Pop(2)
0xf4c: Return(); Pop(4)

0xf4d: PushEmpty(object, int, bool, object, int, bool)
0xf4e: @ CreateInvItem(Stack[-3])
0xf4f: Pop(0)
0xf50: @@ SetItemName(Stack[-7])
0xf51: Pop(0)
0xf52: Push("Organ")
0xf53: Push((int) 1)
0xf54: @@ SetProperty(Stack[-2], Stack[-1])
0xf55: Pop(2)
0xf56: @@ GetItemID(Stack[-2])
0xf57: Pop(0)
0xf58: Push((int) 0)
0xf59: Push((int) 1)
0xf5a: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0xf5b: Pop(2)
0xf5c: Return(); Pop(6)

0xf5d: Stack[-3] = 0
0xf5e: PushEmpty(int)
0xf5f: Call2 0xec8

0xf60: Pop(0)
0xf61: Push((int) 1)
0xf62: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0xf63: IF (Stack[-1] == 0) GOTO 0xf65; Pop(1)

0xf64: Return(); Pop(0)

0xf65: PushEmpty(string)
0xf66: Stack[-1] = "liver"
0xf67: Call2 0xf4d

0xf68: Pop(1)
0xf69: PushEmpty(string)
0xf6a: Stack[-1] = "kidney"
0xf6b: Call2 0xf4d

0xf6c: Pop(1)
0xf6d: PushEmpty(string)
0xf6e: Stack[-1] = "heart"
0xf6f: Call2 0xf4d

0xf70: Pop(1)
0xf71: PushEmpty(string)
0xf72: Stack[-1] = "blood"
0xf73: Call2 0xf4d

0xf74: Pop(1)
0xf75: Return(); Pop(0)

0xf76: PushEmpty(int, bool, int, bool)
0xf77: Push(Stack[-5])
0xf78: IF (Stack[-1] == 0) GOTO 0xfcf; Pop(1)

0xf79: PushEmpty(int, int)
0xf7a: Stack[-2] = (int) 0
0xf7b: Push((int) 100)
0xf7c: PushEmpty(int)
0xf7d: Call2 0xdb9

0xf7e: Pop(0)
0xf7f: Push((int) 100)
0xf80: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf81: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xf82: Call2 0xf2e

0xf83: Pop(2)
0xf84: Push((int) 8)
0xf85: @ irand(Stack[-3], Stack[-1])
0xf86: Pop(1)
0xf87: Push((int) 0)
0xf88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf89: IF (Stack[-1] == 0) GOTO 0xf93; Pop(1)

0xf8a: PushEmpty(int, string)
0xf8b: Stack[-1] = "lemon"
0xf8c: Call2 0x1025

0xf8d: Pop(1)
0xf8e: Push((int) 0)
0xf8f: Push((int) 1)
0xf90: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf91: Pop(3)
0xf92: GOTO 0xfce

0xf93: Push((int) 1)
0xf94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf95: IF (Stack[-1] == 0) GOTO 0xf9f; Pop(1)

0xf96: PushEmpty(int, string)
0xf97: Stack[-1] = "rusk"
0xf98: Call2 0x1025

0xf99: Pop(1)
0xf9a: Push((int) 0)
0xf9b: Push((int) 1)
0xf9c: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xf9d: Pop(3)
0xf9e: GOTO 0xfce

0xf9f: Push((int) 2)
0xfa0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa1: IF (Stack[-1] == 0) GOTO 0xfab; Pop(1)

0xfa2: PushEmpty(int, string)
0xfa3: Stack[-1] = "hook"
0xfa4: Call2 0x1025

0xfa5: Pop(1)
0xfa6: Push((int) 0)
0xfa7: Push((int) 1)
0xfa8: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfa9: Pop(3)
0xfaa: GOTO 0xfce

0xfab: Push((int) 4)
0xfac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfad: IF (Stack[-1] == 0) GOTO 0xfb7; Pop(1)

0xfae: PushEmpty(int, string)
0xfaf: Stack[-1] = "syringe"
0xfb0: Call2 0x1025

0xfb1: Pop(1)
0xfb2: Push((int) 0)
0xfb3: Push((int) 1)
0xfb4: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfb5: Pop(3)
0xfb6: GOTO 0xfce

0xfb7: Push((int) 5)
0xfb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb9: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfba: PushEmpty(int, string)
0xfbb: Stack[-1] = "watch"
0xfbc: Call2 0x1025

0xfbd: Pop(1)
0xfbe: Push((int) 0)
0xfbf: Push((int) 1)
0xfc0: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfc1: Pop(3)
0xfc2: GOTO 0xfce

0xfc3: Push((int) 6)
0xfc4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc5: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfc6: PushEmpty(int, string)
0xfc7: Stack[-1] = "razor"
0xfc8: Call2 0x1025

0xfc9: Pop(1)
0xfca: Push((int) 0)
0xfcb: Push((int) 1)
0xfcc: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfcd: Pop(3)
0xfce: GOTO 0x1024

0xfcf: PushEmpty(int, int)
0xfd0: Stack[-2] = (int) 0
0xfd1: Push((int) 50)
0xfd2: PushEmpty(int)
0xfd3: Call2 0xdb9

0xfd4: Pop(0)
0xfd5: Push((int) 50)
0xfd6: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfd7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xfd8: Call2 0xf2e

0xfd9: Pop(2)
0xfda: Push((int) 7)
0xfdb: @ irand(Stack[-3], Stack[-1])
0xfdc: Pop(1)
0xfdd: Push((int) 0)
0xfde: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfdf: IF (Stack[-1] == 0) GOTO 0xfe9; Pop(1)

0xfe0: PushEmpty(int, string)
0xfe1: Stack[-1] = "beads"
0xfe2: Call2 0x1025

0xfe3: Pop(1)
0xfe4: Push((int) 0)
0xfe5: Push((int) 1)
0xfe6: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfe7: Pop(3)
0xfe8: GOTO 0x1024

0xfe9: Push((int) 1)
0xfea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfeb: IF (Stack[-1] == 0) GOTO 0xff5; Pop(1)

0xfec: PushEmpty(int, string)
0xfed: Stack[-1] = "bracelet"
0xfee: Call2 0x1025

0xfef: Pop(1)
0xff0: Push((int) 0)
0xff1: Push((int) 1)
0xff2: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xff3: Pop(3)
0xff4: GOTO 0x1024

0xff5: Push((int) 2)
0xff6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff7: IF (Stack[-1] == 0) GOTO 0x1001; Pop(1)

0xff8: PushEmpty(int, string)
0xff9: Stack[-1] = "ear_ring"
0xffa: Call2 0x1025

0xffb: Pop(1)
0xffc: Push((int) 0)
0xffd: Push((int) 1)
0xffe: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfff: Pop(3)
0x1000: GOTO 0x1024

0x1001: Push((int) 3)
0x1002: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1003: IF (Stack[-1] == 0) GOTO 0x100d; Pop(1)

0x1004: PushEmpty(int, string)
0x1005: Stack[-1] = "gold_ring"
0x1006: Call2 0x1025

0x1007: Pop(1)
0x1008: Push((int) 0)
0x1009: Push((int) 1)
0x100a: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x100b: Pop(3)
0x100c: GOTO 0x1024

0x100d: Push((int) 4)
0x100e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100f: IF (Stack[-1] == 0) GOTO 0x1019; Pop(1)

0x1010: PushEmpty(int, string)
0x1011: Stack[-1] = "silver_ring"
0x1012: Call2 0x1025

0x1013: Pop(1)
0x1014: Push((int) 0)
0x1015: Push((int) 1)
0x1016: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1017: Pop(3)
0x1018: GOTO 0x1024

0x1019: Push((int) 5)
0x101a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x101b: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x101c: PushEmpty(int, string)
0x101d: Stack[-1] = "flower"
0x101e: Call2 0x1025

0x101f: Pop(1)
0x1020: Push((int) 0)
0x1021: Push((int) 1)
0x1022: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1023: Pop(3)
0x1024: Return(); Pop(4)

0x1025: PushEmpty(int, int)
0x1026: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1027: Pop(0)
0x1028: Stack[-4] = Stack[-1]
0x1029: Return(); Pop(2)

0x102a: PushEmpty()
0x102b: PushEmpty(object)
0x102c: Stack[-1] = Stack[-2]
0x102d: Push(-1, 0); TaskCall(2)
0x102e: Call2 0x498

0x102f: Pop(-1, 0); TaskReturn
0x1030: Pop(1)
0x1031: Return(); Pop(0)

0x1032: PushEmpty(float, float)
0x1033: Push("health")
0x1034: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1035: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x1036: Push("health")
0x1037: @ GetProperty(Stack[-1], Stack[-2])
0x1038: Pop(1)
0x1039: Push((int) 0)
0x103a: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x103b: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x103c: @ SignalDeath(Stack[-4])
0x103d: Pop(0)
0x103e: Return(); Pop(2)

0x103f: PushEmpty()
0x1040: PushEmpty(object)
0x1041: Stack[-1] = Stack[-2]
0x1042: Call2 0x102a

0x1043: Pop(1)
0x1044: Return(); Pop(0)

0x1045: PushEmpty()
0x1046: PushEmpty(object, int, float)
0x1047: Stack[-3] = Stack[-7]
0x1048: Stack[-2] = Stack[-6]
0x1049: Stack[-1] = Stack[-5]
0x104a: Call2 0xc61

0x104b: Pop(3)
0x104c: Return(); Pop(0)

0x104d: PushEmpty()
0x104e: PushEmpty(object, int, float, cvector, cvector)
0x104f: Stack[-5] = Stack[-11]
0x1050: Stack[-4] = Stack[-10]
0x1051: Stack[-3] = Stack[-9]
0x1052: Stack[-2] = Stack[-7]
0x1053: Stack[-1] = Stack[-6]
0x1054: Call2 0xca5

0x1055: Pop(5)
0x1056: Return(); Pop(0)

0x1057: PushEmpty()
0x1058: Push("unholster")
0x1059: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x105a: IF (Stack[-1] == 0) GOTO 0x1062; Pop(1)

0x105b: PushEmpty(bool, object)
0x105c: Stack[-1] = Stack[-4]
0x105d: Call2 0x117a

0x105e: Stack[-5] = Stack[-2]
0x105f: Pop(2)
0x1060: Return(); Pop(0)

0x1061: GOTO 0x1075

0x1062: Push("player_shot")
0x1063: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1064: IF (Stack[-1] == 0) GOTO 0x106c; Pop(1)

0x1065: PushEmpty(bool, object)
0x1066: Stack[-1] = Stack[-4]
0x1067: Call2 0x1187

0x1068: Stack[-5] = Stack[-2]
0x1069: Pop(2)
0x106a: Return(); Pop(0)

0x106b: GOTO 0x1075

0x106c: Push("battle")
0x106d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x106e: IF (Stack[-1] == 0) GOTO 0x1075; Pop(1)

0x106f: PushEmpty(bool, object)
0x1070: Stack[-1] = Stack[-4]
0x1071: Call2 0x119e

0x1072: Stack[-5] = Stack[-2]
0x1073: Pop(2)
0x1074: Return(); Pop(0)

0x1075: Stack[-3] = (bool) 0
0x1076: Return(); Pop(0)

0x1077: PushEmpty()
0x1078: Push("unholster")
0x1079: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x107a: IF (Stack[-1] == 0) GOTO 0x1080; Pop(1)

0x107b: PushEmpty(object)
0x107c: Stack[-1] = Stack[-3]
0x107d: Call2 0x117f

0x107e: Pop(1)
0x107f: GOTO 0x108f

0x1080: Push("player_shot")
0x1081: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1082: IF (Stack[-1] == 0) GOTO 0x1088; Pop(1)

0x1083: PushEmpty(object)
0x1084: Stack[-1] = Stack[-3]
0x1085: Call2 0x1196

0x1086: Pop(1)
0x1087: GOTO 0x108f

0x1088: Push("battle")
0x1089: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x108a: IF (Stack[-1] == 0) GOTO 0x108f; Pop(1)

0x108b: PushEmpty(object)
0x108c: Stack[-1] = Stack[-3]
0x108d: Call2 0x11a5

0x108e: Pop(1)
0x108f: Return(); Pop(0)

0x1090: PushEmpty(bool, bool)
0x1091: PushEmpty(bool)
0x1092: Stack[-1] = (bool) 0
0x1093: PushEmpty(bool, object)
0x1094: Stack[-1] = Stack[-6]
0x1095: Call2 0x117a

0x1096: Pop(1)
0x1097: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x1098: PushEmpty(bool, object)
0x1099: Stack[-1] = Stack[-6]
0x109a: Call2 0xbe3

0x109b: Pop(1)
0x109c: IF (Stack[-1] == 0) GOTO 0x109e; Pop(1)

0x109d: Stack[-1] = (bool) 1
0x109e: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x109f: @@ IsWeaponHolstered(Stack[-1])
0x10a0: Pop(0)
0x10a1: Pop(0); Push((bool) Stack[-1] == 0)
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x10a3: Stack[-4] = (bool) 1
0x10a4: Return(); Pop(2)

0x10a5: Stack[-4] = (bool) 0
0x10a6: Return(); Pop(2)

0x10a7: PushEmpty()
0x10a8: PushEmpty(object)
0x10a9: Stack[-1] = Stack[-2]
0x10aa: Call2 0x117f

0x10ab: Pop(1)
0x10ac: Return(); Pop(0)

0x10ad: PushEmpty()
0x10ae: PushEmpty(bool, object)
0x10af: Stack[-1] = Stack[-3]
0x10b0: Call2 0xbe3

0x10b1: Pop(1)
0x10b2: IF (Stack[-1] == 0) GOTO 0x10b9; Pop(1)

0x10b3: PushEmpty(object)
0x10b4: Call2 0xd72

0x10b5: Pop(0)
0x10b6: Push((float)-0.05)
0x10b7: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x10b8: Pop(2)
0x10b9: Return(); Pop(0)

0x10ba: PushEmpty(object, object)
0x10bb: Push("heal")
0x10bc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10bd: IF (Stack[-1] == 0) GOTO 0x10c8; Pop(1)

0x10be: Push("player")
0x10bf: @ FindActor(Stack[-2], Stack[-1])
0x10c0: Pop(1)
0x10c1: PushEmpty(bool, object)
0x10c2: Stack[-1] = Stack[-3]
0x10c3: Call2 0x11ab

0x10c4: Stack[-6] = Stack[-2]
0x10c5: Pop(2)
0x10c6: Return(); Pop(2)

0x10c7: Stack[-1] = 0
0x10c8: Stack[-4] = (bool) 0
0x10c9: Return(); Pop(2)

0x10ca: PushEmpty(object, object)
0x10cb: Push("heal")
0x10cc: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x10cd: IF (Stack[-1] == 0) GOTO 0x10d6; Pop(1)

0x10ce: Push("player")
0x10cf: @ FindActor(Stack[-2], Stack[-1])
0x10d0: Pop(1)
0x10d1: PushEmpty(object)
0x10d2: Stack[-1] = Stack[-2]
0x10d3: Call2 0x11ae

0x10d4: Pop(1)
0x10d5: Stack[-1] = 0
0x10d6: Return(); Pop(2)

0x10d7: PushEmpty(string, string)
0x10d8: Stack[-1] = "idle"
0x10d9: Push(Stack[-3])
0x10da: IF (Stack[-1] == 0) GOTO 0x10dc; Pop(1)

0x10db: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x10dc: Stack[-4] = Stack[-1]
0x10dd: Return(); Pop(2)

0x10de: PushEmpty(int, bool, int, bool)
0x10df: Stack[-2] = (int) 0
0x10e0: Push("all")
0x10e1: PushEmpty(string, int)
0x10e2: Stack[-1] = Stack[-5]
0x10e3: Call2 0x10d7

0x10e4: Pop(1)
0x10e5: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x10e6: Pop(2)
0x10e7: Pop(0); Push((bool) Stack[-1] == 0)
0x10e8: IF (Stack[-1] == 0) GOTO 0x10ea; Pop(1)

0x10e9: GOTO 0x10ed

0x10ea: Push((int) 1)
0x10eb: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x10ec: GOTO 0x10e0

0x10ed: Stack[-5] = Stack[-2]
0x10ee: Return(); Pop(4)

0x10ef: PushEmpty()
0x10f0: PushEmpty(bool)
0x10f1: Call2 0x1282

0x10f2: Pop(0)
0x10f3: IF (Stack[-1] == 0) GOTO 0x10f6; Pop(1)

0x10f4: Stack[-2] = (int) 2
0x10f5: GOTO 0x10f7

0x10f6: Stack[-2] = (int) 0
0x10f7: Return(); Pop(0)

0x10f8: PushEmpty()
0x10f9: PushEmpty(object)
0x10fa: Stack[-1] = Stack[-2]
0x10fb: Push(-1, 1); TaskCall(5)
0x10fc: Call2 0x79f

0x10fd: Pop(-1, 1); TaskReturn
0x10fe: Pop(1)
0x10ff: Return(); Pop(0)

0x1100: PushEmpty()
0x1101: PushEmpty(bool, object)
0x1102: Stack[-1] = Stack[-3]
0x1103: Call2 0xc1d

0x1104: Pop(1)
0x1105: IF (Stack[-1] == 0) GOTO 0x1108; Pop(1)

0x1106: Stack[-2] = (int) 2
0x1107: GOTO 0x1109

0x1108: Stack[-2] = (int) 0
0x1109: Return(); Pop(0)

0x110a: PushEmpty()
0x110b: PushEmpty(object)
0x110c: Stack[-1] = Stack[-2]
0x110d: Push(-1, 3); TaskCall(6)
0x110e: Call2 0x8b2

0x110f: Pop(-1, 3); TaskReturn
0x1110: Pop(1)
0x1111: Return(); Pop(0)

0x1112: PushEmpty()
0x1113: PushEmpty(bool, object)
0x1114: Stack[-1] = Stack[-4]
0x1115: Call2 0xc1d

0x1116: Pop(1)
0x1117: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x1118: Stack[-3] = (int) 2
0x1119: GOTO 0x111b

0x111a: Stack[-3] = (int) 0
0x111b: Return(); Pop(0)

0x111c: PushEmpty()
0x111d: PushEmpty(object)
0x111e: Stack[-1] = Stack[-2]
0x111f: Push(-1, 3); TaskCall(7)
0x1120: Call2 0x9ae

0x1121: Pop(-1, 3); TaskReturn
0x1122: Pop(1)
0x1123: Return(); Pop(0)

0x1124: PushEmpty(string, bool, string, bool)
0x1125: PushEmpty(bool, object, string)
0x1126: Stack[-2] = Stack[-9]
0x1127: Stack[-1] = "class"
0x1128: Call2 0xbe8

0x1129: Pop(2)
0x112a: Pop(1); Push((bool) Stack[-1] == 0)
0x112b: IF (Stack[-1] == 0) GOTO 0x112e; Pop(1)

0x112c: Stack[-8] = (bool) 0
0x112d: Return(); Pop(4)

0x112e: Push("class")
0x112f: @@ GetProperty(Stack[-1], Stack[-3])
0x1130: Pop(1)
0x1131: Push("rat")
0x1132: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1133: IF (Stack[-1] == 0) GOTO 0x1137; Pop(1)

0x1134: Stack[-8] = (bool) 0
0x1135: Return(); Pop(4)

0x1136: GOTO 0x1142

0x1137: Push("rat_big")
0x1138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1139: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x113a: Stack[-8] = (bool) 0
0x113b: Return(); Pop(4)

0x113c: GOTO 0x1142

0x113d: Push("dog")
0x113e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113f: IF (Stack[-1] == 0) GOTO 0x1142; Pop(1)

0x1140: Stack[-8] = (bool) 0
0x1141: Return(); Pop(4)

0x1142: @ CanSee(Stack[-1], Stack[-7])
0x1143: Pop(0)
0x1144: PushEmpty(bool)
0x1145: Stack[-1] = (bool) 1
0x1146: Push(Stack[-2])
0x1147: IF (Stack[-1] == 0) GOTO 0x1150; Pop(1)

0x1148: PushEmpty(float, object)
0x1149: Stack[-1] = Stack[-10]
0x114a: Call2 0xbdb

0x114b: Pop(1)
0x114c: Pop(0); Push(Stack[-7] * Stack[-7]);
0x114d: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x114e: IF (Stack[-1] == 0) GOTO 0x1150; Pop(1)

0x114f: Stack[-1] = (bool) 0
0x1150: IF (Stack[-1] == 0) GOTO 0x1153; Pop(1)

0x1151: Stack[-8] = (bool) 1
0x1152: Return(); Pop(4)

0x1153: @ CanSee(Stack[-1], Stack[-6])
0x1154: Pop(0)
0x1155: PushEmpty(bool)
0x1156: Stack[-1] = (bool) 1
0x1157: Push(Stack[-2])
0x1158: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x1159: PushEmpty(float, object)
0x115a: Stack[-1] = Stack[-9]
0x115b: Call2 0xbdb

0x115c: Pop(1)
0x115d: Pop(0); Push(Stack[-7] * Stack[-7]);
0x115e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x115f: IF (Stack[-1] == 0) GOTO 0x1161; Pop(1)

0x1160: Stack[-1] = (bool) 0
0x1161: IF (Stack[-1] == 0) GOTO 0x1164; Pop(1)

0x1162: Stack[-8] = (bool) 1
0x1163: Return(); Pop(4)

0x1164: Stack[-8] = (bool) 0
0x1165: Return(); Pop(4)

0x1166: PushEmpty()
0x1167: Stack[-2] = (int) 0
0x1168: Return(); Pop(0)

0x1169: PushEmpty()
0x116a: Return(); Pop(0)

0x116b: PushEmpty()
0x116c: Stack[-3] = (int) 0
0x116d: Return(); Pop(0)

0x116e: PushEmpty()
0x116f: Return(); Pop(0)

0x1170: PushEmpty()
0x1171: Stack[-2] = (int) 2
0x1172: Return(); Pop(0)

0x1173: PushEmpty()
0x1174: PushEmpty(object)
0x1175: Stack[-1] = Stack[-2]
0x1176: Call2 0x1270

0x1177: Pop(1)
0x1178: Return(); Pop(0)

0x1179: Return(); Pop(0)

0x117a: PushEmpty(bool, bool)
0x117b: @ CanSee(Stack[-1], Stack[-3])
0x117c: Pop(0)
0x117d: Stack[-4] = Stack[-1]
0x117e: Return(); Pop(2)

0x117f: PushEmpty()
0x1180: PushEmpty(object)
0x1181: Stack[-1] = Stack[-2]
0x1182: Push(-1, 3); TaskCall(8)
0x1183: Call2 0xa70

0x1184: Pop(-1, 3); TaskReturn
0x1185: Pop(1)
0x1186: Return(); Pop(0)

0x1187: PushEmpty(bool, bool)
0x1188: @ CanSee(Stack[-1], Stack[-3])
0x1189: Pop(0)
0x118a: Stack[-4] = (bool) 1
0x118b: Push(Stack[-1])
0x118c: IF (Stack[-1] == 0) GOTO 0x1195; Pop(1)

0x118d: PushEmpty(float, object)
0x118e: Stack[-1] = Stack[-5]
0x118f: Call2 0xbdb

0x1190: Pop(1)
0x1191: Push((int) 4000000)
0x1192: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1193: IF (Stack[-1] == 0) GOTO 0x1195; Pop(1)

0x1194: Stack[-4] = (bool) 0
0x1195: Return(); Pop(2)

0x1196: PushEmpty()
0x1197: PushEmpty(object)
0x1198: Stack[-1] = Stack[-2]
0x1199: Push(-1, 3); TaskCall(9)
0x119a: Call2 0xb32

0x119b: Pop(-1, 3); TaskReturn
0x119c: Pop(1)
0x119d: Return(); Pop(0)

0x119e: PushEmpty()
0x119f: PushEmpty(bool, object)
0x11a0: Stack[-1] = Stack[-3]
0x11a1: Call2 0x1187

0x11a2: Stack[-4] = Stack[-2]
0x11a3: Pop(2)
0x11a4: Return(); Pop(0)

0x11a5: PushEmpty()
0x11a6: PushEmpty(object)
0x11a7: Stack[-1] = Stack[-2]
0x11a8: Call2 0x1196

0x11a9: Pop(1)
0x11aa: Return(); Pop(0)

0x11ab: PushEmpty()
0x11ac: Stack[-2] = (bool) 0
0x11ad: Return(); Pop(0)

0x11ae: PushEmpty()
0x11af: Return(); Pop(0)

0x11b0: PushEmpty(object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object, object, object, object, object, int, int, int, int, object, int, bool, int, float, int, object, int, int, int, int, int, int, int, int, int, int, object)
0x11b1: PushEmpty(object)
0x11b2: Call2 0xd82

0x11b3: Stack[-27] = Stack[-1]
0x11b4: Pop(1)
0x11b5: @ CreateIntVector(Stack[-25])
0x11b6: Pop(0)
0x11b7: @ CreateIntVector(Stack[-24])
0x11b8: Pop(0)
0x11b9: @ CreateIntVector(Stack[-23])
0x11ba: Pop(0)
0x11bb: @@ GetSubContainerCount(Stack[-22])
0x11bc: Pop(0)
0x11bd: Stack[-21] = (int) 0
0x11be: Pop(0); Push((bool) Stack[-21] < Stack[-22])
0x11bf: IF (Stack[-1] == 0) GOTO 0x1206; Pop(1)

0x11c0: @@ GetItemCount(Stack[-20], Stack[-21])
0x11c1: Pop(0)
0x11c2: Stack[-19] = (int) 0
0x11c3: Pop(0); Push((bool) Stack[-19] < Stack[-20])
0x11c4: IF (Stack[-1] == 0) GOTO 0x1203; Pop(1)

0x11c5: @@ GetItem(Stack[-18], Stack[-19], Stack[-21])
0x11c6: Pop(0)
0x11c7: @@ GetItemID(Stack[-17])
0x11c8: Pop(0)
0x11c9: Push("HasDurability")
0x11ca: @ HasInvItemProperty(Stack[-17], Stack[-18], Stack[-1])
0x11cb: Pop(1)
0x11cc: Push(Stack[-16])
0x11cd: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11ce: Push("durability")
0x11cf: @@ HasProperty(Stack[-17], Stack[-1])
0x11d0: Pop(1)
0x11d1: Push(Stack[-16])
0x11d2: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11d3: Push("durability")
0x11d4: @@ GetProperty(Stack[-16], Stack[-1])
0x11d5: Pop(1)
0x11d6: PushEmpty(bool)
0x11d7: Stack[-1] = (bool) 0
0x11d8: Push((int) 100)
0x11d9: Pop(1); Push((bool) Stack[-17] < Stack[-1])
0x11da: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11db: PushEmpty(bool, object)
0x11dc: Stack[-1] = Stack[-21]
0x11dd: Call2 0x1243

0x11de: Pop(1)
0x11df: IF (Stack[-1] == 0) GOTO 0x11e1; Pop(1)

0x11e0: Stack[-1] = (bool) 1
0x11e1: IF (Stack[-1] == 0) GOTO 0x11ff; Pop(1)

0x11e2: @@ add(Stack[-18])
0x11e3: Pop(0)
0x11e4: @@ add(Stack[-21])
0x11e5: Pop(0)
0x11e6: @@ add(Stack[-19])
0x11e7: Pop(0)
0x11e8: PushEmpty(int, object, int)
0x11e9: Stack[-2] = Stack[-21]
0x11ea: Stack[-1] = (int) 0
0x11eb: Call2 0xed3

0x11ec: Stack[-17] = Stack[-3]
0x11ed: Pop(3)
0x11ee: Push((float)1.0)
0x11ef: Push((float)2.0)
0x11f0: Pop(1); Push(Stack[-1] * Stack[-17]);
0x11f1: Push((float)100.0)
0x11f2: Pop(2); Push(Stack[-2] / Stack[-1]);
0x11f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f4: Pop(1); Push(Stack[-15] * Stack[-1]);
0x11f5: Push((int) 100)
0x11f6: Pop(1); Push(Stack[-1] - Stack[-17]);
0x11f7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11f8: Push((int) 300)
0x11f9: Stack[-15] = Stack[-2] / Stack[-1]; Pop(2);
0x11fa: Pop(0); Push((bool) Stack[-13] == 0)
0x11fb: IF (Stack[-1] == 0) GOTO 0x11fd; Pop(1)

0x11fc: Stack[-13] = (int) 1
0x11fd: @@ add(Stack[-13])
0x11fe: Pop(0)
0x11ff: Stack[-18] = 0
0x1200: Push((int) 1)
0x1201: Stack[-20] = Stack[-20] + Stack[-1]; Pop(1);
0x1202: GOTO 0x11c3

0x1203: Push((int) 1)
0x1204: Stack[-22] = Stack[-22] + Stack[-1]; Pop(1);
0x1205: GOTO 0x11be

0x1206: @ CreateIntVector(Stack[-12])
0x1207: Pop(0)
0x1208: Push("repair.xml")
0x1209: @ ChooseItem(Stack[-27], Stack[-13], Stack[-24], Stack[-1])
0x120a: Pop(1)
0x120b: @@ size(Stack[-11])
0x120c: Pop(0)
0x120d: Pop(0); Push((bool) Stack[-11] == 0)
0x120e: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x120f: Return(); Pop(52)

0x1210: Stack[-10] = (int) 0
0x1211: Stack[-9] = (int) 0
0x1212: Pop(0); Push((bool) Stack[-9] < Stack[-11])
0x1213: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1214: @@ get(Stack[-8], Stack[-9])
0x1215: Pop(0)
0x1216: @@ get(Stack[-7], Stack[-8])
0x1217: Pop(0)
0x1218: Stack[-10] = Stack[-10] + Stack[-7]; Pop(0);
0x1219: Push((int) 1)
0x121a: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x121b: GOTO 0x1212

0x121c: Push("money")
0x121d: @@ GetProperty(Stack[-1], Stack[-7])
0x121e: Pop(1)
0x121f: Stack[-6] = Stack[-6] - Stack[-10]; Pop(0);
0x1220: Push((int) 0)
0x1221: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1222: IF (Stack[-1] == 0) GOTO 0x1224; Pop(1)

0x1223: Return(); Pop(52)

0x1224: Push("money")
0x1225: @@ SetProperty(Stack[-1], Stack[-7])
0x1226: Pop(1)
0x1227: Stack[-5] = (int) 0
0x1228: Pop(0); Push((bool) Stack[-5] < Stack[-11])
0x1229: IF (Stack[-1] == 0) GOTO 0x123d; Pop(1)

0x122a: @@ get(Stack[-4], Stack[-5])
0x122b: Pop(0)
0x122c: @@ get(Stack[-3], Stack[-4])
0x122d: Pop(0)
0x122e: @@ get(Stack[-2], Stack[-4])
0x122f: Pop(0)
0x1230: @@ GetItem(Stack[-1], Stack[-2], Stack[-3])
0x1231: Pop(0)
0x1232: Push("durability")
0x1233: Push((int) 100)
0x1234: @@ SetProperty(Stack[-2], Stack[-1])
0x1235: Pop(2)
0x1236: Push((int) 1)
0x1237: @@ SetItem(Stack[-2], Stack[-1], Stack[-3], Stack[-4])
0x1238: Pop(1)
0x1239: Stack[-1] = 0
0x123a: Push((int) 1)
0x123b: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x123c: GOTO 0x1228

0x123d: Return(); Pop(52)

0x123e: Stack[-12] = 0
0x123f: Stack[-23] = 0
0x1240: Stack[-24] = 0
0x1241: Stack[-25] = 0
0x1242: Stack[-26] = 0
0x1243: PushEmpty(int, bool, int, int, bool, int)
0x1244: @@ GetItemID(Stack[-3])
0x1245: Pop(0)
0x1246: Push("Category")
0x1247: @ HasInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x1248: Pop(1)
0x1249: Pop(0); Push((bool) Stack[-2] == 0)
0x124a: IF (Stack[-1] == 0) GOTO 0x124d; Pop(1)

0x124b: Stack[-8] = (bool) 0
0x124c: Return(); Pop(6)

0x124d: Push("Category")
0x124e: @ GetInvItemProperty(Stack[-2], Stack[-4], Stack[-1])
0x124f: Pop(1)
0x1250: Push((int) 1)
0x1251: Stack[-9] = Stack[-2] == Stack[-1]; Pop(1);
0x1252: Return(); Pop(6)

0x1253: PushEmpty()
0x1254: PushEmpty(int, object)
0x1255: Stack[-1] = Stack[-3]
0x1256: Push(-2, 1); TaskCall(0)
0x1257: Call2 0x0

0x1258: Pop(-2, 1); TaskReturn
0x1259: Pop(1)
0x125a: Push((int) 100)
0x125b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x125c: IF (Stack[-1] == 0) GOTO 0x1261; Pop(1)

0x125d: PushEmpty(object)
0x125e: Stack[-1] = Stack[-2]
0x125f: Call2 0x11b0

0x1260: Pop(1)
0x1261: Return(); Pop(0)

0x1262: Stack[-1] = (int) 515567
0x1263: Return(); Pop(0)

0x1264: Stack[-1] = (int) 503352
0x1265: Return(); Pop(0)

0x1266: Stack[-1] = "ui/NPC_Citizen3.png"
0x1267: Return(); Pop(0)

0x1268: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1269: Return(); Pop(0)

0x126a: Stack[-1] = (bool) 0
0x126b: Return(); Pop(0)

0x126c: Push(GlobalVars[0])
0x126d: Stack[-1] = (bool) 0
0x126e: GlobalVars[0] = Stack[-1]; Pop(1)
0x126f: Return(); Pop(0)

0x1270: PushEmpty(bool, bool)
0x1271: Push(GlobalVars[0])
0x1272: IF (Stack[-1] == 0) GOTO 0x127d; Pop(1)

0x1273: @ IsOverrideActive(Stack[-1])
0x1274: Pop(0)
0x1275: Pop(0); Push((bool) Stack[-1] == 0)
0x1276: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x1277: PushEmpty(object)
0x1278: Stack[-1] = Stack[-4]
0x1279: Call2 0xf21

0x127a: Pop(1)
0x127b: Return(); Pop(2)

0x127c: GOTO 0x1281

0x127d: PushEmpty(object)
0x127e: Stack[-1] = Stack[-4]
0x127f: Call2 0x1253

0x1280: Pop(1)
0x1281: Return(); Pop(2)

0x1282: PushEmpty(float)
0x1283: Call2 0xf13

0x1284: Pop(0)
0x1285: Push((float)0.7)
0x1286: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x1287: Return(); Pop(0)

0x1288: PushEmpty()
0x1289: PushEmpty(bool, object, object, float)
0x128a: Stack[-3] = Stack[-7]
0x128b: Stack[-2] = Stack[-6]
0x128c: Stack[-1] = (float) 700.0
0x128d: Call2 0x1124

0x128e: Stack[-8] = Stack[-4]
0x128f: Pop(4)
0x1290: Return(); Pop(0)

0x1291: PushEmpty()
0x1292: PushEmpty(bool, object)
0x1293: Stack[-1] = Stack[-3]
0x1294: Call2 0xbe3

0x1295: Pop(1)
0x1296: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x1297: PushEmpty(object)
0x1298: Call2 0xd72

0x1299: Pop(0)
0x129a: Push((float)-0.1)
0x129b: Push((bool) 1)
0x129c: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x129d: Pop(3)
0x129e: PushEmpty(bool)
0x129f: Stack[-1] = (bool) 0
0x12a0: Call2 0xf76

0x12a1: Pop(1)
0x12a2: PushEmpty()
0x12a3: Call2 0xf5e

0x12a4: Pop(0)
0x12a5: Push(GlobalVars[0])
0x12a6: Stack[-1] = (bool) 1
0x12a7: GlobalVars[0] = Stack[-1]; Pop(1)
0x12a8: Push((int) 50)
0x12a9: Push((int) 40)
0x12aa: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x12ab: Pop(2)
0x12ac: Return(); Pop(0)

