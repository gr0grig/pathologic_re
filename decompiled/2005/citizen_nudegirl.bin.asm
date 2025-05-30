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
	branch
	player
	reputation
	GenerateMoney: iMin > iMax
	Money
	SetItemName
	Organ
	SetProperty
	GetItemID
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
	GetVariable (2 args)
	GetGameTime (1 args)
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
	ReportReputationChange (4 args)
	SetRTEnvelope (2 args)

RunOp = 0x704
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1aa Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x677 Vars = (object)
		EVENT_6 Op = 0x685 Vars = ()
		EVENT_22 Op = 0x6fe Vars = (object, int, float, float)
		EVENT_16 Op = 0x700 Vars = (object, string)
		EVENT_41 Op = 0x702 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x71c Vars = (object)
		EVENT_17 Op = 0x730 Vars = (object)
		EVENT_30 Op = 0x748 Vars = (object, object, bool)
		EVENT_40 Op = 0x764 Vars = (object)
		EVENT_42 Op = 0x778 Vars = (object, string)
		EVENT_26 Op = 0x79d Vars = (string)
		EVENT_1 Op = 0x7ab Vars = (object)
		EVENT_3 Op = 0x7be Vars = (object)
		EVENT_7 Op = 0x7c4 Vars = (int)
		EVENT_6 Op = 0x7d0 Vars = ()
		EVENT_41 Op = 0x7e7 Vars = (object)
		EVENT_10 Op = 0x858 Vars = (object)
		EVENT_28 Op = 0x85c Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0x875 Vars = (object)
		EVENT_17 Op = 0x889 Vars = (object)
		EVENT_30 Op = 0x8a1 Vars = (object, object, bool)
		EVENT_40 Op = 0x8bd Vars = (object)
		EVENT_42 Op = 0x8d1 Vars = (object, string)
		EVENT_26 Op = 0x8f6 Vars = (string)
		EVENT_6 Op = 0x904 Vars = ()
		EVENT_1 Op = 0x90b Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0x9a7 Vars = (object)
		EVENT_17 Op = 0x9bb Vars = (object)
		EVENT_30 Op = 0x9d3 Vars = (object, object, bool)
		EVENT_40 Op = 0x9ef Vars = (object)
		EVENT_42 Op = 0xa03 Vars = (object, string)
		EVENT_26 Op = 0xa28 Vars = (string)
		EVENT_41 Op = 0xa41 Vars = (object)
		EVENT_7 Op = 0xa4a Vars = (int)
		EVENT_6 Op = 0xa6d Vars = ()
		EVENT_1 Op = 0xa74 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xa9e Vars = ()
		EVENT_7 Op = 0xb0c Vars = (int)
		EVENT_41 Op = 0xb47 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xbc7 Vars = (int)
		EVENT_41 Op = 0xc02 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xc1b Vars = ()
		EVENT_7 Op = 0xc89 Vars = (int)
		EVENT_41 Op = 0xcc4 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xcdd Vars = ()
		EVENT_7 Op = 0xd4b Vars = (int)
		EVENT_41 Op = 0xd86 Vars = (object)

Events:
EVENT_16 Op = 0x11b3 Vars = (object, string)
EVENT_41 Op = 0x11c0 Vars = (object)
EVENT_22 Op = 0x11c6 Vars = (object, int, float, float)
EVENT_43 Op = 0x11ce Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xe93

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1333

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x1331

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1335

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1337

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x107d

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
0x41: Call2 0xed7

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
0x4f: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0xf98

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x109; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x194

0x58: Pop(1)
0x59: Push((int) 543313)
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
0x64: PushEmpty(bool)
0x65: Stack[-1] = (bool) 1
0x66: PushEmpty(bool)
0x67: Stack[-1] = (bool) 1
0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0xfb8

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0xfcc

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = (bool) 0
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0xfe0

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 0
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0xff4

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 0
0x81: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x1008

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Stack[-1] = (bool) 0
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x101c

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 0
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 543317)
0x91: Push((int) 45779)
0x92: Push((int) 45773)
0x93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94: Pop(3)
0x95: PushEmpty(bool)
0x96: Stack[-1] = (bool) 1
0x97: PushEmpty(bool)
0x98: Stack[-1] = (bool) 1
0x99: PushEmpty(bool)
0x9a: Stack[-1] = (bool) 1
0x9b: PushEmpty(bool)
0x9c: Stack[-1] = (bool) 1
0x9d: PushEmpty(bool)
0x9e: Stack[-1] = (bool) 1
0x9f: PushEmpty(bool, object)
0xa0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1: Call2 0xfb8

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa4: PushEmpty(bool, object)
0xa5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Call2 0xfcc

0xa7: Pop(1)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xab: PushEmpty(bool, object)
0xac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad: Call2 0xfe0

0xae: Pop(1)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Stack[-1] = (bool) 0
0xb1: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0xff4

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[-1] = (bool) 0
0xb8: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x1008

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Stack[-1] = (bool) 0
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x101c

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: Push((int) 543324)
0xc8: Push((int) 45779)
0xc9: Push((int) 45780)
0xca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb: Pop(3)
0xcc: PushEmpty(bool)
0xcd: Stack[-1] = (bool) 1
0xce: PushEmpty(bool)
0xcf: Stack[-1] = (bool) 1
0xd0: PushEmpty(bool)
0xd1: Stack[-1] = (bool) 1
0xd2: PushEmpty(bool)
0xd3: Stack[-1] = (bool) 1
0xd4: PushEmpty(bool)
0xd5: Stack[-1] = (bool) 1
0xd6: PushEmpty(bool, object)
0xd7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Call2 0xfae

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0xfc2

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 0
0xe1: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0xfd6

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Stack[-1] = (bool) 0
0xe8: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Call2 0xfea

0xec: Pop(1)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: Stack[-1] = (bool) 0
0xef: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf0: PushEmpty(bool, object)
0xf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Call2 0xffe

0xf3: Pop(1)
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: Stack[-1] = (bool) 0
0xf6: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf7: PushEmpty(bool, object)
0xf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Call2 0x1012

0xfa: Pop(1)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 0
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: Push((int) 543315)
0xff: Push((int) -1)
0x100: Push((int) 45771)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: Push((int) 543327)
0x104: Push((int) -1)
0x105: Push((int) 45784)
0x106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107: Pop(3)
0x108: GOTO 0x176

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x194

0x10c: Pop(1)
0x10d: Push((int) 537786)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0xfa4

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x117: Push((int) 537787)
0x118: Push((int) -1)
0x119: Push((int) 39638)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: PushEmpty(bool, object)
0x11d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11e: Call2 0xfa4

0x11f: Pop(1)
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: Push((int) 537788)
0x122: Push((int) -1)
0x123: Push((int) 39639)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0xfa4

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: Push((int) 537789)
0x12c: Push((int) 39641)
0x12d: Push((int) 39640)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: PushEmpty(bool)
0x131: Stack[-1] = (bool) 0
0x132: PushEmpty(bool, object)
0x133: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x134: Call2 0xf8c

0x135: Pop(1)
0x136: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x137: PushEmpty(bool, object)
0x138: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x139: Call2 0xfae

0x13a: Pop(1)
0x13b: IF (Stack[-1] == 0) GOTO 0x13d; Pop(1)

0x13c: Stack[-1] = (bool) 1
0x13d: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13e: Push((int) 537805)
0x13f: Push((int) 39658)
0x140: Push((int) 39657)
0x141: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142: Pop(3)
0x143: PushEmpty(bool)
0x144: Stack[-1] = (bool) 0
0x145: PushEmpty(bool, object)
0x146: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x147: Call2 0xf8c

0x148: Pop(1)
0x149: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14a: PushEmpty(bool, object)
0x14b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14c: Call2 0xfe0

0x14d: Pop(1)
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: Stack[-1] = (bool) 1
0x150: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x151: Push((int) 537867)
0x152: Push((int) 39726)
0x153: Push((int) 39725)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: PushEmpty(bool)
0x157: Stack[-1] = (bool) 0
0x158: PushEmpty(bool, object)
0x159: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15a: Call2 0xf8c

0x15b: Pop(1)
0x15c: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x15d: PushEmpty(bool, object)
0x15e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15f: Call2 0x1012

0x160: Pop(1)
0x161: IF (Stack[-1] == 0) GOTO 0x163; Pop(1)

0x162: Stack[-1] = (bool) 1
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: Push((int) 537918)
0x165: Push((int) 39780)
0x166: Push((int) 39779)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 537927)
0x16a: Push((int) -1)
0x16b: Push((int) 39788)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 537928)
0x16f: Push((int) -1)
0x170: Push((int) 39789)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: GOTO 0x176

0x174: Return(); Pop(0)

0x175: GOTO 0x4e

0x176: PushEmpty(bool)
0x177: Call2 0x1339

0x178: Pop(0)
0x179: IF (Stack[-1] == 0) GOTO 0x185; Pop(1)

0x17a: @ lshWaitForAnimEnd()
0x17b: Pop(0)
0x17c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: GOTO 0x184

0x17f: PushEmpty(string)
0x180: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x181: Call2 0xee8

0x182: Pop(1)
0x183: GOTO 0x17a

0x184: GOTO 0x193

0x185: Push("all")
0x186: Push("idle")
0x187: @ PlayAnimation(Stack[-2], Stack[-1])
0x188: Pop(2)
0x189: @ WaitForAnimEnd()
0x18a: Pop(0)
0x18b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: GOTO 0x193

0x18e: Push("all")
0x18f: Push("idle")
0x190: @ PlayAnimation(Stack[-2], Stack[-1])
0x191: Pop(2)
0x192: GOTO 0x189

0x193: Return(); Pop(0)

0x194: PushEmpty()
0x195: PushEmpty(bool)
0x196: Call2 0x1339

0x197: Pop(0)
0x198: Pop(1); Push((bool) Stack[-1] == 0)
0x199: IF (Stack[-1] == 0) GOTO 0x19b; Pop(1)

0x19a: Return(); Pop(0)

0x19b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19c: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x19d: Return(); Pop(0)

0x19e: PushEmpty(string, bool)
0x19f: Stack[-2] = Stack[-3]
0x1a0: Push("")
0x1a1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a5; Pop(1)

0x1a3: Stack[-1] = (bool) 0
0x1a4: GOTO 0x1a6

0x1a5: Stack[-1] = (bool) 1
0x1a6: Call2 0xef8

0x1a7: Pop(2)
0x1a8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a9: Return(); Pop(0)

0x1aa: PushEmpty()
0x1ab: Push((int) 1)
0x1ac: IF (Stack[-1] == 0) GOTO 0x667; Pop(1)

0x1ad: PushEmpty()
0x1ae: Call2 0xf12

0x1af: Pop(0)
0x1b0: Push((int) 45769)
0x1b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b2: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x1b3: PushEmpty(bool, object)
0x1b4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b5: Call2 0xf98

0x1b6: Pop(1)
0x1b7: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x1b8: PushEmpty(string)
0x1b9: Stack[-1] = "Neutral"
0x1ba: Call2 0x194

0x1bb: Pop(1)
0x1bc: Push((int) 543313)
0x1bd: @@ SetMessage(Stack[-1])
0x1be: Pop(1)
0x1bf: @@ ClearReplies()
0x1c0: Pop(0)
0x1c1: PushEmpty(bool)
0x1c2: Stack[-1] = (bool) 1
0x1c3: PushEmpty(bool)
0x1c4: Stack[-1] = (bool) 1
0x1c5: PushEmpty(bool)
0x1c6: Stack[-1] = (bool) 1
0x1c7: PushEmpty(bool)
0x1c8: Stack[-1] = (bool) 1
0x1c9: PushEmpty(bool)
0x1ca: Stack[-1] = (bool) 1
0x1cb: PushEmpty(bool, object)
0x1cc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1cd: Call2 0xfb8

0x1ce: Pop(1)
0x1cf: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d0: PushEmpty(bool, object)
0x1d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Call2 0xfcc

0x1d3: Pop(1)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1d6; Pop(1)

0x1d5: Stack[-1] = (bool) 0
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1d7: PushEmpty(bool, object)
0x1d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d9: Call2 0xfe0

0x1da: Pop(1)
0x1db: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1dc: Stack[-1] = (bool) 0
0x1dd: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1de: PushEmpty(bool, object)
0x1df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e0: Call2 0xff4

0x1e1: Pop(1)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = (bool) 0
0x1e4: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e5: PushEmpty(bool, object)
0x1e6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e7: Call2 0x1008

0x1e8: Pop(1)
0x1e9: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1ea: Stack[-1] = (bool) 0
0x1eb: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ec: PushEmpty(bool, object)
0x1ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ee: Call2 0x101c

0x1ef: Pop(1)
0x1f0: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1f1: Stack[-1] = (bool) 0
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f3: Push((int) 543317)
0x1f4: Push((int) 45779)
0x1f5: Push((int) 45773)
0x1f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f7: Pop(3)
0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 1
0x1fa: PushEmpty(bool)
0x1fb: Stack[-1] = (bool) 1
0x1fc: PushEmpty(bool)
0x1fd: Stack[-1] = (bool) 1
0x1fe: PushEmpty(bool)
0x1ff: Stack[-1] = (bool) 1
0x200: PushEmpty(bool)
0x201: Stack[-1] = (bool) 1
0x202: PushEmpty(bool, object)
0x203: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x204: Call2 0xfb8

0x205: Pop(1)
0x206: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x207: PushEmpty(bool, object)
0x208: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x209: Call2 0xfcc

0x20a: Pop(1)
0x20b: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x20c: Stack[-1] = (bool) 0
0x20d: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20e: PushEmpty(bool, object)
0x20f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x210: Call2 0xfe0

0x211: Pop(1)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Stack[-1] = (bool) 0
0x214: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x215: PushEmpty(bool, object)
0x216: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x217: Call2 0xff4

0x218: Pop(1)
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: Stack[-1] = (bool) 0
0x21b: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21e: Call2 0x1008

0x21f: Pop(1)
0x220: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x221: Stack[-1] = (bool) 0
0x222: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x223: PushEmpty(bool, object)
0x224: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x225: Call2 0x101c

0x226: Pop(1)
0x227: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x228: Stack[-1] = (bool) 0
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: Push((int) 543324)
0x22b: Push((int) 45779)
0x22c: Push((int) 45780)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: PushEmpty(bool)
0x230: Stack[-1] = (bool) 1
0x231: PushEmpty(bool)
0x232: Stack[-1] = (bool) 1
0x233: PushEmpty(bool)
0x234: Stack[-1] = (bool) 1
0x235: PushEmpty(bool)
0x236: Stack[-1] = (bool) 1
0x237: PushEmpty(bool)
0x238: Stack[-1] = (bool) 1
0x239: PushEmpty(bool, object)
0x23a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23b: Call2 0xfae

0x23c: Pop(1)
0x23d: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23e: PushEmpty(bool, object)
0x23f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x240: Call2 0xfc2

0x241: Pop(1)
0x242: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x243: Stack[-1] = (bool) 0
0x244: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x245: PushEmpty(bool, object)
0x246: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x247: Call2 0xfd6

0x248: Pop(1)
0x249: IF (Stack[-1] == 0) GOTO 0x24b; Pop(1)

0x24a: Stack[-1] = (bool) 0
0x24b: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x24c: PushEmpty(bool, object)
0x24d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24e: Call2 0xfea

0x24f: Pop(1)
0x250: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x251: Stack[-1] = (bool) 0
0x252: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x253: PushEmpty(bool, object)
0x254: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x255: Call2 0xffe

0x256: Pop(1)
0x257: IF (Stack[-1] == 0) GOTO 0x259; Pop(1)

0x258: Stack[-1] = (bool) 0
0x259: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25a: PushEmpty(bool, object)
0x25b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25c: Call2 0x1012

0x25d: Pop(1)
0x25e: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x25f: Stack[-1] = (bool) 0
0x260: IF (Stack[-1] == 0) GOTO 0x266; Pop(1)

0x261: Push((int) 543315)
0x262: Push((int) -1)
0x263: Push((int) 45771)
0x264: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x265: Pop(3)
0x266: Push((int) 543327)
0x267: Push((int) -1)
0x268: Push((int) 45784)
0x269: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26a: Pop(3)
0x26b: Return(); Pop(0)

0x26c: PushEmpty(string)
0x26d: Stack[-1] = "Neutral"
0x26e: Call2 0x194

0x26f: Pop(1)
0x270: Push((int) 537786)
0x271: @@ SetMessage(Stack[-1])
0x272: Pop(1)
0x273: @@ ClearReplies()
0x274: Pop(0)
0x275: PushEmpty(bool, object)
0x276: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x277: Call2 0xfa4

0x278: Pop(1)
0x279: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27a: Push((int) 537787)
0x27b: Push((int) -1)
0x27c: Push((int) 39638)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: PushEmpty(bool, object)
0x280: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x281: Call2 0xfa4

0x282: Pop(1)
0x283: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x284: Push((int) 537788)
0x285: Push((int) -1)
0x286: Push((int) 39639)
0x287: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x288: Pop(3)
0x289: PushEmpty(bool, object)
0x28a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x28b: Call2 0xfa4

0x28c: Pop(1)
0x28d: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x28e: Push((int) 537789)
0x28f: Push((int) 39641)
0x290: Push((int) 39640)
0x291: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x292: Pop(3)
0x293: PushEmpty(bool)
0x294: Stack[-1] = (bool) 0
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x297: Call2 0xf8c

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29a: PushEmpty(bool, object)
0x29b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29c: Call2 0xfae

0x29d: Pop(1)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: Stack[-1] = (bool) 1
0x2a0: IF (Stack[-1] == 0) GOTO 0x2a6; Pop(1)

0x2a1: Push((int) 537805)
0x2a2: Push((int) 39658)
0x2a3: Push((int) 39657)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: PushEmpty(bool)
0x2a7: Stack[-1] = (bool) 0
0x2a8: PushEmpty(bool, object)
0x2a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2aa: Call2 0xf8c

0x2ab: Pop(1)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2ad: PushEmpty(bool, object)
0x2ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2af: Call2 0xfe0

0x2b0: Pop(1)
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b3; Pop(1)

0x2b2: Stack[-1] = (bool) 1
0x2b3: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b4: Push((int) 537867)
0x2b5: Push((int) 39726)
0x2b6: Push((int) 39725)
0x2b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b8: Pop(3)
0x2b9: PushEmpty(bool)
0x2ba: Stack[-1] = (bool) 0
0x2bb: PushEmpty(bool, object)
0x2bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bd: Call2 0xf8c

0x2be: Pop(1)
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Call2 0x1012

0x2c3: Pop(1)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2c5: Stack[-1] = (bool) 1
0x2c6: IF (Stack[-1] == 0) GOTO 0x2cc; Pop(1)

0x2c7: Push((int) 537918)
0x2c8: Push((int) 39780)
0x2c9: Push((int) 39779)
0x2ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cb: Pop(3)
0x2cc: Push((int) 537927)
0x2cd: Push((int) -1)
0x2ce: Push((int) 39788)
0x2cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d0: Pop(3)
0x2d1: Push((int) 537928)
0x2d2: Push((int) -1)
0x2d3: Push((int) 39789)
0x2d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d5: Pop(3)
0x2d6: Return(); Pop(0)

0x2d7: Push((int) 39780)
0x2d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d9: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2da: PushEmpty(string)
0x2db: Stack[-1] = "Neutral"
0x2dc: Call2 0x194

0x2dd: Pop(1)
0x2de: Push((int) 537919)
0x2df: @@ SetMessage(Stack[-1])
0x2e0: Pop(1)
0x2e1: @@ ClearReplies()
0x2e2: Pop(0)
0x2e3: Push((int) 537920)
0x2e4: Push((int) 39782)
0x2e5: Push((int) 39781)
0x2e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e7: Pop(3)
0x2e8: Push((int) 537926)
0x2e9: Push((int) -1)
0x2ea: Push((int) 39787)
0x2eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ec: Pop(3)
0x2ed: Return(); Pop(0)

0x2ee: Push((int) 39782)
0x2ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2f1: PushEmpty(string)
0x2f2: Stack[-1] = "Neutral"
0x2f3: Call2 0x194

0x2f4: Pop(1)
0x2f5: Push((int) 537921)
0x2f6: @@ SetMessage(Stack[-1])
0x2f7: Pop(1)
0x2f8: @@ ClearReplies()
0x2f9: Pop(0)
0x2fa: Push((int) 537922)
0x2fb: Push((int) 39784)
0x2fc: Push((int) 39783)
0x2fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fe: Pop(3)
0x2ff: Return(); Pop(0)

0x300: Push((int) 39784)
0x301: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0x303: PushEmpty(string)
0x304: Stack[-1] = "Neutral"
0x305: Call2 0x194

0x306: Pop(1)
0x307: Push((int) 537923)
0x308: @@ SetMessage(Stack[-1])
0x309: Pop(1)
0x30a: @@ ClearReplies()
0x30b: Pop(0)
0x30c: Push((int) 537924)
0x30d: Push((int) -1)
0x30e: Push((int) 39785)
0x30f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x310: Pop(3)
0x311: Push((int) 537925)
0x312: Push((int) -1)
0x313: Push((int) 39786)
0x314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x315: Pop(3)
0x316: Return(); Pop(0)

0x317: Push((int) 39766)
0x318: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x319: IF (Stack[-1] == 0) GOTO 0x31a; Pop(1)

0x31a: Push((int) 39768)
0x31b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x31c: IF (Stack[-1] == 0) GOTO 0x331; Pop(1)

0x31d: PushEmpty(string)
0x31e: Stack[-1] = "Neutral"
0x31f: Call2 0x194

0x320: Pop(1)
0x321: Push((int) 537908)
0x322: @@ SetMessage(Stack[-1])
0x323: Pop(1)
0x324: @@ ClearReplies()
0x325: Pop(0)
0x326: Push((int) 537909)
0x327: Push((int) 39770)
0x328: Push((int) 39769)
0x329: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32a: Pop(3)
0x32b: Push((int) 537913)
0x32c: Push((int) 39774)
0x32d: Push((int) 39773)
0x32e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x32f: Pop(3)
0x330: Return(); Pop(0)

0x331: Push((int) 39774)
0x332: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x333: IF (Stack[-1] == 0) GOTO 0x348; Pop(1)

0x334: PushEmpty(string)
0x335: Stack[-1] = "Neutral"
0x336: Call2 0x194

0x337: Pop(1)
0x338: Push((int) 537914)
0x339: @@ SetMessage(Stack[-1])
0x33a: Pop(1)
0x33b: @@ ClearReplies()
0x33c: Pop(0)
0x33d: Push((int) 537915)
0x33e: Push((int) 39770)
0x33f: Push((int) 39775)
0x340: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x341: Pop(3)
0x342: Push((int) 537916)
0x343: Push((int) -1)
0x344: Push((int) 39777)
0x345: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x346: Pop(3)
0x347: Return(); Pop(0)

0x348: Push((int) 39770)
0x349: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34a: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x34b: PushEmpty(string)
0x34c: Stack[-1] = "Neutral"
0x34d: Call2 0x194

0x34e: Pop(1)
0x34f: Push((int) 537910)
0x350: @@ SetMessage(Stack[-1])
0x351: Pop(1)
0x352: @@ ClearReplies()
0x353: Pop(0)
0x354: Push((int) 537911)
0x355: Push((int) -1)
0x356: Push((int) 39771)
0x357: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x358: Pop(3)
0x359: Push((int) 537912)
0x35a: Push((int) -1)
0x35b: Push((int) 39772)
0x35c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35d: Pop(3)
0x35e: Return(); Pop(0)

0x35f: Push((int) 39756)
0x360: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x362: Push((int) 39758)
0x363: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x365: PushEmpty(string)
0x366: Stack[-1] = "Neutral"
0x367: Call2 0x194

0x368: Pop(1)
0x369: Push((int) 537898)
0x36a: @@ SetMessage(Stack[-1])
0x36b: Pop(1)
0x36c: @@ ClearReplies()
0x36d: Pop(0)
0x36e: Push((int) 537899)
0x36f: Push((int) 39760)
0x370: Push((int) 39759)
0x371: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x372: Pop(3)
0x373: Push((int) 537903)
0x374: Push((int) -1)
0x375: Push((int) 39763)
0x376: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x377: Pop(3)
0x378: Return(); Pop(0)

0x379: Push((int) 39760)
0x37a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x37c: PushEmpty(string)
0x37d: Stack[-1] = "Neutral"
0x37e: Call2 0x194

0x37f: Pop(1)
0x380: Push((int) 537900)
0x381: @@ SetMessage(Stack[-1])
0x382: Pop(1)
0x383: @@ ClearReplies()
0x384: Pop(0)
0x385: Push((int) 537901)
0x386: Push((int) -1)
0x387: Push((int) 39761)
0x388: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x389: Pop(3)
0x38a: Push((int) 537902)
0x38b: Push((int) -1)
0x38c: Push((int) 39762)
0x38d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38e: Pop(3)
0x38f: Return(); Pop(0)

0x390: Push((int) 39741)
0x391: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x392: IF (Stack[-1] == 0) GOTO 0x393; Pop(1)

0x393: Push((int) 39751)
0x394: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x395: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x396: PushEmpty(string)
0x397: Stack[-1] = "Neutral"
0x398: Call2 0x194

0x399: Pop(1)
0x39a: Push((int) 537892)
0x39b: @@ SetMessage(Stack[-1])
0x39c: Pop(1)
0x39d: @@ ClearReplies()
0x39e: Pop(0)
0x39f: Push((int) 537893)
0x3a0: Push((int) 39745)
0x3a1: Push((int) 39752)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Push((int) 537894)
0x3a5: Push((int) -1)
0x3a6: Push((int) 39754)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: Return(); Pop(0)

0x3aa: Push((int) 39743)
0x3ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3bc; Pop(1)

0x3ad: PushEmpty(string)
0x3ae: Stack[-1] = "Neutral"
0x3af: Call2 0x194

0x3b0: Pop(1)
0x3b1: Push((int) 537884)
0x3b2: @@ SetMessage(Stack[-1])
0x3b3: Pop(1)
0x3b4: @@ ClearReplies()
0x3b5: Pop(0)
0x3b6: Push((int) 537885)
0x3b7: Push((int) 39745)
0x3b8: Push((int) 39744)
0x3b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ba: Pop(3)
0x3bb: Return(); Pop(0)

0x3bc: Push((int) 39745)
0x3bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3be: IF (Stack[-1] == 0) GOTO 0x3d3; Pop(1)

0x3bf: PushEmpty(string)
0x3c0: Stack[-1] = "Neutral"
0x3c1: Call2 0x194

0x3c2: Pop(1)
0x3c3: Push((int) 537886)
0x3c4: @@ SetMessage(Stack[-1])
0x3c5: Pop(1)
0x3c6: @@ ClearReplies()
0x3c7: Pop(0)
0x3c8: Push((int) 537887)
0x3c9: Push((int) 39747)
0x3ca: Push((int) 39746)
0x3cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cc: Pop(3)
0x3cd: Push((int) 537890)
0x3ce: Push((int) -1)
0x3cf: Push((int) 39749)
0x3d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d1: Pop(3)
0x3d2: Return(); Pop(0)

0x3d3: Push((int) 39747)
0x3d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d5: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3d6: PushEmpty(string)
0x3d7: Stack[-1] = "Neutral"
0x3d8: Call2 0x194

0x3d9: Pop(1)
0x3da: Push((int) 537888)
0x3db: @@ SetMessage(Stack[-1])
0x3dc: Pop(1)
0x3dd: @@ ClearReplies()
0x3de: Pop(0)
0x3df: Push((int) 537889)
0x3e0: Push((int) -1)
0x3e1: Push((int) 39748)
0x3e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e3: Pop(3)
0x3e4: Return(); Pop(0)

0x3e5: Push((int) 39726)
0x3e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e7: IF (Stack[-1] == 0) GOTO 0x3fc; Pop(1)

0x3e8: PushEmpty(string)
0x3e9: Stack[-1] = "Neutral"
0x3ea: Call2 0x194

0x3eb: Pop(1)
0x3ec: Push((int) 537868)
0x3ed: @@ SetMessage(Stack[-1])
0x3ee: Pop(1)
0x3ef: @@ ClearReplies()
0x3f0: Pop(0)
0x3f1: Push((int) 537869)
0x3f2: Push((int) 39728)
0x3f3: Push((int) 39727)
0x3f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f5: Pop(3)
0x3f6: Push((int) 537880)
0x3f7: Push((int) -1)
0x3f8: Push((int) 39739)
0x3f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fa: Pop(3)
0x3fb: Return(); Pop(0)

0x3fc: Push((int) 39728)
0x3fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x3ff: PushEmpty(string)
0x400: Stack[-1] = "Neutral"
0x401: Call2 0x194

0x402: Pop(1)
0x403: Push((int) 537870)
0x404: @@ SetMessage(Stack[-1])
0x405: Pop(1)
0x406: @@ ClearReplies()
0x407: Pop(0)
0x408: Push((int) 537871)
0x409: Push((int) 39730)
0x40a: Push((int) 39729)
0x40b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40c: Pop(3)
0x40d: Push((int) 537877)
0x40e: Push((int) 39736)
0x40f: Push((int) 39735)
0x410: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x411: Pop(3)
0x412: Return(); Pop(0)

0x413: Push((int) 39736)
0x414: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x425; Pop(1)

0x416: PushEmpty(string)
0x417: Stack[-1] = "Neutral"
0x418: Call2 0x194

0x419: Pop(1)
0x41a: Push((int) 537878)
0x41b: @@ SetMessage(Stack[-1])
0x41c: Pop(1)
0x41d: @@ ClearReplies()
0x41e: Pop(0)
0x41f: Push((int) 537879)
0x420: Push((int) 39730)
0x421: Push((int) 39737)
0x422: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x423: Pop(3)
0x424: Return(); Pop(0)

0x425: Push((int) 39730)
0x426: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x437; Pop(1)

0x428: PushEmpty(string)
0x429: Stack[-1] = "Neutral"
0x42a: Call2 0x194

0x42b: Pop(1)
0x42c: Push((int) 537872)
0x42d: @@ SetMessage(Stack[-1])
0x42e: Pop(1)
0x42f: @@ ClearReplies()
0x430: Pop(0)
0x431: Push((int) 537873)
0x432: Push((int) 39732)
0x433: Push((int) 39731)
0x434: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x435: Pop(3)
0x436: Return(); Pop(0)

0x437: Push((int) 39732)
0x438: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x439: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x43a: PushEmpty(string)
0x43b: Stack[-1] = "Neutral"
0x43c: Call2 0x194

0x43d: Pop(1)
0x43e: Push((int) 537874)
0x43f: @@ SetMessage(Stack[-1])
0x440: Pop(1)
0x441: @@ ClearReplies()
0x442: Pop(0)
0x443: Push((int) 537875)
0x444: Push((int) -1)
0x445: Push((int) 39733)
0x446: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x447: Pop(3)
0x448: Push((int) 537876)
0x449: Push((int) -1)
0x44a: Push((int) 39734)
0x44b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44c: Pop(3)
0x44d: Return(); Pop(0)

0x44e: Push((int) 39713)
0x44f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x450: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x451: Push((int) 39722)
0x452: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x453: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x454: PushEmpty(string)
0x455: Stack[-1] = "Neutral"
0x456: Call2 0x194

0x457: Pop(1)
0x458: Push((int) 537865)
0x459: @@ SetMessage(Stack[-1])
0x45a: Pop(1)
0x45b: @@ ClearReplies()
0x45c: Pop(0)
0x45d: Push((int) 537866)
0x45e: Push((int) 39717)
0x45f: Push((int) 39723)
0x460: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x461: Pop(3)
0x462: Return(); Pop(0)

0x463: Push((int) 39715)
0x464: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x465: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x466: PushEmpty(string)
0x467: Stack[-1] = "Neutral"
0x468: Call2 0x194

0x469: Pop(1)
0x46a: Push((int) 537858)
0x46b: @@ SetMessage(Stack[-1])
0x46c: Pop(1)
0x46d: @@ ClearReplies()
0x46e: Pop(0)
0x46f: Push((int) 537859)
0x470: Push((int) 39717)
0x471: Push((int) 39716)
0x472: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x473: Pop(3)
0x474: Push((int) 537863)
0x475: Push((int) -1)
0x476: Push((int) 39720)
0x477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x478: Pop(3)
0x479: Return(); Pop(0)

0x47a: Push((int) 39717)
0x47b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x491; Pop(1)

0x47d: PushEmpty(string)
0x47e: Stack[-1] = "Neutral"
0x47f: Call2 0x194

0x480: Pop(1)
0x481: Push((int) 537860)
0x482: @@ SetMessage(Stack[-1])
0x483: Pop(1)
0x484: @@ ClearReplies()
0x485: Pop(0)
0x486: Push((int) 537861)
0x487: Push((int) -1)
0x488: Push((int) 39718)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: Push((int) 537862)
0x48c: Push((int) -1)
0x48d: Push((int) 39719)
0x48e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48f: Pop(3)
0x490: Return(); Pop(0)

0x491: Push((int) 39703)
0x492: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x493: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x494: Push((int) 39705)
0x495: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x496: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x497: PushEmpty(string)
0x498: Stack[-1] = "Neutral"
0x499: Call2 0x194

0x49a: Pop(1)
0x49b: Push((int) 537849)
0x49c: @@ SetMessage(Stack[-1])
0x49d: Pop(1)
0x49e: @@ ClearReplies()
0x49f: Pop(0)
0x4a0: Push((int) 537850)
0x4a1: Push((int) 39707)
0x4a2: Push((int) 39706)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Return(); Pop(0)

0x4a6: Push((int) 39707)
0x4a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4bd; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "Neutral"
0x4ab: Call2 0x194

0x4ac: Pop(1)
0x4ad: Push((int) 537851)
0x4ae: @@ SetMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ ClearReplies()
0x4b1: Pop(0)
0x4b2: Push((int) 537852)
0x4b3: Push((int) -1)
0x4b4: Push((int) 39708)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Push((int) 537853)
0x4b8: Push((int) -1)
0x4b9: Push((int) 39709)
0x4ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(3)
0x4bc: Return(); Pop(0)

0x4bd: Push((int) 39679)
0x4be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c0; Pop(1)

0x4c0: Push((int) 39699)
0x4c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d2; Pop(1)

0x4c3: PushEmpty(string)
0x4c4: Stack[-1] = "Neutral"
0x4c5: Call2 0x194

0x4c6: Pop(1)
0x4c7: Push((int) 537844)
0x4c8: @@ SetMessage(Stack[-1])
0x4c9: Pop(1)
0x4ca: @@ ClearReplies()
0x4cb: Pop(0)
0x4cc: Push((int) 537845)
0x4cd: Push((int) 39681)
0x4ce: Push((int) 39700)
0x4cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d0: Pop(3)
0x4d1: Return(); Pop(0)

0x4d2: Push((int) 39681)
0x4d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d4: IF (Stack[-1] == 0) GOTO 0x4e9; Pop(1)

0x4d5: PushEmpty(string)
0x4d6: Stack[-1] = "Neutral"
0x4d7: Call2 0x194

0x4d8: Pop(1)
0x4d9: Push((int) 537829)
0x4da: @@ SetMessage(Stack[-1])
0x4db: Pop(1)
0x4dc: @@ ClearReplies()
0x4dd: Pop(0)
0x4de: Push((int) 537830)
0x4df: Push((int) 39683)
0x4e0: Push((int) 39682)
0x4e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e2: Pop(3)
0x4e3: Push((int) 537840)
0x4e4: Push((int) 39695)
0x4e5: Push((int) 39694)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Return(); Pop(0)

0x4e9: Push((int) 39695)
0x4ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4eb: IF (Stack[-1] == 0) GOTO 0x4fb; Pop(1)

0x4ec: PushEmpty(string)
0x4ed: Stack[-1] = "Neutral"
0x4ee: Call2 0x194

0x4ef: Pop(1)
0x4f0: Push((int) 537841)
0x4f1: @@ SetMessage(Stack[-1])
0x4f2: Pop(1)
0x4f3: @@ ClearReplies()
0x4f4: Pop(0)
0x4f5: Push((int) 537842)
0x4f6: Push((int) 39685)
0x4f7: Push((int) 39696)
0x4f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f9: Pop(3)
0x4fa: Return(); Pop(0)

0x4fb: Push((int) 39683)
0x4fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4fd: IF (Stack[-1] == 0) GOTO 0x50d; Pop(1)

0x4fe: PushEmpty(string)
0x4ff: Stack[-1] = "Neutral"
0x500: Call2 0x194

0x501: Pop(1)
0x502: Push((int) 537831)
0x503: @@ SetMessage(Stack[-1])
0x504: Pop(1)
0x505: @@ ClearReplies()
0x506: Pop(0)
0x507: Push((int) 537832)
0x508: Push((int) 39685)
0x509: Push((int) 39684)
0x50a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x50b: Pop(3)
0x50c: Return(); Pop(0)

0x50d: Push((int) 39685)
0x50e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x529; Pop(1)

0x510: PushEmpty(string)
0x511: Stack[-1] = "Neutral"
0x512: Call2 0x194

0x513: Pop(1)
0x514: Push((int) 537833)
0x515: @@ SetMessage(Stack[-1])
0x516: Pop(1)
0x517: @@ ClearReplies()
0x518: Pop(0)
0x519: Push((int) 537834)
0x51a: Push((int) 39687)
0x51b: Push((int) 39686)
0x51c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51d: Pop(3)
0x51e: Push((int) 537838)
0x51f: Push((int) 39687)
0x520: Push((int) 39690)
0x521: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x522: Pop(3)
0x523: Push((int) 537839)
0x524: Push((int) 39687)
0x525: Push((int) 39692)
0x526: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x527: Pop(3)
0x528: Return(); Pop(0)

0x529: Push((int) 39687)
0x52a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52b: IF (Stack[-1] == 0) GOTO 0x540; Pop(1)

0x52c: PushEmpty(string)
0x52d: Stack[-1] = "Neutral"
0x52e: Call2 0x194

0x52f: Pop(1)
0x530: Push((int) 537835)
0x531: @@ SetMessage(Stack[-1])
0x532: Pop(1)
0x533: @@ ClearReplies()
0x534: Pop(0)
0x535: Push((int) 537836)
0x536: Push((int) -1)
0x537: Push((int) 39688)
0x538: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x539: Pop(3)
0x53a: Push((int) 537837)
0x53b: Push((int) -1)
0x53c: Push((int) 39689)
0x53d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53e: Pop(3)
0x53f: Return(); Pop(0)

0x540: Push((int) 39658)
0x541: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x557; Pop(1)

0x543: PushEmpty(string)
0x544: Stack[-1] = "Neutral"
0x545: Call2 0x194

0x546: Pop(1)
0x547: Push((int) 537806)
0x548: @@ SetMessage(Stack[-1])
0x549: Pop(1)
0x54a: @@ ClearReplies()
0x54b: Pop(0)
0x54c: Push((int) 537807)
0x54d: Push((int) 39660)
0x54e: Push((int) 39659)
0x54f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x550: Pop(3)
0x551: Push((int) 537818)
0x552: Push((int) 39671)
0x553: Push((int) 39670)
0x554: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x555: Pop(3)
0x556: Return(); Pop(0)

0x557: Push((int) 39671)
0x558: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x559: IF (Stack[-1] == 0) GOTO 0x569; Pop(1)

0x55a: PushEmpty(string)
0x55b: Stack[-1] = "Neutral"
0x55c: Call2 0x194

0x55d: Pop(1)
0x55e: Push((int) 537819)
0x55f: @@ SetMessage(Stack[-1])
0x560: Pop(1)
0x561: @@ ClearReplies()
0x562: Pop(0)
0x563: Push((int) 537820)
0x564: Push((int) 39673)
0x565: Push((int) 39672)
0x566: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x567: Pop(3)
0x568: Return(); Pop(0)

0x569: Push((int) 39673)
0x56a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56b: IF (Stack[-1] == 0) GOTO 0x57b; Pop(1)

0x56c: PushEmpty(string)
0x56d: Stack[-1] = "Neutral"
0x56e: Call2 0x194

0x56f: Pop(1)
0x570: Push((int) 537821)
0x571: @@ SetMessage(Stack[-1])
0x572: Pop(1)
0x573: @@ ClearReplies()
0x574: Pop(0)
0x575: Push((int) 537822)
0x576: Push((int) 39675)
0x577: Push((int) 39674)
0x578: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x579: Pop(3)
0x57a: Return(); Pop(0)

0x57b: Push((int) 39675)
0x57c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x592; Pop(1)

0x57e: PushEmpty(string)
0x57f: Stack[-1] = "Neutral"
0x580: Call2 0x194

0x581: Pop(1)
0x582: Push((int) 537823)
0x583: @@ SetMessage(Stack[-1])
0x584: Pop(1)
0x585: @@ ClearReplies()
0x586: Pop(0)
0x587: Push((int) 537824)
0x588: Push((int) -1)
0x589: Push((int) 39676)
0x58a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58b: Pop(3)
0x58c: Push((int) 537825)
0x58d: Push((int) -1)
0x58e: Push((int) 39677)
0x58f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x590: Pop(3)
0x591: Return(); Pop(0)

0x592: Push((int) 39660)
0x593: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x594: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x595: PushEmpty(string)
0x596: Stack[-1] = "Neutral"
0x597: Call2 0x194

0x598: Pop(1)
0x599: Push((int) 537808)
0x59a: @@ SetMessage(Stack[-1])
0x59b: Pop(1)
0x59c: @@ ClearReplies()
0x59d: Pop(0)
0x59e: Push((int) 537809)
0x59f: Push((int) 39662)
0x5a0: Push((int) 39661)
0x5a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a2: Pop(3)
0x5a3: Push((int) 537815)
0x5a4: Push((int) 39668)
0x5a5: Push((int) 39667)
0x5a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a7: Pop(3)
0x5a8: Return(); Pop(0)

0x5a9: Push((int) 39668)
0x5aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ab: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Neutral"
0x5ae: Call2 0x194

0x5af: Pop(1)
0x5b0: Push((int) 537816)
0x5b1: @@ SetMessage(Stack[-1])
0x5b2: Pop(1)
0x5b3: @@ ClearReplies()
0x5b4: Pop(0)
0x5b5: Push((int) 537817)
0x5b6: Push((int) -1)
0x5b7: Push((int) 39669)
0x5b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b9: Pop(3)
0x5ba: Return(); Pop(0)

0x5bb: Push((int) 39662)
0x5bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bd: IF (Stack[-1] == 0) GOTO 0x5d2; Pop(1)

0x5be: PushEmpty(string)
0x5bf: Stack[-1] = "Neutral"
0x5c0: Call2 0x194

0x5c1: Pop(1)
0x5c2: Push((int) 537810)
0x5c3: @@ SetMessage(Stack[-1])
0x5c4: Pop(1)
0x5c5: @@ ClearReplies()
0x5c6: Pop(0)
0x5c7: Push((int) 537811)
0x5c8: Push((int) 39664)
0x5c9: Push((int) 39663)
0x5ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cb: Pop(3)
0x5cc: Push((int) 537814)
0x5cd: Push((int) -1)
0x5ce: Push((int) 39666)
0x5cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d0: Pop(3)
0x5d1: Return(); Pop(0)

0x5d2: Push((int) 39664)
0x5d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d4: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5d5: PushEmpty(string)
0x5d6: Stack[-1] = "Neutral"
0x5d7: Call2 0x194

0x5d8: Pop(1)
0x5d9: Push((int) 537812)
0x5da: @@ SetMessage(Stack[-1])
0x5db: Pop(1)
0x5dc: @@ ClearReplies()
0x5dd: Pop(0)
0x5de: Push((int) 537813)
0x5df: Push((int) -1)
0x5e0: Push((int) 39665)
0x5e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e2: Pop(3)
0x5e3: Return(); Pop(0)

0x5e4: Push((int) 39644)
0x5e5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e6: IF (Stack[-1] == 0) GOTO 0x5e7; Pop(1)

0x5e7: Push((int) 39646)
0x5e8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e9: IF (Stack[-1] == 0) GOTO 0x5fe; Pop(1)

0x5ea: PushEmpty(string)
0x5eb: Stack[-1] = "Neutral"
0x5ec: Call2 0x194

0x5ed: Pop(1)
0x5ee: Push((int) 537795)
0x5ef: @@ SetMessage(Stack[-1])
0x5f0: Pop(1)
0x5f1: @@ ClearReplies()
0x5f2: Pop(0)
0x5f3: Push((int) 537796)
0x5f4: Push((int) 39648)
0x5f5: Push((int) 39647)
0x5f6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f7: Pop(3)
0x5f8: Push((int) 537803)
0x5f9: Push((int) 39648)
0x5fa: Push((int) 39654)
0x5fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fc: Pop(3)
0x5fd: Return(); Pop(0)

0x5fe: Push((int) 39648)
0x5ff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x600: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x601: PushEmpty(string)
0x602: Stack[-1] = "Neutral"
0x603: Call2 0x194

0x604: Pop(1)
0x605: Push((int) 537797)
0x606: @@ SetMessage(Stack[-1])
0x607: Pop(1)
0x608: @@ ClearReplies()
0x609: Pop(0)
0x60a: Push((int) 537798)
0x60b: Push((int) 39650)
0x60c: Push((int) 39649)
0x60d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60e: Pop(3)
0x60f: Push((int) 537802)
0x610: Push((int) -1)
0x611: Push((int) 39653)
0x612: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x613: Pop(3)
0x614: Return(); Pop(0)

0x615: Push((int) 39650)
0x616: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x617: IF (Stack[-1] == 0) GOTO 0x62c; Pop(1)

0x618: PushEmpty(string)
0x619: Stack[-1] = "Neutral"
0x61a: Call2 0x194

0x61b: Pop(1)
0x61c: Push((int) 537799)
0x61d: @@ SetMessage(Stack[-1])
0x61e: Pop(1)
0x61f: @@ ClearReplies()
0x620: Pop(0)
0x621: Push((int) 537800)
0x622: Push((int) -1)
0x623: Push((int) 39651)
0x624: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x625: Pop(3)
0x626: Push((int) 537801)
0x627: Push((int) -1)
0x628: Push((int) 39652)
0x629: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62a: Pop(3)
0x62b: Return(); Pop(0)

0x62c: Push((int) 39641)
0x62d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x62e: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x62f: PushEmpty(string)
0x630: Stack[-1] = "Neutral"
0x631: Call2 0x194

0x632: Pop(1)
0x633: Push((int) 537790)
0x634: @@ SetMessage(Stack[-1])
0x635: Pop(1)
0x636: @@ ClearReplies()
0x637: Pop(0)
0x638: Push((int) 537791)
0x639: Push((int) -1)
0x63a: Push((int) 39642)
0x63b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63c: Pop(3)
0x63d: Return(); Pop(0)

0x63e: Push((int) 45779)
0x63f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x640: IF (Stack[-1] == 0) GOTO 0x655; Pop(1)

0x641: PushEmpty(string)
0x642: Stack[-1] = "Neutral"
0x643: Call2 0x194

0x644: Pop(1)
0x645: Push((int) 543323)
0x646: @@ SetMessage(Stack[-1])
0x647: Pop(1)
0x648: @@ ClearReplies()
0x649: Pop(0)
0x64a: Push((int) 543325)
0x64b: Push((int) -1)
0x64c: Push((int) 45781)
0x64d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64e: Pop(3)
0x64f: Push((int) 543326)
0x650: Push((int) -1)
0x651: Push((int) 45782)
0x652: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(3)
0x654: Return(); Pop(0)

0x655: Push((int) 45775)
0x656: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x657: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x658: Push((int) 45774)
0x659: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65a: IF (Stack[-1] == 0) GOTO 0x65b; Pop(1)

0x65b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x65c: PushEmpty(bool)
0x65d: Call2 0x1339

0x65e: Pop(0)
0x65f: IF (Stack[-1] == 0) GOTO 0x663; Pop(1)

0x660: @ lshStopAnimation()
0x661: Pop(0)
0x662: GOTO 0x665

0x663: @ StopAnimation()
0x664: Pop(0)
0x665: Return(); Pop(0)

0x666: GOTO 0x1ab

0x667: Return(); Pop(0)

0x668: PushEmpty()
0x669: EventDisable(0)
0x66a: PushEmpty(object)
0x66b: Stack[-1] = Stack[-2]
0x66c: Call2 0x689

0x66d: Pop(1)
0x66e: PushEmpty(object)
0x66f: Stack[-1] = Stack[-2]
0x670: Call2 0x1362

0x671: Pop(1)
0x672: EventEnable(0)
0x673: @ Hold()
0x674: Pop(0)
0x675: GOTO 0x673

0x676: Return(); Pop(0)

0x677: PushEmpty(int, int)
0x678: PushEmpty(int, object)
0x679: Stack[-1] = Stack[-5]
0x67a: Call2 0x12f1

0x67b: Stack[-3] = Stack[-2]
0x67c: Pop(2)
0x67d: Push((int) 0)
0x67e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x67f: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x680: PushEmpty(object)
0x681: Stack[-1] = Stack[-4]
0x682: Call2 0x12f4

0x683: Pop(1)
0x684: Return(); Pop(2)

0x685: PushEmpty()
0x686: Call2 0x12fa

0x687: Pop(0)
0x688: Return(); Pop(0)

0x689: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x68a: Pop(0); Push((bool) Stack[-21] == 0)
0x68b: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68c: PushEmpty(string)
0x68d: Stack[-1] = "fdie"
0x68e: Call2 0x6e4

0x68f: Pop(1)
0x690: GOTO 0x6e3

0x691: @@ GetPosition(Stack[-10])
0x692: Pop(0)
0x693: @ GetPosition(Stack[-9])
0x694: Pop(0)
0x695: @ GetDirection(Stack[-8])
0x696: Pop(0)
0x697: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x698: Push(CvectorIndex(Stack[-7], 0))
0x699: Push(CvectorIndex(Stack[-9], 0))
0x69a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69b: Push(CvectorIndex(Stack[-8], 2))
0x69c: Push(CvectorIndex(Stack[-10], 2))
0x69d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x69e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x69f: Push((int) 0)
0x6a0: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6a4; Pop(1)

0x6a2: Stack[-6] = "fdie"
0x6a3: GOTO 0x6a5

0x6a4: Stack[-6] = "bdie"
0x6a5: @ RemoveRTEnvelope()
0x6a6: Pop(0)
0x6a7: @ SetDeathState()
0x6a8: Pop(0)
0x6a9: @ Stop()
0x6aa: Pop(0)
0x6ab: @ StopAsync()
0x6ac: Pop(0)
0x6ad: Stack[-5] = Stack[-21]
0x6ae: Push("GetScriptProperty")
0x6af: Push((int) 2)
0x6b0: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x6b1: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b2: Push("Owner")
0x6b3: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x6b4: Pop(1)
0x6b5: Push(Stack[-4])
0x6b6: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6b7: Push("Owner")
0x6b8: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x6b9: Pop(1)
0x6ba: Pop(0); Push((bool) Stack[-5] == 0)
0x6bb: IF (Stack[-1] == 0) GOTO 0x6bd; Pop(1)

0x6bc: Stack[-5] = Stack[-21]
0x6bd: Push("@GetEyesHeight")
0x6be: Push((int) 1)
0x6bf: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x6c0: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6c1: @@ GetEyesHeight(Stack[-2])
0x6c2: Pop(0)
0x6c3: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x6c4: Push(CvectorIndex(Stack[-1], 1))
0x6c5: Stack[-1] = Stack[-3]
0x6c6: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x6c7: Push("head")
0x6c8: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x6c9: Pop(1)
0x6ca: Stack[-3] = (bool) 1
0x6cb: GOTO 0x6cd

0x6cc: Stack[-3] = (bool) 0
0x6cd: PushEmpty(string)
0x6ce: Stack[-1] = Stack[-7]
0x6cf: Call2 0xf19

0x6d0: Pop(1)
0x6d1: Push("all")
0x6d2: @ PlayAnimation(Stack[-1], Stack[-7])
0x6d3: Pop(1)
0x6d4: @ WaitForAnimEnd()
0x6d5: Pop(0)
0x6d6: Push(Stack[-3])
0x6d7: IF (Stack[-1] == 0) GOTO 0x6dd; Pop(1)

0x6d8: @ StopAsync()
0x6d9: Pop(0)
0x6da: Push("head")
0x6db: @ UnlookAsync(Stack[-1])
0x6dc: Pop(1)
0x6dd: Push("all")
0x6de: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x6df: Pop(1)
0x6e0: @ RemoveEnvelope()
0x6e1: Pop(0)
0x6e2: Stack[-5] = 0
0x6e3: Return(); Pop(20)

0x6e4: PushEmpty()
0x6e5: @ RemoveRTEnvelope()
0x6e6: Pop(0)
0x6e7: @ SetDeathState()
0x6e8: Pop(0)
0x6e9: @ Stop()
0x6ea: Pop(0)
0x6eb: @ StopAsync()
0x6ec: Pop(0)
0x6ed: @ StopSecondaryAnimation()
0x6ee: Pop(0)
0x6ef: PushEmpty(string)
0x6f0: Stack[-1] = Stack[-2]
0x6f1: Call2 0xf19

0x6f2: Pop(1)
0x6f3: Push("all")
0x6f4: @ PlayAnimation(Stack[-1], Stack[-2])
0x6f5: Pop(1)
0x6f6: @ WaitForAnimEnd()
0x6f7: Pop(0)
0x6f8: Push("all")
0x6f9: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x6fa: Pop(1)
0x6fb: @ RemoveEnvelope()
0x6fc: Pop(0)
0x6fd: Return(); Pop(0)

0x6fe: PushEmpty()
0x6ff: Return(); Pop(0)

0x700: PushEmpty()
0x701: Return(); Pop(0)

0x702: PushEmpty()
0x703: Return(); Pop(0)

0x704: Push((bool) 1)
0x705: @ SensePlayerOnly(Stack[-1])
0x706: Pop(1)
0x707: PushEmpty()
0x708: Call2 0x133b

0x709: Pop(0)
0x70a: PushEmpty()
0x70b: Call2 0x713

0x70c: Pop(0)
0x70d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x70e: PushEmpty()
0x70f: Call2 0x818

0x710: Pop(0)
0x711: GOTO 0x70d

0x712: Return(); Pop(0)

0x713: PushEmpty(bool)
0x714: Call2 0xe8e

0x715: Pop(0)
0x716: Pop(1); Push((bool) Stack[-1] == 0)
0x717: IF (Stack[-1] == 0) GOTO 0x71b; Pop(1)

0x718: PushEmpty()
0x719: Call2 0x12fa

0x71a: Pop(0)
0x71b: Return(); Pop(0)

0x71c: PushEmpty(int, int)
0x71d: PushEmpty(int, object)
0x71e: Stack[-1] = Stack[-5]
0x71f: Call2 0x12f1

0x720: Stack[-3] = Stack[-2]
0x721: Pop(2)
0x722: Push((int) 0)
0x723: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x725: Push((int) 1)
0x726: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x727: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x728: PushEmpty()
0x729: Call2 0x7d7

0x72a: Pop(0)
0x72b: PushEmpty(object)
0x72c: Stack[-1] = Stack[-4]
0x72d: Call2 0x12f4

0x72e: Pop(1)
0x72f: Return(); Pop(2)

0x730: PushEmpty(int, int)
0x731: PushEmpty(object)
0x732: Stack[-1] = Stack[-4]
0x733: Call2 0x122e

0x734: Pop(1)
0x735: PushEmpty(int, object)
0x736: Stack[-1] = Stack[-5]
0x737: Call2 0x1281

0x738: Stack[-3] = Stack[-2]
0x739: Pop(2)
0x73a: Push((int) 0)
0x73b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x73c: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x73d: Push((int) 1)
0x73e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x73f: IF (Stack[-1] == 0) GOTO 0x743; Pop(1)

0x740: PushEmpty()
0x741: Call2 0x7d7

0x742: Pop(0)
0x743: PushEmpty(object)
0x744: Stack[-1] = Stack[-4]
0x745: Call2 0x128b

0x746: Pop(1)
0x747: Return(); Pop(2)

0x748: PushEmpty(int, int)
0x749: PushEmpty(bool, object, object, bool)
0x74a: Stack[-3] = Stack[-9]
0x74b: Stack[-2] = Stack[-8]
0x74c: Stack[-1] = Stack[-7]
0x74d: Call2 0x1359

0x74e: Pop(3)
0x74f: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x750: PushEmpty(int, object, bool)
0x751: Stack[-2] = Stack[-8]
0x752: Stack[-1] = Stack[-6]
0x753: Call2 0x1293

0x754: Stack[-4] = Stack[-3]
0x755: Pop(3)
0x756: Push((int) 0)
0x757: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x758: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x759: Push((int) 1)
0x75a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75c: PushEmpty()
0x75d: Call2 0x7d7

0x75e: Pop(0)
0x75f: PushEmpty(object)
0x760: Stack[-1] = Stack[-6]
0x761: Call2 0x129d

0x762: Pop(1)
0x763: Return(); Pop(2)

0x764: PushEmpty(int, int)
0x765: PushEmpty(int, object)
0x766: Stack[-1] = Stack[-5]
0x767: Call2 0x12e7

0x768: Stack[-3] = Stack[-2]
0x769: Pop(2)
0x76a: Push((int) 0)
0x76b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x777; Pop(1)

0x76d: Push((int) 1)
0x76e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x76f: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x770: PushEmpty()
0x771: Call2 0x7d7

0x772: Pop(0)
0x773: PushEmpty(object)
0x774: Stack[-1] = Stack[-4]
0x775: Call2 0x12ea

0x776: Pop(1)
0x777: Return(); Pop(2)

0x778: PushEmpty(int, int)
0x779: PushEmpty(bool, object, string)
0x77a: Stack[-2] = Stack[-7]
0x77b: Stack[-1] = Stack[-6]
0x77c: Call2 0x11d8

0x77d: Pop(2)
0x77e: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x77f: PushEmpty()
0x780: Call2 0x7d7

0x781: Pop(0)
0x782: PushEmpty(object, string)
0x783: Stack[-2] = Stack[-6]
0x784: Stack[-1] = Stack[-5]
0x785: Call2 0x11f8

0x786: Pop(2)
0x787: GOTO 0x79c

0x788: PushEmpty(int, string, object)
0x789: Stack[-2] = Stack[-6]
0x78a: Stack[-1] = Stack[-7]
0x78b: Call2 0x12ec

0x78c: Stack[-4] = Stack[-3]
0x78d: Pop(3)
0x78e: Push((int) 0)
0x78f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x79c; Pop(1)

0x791: Push((int) 1)
0x792: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x794: PushEmpty()
0x795: Call2 0x7d7

0x796: Pop(0)
0x797: PushEmpty(string, object)
0x798: Stack[-2] = Stack[-5]
0x799: Stack[-1] = Stack[-6]
0x79a: Call2 0x12ef

0x79b: Pop(2)
0x79c: Return(); Pop(2)

0x79d: PushEmpty()
0x79e: PushEmpty(bool, string)
0x79f: Stack[-1] = Stack[-3]
0x7a0: Call2 0x123b

0x7a1: Pop(1)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a3: PushEmpty()
0x7a4: Call2 0x7d7

0x7a5: Pop(0)
0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = Stack[-2]
0x7a8: Call2 0x124b

0x7a9: Pop(1)
0x7aa: Return(); Pop(0)

0x7ab: PushEmpty()
0x7ac: PushEmpty(bool, object)
0x7ad: Stack[-1] = Stack[-3]
0x7ae: Call2 0x1211

0x7af: Pop(1)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b9; Pop(1)

0x7b1: PushEmpty()
0x7b2: Call2 0x7d7

0x7b3: Pop(0)
0x7b4: PushEmpty(object)
0x7b5: Stack[-1] = Stack[-2]
0x7b6: Call2 0x1228

0x7b7: Pop(1)
0x7b8: GOTO 0x7bd

0x7b9: PushEmpty(object)
0x7ba: Stack[-1] = Stack[-2]
0x7bb: Call2 0x7f0

0x7bc: Pop(1)
0x7bd: Return(); Pop(0)

0x7be: PushEmpty()
0x7bf: PushEmpty(object)
0x7c0: Stack[-1] = Stack[-2]
0x7c1: Call2 0x7f0

0x7c2: Pop(1)
0x7c3: Return(); Pop(0)

0x7c4: PushEmpty()
0x7c5: Push((int) 110)
0x7c6: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x7c7: IF (Stack[-1] == 0) GOTO 0x7c9; Pop(1)

0x7c8: Return(); Pop(0)

0x7c9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7ca: Push((int) 110)
0x7cb: @ KillTimer(Stack[-1])
0x7cc: Pop(1)
0x7cd: @ ResetAAS()
0x7ce: Pop(0)
0x7cf: Return(); Pop(0)

0x7d0: PushEmpty()
0x7d1: Call2 0x7d7

0x7d2: Pop(0)
0x7d3: PushEmpty()
0x7d4: Call2 0x12fa

0x7d5: Pop(0)
0x7d6: Return(); Pop(0)

0x7d7: Push((int) 110)
0x7d8: @ KillTimer(Stack[-1])
0x7d9: Pop(1)
0x7da: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7db: PushEmpty()
0x7dc: Call2 0x85f

0x7dd: Pop(0)
0x7de: Return(); Pop(0)

0x7df: Push((int) 110)
0x7e0: @ KillTimer(Stack[-1])
0x7e1: Pop(1)
0x7e2: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x7e3: PushEmpty()
0x7e4: Call2 0x866

0x7e5: Pop(0)
0x7e6: Return(); Pop(0)

0x7e7: PushEmpty()
0x7e8: PushEmpty()
0x7e9: Call2 0x7d7

0x7ea: Pop(0)
0x7eb: PushEmpty(object)
0x7ec: Stack[-1] = Stack[-2]
0x7ed: Call2 0x11c0

0x7ee: Pop(1)
0x7ef: Return(); Pop(0)

0x7f0: PushEmpty(bool, int, bool, int)
0x7f1: PushEmpty(bool, object)
0x7f2: Stack[-1] = Stack[-7]
0x7f3: Call2 0xded

0x7f4: Pop(1)
0x7f5: Pop(1); Push((bool) Stack[-1] == 0)
0x7f6: IF (Stack[-1] == 0) GOTO 0x7f8; Pop(1)

0x7f7: Return(); Pop(4)

0x7f8: Push( Stack[2 + Tasks[-1].StackPointer] )
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: Return(); Pop(4)

0x7fb: @ IsPlayerActor(Stack[-5], Stack[-2])
0x7fc: Pop(0)
0x7fd: Pop(0); Push((bool) Stack[-2] == 0)
0x7fe: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7ff: Return(); Pop(4)

0x800: PushEmpty(int, object)
0x801: Stack[-1] = Stack[-7]
0x802: Call2 0x1270

0x803: Stack[-3] = Stack[-2]
0x804: Pop(2)
0x805: Push((int) 0)
0x806: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x807: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x808: Push((int) 1)
0x809: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x80a: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x80b: PushEmpty()
0x80c: Call2 0x7df

0x80d: Pop(0)
0x80e: PushEmpty(object)
0x80f: Stack[-1] = Stack[-6]
0x810: Call2 0x1279

0x811: Pop(1)
0x812: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x813: Push((int) 110)
0x814: Push((float)10.0)
0x815: @ SetTimer(Stack[-2], Stack[-1])
0x816: Pop(2)
0x817: Return(); Pop(4)

0x818: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x819: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x81a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x81b: Push((float)0.5)
0x81c: @ rand(Stack[-7], Stack[-1])
0x81d: Pop(1)
0x81e: @ Sleep(Stack[-6])
0x81f: Pop(0)
0x820: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x821: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x822: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x823: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x824: @ GetPosition(Stack[-4])
0x825: Pop(0)
0x826: PushEmpty(float)
0x827: Call2 0x853

0x828: Pop(0)
0x829: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x82a: Pop(1)
0x82b: Push(Stack[-3])
0x82c: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x82d: GOTO 0x832

0x82e: Push((int) 1)
0x82f: @ Sleep(Stack[-1])
0x830: Pop(1)
0x831: GOTO 0x824

0x832: GOTO 0x834

0x833: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x834: PushEmpty(object, cvector)
0x835: Stack[-1] = Stack[-7]
0x836: Call2 0x86f

0x837: Stack[-4] = Stack[-2]
0x838: Pop(2)
0x839: Pop(0); Push(( Stack[-2] != 0 )
0x83a: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x83b: @ RotatePath(Stack[-2], Stack[-1])
0x83c: Pop(0)
0x83d: Push(Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x83f: PushEmpty(bool)
0x840: Call2 0x86d

0x841: Pop(0)
0x842: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x843: Pop(1)
0x844: Stack[-2] = 0
0x845: Push(Stack[-1])
0x846: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x847: PushEmpty()
0x848: Push(-0, 0); TaskCall(4)
0x849: Call2 0x919

0x84a: Pop(-0, 0); TaskReturn
0x84b: Pop(0)
0x84c: GOTO 0x850

0x84d: Push((int) 1)
0x84e: @ Sleep(Stack[-1])
0x84f: Pop(1)
0x850: Stack[-2] = 0
0x851: GOTO 0x820

0x852: Return(); Pop(12)

0x853: PushEmpty(float, float)
0x854: @ GetCameraFarDistance(Stack[-1])
0x855: Pop(0)
0x856: Stack[-3] = Stack[-1]
0x857: Return(); Pop(2)

0x858: PushEmpty()
0x859: @ RequestClearPath(Stack[-1])
0x85a: Pop(0)
0x85b: Return(); Pop(0)

0x85c: @ Stop()
0x85d: Pop(0)
0x85e: Return(); Pop(0)

0x85f: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x860: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x861: @ Stop()
0x862: Pop(0)
0x863: @ StopGroup0()
0x864: Pop(0)
0x865: Return(); Pop(0)

0x866: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x867: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x868: @ Stop()
0x869: Pop(0)
0x86a: @ StopGroup0()
0x86b: Pop(0)
0x86c: Return(); Pop(0)

0x86d: Stack[-1] = (bool) 0
0x86e: Return(); Pop(0)

0x86f: PushEmpty(object, object)
0x870: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x871: Pop(0)
0x872: Stack[-4] = Stack[-1]
0x873: Return(); Pop(2)

0x874: Stack[-1] = 0
0x875: PushEmpty(int, int)
0x876: PushEmpty(int, object)
0x877: Stack[-1] = Stack[-5]
0x878: Call2 0x12f1

0x879: Stack[-3] = Stack[-2]
0x87a: Pop(2)
0x87b: Push((int) 0)
0x87c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x87d: IF (Stack[-1] == 0) GOTO 0x888; Pop(1)

0x87e: Push((int) 1)
0x87f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x880: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x881: PushEmpty()
0x882: Call2 0x96a

0x883: Pop(0)
0x884: PushEmpty(object)
0x885: Stack[-1] = Stack[-4]
0x886: Call2 0x12f4

0x887: Pop(1)
0x888: Return(); Pop(2)

0x889: PushEmpty(int, int)
0x88a: PushEmpty(object)
0x88b: Stack[-1] = Stack[-4]
0x88c: Call2 0x122e

0x88d: Pop(1)
0x88e: PushEmpty(int, object)
0x88f: Stack[-1] = Stack[-5]
0x890: Call2 0x1281

0x891: Stack[-3] = Stack[-2]
0x892: Pop(2)
0x893: Push((int) 0)
0x894: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x895: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x896: Push((int) 1)
0x897: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x898: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x899: PushEmpty()
0x89a: Call2 0x96a

0x89b: Pop(0)
0x89c: PushEmpty(object)
0x89d: Stack[-1] = Stack[-4]
0x89e: Call2 0x128b

0x89f: Pop(1)
0x8a0: Return(); Pop(2)

0x8a1: PushEmpty(int, int)
0x8a2: PushEmpty(bool, object, object, bool)
0x8a3: Stack[-3] = Stack[-9]
0x8a4: Stack[-2] = Stack[-8]
0x8a5: Stack[-1] = Stack[-7]
0x8a6: Call2 0x1359

0x8a7: Pop(3)
0x8a8: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8a9: PushEmpty(int, object, bool)
0x8aa: Stack[-2] = Stack[-8]
0x8ab: Stack[-1] = Stack[-6]
0x8ac: Call2 0x1293

0x8ad: Stack[-4] = Stack[-3]
0x8ae: Pop(3)
0x8af: Push((int) 0)
0x8b0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8b1: IF (Stack[-1] == 0) GOTO 0x8bc; Pop(1)

0x8b2: Push((int) 1)
0x8b3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8b4: IF (Stack[-1] == 0) GOTO 0x8b8; Pop(1)

0x8b5: PushEmpty()
0x8b6: Call2 0x96a

0x8b7: Pop(0)
0x8b8: PushEmpty(object)
0x8b9: Stack[-1] = Stack[-6]
0x8ba: Call2 0x129d

0x8bb: Pop(1)
0x8bc: Return(); Pop(2)

0x8bd: PushEmpty(int, int)
0x8be: PushEmpty(int, object)
0x8bf: Stack[-1] = Stack[-5]
0x8c0: Call2 0x12e7

0x8c1: Stack[-3] = Stack[-2]
0x8c2: Pop(2)
0x8c3: Push((int) 0)
0x8c4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c5: IF (Stack[-1] == 0) GOTO 0x8d0; Pop(1)

0x8c6: Push((int) 1)
0x8c7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8c8: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c9: PushEmpty()
0x8ca: Call2 0x96a

0x8cb: Pop(0)
0x8cc: PushEmpty(object)
0x8cd: Stack[-1] = Stack[-4]
0x8ce: Call2 0x12ea

0x8cf: Pop(1)
0x8d0: Return(); Pop(2)

0x8d1: PushEmpty(int, int)
0x8d2: PushEmpty(bool, object, string)
0x8d3: Stack[-2] = Stack[-7]
0x8d4: Stack[-1] = Stack[-6]
0x8d5: Call2 0x11d8

0x8d6: Pop(2)
0x8d7: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8d8: PushEmpty()
0x8d9: Call2 0x96a

0x8da: Pop(0)
0x8db: PushEmpty(object, string)
0x8dc: Stack[-2] = Stack[-6]
0x8dd: Stack[-1] = Stack[-5]
0x8de: Call2 0x11f8

0x8df: Pop(2)
0x8e0: GOTO 0x8f5

0x8e1: PushEmpty(int, string, object)
0x8e2: Stack[-2] = Stack[-6]
0x8e3: Stack[-1] = Stack[-7]
0x8e4: Call2 0x12ec

0x8e5: Stack[-4] = Stack[-3]
0x8e6: Pop(3)
0x8e7: Push((int) 0)
0x8e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8e9: IF (Stack[-1] == 0) GOTO 0x8f5; Pop(1)

0x8ea: Push((int) 1)
0x8eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8ed: PushEmpty()
0x8ee: Call2 0x96a

0x8ef: Pop(0)
0x8f0: PushEmpty(string, object)
0x8f1: Stack[-2] = Stack[-5]
0x8f2: Stack[-1] = Stack[-6]
0x8f3: Call2 0x12ef

0x8f4: Pop(2)
0x8f5: Return(); Pop(2)

0x8f6: PushEmpty()
0x8f7: PushEmpty(bool, string)
0x8f8: Stack[-1] = Stack[-3]
0x8f9: Call2 0x123b

0x8fa: Pop(1)
0x8fb: IF (Stack[-1] == 0) GOTO 0x903; Pop(1)

0x8fc: PushEmpty()
0x8fd: Call2 0x96a

0x8fe: Pop(0)
0x8ff: PushEmpty(string)
0x900: Stack[-1] = Stack[-2]
0x901: Call2 0x124b

0x902: Pop(1)
0x903: Return(); Pop(0)

0x904: PushEmpty()
0x905: Call2 0x96a

0x906: Pop(0)
0x907: PushEmpty()
0x908: Call2 0x12fa

0x909: Pop(0)
0x90a: Return(); Pop(0)

0x90b: PushEmpty()
0x90c: PushEmpty(bool, object)
0x90d: Stack[-1] = Stack[-3]
0x90e: Call2 0x1211

0x90f: Pop(1)
0x910: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x911: PushEmpty()
0x912: Call2 0x96a

0x913: Pop(0)
0x914: PushEmpty(object)
0x915: Stack[-1] = Stack[-2]
0x916: Call2 0x1228

0x917: Pop(1)
0x918: Return(); Pop(0)

0x919: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x91a: @ WaitForAnimEnd()
0x91b: Pop(0)
0x91c: PushEmpty(bool)
0x91d: Call2 0xe8e

0x91e: Pop(0)
0x91f: Pop(1); Push((bool) Stack[-1] == 0)
0x920: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x921: Return(); Pop(14)

0x922: PushEmpty(int)
0x923: Call2 0x125f

0x924: Stack[-8] = Stack[-1]
0x925: Pop(1)
0x926: Stack[-6] = (int) 0
0x927: PushEmpty(bool)
0x928: Stack[-1] = (bool) 0
0x929: Push((int) 5)
0x92a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x92c: PushEmpty(bool)
0x92d: Call2 0xe8e

0x92e: Pop(0)
0x92f: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x930: Stack[-1] = (bool) 1
0x931: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x932: Push((int) 3)
0x933: @ irand(Stack[-6], Stack[-1])
0x934: Pop(1)
0x935: Push((int) 0)
0x936: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x938: Push(Stack[-7])
0x939: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x93a: @ irand(Stack[-4], Stack[-7])
0x93b: Pop(0)
0x93c: Push("all")
0x93d: PushEmpty(string, int)
0x93e: Stack[-1] = Stack[-7]
0x93f: Call2 0x1258

0x940: Pop(1)
0x941: @ PlayAnimation(Stack[-2], Stack[-1])
0x942: Pop(2)
0x943: @ WaitForAnimEnd(Stack[-3])
0x944: Pop(0)
0x945: Pop(0); Push((bool) Stack[-3] == 0)
0x946: IF (Stack[-1] == 0) GOTO 0x948; Pop(1)

0x947: GOTO 0x965

0x948: GOTO 0x95a

0x949: Push((int) 1)
0x94a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x94b: IF (Stack[-1] == 0) GOTO 0x957; Pop(1)

0x94c: Push((int) 4)
0x94d: @ rand(Stack[-3], Stack[-1])
0x94e: Pop(1)
0x94f: Push((int) 1)
0x950: Pop(1); Push(Stack[-3] + Stack[-1]);
0x951: @ Sleep(Stack[-1], Stack[-2])
0x952: Pop(1)
0x953: Pop(0); Push((bool) Stack[-1] == 0)
0x954: IF (Stack[-1] == 0) GOTO 0x956; Pop(1)

0x955: GOTO 0x965

0x956: GOTO 0x95a

0x957: Push(Stack[-6])
0x958: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x959: GOTO 0x965

0x95a: PushEmpty(bool)
0x95b: Call2 0x968

0x95c: Pop(0)
0x95d: Pop(1); Push((bool) Stack[-1] == 0)
0x95e: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x95f: GOTO 0x965

0x960: @ ResetAAS()
0x961: Pop(0)
0x962: Push((int) 1)
0x963: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x964: GOTO 0x927

0x965: @ ResetAAS()
0x966: Pop(0)
0x967: Return(); Pop(14)

0x968: Stack[-1] = (bool) 1
0x969: Return(); Pop(0)

0x96a: @ StopAnimation()
0x96b: Pop(0)
0x96c: @ StopGroup0()
0x96d: Pop(0)
0x96e: Return(); Pop(0)

0x96f: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x970: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x971: PushEmpty()
0x972: Call2 0x9a2

0x973: Pop(0)
0x974: @ GetDirection(Stack[-3])
0x975: Pop(0)
0x976: PushEmpty(cvector, object)
0x977: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x978: Call2 0xda4

0x979: Stack[-4] = Stack[-2]
0x97a: Pop(2)
0x97b: PushEmpty(float, cvector, cvector)
0x97c: Stack[-2] = Stack[-6]
0x97d: Stack[-1] = Stack[-5]
0x97e: Call2 0xf6d

0x97f: Pop(2)
0x980: Push((int) 0)
0x981: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x982: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x983: PushEmpty(object)
0x984: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x985: Call2 0xe83

0x986: Pop(1)
0x987: Stack[-1] = (bool) 1
0x988: GOTO 0x98c

0x989: Push((float)1.5)
0x98a: @ Sleep(Stack[-1], Stack[-2])
0x98b: Pop(1)
0x98c: Push(Stack[-1])
0x98d: IF (Stack[-1] == 0) GOTO 0x99c; Pop(1)

0x98e: PushEmpty(object)
0x98f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x990: Call2 0xe83

0x991: Pop(1)
0x992: Push((int) 111)
0x993: Push((float)0.5)
0x994: @ SetTimer(Stack[-2], Stack[-1])
0x995: Pop(2)
0x996: Push((float)5.0)
0x997: @ Sleep(Stack[-1])
0x998: Pop(1)
0x999: Push((int) 111)
0x99a: @ KillTimer(Stack[-1])
0x99b: Pop(1)
0x99c: @ StopAsync()
0x99d: Pop(0)
0x99e: Push("head")
0x99f: @ UnlookAsync(Stack[-1])
0x9a0: Pop(1)
0x9a1: Return(); Pop(6)

0x9a2: PushEmpty(object)
0x9a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a4: Call2 0xf07

0x9a5: Pop(1)
0x9a6: Return(); Pop(0)

0x9a7: PushEmpty(int, int)
0x9a8: PushEmpty(int, object)
0x9a9: Stack[-1] = Stack[-5]
0x9aa: Call2 0x12f1

0x9ab: Stack[-3] = Stack[-2]
0x9ac: Pop(2)
0x9ad: Push((int) 0)
0x9ae: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9af: IF (Stack[-1] == 0) GOTO 0x9ba; Pop(1)

0x9b0: Push((int) 1)
0x9b1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9b2: IF (Stack[-1] == 0) GOTO 0x9b6; Pop(1)

0x9b3: PushEmpty()
0x9b4: Call2 0xa36

0x9b5: Pop(0)
0x9b6: PushEmpty(object)
0x9b7: Stack[-1] = Stack[-4]
0x9b8: Call2 0x12f4

0x9b9: Pop(1)
0x9ba: Return(); Pop(2)

0x9bb: PushEmpty(int, int)
0x9bc: PushEmpty(object)
0x9bd: Stack[-1] = Stack[-4]
0x9be: Call2 0x122e

0x9bf: Pop(1)
0x9c0: PushEmpty(int, object)
0x9c1: Stack[-1] = Stack[-5]
0x9c2: Call2 0x1281

0x9c3: Stack[-3] = Stack[-2]
0x9c4: Pop(2)
0x9c5: Push((int) 0)
0x9c6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9c7: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9c8: Push((int) 1)
0x9c9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ca: IF (Stack[-1] == 0) GOTO 0x9ce; Pop(1)

0x9cb: PushEmpty()
0x9cc: Call2 0xa36

0x9cd: Pop(0)
0x9ce: PushEmpty(object)
0x9cf: Stack[-1] = Stack[-4]
0x9d0: Call2 0x128b

0x9d1: Pop(1)
0x9d2: Return(); Pop(2)

0x9d3: PushEmpty(int, int)
0x9d4: PushEmpty(bool, object, object, bool)
0x9d5: Stack[-3] = Stack[-9]
0x9d6: Stack[-2] = Stack[-8]
0x9d7: Stack[-1] = Stack[-7]
0x9d8: Call2 0x1359

0x9d9: Pop(3)
0x9da: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9db: PushEmpty(int, object, bool)
0x9dc: Stack[-2] = Stack[-8]
0x9dd: Stack[-1] = Stack[-6]
0x9de: Call2 0x1293

0x9df: Stack[-4] = Stack[-3]
0x9e0: Pop(3)
0x9e1: Push((int) 0)
0x9e2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e3: IF (Stack[-1] == 0) GOTO 0x9ee; Pop(1)

0x9e4: Push((int) 1)
0x9e5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9e6: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e7: PushEmpty()
0x9e8: Call2 0xa36

0x9e9: Pop(0)
0x9ea: PushEmpty(object)
0x9eb: Stack[-1] = Stack[-6]
0x9ec: Call2 0x129d

0x9ed: Pop(1)
0x9ee: Return(); Pop(2)

0x9ef: PushEmpty(int, int)
0x9f0: PushEmpty(int, object)
0x9f1: Stack[-1] = Stack[-5]
0x9f2: Call2 0x12e7

0x9f3: Stack[-3] = Stack[-2]
0x9f4: Pop(2)
0x9f5: Push((int) 0)
0x9f6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0xa02; Pop(1)

0x9f8: Push((int) 1)
0x9f9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9fa: IF (Stack[-1] == 0) GOTO 0x9fe; Pop(1)

0x9fb: PushEmpty()
0x9fc: Call2 0xa36

0x9fd: Pop(0)
0x9fe: PushEmpty(object)
0x9ff: Stack[-1] = Stack[-4]
0xa00: Call2 0x12ea

0xa01: Pop(1)
0xa02: Return(); Pop(2)

0xa03: PushEmpty(int, int)
0xa04: PushEmpty(bool, object, string)
0xa05: Stack[-2] = Stack[-7]
0xa06: Stack[-1] = Stack[-6]
0xa07: Call2 0x11d8

0xa08: Pop(2)
0xa09: IF (Stack[-1] == 0) GOTO 0xa13; Pop(1)

0xa0a: PushEmpty()
0xa0b: Call2 0xa36

0xa0c: Pop(0)
0xa0d: PushEmpty(object, string)
0xa0e: Stack[-2] = Stack[-6]
0xa0f: Stack[-1] = Stack[-5]
0xa10: Call2 0x11f8

0xa11: Pop(2)
0xa12: GOTO 0xa27

0xa13: PushEmpty(int, string, object)
0xa14: Stack[-2] = Stack[-6]
0xa15: Stack[-1] = Stack[-7]
0xa16: Call2 0x12ec

0xa17: Stack[-4] = Stack[-3]
0xa18: Pop(3)
0xa19: Push((int) 0)
0xa1a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa1b: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa1c: Push((int) 1)
0xa1d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa1e: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa1f: PushEmpty()
0xa20: Call2 0xa36

0xa21: Pop(0)
0xa22: PushEmpty(string, object)
0xa23: Stack[-2] = Stack[-5]
0xa24: Stack[-1] = Stack[-6]
0xa25: Call2 0x12ef

0xa26: Pop(2)
0xa27: Return(); Pop(2)

0xa28: PushEmpty()
0xa29: PushEmpty(bool, string)
0xa2a: Stack[-1] = Stack[-3]
0xa2b: Call2 0x123b

0xa2c: Pop(1)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa35; Pop(1)

0xa2e: PushEmpty()
0xa2f: Call2 0xa36

0xa30: Pop(0)
0xa31: PushEmpty(string)
0xa32: Stack[-1] = Stack[-2]
0xa33: Call2 0x124b

0xa34: Pop(1)
0xa35: Return(); Pop(0)

0xa36: @ StopGroup0()
0xa37: Pop(0)
0xa38: @ StopAsync()
0xa39: Pop(0)
0xa3a: Push("head")
0xa3b: @ UnlookAsync(Stack[-1])
0xa3c: Pop(1)
0xa3d: Push((int) 111)
0xa3e: @ KillTimer(Stack[-1])
0xa3f: Pop(1)
0xa40: Return(); Pop(0)

0xa41: PushEmpty()
0xa42: PushEmpty()
0xa43: Call2 0xa36

0xa44: Pop(0)
0xa45: PushEmpty(object)
0xa46: Stack[-1] = Stack[-2]
0xa47: Call2 0x11c0

0xa48: Pop(1)
0xa49: Return(); Pop(0)

0xa4a: PushEmpty(cvector, cvector, cvector, cvector)
0xa4b: Push((int) 111)
0xa4c: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xa4d: IF (Stack[-1] == 0) GOTO 0xa4f; Pop(1)

0xa4e: Return(); Pop(4)

0xa4f: PushEmpty(bool, object)
0xa50: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa51: Call2 0xded

0xa52: Pop(1)
0xa53: Pop(1); Push((bool) Stack[-1] == 0)
0xa54: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa55: PushEmpty()
0xa56: Call2 0xa36

0xa57: Pop(0)
0xa58: Return(); Pop(4)

0xa59: @ GetDirection(Stack[-2])
0xa5a: Pop(0)
0xa5b: PushEmpty(cvector, object)
0xa5c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa5d: Call2 0xda4

0xa5e: Stack[-3] = Stack[-2]
0xa5f: Pop(2)
0xa60: PushEmpty(float, cvector, cvector)
0xa61: Stack[-2] = Stack[-5]
0xa62: Stack[-1] = Stack[-4]
0xa63: Call2 0xf6d

0xa64: Pop(2)
0xa65: Push((float)0.5)
0xa66: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xa67: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa68: PushEmpty(object)
0xa69: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6a: Call2 0xe83

0xa6b: Pop(1)
0xa6c: Return(); Pop(4)

0xa6d: PushEmpty()
0xa6e: Call2 0xa36

0xa6f: Pop(0)
0xa70: PushEmpty()
0xa71: Call2 0x12fa

0xa72: Pop(0)
0xa73: Return(); Pop(0)

0xa74: PushEmpty()
0xa75: PushEmpty(bool, object)
0xa76: Stack[-1] = Stack[-3]
0xa77: Call2 0x1211

0xa78: Pop(1)
0xa79: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa7a: PushEmpty()
0xa7b: Call2 0xa36

0xa7c: Pop(0)
0xa7d: PushEmpty(object)
0xa7e: Stack[-1] = Stack[-2]
0xa7f: Call2 0x1228

0xa80: Pop(1)
0xa81: Return(); Pop(0)

0xa82: PushEmpty()
0xa83: @ Face(Stack[-1])
0xa84: Pop(0)
0xa85: Push("all")
0xa86: Push("attack_on")
0xa87: @ PlayAnimation(Stack[-2], Stack[-1])
0xa88: Pop(2)
0xa89: @ WaitForAnimEnd()
0xa8a: Pop(0)
0xa8b: Push("all")
0xa8c: Push("attack_stay")
0xa8d: @ PlayAnimation(Stack[-2], Stack[-1])
0xa8e: Pop(2)
0xa8f: @ WaitForAnimEnd()
0xa90: Pop(0)
0xa91: Push("all")
0xa92: Push("attack_off")
0xa93: @ PlayAnimation(Stack[-2], Stack[-1])
0xa94: Pop(2)
0xa95: @ WaitForAnimEnd()
0xa96: Pop(0)
0xa97: @ StopAsync()
0xa98: Pop(0)
0xa99: PushEmpty(object)
0xa9a: Stack[-1] = Stack[-2]
0xa9b: Call2 0xac3

0xa9c: Pop(1)
0xa9d: Return(); Pop(0)

0xa9e: PushEmpty()
0xa9f: Call2 0xb40

0xaa0: Pop(0)
0xaa1: PushEmpty()
0xaa2: Call2 0x12fa

0xaa3: Pop(0)
0xaa4: Return(); Pop(0)

0xaa5: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xaa6: @ GetPosition(Stack[-6])
0xaa7: Pop(0)
0xaa8: @@ GetPosition(Stack[-5])
0xaa9: Pop(0)
0xaaa: @ GetDirection(Stack[-4])
0xaab: Pop(0)
0xaac: PushEmpty(cvector, cvector)
0xaad: PushEmpty(cvector, cvector)
0xaae: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xaaf: Call2 0xf48

0xab0: Pop(1)
0xab1: Push((float)0.75)
0xab2: Pop(1); Push(Stack[-8] * Stack[-1]);
0xab3: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xab4: Call2 0xf48

0xab5: Stack[-5] = Stack[-2]
0xab6: Pop(2)
0xab7: Push((int) 32)
0xab8: Push((float)7000.0)
0xab9: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xaba: Pop(2)
0xabb: Push((int) 100)
0xabc: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xabd: Push((int) 0)
0xabe: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xabf: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xac0: Stack[-1] = (int) 0
0xac1: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xac2: Return(); Pop(12)

0xac3: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xac4: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xac5: PushEmpty(cvector, float)
0xac6: Stack[-1] = (float) 1.74533
0xac7: Call2 0xaa5

0xac8: Stack[-7] = Stack[-2]
0xac9: Pop(2)
0xaca: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xacb: Push((float)2500.0)
0xacc: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xacd: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xace: PushEmpty(cvector, float)
0xacf: Stack[-1] = (float) 2.61799
0xad0: Call2 0xaa5

0xad1: Stack[-7] = Stack[-2]
0xad2: Pop(2)
0xad3: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xad4: Push((float)2500.0)
0xad5: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xad6: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xad7: Push("Can't retreat, distance: ")
0xad8: Pop(0); Push(Sqrt(Stack[-5]))
0xad9: Pop(2); Push(Stack[-2] + Stack[-1]);
0xada: @ Trace(Stack[-1])
0xadb: Pop(1)
0xadc: Push((float)0.5)
0xadd: @ Sleep(Stack[-1])
0xade: Pop(1)
0xadf: Return(); Pop(10)

0xae0: Push(CvectorIndex(Stack[-5], 0))
0xae1: Push(CvectorIndex(Stack[-6], 2))
0xae2: @ Rotate(Stack[-2], Stack[-1])
0xae3: Pop(2)
0xae4: PushEmpty(cvector)
0xae5: Call2 0xd9f

0xae6: Pop(0)
0xae7: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xae8: Push((int) 120)
0xae9: Push((float)0.5)
0xaea: @ SetTimer(Stack[-2], Stack[-1])
0xaeb: Pop(2)
0xaec: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xaed: Push((int) 1)
0xaee: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xaef: Pop(1)
0xaf0: Push(Stack[-3])
0xaf1: IF (Stack[-1] == 0) GOTO 0xb09; Pop(1)

0xaf2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xaf3: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xaf4: GOTO 0xb0b

0xaf5: GOTO 0xb09

0xaf6: PushEmpty(cvector, float)
0xaf7: Stack[-1] = (float) 2.61799
0xaf8: Call2 0xaa5

0xaf9: Stack[-4] = Stack[-2]
0xafa: Pop(2)
0xafb: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xafc: Push((float)2500.0)
0xafd: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xafe: IF (Stack[-1] == 0) GOTO 0xb08; Pop(1)

0xaff: PushEmpty(cvector)
0xb00: Call2 0xd9f

0xb01: Pop(0)
0xb02: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb03: Push((int) 120)
0xb04: Push((float)0.5)
0xb05: @ SetTimer(Stack[-2], Stack[-1])
0xb06: Pop(2)
0xb07: GOTO 0xb09

0xb08: GOTO 0xb0b

0xb09: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xb0a: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xb0b: Return(); Pop(10)

0xb0c: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xb0d: Push((int) 120)
0xb0e: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xb0f: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb10: Return(); Pop(8)

0xb11: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xb12: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb13: @ Stop()
0xb14: Pop(0)
0xb15: Push((int) 1)
0xb16: @ KillTimer(Stack[-1])
0xb17: Pop(1)
0xb18: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb19: GOTO 0xb3f

0xb1a: @ GetDirection(Stack[-4])
0xb1b: Pop(0)
0xb1c: Push((float)7000.0)
0xb1d: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xb1e: Pop(1)
0xb1f: PushEmpty(cvector, float)
0xb20: Stack[-1] = (float) 1.74533
0xb21: Call2 0xaa5

0xb22: Stack[-4] = Stack[-2]
0xb23: Pop(2)
0xb24: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xb25: PushEmpty(bool)
0xb26: Stack[-1] = (bool) 0
0xb27: Push((float)2500.0)
0xb28: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xb29: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb2a: PushEmpty(bool)
0xb2b: Stack[-1] = (bool) 1
0xb2c: Pop(0); Push(Stack[-5] * Stack[-5]);
0xb2d: Push((float)2.25)
0xb2e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb2f: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xb30: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb31: PushEmpty(bool)
0xb32: Call2 0xb50

0xb33: Pop(0)
0xb34: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb35: Stack[-1] = (bool) 0
0xb36: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb37: Stack[-1] = (bool) 1
0xb38: IF (Stack[-1] == 0) GOTO 0xb3f; Pop(1)

0xb39: @ Stop()
0xb3a: Pop(0)
0xb3b: PushEmpty(cvector)
0xb3c: Call2 0xd9f

0xb3d: Pop(0)
0xb3e: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xb3f: Return(); Pop(8)

0xb40: @ Stop()
0xb41: Pop(0)
0xb42: Push((int) 120)
0xb43: @ KillTimer(Stack[-1])
0xb44: Pop(1)
0xb45: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xb46: Return(); Pop(0)

0xb47: PushEmpty()
0xb48: PushEmpty()
0xb49: Call2 0xb40

0xb4a: Pop(0)
0xb4b: PushEmpty(object)
0xb4c: Stack[-1] = Stack[-2]
0xb4d: Call2 0x11c0

0xb4e: Pop(1)
0xb4f: Return(); Pop(0)

0xb50: PushEmpty(cvector, cvector, cvector, cvector)
0xb51: @ GetDirection(Stack[-2])
0xb52: Pop(0)
0xb53: PushEmpty(cvector, object)
0xb54: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb55: Call2 0xda4

0xb56: Stack[-3] = Stack[-2]
0xb57: Pop(2)
0xb58: PushEmpty(float, cvector, cvector)
0xb59: Stack[-2] = Stack[-5]
0xb5a: Stack[-1] = Stack[-4]
0xb5b: Call2 0xf52

0xb5c: Pop(2)
0xb5d: Push((float)-0.34202)
0xb5e: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xb5f: Return(); Pop(4)

0xb60: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xb61: @ GetPosition(Stack[-6])
0xb62: Pop(0)
0xb63: @@ GetPosition(Stack[-5])
0xb64: Pop(0)
0xb65: @ GetDirection(Stack[-4])
0xb66: Pop(0)
0xb67: PushEmpty(cvector, cvector)
0xb68: PushEmpty(cvector, cvector)
0xb69: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xb6a: Call2 0xf48

0xb6b: Pop(1)
0xb6c: Push((float)0.75)
0xb6d: Pop(1); Push(Stack[-8] * Stack[-1]);
0xb6e: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xb6f: Call2 0xf48

0xb70: Stack[-5] = Stack[-2]
0xb71: Pop(2)
0xb72: Push((int) 32)
0xb73: Push((float)7000.0)
0xb74: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xb75: Pop(2)
0xb76: Push((int) 100)
0xb77: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xb78: Push((int) 0)
0xb79: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb7a: IF (Stack[-1] == 0) GOTO 0xb7c; Pop(1)

0xb7b: Stack[-1] = (int) 0
0xb7c: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xb7d: Return(); Pop(12)

0xb7e: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xb7f: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xb80: PushEmpty(cvector, float)
0xb81: Stack[-1] = (float) 1.74533
0xb82: Call2 0xb60

0xb83: Stack[-7] = Stack[-2]
0xb84: Pop(2)
0xb85: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb86: Push((float)2500.0)
0xb87: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb88: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb89: PushEmpty(cvector, float)
0xb8a: Stack[-1] = (float) 2.61799
0xb8b: Call2 0xb60

0xb8c: Stack[-7] = Stack[-2]
0xb8d: Pop(2)
0xb8e: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xb8f: Push((float)2500.0)
0xb90: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xb91: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb92: Push("Can't retreat, distance: ")
0xb93: Pop(0); Push(Sqrt(Stack[-5]))
0xb94: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb95: @ Trace(Stack[-1])
0xb96: Pop(1)
0xb97: Push((float)0.5)
0xb98: @ Sleep(Stack[-1])
0xb99: Pop(1)
0xb9a: Return(); Pop(10)

0xb9b: Push(CvectorIndex(Stack[-5], 0))
0xb9c: Push(CvectorIndex(Stack[-6], 2))
0xb9d: @ Rotate(Stack[-2], Stack[-1])
0xb9e: Pop(2)
0xb9f: PushEmpty(cvector)
0xba0: Call2 0xd9f

0xba1: Pop(0)
0xba2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xba3: Push((int) 120)
0xba4: Push((float)0.5)
0xba5: @ SetTimer(Stack[-2], Stack[-1])
0xba6: Pop(2)
0xba7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xba8: Push((int) 1)
0xba9: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xbaa: Pop(1)
0xbab: Push(Stack[-3])
0xbac: IF (Stack[-1] == 0) GOTO 0xbc4; Pop(1)

0xbad: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xbae: IF (Stack[-1] == 0) GOTO 0xbb1; Pop(1)

0xbaf: GOTO 0xbc6

0xbb0: GOTO 0xbc4

0xbb1: PushEmpty(cvector, float)
0xbb2: Stack[-1] = (float) 2.61799
0xbb3: Call2 0xb60

0xbb4: Stack[-4] = Stack[-2]
0xbb5: Pop(2)
0xbb6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbb7: Push((float)2500.0)
0xbb8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xbb9: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbba: PushEmpty(cvector)
0xbbb: Call2 0xd9f

0xbbc: Pop(0)
0xbbd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xbbe: Push((int) 120)
0xbbf: Push((float)0.5)
0xbc0: @ SetTimer(Stack[-2], Stack[-1])
0xbc1: Pop(2)
0xbc2: GOTO 0xbc4

0xbc3: GOTO 0xbc6

0xbc4: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xbc5: IF (Stack[-1] == 0) GOTO 0xba8; Pop(1)

0xbc6: Return(); Pop(10)

0xbc7: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xbc8: Push((int) 120)
0xbc9: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xbca: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbcb: Return(); Pop(8)

0xbcc: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xbcd: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbce: @ Stop()
0xbcf: Pop(0)
0xbd0: Push((int) 1)
0xbd1: @ KillTimer(Stack[-1])
0xbd2: Pop(1)
0xbd3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xbd4: GOTO 0xbfa

0xbd5: @ GetDirection(Stack[-4])
0xbd6: Pop(0)
0xbd7: Push((float)7000.0)
0xbd8: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xbd9: Pop(1)
0xbda: PushEmpty(cvector, float)
0xbdb: Stack[-1] = (float) 1.74533
0xbdc: Call2 0xb60

0xbdd: Stack[-4] = Stack[-2]
0xbde: Pop(2)
0xbdf: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xbe0: PushEmpty(bool)
0xbe1: Stack[-1] = (bool) 0
0xbe2: Push((float)2500.0)
0xbe3: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbe5: PushEmpty(bool)
0xbe6: Stack[-1] = (bool) 1
0xbe7: Pop(0); Push(Stack[-5] * Stack[-5]);
0xbe8: Push((float)2.25)
0xbe9: Pop(2); Push(Stack[-2] * Stack[-1]);
0xbea: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xbeb: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbec: PushEmpty(bool)
0xbed: Call2 0xc0b

0xbee: Pop(0)
0xbef: IF (Stack[-1] == 0) GOTO 0xbf1; Pop(1)

0xbf0: Stack[-1] = (bool) 0
0xbf1: IF (Stack[-1] == 0) GOTO 0xbf3; Pop(1)

0xbf2: Stack[-1] = (bool) 1
0xbf3: IF (Stack[-1] == 0) GOTO 0xbfa; Pop(1)

0xbf4: @ Stop()
0xbf5: Pop(0)
0xbf6: PushEmpty(cvector)
0xbf7: Call2 0xd9f

0xbf8: Pop(0)
0xbf9: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xbfa: Return(); Pop(8)

0xbfb: @ Stop()
0xbfc: Pop(0)
0xbfd: Push((int) 120)
0xbfe: @ KillTimer(Stack[-1])
0xbff: Pop(1)
0xc00: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc01: Return(); Pop(0)

0xc02: PushEmpty()
0xc03: PushEmpty()
0xc04: Call2 0xbfb

0xc05: Pop(0)
0xc06: PushEmpty(object)
0xc07: Stack[-1] = Stack[-2]
0xc08: Call2 0x11c0

0xc09: Pop(1)
0xc0a: Return(); Pop(0)

0xc0b: PushEmpty(cvector, cvector, cvector, cvector)
0xc0c: @ GetDirection(Stack[-2])
0xc0d: Pop(0)
0xc0e: PushEmpty(cvector, object)
0xc0f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc10: Call2 0xda4

0xc11: Stack[-3] = Stack[-2]
0xc12: Pop(2)
0xc13: PushEmpty(float, cvector, cvector)
0xc14: Stack[-2] = Stack[-5]
0xc15: Stack[-1] = Stack[-4]
0xc16: Call2 0xf52

0xc17: Pop(2)
0xc18: Push((float)-0.34202)
0xc19: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xc1a: Return(); Pop(4)

0xc1b: PushEmpty()
0xc1c: Call2 0xcbd

0xc1d: Pop(0)
0xc1e: PushEmpty()
0xc1f: Call2 0x12fa

0xc20: Pop(0)
0xc21: Return(); Pop(0)

0xc22: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xc23: @ GetPosition(Stack[-6])
0xc24: Pop(0)
0xc25: @@ GetPosition(Stack[-5])
0xc26: Pop(0)
0xc27: @ GetDirection(Stack[-4])
0xc28: Pop(0)
0xc29: PushEmpty(cvector, cvector)
0xc2a: PushEmpty(cvector, cvector)
0xc2b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xc2c: Call2 0xf48

0xc2d: Pop(1)
0xc2e: Push((float)0.75)
0xc2f: Pop(1); Push(Stack[-8] * Stack[-1]);
0xc30: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xc31: Call2 0xf48

0xc32: Stack[-5] = Stack[-2]
0xc33: Pop(2)
0xc34: Push((int) 32)
0xc35: Push((float)7000.0)
0xc36: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xc37: Pop(2)
0xc38: Push((int) 100)
0xc39: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xc3a: Push((int) 0)
0xc3b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xc3c: IF (Stack[-1] == 0) GOTO 0xc3e; Pop(1)

0xc3d: Stack[-1] = (int) 0
0xc3e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xc3f: Return(); Pop(12)

0xc40: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xc41: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xc42: PushEmpty(cvector, float)
0xc43: Stack[-1] = (float) 1.74533
0xc44: Call2 0xc22

0xc45: Stack[-7] = Stack[-2]
0xc46: Pop(2)
0xc47: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc48: Push((float)2500.0)
0xc49: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc4a: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc4b: PushEmpty(cvector, float)
0xc4c: Stack[-1] = (float) 2.61799
0xc4d: Call2 0xc22

0xc4e: Stack[-7] = Stack[-2]
0xc4f: Pop(2)
0xc50: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xc51: Push((float)2500.0)
0xc52: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xc53: IF (Stack[-1] == 0) GOTO 0xc5d; Pop(1)

0xc54: Push("Can't retreat, distance: ")
0xc55: Pop(0); Push(Sqrt(Stack[-5]))
0xc56: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc57: @ Trace(Stack[-1])
0xc58: Pop(1)
0xc59: Push((float)0.5)
0xc5a: @ Sleep(Stack[-1])
0xc5b: Pop(1)
0xc5c: Return(); Pop(10)

0xc5d: Push(CvectorIndex(Stack[-5], 0))
0xc5e: Push(CvectorIndex(Stack[-6], 2))
0xc5f: @ Rotate(Stack[-2], Stack[-1])
0xc60: Pop(2)
0xc61: PushEmpty(cvector)
0xc62: Call2 0xd9f

0xc63: Pop(0)
0xc64: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xc65: Push((int) 120)
0xc66: Push((float)0.5)
0xc67: @ SetTimer(Stack[-2], Stack[-1])
0xc68: Pop(2)
0xc69: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xc6a: Push((int) 1)
0xc6b: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xc6c: Pop(1)
0xc6d: Push(Stack[-3])
0xc6e: IF (Stack[-1] == 0) GOTO 0xc86; Pop(1)

0xc6f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc70: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc71: GOTO 0xc88

0xc72: GOTO 0xc86

0xc73: PushEmpty(cvector, float)
0xc74: Stack[-1] = (float) 2.61799
0xc75: Call2 0xc22

0xc76: Stack[-4] = Stack[-2]
0xc77: Pop(2)
0xc78: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xc79: Push((float)2500.0)
0xc7a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xc7b: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc7c: PushEmpty(cvector)
0xc7d: Call2 0xd9f

0xc7e: Pop(0)
0xc7f: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xc80: Push((int) 120)
0xc81: Push((float)0.5)
0xc82: @ SetTimer(Stack[-2], Stack[-1])
0xc83: Pop(2)
0xc84: GOTO 0xc86

0xc85: GOTO 0xc88

0xc86: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xc87: IF (Stack[-1] == 0) GOTO 0xc6a; Pop(1)

0xc88: Return(); Pop(10)

0xc89: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xc8a: Push((int) 120)
0xc8b: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xc8c: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc8d: Return(); Pop(8)

0xc8e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xc8f: IF (Stack[-1] == 0) GOTO 0xc97; Pop(1)

0xc90: @ Stop()
0xc91: Pop(0)
0xc92: Push((int) 1)
0xc93: @ KillTimer(Stack[-1])
0xc94: Pop(1)
0xc95: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xc96: GOTO 0xcbc

0xc97: @ GetDirection(Stack[-4])
0xc98: Pop(0)
0xc99: Push((float)7000.0)
0xc9a: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xc9b: Pop(1)
0xc9c: PushEmpty(cvector, float)
0xc9d: Stack[-1] = (float) 1.74533
0xc9e: Call2 0xc22

0xc9f: Stack[-4] = Stack[-2]
0xca0: Pop(2)
0xca1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xca2: PushEmpty(bool)
0xca3: Stack[-1] = (bool) 0
0xca4: Push((float)2500.0)
0xca5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xca6: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xca7: PushEmpty(bool)
0xca8: Stack[-1] = (bool) 1
0xca9: Pop(0); Push(Stack[-5] * Stack[-5]);
0xcaa: Push((float)2.25)
0xcab: Pop(2); Push(Stack[-2] * Stack[-1]);
0xcac: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcae: PushEmpty(bool)
0xcaf: Call2 0xccd

0xcb0: Pop(0)
0xcb1: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcb2: Stack[-1] = (bool) 0
0xcb3: IF (Stack[-1] == 0) GOTO 0xcb5; Pop(1)

0xcb4: Stack[-1] = (bool) 1
0xcb5: IF (Stack[-1] == 0) GOTO 0xcbc; Pop(1)

0xcb6: @ Stop()
0xcb7: Pop(0)
0xcb8: PushEmpty(cvector)
0xcb9: Call2 0xd9f

0xcba: Pop(0)
0xcbb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xcbc: Return(); Pop(8)

0xcbd: @ Stop()
0xcbe: Pop(0)
0xcbf: Push((int) 120)
0xcc0: @ KillTimer(Stack[-1])
0xcc1: Pop(1)
0xcc2: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xcc3: Return(); Pop(0)

0xcc4: PushEmpty()
0xcc5: PushEmpty()
0xcc6: Call2 0xcbd

0xcc7: Pop(0)
0xcc8: PushEmpty(object)
0xcc9: Stack[-1] = Stack[-2]
0xcca: Call2 0x11c0

0xccb: Pop(1)
0xccc: Return(); Pop(0)

0xccd: PushEmpty(cvector, cvector, cvector, cvector)
0xcce: @ GetDirection(Stack[-2])
0xccf: Pop(0)
0xcd0: PushEmpty(cvector, object)
0xcd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd2: Call2 0xda4

0xcd3: Stack[-3] = Stack[-2]
0xcd4: Pop(2)
0xcd5: PushEmpty(float, cvector, cvector)
0xcd6: Stack[-2] = Stack[-5]
0xcd7: Stack[-1] = Stack[-4]
0xcd8: Call2 0xf52

0xcd9: Pop(2)
0xcda: Push((float)-0.34202)
0xcdb: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xcdc: Return(); Pop(4)

0xcdd: PushEmpty()
0xcde: Call2 0xd7f

0xcdf: Pop(0)
0xce0: PushEmpty()
0xce1: Call2 0x12fa

0xce2: Pop(0)
0xce3: Return(); Pop(0)

0xce4: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xce5: @ GetPosition(Stack[-6])
0xce6: Pop(0)
0xce7: @@ GetPosition(Stack[-5])
0xce8: Pop(0)
0xce9: @ GetDirection(Stack[-4])
0xcea: Pop(0)
0xceb: PushEmpty(cvector, cvector)
0xcec: PushEmpty(cvector, cvector)
0xced: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xcee: Call2 0xf48

0xcef: Pop(1)
0xcf0: Push((float)0.75)
0xcf1: Pop(1); Push(Stack[-8] * Stack[-1]);
0xcf2: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xcf3: Call2 0xf48

0xcf4: Stack[-5] = Stack[-2]
0xcf5: Pop(2)
0xcf6: Push((int) 32)
0xcf7: Push((float)7000.0)
0xcf8: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xcf9: Pop(2)
0xcfa: Push((int) 100)
0xcfb: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xcfc: Push((int) 0)
0xcfd: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd00; Pop(1)

0xcff: Stack[-1] = (int) 0
0xd00: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xd01: Return(); Pop(12)

0xd02: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xd03: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xd04: PushEmpty(cvector, float)
0xd05: Stack[-1] = (float) 1.74533
0xd06: Call2 0xce4

0xd07: Stack[-7] = Stack[-2]
0xd08: Pop(2)
0xd09: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd0a: Push((float)2500.0)
0xd0b: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd0c: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd0d: PushEmpty(cvector, float)
0xd0e: Stack[-1] = (float) 2.61799
0xd0f: Call2 0xce4

0xd10: Stack[-7] = Stack[-2]
0xd11: Pop(2)
0xd12: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd13: Push((float)2500.0)
0xd14: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd15: IF (Stack[-1] == 0) GOTO 0xd1f; Pop(1)

0xd16: Push("Can't retreat, distance: ")
0xd17: Pop(0); Push(Sqrt(Stack[-5]))
0xd18: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd19: @ Trace(Stack[-1])
0xd1a: Pop(1)
0xd1b: Push((float)0.5)
0xd1c: @ Sleep(Stack[-1])
0xd1d: Pop(1)
0xd1e: Return(); Pop(10)

0xd1f: Push(CvectorIndex(Stack[-5], 0))
0xd20: Push(CvectorIndex(Stack[-6], 2))
0xd21: @ Rotate(Stack[-2], Stack[-1])
0xd22: Pop(2)
0xd23: PushEmpty(cvector)
0xd24: Call2 0xd9f

0xd25: Pop(0)
0xd26: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xd27: Push((int) 120)
0xd28: Push((float)0.5)
0xd29: @ SetTimer(Stack[-2], Stack[-1])
0xd2a: Pop(2)
0xd2b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd2c: Push((int) 1)
0xd2d: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xd2e: Pop(1)
0xd2f: Push(Stack[-3])
0xd30: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xd31: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd32: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd33: GOTO 0xd4a

0xd34: GOTO 0xd48

0xd35: PushEmpty(cvector, float)
0xd36: Stack[-1] = (float) 2.61799
0xd37: Call2 0xce4

0xd38: Stack[-4] = Stack[-2]
0xd39: Pop(2)
0xd3a: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd3b: Push((float)2500.0)
0xd3c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd3d: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd3e: PushEmpty(cvector)
0xd3f: Call2 0xd9f

0xd40: Pop(0)
0xd41: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd42: Push((int) 120)
0xd43: Push((float)0.5)
0xd44: @ SetTimer(Stack[-2], Stack[-1])
0xd45: Pop(2)
0xd46: GOTO 0xd48

0xd47: GOTO 0xd4a

0xd48: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd49: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd4a: Return(); Pop(10)

0xd4b: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xd4c: Push((int) 120)
0xd4d: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xd4e: IF (Stack[-1] == 0) GOTO 0xd50; Pop(1)

0xd4f: Return(); Pop(8)

0xd50: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd51: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd52: @ Stop()
0xd53: Pop(0)
0xd54: Push((int) 1)
0xd55: @ KillTimer(Stack[-1])
0xd56: Pop(1)
0xd57: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd58: GOTO 0xd7e

0xd59: @ GetDirection(Stack[-4])
0xd5a: Pop(0)
0xd5b: Push((float)7000.0)
0xd5c: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xd5d: Pop(1)
0xd5e: PushEmpty(cvector, float)
0xd5f: Stack[-1] = (float) 1.74533
0xd60: Call2 0xce4

0xd61: Stack[-4] = Stack[-2]
0xd62: Pop(2)
0xd63: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd64: PushEmpty(bool)
0xd65: Stack[-1] = (bool) 0
0xd66: Push((float)2500.0)
0xd67: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xd68: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd69: PushEmpty(bool)
0xd6a: Stack[-1] = (bool) 1
0xd6b: Pop(0); Push(Stack[-5] * Stack[-5]);
0xd6c: Push((float)2.25)
0xd6d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xd6e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xd6f: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd70: PushEmpty(bool)
0xd71: Call2 0xd8f

0xd72: Pop(0)
0xd73: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd74: Stack[-1] = (bool) 0
0xd75: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd76: Stack[-1] = (bool) 1
0xd77: IF (Stack[-1] == 0) GOTO 0xd7e; Pop(1)

0xd78: @ Stop()
0xd79: Pop(0)
0xd7a: PushEmpty(cvector)
0xd7b: Call2 0xd9f

0xd7c: Pop(0)
0xd7d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd7e: Return(); Pop(8)

0xd7f: @ Stop()
0xd80: Pop(0)
0xd81: Push((int) 120)
0xd82: @ KillTimer(Stack[-1])
0xd83: Pop(1)
0xd84: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd85: Return(); Pop(0)

0xd86: PushEmpty()
0xd87: PushEmpty()
0xd88: Call2 0xd7f

0xd89: Pop(0)
0xd8a: PushEmpty(object)
0xd8b: Stack[-1] = Stack[-2]
0xd8c: Call2 0x11c0

0xd8d: Pop(1)
0xd8e: Return(); Pop(0)

0xd8f: PushEmpty(cvector, cvector, cvector, cvector)
0xd90: @ GetDirection(Stack[-2])
0xd91: Pop(0)
0xd92: PushEmpty(cvector, object)
0xd93: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd94: Call2 0xda4

0xd95: Stack[-3] = Stack[-2]
0xd96: Pop(2)
0xd97: PushEmpty(float, cvector, cvector)
0xd98: Stack[-2] = Stack[-5]
0xd99: Stack[-1] = Stack[-4]
0xd9a: Call2 0xf52

0xd9b: Pop(2)
0xd9c: Push((float)-0.34202)
0xd9d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xd9e: Return(); Pop(4)

0xd9f: PushEmpty(cvector, cvector)
0xda0: @ GetPosition(Stack[-1])
0xda1: Pop(0)
0xda2: Stack[-3] = Stack[-1]
0xda3: Return(); Pop(2)

0xda4: PushEmpty(cvector, cvector, cvector, cvector)
0xda5: @ GetPosition(Stack[-2])
0xda6: Pop(0)
0xda7: @@ GetPosition(Stack[-1])
0xda8: Pop(0)
0xda9: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0xdaa: Return(); Pop(4)

0xdab: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xdac: @ GetPosition(Stack[-3])
0xdad: Pop(0)
0xdae: @@ GetPosition(Stack[-2])
0xdaf: Pop(0)
0xdb0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xdb1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xdb2: Return(); Pop(6)

0xdb3: PushEmpty(bool, bool)
0xdb4: @ IsPlayerActor(Stack[-3], Stack[-1])
0xdb5: Pop(0)
0xdb6: Stack[-4] = Stack[-1]
0xdb7: Return(); Pop(2)

0xdb8: PushEmpty(bool, bool)
0xdb9: Push("HasProperty")
0xdba: Push((int) 2)
0xdbb: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xdbc: Pop(1); Push((bool) Stack[-1] == 0)
0xdbd: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdbe: Stack[-5] = (bool) 0
0xdbf: Return(); Pop(2)

0xdc0: @@ HasProperty(Stack[-3], Stack[-1])
0xdc1: Pop(0)
0xdc2: Stack[-5] = Stack[-1]
0xdc3: Return(); Pop(2)

0xdc4: PushEmpty(bool, bool)
0xdc5: @@ IsDead(Stack[-1])
0xdc6: Pop(0)
0xdc7: Stack[-4] = Stack[-1]
0xdc8: Return(); Pop(2)

0xdc9: PushEmpty(object, object, object, object)
0xdca: Pop(0); Push((bool) Stack[-5] == 0)
0xdcb: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdcc: Stack[-6] = (bool) 0
0xdcd: Return(); Pop(4)

0xdce: PushEmpty(bool)
0xdcf: Stack[-1] = (bool) 0
0xdd0: Push("IsDead")
0xdd1: Push((int) 1)
0xdd2: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xdd3: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd4: PushEmpty(bool, object)
0xdd5: Stack[-1] = Stack[-8]
0xdd6: Call2 0xdc4

0xdd7: Pop(1)
0xdd8: IF (Stack[-1] == 0) GOTO 0xdda; Pop(1)

0xdd9: Stack[-1] = (bool) 1
0xdda: IF (Stack[-1] == 0) GOTO 0xddd; Pop(1)

0xddb: Stack[-6] = (bool) 0
0xddc: Return(); Pop(4)

0xddd: @ GetScene(Stack[-2])
0xdde: Pop(0)
0xddf: Pop(0); Push((bool) Stack[-2] == 0)
0xde0: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xde1: Stack[-6] = (bool) 0
0xde2: Return(); Pop(4)

0xde3: @@ GetScene(Stack[-1])
0xde4: Pop(0)
0xde5: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xde6: IF (Stack[-1] == 0) GOTO 0xde9; Pop(1)

0xde7: Stack[-6] = (bool) 0
0xde8: Return(); Pop(4)

0xde9: Stack[-6] = (bool) 1
0xdea: Return(); Pop(4)

0xdeb: Stack[-1] = 0
0xdec: Stack[-2] = 0
0xded: PushEmpty(int, int)
0xdee: PushEmpty(bool, object)
0xdef: Stack[-1] = Stack[-5]
0xdf0: Call2 0xdc9

0xdf1: Pop(1)
0xdf2: Pop(1); Push((bool) Stack[-1] == 0)
0xdf3: IF (Stack[-1] == 0) GOTO 0xdf6; Pop(1)

0xdf4: Stack[-4] = (bool) 0
0xdf5: Return(); Pop(2)

0xdf6: PushEmpty(bool, object, string)
0xdf7: Stack[-2] = Stack[-6]
0xdf8: Stack[-1] = "noaccess"
0xdf9: Call2 0xdb8

0xdfa: Pop(2)
0xdfb: Pop(1); Push((bool) Stack[-1] == 0)
0xdfc: IF (Stack[-1] == 0) GOTO 0xdff; Pop(1)

0xdfd: Stack[-4] = (bool) 1
0xdfe: Return(); Pop(2)

0xdff: Push("noaccess")
0xe00: @@ GetProperty(Stack[-1], Stack[-2])
0xe01: Pop(1)
0xe02: Push((int) 0)
0xe03: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xe04: Return(); Pop(2)

0xe05: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0xe06: Pop(0); Push((bool) Stack[-15] == 0)
0xe07: IF (Stack[-1] == 0) GOTO 0xe09; Pop(1)

0xe08: Return(); Pop(14)

0xe09: @ IsDead(Stack[-7])
0xe0a: Pop(0)
0xe0b: Push(Stack[-7])
0xe0c: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xe0d: Return(); Pop(14)

0xe0e: @ GetSecondaryAnimationType(Stack[-6])
0xe0f: Pop(0)
0xe10: Push((int) 0)
0xe11: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xe12: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe13: Return(); Pop(14)

0xe14: @@ GetPosition(Stack[-5])
0xe15: Pop(0)
0xe16: @ GetPosition(Stack[-4])
0xe17: Pop(0)
0xe18: @ GetDirection(Stack[-3])
0xe19: Pop(0)
0xe1a: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0xe1b: Push(CvectorIndex(Stack[-2], 0))
0xe1c: Push(CvectorIndex(Stack[-4], 0))
0xe1d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe1e: Push(CvectorIndex(Stack[-3], 2))
0xe1f: Push(CvectorIndex(Stack[-5], 2))
0xe20: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe21: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe22: Push((int) 0)
0xe23: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe24: IF (Stack[-1] == 0) GOTO 0xe27; Pop(1)

0xe25: Stack[-1] = "fhit"
0xe26: GOTO 0xe28

0xe27: Stack[-1] = "bhit"
0xe28: Push("hit_react")
0xe29: Push("1")
0xe2a: Pop(1); Push(Stack[-3] + Stack[-1]);
0xe2b: Push("2")
0xe2c: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe2d: Push((int) -10)
0xe2e: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe2f: Pop(4)
0xe30: Return(); Pop(14)

0xe31: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0xe32: PushEmpty(bool)
0xe33: Stack[-1] = (bool) 0
0xe34: PushEmpty(bool)
0xe35: Stack[-1] = (bool) 0
0xe36: Push(Stack[-23])
0xe37: IF (Stack[-1] == 0) GOTO 0xe3c; Pop(1)

0xe38: Push((int) 4)
0xe39: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0xe3a: IF (Stack[-1] == 0) GOTO 0xe3c; Pop(1)

0xe3b: Stack[-1] = (bool) 1
0xe3c: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe3d: Push((int) 5)
0xe3e: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0xe3f: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe40: Stack[-1] = (bool) 1
0xe41: IF (Stack[-1] == 0) GOTO 0xe70; Pop(1)

0xe42: PushEmpty(cvector, cvector)
0xe43: PushEmpty(cvector, object)
0xe44: Stack[-1] = Stack[-25]
0xe45: Call2 0xda4

0xe46: Stack[-3] = Stack[-2]
0xe47: Pop(2)
0xe48: Call2 0xf48

0xe49: Stack[-11] = Stack[-2]
0xe4a: Pop(2)
0xe4b: @ CreateVectorVector(Stack[-8])
0xe4c: Pop(0)
0xe4d: Stack[-7] = (int) 1
0xe4e: Push("hit")
0xe4f: Pop(1); Push(Stack[-1] + Stack[-8]);
0xe50: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0xe51: Pop(1)
0xe52: Pop(0); Push((bool) Stack[-6] == 0)
0xe53: IF (Stack[-1] == 0) GOTO 0xe55; Pop(1)

0xe54: GOTO 0xe5e

0xe55: Pop(0); Push(Stack[-4] | Stack[-9]);
0xe56: Push((float)0.70711)
0xe57: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe59: @@ add(Stack[-5])
0xe5a: Pop(0)
0xe5b: Push((int) 1)
0xe5c: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xe5d: GOTO 0xe4e

0xe5e: @@ size(Stack[-3])
0xe5f: Pop(0)
0xe60: Push(Stack[-3])
0xe61: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe62: @ irand(Stack[-2], Stack[-3])
0xe63: Pop(0)
0xe64: @@ get(Stack[-1], Stack[-2])
0xe65: Pop(0)
0xe66: PushEmpty(object, int, float, cvector, cvector)
0xe67: Stack[-5] = Stack[-26]
0xe68: Stack[-4] = Stack[-25]
0xe69: Stack[-3] = Stack[-24]
0xe6a: Stack[-2] = Stack[-6]
0xe6b: Stack[-1] = -Stack[-14]; Pop(0);
0xe6c: Call2 0xe75

0xe6d: Pop(5)
0xe6e: Return(); Pop(18)

0xe6f: Stack[-8] = 0
0xe70: PushEmpty(object)
0xe71: Stack[-1] = Stack[-22]
0xe72: Call2 0xe05

0xe73: Pop(1)
0xe74: Return(); Pop(18)

0xe75: PushEmpty(object, object, object, object)
0xe76: @ GetScene(Stack[-2])
0xe77: Pop(0)
0xe78: Push("scripted")
0xe79: Push("blood_dir.xml")
0xe7a: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0xe7b: Pop(2)
0xe7c: PushEmpty(object)
0xe7d: Stack[-1] = Stack[-10]
0xe7e: Call2 0xe05

0xe7f: Pop(1)
0xe80: Return(); Pop(4)

0xe81: Stack[-1] = 0
0xe82: Stack[-2] = 0
0xe83: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe84: @@ GetPosition(Stack[-3])
0xe85: Pop(0)
0xe86: @ GetPosition(Stack[-2])
0xe87: Pop(0)
0xe88: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xe89: Push(CvectorIndex(Stack[-1], 0))
0xe8a: Push(CvectorIndex(Stack[-2], 2))
0xe8b: @ RotateAsync(Stack[-2], Stack[-1])
0xe8c: Pop(2)
0xe8d: Return(); Pop(6)

0xe8e: PushEmpty(bool, bool)
0xe8f: @ IsLoaded(Stack[-1])
0xe90: Pop(0)
0xe91: Stack[-3] = Stack[-1]
0xe92: Return(); Pop(2)

0xe93: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xe94: @@ GetPosition(Stack[-8])
0xe95: Pop(0)
0xe96: @@ GetEyesHeight(Stack[-9])
0xe97: Pop(0)
0xe98: Push(CvectorIndex(Stack[-8], 1))
0xe99: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe9a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xe9b: @ GetPosition(Stack[-7])
0xe9c: Pop(0)
0xe9d: @ GetEyesHeight(Stack[-9])
0xe9e: Pop(0)
0xe9f: Push(CvectorIndex(Stack[-7], 1))
0xea0: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xea1: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xea2: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xea3: Push(CvectorIndex(Stack[-6], 1))
0xea4: Stack[-1] = (int) 0
0xea5: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xea6: Pop(0); Push(Stack[-6] | Stack[-6]);
0xea7: Pop(1); Push(Sqrt(Stack[-1]))
0xea8: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xea9: Stack[-5] = -Stack[-6]; Pop(0);
0xeaa: Pop(0); Push(Stack[-6] * Stack[-19]);
0xeab: PushEmpty(cvector, cvector)
0xeac: Push(CVector(0.0, 1.0, 0.0))
0xead: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xeae: Call2 0xf48

0xeaf: Pop(1)
0xeb0: Push((int) 25)
0xeb1: Pop(2); Push(Stack[-2] * Stack[-1]);
0xeb2: Pop(2); Push(Stack[-2] + Stack[-1]);
0xeb3: Push(CVector(0.0, 10.0, 0.0))
0xeb4: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xeb5: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xeb6: @ IsOverrideActive(Stack[-2])
0xeb7: Pop(0)
0xeb8: Push(Stack[-2])
0xeb9: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xeba: Stack[-21] = (bool) 0
0xebb: Return(); Pop(18)

0xebc: @ StopWorld()
0xebd: Pop(0)
0xebe: @ CameraTransit(Stack[-3], Stack[-5])
0xebf: Pop(0)
0xec0: Push(CvectorIndex(Stack[-4], 0))
0xec1: Push(CvectorIndex(Stack[-5], 2))
0xec2: @ Rotate(Stack[-2], Stack[-1])
0xec3: Pop(2)
0xec4: PushEmpty(bool)
0xec5: Call2 0x1339

0xec6: Pop(0)
0xec7: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec8: GOTO 0xed1

0xec9: Push("head")
0xeca: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xecb: Pop(1)
0xecc: Push(Stack[-1])
0xecd: IF (Stack[-1] == 0) GOTO 0xed1; Pop(1)

0xece: Push("head")
0xecf: @ LookAsyncCamera(Stack[-1])
0xed0: Pop(1)
0xed1: @ CameraWaitForPlayFinish()
0xed2: Pop(0)
0xed3: @ ResumeWorld()
0xed4: Pop(0)
0xed5: Stack[-21] = (bool) 1
0xed6: Return(); Pop(18)

0xed7: PushEmpty(bool, bool)
0xed8: @ CameraSwitchToNormal()
0xed9: Pop(0)
0xeda: PushEmpty(bool)
0xedb: Call2 0x1339

0xedc: Pop(0)
0xedd: IF (Stack[-1] == 0) GOTO 0xedf; Pop(1)

0xede: GOTO 0xee7

0xedf: Push("head")
0xee0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xee1: Pop(1)
0xee2: Push(Stack[-1])
0xee3: IF (Stack[-1] == 0) GOTO 0xee7; Pop(1)

0xee4: Push("head")
0xee5: @ UnlookAsync(Stack[-1])
0xee6: Pop(1)
0xee7: Return(); Pop(2)

0xee8: PushEmpty(bool, float, float, bool, float, float)
0xee9: @ lshHasAnimation(Stack[-3], Stack[-7])
0xeea: Pop(0)
0xeeb: Push(Stack[-3])
0xeec: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xeed: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xeee: Pop(0)
0xeef: Push((bool) 0)
0xef0: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xef1: Pop(1)
0xef2: GOTO 0xef7

0xef3: Push("Can't find lsh animation : ")
0xef4: Pop(1); Push(Stack[-1] + Stack[-8]);
0xef5: @ Trace(Stack[-1])
0xef6: Pop(1)
0xef7: Return(); Pop(6)

0xef8: PushEmpty(bool, float, float, bool, float, float)
0xef9: @ lshHasAnimation(Stack[-3], Stack[-8])
0xefa: Pop(0)
0xefb: Push(Stack[-3])
0xefc: IF (Stack[-1] == 0) GOTO 0xf02; Pop(1)

0xefd: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xefe: Pop(0)
0xeff: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf00: Pop(0)
0xf01: GOTO 0xf06

0xf02: Push("Can't find lsh animation : ")
0xf03: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf04: @ Trace(Stack[-1])
0xf05: Pop(1)
0xf06: Return(); Pop(6)

0xf07: PushEmpty(float, cvector, float, cvector)
0xf08: @@ GetEyesHeight(Stack[-2])
0xf09: Pop(0)
0xf0a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xf0b: Push(CvectorIndex(Stack[-1], 1))
0xf0c: Stack[-1] = Stack[-3]
0xf0d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf0e: Push("head")
0xf0f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xf10: Pop(1)
0xf11: Return(); Pop(4)

0xf12: PushEmpty(bool)
0xf13: Call2 0x1339

0xf14: Pop(0)
0xf15: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xf16: @ lshStopSpeech()
0xf17: Pop(0)
0xf18: Return(); Pop(0)

0xf19: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0xf1a: @ IsExisting3DSound(Stack[-8], Stack[-17])
0xf1b: Pop(0)
0xf1c: Pop(0); Push((bool) Stack[-8] == 0)
0xf1d: IF (Stack[-1] == 0) GOTO 0xf32; Pop(1)

0xf1e: Stack[-7] = (int) 0
0xf1f: Push((int) 1)
0xf20: Pop(1); Push(Stack[-8] + Stack[-1]);
0xf21: Pop(1); Push(Stack[-18] + Stack[-1]);
0xf22: @ IsExisting3DSound(Stack[-7], Stack[-1])
0xf23: Pop(1)
0xf24: Pop(0); Push((bool) Stack[-6] == 0)
0xf25: IF (Stack[-1] == 0) GOTO 0xf27; Pop(1)

0xf26: GOTO 0xf2a

0xf27: Push((int) 1)
0xf28: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xf29: GOTO 0xf1f

0xf2a: Pop(0); Push((bool) Stack[-7] == 0)
0xf2b: IF (Stack[-1] == 0) GOTO 0xf2d; Pop(1)

0xf2c: Return(); Pop(16)

0xf2d: @ irand(Stack[-5], Stack[-7])
0xf2e: Pop(0)
0xf2f: Push((int) 1)
0xf30: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf31: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0xf32: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0xf33: Pop(0)
0xf34: Push(Stack[-4])
0xf35: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf36: @ GetEyesHeight(Stack[-3])
0xf37: Pop(0)
0xf38: @ GetDirection(Stack[-2])
0xf39: Pop(0)
0xf3a: Push((int) 50)
0xf3b: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0xf3c: Push(CvectorIndex(Stack[-1], 1))
0xf3d: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0xf3e: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xf3f: @ PlayGlobalSound(Stack[-17], Stack[-1])
0xf40: Pop(0)
0xf41: Return(); Pop(16)

0xf42: PushEmpty(object, object)
0xf43: @ self(Stack[-1])
0xf44: Pop(0)
0xf45: Stack[-3] = Stack[-1]
0xf46: Return(); Pop(2)

0xf47: Stack[-1] = 0
0xf48: PushEmpty(float, float)
0xf49: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf4a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf4b: Push((float)0.0)
0xf4c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf4d: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf4f: Return(); Pop(2)

0xf50: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf51: Return(); Pop(2)

0xf52: PushEmpty()
0xf53: Pop(0); Push(Stack[-2] | Stack[-1]);
0xf54: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf55: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf56: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf57: Pop(1); Push(Sqrt(Stack[-1]))
0xf58: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xf59: Return(); Pop(0)

0xf5a: PushEmpty()
0xf5b: Push(CvectorIndex(Stack[-2], 0))
0xf5c: Push(CvectorIndex(Stack[-2], 0))
0xf5d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf5e: Push(CvectorIndex(Stack[-3], 2))
0xf5f: Push(CvectorIndex(Stack[-3], 2))
0xf60: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf61: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf62: Return(); Pop(0)

0xf63: PushEmpty()
0xf64: Push(CvectorIndex(Stack[-1], 0))
0xf65: Push(CvectorIndex(Stack[-2], 0))
0xf66: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf67: Push(CvectorIndex(Stack[-2], 2))
0xf68: Push(CvectorIndex(Stack[-3], 2))
0xf69: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf6a: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf6b: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xf6c: Return(); Pop(0)

0xf6d: PushEmpty()
0xf6e: PushEmpty(float, cvector, cvector)
0xf6f: Stack[-2] = Stack[-5]
0xf70: Stack[-1] = Stack[-4]
0xf71: Call2 0xf5a

0xf72: Pop(2)
0xf73: PushEmpty(float, cvector)
0xf74: Stack[-1] = Stack[-5]
0xf75: Call2 0xf63

0xf76: Pop(1)
0xf77: PushEmpty(float, cvector)
0xf78: Stack[-1] = Stack[-5]
0xf79: Call2 0xf63

0xf7a: Pop(1)
0xf7b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf7c: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xf7d: Return(); Pop(0)

0xf7e: PushEmpty(int, int)
0xf7f: @ GetVariable(Stack[-3], Stack[-1])
0xf80: Pop(0)
0xf81: Stack[-4] = Stack[-1]
0xf82: Return(); Pop(2)

0xf83: PushEmpty(float, float)
0xf84: @ GetGameTime(Stack[-1])
0xf85: Pop(0)
0xf86: Push((int) 1)
0xf87: PushEmpty(int)
0xf88: Push((int) 24)
0xf89: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xf8a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xf8b: Return(); Pop(2)

0xf8c: PushEmpty()
0xf8d: PushEmpty(int, string)
0xf8e: Stack[-1] = "branch"
0xf8f: Call2 0xf7e

0xf90: Pop(1)
0xf91: Push((int) 0)
0xf92: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf93: IF (Stack[-1] == 0) GOTO 0xf96; Pop(1)

0xf94: Stack[-2] = (bool) 1
0xf95: Return(); Pop(0)

0xf96: Stack[-2] = (bool) 0
0xf97: Return(); Pop(0)

0xf98: PushEmpty()
0xf99: PushEmpty(int, string)
0xf9a: Stack[-1] = "branch"
0xf9b: Call2 0xf7e

0xf9c: Pop(1)
0xf9d: Push((int) 2)
0xf9e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf9f: IF (Stack[-1] == 0) GOTO 0xfa2; Pop(1)

0xfa0: Stack[-2] = (bool) 1
0xfa1: Return(); Pop(0)

0xfa2: Stack[-2] = (bool) 0
0xfa3: Return(); Pop(0)

0xfa4: PushEmpty()
0xfa5: PushEmpty(bool, object)
0xfa6: Stack[-1] = Stack[-3]
0xfa7: Call2 0x1026

0xfa8: Pop(1)
0xfa9: IF (Stack[-1] == 0) GOTO 0xfac; Pop(1)

0xfaa: Stack[-2] = (bool) 1
0xfab: Return(); Pop(0)

0xfac: Stack[-2] = (bool) 0
0xfad: Return(); Pop(0)

0xfae: PushEmpty()
0xfaf: PushEmpty(bool, object)
0xfb0: Stack[-1] = Stack[-3]
0xfb1: Call2 0x1029

0xfb2: Pop(1)
0xfb3: IF (Stack[-1] == 0) GOTO 0xfb6; Pop(1)

0xfb4: Stack[-2] = (bool) 1
0xfb5: Return(); Pop(0)

0xfb6: Stack[-2] = (bool) 0
0xfb7: Return(); Pop(0)

0xfb8: PushEmpty()
0xfb9: PushEmpty(bool, object)
0xfba: Stack[-1] = Stack[-3]
0xfbb: Call2 0x1030

0xfbc: Pop(1)
0xfbd: IF (Stack[-1] == 0) GOTO 0xfc0; Pop(1)

0xfbe: Stack[-2] = (bool) 1
0xfbf: Return(); Pop(0)

0xfc0: Stack[-2] = (bool) 0
0xfc1: Return(); Pop(0)

0xfc2: PushEmpty()
0xfc3: PushEmpty(bool, object)
0xfc4: Stack[-1] = Stack[-3]
0xfc5: Call2 0x1037

0xfc6: Pop(1)
0xfc7: IF (Stack[-1] == 0) GOTO 0xfca; Pop(1)

0xfc8: Stack[-2] = (bool) 1
0xfc9: Return(); Pop(0)

0xfca: Stack[-2] = (bool) 0
0xfcb: Return(); Pop(0)

0xfcc: PushEmpty()
0xfcd: PushEmpty(bool, object)
0xfce: Stack[-1] = Stack[-3]
0xfcf: Call2 0x103e

0xfd0: Pop(1)
0xfd1: IF (Stack[-1] == 0) GOTO 0xfd4; Pop(1)

0xfd2: Stack[-2] = (bool) 1
0xfd3: Return(); Pop(0)

0xfd4: Stack[-2] = (bool) 0
0xfd5: Return(); Pop(0)

0xfd6: PushEmpty()
0xfd7: PushEmpty(bool, object)
0xfd8: Stack[-1] = Stack[-3]
0xfd9: Call2 0x1045

0xfda: Pop(1)
0xfdb: IF (Stack[-1] == 0) GOTO 0xfde; Pop(1)

0xfdc: Stack[-2] = (bool) 1
0xfdd: Return(); Pop(0)

0xfde: Stack[-2] = (bool) 0
0xfdf: Return(); Pop(0)

0xfe0: PushEmpty()
0xfe1: PushEmpty(bool, object)
0xfe2: Stack[-1] = Stack[-3]
0xfe3: Call2 0x104c

0xfe4: Pop(1)
0xfe5: IF (Stack[-1] == 0) GOTO 0xfe8; Pop(1)

0xfe6: Stack[-2] = (bool) 1
0xfe7: Return(); Pop(0)

0xfe8: Stack[-2] = (bool) 0
0xfe9: Return(); Pop(0)

0xfea: PushEmpty()
0xfeb: PushEmpty(bool, object)
0xfec: Stack[-1] = Stack[-3]
0xfed: Call2 0x1053

0xfee: Pop(1)
0xfef: IF (Stack[-1] == 0) GOTO 0xff2; Pop(1)

0xff0: Stack[-2] = (bool) 1
0xff1: Return(); Pop(0)

0xff2: Stack[-2] = (bool) 0
0xff3: Return(); Pop(0)

0xff4: PushEmpty()
0xff5: PushEmpty(bool, object)
0xff6: Stack[-1] = Stack[-3]
0xff7: Call2 0x105a

0xff8: Pop(1)
0xff9: IF (Stack[-1] == 0) GOTO 0xffc; Pop(1)

0xffa: Stack[-2] = (bool) 1
0xffb: Return(); Pop(0)

0xffc: Stack[-2] = (bool) 0
0xffd: Return(); Pop(0)

0xffe: PushEmpty()
0xfff: PushEmpty(bool, object)
0x1000: Stack[-1] = Stack[-3]
0x1001: Call2 0x1061

0x1002: Pop(1)
0x1003: IF (Stack[-1] == 0) GOTO 0x1006; Pop(1)

0x1004: Stack[-2] = (bool) 1
0x1005: Return(); Pop(0)

0x1006: Stack[-2] = (bool) 0
0x1007: Return(); Pop(0)

0x1008: PushEmpty()
0x1009: PushEmpty(bool, object)
0x100a: Stack[-1] = Stack[-3]
0x100b: Call2 0x1068

0x100c: Pop(1)
0x100d: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100e: Stack[-2] = (bool) 1
0x100f: Return(); Pop(0)

0x1010: Stack[-2] = (bool) 0
0x1011: Return(); Pop(0)

0x1012: PushEmpty()
0x1013: PushEmpty(bool, object)
0x1014: Stack[-1] = Stack[-3]
0x1015: Call2 0x106f

0x1016: Pop(1)
0x1017: IF (Stack[-1] == 0) GOTO 0x101a; Pop(1)

0x1018: Stack[-2] = (bool) 1
0x1019: Return(); Pop(0)

0x101a: Stack[-2] = (bool) 0
0x101b: Return(); Pop(0)

0x101c: PushEmpty()
0x101d: PushEmpty(bool, object)
0x101e: Stack[-1] = Stack[-3]
0x101f: Call2 0x1076

0x1020: Pop(1)
0x1021: IF (Stack[-1] == 0) GOTO 0x1024; Pop(1)

0x1022: Stack[-2] = (bool) 1
0x1023: Return(); Pop(0)

0x1024: Stack[-2] = (bool) 0
0x1025: Return(); Pop(0)

0x1026: PushEmpty()
0x1027: Stack[-2] = (bool) 0
0x1028: Return(); Pop(0)

0x1029: PushEmpty()
0x102a: PushEmpty(int)
0x102b: Call2 0xf83

0x102c: Pop(0)
0x102d: Push((int) 1)
0x102e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x102f: Return(); Pop(0)

0x1030: PushEmpty()
0x1031: PushEmpty(int)
0x1032: Call2 0xf83

0x1033: Pop(0)
0x1034: Push((int) 2)
0x1035: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1036: Return(); Pop(0)

0x1037: PushEmpty()
0x1038: PushEmpty(int)
0x1039: Call2 0xf83

0x103a: Pop(0)
0x103b: Push((int) 3)
0x103c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x103d: Return(); Pop(0)

0x103e: PushEmpty()
0x103f: PushEmpty(int)
0x1040: Call2 0xf83

0x1041: Pop(0)
0x1042: Push((int) 4)
0x1043: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1044: Return(); Pop(0)

0x1045: PushEmpty()
0x1046: PushEmpty(int)
0x1047: Call2 0xf83

0x1048: Pop(0)
0x1049: Push((int) 5)
0x104a: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x104b: Return(); Pop(0)

0x104c: PushEmpty()
0x104d: PushEmpty(int)
0x104e: Call2 0xf83

0x104f: Pop(0)
0x1050: Push((int) 6)
0x1051: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1052: Return(); Pop(0)

0x1053: PushEmpty()
0x1054: PushEmpty(int)
0x1055: Call2 0xf83

0x1056: Pop(0)
0x1057: Push((int) 7)
0x1058: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1059: Return(); Pop(0)

0x105a: PushEmpty()
0x105b: PushEmpty(int)
0x105c: Call2 0xf83

0x105d: Pop(0)
0x105e: Push((int) 8)
0x105f: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1060: Return(); Pop(0)

0x1061: PushEmpty()
0x1062: PushEmpty(int)
0x1063: Call2 0xf83

0x1064: Pop(0)
0x1065: Push((int) 9)
0x1066: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1067: Return(); Pop(0)

0x1068: PushEmpty()
0x1069: PushEmpty(int)
0x106a: Call2 0xf83

0x106b: Pop(0)
0x106c: Push((int) 10)
0x106d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x106e: Return(); Pop(0)

0x106f: PushEmpty()
0x1070: PushEmpty(int)
0x1071: Call2 0xf83

0x1072: Pop(0)
0x1073: Push((int) 11)
0x1074: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1075: Return(); Pop(0)

0x1076: PushEmpty()
0x1077: PushEmpty(int)
0x1078: Call2 0xf83

0x1079: Pop(0)
0x107a: Push((int) 12)
0x107b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x107c: Return(); Pop(0)

0x107d: PushEmpty(int, int)
0x107e: Push("branch")
0x107f: @ GetVariable(Stack[-1], Stack[-2])
0x1080: Pop(1)
0x1081: Push((int) 0)
0x1082: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1083: IF (Stack[-1] == 0) GOTO 0x1087; Pop(1)

0x1084: Stack[-3] = (int) 1
0x1085: Return(); Pop(2)

0x1086: GOTO 0x108c

0x1087: Push((int) 1)
0x1088: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1089: IF (Stack[-1] == 0) GOTO 0x108c; Pop(1)

0x108a: Stack[-3] = (int) 2
0x108b: Return(); Pop(2)

0x108c: Stack[-3] = (int) 3
0x108d: Return(); Pop(2)

0x108e: PushEmpty(int, int)
0x108f: Push("branch")
0x1090: @ GetVariable(Stack[-1], Stack[-2])
0x1091: Pop(1)
0x1092: Stack[-3] = Stack[-1]
0x1093: Return(); Pop(2)

0x1094: PushEmpty(object, float, object, float)
0x1095: Push("player")
0x1096: @ FindActor(Stack[-3], Stack[-1])
0x1097: Pop(1)
0x1098: Pop(0); Push((bool) Stack[-2] == 0)
0x1099: IF (Stack[-1] == 0) GOTO 0x109c; Pop(1)

0x109a: Stack[-5] = (int) 0
0x109b: Return(); Pop(4)

0x109c: Push("reputation")
0x109d: @@ GetProperty(Stack[-1], Stack[-2])
0x109e: Pop(1)
0x109f: Stack[-5] = Stack[-1]
0x10a0: Return(); Pop(4)

0x10a1: Stack[-2] = 0
0x10a2: PushEmpty()
0x10a3: PushEmpty(int)
0x10a4: Call2 0x108e

0x10a5: Pop(0)
0x10a6: Push((int) 1)
0x10a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a8: IF (Stack[-1] == 0) GOTO 0x10ac; Pop(1)

0x10a9: @ WorkWithCorpse(Stack[-1])
0x10aa: Pop(0)
0x10ab: GOTO 0x10ae

0x10ac: @ Barter(Stack[-1])
0x10ad: Pop(0)
0x10ae: Return(); Pop(0)

0x10af: PushEmpty(int, bool, int, bool)
0x10b0: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x10b1: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b2: Push("GenerateMoney: iMin > iMax")
0x10b3: @ Trace(Stack[-1])
0x10b4: Pop(1)
0x10b5: Return(); Pop(4)

0x10b6: Stack[-2] = (int) 0
0x10b7: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x10b8: IF (Stack[-1] == 0) GOTO 0x10bd; Pop(1)

0x10b9: Pop(0); Push(Stack[-5] - Stack[-6]);
0x10ba: @ irand(Stack[-3], Stack[-1])
0x10bb: Pop(1)
0x10bc: GOTO 0x10c1

0x10bd: Push((int) 0)
0x10be: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x10bf: IF (Stack[-1] == 0) GOTO 0x10c1; Pop(1)

0x10c0: Return(); Pop(4)

0x10c1: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x10c2: Push((int) 0)
0x10c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c4: IF (Stack[-1] == 0) GOTO 0x10c6; Pop(1)

0x10c5: Return(); Pop(4)

0x10c6: PushEmpty(int, string)
0x10c7: Stack[-1] = "Money"
0x10c8: Call2 0x11a6

0x10c9: Pop(1)
0x10ca: Push((int) 0)
0x10cb: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x10cc: Pop(2)
0x10cd: Return(); Pop(4)

0x10ce: PushEmpty(object, int, bool, object, int, bool)
0x10cf: @ CreateInvItem(Stack[-3])
0x10d0: Pop(0)
0x10d1: @@ SetItemName(Stack[-7])
0x10d2: Pop(0)
0x10d3: Push("Organ")
0x10d4: Push((int) 1)
0x10d5: @@ SetProperty(Stack[-2], Stack[-1])
0x10d6: Pop(2)
0x10d7: @@ GetItemID(Stack[-2])
0x10d8: Pop(0)
0x10d9: Push((int) 0)
0x10da: Push((int) 1)
0x10db: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x10dc: Pop(2)
0x10dd: Return(); Pop(6)

0x10de: Stack[-3] = 0
0x10df: PushEmpty(int)
0x10e0: Call2 0x108e

0x10e1: Pop(0)
0x10e2: Push((int) 1)
0x10e3: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x10e4: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10e5: Return(); Pop(0)

0x10e6: PushEmpty(string)
0x10e7: Stack[-1] = "liver"
0x10e8: Call2 0x10ce

0x10e9: Pop(1)
0x10ea: PushEmpty(string)
0x10eb: Stack[-1] = "kidney"
0x10ec: Call2 0x10ce

0x10ed: Pop(1)
0x10ee: PushEmpty(string)
0x10ef: Stack[-1] = "heart"
0x10f0: Call2 0x10ce

0x10f1: Pop(1)
0x10f2: PushEmpty(string)
0x10f3: Stack[-1] = "blood"
0x10f4: Call2 0x10ce

0x10f5: Pop(1)
0x10f6: Return(); Pop(0)

0x10f7: PushEmpty(int, bool, int, bool)
0x10f8: Push(Stack[-5])
0x10f9: IF (Stack[-1] == 0) GOTO 0x1150; Pop(1)

0x10fa: PushEmpty(int, int)
0x10fb: Stack[-2] = (int) 0
0x10fc: Push((int) 100)
0x10fd: PushEmpty(int)
0x10fe: Call2 0xf83

0x10ff: Pop(0)
0x1100: Push((int) 100)
0x1101: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1102: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1103: Call2 0x10af

0x1104: Pop(2)
0x1105: Push((int) 8)
0x1106: @ irand(Stack[-3], Stack[-1])
0x1107: Pop(1)
0x1108: Push((int) 0)
0x1109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110a: IF (Stack[-1] == 0) GOTO 0x1114; Pop(1)

0x110b: PushEmpty(int, string)
0x110c: Stack[-1] = "lemon"
0x110d: Call2 0x11a6

0x110e: Pop(1)
0x110f: Push((int) 0)
0x1110: Push((int) 1)
0x1111: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1112: Pop(3)
0x1113: GOTO 0x114f

0x1114: Push((int) 1)
0x1115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1116: IF (Stack[-1] == 0) GOTO 0x1120; Pop(1)

0x1117: PushEmpty(int, string)
0x1118: Stack[-1] = "rusk"
0x1119: Call2 0x11a6

0x111a: Pop(1)
0x111b: Push((int) 0)
0x111c: Push((int) 1)
0x111d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x111e: Pop(3)
0x111f: GOTO 0x114f

0x1120: Push((int) 2)
0x1121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1122: IF (Stack[-1] == 0) GOTO 0x112c; Pop(1)

0x1123: PushEmpty(int, string)
0x1124: Stack[-1] = "hook"
0x1125: Call2 0x11a6

0x1126: Pop(1)
0x1127: Push((int) 0)
0x1128: Push((int) 1)
0x1129: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x112a: Pop(3)
0x112b: GOTO 0x114f

0x112c: Push((int) 4)
0x112d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112e: IF (Stack[-1] == 0) GOTO 0x1138; Pop(1)

0x112f: PushEmpty(int, string)
0x1130: Stack[-1] = "syringe"
0x1131: Call2 0x11a6

0x1132: Pop(1)
0x1133: Push((int) 0)
0x1134: Push((int) 1)
0x1135: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1136: Pop(3)
0x1137: GOTO 0x114f

0x1138: Push((int) 5)
0x1139: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113a: IF (Stack[-1] == 0) GOTO 0x1144; Pop(1)

0x113b: PushEmpty(int, string)
0x113c: Stack[-1] = "watch"
0x113d: Call2 0x11a6

0x113e: Pop(1)
0x113f: Push((int) 0)
0x1140: Push((int) 1)
0x1141: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1142: Pop(3)
0x1143: GOTO 0x114f

0x1144: Push((int) 6)
0x1145: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1146: IF (Stack[-1] == 0) GOTO 0x114f; Pop(1)

0x1147: PushEmpty(int, string)
0x1148: Stack[-1] = "razor"
0x1149: Call2 0x11a6

0x114a: Pop(1)
0x114b: Push((int) 0)
0x114c: Push((int) 1)
0x114d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x114e: Pop(3)
0x114f: GOTO 0x11a5

0x1150: PushEmpty(int, int)
0x1151: Stack[-2] = (int) 0
0x1152: Push((int) 50)
0x1153: PushEmpty(int)
0x1154: Call2 0xf83

0x1155: Pop(0)
0x1156: Push((int) 50)
0x1157: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1158: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1159: Call2 0x10af

0x115a: Pop(2)
0x115b: Push((int) 7)
0x115c: @ irand(Stack[-3], Stack[-1])
0x115d: Pop(1)
0x115e: Push((int) 0)
0x115f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1160: IF (Stack[-1] == 0) GOTO 0x116a; Pop(1)

0x1161: PushEmpty(int, string)
0x1162: Stack[-1] = "beads"
0x1163: Call2 0x11a6

0x1164: Pop(1)
0x1165: Push((int) 0)
0x1166: Push((int) 1)
0x1167: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1168: Pop(3)
0x1169: GOTO 0x11a5

0x116a: Push((int) 1)
0x116b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116c: IF (Stack[-1] == 0) GOTO 0x1176; Pop(1)

0x116d: PushEmpty(int, string)
0x116e: Stack[-1] = "bracelet"
0x116f: Call2 0x11a6

0x1170: Pop(1)
0x1171: Push((int) 0)
0x1172: Push((int) 1)
0x1173: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1174: Pop(3)
0x1175: GOTO 0x11a5

0x1176: Push((int) 2)
0x1177: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1178: IF (Stack[-1] == 0) GOTO 0x1182; Pop(1)

0x1179: PushEmpty(int, string)
0x117a: Stack[-1] = "ear_ring"
0x117b: Call2 0x11a6

0x117c: Pop(1)
0x117d: Push((int) 0)
0x117e: Push((int) 1)
0x117f: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1180: Pop(3)
0x1181: GOTO 0x11a5

0x1182: Push((int) 3)
0x1183: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1184: IF (Stack[-1] == 0) GOTO 0x118e; Pop(1)

0x1185: PushEmpty(int, string)
0x1186: Stack[-1] = "gold_ring"
0x1187: Call2 0x11a6

0x1188: Pop(1)
0x1189: Push((int) 0)
0x118a: Push((int) 1)
0x118b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x118c: Pop(3)
0x118d: GOTO 0x11a5

0x118e: Push((int) 4)
0x118f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1190: IF (Stack[-1] == 0) GOTO 0x119a; Pop(1)

0x1191: PushEmpty(int, string)
0x1192: Stack[-1] = "silver_ring"
0x1193: Call2 0x11a6

0x1194: Pop(1)
0x1195: Push((int) 0)
0x1196: Push((int) 1)
0x1197: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1198: Pop(3)
0x1199: GOTO 0x11a5

0x119a: Push((int) 5)
0x119b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119c: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x119d: PushEmpty(int, string)
0x119e: Stack[-1] = "flower"
0x119f: Call2 0x11a6

0x11a0: Pop(1)
0x11a1: Push((int) 0)
0x11a2: Push((int) 1)
0x11a3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11a4: Pop(3)
0x11a5: Return(); Pop(4)

0x11a6: PushEmpty(int, int)
0x11a7: @ GetInvItemByName(Stack[-1], Stack[-3])
0x11a8: Pop(0)
0x11a9: Stack[-4] = Stack[-1]
0x11aa: Return(); Pop(2)

0x11ab: PushEmpty()
0x11ac: PushEmpty(object)
0x11ad: Stack[-1] = Stack[-2]
0x11ae: Push(-1, 0); TaskCall(2)
0x11af: Call2 0x668

0x11b0: Pop(-1, 0); TaskReturn
0x11b1: Pop(1)
0x11b2: Return(); Pop(0)

0x11b3: PushEmpty(float, float)
0x11b4: Push("health")
0x11b5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x11b6: IF (Stack[-1] == 0) GOTO 0x11bf; Pop(1)

0x11b7: Push("health")
0x11b8: @ GetProperty(Stack[-1], Stack[-2])
0x11b9: Pop(1)
0x11ba: Push((int) 0)
0x11bb: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x11bc: IF (Stack[-1] == 0) GOTO 0x11bf; Pop(1)

0x11bd: @ SignalDeath(Stack[-4])
0x11be: Pop(0)
0x11bf: Return(); Pop(2)

0x11c0: PushEmpty()
0x11c1: PushEmpty(object)
0x11c2: Stack[-1] = Stack[-2]
0x11c3: Call2 0x11ab

0x11c4: Pop(1)
0x11c5: Return(); Pop(0)

0x11c6: PushEmpty()
0x11c7: PushEmpty(object, int, float)
0x11c8: Stack[-3] = Stack[-7]
0x11c9: Stack[-2] = Stack[-6]
0x11ca: Stack[-1] = Stack[-5]
0x11cb: Call2 0xe31

0x11cc: Pop(3)
0x11cd: Return(); Pop(0)

0x11ce: PushEmpty()
0x11cf: PushEmpty(object, int, float, cvector, cvector)
0x11d0: Stack[-5] = Stack[-11]
0x11d1: Stack[-4] = Stack[-10]
0x11d2: Stack[-3] = Stack[-9]
0x11d3: Stack[-2] = Stack[-7]
0x11d4: Stack[-1] = Stack[-6]
0x11d5: Call2 0xe75

0x11d6: Pop(5)
0x11d7: Return(); Pop(0)

0x11d8: PushEmpty()
0x11d9: Push("unholster")
0x11da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11db: IF (Stack[-1] == 0) GOTO 0x11e3; Pop(1)

0x11dc: PushEmpty(bool, object)
0x11dd: Stack[-1] = Stack[-4]
0x11de: Call2 0x12fb

0x11df: Stack[-5] = Stack[-2]
0x11e0: Pop(2)
0x11e1: Return(); Pop(0)

0x11e2: GOTO 0x11f6

0x11e3: Push("player_shot")
0x11e4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e5: IF (Stack[-1] == 0) GOTO 0x11ed; Pop(1)

0x11e6: PushEmpty(bool, object)
0x11e7: Stack[-1] = Stack[-4]
0x11e8: Call2 0x1308

0x11e9: Stack[-5] = Stack[-2]
0x11ea: Pop(2)
0x11eb: Return(); Pop(0)

0x11ec: GOTO 0x11f6

0x11ed: Push("battle")
0x11ee: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11ef: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11f0: PushEmpty(bool, object)
0x11f1: Stack[-1] = Stack[-4]
0x11f2: Call2 0x131f

0x11f3: Stack[-5] = Stack[-2]
0x11f4: Pop(2)
0x11f5: Return(); Pop(0)

0x11f6: Stack[-3] = (bool) 0
0x11f7: Return(); Pop(0)

0x11f8: PushEmpty()
0x11f9: Push("unholster")
0x11fa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11fb: IF (Stack[-1] == 0) GOTO 0x1201; Pop(1)

0x11fc: PushEmpty(object)
0x11fd: Stack[-1] = Stack[-3]
0x11fe: Call2 0x1300

0x11ff: Pop(1)
0x1200: GOTO 0x1210

0x1201: Push("player_shot")
0x1202: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1203: IF (Stack[-1] == 0) GOTO 0x1209; Pop(1)

0x1204: PushEmpty(object)
0x1205: Stack[-1] = Stack[-3]
0x1206: Call2 0x1317

0x1207: Pop(1)
0x1208: GOTO 0x1210

0x1209: Push("battle")
0x120a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120b: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x120c: PushEmpty(object)
0x120d: Stack[-1] = Stack[-3]
0x120e: Call2 0x1326

0x120f: Pop(1)
0x1210: Return(); Pop(0)

0x1211: PushEmpty(bool, bool)
0x1212: PushEmpty(bool)
0x1213: Stack[-1] = (bool) 0
0x1214: PushEmpty(bool, object)
0x1215: Stack[-1] = Stack[-6]
0x1216: Call2 0x12fb

0x1217: Pop(1)
0x1218: IF (Stack[-1] == 0) GOTO 0x121f; Pop(1)

0x1219: PushEmpty(bool, object)
0x121a: Stack[-1] = Stack[-6]
0x121b: Call2 0xdb3

0x121c: Pop(1)
0x121d: IF (Stack[-1] == 0) GOTO 0x121f; Pop(1)

0x121e: Stack[-1] = (bool) 1
0x121f: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x1220: @@ IsWeaponHolstered(Stack[-1])
0x1221: Pop(0)
0x1222: Pop(0); Push((bool) Stack[-1] == 0)
0x1223: IF (Stack[-1] == 0) GOTO 0x1226; Pop(1)

0x1224: Stack[-4] = (bool) 1
0x1225: Return(); Pop(2)

0x1226: Stack[-4] = (bool) 0
0x1227: Return(); Pop(2)

0x1228: PushEmpty()
0x1229: PushEmpty(object)
0x122a: Stack[-1] = Stack[-2]
0x122b: Call2 0x1300

0x122c: Pop(1)
0x122d: Return(); Pop(0)

0x122e: PushEmpty()
0x122f: PushEmpty(bool, object)
0x1230: Stack[-1] = Stack[-3]
0x1231: Call2 0xdb3

0x1232: Pop(1)
0x1233: IF (Stack[-1] == 0) GOTO 0x123a; Pop(1)

0x1234: PushEmpty(object)
0x1235: Call2 0xf42

0x1236: Pop(0)
0x1237: Push((float)-0.03)
0x1238: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1239: Pop(2)
0x123a: Return(); Pop(0)

0x123b: PushEmpty(object, object)
0x123c: Push("heal")
0x123d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x123e: IF (Stack[-1] == 0) GOTO 0x1249; Pop(1)

0x123f: Push("player")
0x1240: @ FindActor(Stack[-2], Stack[-1])
0x1241: Pop(1)
0x1242: PushEmpty(bool, object)
0x1243: Stack[-1] = Stack[-3]
0x1244: Call2 0x132c

0x1245: Stack[-6] = Stack[-2]
0x1246: Pop(2)
0x1247: Return(); Pop(2)

0x1248: Stack[-1] = 0
0x1249: Stack[-4] = (bool) 0
0x124a: Return(); Pop(2)

0x124b: PushEmpty(object, object)
0x124c: Push("heal")
0x124d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x124e: IF (Stack[-1] == 0) GOTO 0x1257; Pop(1)

0x124f: Push("player")
0x1250: @ FindActor(Stack[-2], Stack[-1])
0x1251: Pop(1)
0x1252: PushEmpty(object)
0x1253: Stack[-1] = Stack[-2]
0x1254: Call2 0x132f

0x1255: Pop(1)
0x1256: Stack[-1] = 0
0x1257: Return(); Pop(2)

0x1258: PushEmpty(string, string)
0x1259: Stack[-1] = "idle"
0x125a: Push(Stack[-3])
0x125b: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x125c: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x125d: Stack[-4] = Stack[-1]
0x125e: Return(); Pop(2)

0x125f: PushEmpty(int, bool, int, bool)
0x1260: Stack[-2] = (int) 0
0x1261: Push("all")
0x1262: PushEmpty(string, int)
0x1263: Stack[-1] = Stack[-5]
0x1264: Call2 0x1258

0x1265: Pop(1)
0x1266: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1267: Pop(2)
0x1268: Pop(0); Push((bool) Stack[-1] == 0)
0x1269: IF (Stack[-1] == 0) GOTO 0x126b; Pop(1)

0x126a: GOTO 0x126e

0x126b: Push((int) 1)
0x126c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x126d: GOTO 0x1261

0x126e: Stack[-5] = Stack[-2]
0x126f: Return(); Pop(4)

0x1270: PushEmpty()
0x1271: PushEmpty(bool)
0x1272: Call2 0x1353

0x1273: Pop(0)
0x1274: IF (Stack[-1] == 0) GOTO 0x1277; Pop(1)

0x1275: Stack[-2] = (int) 2
0x1276: GOTO 0x1278

0x1277: Stack[-2] = (int) 0
0x1278: Return(); Pop(0)

0x1279: PushEmpty()
0x127a: PushEmpty(object)
0x127b: Stack[-1] = Stack[-2]
0x127c: Push(-1, 1); TaskCall(5)
0x127d: Call2 0x96f

0x127e: Pop(-1, 1); TaskReturn
0x127f: Pop(1)
0x1280: Return(); Pop(0)

0x1281: PushEmpty()
0x1282: PushEmpty(bool, object)
0x1283: Stack[-1] = Stack[-3]
0x1284: Call2 0xded

0x1285: Pop(1)
0x1286: IF (Stack[-1] == 0) GOTO 0x1289; Pop(1)

0x1287: Stack[-2] = (int) 2
0x1288: GOTO 0x128a

0x1289: Stack[-2] = (int) 0
0x128a: Return(); Pop(0)

0x128b: PushEmpty()
0x128c: PushEmpty(object)
0x128d: Stack[-1] = Stack[-2]
0x128e: Push(-1, 3); TaskCall(6)
0x128f: Call2 0xa82

0x1290: Pop(-1, 3); TaskReturn
0x1291: Pop(1)
0x1292: Return(); Pop(0)

0x1293: PushEmpty()
0x1294: PushEmpty(bool, object)
0x1295: Stack[-1] = Stack[-4]
0x1296: Call2 0xded

0x1297: Pop(1)
0x1298: IF (Stack[-1] == 0) GOTO 0x129b; Pop(1)

0x1299: Stack[-3] = (int) 2
0x129a: GOTO 0x129c

0x129b: Stack[-3] = (int) 0
0x129c: Return(); Pop(0)

0x129d: PushEmpty()
0x129e: PushEmpty(object)
0x129f: Stack[-1] = Stack[-2]
0x12a0: Push(-1, 3); TaskCall(7)
0x12a1: Call2 0xb7e

0x12a2: Pop(-1, 3); TaskReturn
0x12a3: Pop(1)
0x12a4: Return(); Pop(0)

0x12a5: PushEmpty(string, bool, string, bool)
0x12a6: PushEmpty(bool, object, string)
0x12a7: Stack[-2] = Stack[-9]
0x12a8: Stack[-1] = "class"
0x12a9: Call2 0xdb8

0x12aa: Pop(2)
0x12ab: Pop(1); Push((bool) Stack[-1] == 0)
0x12ac: IF (Stack[-1] == 0) GOTO 0x12af; Pop(1)

0x12ad: Stack[-8] = (bool) 0
0x12ae: Return(); Pop(4)

0x12af: Push("class")
0x12b0: @@ GetProperty(Stack[-1], Stack[-3])
0x12b1: Pop(1)
0x12b2: Push("rat")
0x12b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b4: IF (Stack[-1] == 0) GOTO 0x12b8; Pop(1)

0x12b5: Stack[-8] = (bool) 0
0x12b6: Return(); Pop(4)

0x12b7: GOTO 0x12c3

0x12b8: Push("rat_big")
0x12b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12ba: IF (Stack[-1] == 0) GOTO 0x12be; Pop(1)

0x12bb: Stack[-8] = (bool) 0
0x12bc: Return(); Pop(4)

0x12bd: GOTO 0x12c3

0x12be: Push("dog")
0x12bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c0: IF (Stack[-1] == 0) GOTO 0x12c3; Pop(1)

0x12c1: Stack[-8] = (bool) 0
0x12c2: Return(); Pop(4)

0x12c3: @ CanSee(Stack[-1], Stack[-7])
0x12c4: Pop(0)
0x12c5: PushEmpty(bool)
0x12c6: Stack[-1] = (bool) 1
0x12c7: Push(Stack[-2])
0x12c8: IF (Stack[-1] == 0) GOTO 0x12d1; Pop(1)

0x12c9: PushEmpty(float, object)
0x12ca: Stack[-1] = Stack[-10]
0x12cb: Call2 0xdab

0x12cc: Pop(1)
0x12cd: Pop(0); Push(Stack[-7] * Stack[-7]);
0x12ce: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x12cf: IF (Stack[-1] == 0) GOTO 0x12d1; Pop(1)

0x12d0: Stack[-1] = (bool) 0
0x12d1: IF (Stack[-1] == 0) GOTO 0x12d4; Pop(1)

0x12d2: Stack[-8] = (bool) 1
0x12d3: Return(); Pop(4)

0x12d4: @ CanSee(Stack[-1], Stack[-6])
0x12d5: Pop(0)
0x12d6: PushEmpty(bool)
0x12d7: Stack[-1] = (bool) 1
0x12d8: Push(Stack[-2])
0x12d9: IF (Stack[-1] == 0) GOTO 0x12e2; Pop(1)

0x12da: PushEmpty(float, object)
0x12db: Stack[-1] = Stack[-9]
0x12dc: Call2 0xdab

0x12dd: Pop(1)
0x12de: Pop(0); Push(Stack[-7] * Stack[-7]);
0x12df: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x12e0: IF (Stack[-1] == 0) GOTO 0x12e2; Pop(1)

0x12e1: Stack[-1] = (bool) 0
0x12e2: IF (Stack[-1] == 0) GOTO 0x12e5; Pop(1)

0x12e3: Stack[-8] = (bool) 1
0x12e4: Return(); Pop(4)

0x12e5: Stack[-8] = (bool) 0
0x12e6: Return(); Pop(4)

0x12e7: PushEmpty()
0x12e8: Stack[-2] = (int) 0
0x12e9: Return(); Pop(0)

0x12ea: PushEmpty()
0x12eb: Return(); Pop(0)

0x12ec: PushEmpty()
0x12ed: Stack[-3] = (int) 0
0x12ee: Return(); Pop(0)

0x12ef: PushEmpty()
0x12f0: Return(); Pop(0)

0x12f1: PushEmpty()
0x12f2: Stack[-2] = (int) 2
0x12f3: Return(); Pop(0)

0x12f4: PushEmpty()
0x12f5: PushEmpty(object)
0x12f6: Stack[-1] = Stack[-2]
0x12f7: Call2 0x133f

0x12f8: Pop(1)
0x12f9: Return(); Pop(0)

0x12fa: Return(); Pop(0)

0x12fb: PushEmpty(bool, bool)
0x12fc: @ CanSee(Stack[-1], Stack[-3])
0x12fd: Pop(0)
0x12fe: Stack[-4] = Stack[-1]
0x12ff: Return(); Pop(2)

0x1300: PushEmpty()
0x1301: PushEmpty(object)
0x1302: Stack[-1] = Stack[-2]
0x1303: Push(-1, 3); TaskCall(8)
0x1304: Call2 0xc40

0x1305: Pop(-1, 3); TaskReturn
0x1306: Pop(1)
0x1307: Return(); Pop(0)

0x1308: PushEmpty(bool, bool)
0x1309: @ CanSee(Stack[-1], Stack[-3])
0x130a: Pop(0)
0x130b: Stack[-4] = (bool) 1
0x130c: Push(Stack[-1])
0x130d: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x130e: PushEmpty(float, object)
0x130f: Stack[-1] = Stack[-5]
0x1310: Call2 0xdab

0x1311: Pop(1)
0x1312: Push((int) 4000000)
0x1313: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1314: IF (Stack[-1] == 0) GOTO 0x1316; Pop(1)

0x1315: Stack[-4] = (bool) 0
0x1316: Return(); Pop(2)

0x1317: PushEmpty()
0x1318: PushEmpty(object)
0x1319: Stack[-1] = Stack[-2]
0x131a: Push(-1, 3); TaskCall(9)
0x131b: Call2 0xd02

0x131c: Pop(-1, 3); TaskReturn
0x131d: Pop(1)
0x131e: Return(); Pop(0)

0x131f: PushEmpty()
0x1320: PushEmpty(bool, object)
0x1321: Stack[-1] = Stack[-3]
0x1322: Call2 0x1308

0x1323: Stack[-4] = Stack[-2]
0x1324: Pop(2)
0x1325: Return(); Pop(0)

0x1326: PushEmpty()
0x1327: PushEmpty(object)
0x1328: Stack[-1] = Stack[-2]
0x1329: Call2 0x1317

0x132a: Pop(1)
0x132b: Return(); Pop(0)

0x132c: PushEmpty()
0x132d: Stack[-2] = (bool) 0
0x132e: Return(); Pop(0)

0x132f: PushEmpty()
0x1330: Return(); Pop(0)

0x1331: Stack[-1] = (int) 515596
0x1332: Return(); Pop(0)

0x1333: Stack[-1] = (int) 514839
0x1334: Return(); Pop(0)

0x1335: Stack[-1] = "ui/NPC_Citizen3.png"
0x1336: Return(); Pop(0)

0x1337: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x1338: Return(); Pop(0)

0x1339: Stack[-1] = (bool) 0
0x133a: Return(); Pop(0)

0x133b: Push(GlobalVars[0])
0x133c: Stack[-1] = (bool) 0
0x133d: GlobalVars[0] = Stack[-1]; Pop(1)
0x133e: Return(); Pop(0)

0x133f: PushEmpty(bool, bool)
0x1340: Push(GlobalVars[0])
0x1341: IF (Stack[-1] == 0) GOTO 0x134c; Pop(1)

0x1342: @ IsOverrideActive(Stack[-1])
0x1343: Pop(0)
0x1344: Pop(0); Push((bool) Stack[-1] == 0)
0x1345: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1346: PushEmpty(object)
0x1347: Stack[-1] = Stack[-4]
0x1348: Call2 0x10a2

0x1349: Pop(1)
0x134a: Return(); Pop(2)

0x134b: GOTO 0x1352

0x134c: PushEmpty(int, object)
0x134d: Stack[-1] = Stack[-5]
0x134e: Push(-2, 1); TaskCall(0)
0x134f: Call2 0x0

0x1350: Pop(-2, 1); TaskReturn
0x1351: Pop(2)
0x1352: Return(); Pop(2)

0x1353: PushEmpty(float)
0x1354: Call2 0x1094

0x1355: Pop(0)
0x1356: Push((float)0.2)
0x1357: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x1358: Return(); Pop(0)

0x1359: PushEmpty()
0x135a: PushEmpty(bool, object, object, float)
0x135b: Stack[-3] = Stack[-7]
0x135c: Stack[-2] = Stack[-6]
0x135d: Stack[-1] = (float) 700.0
0x135e: Call2 0x12a5

0x135f: Stack[-8] = Stack[-4]
0x1360: Pop(4)
0x1361: Return(); Pop(0)

0x1362: PushEmpty()
0x1363: PushEmpty(bool, object)
0x1364: Stack[-1] = Stack[-3]
0x1365: Call2 0xdb3

0x1366: Pop(1)
0x1367: IF (Stack[-1] == 0) GOTO 0x1373; Pop(1)

0x1368: PushEmpty(object)
0x1369: Call2 0xf42

0x136a: Pop(0)
0x136b: Push((float)-0.07)
0x136c: Push((bool) 1)
0x136d: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x136e: Pop(3)
0x136f: PushEmpty(bool)
0x1370: Stack[-1] = (bool) 0
0x1371: Call2 0x10f7

0x1372: Pop(1)
0x1373: PushEmpty()
0x1374: Call2 0x10df

0x1375: Pop(0)
0x1376: Push(GlobalVars[0])
0x1377: Stack[-1] = (bool) 1
0x1378: GlobalVars[0] = Stack[-1]; Pop(1)
0x1379: Push((int) 50)
0x137a: Push((int) 40)
0x137b: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x137c: Pop(2)
0x137d: Return(); Pop(0)

