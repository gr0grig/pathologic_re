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

RunOp = 0x982
RunTask = 3

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x294 Vars = (int, int)
	GTASK_2  Params = 1
		EVENT_0 Op = 0x8f5 Vars = (object)
		EVENT_6 Op = 0x903 Vars = ()
		EVENT_22 Op = 0x97c Vars = (object, int, float, float)
		EVENT_16 Op = 0x97e Vars = (object, string)
		EVENT_41 Op = 0x980 Vars = (object)
	GTASK_3 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x99a Vars = (object)
		EVENT_17 Op = 0x9ae Vars = (object)
		EVENT_30 Op = 0x9c6 Vars = (object, object, bool)
		EVENT_40 Op = 0x9e2 Vars = (object)
		EVENT_42 Op = 0x9f6 Vars = (object, string)
		EVENT_26 Op = 0xa1b Vars = (string)
		EVENT_1 Op = 0xa29 Vars = (object)
		EVENT_3 Op = 0xa3c Vars = (object)
		EVENT_7 Op = 0xa42 Vars = (int)
		EVENT_6 Op = 0xa4e Vars = ()
		EVENT_41 Op = 0xa65 Vars = (object)
		EVENT_10 Op = 0xad6 Vars = (object)
		EVENT_28 Op = 0xada Vars = ()
	GTASK_4  Params = 0
		EVENT_0 Op = 0xaf3 Vars = (object)
		EVENT_17 Op = 0xb07 Vars = (object)
		EVENT_30 Op = 0xb1f Vars = (object, object, bool)
		EVENT_40 Op = 0xb3b Vars = (object)
		EVENT_42 Op = 0xb4f Vars = (object, string)
		EVENT_26 Op = 0xb74 Vars = (string)
		EVENT_6 Op = 0xb82 Vars = ()
		EVENT_1 Op = 0xb89 Vars = (object)
	GTASK_5 Vars = (object) Params = 1
		EVENT_0 Op = 0xc25 Vars = (object)
		EVENT_17 Op = 0xc39 Vars = (object)
		EVENT_30 Op = 0xc51 Vars = (object, object, bool)
		EVENT_40 Op = 0xc6d Vars = (object)
		EVENT_42 Op = 0xc81 Vars = (object, string)
		EVENT_26 Op = 0xca6 Vars = (string)
		EVENT_41 Op = 0xcbf Vars = (object)
		EVENT_7 Op = 0xcc8 Vars = (int)
		EVENT_6 Op = 0xceb Vars = ()
		EVENT_1 Op = 0xcf2 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xd1c Vars = ()
		EVENT_7 Op = 0xd8a Vars = (int)
		EVENT_41 Op = 0xdc5 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0xe45 Vars = (int)
		EVENT_41 Op = 0xe80 Vars = (object)
	GTASK_8 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xe99 Vars = ()
		EVENT_7 Op = 0xf07 Vars = (int)
		EVENT_41 Op = 0xf42 Vars = (object)
	GTASK_9 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0xf5b Vars = ()
		EVENT_7 Op = 0xfc9 Vars = (int)
		EVENT_41 Op = 0x1004 Vars = (object)

Events:
EVENT_16 Op = 0x1433 Vars = (object, string)
EVENT_41 Op = 0x1440 Vars = (object)
EVENT_22 Op = 0x1446 Vars = (object, int, float, float)
EVENT_43 Op = 0x144e Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x1111

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x15b3

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x15b1

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x15b5

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x15b7

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x12fd

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
0x41: Call2 0x1156

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
0x4f: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x50: PushEmpty(bool, object)
0x51: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x52: Call2 0x1218

0x53: Pop(1)
0x54: IF (Stack[-1] == 0) GOTO 0x177; Pop(1)

0x55: PushEmpty(string)
0x56: Stack[-1] = "Neutral"
0x57: Call2 0x27e

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
0x6a: Call2 0x122e

0x6b: Pop(1)
0x6c: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6d: PushEmpty(bool, object)
0x6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f: Call2 0x1242

0x70: Pop(1)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = (bool) 0
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x1256

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 0
0x7a: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x7b: PushEmpty(bool, object)
0x7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d: Call2 0x126a

0x7e: Pop(1)
0x7f: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x80: Stack[-1] = (bool) 0
0x81: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x127e

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: Stack[-1] = (bool) 0
0x88: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x89: PushEmpty(bool, object)
0x8a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b: Call2 0x1292

0x8c: Pop(1)
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: Stack[-1] = (bool) 0
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push((int) 543314)
0x91: Push((int) 45774)
0x92: Push((int) 45770)
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
0xa1: Call2 0x1256

0xa2: Pop(1)
0xa3: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa4: PushEmpty(bool, object)
0xa5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6: Call2 0x126a

0xa7: Pop(1)
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: Stack[-1] = (bool) 0
0xaa: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xab: PushEmpty(bool, object)
0xac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad: Call2 0x127e

0xae: Pop(1)
0xaf: IF (Stack[-1] == 0) GOTO 0xb1; Pop(1)

0xb0: Stack[-1] = (bool) 0
0xb1: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb2: PushEmpty(bool, object)
0xb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4: Call2 0x122e

0xb5: Pop(1)
0xb6: IF (Stack[-1] == 0) GOTO 0xb8; Pop(1)

0xb7: Stack[-1] = (bool) 0
0xb8: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x1242

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Stack[-1] = (bool) 0
0xbf: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x1292

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Stack[-1] = (bool) 0
0xc6: IF (Stack[-1] == 0) GOTO 0xcc; Pop(1)

0xc7: Push((int) 543316)
0xc8: Push((int) 45775)
0xc9: Push((int) 45772)
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
0xd8: Call2 0x1238

0xd9: Pop(1)
0xda: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xdb: PushEmpty(bool, object)
0xdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Call2 0x124c

0xde: Pop(1)
0xdf: IF (Stack[-1] == 0) GOTO 0xe1; Pop(1)

0xe0: Stack[-1] = (bool) 0
0xe1: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe2: PushEmpty(bool, object)
0xe3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe4: Call2 0x1260

0xe5: Pop(1)
0xe6: IF (Stack[-1] == 0) GOTO 0xe8; Pop(1)

0xe7: Stack[-1] = (bool) 0
0xe8: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xe9: PushEmpty(bool, object)
0xea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeb: Call2 0x1274

0xec: Pop(1)
0xed: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xee: Stack[-1] = (bool) 0
0xef: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf0: PushEmpty(bool, object)
0xf1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf2: Call2 0x1288

0xf3: Pop(1)
0xf4: IF (Stack[-1] == 0) GOTO 0xf6; Pop(1)

0xf5: Stack[-1] = (bool) 0
0xf6: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xf7: PushEmpty(bool, object)
0xf8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf9: Call2 0x129c

0xfa: Pop(1)
0xfb: IF (Stack[-1] == 0) GOTO 0xfd; Pop(1)

0xfc: Stack[-1] = (bool) 0
0xfd: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xfe: Push((int) 543317)
0xff: Push((int) 45779)
0x100: Push((int) 45773)
0x101: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x102: Pop(3)
0x103: PushEmpty(bool)
0x104: Stack[-1] = (bool) 1
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
0x10f: Call2 0x1238

0x110: Pop(1)
0x111: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x124c

0x115: Pop(1)
0x116: IF (Stack[-1] == 0) GOTO 0x118; Pop(1)

0x117: Stack[-1] = (bool) 0
0x118: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x119: PushEmpty(bool, object)
0x11a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11b: Call2 0x1260

0x11c: Pop(1)
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Stack[-1] = (bool) 0
0x11f: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x120: PushEmpty(bool, object)
0x121: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x122: Call2 0x1274

0x123: Pop(1)
0x124: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x125: Stack[-1] = (bool) 0
0x126: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x127: PushEmpty(bool, object)
0x128: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x129: Call2 0x1288

0x12a: Pop(1)
0x12b: IF (Stack[-1] == 0) GOTO 0x12d; Pop(1)

0x12c: Stack[-1] = (bool) 0
0x12d: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x12e: PushEmpty(bool, object)
0x12f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x130: Call2 0x129c

0x131: Pop(1)
0x132: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x133: Stack[-1] = (bool) 0
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: Push((int) 543324)
0x136: Push((int) 45779)
0x137: Push((int) 45780)
0x138: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139: Pop(3)
0x13a: PushEmpty(bool)
0x13b: Stack[-1] = (bool) 1
0x13c: PushEmpty(bool)
0x13d: Stack[-1] = (bool) 1
0x13e: PushEmpty(bool)
0x13f: Stack[-1] = (bool) 1
0x140: PushEmpty(bool)
0x141: Stack[-1] = (bool) 1
0x142: PushEmpty(bool)
0x143: Stack[-1] = (bool) 1
0x144: PushEmpty(bool, object)
0x145: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x146: Call2 0x122e

0x147: Pop(1)
0x148: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x149: PushEmpty(bool, object)
0x14a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x14b: Call2 0x1242

0x14c: Pop(1)
0x14d: IF (Stack[-1] == 0) GOTO 0x14f; Pop(1)

0x14e: Stack[-1] = (bool) 0
0x14f: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x150: PushEmpty(bool, object)
0x151: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x152: Call2 0x1256

0x153: Pop(1)
0x154: IF (Stack[-1] == 0) GOTO 0x156; Pop(1)

0x155: Stack[-1] = (bool) 0
0x156: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x157: PushEmpty(bool, object)
0x158: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x159: Call2 0x126a

0x15a: Pop(1)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Stack[-1] = (bool) 0
0x15d: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x15e: PushEmpty(bool, object)
0x15f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x160: Call2 0x127e

0x161: Pop(1)
0x162: IF (Stack[-1] == 0) GOTO 0x164; Pop(1)

0x163: Stack[-1] = (bool) 0
0x164: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x165: PushEmpty(bool, object)
0x166: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x167: Call2 0x1292

0x168: Pop(1)
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Stack[-1] = (bool) 0
0x16b: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x16c: Push((int) 543315)
0x16d: Push((int) -1)
0x16e: Push((int) 45771)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: Push((int) 543327)
0x172: Push((int) -1)
0x173: Push((int) 45784)
0x174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x175: Pop(3)
0x176: GOTO 0x260

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0x27e

0x17a: Pop(1)
0x17b: Push((int) 537786)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: PushEmpty(bool, object)
0x181: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x182: Call2 0x1224

0x183: Pop(1)
0x184: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x185: Push((int) 537787)
0x186: Push((int) -1)
0x187: Push((int) 39638)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: PushEmpty(bool, object)
0x18b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x18c: Call2 0x1224

0x18d: Pop(1)
0x18e: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x18f: Push((int) 537788)
0x190: Push((int) -1)
0x191: Push((int) 39639)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: PushEmpty(bool, object)
0x195: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x196: Call2 0x1224

0x197: Pop(1)
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: Push((int) 537789)
0x19a: Push((int) 39641)
0x19b: Push((int) 39640)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: PushEmpty(bool, object)
0x19f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1a0: Call2 0x1224

0x1a1: Pop(1)
0x1a2: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a3: Push((int) 537792)
0x1a4: Push((int) 39644)
0x1a5: Push((int) 39643)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: PushEmpty(bool)
0x1a9: Stack[-1] = (bool) 0
0x1aa: PushEmpty(bool, object)
0x1ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ac: Call2 0x120c

0x1ad: Pop(1)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1af: PushEmpty(bool, object)
0x1b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b1: Call2 0x122e

0x1b2: Pop(1)
0x1b3: IF (Stack[-1] == 0) GOTO 0x1b5; Pop(1)

0x1b4: Stack[-1] = (bool) 1
0x1b5: IF (Stack[-1] == 0) GOTO 0x1bb; Pop(1)

0x1b6: Push((int) 537805)
0x1b7: Push((int) 39658)
0x1b8: Push((int) 39657)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: PushEmpty(bool)
0x1bc: Stack[-1] = (bool) 0
0x1bd: PushEmpty(bool, object)
0x1be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bf: Call2 0x120c

0x1c0: Pop(1)
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c2: PushEmpty(bool, object)
0x1c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Call2 0x1238

0x1c5: Pop(1)
0x1c6: IF (Stack[-1] == 0) GOTO 0x1c8; Pop(1)

0x1c7: Stack[-1] = (bool) 1
0x1c8: IF (Stack[-1] == 0) GOTO 0x1ce; Pop(1)

0x1c9: Push((int) 537826)
0x1ca: Push((int) 39679)
0x1cb: Push((int) 39678)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: PushEmpty(bool)
0x1cf: Stack[-1] = (bool) 0
0x1d0: PushEmpty(bool, object)
0x1d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d2: Call2 0x120c

0x1d3: Pop(1)
0x1d4: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1d5: PushEmpty(bool, object)
0x1d6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d7: Call2 0x1242

0x1d8: Pop(1)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1db; Pop(1)

0x1da: Stack[-1] = (bool) 1
0x1db: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1dc: Push((int) 537846)
0x1dd: Push((int) 39703)
0x1de: Push((int) 39702)
0x1df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e0: Pop(3)
0x1e1: PushEmpty(bool)
0x1e2: Stack[-1] = (bool) 0
0x1e3: PushEmpty(bool, object)
0x1e4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e5: Call2 0x120c

0x1e6: Pop(1)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1e8: PushEmpty(bool, object)
0x1e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Call2 0x124c

0x1eb: Pop(1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ed: Stack[-1] = (bool) 1
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ef: Push((int) 537855)
0x1f0: Push((int) 39713)
0x1f1: Push((int) 39712)
0x1f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f3: Pop(3)
0x1f4: PushEmpty(bool)
0x1f5: Stack[-1] = (bool) 0
0x1f6: PushEmpty(bool, object)
0x1f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1f8: Call2 0x120c

0x1f9: Pop(1)
0x1fa: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fb: PushEmpty(bool, object)
0x1fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1fd: Call2 0x1260

0x1fe: Pop(1)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: Push((int) 537867)
0x203: Push((int) 39726)
0x204: Push((int) 39725)
0x205: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x206: Pop(3)
0x207: PushEmpty(bool)
0x208: Stack[-1] = (bool) 0
0x209: PushEmpty(bool, object)
0x20a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20b: Call2 0x120c

0x20c: Pop(1)
0x20d: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x20e: PushEmpty(bool, object)
0x20f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x210: Call2 0x126a

0x211: Pop(1)
0x212: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x213: Stack[-1] = (bool) 1
0x214: IF (Stack[-1] == 0) GOTO 0x21a; Pop(1)

0x215: Push((int) 537881)
0x216: Push((int) 39741)
0x217: Push((int) 39740)
0x218: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x219: Pop(3)
0x21a: PushEmpty(bool)
0x21b: Stack[-1] = (bool) 0
0x21c: PushEmpty(bool, object)
0x21d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21e: Call2 0x120c

0x21f: Pop(1)
0x220: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x221: PushEmpty(bool, object)
0x222: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x223: Call2 0x1274

0x224: Pop(1)
0x225: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x226: Stack[-1] = (bool) 1
0x227: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x228: Push((int) 537895)
0x229: Push((int) 39756)
0x22a: Push((int) 39755)
0x22b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22c: Pop(3)
0x22d: PushEmpty(bool)
0x22e: Stack[-1] = (bool) 0
0x22f: PushEmpty(bool, object)
0x230: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x231: Call2 0x120c

0x232: Pop(1)
0x233: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x234: PushEmpty(bool, object)
0x235: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x236: Call2 0x1288

0x237: Pop(1)
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Stack[-1] = (bool) 1
0x23a: IF (Stack[-1] == 0) GOTO 0x240; Pop(1)

0x23b: Push((int) 537905)
0x23c: Push((int) 39766)
0x23d: Push((int) 39765)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: PushEmpty(bool)
0x241: Stack[-1] = (bool) 0
0x242: PushEmpty(bool, object)
0x243: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x244: Call2 0x120c

0x245: Pop(1)
0x246: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x247: PushEmpty(bool, object)
0x248: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x249: Call2 0x1292

0x24a: Pop(1)
0x24b: IF (Stack[-1] == 0) GOTO 0x24d; Pop(1)

0x24c: Stack[-1] = (bool) 1
0x24d: IF (Stack[-1] == 0) GOTO 0x253; Pop(1)

0x24e: Push((int) 537918)
0x24f: Push((int) 39780)
0x250: Push((int) 39779)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Push((int) 537927)
0x254: Push((int) -1)
0x255: Push((int) 39788)
0x256: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x257: Pop(3)
0x258: Push((int) 537928)
0x259: Push((int) -1)
0x25a: Push((int) 39789)
0x25b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25c: Pop(3)
0x25d: GOTO 0x260

0x25e: Return(); Pop(0)

0x25f: GOTO 0x4e

0x260: PushEmpty(bool)
0x261: Call2 0x15b9

0x262: Pop(0)
0x263: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x264: @ lshWaitForAnimEnd()
0x265: Pop(0)
0x266: Push( Stack[3 + Tasks[-1].StackPointer] )
0x267: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x268: GOTO 0x26e

0x269: PushEmpty(string)
0x26a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26b: Call2 0x1168

0x26c: Pop(1)
0x26d: GOTO 0x264

0x26e: GOTO 0x27d

0x26f: Push("all")
0x270: Push("idle")
0x271: @ PlayAnimation(Stack[-2], Stack[-1])
0x272: Pop(2)
0x273: @ WaitForAnimEnd()
0x274: Pop(0)
0x275: Push( Stack[3 + Tasks[-1].StackPointer] )
0x276: IF (Stack[-1] == 0) GOTO 0x278; Pop(1)

0x277: GOTO 0x27d

0x278: Push("all")
0x279: Push("idle")
0x27a: @ PlayAnimation(Stack[-2], Stack[-1])
0x27b: Pop(2)
0x27c: GOTO 0x273

0x27d: Return(); Pop(0)

0x27e: PushEmpty()
0x27f: PushEmpty(bool)
0x280: Call2 0x15b9

0x281: Pop(0)
0x282: Pop(1); Push((bool) Stack[-1] == 0)
0x283: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x284: Return(); Pop(0)

0x285: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: Return(); Pop(0)

0x288: PushEmpty(string, bool)
0x289: Stack[-2] = Stack[-3]
0x28a: Push("")
0x28b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x28c: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x28d: Stack[-1] = (bool) 0
0x28e: GOTO 0x290

0x28f: Stack[-1] = (bool) 1
0x290: Call2 0x1178

0x291: Pop(2)
0x292: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x293: Return(); Pop(0)

0x294: PushEmpty()
0x295: Push((int) 1)
0x296: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x297: PushEmpty()
0x298: Call2 0x1192

0x299: Pop(0)
0x29a: Push((int) 45769)
0x29b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29c: IF (Stack[-1] == 0) GOTO 0x4ab; Pop(1)

0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x1218

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x2a2: PushEmpty(string)
0x2a3: Stack[-1] = "Neutral"
0x2a4: Call2 0x27e

0x2a5: Pop(1)
0x2a6: Push((int) 543313)
0x2a7: @@ SetMessage(Stack[-1])
0x2a8: Pop(1)
0x2a9: @@ ClearReplies()
0x2aa: Pop(0)
0x2ab: PushEmpty(bool)
0x2ac: Stack[-1] = (bool) 1
0x2ad: PushEmpty(bool)
0x2ae: Stack[-1] = (bool) 1
0x2af: PushEmpty(bool)
0x2b0: Stack[-1] = (bool) 1
0x2b1: PushEmpty(bool)
0x2b2: Stack[-1] = (bool) 1
0x2b3: PushEmpty(bool)
0x2b4: Stack[-1] = (bool) 1
0x2b5: PushEmpty(bool, object)
0x2b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2b7: Call2 0x122e

0x2b8: Pop(1)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2ba: PushEmpty(bool, object)
0x2bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2bc: Call2 0x1242

0x2bd: Pop(1)
0x2be: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2bf: Stack[-1] = (bool) 0
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c1: PushEmpty(bool, object)
0x2c2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c3: Call2 0x1256

0x2c4: Pop(1)
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c6: Stack[-1] = (bool) 0
0x2c7: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2c8: PushEmpty(bool, object)
0x2c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ca: Call2 0x126a

0x2cb: Pop(1)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Stack[-1] = (bool) 0
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2cf: PushEmpty(bool, object)
0x2d0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d1: Call2 0x127e

0x2d2: Pop(1)
0x2d3: IF (Stack[-1] == 0) GOTO 0x2d5; Pop(1)

0x2d4: Stack[-1] = (bool) 0
0x2d5: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2d6: PushEmpty(bool, object)
0x2d7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2d8: Call2 0x1292

0x2d9: Pop(1)
0x2da: IF (Stack[-1] == 0) GOTO 0x2dc; Pop(1)

0x2db: Stack[-1] = (bool) 0
0x2dc: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2dd: Push((int) 543314)
0x2de: Push((int) 45774)
0x2df: Push((int) 45770)
0x2e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e1: Pop(3)
0x2e2: PushEmpty(bool)
0x2e3: Stack[-1] = (bool) 1
0x2e4: PushEmpty(bool)
0x2e5: Stack[-1] = (bool) 1
0x2e6: PushEmpty(bool)
0x2e7: Stack[-1] = (bool) 1
0x2e8: PushEmpty(bool)
0x2e9: Stack[-1] = (bool) 1
0x2ea: PushEmpty(bool)
0x2eb: Stack[-1] = (bool) 1
0x2ec: PushEmpty(bool, object)
0x2ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ee: Call2 0x1256

0x2ef: Pop(1)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f1: PushEmpty(bool, object)
0x2f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Call2 0x126a

0x2f4: Pop(1)
0x2f5: IF (Stack[-1] == 0) GOTO 0x2f7; Pop(1)

0x2f6: Stack[-1] = (bool) 0
0x2f7: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f8: PushEmpty(bool, object)
0x2f9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2fa: Call2 0x127e

0x2fb: Pop(1)
0x2fc: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fd: Stack[-1] = (bool) 0
0x2fe: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x2ff: PushEmpty(bool, object)
0x300: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x301: Call2 0x122e

0x302: Pop(1)
0x303: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x304: Stack[-1] = (bool) 0
0x305: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x306: PushEmpty(bool, object)
0x307: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x308: Call2 0x1242

0x309: Pop(1)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: Stack[-1] = (bool) 0
0x30c: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x30d: PushEmpty(bool, object)
0x30e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30f: Call2 0x1292

0x310: Pop(1)
0x311: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x312: Stack[-1] = (bool) 0
0x313: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x314: Push((int) 543316)
0x315: Push((int) 45775)
0x316: Push((int) 45772)
0x317: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x318: Pop(3)
0x319: PushEmpty(bool)
0x31a: Stack[-1] = (bool) 1
0x31b: PushEmpty(bool)
0x31c: Stack[-1] = (bool) 1
0x31d: PushEmpty(bool)
0x31e: Stack[-1] = (bool) 1
0x31f: PushEmpty(bool)
0x320: Stack[-1] = (bool) 1
0x321: PushEmpty(bool)
0x322: Stack[-1] = (bool) 1
0x323: PushEmpty(bool, object)
0x324: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x325: Call2 0x1238

0x326: Pop(1)
0x327: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x328: PushEmpty(bool, object)
0x329: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x32a: Call2 0x124c

0x32b: Pop(1)
0x32c: IF (Stack[-1] == 0) GOTO 0x32e; Pop(1)

0x32d: Stack[-1] = (bool) 0
0x32e: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x32f: PushEmpty(bool, object)
0x330: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x331: Call2 0x1260

0x332: Pop(1)
0x333: IF (Stack[-1] == 0) GOTO 0x335; Pop(1)

0x334: Stack[-1] = (bool) 0
0x335: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x336: PushEmpty(bool, object)
0x337: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x338: Call2 0x1274

0x339: Pop(1)
0x33a: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33b: Stack[-1] = (bool) 0
0x33c: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x33d: PushEmpty(bool, object)
0x33e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x33f: Call2 0x1288

0x340: Pop(1)
0x341: IF (Stack[-1] == 0) GOTO 0x343; Pop(1)

0x342: Stack[-1] = (bool) 0
0x343: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x344: PushEmpty(bool, object)
0x345: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x346: Call2 0x129c

0x347: Pop(1)
0x348: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x349: Stack[-1] = (bool) 0
0x34a: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34b: Push((int) 543317)
0x34c: Push((int) 45779)
0x34d: Push((int) 45773)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: PushEmpty(bool)
0x351: Stack[-1] = (bool) 1
0x352: PushEmpty(bool)
0x353: Stack[-1] = (bool) 1
0x354: PushEmpty(bool)
0x355: Stack[-1] = (bool) 1
0x356: PushEmpty(bool)
0x357: Stack[-1] = (bool) 1
0x358: PushEmpty(bool)
0x359: Stack[-1] = (bool) 1
0x35a: PushEmpty(bool, object)
0x35b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x35c: Call2 0x1238

0x35d: Pop(1)
0x35e: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x35f: PushEmpty(bool, object)
0x360: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x361: Call2 0x124c

0x362: Pop(1)
0x363: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x364: Stack[-1] = (bool) 0
0x365: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0x1260

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Stack[-1] = (bool) 0
0x36c: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36d: PushEmpty(bool, object)
0x36e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36f: Call2 0x1274

0x370: Pop(1)
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Stack[-1] = (bool) 0
0x373: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x374: PushEmpty(bool, object)
0x375: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x376: Call2 0x1288

0x377: Pop(1)
0x378: IF (Stack[-1] == 0) GOTO 0x37a; Pop(1)

0x379: Stack[-1] = (bool) 0
0x37a: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x37b: PushEmpty(bool, object)
0x37c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37d: Call2 0x129c

0x37e: Pop(1)
0x37f: IF (Stack[-1] == 0) GOTO 0x381; Pop(1)

0x380: Stack[-1] = (bool) 0
0x381: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x382: Push((int) 543324)
0x383: Push((int) 45779)
0x384: Push((int) 45780)
0x385: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(3)
0x387: PushEmpty(bool)
0x388: Stack[-1] = (bool) 1
0x389: PushEmpty(bool)
0x38a: Stack[-1] = (bool) 1
0x38b: PushEmpty(bool)
0x38c: Stack[-1] = (bool) 1
0x38d: PushEmpty(bool)
0x38e: Stack[-1] = (bool) 1
0x38f: PushEmpty(bool)
0x390: Stack[-1] = (bool) 1
0x391: PushEmpty(bool, object)
0x392: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x393: Call2 0x122e

0x394: Pop(1)
0x395: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x396: PushEmpty(bool, object)
0x397: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x398: Call2 0x1242

0x399: Pop(1)
0x39a: IF (Stack[-1] == 0) GOTO 0x39c; Pop(1)

0x39b: Stack[-1] = (bool) 0
0x39c: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x39d: PushEmpty(bool, object)
0x39e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39f: Call2 0x1256

0x3a0: Pop(1)
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x3a2: Stack[-1] = (bool) 0
0x3a3: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a4: PushEmpty(bool, object)
0x3a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a6: Call2 0x126a

0x3a7: Pop(1)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Stack[-1] = (bool) 0
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ab: PushEmpty(bool, object)
0x3ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ad: Call2 0x127e

0x3ae: Pop(1)
0x3af: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3b0: Stack[-1] = (bool) 0
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b2: PushEmpty(bool, object)
0x3b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3b4: Call2 0x1292

0x3b5: Pop(1)
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b8; Pop(1)

0x3b7: Stack[-1] = (bool) 0
0x3b8: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3b9: Push((int) 543315)
0x3ba: Push((int) -1)
0x3bb: Push((int) 45771)
0x3bc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3bd: Pop(3)
0x3be: Push((int) 543327)
0x3bf: Push((int) -1)
0x3c0: Push((int) 45784)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: Return(); Pop(0)

0x3c4: PushEmpty(string)
0x3c5: Stack[-1] = "Neutral"
0x3c6: Call2 0x27e

0x3c7: Pop(1)
0x3c8: Push((int) 537786)
0x3c9: @@ SetMessage(Stack[-1])
0x3ca: Pop(1)
0x3cb: @@ ClearReplies()
0x3cc: Pop(0)
0x3cd: PushEmpty(bool, object)
0x3ce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cf: Call2 0x1224

0x3d0: Pop(1)
0x3d1: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d2: Push((int) 537787)
0x3d3: Push((int) -1)
0x3d4: Push((int) 39638)
0x3d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d6: Pop(3)
0x3d7: PushEmpty(bool, object)
0x3d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d9: Call2 0x1224

0x3da: Pop(1)
0x3db: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3dc: Push((int) 537788)
0x3dd: Push((int) -1)
0x3de: Push((int) 39639)
0x3df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e0: Pop(3)
0x3e1: PushEmpty(bool, object)
0x3e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3e3: Call2 0x1224

0x3e4: Pop(1)
0x3e5: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e6: Push((int) 537789)
0x3e7: Push((int) 39641)
0x3e8: Push((int) 39640)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: PushEmpty(bool, object)
0x3ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3ed: Call2 0x1224

0x3ee: Pop(1)
0x3ef: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f0: Push((int) 537792)
0x3f1: Push((int) 39644)
0x3f2: Push((int) 39643)
0x3f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f4: Pop(3)
0x3f5: PushEmpty(bool)
0x3f6: Stack[-1] = (bool) 0
0x3f7: PushEmpty(bool, object)
0x3f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3f9: Call2 0x120c

0x3fa: Pop(1)
0x3fb: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x3fc: PushEmpty(bool, object)
0x3fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3fe: Call2 0x122e

0x3ff: Pop(1)
0x400: IF (Stack[-1] == 0) GOTO 0x402; Pop(1)

0x401: Stack[-1] = (bool) 1
0x402: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x403: Push((int) 537805)
0x404: Push((int) 39658)
0x405: Push((int) 39657)
0x406: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x407: Pop(3)
0x408: PushEmpty(bool)
0x409: Stack[-1] = (bool) 0
0x40a: PushEmpty(bool, object)
0x40b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x40c: Call2 0x120c

0x40d: Pop(1)
0x40e: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x40f: PushEmpty(bool, object)
0x410: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x411: Call2 0x1238

0x412: Pop(1)
0x413: IF (Stack[-1] == 0) GOTO 0x415; Pop(1)

0x414: Stack[-1] = (bool) 1
0x415: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x416: Push((int) 537826)
0x417: Push((int) 39679)
0x418: Push((int) 39678)
0x419: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41a: Pop(3)
0x41b: PushEmpty(bool)
0x41c: Stack[-1] = (bool) 0
0x41d: PushEmpty(bool, object)
0x41e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x41f: Call2 0x120c

0x420: Pop(1)
0x421: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x422: PushEmpty(bool, object)
0x423: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x424: Call2 0x1242

0x425: Pop(1)
0x426: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x427: Stack[-1] = (bool) 1
0x428: IF (Stack[-1] == 0) GOTO 0x42e; Pop(1)

0x429: Push((int) 537846)
0x42a: Push((int) 39703)
0x42b: Push((int) 39702)
0x42c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42d: Pop(3)
0x42e: PushEmpty(bool)
0x42f: Stack[-1] = (bool) 0
0x430: PushEmpty(bool, object)
0x431: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x432: Call2 0x120c

0x433: Pop(1)
0x434: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x435: PushEmpty(bool, object)
0x436: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x437: Call2 0x124c

0x438: Pop(1)
0x439: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x43a: Stack[-1] = (bool) 1
0x43b: IF (Stack[-1] == 0) GOTO 0x441; Pop(1)

0x43c: Push((int) 537855)
0x43d: Push((int) 39713)
0x43e: Push((int) 39712)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: PushEmpty(bool)
0x442: Stack[-1] = (bool) 0
0x443: PushEmpty(bool, object)
0x444: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x445: Call2 0x120c

0x446: Pop(1)
0x447: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x448: PushEmpty(bool, object)
0x449: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x44a: Call2 0x1260

0x44b: Pop(1)
0x44c: IF (Stack[-1] == 0) GOTO 0x44e; Pop(1)

0x44d: Stack[-1] = (bool) 1
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: Push((int) 537867)
0x450: Push((int) 39726)
0x451: Push((int) 39725)
0x452: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x453: Pop(3)
0x454: PushEmpty(bool)
0x455: Stack[-1] = (bool) 0
0x456: PushEmpty(bool, object)
0x457: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x458: Call2 0x120c

0x459: Pop(1)
0x45a: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45b: PushEmpty(bool, object)
0x45c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x45d: Call2 0x126a

0x45e: Pop(1)
0x45f: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x460: Stack[-1] = (bool) 1
0x461: IF (Stack[-1] == 0) GOTO 0x467; Pop(1)

0x462: Push((int) 537881)
0x463: Push((int) 39741)
0x464: Push((int) 39740)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: PushEmpty(bool)
0x468: Stack[-1] = (bool) 0
0x469: PushEmpty(bool, object)
0x46a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46b: Call2 0x120c

0x46c: Pop(1)
0x46d: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x46e: PushEmpty(bool, object)
0x46f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x470: Call2 0x1274

0x471: Pop(1)
0x472: IF (Stack[-1] == 0) GOTO 0x474; Pop(1)

0x473: Stack[-1] = (bool) 1
0x474: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x475: Push((int) 537895)
0x476: Push((int) 39756)
0x477: Push((int) 39755)
0x478: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x479: Pop(3)
0x47a: PushEmpty(bool)
0x47b: Stack[-1] = (bool) 0
0x47c: PushEmpty(bool, object)
0x47d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47e: Call2 0x120c

0x47f: Pop(1)
0x480: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x481: PushEmpty(bool, object)
0x482: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x483: Call2 0x1288

0x484: Pop(1)
0x485: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x486: Stack[-1] = (bool) 1
0x487: IF (Stack[-1] == 0) GOTO 0x48d; Pop(1)

0x488: Push((int) 537905)
0x489: Push((int) 39766)
0x48a: Push((int) 39765)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: PushEmpty(bool)
0x48e: Stack[-1] = (bool) 0
0x48f: PushEmpty(bool, object)
0x490: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x491: Call2 0x120c

0x492: Pop(1)
0x493: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x494: PushEmpty(bool, object)
0x495: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x496: Call2 0x1292

0x497: Pop(1)
0x498: IF (Stack[-1] == 0) GOTO 0x49a; Pop(1)

0x499: Stack[-1] = (bool) 1
0x49a: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49b: Push((int) 537918)
0x49c: Push((int) 39780)
0x49d: Push((int) 39779)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Push((int) 537927)
0x4a1: Push((int) -1)
0x4a2: Push((int) 39788)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Push((int) 537928)
0x4a6: Push((int) -1)
0x4a7: Push((int) 39789)
0x4a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a9: Pop(3)
0x4aa: Return(); Pop(0)

0x4ab: Push((int) 39780)
0x4ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ad: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4ae: PushEmpty(string)
0x4af: Stack[-1] = "Neutral"
0x4b0: Call2 0x27e

0x4b1: Pop(1)
0x4b2: Push((int) 537919)
0x4b3: @@ SetMessage(Stack[-1])
0x4b4: Pop(1)
0x4b5: @@ ClearReplies()
0x4b6: Pop(0)
0x4b7: Push((int) 537920)
0x4b8: Push((int) 39782)
0x4b9: Push((int) 39781)
0x4ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4bb: Pop(3)
0x4bc: Push((int) 537926)
0x4bd: Push((int) -1)
0x4be: Push((int) 39787)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Return(); Pop(0)

0x4c2: Push((int) 39782)
0x4c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4d4; Pop(1)

0x4c5: PushEmpty(string)
0x4c6: Stack[-1] = "Neutral"
0x4c7: Call2 0x27e

0x4c8: Pop(1)
0x4c9: Push((int) 537921)
0x4ca: @@ SetMessage(Stack[-1])
0x4cb: Pop(1)
0x4cc: @@ ClearReplies()
0x4cd: Pop(0)
0x4ce: Push((int) 537922)
0x4cf: Push((int) 39784)
0x4d0: Push((int) 39783)
0x4d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d2: Pop(3)
0x4d3: Return(); Pop(0)

0x4d4: Push((int) 39784)
0x4d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d6: IF (Stack[-1] == 0) GOTO 0x4eb; Pop(1)

0x4d7: PushEmpty(string)
0x4d8: Stack[-1] = "Neutral"
0x4d9: Call2 0x27e

0x4da: Pop(1)
0x4db: Push((int) 537923)
0x4dc: @@ SetMessage(Stack[-1])
0x4dd: Pop(1)
0x4de: @@ ClearReplies()
0x4df: Pop(0)
0x4e0: Push((int) 537924)
0x4e1: Push((int) -1)
0x4e2: Push((int) 39785)
0x4e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e4: Pop(3)
0x4e5: Push((int) 537925)
0x4e6: Push((int) -1)
0x4e7: Push((int) 39786)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Return(); Pop(0)

0x4eb: Push((int) 39766)
0x4ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4ee: PushEmpty(string)
0x4ef: Stack[-1] = "Neutral"
0x4f0: Call2 0x27e

0x4f1: Pop(1)
0x4f2: Push((int) 537906)
0x4f3: @@ SetMessage(Stack[-1])
0x4f4: Pop(1)
0x4f5: @@ ClearReplies()
0x4f6: Pop(0)
0x4f7: Push((int) 537907)
0x4f8: Push((int) 39768)
0x4f9: Push((int) 39767)
0x4fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fb: Pop(3)
0x4fc: Push((int) 537917)
0x4fd: Push((int) -1)
0x4fe: Push((int) 39778)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 39768)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x519; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Neutral"
0x507: Call2 0x27e

0x508: Pop(1)
0x509: Push((int) 537908)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 537909)
0x50f: Push((int) 39770)
0x510: Push((int) 39769)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Push((int) 537913)
0x514: Push((int) 39774)
0x515: Push((int) 39773)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Return(); Pop(0)

0x519: Push((int) 39774)
0x51a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51b: IF (Stack[-1] == 0) GOTO 0x530; Pop(1)

0x51c: PushEmpty(string)
0x51d: Stack[-1] = "Neutral"
0x51e: Call2 0x27e

0x51f: Pop(1)
0x520: Push((int) 537914)
0x521: @@ SetMessage(Stack[-1])
0x522: Pop(1)
0x523: @@ ClearReplies()
0x524: Pop(0)
0x525: Push((int) 537915)
0x526: Push((int) 39770)
0x527: Push((int) 39775)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Push((int) 537916)
0x52b: Push((int) -1)
0x52c: Push((int) 39777)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Return(); Pop(0)

0x530: Push((int) 39770)
0x531: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x533: PushEmpty(string)
0x534: Stack[-1] = "Neutral"
0x535: Call2 0x27e

0x536: Pop(1)
0x537: Push((int) 537910)
0x538: @@ SetMessage(Stack[-1])
0x539: Pop(1)
0x53a: @@ ClearReplies()
0x53b: Pop(0)
0x53c: Push((int) 537911)
0x53d: Push((int) -1)
0x53e: Push((int) 39771)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Push((int) 537912)
0x542: Push((int) -1)
0x543: Push((int) 39772)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Return(); Pop(0)

0x547: Push((int) 39756)
0x548: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x55e; Pop(1)

0x54a: PushEmpty(string)
0x54b: Stack[-1] = "Neutral"
0x54c: Call2 0x27e

0x54d: Pop(1)
0x54e: Push((int) 537896)
0x54f: @@ SetMessage(Stack[-1])
0x550: Pop(1)
0x551: @@ ClearReplies()
0x552: Pop(0)
0x553: Push((int) 537897)
0x554: Push((int) 39758)
0x555: Push((int) 39757)
0x556: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x557: Pop(3)
0x558: Push((int) 537904)
0x559: Push((int) -1)
0x55a: Push((int) 39764)
0x55b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55c: Pop(3)
0x55d: Return(); Pop(0)

0x55e: Push((int) 39758)
0x55f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x575; Pop(1)

0x561: PushEmpty(string)
0x562: Stack[-1] = "Neutral"
0x563: Call2 0x27e

0x564: Pop(1)
0x565: Push((int) 537898)
0x566: @@ SetMessage(Stack[-1])
0x567: Pop(1)
0x568: @@ ClearReplies()
0x569: Pop(0)
0x56a: Push((int) 537899)
0x56b: Push((int) 39760)
0x56c: Push((int) 39759)
0x56d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x56e: Pop(3)
0x56f: Push((int) 537903)
0x570: Push((int) -1)
0x571: Push((int) 39763)
0x572: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x573: Pop(3)
0x574: Return(); Pop(0)

0x575: Push((int) 39760)
0x576: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x578: PushEmpty(string)
0x579: Stack[-1] = "Neutral"
0x57a: Call2 0x27e

0x57b: Pop(1)
0x57c: Push((int) 537900)
0x57d: @@ SetMessage(Stack[-1])
0x57e: Pop(1)
0x57f: @@ ClearReplies()
0x580: Pop(0)
0x581: Push((int) 537901)
0x582: Push((int) -1)
0x583: Push((int) 39761)
0x584: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x585: Pop(3)
0x586: Push((int) 537902)
0x587: Push((int) -1)
0x588: Push((int) 39762)
0x589: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58a: Pop(3)
0x58b: Return(); Pop(0)

0x58c: Push((int) 39741)
0x58d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x58e: IF (Stack[-1] == 0) GOTO 0x5a3; Pop(1)

0x58f: PushEmpty(string)
0x590: Stack[-1] = "Neutral"
0x591: Call2 0x27e

0x592: Pop(1)
0x593: Push((int) 537882)
0x594: @@ SetMessage(Stack[-1])
0x595: Pop(1)
0x596: @@ ClearReplies()
0x597: Pop(0)
0x598: Push((int) 537883)
0x599: Push((int) 39743)
0x59a: Push((int) 39742)
0x59b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59c: Pop(3)
0x59d: Push((int) 537891)
0x59e: Push((int) 39751)
0x59f: Push((int) 39750)
0x5a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a1: Pop(3)
0x5a2: Return(); Pop(0)

0x5a3: Push((int) 39751)
0x5a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a5: IF (Stack[-1] == 0) GOTO 0x5ba; Pop(1)

0x5a6: PushEmpty(string)
0x5a7: Stack[-1] = "Neutral"
0x5a8: Call2 0x27e

0x5a9: Pop(1)
0x5aa: Push((int) 537892)
0x5ab: @@ SetMessage(Stack[-1])
0x5ac: Pop(1)
0x5ad: @@ ClearReplies()
0x5ae: Pop(0)
0x5af: Push((int) 537893)
0x5b0: Push((int) 39745)
0x5b1: Push((int) 39752)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Push((int) 537894)
0x5b5: Push((int) -1)
0x5b6: Push((int) 39754)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: Return(); Pop(0)

0x5ba: Push((int) 39743)
0x5bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bc: IF (Stack[-1] == 0) GOTO 0x5cc; Pop(1)

0x5bd: PushEmpty(string)
0x5be: Stack[-1] = "Neutral"
0x5bf: Call2 0x27e

0x5c0: Pop(1)
0x5c1: Push((int) 537884)
0x5c2: @@ SetMessage(Stack[-1])
0x5c3: Pop(1)
0x5c4: @@ ClearReplies()
0x5c5: Pop(0)
0x5c6: Push((int) 537885)
0x5c7: Push((int) 39745)
0x5c8: Push((int) 39744)
0x5c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ca: Pop(3)
0x5cb: Return(); Pop(0)

0x5cc: Push((int) 39745)
0x5cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ce: IF (Stack[-1] == 0) GOTO 0x5e3; Pop(1)

0x5cf: PushEmpty(string)
0x5d0: Stack[-1] = "Neutral"
0x5d1: Call2 0x27e

0x5d2: Pop(1)
0x5d3: Push((int) 537886)
0x5d4: @@ SetMessage(Stack[-1])
0x5d5: Pop(1)
0x5d6: @@ ClearReplies()
0x5d7: Pop(0)
0x5d8: Push((int) 537887)
0x5d9: Push((int) 39747)
0x5da: Push((int) 39746)
0x5db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5dc: Pop(3)
0x5dd: Push((int) 537890)
0x5de: Push((int) -1)
0x5df: Push((int) 39749)
0x5e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e1: Pop(3)
0x5e2: Return(); Pop(0)

0x5e3: Push((int) 39747)
0x5e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e5: IF (Stack[-1] == 0) GOTO 0x5f5; Pop(1)

0x5e6: PushEmpty(string)
0x5e7: Stack[-1] = "Neutral"
0x5e8: Call2 0x27e

0x5e9: Pop(1)
0x5ea: Push((int) 537888)
0x5eb: @@ SetMessage(Stack[-1])
0x5ec: Pop(1)
0x5ed: @@ ClearReplies()
0x5ee: Pop(0)
0x5ef: Push((int) 537889)
0x5f0: Push((int) -1)
0x5f1: Push((int) 39748)
0x5f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f3: Pop(3)
0x5f4: Return(); Pop(0)

0x5f5: Push((int) 39726)
0x5f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x60c; Pop(1)

0x5f8: PushEmpty(string)
0x5f9: Stack[-1] = "Neutral"
0x5fa: Call2 0x27e

0x5fb: Pop(1)
0x5fc: Push((int) 537868)
0x5fd: @@ SetMessage(Stack[-1])
0x5fe: Pop(1)
0x5ff: @@ ClearReplies()
0x600: Pop(0)
0x601: Push((int) 537869)
0x602: Push((int) 39728)
0x603: Push((int) 39727)
0x604: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x605: Pop(3)
0x606: Push((int) 537880)
0x607: Push((int) -1)
0x608: Push((int) 39739)
0x609: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60a: Pop(3)
0x60b: Return(); Pop(0)

0x60c: Push((int) 39728)
0x60d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x623; Pop(1)

0x60f: PushEmpty(string)
0x610: Stack[-1] = "Neutral"
0x611: Call2 0x27e

0x612: Pop(1)
0x613: Push((int) 537870)
0x614: @@ SetMessage(Stack[-1])
0x615: Pop(1)
0x616: @@ ClearReplies()
0x617: Pop(0)
0x618: Push((int) 537871)
0x619: Push((int) 39730)
0x61a: Push((int) 39729)
0x61b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61c: Pop(3)
0x61d: Push((int) 537877)
0x61e: Push((int) 39736)
0x61f: Push((int) 39735)
0x620: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x621: Pop(3)
0x622: Return(); Pop(0)

0x623: Push((int) 39736)
0x624: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x625: IF (Stack[-1] == 0) GOTO 0x635; Pop(1)

0x626: PushEmpty(string)
0x627: Stack[-1] = "Neutral"
0x628: Call2 0x27e

0x629: Pop(1)
0x62a: Push((int) 537878)
0x62b: @@ SetMessage(Stack[-1])
0x62c: Pop(1)
0x62d: @@ ClearReplies()
0x62e: Pop(0)
0x62f: Push((int) 537879)
0x630: Push((int) 39730)
0x631: Push((int) 39737)
0x632: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x633: Pop(3)
0x634: Return(); Pop(0)

0x635: Push((int) 39730)
0x636: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x637: IF (Stack[-1] == 0) GOTO 0x647; Pop(1)

0x638: PushEmpty(string)
0x639: Stack[-1] = "Neutral"
0x63a: Call2 0x27e

0x63b: Pop(1)
0x63c: Push((int) 537872)
0x63d: @@ SetMessage(Stack[-1])
0x63e: Pop(1)
0x63f: @@ ClearReplies()
0x640: Pop(0)
0x641: Push((int) 537873)
0x642: Push((int) 39732)
0x643: Push((int) 39731)
0x644: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x645: Pop(3)
0x646: Return(); Pop(0)

0x647: Push((int) 39732)
0x648: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x649: IF (Stack[-1] == 0) GOTO 0x65e; Pop(1)

0x64a: PushEmpty(string)
0x64b: Stack[-1] = "Neutral"
0x64c: Call2 0x27e

0x64d: Pop(1)
0x64e: Push((int) 537874)
0x64f: @@ SetMessage(Stack[-1])
0x650: Pop(1)
0x651: @@ ClearReplies()
0x652: Pop(0)
0x653: Push((int) 537875)
0x654: Push((int) -1)
0x655: Push((int) 39733)
0x656: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x657: Pop(3)
0x658: Push((int) 537876)
0x659: Push((int) -1)
0x65a: Push((int) 39734)
0x65b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x65c: Pop(3)
0x65d: Return(); Pop(0)

0x65e: Push((int) 39713)
0x65f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x660: IF (Stack[-1] == 0) GOTO 0x675; Pop(1)

0x661: PushEmpty(string)
0x662: Stack[-1] = "Neutral"
0x663: Call2 0x27e

0x664: Pop(1)
0x665: Push((int) 537856)
0x666: @@ SetMessage(Stack[-1])
0x667: Pop(1)
0x668: @@ ClearReplies()
0x669: Pop(0)
0x66a: Push((int) 537857)
0x66b: Push((int) 39715)
0x66c: Push((int) 39714)
0x66d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66e: Pop(3)
0x66f: Push((int) 537864)
0x670: Push((int) 39722)
0x671: Push((int) 39721)
0x672: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x673: Pop(3)
0x674: Return(); Pop(0)

0x675: Push((int) 39722)
0x676: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x677: IF (Stack[-1] == 0) GOTO 0x687; Pop(1)

0x678: PushEmpty(string)
0x679: Stack[-1] = "Neutral"
0x67a: Call2 0x27e

0x67b: Pop(1)
0x67c: Push((int) 537865)
0x67d: @@ SetMessage(Stack[-1])
0x67e: Pop(1)
0x67f: @@ ClearReplies()
0x680: Pop(0)
0x681: Push((int) 537866)
0x682: Push((int) 39717)
0x683: Push((int) 39723)
0x684: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x685: Pop(3)
0x686: Return(); Pop(0)

0x687: Push((int) 39715)
0x688: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x689: IF (Stack[-1] == 0) GOTO 0x69e; Pop(1)

0x68a: PushEmpty(string)
0x68b: Stack[-1] = "Neutral"
0x68c: Call2 0x27e

0x68d: Pop(1)
0x68e: Push((int) 537858)
0x68f: @@ SetMessage(Stack[-1])
0x690: Pop(1)
0x691: @@ ClearReplies()
0x692: Pop(0)
0x693: Push((int) 537859)
0x694: Push((int) 39717)
0x695: Push((int) 39716)
0x696: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x697: Pop(3)
0x698: Push((int) 537863)
0x699: Push((int) -1)
0x69a: Push((int) 39720)
0x69b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69c: Pop(3)
0x69d: Return(); Pop(0)

0x69e: Push((int) 39717)
0x69f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a0: IF (Stack[-1] == 0) GOTO 0x6b5; Pop(1)

0x6a1: PushEmpty(string)
0x6a2: Stack[-1] = "Neutral"
0x6a3: Call2 0x27e

0x6a4: Pop(1)
0x6a5: Push((int) 537860)
0x6a6: @@ SetMessage(Stack[-1])
0x6a7: Pop(1)
0x6a8: @@ ClearReplies()
0x6a9: Pop(0)
0x6aa: Push((int) 537861)
0x6ab: Push((int) -1)
0x6ac: Push((int) 39718)
0x6ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ae: Pop(3)
0x6af: Push((int) 537862)
0x6b0: Push((int) -1)
0x6b1: Push((int) 39719)
0x6b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b3: Pop(3)
0x6b4: Return(); Pop(0)

0x6b5: Push((int) 39703)
0x6b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6b7: IF (Stack[-1] == 0) GOTO 0x6cc; Pop(1)

0x6b8: PushEmpty(string)
0x6b9: Stack[-1] = "Neutral"
0x6ba: Call2 0x27e

0x6bb: Pop(1)
0x6bc: Push((int) 537847)
0x6bd: @@ SetMessage(Stack[-1])
0x6be: Pop(1)
0x6bf: @@ ClearReplies()
0x6c0: Pop(0)
0x6c1: Push((int) 537848)
0x6c2: Push((int) 39705)
0x6c3: Push((int) 39704)
0x6c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c5: Pop(3)
0x6c6: Push((int) 537854)
0x6c7: Push((int) 39707)
0x6c8: Push((int) 39710)
0x6c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ca: Pop(3)
0x6cb: Return(); Pop(0)

0x6cc: Push((int) 39705)
0x6cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ce: IF (Stack[-1] == 0) GOTO 0x6de; Pop(1)

0x6cf: PushEmpty(string)
0x6d0: Stack[-1] = "Neutral"
0x6d1: Call2 0x27e

0x6d2: Pop(1)
0x6d3: Push((int) 537849)
0x6d4: @@ SetMessage(Stack[-1])
0x6d5: Pop(1)
0x6d6: @@ ClearReplies()
0x6d7: Pop(0)
0x6d8: Push((int) 537850)
0x6d9: Push((int) 39707)
0x6da: Push((int) 39706)
0x6db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6dc: Pop(3)
0x6dd: Return(); Pop(0)

0x6de: Push((int) 39707)
0x6df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e0: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6e1: PushEmpty(string)
0x6e2: Stack[-1] = "Neutral"
0x6e3: Call2 0x27e

0x6e4: Pop(1)
0x6e5: Push((int) 537851)
0x6e6: @@ SetMessage(Stack[-1])
0x6e7: Pop(1)
0x6e8: @@ ClearReplies()
0x6e9: Pop(0)
0x6ea: Push((int) 537852)
0x6eb: Push((int) -1)
0x6ec: Push((int) 39708)
0x6ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ee: Pop(3)
0x6ef: Push((int) 537853)
0x6f0: Push((int) -1)
0x6f1: Push((int) 39709)
0x6f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f3: Pop(3)
0x6f4: Return(); Pop(0)

0x6f5: Push((int) 39679)
0x6f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6f7: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x6f8: PushEmpty(string)
0x6f9: Stack[-1] = "Neutral"
0x6fa: Call2 0x27e

0x6fb: Pop(1)
0x6fc: Push((int) 537827)
0x6fd: @@ SetMessage(Stack[-1])
0x6fe: Pop(1)
0x6ff: @@ ClearReplies()
0x700: Pop(0)
0x701: Push((int) 537828)
0x702: Push((int) 39681)
0x703: Push((int) 39680)
0x704: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x705: Pop(3)
0x706: Push((int) 537843)
0x707: Push((int) 39699)
0x708: Push((int) 39698)
0x709: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70a: Pop(3)
0x70b: Return(); Pop(0)

0x70c: Push((int) 39699)
0x70d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x70e: IF (Stack[-1] == 0) GOTO 0x71e; Pop(1)

0x70f: PushEmpty(string)
0x710: Stack[-1] = "Neutral"
0x711: Call2 0x27e

0x712: Pop(1)
0x713: Push((int) 537844)
0x714: @@ SetMessage(Stack[-1])
0x715: Pop(1)
0x716: @@ ClearReplies()
0x717: Pop(0)
0x718: Push((int) 537845)
0x719: Push((int) 39681)
0x71a: Push((int) 39700)
0x71b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x71c: Pop(3)
0x71d: Return(); Pop(0)

0x71e: Push((int) 39681)
0x71f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x720: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x721: PushEmpty(string)
0x722: Stack[-1] = "Neutral"
0x723: Call2 0x27e

0x724: Pop(1)
0x725: Push((int) 537829)
0x726: @@ SetMessage(Stack[-1])
0x727: Pop(1)
0x728: @@ ClearReplies()
0x729: Pop(0)
0x72a: Push((int) 537830)
0x72b: Push((int) 39683)
0x72c: Push((int) 39682)
0x72d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72e: Pop(3)
0x72f: Push((int) 537840)
0x730: Push((int) 39695)
0x731: Push((int) 39694)
0x732: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x733: Pop(3)
0x734: Return(); Pop(0)

0x735: Push((int) 39695)
0x736: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x737: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x738: PushEmpty(string)
0x739: Stack[-1] = "Neutral"
0x73a: Call2 0x27e

0x73b: Pop(1)
0x73c: Push((int) 537841)
0x73d: @@ SetMessage(Stack[-1])
0x73e: Pop(1)
0x73f: @@ ClearReplies()
0x740: Pop(0)
0x741: Push((int) 537842)
0x742: Push((int) 39685)
0x743: Push((int) 39696)
0x744: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x745: Pop(3)
0x746: Return(); Pop(0)

0x747: Push((int) 39683)
0x748: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x749: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x74a: PushEmpty(string)
0x74b: Stack[-1] = "Neutral"
0x74c: Call2 0x27e

0x74d: Pop(1)
0x74e: Push((int) 537831)
0x74f: @@ SetMessage(Stack[-1])
0x750: Pop(1)
0x751: @@ ClearReplies()
0x752: Pop(0)
0x753: Push((int) 537832)
0x754: Push((int) 39685)
0x755: Push((int) 39684)
0x756: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x757: Pop(3)
0x758: Return(); Pop(0)

0x759: Push((int) 39685)
0x75a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x75b: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x75c: PushEmpty(string)
0x75d: Stack[-1] = "Neutral"
0x75e: Call2 0x27e

0x75f: Pop(1)
0x760: Push((int) 537833)
0x761: @@ SetMessage(Stack[-1])
0x762: Pop(1)
0x763: @@ ClearReplies()
0x764: Pop(0)
0x765: Push((int) 537834)
0x766: Push((int) 39687)
0x767: Push((int) 39686)
0x768: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x769: Pop(3)
0x76a: Push((int) 537838)
0x76b: Push((int) 39687)
0x76c: Push((int) 39690)
0x76d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76e: Pop(3)
0x76f: Push((int) 537839)
0x770: Push((int) 39687)
0x771: Push((int) 39692)
0x772: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x773: Pop(3)
0x774: Return(); Pop(0)

0x775: Push((int) 39687)
0x776: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x777: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x778: PushEmpty(string)
0x779: Stack[-1] = "Neutral"
0x77a: Call2 0x27e

0x77b: Pop(1)
0x77c: Push((int) 537835)
0x77d: @@ SetMessage(Stack[-1])
0x77e: Pop(1)
0x77f: @@ ClearReplies()
0x780: Pop(0)
0x781: Push((int) 537836)
0x782: Push((int) -1)
0x783: Push((int) 39688)
0x784: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x785: Pop(3)
0x786: Push((int) 537837)
0x787: Push((int) -1)
0x788: Push((int) 39689)
0x789: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78a: Pop(3)
0x78b: Return(); Pop(0)

0x78c: Push((int) 39658)
0x78d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78e: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x78f: PushEmpty(string)
0x790: Stack[-1] = "Neutral"
0x791: Call2 0x27e

0x792: Pop(1)
0x793: Push((int) 537806)
0x794: @@ SetMessage(Stack[-1])
0x795: Pop(1)
0x796: @@ ClearReplies()
0x797: Pop(0)
0x798: Push((int) 537807)
0x799: Push((int) 39660)
0x79a: Push((int) 39659)
0x79b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79c: Pop(3)
0x79d: Push((int) 537818)
0x79e: Push((int) 39671)
0x79f: Push((int) 39670)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Return(); Pop(0)

0x7a3: Push((int) 39671)
0x7a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "Neutral"
0x7a8: Call2 0x27e

0x7a9: Pop(1)
0x7aa: Push((int) 537819)
0x7ab: @@ SetMessage(Stack[-1])
0x7ac: Pop(1)
0x7ad: @@ ClearReplies()
0x7ae: Pop(0)
0x7af: Push((int) 537820)
0x7b0: Push((int) 39673)
0x7b1: Push((int) 39672)
0x7b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b3: Pop(3)
0x7b4: Return(); Pop(0)

0x7b5: Push((int) 39673)
0x7b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b7: IF (Stack[-1] == 0) GOTO 0x7c7; Pop(1)

0x7b8: PushEmpty(string)
0x7b9: Stack[-1] = "Neutral"
0x7ba: Call2 0x27e

0x7bb: Pop(1)
0x7bc: Push((int) 537821)
0x7bd: @@ SetMessage(Stack[-1])
0x7be: Pop(1)
0x7bf: @@ ClearReplies()
0x7c0: Pop(0)
0x7c1: Push((int) 537822)
0x7c2: Push((int) 39675)
0x7c3: Push((int) 39674)
0x7c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c5: Pop(3)
0x7c6: Return(); Pop(0)

0x7c7: Push((int) 39675)
0x7c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c9: IF (Stack[-1] == 0) GOTO 0x7de; Pop(1)

0x7ca: PushEmpty(string)
0x7cb: Stack[-1] = "Neutral"
0x7cc: Call2 0x27e

0x7cd: Pop(1)
0x7ce: Push((int) 537823)
0x7cf: @@ SetMessage(Stack[-1])
0x7d0: Pop(1)
0x7d1: @@ ClearReplies()
0x7d2: Pop(0)
0x7d3: Push((int) 537824)
0x7d4: Push((int) -1)
0x7d5: Push((int) 39676)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: Push((int) 537825)
0x7d9: Push((int) -1)
0x7da: Push((int) 39677)
0x7db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7dc: Pop(3)
0x7dd: Return(); Pop(0)

0x7de: Push((int) 39660)
0x7df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e0: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7e1: PushEmpty(string)
0x7e2: Stack[-1] = "Neutral"
0x7e3: Call2 0x27e

0x7e4: Pop(1)
0x7e5: Push((int) 537808)
0x7e6: @@ SetMessage(Stack[-1])
0x7e7: Pop(1)
0x7e8: @@ ClearReplies()
0x7e9: Pop(0)
0x7ea: Push((int) 537809)
0x7eb: Push((int) 39662)
0x7ec: Push((int) 39661)
0x7ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ee: Pop(3)
0x7ef: Push((int) 537815)
0x7f0: Push((int) 39668)
0x7f1: Push((int) 39667)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: Return(); Pop(0)

0x7f5: Push((int) 39668)
0x7f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f7: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x7f8: PushEmpty(string)
0x7f9: Stack[-1] = "Neutral"
0x7fa: Call2 0x27e

0x7fb: Pop(1)
0x7fc: Push((int) 537816)
0x7fd: @@ SetMessage(Stack[-1])
0x7fe: Pop(1)
0x7ff: @@ ClearReplies()
0x800: Pop(0)
0x801: Push((int) 537817)
0x802: Push((int) -1)
0x803: Push((int) 39669)
0x804: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x805: Pop(3)
0x806: Return(); Pop(0)

0x807: Push((int) 39662)
0x808: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x809: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x80a: PushEmpty(string)
0x80b: Stack[-1] = "Neutral"
0x80c: Call2 0x27e

0x80d: Pop(1)
0x80e: Push((int) 537810)
0x80f: @@ SetMessage(Stack[-1])
0x810: Pop(1)
0x811: @@ ClearReplies()
0x812: Pop(0)
0x813: Push((int) 537811)
0x814: Push((int) 39664)
0x815: Push((int) 39663)
0x816: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x817: Pop(3)
0x818: Push((int) 537814)
0x819: Push((int) -1)
0x81a: Push((int) 39666)
0x81b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81c: Pop(3)
0x81d: Return(); Pop(0)

0x81e: Push((int) 39664)
0x81f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x820: IF (Stack[-1] == 0) GOTO 0x830; Pop(1)

0x821: PushEmpty(string)
0x822: Stack[-1] = "Neutral"
0x823: Call2 0x27e

0x824: Pop(1)
0x825: Push((int) 537812)
0x826: @@ SetMessage(Stack[-1])
0x827: Pop(1)
0x828: @@ ClearReplies()
0x829: Pop(0)
0x82a: Push((int) 537813)
0x82b: Push((int) -1)
0x82c: Push((int) 39665)
0x82d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82e: Pop(3)
0x82f: Return(); Pop(0)

0x830: Push((int) 39644)
0x831: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x832: IF (Stack[-1] == 0) GOTO 0x847; Pop(1)

0x833: PushEmpty(string)
0x834: Stack[-1] = "Neutral"
0x835: Call2 0x27e

0x836: Pop(1)
0x837: Push((int) 537793)
0x838: @@ SetMessage(Stack[-1])
0x839: Pop(1)
0x83a: @@ ClearReplies()
0x83b: Pop(0)
0x83c: Push((int) 537794)
0x83d: Push((int) 39646)
0x83e: Push((int) 39645)
0x83f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x840: Pop(3)
0x841: Push((int) 537804)
0x842: Push((int) -1)
0x843: Push((int) 39656)
0x844: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x845: Pop(3)
0x846: Return(); Pop(0)

0x847: Push((int) 39646)
0x848: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x849: IF (Stack[-1] == 0) GOTO 0x85e; Pop(1)

0x84a: PushEmpty(string)
0x84b: Stack[-1] = "Neutral"
0x84c: Call2 0x27e

0x84d: Pop(1)
0x84e: Push((int) 537795)
0x84f: @@ SetMessage(Stack[-1])
0x850: Pop(1)
0x851: @@ ClearReplies()
0x852: Pop(0)
0x853: Push((int) 537796)
0x854: Push((int) 39648)
0x855: Push((int) 39647)
0x856: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x857: Pop(3)
0x858: Push((int) 537803)
0x859: Push((int) 39648)
0x85a: Push((int) 39654)
0x85b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85c: Pop(3)
0x85d: Return(); Pop(0)

0x85e: Push((int) 39648)
0x85f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x875; Pop(1)

0x861: PushEmpty(string)
0x862: Stack[-1] = "Neutral"
0x863: Call2 0x27e

0x864: Pop(1)
0x865: Push((int) 537797)
0x866: @@ SetMessage(Stack[-1])
0x867: Pop(1)
0x868: @@ ClearReplies()
0x869: Pop(0)
0x86a: Push((int) 537798)
0x86b: Push((int) 39650)
0x86c: Push((int) 39649)
0x86d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86e: Pop(3)
0x86f: Push((int) 537802)
0x870: Push((int) -1)
0x871: Push((int) 39653)
0x872: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x873: Pop(3)
0x874: Return(); Pop(0)

0x875: Push((int) 39650)
0x876: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x877: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x878: PushEmpty(string)
0x879: Stack[-1] = "Neutral"
0x87a: Call2 0x27e

0x87b: Pop(1)
0x87c: Push((int) 537799)
0x87d: @@ SetMessage(Stack[-1])
0x87e: Pop(1)
0x87f: @@ ClearReplies()
0x880: Pop(0)
0x881: Push((int) 537800)
0x882: Push((int) -1)
0x883: Push((int) 39651)
0x884: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x885: Pop(3)
0x886: Push((int) 537801)
0x887: Push((int) -1)
0x888: Push((int) 39652)
0x889: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: Return(); Pop(0)

0x88c: Push((int) 39641)
0x88d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x88f: PushEmpty(string)
0x890: Stack[-1] = "Neutral"
0x891: Call2 0x27e

0x892: Pop(1)
0x893: Push((int) 537790)
0x894: @@ SetMessage(Stack[-1])
0x895: Pop(1)
0x896: @@ ClearReplies()
0x897: Pop(0)
0x898: Push((int) 537791)
0x899: Push((int) -1)
0x89a: Push((int) 39642)
0x89b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: Return(); Pop(0)

0x89e: Push((int) 45779)
0x89f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8b5; Pop(1)

0x8a1: PushEmpty(string)
0x8a2: Stack[-1] = "Neutral"
0x8a3: Call2 0x27e

0x8a4: Pop(1)
0x8a5: Push((int) 543323)
0x8a6: @@ SetMessage(Stack[-1])
0x8a7: Pop(1)
0x8a8: @@ ClearReplies()
0x8a9: Pop(0)
0x8aa: Push((int) 543325)
0x8ab: Push((int) -1)
0x8ac: Push((int) 45781)
0x8ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ae: Pop(3)
0x8af: Push((int) 543326)
0x8b0: Push((int) -1)
0x8b1: Push((int) 45782)
0x8b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b3: Pop(3)
0x8b4: Return(); Pop(0)

0x8b5: Push((int) 45775)
0x8b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b7: IF (Stack[-1] == 0) GOTO 0x8c7; Pop(1)

0x8b8: PushEmpty(string)
0x8b9: Stack[-1] = "Neutral"
0x8ba: Call2 0x27e

0x8bb: Pop(1)
0x8bc: Push((int) 543319)
0x8bd: @@ SetMessage(Stack[-1])
0x8be: Pop(1)
0x8bf: @@ ClearReplies()
0x8c0: Pop(0)
0x8c1: Push((int) 543320)
0x8c2: Push((int) -1)
0x8c3: Push((int) 45776)
0x8c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c5: Pop(3)
0x8c6: Return(); Pop(0)

0x8c7: Push((int) 45774)
0x8c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c9: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8ca: PushEmpty(string)
0x8cb: Stack[-1] = "Neutral"
0x8cc: Call2 0x27e

0x8cd: Pop(1)
0x8ce: Push((int) 543318)
0x8cf: @@ SetMessage(Stack[-1])
0x8d0: Pop(1)
0x8d1: @@ ClearReplies()
0x8d2: Pop(0)
0x8d3: Push((int) 543321)
0x8d4: Push((int) -1)
0x8d5: Push((int) 45777)
0x8d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d7: Pop(3)
0x8d8: Return(); Pop(0)

0x8d9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8da: PushEmpty(bool)
0x8db: Call2 0x15b9

0x8dc: Pop(0)
0x8dd: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8de: @ lshStopAnimation()
0x8df: Pop(0)
0x8e0: GOTO 0x8e3

0x8e1: @ StopAnimation()
0x8e2: Pop(0)
0x8e3: Return(); Pop(0)

0x8e4: GOTO 0x295

0x8e5: Return(); Pop(0)

0x8e6: PushEmpty()
0x8e7: EventDisable(0)
0x8e8: PushEmpty(object)
0x8e9: Stack[-1] = Stack[-2]
0x8ea: Call2 0x907

0x8eb: Pop(1)
0x8ec: PushEmpty(object)
0x8ed: Stack[-1] = Stack[-2]
0x8ee: Call2 0x15e2

0x8ef: Pop(1)
0x8f0: EventEnable(0)
0x8f1: @ Hold()
0x8f2: Pop(0)
0x8f3: GOTO 0x8f1

0x8f4: Return(); Pop(0)

0x8f5: PushEmpty(int, int)
0x8f6: PushEmpty(int, object)
0x8f7: Stack[-1] = Stack[-5]
0x8f8: Call2 0x1571

0x8f9: Stack[-3] = Stack[-2]
0x8fa: Pop(2)
0x8fb: Push((int) 0)
0x8fc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x902; Pop(1)

0x8fe: PushEmpty(object)
0x8ff: Stack[-1] = Stack[-4]
0x900: Call2 0x1574

0x901: Pop(1)
0x902: Return(); Pop(2)

0x903: PushEmpty()
0x904: Call2 0x157a

0x905: Pop(0)
0x906: Return(); Pop(0)

0x907: PushEmpty(cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector, cvector, cvector, cvector, cvector, string, object, bool, bool, float, cvector)
0x908: Pop(0); Push((bool) Stack[-21] == 0)
0x909: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x90a: PushEmpty(string)
0x90b: Stack[-1] = "fdie"
0x90c: Call2 0x962

0x90d: Pop(1)
0x90e: GOTO 0x961

0x90f: @@ GetPosition(Stack[-10])
0x910: Pop(0)
0x911: @ GetPosition(Stack[-9])
0x912: Pop(0)
0x913: @ GetDirection(Stack[-8])
0x914: Pop(0)
0x915: Stack[-7] = Stack[-9] - Stack[-10]; Pop(0);
0x916: Push(CvectorIndex(Stack[-7], 0))
0x917: Push(CvectorIndex(Stack[-9], 0))
0x918: Pop(2); Push(Stack[-2] * Stack[-1]);
0x919: Push(CvectorIndex(Stack[-8], 2))
0x91a: Push(CvectorIndex(Stack[-10], 2))
0x91b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x91c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x91d: Push((int) 0)
0x91e: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x91f: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x920: Stack[-6] = "fdie"
0x921: GOTO 0x923

0x922: Stack[-6] = "bdie"
0x923: @ RemoveRTEnvelope()
0x924: Pop(0)
0x925: @ SetDeathState()
0x926: Pop(0)
0x927: @ Stop()
0x928: Pop(0)
0x929: @ StopAsync()
0x92a: Pop(0)
0x92b: Stack[-5] = Stack[-21]
0x92c: Push("GetScriptProperty")
0x92d: Push((int) 2)
0x92e: Pop(2); Push(IsFuncExist(Stack[-23], Stack[-2], Stack[-1]))
0x92f: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x930: Push("Owner")
0x931: @@ HasScriptProperty(Stack[-5], Stack[-1])
0x932: Pop(1)
0x933: Push(Stack[-4])
0x934: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x935: Push("Owner")
0x936: @@ GetScriptProperty(Stack[-6], Stack[-1])
0x937: Pop(1)
0x938: Pop(0); Push((bool) Stack[-5] == 0)
0x939: IF (Stack[-1] == 0) GOTO 0x93b; Pop(1)

0x93a: Stack[-5] = Stack[-21]
0x93b: Push("@GetEyesHeight")
0x93c: Push((int) 1)
0x93d: Pop(2); Push(IsFuncExist(Stack[-7], Stack[-2], Stack[-1]))
0x93e: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93f: @@ GetEyesHeight(Stack[-2])
0x940: Pop(0)
0x941: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x942: Push(CvectorIndex(Stack[-1], 1))
0x943: Stack[-1] = Stack[-3]
0x944: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x945: Push("head")
0x946: @ LookAsync(Stack[-22], Stack[-1], Stack[-2])
0x947: Pop(1)
0x948: Stack[-3] = (bool) 1
0x949: GOTO 0x94b

0x94a: Stack[-3] = (bool) 0
0x94b: PushEmpty(string)
0x94c: Stack[-1] = Stack[-7]
0x94d: Call2 0x1199

0x94e: Pop(1)
0x94f: Push("all")
0x950: @ PlayAnimation(Stack[-1], Stack[-7])
0x951: Pop(1)
0x952: @ WaitForAnimEnd()
0x953: Pop(0)
0x954: Push(Stack[-3])
0x955: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x956: @ StopAsync()
0x957: Pop(0)
0x958: Push("head")
0x959: @ UnlookAsync(Stack[-1])
0x95a: Pop(1)
0x95b: Push("all")
0x95c: @ LockAnimationEnd(Stack[-1], Stack[-7])
0x95d: Pop(1)
0x95e: @ RemoveEnvelope()
0x95f: Pop(0)
0x960: Stack[-5] = 0
0x961: Return(); Pop(20)

0x962: PushEmpty()
0x963: @ RemoveRTEnvelope()
0x964: Pop(0)
0x965: @ SetDeathState()
0x966: Pop(0)
0x967: @ Stop()
0x968: Pop(0)
0x969: @ StopAsync()
0x96a: Pop(0)
0x96b: @ StopSecondaryAnimation()
0x96c: Pop(0)
0x96d: PushEmpty(string)
0x96e: Stack[-1] = Stack[-2]
0x96f: Call2 0x1199

0x970: Pop(1)
0x971: Push("all")
0x972: @ PlayAnimation(Stack[-1], Stack[-2])
0x973: Pop(1)
0x974: @ WaitForAnimEnd()
0x975: Pop(0)
0x976: Push("all")
0x977: @ LockAnimationEnd(Stack[-1], Stack[-2])
0x978: Pop(1)
0x979: @ RemoveEnvelope()
0x97a: Pop(0)
0x97b: Return(); Pop(0)

0x97c: PushEmpty()
0x97d: Return(); Pop(0)

0x97e: PushEmpty()
0x97f: Return(); Pop(0)

0x980: PushEmpty()
0x981: Return(); Pop(0)

0x982: Push((bool) 1)
0x983: @ SensePlayerOnly(Stack[-1])
0x984: Pop(1)
0x985: PushEmpty()
0x986: Call2 0x15bb

0x987: Pop(0)
0x988: PushEmpty()
0x989: Call2 0x991

0x98a: Pop(0)
0x98b: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x98c: PushEmpty()
0x98d: Call2 0xa96

0x98e: Pop(0)
0x98f: GOTO 0x98b

0x990: Return(); Pop(0)

0x991: PushEmpty(bool)
0x992: Call2 0x110c

0x993: Pop(0)
0x994: Pop(1); Push((bool) Stack[-1] == 0)
0x995: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x996: PushEmpty()
0x997: Call2 0x157a

0x998: Pop(0)
0x999: Return(); Pop(0)

0x99a: PushEmpty(int, int)
0x99b: PushEmpty(int, object)
0x99c: Stack[-1] = Stack[-5]
0x99d: Call2 0x1571

0x99e: Stack[-3] = Stack[-2]
0x99f: Pop(2)
0x9a0: Push((int) 0)
0x9a1: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9a2: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a3: Push((int) 1)
0x9a4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9a9; Pop(1)

0x9a6: PushEmpty()
0x9a7: Call2 0xa55

0x9a8: Pop(0)
0x9a9: PushEmpty(object)
0x9aa: Stack[-1] = Stack[-4]
0x9ab: Call2 0x1574

0x9ac: Pop(1)
0x9ad: Return(); Pop(2)

0x9ae: PushEmpty(int, int)
0x9af: PushEmpty(object)
0x9b0: Stack[-1] = Stack[-4]
0x9b1: Call2 0x14ae

0x9b2: Pop(1)
0x9b3: PushEmpty(int, object)
0x9b4: Stack[-1] = Stack[-5]
0x9b5: Call2 0x1501

0x9b6: Stack[-3] = Stack[-2]
0x9b7: Pop(2)
0x9b8: Push((int) 0)
0x9b9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ba: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9bb: Push((int) 1)
0x9bc: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c1; Pop(1)

0x9be: PushEmpty()
0x9bf: Call2 0xa55

0x9c0: Pop(0)
0x9c1: PushEmpty(object)
0x9c2: Stack[-1] = Stack[-4]
0x9c3: Call2 0x150b

0x9c4: Pop(1)
0x9c5: Return(); Pop(2)

0x9c6: PushEmpty(int, int)
0x9c7: PushEmpty(bool, object, object, bool)
0x9c8: Stack[-3] = Stack[-9]
0x9c9: Stack[-2] = Stack[-8]
0x9ca: Stack[-1] = Stack[-7]
0x9cb: Call2 0x15d9

0x9cc: Pop(3)
0x9cd: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9ce: PushEmpty(int, object, bool)
0x9cf: Stack[-2] = Stack[-8]
0x9d0: Stack[-1] = Stack[-6]
0x9d1: Call2 0x1513

0x9d2: Stack[-4] = Stack[-3]
0x9d3: Pop(3)
0x9d4: Push((int) 0)
0x9d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9d6: IF (Stack[-1] == 0) GOTO 0x9e1; Pop(1)

0x9d7: Push((int) 1)
0x9d8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9dd; Pop(1)

0x9da: PushEmpty()
0x9db: Call2 0xa55

0x9dc: Pop(0)
0x9dd: PushEmpty(object)
0x9de: Stack[-1] = Stack[-6]
0x9df: Call2 0x151d

0x9e0: Pop(1)
0x9e1: Return(); Pop(2)

0x9e2: PushEmpty(int, int)
0x9e3: PushEmpty(int, object)
0x9e4: Stack[-1] = Stack[-5]
0x9e5: Call2 0x1567

0x9e6: Stack[-3] = Stack[-2]
0x9e7: Pop(2)
0x9e8: Push((int) 0)
0x9e9: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ea: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9eb: Push((int) 1)
0x9ec: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x9ed: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ee: PushEmpty()
0x9ef: Call2 0xa55

0x9f0: Pop(0)
0x9f1: PushEmpty(object)
0x9f2: Stack[-1] = Stack[-4]
0x9f3: Call2 0x156a

0x9f4: Pop(1)
0x9f5: Return(); Pop(2)

0x9f6: PushEmpty(int, int)
0x9f7: PushEmpty(bool, object, string)
0x9f8: Stack[-2] = Stack[-7]
0x9f9: Stack[-1] = Stack[-6]
0x9fa: Call2 0x1458

0x9fb: Pop(2)
0x9fc: IF (Stack[-1] == 0) GOTO 0xa06; Pop(1)

0x9fd: PushEmpty()
0x9fe: Call2 0xa55

0x9ff: Pop(0)
0xa00: PushEmpty(object, string)
0xa01: Stack[-2] = Stack[-6]
0xa02: Stack[-1] = Stack[-5]
0xa03: Call2 0x1478

0xa04: Pop(2)
0xa05: GOTO 0xa1a

0xa06: PushEmpty(int, string, object)
0xa07: Stack[-2] = Stack[-6]
0xa08: Stack[-1] = Stack[-7]
0xa09: Call2 0x156c

0xa0a: Stack[-4] = Stack[-3]
0xa0b: Pop(3)
0xa0c: Push((int) 0)
0xa0d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa0e: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa0f: Push((int) 1)
0xa10: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa11: IF (Stack[-1] == 0) GOTO 0xa15; Pop(1)

0xa12: PushEmpty()
0xa13: Call2 0xa55

0xa14: Pop(0)
0xa15: PushEmpty(string, object)
0xa16: Stack[-2] = Stack[-5]
0xa17: Stack[-1] = Stack[-6]
0xa18: Call2 0x156f

0xa19: Pop(2)
0xa1a: Return(); Pop(2)

0xa1b: PushEmpty()
0xa1c: PushEmpty(bool, string)
0xa1d: Stack[-1] = Stack[-3]
0xa1e: Call2 0x14bb

0xa1f: Pop(1)
0xa20: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa21: PushEmpty()
0xa22: Call2 0xa55

0xa23: Pop(0)
0xa24: PushEmpty(string)
0xa25: Stack[-1] = Stack[-2]
0xa26: Call2 0x14cb

0xa27: Pop(1)
0xa28: Return(); Pop(0)

0xa29: PushEmpty()
0xa2a: PushEmpty(bool, object)
0xa2b: Stack[-1] = Stack[-3]
0xa2c: Call2 0x1491

0xa2d: Pop(1)
0xa2e: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa2f: PushEmpty()
0xa30: Call2 0xa55

0xa31: Pop(0)
0xa32: PushEmpty(object)
0xa33: Stack[-1] = Stack[-2]
0xa34: Call2 0x14a8

0xa35: Pop(1)
0xa36: GOTO 0xa3b

0xa37: PushEmpty(object)
0xa38: Stack[-1] = Stack[-2]
0xa39: Call2 0xa6e

0xa3a: Pop(1)
0xa3b: Return(); Pop(0)

0xa3c: PushEmpty()
0xa3d: PushEmpty(object)
0xa3e: Stack[-1] = Stack[-2]
0xa3f: Call2 0xa6e

0xa40: Pop(1)
0xa41: Return(); Pop(0)

0xa42: PushEmpty()
0xa43: Push((int) 110)
0xa44: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xa45: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa46: Return(); Pop(0)

0xa47: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa48: Push((int) 110)
0xa49: @ KillTimer(Stack[-1])
0xa4a: Pop(1)
0xa4b: @ ResetAAS()
0xa4c: Pop(0)
0xa4d: Return(); Pop(0)

0xa4e: PushEmpty()
0xa4f: Call2 0xa55

0xa50: Pop(0)
0xa51: PushEmpty()
0xa52: Call2 0x157a

0xa53: Pop(0)
0xa54: Return(); Pop(0)

0xa55: Push((int) 110)
0xa56: @ KillTimer(Stack[-1])
0xa57: Pop(1)
0xa58: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa59: PushEmpty()
0xa5a: Call2 0xadd

0xa5b: Pop(0)
0xa5c: Return(); Pop(0)

0xa5d: Push((int) 110)
0xa5e: @ KillTimer(Stack[-1])
0xa5f: Pop(1)
0xa60: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xa61: PushEmpty()
0xa62: Call2 0xae4

0xa63: Pop(0)
0xa64: Return(); Pop(0)

0xa65: PushEmpty()
0xa66: PushEmpty()
0xa67: Call2 0xa55

0xa68: Pop(0)
0xa69: PushEmpty(object)
0xa6a: Stack[-1] = Stack[-2]
0xa6b: Call2 0x1440

0xa6c: Pop(1)
0xa6d: Return(); Pop(0)

0xa6e: PushEmpty(bool, int, bool, int)
0xa6f: PushEmpty(bool, object)
0xa70: Stack[-1] = Stack[-7]
0xa71: Call2 0x106b

0xa72: Pop(1)
0xa73: Pop(1); Push((bool) Stack[-1] == 0)
0xa74: IF (Stack[-1] == 0) GOTO 0xa76; Pop(1)

0xa75: Return(); Pop(4)

0xa76: Push( Stack[2 + Tasks[-1].StackPointer] )
0xa77: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa78: Return(); Pop(4)

0xa79: @ IsPlayerActor(Stack[-5], Stack[-2])
0xa7a: Pop(0)
0xa7b: Pop(0); Push((bool) Stack[-2] == 0)
0xa7c: IF (Stack[-1] == 0) GOTO 0xa7e; Pop(1)

0xa7d: Return(); Pop(4)

0xa7e: PushEmpty(int, object)
0xa7f: Stack[-1] = Stack[-7]
0xa80: Call2 0x14f0

0xa81: Stack[-3] = Stack[-2]
0xa82: Pop(2)
0xa83: Push((int) 0)
0xa84: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa85: IF (Stack[-1] == 0) GOTO 0xa95; Pop(1)

0xa86: Push((int) 1)
0xa87: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xa88: IF (Stack[-1] == 0) GOTO 0xa8c; Pop(1)

0xa89: PushEmpty()
0xa8a: Call2 0xa5d

0xa8b: Pop(0)
0xa8c: PushEmpty(object)
0xa8d: Stack[-1] = Stack[-6]
0xa8e: Call2 0x14f9

0xa8f: Pop(1)
0xa90: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xa91: Push((int) 110)
0xa92: Push((float)10.0)
0xa93: @ SetTimer(Stack[-2], Stack[-1])
0xa94: Pop(2)
0xa95: Return(); Pop(4)

0xa96: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0xa97: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0xa98: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xa99: Push((float)0.5)
0xa9a: @ rand(Stack[-7], Stack[-1])
0xa9b: Pop(1)
0xa9c: @ Sleep(Stack[-6])
0xa9d: Pop(0)
0xa9e: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xa9f: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xaa0: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0xaa1: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xaa2: @ GetPosition(Stack[-4])
0xaa3: Pop(0)
0xaa4: PushEmpty(float)
0xaa5: Call2 0xad1

0xaa6: Pop(0)
0xaa7: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0xaa8: Pop(1)
0xaa9: Push(Stack[-3])
0xaaa: IF (Stack[-1] == 0) GOTO 0xaac; Pop(1)

0xaab: GOTO 0xab0

0xaac: Push((int) 1)
0xaad: @ Sleep(Stack[-1])
0xaae: Pop(1)
0xaaf: GOTO 0xaa2

0xab0: GOTO 0xab2

0xab1: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xab2: PushEmpty(object, cvector)
0xab3: Stack[-1] = Stack[-7]
0xab4: Call2 0xaed

0xab5: Stack[-4] = Stack[-2]
0xab6: Pop(2)
0xab7: Pop(0); Push(( Stack[-2] != 0 )
0xab8: IF (Stack[-1] == 0) GOTO 0xacb; Pop(1)

0xab9: @ RotatePath(Stack[-2], Stack[-1])
0xaba: Pop(0)
0xabb: Push(Stack[-1])
0xabc: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xabd: PushEmpty(bool)
0xabe: Call2 0xaeb

0xabf: Pop(0)
0xac0: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0xac1: Pop(1)
0xac2: Stack[-2] = 0
0xac3: Push(Stack[-1])
0xac4: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac5: PushEmpty()
0xac6: Push(-0, 0); TaskCall(4)
0xac7: Call2 0xb97

0xac8: Pop(-0, 0); TaskReturn
0xac9: Pop(0)
0xaca: GOTO 0xace

0xacb: Push((int) 1)
0xacc: @ Sleep(Stack[-1])
0xacd: Pop(1)
0xace: Stack[-2] = 0
0xacf: GOTO 0xa9e

0xad0: Return(); Pop(12)

0xad1: PushEmpty(float, float)
0xad2: @ GetCameraFarDistance(Stack[-1])
0xad3: Pop(0)
0xad4: Stack[-3] = Stack[-1]
0xad5: Return(); Pop(2)

0xad6: PushEmpty()
0xad7: @ RequestClearPath(Stack[-1])
0xad8: Pop(0)
0xad9: Return(); Pop(0)

0xada: @ Stop()
0xadb: Pop(0)
0xadc: Return(); Pop(0)

0xadd: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xade: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0xadf: @ Stop()
0xae0: Pop(0)
0xae1: @ StopGroup0()
0xae2: Pop(0)
0xae3: Return(); Pop(0)

0xae4: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0xae5: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0xae6: @ Stop()
0xae7: Pop(0)
0xae8: @ StopGroup0()
0xae9: Pop(0)
0xaea: Return(); Pop(0)

0xaeb: Stack[-1] = (bool) 0
0xaec: Return(); Pop(0)

0xaed: PushEmpty(object, object)
0xaee: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0xaef: Pop(0)
0xaf0: Stack[-4] = Stack[-1]
0xaf1: Return(); Pop(2)

0xaf2: Stack[-1] = 0
0xaf3: PushEmpty(int, int)
0xaf4: PushEmpty(int, object)
0xaf5: Stack[-1] = Stack[-5]
0xaf6: Call2 0x1571

0xaf7: Stack[-3] = Stack[-2]
0xaf8: Pop(2)
0xaf9: Push((int) 0)
0xafa: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xafb: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xafc: Push((int) 1)
0xafd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xafe: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xaff: PushEmpty()
0xb00: Call2 0xbe8

0xb01: Pop(0)
0xb02: PushEmpty(object)
0xb03: Stack[-1] = Stack[-4]
0xb04: Call2 0x1574

0xb05: Pop(1)
0xb06: Return(); Pop(2)

0xb07: PushEmpty(int, int)
0xb08: PushEmpty(object)
0xb09: Stack[-1] = Stack[-4]
0xb0a: Call2 0x14ae

0xb0b: Pop(1)
0xb0c: PushEmpty(int, object)
0xb0d: Stack[-1] = Stack[-5]
0xb0e: Call2 0x1501

0xb0f: Stack[-3] = Stack[-2]
0xb10: Pop(2)
0xb11: Push((int) 0)
0xb12: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb1e; Pop(1)

0xb14: Push((int) 1)
0xb15: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb16: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb17: PushEmpty()
0xb18: Call2 0xbe8

0xb19: Pop(0)
0xb1a: PushEmpty(object)
0xb1b: Stack[-1] = Stack[-4]
0xb1c: Call2 0x150b

0xb1d: Pop(1)
0xb1e: Return(); Pop(2)

0xb1f: PushEmpty(int, int)
0xb20: PushEmpty(bool, object, object, bool)
0xb21: Stack[-3] = Stack[-9]
0xb22: Stack[-2] = Stack[-8]
0xb23: Stack[-1] = Stack[-7]
0xb24: Call2 0x15d9

0xb25: Pop(3)
0xb26: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb27: PushEmpty(int, object, bool)
0xb28: Stack[-2] = Stack[-8]
0xb29: Stack[-1] = Stack[-6]
0xb2a: Call2 0x1513

0xb2b: Stack[-4] = Stack[-3]
0xb2c: Pop(3)
0xb2d: Push((int) 0)
0xb2e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb2f: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb30: Push((int) 1)
0xb31: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb32: IF (Stack[-1] == 0) GOTO 0xb36; Pop(1)

0xb33: PushEmpty()
0xb34: Call2 0xbe8

0xb35: Pop(0)
0xb36: PushEmpty(object)
0xb37: Stack[-1] = Stack[-6]
0xb38: Call2 0x151d

0xb39: Pop(1)
0xb3a: Return(); Pop(2)

0xb3b: PushEmpty(int, int)
0xb3c: PushEmpty(int, object)
0xb3d: Stack[-1] = Stack[-5]
0xb3e: Call2 0x1567

0xb3f: Stack[-3] = Stack[-2]
0xb40: Pop(2)
0xb41: Push((int) 0)
0xb42: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb43: IF (Stack[-1] == 0) GOTO 0xb4e; Pop(1)

0xb44: Push((int) 1)
0xb45: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb46: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb47: PushEmpty()
0xb48: Call2 0xbe8

0xb49: Pop(0)
0xb4a: PushEmpty(object)
0xb4b: Stack[-1] = Stack[-4]
0xb4c: Call2 0x156a

0xb4d: Pop(1)
0xb4e: Return(); Pop(2)

0xb4f: PushEmpty(int, int)
0xb50: PushEmpty(bool, object, string)
0xb51: Stack[-2] = Stack[-7]
0xb52: Stack[-1] = Stack[-6]
0xb53: Call2 0x1458

0xb54: Pop(2)
0xb55: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb56: PushEmpty()
0xb57: Call2 0xbe8

0xb58: Pop(0)
0xb59: PushEmpty(object, string)
0xb5a: Stack[-2] = Stack[-6]
0xb5b: Stack[-1] = Stack[-5]
0xb5c: Call2 0x1478

0xb5d: Pop(2)
0xb5e: GOTO 0xb73

0xb5f: PushEmpty(int, string, object)
0xb60: Stack[-2] = Stack[-6]
0xb61: Stack[-1] = Stack[-7]
0xb62: Call2 0x156c

0xb63: Stack[-4] = Stack[-3]
0xb64: Pop(3)
0xb65: Push((int) 0)
0xb66: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb67: IF (Stack[-1] == 0) GOTO 0xb73; Pop(1)

0xb68: Push((int) 1)
0xb69: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb6a: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb6b: PushEmpty()
0xb6c: Call2 0xbe8

0xb6d: Pop(0)
0xb6e: PushEmpty(string, object)
0xb6f: Stack[-2] = Stack[-5]
0xb70: Stack[-1] = Stack[-6]
0xb71: Call2 0x156f

0xb72: Pop(2)
0xb73: Return(); Pop(2)

0xb74: PushEmpty()
0xb75: PushEmpty(bool, string)
0xb76: Stack[-1] = Stack[-3]
0xb77: Call2 0x14bb

0xb78: Pop(1)
0xb79: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7a: PushEmpty()
0xb7b: Call2 0xbe8

0xb7c: Pop(0)
0xb7d: PushEmpty(string)
0xb7e: Stack[-1] = Stack[-2]
0xb7f: Call2 0x14cb

0xb80: Pop(1)
0xb81: Return(); Pop(0)

0xb82: PushEmpty()
0xb83: Call2 0xbe8

0xb84: Pop(0)
0xb85: PushEmpty()
0xb86: Call2 0x157a

0xb87: Pop(0)
0xb88: Return(); Pop(0)

0xb89: PushEmpty()
0xb8a: PushEmpty(bool, object)
0xb8b: Stack[-1] = Stack[-3]
0xb8c: Call2 0x1491

0xb8d: Pop(1)
0xb8e: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb8f: PushEmpty()
0xb90: Call2 0xbe8

0xb91: Pop(0)
0xb92: PushEmpty(object)
0xb93: Stack[-1] = Stack[-2]
0xb94: Call2 0x14a8

0xb95: Pop(1)
0xb96: Return(); Pop(0)

0xb97: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0xb98: @ WaitForAnimEnd()
0xb99: Pop(0)
0xb9a: PushEmpty(bool)
0xb9b: Call2 0x110c

0xb9c: Pop(0)
0xb9d: Pop(1); Push((bool) Stack[-1] == 0)
0xb9e: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9f: Return(); Pop(14)

0xba0: PushEmpty(int)
0xba1: Call2 0x14df

0xba2: Stack[-8] = Stack[-1]
0xba3: Pop(1)
0xba4: Stack[-6] = (int) 0
0xba5: PushEmpty(bool)
0xba6: Stack[-1] = (bool) 0
0xba7: Push((int) 5)
0xba8: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0xba9: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbaa: PushEmpty(bool)
0xbab: Call2 0x110c

0xbac: Pop(0)
0xbad: IF (Stack[-1] == 0) GOTO 0xbaf; Pop(1)

0xbae: Stack[-1] = (bool) 1
0xbaf: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbb0: Push((int) 3)
0xbb1: @ irand(Stack[-6], Stack[-1])
0xbb2: Pop(1)
0xbb3: Push((int) 0)
0xbb4: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbb5: IF (Stack[-1] == 0) GOTO 0xbc7; Pop(1)

0xbb6: Push(Stack[-7])
0xbb7: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbb8: @ irand(Stack[-4], Stack[-7])
0xbb9: Pop(0)
0xbba: Push("all")
0xbbb: PushEmpty(string, int)
0xbbc: Stack[-1] = Stack[-7]
0xbbd: Call2 0x14d8

0xbbe: Pop(1)
0xbbf: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc0: Pop(2)
0xbc1: @ WaitForAnimEnd(Stack[-3])
0xbc2: Pop(0)
0xbc3: Pop(0); Push((bool) Stack[-3] == 0)
0xbc4: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc5: GOTO 0xbe3

0xbc6: GOTO 0xbd8

0xbc7: Push((int) 1)
0xbc8: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0xbc9: IF (Stack[-1] == 0) GOTO 0xbd5; Pop(1)

0xbca: Push((int) 4)
0xbcb: @ rand(Stack[-3], Stack[-1])
0xbcc: Pop(1)
0xbcd: Push((int) 1)
0xbce: Pop(1); Push(Stack[-3] + Stack[-1]);
0xbcf: @ Sleep(Stack[-1], Stack[-2])
0xbd0: Pop(1)
0xbd1: Pop(0); Push((bool) Stack[-1] == 0)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd4; Pop(1)

0xbd3: GOTO 0xbe3

0xbd4: GOTO 0xbd8

0xbd5: Push(Stack[-6])
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd7: GOTO 0xbe3

0xbd8: PushEmpty(bool)
0xbd9: Call2 0xbe6

0xbda: Pop(0)
0xbdb: Pop(1); Push((bool) Stack[-1] == 0)
0xbdc: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbdd: GOTO 0xbe3

0xbde: @ ResetAAS()
0xbdf: Pop(0)
0xbe0: Push((int) 1)
0xbe1: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0xbe2: GOTO 0xba5

0xbe3: @ ResetAAS()
0xbe4: Pop(0)
0xbe5: Return(); Pop(14)

0xbe6: Stack[-1] = (bool) 1
0xbe7: Return(); Pop(0)

0xbe8: @ StopAnimation()
0xbe9: Pop(0)
0xbea: @ StopGroup0()
0xbeb: Pop(0)
0xbec: Return(); Pop(0)

0xbed: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xbee: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0xbef: PushEmpty()
0xbf0: Call2 0xc20

0xbf1: Pop(0)
0xbf2: @ GetDirection(Stack[-3])
0xbf3: Pop(0)
0xbf4: PushEmpty(cvector, object)
0xbf5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbf6: Call2 0x1022

0xbf7: Stack[-4] = Stack[-2]
0xbf8: Pop(2)
0xbf9: PushEmpty(float, cvector, cvector)
0xbfa: Stack[-2] = Stack[-6]
0xbfb: Stack[-1] = Stack[-5]
0xbfc: Call2 0x11ed

0xbfd: Pop(2)
0xbfe: Push((int) 0)
0xbff: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xc00: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc01: PushEmpty(object)
0xc02: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc03: Call2 0x1101

0xc04: Pop(1)
0xc05: Stack[-1] = (bool) 1
0xc06: GOTO 0xc0a

0xc07: Push((float)1.5)
0xc08: @ Sleep(Stack[-1], Stack[-2])
0xc09: Pop(1)
0xc0a: Push(Stack[-1])
0xc0b: IF (Stack[-1] == 0) GOTO 0xc1a; Pop(1)

0xc0c: PushEmpty(object)
0xc0d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc0e: Call2 0x1101

0xc0f: Pop(1)
0xc10: Push((int) 111)
0xc11: Push((float)0.5)
0xc12: @ SetTimer(Stack[-2], Stack[-1])
0xc13: Pop(2)
0xc14: Push((float)5.0)
0xc15: @ Sleep(Stack[-1])
0xc16: Pop(1)
0xc17: Push((int) 111)
0xc18: @ KillTimer(Stack[-1])
0xc19: Pop(1)
0xc1a: @ StopAsync()
0xc1b: Pop(0)
0xc1c: Push("head")
0xc1d: @ UnlookAsync(Stack[-1])
0xc1e: Pop(1)
0xc1f: Return(); Pop(6)

0xc20: PushEmpty(object)
0xc21: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc22: Call2 0x1187

0xc23: Pop(1)
0xc24: Return(); Pop(0)

0xc25: PushEmpty(int, int)
0xc26: PushEmpty(int, object)
0xc27: Stack[-1] = Stack[-5]
0xc28: Call2 0x1571

0xc29: Stack[-3] = Stack[-2]
0xc2a: Pop(2)
0xc2b: Push((int) 0)
0xc2c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc2e: Push((int) 1)
0xc2f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc30: IF (Stack[-1] == 0) GOTO 0xc34; Pop(1)

0xc31: PushEmpty()
0xc32: Call2 0xcb4

0xc33: Pop(0)
0xc34: PushEmpty(object)
0xc35: Stack[-1] = Stack[-4]
0xc36: Call2 0x1574

0xc37: Pop(1)
0xc38: Return(); Pop(2)

0xc39: PushEmpty(int, int)
0xc3a: PushEmpty(object)
0xc3b: Stack[-1] = Stack[-4]
0xc3c: Call2 0x14ae

0xc3d: Pop(1)
0xc3e: PushEmpty(int, object)
0xc3f: Stack[-1] = Stack[-5]
0xc40: Call2 0x1501

0xc41: Stack[-3] = Stack[-2]
0xc42: Pop(2)
0xc43: Push((int) 0)
0xc44: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc45: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc46: Push((int) 1)
0xc47: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc48: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc49: PushEmpty()
0xc4a: Call2 0xcb4

0xc4b: Pop(0)
0xc4c: PushEmpty(object)
0xc4d: Stack[-1] = Stack[-4]
0xc4e: Call2 0x150b

0xc4f: Pop(1)
0xc50: Return(); Pop(2)

0xc51: PushEmpty(int, int)
0xc52: PushEmpty(bool, object, object, bool)
0xc53: Stack[-3] = Stack[-9]
0xc54: Stack[-2] = Stack[-8]
0xc55: Stack[-1] = Stack[-7]
0xc56: Call2 0x15d9

0xc57: Pop(3)
0xc58: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc59: PushEmpty(int, object, bool)
0xc5a: Stack[-2] = Stack[-8]
0xc5b: Stack[-1] = Stack[-6]
0xc5c: Call2 0x1513

0xc5d: Stack[-4] = Stack[-3]
0xc5e: Pop(3)
0xc5f: Push((int) 0)
0xc60: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc61: IF (Stack[-1] == 0) GOTO 0xc6c; Pop(1)

0xc62: Push((int) 1)
0xc63: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc64: IF (Stack[-1] == 0) GOTO 0xc68; Pop(1)

0xc65: PushEmpty()
0xc66: Call2 0xcb4

0xc67: Pop(0)
0xc68: PushEmpty(object)
0xc69: Stack[-1] = Stack[-6]
0xc6a: Call2 0x151d

0xc6b: Pop(1)
0xc6c: Return(); Pop(2)

0xc6d: PushEmpty(int, int)
0xc6e: PushEmpty(int, object)
0xc6f: Stack[-1] = Stack[-5]
0xc70: Call2 0x1567

0xc71: Stack[-3] = Stack[-2]
0xc72: Pop(2)
0xc73: Push((int) 0)
0xc74: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc75: IF (Stack[-1] == 0) GOTO 0xc80; Pop(1)

0xc76: Push((int) 1)
0xc77: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc78: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc79: PushEmpty()
0xc7a: Call2 0xcb4

0xc7b: Pop(0)
0xc7c: PushEmpty(object)
0xc7d: Stack[-1] = Stack[-4]
0xc7e: Call2 0x156a

0xc7f: Pop(1)
0xc80: Return(); Pop(2)

0xc81: PushEmpty(int, int)
0xc82: PushEmpty(bool, object, string)
0xc83: Stack[-2] = Stack[-7]
0xc84: Stack[-1] = Stack[-6]
0xc85: Call2 0x1458

0xc86: Pop(2)
0xc87: IF (Stack[-1] == 0) GOTO 0xc91; Pop(1)

0xc88: PushEmpty()
0xc89: Call2 0xcb4

0xc8a: Pop(0)
0xc8b: PushEmpty(object, string)
0xc8c: Stack[-2] = Stack[-6]
0xc8d: Stack[-1] = Stack[-5]
0xc8e: Call2 0x1478

0xc8f: Pop(2)
0xc90: GOTO 0xca5

0xc91: PushEmpty(int, string, object)
0xc92: Stack[-2] = Stack[-6]
0xc93: Stack[-1] = Stack[-7]
0xc94: Call2 0x156c

0xc95: Stack[-4] = Stack[-3]
0xc96: Pop(3)
0xc97: Push((int) 0)
0xc98: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc99: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xc9a: Push((int) 1)
0xc9b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xc9c: IF (Stack[-1] == 0) GOTO 0xca0; Pop(1)

0xc9d: PushEmpty()
0xc9e: Call2 0xcb4

0xc9f: Pop(0)
0xca0: PushEmpty(string, object)
0xca1: Stack[-2] = Stack[-5]
0xca2: Stack[-1] = Stack[-6]
0xca3: Call2 0x156f

0xca4: Pop(2)
0xca5: Return(); Pop(2)

0xca6: PushEmpty()
0xca7: PushEmpty(bool, string)
0xca8: Stack[-1] = Stack[-3]
0xca9: Call2 0x14bb

0xcaa: Pop(1)
0xcab: IF (Stack[-1] == 0) GOTO 0xcb3; Pop(1)

0xcac: PushEmpty()
0xcad: Call2 0xcb4

0xcae: Pop(0)
0xcaf: PushEmpty(string)
0xcb0: Stack[-1] = Stack[-2]
0xcb1: Call2 0x14cb

0xcb2: Pop(1)
0xcb3: Return(); Pop(0)

0xcb4: @ StopGroup0()
0xcb5: Pop(0)
0xcb6: @ StopAsync()
0xcb7: Pop(0)
0xcb8: Push("head")
0xcb9: @ UnlookAsync(Stack[-1])
0xcba: Pop(1)
0xcbb: Push((int) 111)
0xcbc: @ KillTimer(Stack[-1])
0xcbd: Pop(1)
0xcbe: Return(); Pop(0)

0xcbf: PushEmpty()
0xcc0: PushEmpty()
0xcc1: Call2 0xcb4

0xcc2: Pop(0)
0xcc3: PushEmpty(object)
0xcc4: Stack[-1] = Stack[-2]
0xcc5: Call2 0x1440

0xcc6: Pop(1)
0xcc7: Return(); Pop(0)

0xcc8: PushEmpty(cvector, cvector, cvector, cvector)
0xcc9: Push((int) 111)
0xcca: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0xccb: IF (Stack[-1] == 0) GOTO 0xccd; Pop(1)

0xccc: Return(); Pop(4)

0xccd: PushEmpty(bool, object)
0xcce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xccf: Call2 0x106b

0xcd0: Pop(1)
0xcd1: Pop(1); Push((bool) Stack[-1] == 0)
0xcd2: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd3: PushEmpty()
0xcd4: Call2 0xcb4

0xcd5: Pop(0)
0xcd6: Return(); Pop(4)

0xcd7: @ GetDirection(Stack[-2])
0xcd8: Pop(0)
0xcd9: PushEmpty(cvector, object)
0xcda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcdb: Call2 0x1022

0xcdc: Stack[-3] = Stack[-2]
0xcdd: Pop(2)
0xcde: PushEmpty(float, cvector, cvector)
0xcdf: Stack[-2] = Stack[-5]
0xce0: Stack[-1] = Stack[-4]
0xce1: Call2 0x11ed

0xce2: Pop(2)
0xce3: Push((float)0.5)
0xce4: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0xce5: IF (Stack[-1] == 0) GOTO 0xcea; Pop(1)

0xce6: PushEmpty(object)
0xce7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xce8: Call2 0x1101

0xce9: Pop(1)
0xcea: Return(); Pop(4)

0xceb: PushEmpty()
0xcec: Call2 0xcb4

0xced: Pop(0)
0xcee: PushEmpty()
0xcef: Call2 0x157a

0xcf0: Pop(0)
0xcf1: Return(); Pop(0)

0xcf2: PushEmpty()
0xcf3: PushEmpty(bool, object)
0xcf4: Stack[-1] = Stack[-3]
0xcf5: Call2 0x1491

0xcf6: Pop(1)
0xcf7: IF (Stack[-1] == 0) GOTO 0xcff; Pop(1)

0xcf8: PushEmpty()
0xcf9: Call2 0xcb4

0xcfa: Pop(0)
0xcfb: PushEmpty(object)
0xcfc: Stack[-1] = Stack[-2]
0xcfd: Call2 0x14a8

0xcfe: Pop(1)
0xcff: Return(); Pop(0)

0xd00: PushEmpty()
0xd01: @ Face(Stack[-1])
0xd02: Pop(0)
0xd03: Push("all")
0xd04: Push("attack_on")
0xd05: @ PlayAnimation(Stack[-2], Stack[-1])
0xd06: Pop(2)
0xd07: @ WaitForAnimEnd()
0xd08: Pop(0)
0xd09: Push("all")
0xd0a: Push("attack_stay")
0xd0b: @ PlayAnimation(Stack[-2], Stack[-1])
0xd0c: Pop(2)
0xd0d: @ WaitForAnimEnd()
0xd0e: Pop(0)
0xd0f: Push("all")
0xd10: Push("attack_off")
0xd11: @ PlayAnimation(Stack[-2], Stack[-1])
0xd12: Pop(2)
0xd13: @ WaitForAnimEnd()
0xd14: Pop(0)
0xd15: @ StopAsync()
0xd16: Pop(0)
0xd17: PushEmpty(object)
0xd18: Stack[-1] = Stack[-2]
0xd19: Call2 0xd41

0xd1a: Pop(1)
0xd1b: Return(); Pop(0)

0xd1c: PushEmpty()
0xd1d: Call2 0xdbe

0xd1e: Pop(0)
0xd1f: PushEmpty()
0xd20: Call2 0x157a

0xd21: Pop(0)
0xd22: Return(); Pop(0)

0xd23: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xd24: @ GetPosition(Stack[-6])
0xd25: Pop(0)
0xd26: @@ GetPosition(Stack[-5])
0xd27: Pop(0)
0xd28: @ GetDirection(Stack[-4])
0xd29: Pop(0)
0xd2a: PushEmpty(cvector, cvector)
0xd2b: PushEmpty(cvector, cvector)
0xd2c: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xd2d: Call2 0x11c8

0xd2e: Pop(1)
0xd2f: Push((float)0.75)
0xd30: Pop(1); Push(Stack[-8] * Stack[-1]);
0xd31: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xd32: Call2 0x11c8

0xd33: Stack[-5] = Stack[-2]
0xd34: Pop(2)
0xd35: Push((int) 32)
0xd36: Push((float)7000.0)
0xd37: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xd38: Pop(2)
0xd39: Push((int) 100)
0xd3a: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xd3b: Push((int) 0)
0xd3c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd3d: IF (Stack[-1] == 0) GOTO 0xd3f; Pop(1)

0xd3e: Stack[-1] = (int) 0
0xd3f: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xd40: Return(); Pop(12)

0xd41: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xd42: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xd43: PushEmpty(cvector, float)
0xd44: Stack[-1] = (float) 1.74533
0xd45: Call2 0xd23

0xd46: Stack[-7] = Stack[-2]
0xd47: Pop(2)
0xd48: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd49: Push((float)2500.0)
0xd4a: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd4b: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd4c: PushEmpty(cvector, float)
0xd4d: Stack[-1] = (float) 2.61799
0xd4e: Call2 0xd23

0xd4f: Stack[-7] = Stack[-2]
0xd50: Pop(2)
0xd51: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xd52: Push((float)2500.0)
0xd53: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xd54: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd55: Push("Can't retreat, distance: ")
0xd56: Pop(0); Push(Sqrt(Stack[-5]))
0xd57: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd58: @ Trace(Stack[-1])
0xd59: Pop(1)
0xd5a: Push((float)0.5)
0xd5b: @ Sleep(Stack[-1])
0xd5c: Pop(1)
0xd5d: Return(); Pop(10)

0xd5e: Push(CvectorIndex(Stack[-5], 0))
0xd5f: Push(CvectorIndex(Stack[-6], 2))
0xd60: @ Rotate(Stack[-2], Stack[-1])
0xd61: Pop(2)
0xd62: PushEmpty(cvector)
0xd63: Call2 0x101d

0xd64: Pop(0)
0xd65: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xd66: Push((int) 120)
0xd67: Push((float)0.5)
0xd68: @ SetTimer(Stack[-2], Stack[-1])
0xd69: Pop(2)
0xd6a: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xd6b: Push((int) 1)
0xd6c: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xd6d: Pop(1)
0xd6e: Push(Stack[-3])
0xd6f: IF (Stack[-1] == 0) GOTO 0xd87; Pop(1)

0xd70: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd71: IF (Stack[-1] == 0) GOTO 0xd74; Pop(1)

0xd72: GOTO 0xd89

0xd73: GOTO 0xd87

0xd74: PushEmpty(cvector, float)
0xd75: Stack[-1] = (float) 2.61799
0xd76: Call2 0xd23

0xd77: Stack[-4] = Stack[-2]
0xd78: Pop(2)
0xd79: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xd7a: Push((float)2500.0)
0xd7b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd7c: IF (Stack[-1] == 0) GOTO 0xd86; Pop(1)

0xd7d: PushEmpty(cvector)
0xd7e: Call2 0x101d

0xd7f: Pop(0)
0xd80: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xd81: Push((int) 120)
0xd82: Push((float)0.5)
0xd83: @ SetTimer(Stack[-2], Stack[-1])
0xd84: Pop(2)
0xd85: GOTO 0xd87

0xd86: GOTO 0xd89

0xd87: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xd88: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd89: Return(); Pop(10)

0xd8a: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xd8b: Push((int) 120)
0xd8c: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xd8d: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd8e: Return(); Pop(8)

0xd8f: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xd90: IF (Stack[-1] == 0) GOTO 0xd98; Pop(1)

0xd91: @ Stop()
0xd92: Pop(0)
0xd93: Push((int) 1)
0xd94: @ KillTimer(Stack[-1])
0xd95: Pop(1)
0xd96: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xd97: GOTO 0xdbd

0xd98: @ GetDirection(Stack[-4])
0xd99: Pop(0)
0xd9a: Push((float)7000.0)
0xd9b: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xd9c: Pop(1)
0xd9d: PushEmpty(cvector, float)
0xd9e: Stack[-1] = (float) 1.74533
0xd9f: Call2 0xd23

0xda0: Stack[-4] = Stack[-2]
0xda1: Pop(2)
0xda2: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xda3: PushEmpty(bool)
0xda4: Stack[-1] = (bool) 0
0xda5: Push((float)2500.0)
0xda6: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xda7: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xda8: PushEmpty(bool)
0xda9: Stack[-1] = (bool) 1
0xdaa: Pop(0); Push(Stack[-5] * Stack[-5]);
0xdab: Push((float)2.25)
0xdac: Pop(2); Push(Stack[-2] * Stack[-1]);
0xdad: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xdae: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdaf: PushEmpty(bool)
0xdb0: Call2 0xdce

0xdb1: Pop(0)
0xdb2: IF (Stack[-1] == 0) GOTO 0xdb4; Pop(1)

0xdb3: Stack[-1] = (bool) 0
0xdb4: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xdb5: Stack[-1] = (bool) 1
0xdb6: IF (Stack[-1] == 0) GOTO 0xdbd; Pop(1)

0xdb7: @ Stop()
0xdb8: Pop(0)
0xdb9: PushEmpty(cvector)
0xdba: Call2 0x101d

0xdbb: Pop(0)
0xdbc: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xdbd: Return(); Pop(8)

0xdbe: @ Stop()
0xdbf: Pop(0)
0xdc0: Push((int) 120)
0xdc1: @ KillTimer(Stack[-1])
0xdc2: Pop(1)
0xdc3: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xdc4: Return(); Pop(0)

0xdc5: PushEmpty()
0xdc6: PushEmpty()
0xdc7: Call2 0xdbe

0xdc8: Pop(0)
0xdc9: PushEmpty(object)
0xdca: Stack[-1] = Stack[-2]
0xdcb: Call2 0x1440

0xdcc: Pop(1)
0xdcd: Return(); Pop(0)

0xdce: PushEmpty(cvector, cvector, cvector, cvector)
0xdcf: @ GetDirection(Stack[-2])
0xdd0: Pop(0)
0xdd1: PushEmpty(cvector, object)
0xdd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd3: Call2 0x1022

0xdd4: Stack[-3] = Stack[-2]
0xdd5: Pop(2)
0xdd6: PushEmpty(float, cvector, cvector)
0xdd7: Stack[-2] = Stack[-5]
0xdd8: Stack[-1] = Stack[-4]
0xdd9: Call2 0x11d2

0xdda: Pop(2)
0xddb: Push((float)-0.34202)
0xddc: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xddd: Return(); Pop(4)

0xdde: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xddf: @ GetPosition(Stack[-6])
0xde0: Pop(0)
0xde1: @@ GetPosition(Stack[-5])
0xde2: Pop(0)
0xde3: @ GetDirection(Stack[-4])
0xde4: Pop(0)
0xde5: PushEmpty(cvector, cvector)
0xde6: PushEmpty(cvector, cvector)
0xde7: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xde8: Call2 0x11c8

0xde9: Pop(1)
0xdea: Push((float)0.75)
0xdeb: Pop(1); Push(Stack[-8] * Stack[-1]);
0xdec: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xded: Call2 0x11c8

0xdee: Stack[-5] = Stack[-2]
0xdef: Pop(2)
0xdf0: Push((int) 32)
0xdf1: Push((float)7000.0)
0xdf2: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xdf3: Pop(2)
0xdf4: Push((int) 100)
0xdf5: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xdf6: Push((int) 0)
0xdf7: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xdf9: Stack[-1] = (int) 0
0xdfa: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xdfb: Return(); Pop(12)

0xdfc: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xdfd: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xdfe: PushEmpty(cvector, float)
0xdff: Stack[-1] = (float) 1.74533
0xe00: Call2 0xdde

0xe01: Stack[-7] = Stack[-2]
0xe02: Pop(2)
0xe03: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe04: Push((float)2500.0)
0xe05: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe06: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe07: PushEmpty(cvector, float)
0xe08: Stack[-1] = (float) 2.61799
0xe09: Call2 0xdde

0xe0a: Stack[-7] = Stack[-2]
0xe0b: Pop(2)
0xe0c: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xe0d: Push((float)2500.0)
0xe0e: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xe0f: IF (Stack[-1] == 0) GOTO 0xe19; Pop(1)

0xe10: Push("Can't retreat, distance: ")
0xe11: Pop(0); Push(Sqrt(Stack[-5]))
0xe12: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe13: @ Trace(Stack[-1])
0xe14: Pop(1)
0xe15: Push((float)0.5)
0xe16: @ Sleep(Stack[-1])
0xe17: Pop(1)
0xe18: Return(); Pop(10)

0xe19: Push(CvectorIndex(Stack[-5], 0))
0xe1a: Push(CvectorIndex(Stack[-6], 2))
0xe1b: @ Rotate(Stack[-2], Stack[-1])
0xe1c: Pop(2)
0xe1d: PushEmpty(cvector)
0xe1e: Call2 0x101d

0xe1f: Pop(0)
0xe20: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xe21: Push((int) 120)
0xe22: Push((float)0.5)
0xe23: @ SetTimer(Stack[-2], Stack[-1])
0xe24: Pop(2)
0xe25: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xe26: Push((int) 1)
0xe27: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xe28: Pop(1)
0xe29: Push(Stack[-3])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe42; Pop(1)

0xe2b: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe2c: IF (Stack[-1] == 0) GOTO 0xe2f; Pop(1)

0xe2d: GOTO 0xe44

0xe2e: GOTO 0xe42

0xe2f: PushEmpty(cvector, float)
0xe30: Stack[-1] = (float) 2.61799
0xe31: Call2 0xdde

0xe32: Stack[-4] = Stack[-2]
0xe33: Pop(2)
0xe34: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xe35: Push((float)2500.0)
0xe36: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xe37: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe38: PushEmpty(cvector)
0xe39: Call2 0x101d

0xe3a: Pop(0)
0xe3b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xe3c: Push((int) 120)
0xe3d: Push((float)0.5)
0xe3e: @ SetTimer(Stack[-2], Stack[-1])
0xe3f: Pop(2)
0xe40: GOTO 0xe42

0xe41: GOTO 0xe44

0xe42: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xe43: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xe44: Return(); Pop(10)

0xe45: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xe46: Push((int) 120)
0xe47: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xe48: IF (Stack[-1] == 0) GOTO 0xe4a; Pop(1)

0xe49: Return(); Pop(8)

0xe4a: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xe4b: IF (Stack[-1] == 0) GOTO 0xe53; Pop(1)

0xe4c: @ Stop()
0xe4d: Pop(0)
0xe4e: Push((int) 1)
0xe4f: @ KillTimer(Stack[-1])
0xe50: Pop(1)
0xe51: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xe52: GOTO 0xe78

0xe53: @ GetDirection(Stack[-4])
0xe54: Pop(0)
0xe55: Push((float)7000.0)
0xe56: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xe57: Pop(1)
0xe58: PushEmpty(cvector, float)
0xe59: Stack[-1] = (float) 1.74533
0xe5a: Call2 0xdde

0xe5b: Stack[-4] = Stack[-2]
0xe5c: Pop(2)
0xe5d: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xe5e: PushEmpty(bool)
0xe5f: Stack[-1] = (bool) 0
0xe60: Push((float)2500.0)
0xe61: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xe62: IF (Stack[-1] == 0) GOTO 0xe71; Pop(1)

0xe63: PushEmpty(bool)
0xe64: Stack[-1] = (bool) 1
0xe65: Pop(0); Push(Stack[-5] * Stack[-5]);
0xe66: Push((float)2.25)
0xe67: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe68: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xe69: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe6a: PushEmpty(bool)
0xe6b: Call2 0xe89

0xe6c: Pop(0)
0xe6d: IF (Stack[-1] == 0) GOTO 0xe6f; Pop(1)

0xe6e: Stack[-1] = (bool) 0
0xe6f: IF (Stack[-1] == 0) GOTO 0xe71; Pop(1)

0xe70: Stack[-1] = (bool) 1
0xe71: IF (Stack[-1] == 0) GOTO 0xe78; Pop(1)

0xe72: @ Stop()
0xe73: Pop(0)
0xe74: PushEmpty(cvector)
0xe75: Call2 0x101d

0xe76: Pop(0)
0xe77: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xe78: Return(); Pop(8)

0xe79: @ Stop()
0xe7a: Pop(0)
0xe7b: Push((int) 120)
0xe7c: @ KillTimer(Stack[-1])
0xe7d: Pop(1)
0xe7e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xe7f: Return(); Pop(0)

0xe80: PushEmpty()
0xe81: PushEmpty()
0xe82: Call2 0xe79

0xe83: Pop(0)
0xe84: PushEmpty(object)
0xe85: Stack[-1] = Stack[-2]
0xe86: Call2 0x1440

0xe87: Pop(1)
0xe88: Return(); Pop(0)

0xe89: PushEmpty(cvector, cvector, cvector, cvector)
0xe8a: @ GetDirection(Stack[-2])
0xe8b: Pop(0)
0xe8c: PushEmpty(cvector, object)
0xe8d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe8e: Call2 0x1022

0xe8f: Stack[-3] = Stack[-2]
0xe90: Pop(2)
0xe91: PushEmpty(float, cvector, cvector)
0xe92: Stack[-2] = Stack[-5]
0xe93: Stack[-1] = Stack[-4]
0xe94: Call2 0x11d2

0xe95: Pop(2)
0xe96: Push((float)-0.34202)
0xe97: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xe98: Return(); Pop(4)

0xe99: PushEmpty()
0xe9a: Call2 0xf3b

0xe9b: Pop(0)
0xe9c: PushEmpty()
0xe9d: Call2 0x157a

0xe9e: Pop(0)
0xe9f: Return(); Pop(0)

0xea0: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xea1: @ GetPosition(Stack[-6])
0xea2: Pop(0)
0xea3: @@ GetPosition(Stack[-5])
0xea4: Pop(0)
0xea5: @ GetDirection(Stack[-4])
0xea6: Pop(0)
0xea7: PushEmpty(cvector, cvector)
0xea8: PushEmpty(cvector, cvector)
0xea9: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xeaa: Call2 0x11c8

0xeab: Pop(1)
0xeac: Push((float)0.75)
0xead: Pop(1); Push(Stack[-8] * Stack[-1]);
0xeae: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xeaf: Call2 0x11c8

0xeb0: Stack[-5] = Stack[-2]
0xeb1: Pop(2)
0xeb2: Push((int) 32)
0xeb3: Push((float)7000.0)
0xeb4: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xeb5: Pop(2)
0xeb6: Push((int) 100)
0xeb7: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xeb8: Push((int) 0)
0xeb9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xeba: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xebb: Stack[-1] = (int) 0
0xebc: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xebd: Return(); Pop(12)

0xebe: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xebf: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xec0: PushEmpty(cvector, float)
0xec1: Stack[-1] = (float) 1.74533
0xec2: Call2 0xea0

0xec3: Stack[-7] = Stack[-2]
0xec4: Pop(2)
0xec5: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xec6: Push((float)2500.0)
0xec7: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xec8: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xec9: PushEmpty(cvector, float)
0xeca: Stack[-1] = (float) 2.61799
0xecb: Call2 0xea0

0xecc: Stack[-7] = Stack[-2]
0xecd: Pop(2)
0xece: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xecf: Push((float)2500.0)
0xed0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xed1: IF (Stack[-1] == 0) GOTO 0xedb; Pop(1)

0xed2: Push("Can't retreat, distance: ")
0xed3: Pop(0); Push(Sqrt(Stack[-5]))
0xed4: Pop(2); Push(Stack[-2] + Stack[-1]);
0xed5: @ Trace(Stack[-1])
0xed6: Pop(1)
0xed7: Push((float)0.5)
0xed8: @ Sleep(Stack[-1])
0xed9: Pop(1)
0xeda: Return(); Pop(10)

0xedb: Push(CvectorIndex(Stack[-5], 0))
0xedc: Push(CvectorIndex(Stack[-6], 2))
0xedd: @ Rotate(Stack[-2], Stack[-1])
0xede: Pop(2)
0xedf: PushEmpty(cvector)
0xee0: Call2 0x101d

0xee1: Pop(0)
0xee2: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xee3: Push((int) 120)
0xee4: Push((float)0.5)
0xee5: @ SetTimer(Stack[-2], Stack[-1])
0xee6: Pop(2)
0xee7: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xee8: Push((int) 1)
0xee9: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xeea: Pop(1)
0xeeb: Push(Stack[-3])
0xeec: IF (Stack[-1] == 0) GOTO 0xf04; Pop(1)

0xeed: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xeee: IF (Stack[-1] == 0) GOTO 0xef1; Pop(1)

0xeef: GOTO 0xf06

0xef0: GOTO 0xf04

0xef1: PushEmpty(cvector, float)
0xef2: Stack[-1] = (float) 2.61799
0xef3: Call2 0xea0

0xef4: Stack[-4] = Stack[-2]
0xef5: Pop(2)
0xef6: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xef7: Push((float)2500.0)
0xef8: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xef9: IF (Stack[-1] == 0) GOTO 0xf03; Pop(1)

0xefa: PushEmpty(cvector)
0xefb: Call2 0x101d

0xefc: Pop(0)
0xefd: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xefe: Push((int) 120)
0xeff: Push((float)0.5)
0xf00: @ SetTimer(Stack[-2], Stack[-1])
0xf01: Pop(2)
0xf02: GOTO 0xf04

0xf03: GOTO 0xf06

0xf04: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xf05: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xf06: Return(); Pop(10)

0xf07: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xf08: Push((int) 120)
0xf09: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xf0a: IF (Stack[-1] == 0) GOTO 0xf0c; Pop(1)

0xf0b: Return(); Pop(8)

0xf0c: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xf0d: IF (Stack[-1] == 0) GOTO 0xf15; Pop(1)

0xf0e: @ Stop()
0xf0f: Pop(0)
0xf10: Push((int) 1)
0xf11: @ KillTimer(Stack[-1])
0xf12: Pop(1)
0xf13: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xf14: GOTO 0xf3a

0xf15: @ GetDirection(Stack[-4])
0xf16: Pop(0)
0xf17: Push((float)7000.0)
0xf18: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xf19: Pop(1)
0xf1a: PushEmpty(cvector, float)
0xf1b: Stack[-1] = (float) 1.74533
0xf1c: Call2 0xea0

0xf1d: Stack[-4] = Stack[-2]
0xf1e: Pop(2)
0xf1f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xf20: PushEmpty(bool)
0xf21: Stack[-1] = (bool) 0
0xf22: Push((float)2500.0)
0xf23: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xf24: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf25: PushEmpty(bool)
0xf26: Stack[-1] = (bool) 1
0xf27: Pop(0); Push(Stack[-5] * Stack[-5]);
0xf28: Push((float)2.25)
0xf29: Pop(2); Push(Stack[-2] * Stack[-1]);
0xf2a: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xf2b: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf2c: PushEmpty(bool)
0xf2d: Call2 0xf4b

0xf2e: Pop(0)
0xf2f: IF (Stack[-1] == 0) GOTO 0xf31; Pop(1)

0xf30: Stack[-1] = (bool) 0
0xf31: IF (Stack[-1] == 0) GOTO 0xf33; Pop(1)

0xf32: Stack[-1] = (bool) 1
0xf33: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xf34: @ Stop()
0xf35: Pop(0)
0xf36: PushEmpty(cvector)
0xf37: Call2 0x101d

0xf38: Pop(0)
0xf39: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xf3a: Return(); Pop(8)

0xf3b: @ Stop()
0xf3c: Pop(0)
0xf3d: Push((int) 120)
0xf3e: @ KillTimer(Stack[-1])
0xf3f: Pop(1)
0xf40: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xf41: Return(); Pop(0)

0xf42: PushEmpty()
0xf43: PushEmpty()
0xf44: Call2 0xf3b

0xf45: Pop(0)
0xf46: PushEmpty(object)
0xf47: Stack[-1] = Stack[-2]
0xf48: Call2 0x1440

0xf49: Pop(1)
0xf4a: Return(); Pop(0)

0xf4b: PushEmpty(cvector, cvector, cvector, cvector)
0xf4c: @ GetDirection(Stack[-2])
0xf4d: Pop(0)
0xf4e: PushEmpty(cvector, object)
0xf4f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf50: Call2 0x1022

0xf51: Stack[-3] = Stack[-2]
0xf52: Pop(2)
0xf53: PushEmpty(float, cvector, cvector)
0xf54: Stack[-2] = Stack[-5]
0xf55: Stack[-1] = Stack[-4]
0xf56: Call2 0x11d2

0xf57: Pop(2)
0xf58: Push((float)-0.34202)
0xf59: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0xf5a: Return(); Pop(4)

0xf5b: PushEmpty()
0xf5c: Call2 0xffd

0xf5d: Pop(0)
0xf5e: PushEmpty()
0xf5f: Call2 0x157a

0xf60: Pop(0)
0xf61: Return(); Pop(0)

0xf62: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0xf63: @ GetPosition(Stack[-6])
0xf64: Pop(0)
0xf65: @@ GetPosition(Stack[-5])
0xf66: Pop(0)
0xf67: @ GetDirection(Stack[-4])
0xf68: Pop(0)
0xf69: PushEmpty(cvector, cvector)
0xf6a: PushEmpty(cvector, cvector)
0xf6b: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0xf6c: Call2 0x11c8

0xf6d: Pop(1)
0xf6e: Push((float)0.75)
0xf6f: Pop(1); Push(Stack[-8] * Stack[-1]);
0xf70: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0xf71: Call2 0x11c8

0xf72: Stack[-5] = Stack[-2]
0xf73: Pop(2)
0xf74: Push((int) 32)
0xf75: Push((float)7000.0)
0xf76: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0xf77: Pop(2)
0xf78: Push((int) 100)
0xf79: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0xf7a: Push((int) 0)
0xf7b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf7c: IF (Stack[-1] == 0) GOTO 0xf7e; Pop(1)

0xf7d: Stack[-1] = (int) 0
0xf7e: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0xf7f: Return(); Pop(12)

0xf80: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0xf81: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0xf82: PushEmpty(cvector, float)
0xf83: Stack[-1] = (float) 1.74533
0xf84: Call2 0xf62

0xf85: Stack[-7] = Stack[-2]
0xf86: Pop(2)
0xf87: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf88: Push((float)2500.0)
0xf89: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf8a: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf8b: PushEmpty(cvector, float)
0xf8c: Stack[-1] = (float) 2.61799
0xf8d: Call2 0xf62

0xf8e: Stack[-7] = Stack[-2]
0xf8f: Pop(2)
0xf90: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0xf91: Push((float)2500.0)
0xf92: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0xf93: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf94: Push("Can't retreat, distance: ")
0xf95: Pop(0); Push(Sqrt(Stack[-5]))
0xf96: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf97: @ Trace(Stack[-1])
0xf98: Pop(1)
0xf99: Push((float)0.5)
0xf9a: @ Sleep(Stack[-1])
0xf9b: Pop(1)
0xf9c: Return(); Pop(10)

0xf9d: Push(CvectorIndex(Stack[-5], 0))
0xf9e: Push(CvectorIndex(Stack[-6], 2))
0xf9f: @ Rotate(Stack[-2], Stack[-1])
0xfa0: Pop(2)
0xfa1: PushEmpty(cvector)
0xfa2: Call2 0x101d

0xfa3: Pop(0)
0xfa4: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0xfa5: Push((int) 120)
0xfa6: Push((float)0.5)
0xfa7: @ SetTimer(Stack[-2], Stack[-1])
0xfa8: Pop(2)
0xfa9: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xfaa: Push((int) 1)
0xfab: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0xfac: Pop(1)
0xfad: Push(Stack[-3])
0xfae: IF (Stack[-1] == 0) GOTO 0xfc6; Pop(1)

0xfaf: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xfb0: IF (Stack[-1] == 0) GOTO 0xfb3; Pop(1)

0xfb1: GOTO 0xfc8

0xfb2: GOTO 0xfc6

0xfb3: PushEmpty(cvector, float)
0xfb4: Stack[-1] = (float) 2.61799
0xfb5: Call2 0xf62

0xfb6: Stack[-4] = Stack[-2]
0xfb7: Pop(2)
0xfb8: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xfb9: Push((float)2500.0)
0xfba: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xfbb: IF (Stack[-1] == 0) GOTO 0xfc5; Pop(1)

0xfbc: PushEmpty(cvector)
0xfbd: Call2 0x101d

0xfbe: Pop(0)
0xfbf: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xfc0: Push((int) 120)
0xfc1: Push((float)0.5)
0xfc2: @ SetTimer(Stack[-2], Stack[-1])
0xfc3: Pop(2)
0xfc4: GOTO 0xfc6

0xfc5: GOTO 0xfc8

0xfc6: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0xfc7: IF (Stack[-1] == 0) GOTO 0xfaa; Pop(1)

0xfc8: Return(); Pop(10)

0xfc9: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0xfca: Push((int) 120)
0xfcb: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0xfcc: IF (Stack[-1] == 0) GOTO 0xfce; Pop(1)

0xfcd: Return(); Pop(8)

0xfce: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0xfcf: IF (Stack[-1] == 0) GOTO 0xfd7; Pop(1)

0xfd0: @ Stop()
0xfd1: Pop(0)
0xfd2: Push((int) 1)
0xfd3: @ KillTimer(Stack[-1])
0xfd4: Pop(1)
0xfd5: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0xfd6: GOTO 0xffc

0xfd7: @ GetDirection(Stack[-4])
0xfd8: Pop(0)
0xfd9: Push((float)7000.0)
0xfda: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0xfdb: Pop(1)
0xfdc: PushEmpty(cvector, float)
0xfdd: Stack[-1] = (float) 1.74533
0xfde: Call2 0xf62

0xfdf: Stack[-4] = Stack[-2]
0xfe0: Pop(2)
0xfe1: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0xfe2: PushEmpty(bool)
0xfe3: Stack[-1] = (bool) 0
0xfe4: Push((float)2500.0)
0xfe5: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0xfe6: IF (Stack[-1] == 0) GOTO 0xff5; Pop(1)

0xfe7: PushEmpty(bool)
0xfe8: Stack[-1] = (bool) 1
0xfe9: Pop(0); Push(Stack[-5] * Stack[-5]);
0xfea: Push((float)2.25)
0xfeb: Pop(2); Push(Stack[-2] * Stack[-1]);
0xfec: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0xfed: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xfee: PushEmpty(bool)
0xfef: Call2 0x100d

0xff0: Pop(0)
0xff1: IF (Stack[-1] == 0) GOTO 0xff3; Pop(1)

0xff2: Stack[-1] = (bool) 0
0xff3: IF (Stack[-1] == 0) GOTO 0xff5; Pop(1)

0xff4: Stack[-1] = (bool) 1
0xff5: IF (Stack[-1] == 0) GOTO 0xffc; Pop(1)

0xff6: @ Stop()
0xff7: Pop(0)
0xff8: PushEmpty(cvector)
0xff9: Call2 0x101d

0xffa: Pop(0)
0xffb: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0xffc: Return(); Pop(8)

0xffd: @ Stop()
0xffe: Pop(0)
0xfff: Push((int) 120)
0x1000: @ KillTimer(Stack[-1])
0x1001: Pop(1)
0x1002: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x1003: Return(); Pop(0)

0x1004: PushEmpty()
0x1005: PushEmpty()
0x1006: Call2 0xffd

0x1007: Pop(0)
0x1008: PushEmpty(object)
0x1009: Stack[-1] = Stack[-2]
0x100a: Call2 0x1440

0x100b: Pop(1)
0x100c: Return(); Pop(0)

0x100d: PushEmpty(cvector, cvector, cvector, cvector)
0x100e: @ GetDirection(Stack[-2])
0x100f: Pop(0)
0x1010: PushEmpty(cvector, object)
0x1011: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1012: Call2 0x1022

0x1013: Stack[-3] = Stack[-2]
0x1014: Pop(2)
0x1015: PushEmpty(float, cvector, cvector)
0x1016: Stack[-2] = Stack[-5]
0x1017: Stack[-1] = Stack[-4]
0x1018: Call2 0x11d2

0x1019: Pop(2)
0x101a: Push((float)-0.34202)
0x101b: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x101c: Return(); Pop(4)

0x101d: PushEmpty(cvector, cvector)
0x101e: @ GetPosition(Stack[-1])
0x101f: Pop(0)
0x1020: Stack[-3] = Stack[-1]
0x1021: Return(); Pop(2)

0x1022: PushEmpty(cvector, cvector, cvector, cvector)
0x1023: @ GetPosition(Stack[-2])
0x1024: Pop(0)
0x1025: @@ GetPosition(Stack[-1])
0x1026: Pop(0)
0x1027: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1028: Return(); Pop(4)

0x1029: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x102a: @ GetPosition(Stack[-3])
0x102b: Pop(0)
0x102c: @@ GetPosition(Stack[-2])
0x102d: Pop(0)
0x102e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x102f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1030: Return(); Pop(6)

0x1031: PushEmpty(bool, bool)
0x1032: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1033: Pop(0)
0x1034: Stack[-4] = Stack[-1]
0x1035: Return(); Pop(2)

0x1036: PushEmpty(bool, bool)
0x1037: Push("HasProperty")
0x1038: Push((int) 2)
0x1039: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x103a: Pop(1); Push((bool) Stack[-1] == 0)
0x103b: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x103c: Stack[-5] = (bool) 0
0x103d: Return(); Pop(2)

0x103e: @@ HasProperty(Stack[-3], Stack[-1])
0x103f: Pop(0)
0x1040: Stack[-5] = Stack[-1]
0x1041: Return(); Pop(2)

0x1042: PushEmpty(bool, bool)
0x1043: @@ IsDead(Stack[-1])
0x1044: Pop(0)
0x1045: Stack[-4] = Stack[-1]
0x1046: Return(); Pop(2)

0x1047: PushEmpty(object, object, object, object)
0x1048: Pop(0); Push((bool) Stack[-5] == 0)
0x1049: IF (Stack[-1] == 0) GOTO 0x104c; Pop(1)

0x104a: Stack[-6] = (bool) 0
0x104b: Return(); Pop(4)

0x104c: PushEmpty(bool)
0x104d: Stack[-1] = (bool) 0
0x104e: Push("IsDead")
0x104f: Push((int) 1)
0x1050: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x1051: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1052: PushEmpty(bool, object)
0x1053: Stack[-1] = Stack[-8]
0x1054: Call2 0x1042

0x1055: Pop(1)
0x1056: IF (Stack[-1] == 0) GOTO 0x1058; Pop(1)

0x1057: Stack[-1] = (bool) 1
0x1058: IF (Stack[-1] == 0) GOTO 0x105b; Pop(1)

0x1059: Stack[-6] = (bool) 0
0x105a: Return(); Pop(4)

0x105b: @ GetScene(Stack[-2])
0x105c: Pop(0)
0x105d: Pop(0); Push((bool) Stack[-2] == 0)
0x105e: IF (Stack[-1] == 0) GOTO 0x1061; Pop(1)

0x105f: Stack[-6] = (bool) 0
0x1060: Return(); Pop(4)

0x1061: @@ GetScene(Stack[-1])
0x1062: Pop(0)
0x1063: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x1064: IF (Stack[-1] == 0) GOTO 0x1067; Pop(1)

0x1065: Stack[-6] = (bool) 0
0x1066: Return(); Pop(4)

0x1067: Stack[-6] = (bool) 1
0x1068: Return(); Pop(4)

0x1069: Stack[-1] = 0
0x106a: Stack[-2] = 0
0x106b: PushEmpty(int, int)
0x106c: PushEmpty(bool, object)
0x106d: Stack[-1] = Stack[-5]
0x106e: Call2 0x1047

0x106f: Pop(1)
0x1070: Pop(1); Push((bool) Stack[-1] == 0)
0x1071: IF (Stack[-1] == 0) GOTO 0x1074; Pop(1)

0x1072: Stack[-4] = (bool) 0
0x1073: Return(); Pop(2)

0x1074: PushEmpty(bool, object, string)
0x1075: Stack[-2] = Stack[-6]
0x1076: Stack[-1] = "noaccess"
0x1077: Call2 0x1036

0x1078: Pop(2)
0x1079: Pop(1); Push((bool) Stack[-1] == 0)
0x107a: IF (Stack[-1] == 0) GOTO 0x107d; Pop(1)

0x107b: Stack[-4] = (bool) 1
0x107c: Return(); Pop(2)

0x107d: Push("noaccess")
0x107e: @@ GetProperty(Stack[-1], Stack[-2])
0x107f: Pop(1)
0x1080: Push((int) 0)
0x1081: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x1082: Return(); Pop(2)

0x1083: PushEmpty(bool, int, cvector, cvector, cvector, cvector, string, bool, int, cvector, cvector, cvector, cvector, string)
0x1084: Pop(0); Push((bool) Stack[-15] == 0)
0x1085: IF (Stack[-1] == 0) GOTO 0x1087; Pop(1)

0x1086: Return(); Pop(14)

0x1087: @ IsDead(Stack[-7])
0x1088: Pop(0)
0x1089: Push(Stack[-7])
0x108a: IF (Stack[-1] == 0) GOTO 0x108c; Pop(1)

0x108b: Return(); Pop(14)

0x108c: @ GetSecondaryAnimationType(Stack[-6])
0x108d: Pop(0)
0x108e: Push((int) 0)
0x108f: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1090: IF (Stack[-1] == 0) GOTO 0x1092; Pop(1)

0x1091: Return(); Pop(14)

0x1092: @@ GetPosition(Stack[-5])
0x1093: Pop(0)
0x1094: @ GetPosition(Stack[-4])
0x1095: Pop(0)
0x1096: @ GetDirection(Stack[-3])
0x1097: Pop(0)
0x1098: Stack[-2] = Stack[-4] - Stack[-5]; Pop(0);
0x1099: Push(CvectorIndex(Stack[-2], 0))
0x109a: Push(CvectorIndex(Stack[-4], 0))
0x109b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x109c: Push(CvectorIndex(Stack[-3], 2))
0x109d: Push(CvectorIndex(Stack[-5], 2))
0x109e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x109f: Pop(2); Push(Stack[-2] + Stack[-1]);
0x10a0: Push((int) 0)
0x10a1: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x10a2: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x10a3: Stack[-1] = "fhit"
0x10a4: GOTO 0x10a6

0x10a5: Stack[-1] = "bhit"
0x10a6: Push("hit_react")
0x10a7: Push("1")
0x10a8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x10a9: Push("2")
0x10aa: Pop(1); Push(Stack[-4] + Stack[-1]);
0x10ab: Push((int) -10)
0x10ac: @ FadeSecondaryAnimation(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x10ad: Pop(4)
0x10ae: Return(); Pop(14)

0x10af: PushEmpty(cvector, object, int, bool, cvector, cvector, int, int, cvector, cvector, object, int, bool, cvector, cvector, int, int, cvector)
0x10b0: PushEmpty(bool)
0x10b1: Stack[-1] = (bool) 0
0x10b2: PushEmpty(bool)
0x10b3: Stack[-1] = (bool) 0
0x10b4: Push(Stack[-23])
0x10b5: IF (Stack[-1] == 0) GOTO 0x10ba; Pop(1)

0x10b6: Push((int) 4)
0x10b7: Pop(1); Push((bool) Stack[-23] != Stack[-1])
0x10b8: IF (Stack[-1] == 0) GOTO 0x10ba; Pop(1)

0x10b9: Stack[-1] = (bool) 1
0x10ba: IF (Stack[-1] == 0) GOTO 0x10bf; Pop(1)

0x10bb: Push((int) 5)
0x10bc: Pop(1); Push((bool) Stack[-22] != Stack[-1])
0x10bd: IF (Stack[-1] == 0) GOTO 0x10bf; Pop(1)

0x10be: Stack[-1] = (bool) 1
0x10bf: IF (Stack[-1] == 0) GOTO 0x10ee; Pop(1)

0x10c0: PushEmpty(cvector, cvector)
0x10c1: PushEmpty(cvector, object)
0x10c2: Stack[-1] = Stack[-25]
0x10c3: Call2 0x1022

0x10c4: Stack[-3] = Stack[-2]
0x10c5: Pop(2)
0x10c6: Call2 0x11c8

0x10c7: Stack[-11] = Stack[-2]
0x10c8: Pop(2)
0x10c9: @ CreateVectorVector(Stack[-8])
0x10ca: Pop(0)
0x10cb: Stack[-7] = (int) 1
0x10cc: Push("hit")
0x10cd: Pop(1); Push(Stack[-1] + Stack[-8]);
0x10ce: @ GetGeometryLocator(Stack[-1], Stack[-7], Stack[-6], Stack[-5])
0x10cf: Pop(1)
0x10d0: Pop(0); Push((bool) Stack[-6] == 0)
0x10d1: IF (Stack[-1] == 0) GOTO 0x10d3; Pop(1)

0x10d2: GOTO 0x10dc

0x10d3: Pop(0); Push(Stack[-4] | Stack[-9]);
0x10d4: Push((float)0.70711)
0x10d5: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x10d6: IF (Stack[-1] == 0) GOTO 0x10d9; Pop(1)

0x10d7: @@ add(Stack[-5])
0x10d8: Pop(0)
0x10d9: Push((int) 1)
0x10da: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x10db: GOTO 0x10cc

0x10dc: @@ size(Stack[-3])
0x10dd: Pop(0)
0x10de: Push(Stack[-3])
0x10df: IF (Stack[-1] == 0) GOTO 0x10ed; Pop(1)

0x10e0: @ irand(Stack[-2], Stack[-3])
0x10e1: Pop(0)
0x10e2: @@ get(Stack[-1], Stack[-2])
0x10e3: Pop(0)
0x10e4: PushEmpty(object, int, float, cvector, cvector)
0x10e5: Stack[-5] = Stack[-26]
0x10e6: Stack[-4] = Stack[-25]
0x10e7: Stack[-3] = Stack[-24]
0x10e8: Stack[-2] = Stack[-6]
0x10e9: Stack[-1] = -Stack[-14]; Pop(0);
0x10ea: Call2 0x10f3

0x10eb: Pop(5)
0x10ec: Return(); Pop(18)

0x10ed: Stack[-8] = 0
0x10ee: PushEmpty(object)
0x10ef: Stack[-1] = Stack[-22]
0x10f0: Call2 0x1083

0x10f1: Pop(1)
0x10f2: Return(); Pop(18)

0x10f3: PushEmpty(object, object, object, object)
0x10f4: @ GetScene(Stack[-2])
0x10f5: Pop(0)
0x10f6: Push("scripted")
0x10f7: Push("blood_dir.xml")
0x10f8: @ AddActorByType(Stack[-3], Stack[-2], Stack[-4], Stack[-8], Stack[-7], Stack[-1])
0x10f9: Pop(2)
0x10fa: PushEmpty(object)
0x10fb: Stack[-1] = Stack[-10]
0x10fc: Call2 0x1083

0x10fd: Pop(1)
0x10fe: Return(); Pop(4)

0x10ff: Stack[-1] = 0
0x1100: Stack[-2] = 0
0x1101: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1102: @@ GetPosition(Stack[-3])
0x1103: Pop(0)
0x1104: @ GetPosition(Stack[-2])
0x1105: Pop(0)
0x1106: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1107: Push(CvectorIndex(Stack[-1], 0))
0x1108: Push(CvectorIndex(Stack[-2], 2))
0x1109: @ RotateAsync(Stack[-2], Stack[-1])
0x110a: Pop(2)
0x110b: Return(); Pop(6)

0x110c: PushEmpty(bool, bool)
0x110d: @ IsLoaded(Stack[-1])
0x110e: Pop(0)
0x110f: Stack[-3] = Stack[-1]
0x1110: Return(); Pop(2)

0x1111: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1112: @@ GetPosition(Stack[-8])
0x1113: Pop(0)
0x1114: @@ GetEyesHeight(Stack[-9])
0x1115: Pop(0)
0x1116: Push(CvectorIndex(Stack[-8], 1))
0x1117: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1118: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1119: @ GetPosition(Stack[-7])
0x111a: Pop(0)
0x111b: @ GetEyesHeight(Stack[-9])
0x111c: Pop(0)
0x111d: Push(CvectorIndex(Stack[-7], 1))
0x111e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x111f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1120: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1121: Push(CvectorIndex(Stack[-6], 1))
0x1122: Stack[-1] = (int) 0
0x1123: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1124: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1125: Pop(1); Push(Sqrt(Stack[-1]))
0x1126: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1127: Stack[-5] = -Stack[-6]; Pop(0);
0x1128: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1129: PushEmpty(cvector, cvector)
0x112a: Push(CVector(0.0, 1.0, 0.0))
0x112b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x112c: Call2 0x11c8

0x112d: Pop(1)
0x112e: Push((int) 25)
0x112f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1130: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1131: Push(CVector(0.0, 10.0, 0.0))
0x1132: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1133: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1134: @ IsOverrideActive(Stack[-2])
0x1135: Pop(0)
0x1136: Push(Stack[-2])
0x1137: IF (Stack[-1] == 0) GOTO 0x113a; Pop(1)

0x1138: Stack[-21] = (bool) 0
0x1139: Return(); Pop(18)

0x113a: @ StopWorld()
0x113b: Pop(0)
0x113c: Push((bool) 1)
0x113d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x113e: Pop(1)
0x113f: Push(CvectorIndex(Stack[-4], 0))
0x1140: Push(CvectorIndex(Stack[-5], 2))
0x1141: @ Rotate(Stack[-2], Stack[-1])
0x1142: Pop(2)
0x1143: PushEmpty(bool)
0x1144: Call2 0x15b9

0x1145: Pop(0)
0x1146: IF (Stack[-1] == 0) GOTO 0x1148; Pop(1)

0x1147: GOTO 0x1150

0x1148: Push("head")
0x1149: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x114a: Pop(1)
0x114b: Push(Stack[-1])
0x114c: IF (Stack[-1] == 0) GOTO 0x1150; Pop(1)

0x114d: Push("head")
0x114e: @ LookAsyncCamera(Stack[-1])
0x114f: Pop(1)
0x1150: @ CameraWaitForPlayFinish()
0x1151: Pop(0)
0x1152: @ ResumeWorld()
0x1153: Pop(0)
0x1154: Stack[-21] = (bool) 1
0x1155: Return(); Pop(18)

0x1156: PushEmpty(bool, bool)
0x1157: Push((bool) 1)
0x1158: @ CameraSwitchToNormal(Stack[-1])
0x1159: Pop(1)
0x115a: PushEmpty(bool)
0x115b: Call2 0x15b9

0x115c: Pop(0)
0x115d: IF (Stack[-1] == 0) GOTO 0x115f; Pop(1)

0x115e: GOTO 0x1167

0x115f: Push("head")
0x1160: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1161: Pop(1)
0x1162: Push(Stack[-1])
0x1163: IF (Stack[-1] == 0) GOTO 0x1167; Pop(1)

0x1164: Push("head")
0x1165: @ UnlookAsync(Stack[-1])
0x1166: Pop(1)
0x1167: Return(); Pop(2)

0x1168: PushEmpty(bool, float, float, bool, float, float)
0x1169: @ lshHasAnimation(Stack[-3], Stack[-7])
0x116a: Pop(0)
0x116b: Push(Stack[-3])
0x116c: IF (Stack[-1] == 0) GOTO 0x1173; Pop(1)

0x116d: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x116e: Pop(0)
0x116f: Push((bool) 0)
0x1170: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1171: Pop(1)
0x1172: GOTO 0x1177

0x1173: Push("Can't find lsh animation : ")
0x1174: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1175: @ Trace(Stack[-1])
0x1176: Pop(1)
0x1177: Return(); Pop(6)

0x1178: PushEmpty(bool, float, float, bool, float, float)
0x1179: @ lshHasAnimation(Stack[-3], Stack[-8])
0x117a: Pop(0)
0x117b: Push(Stack[-3])
0x117c: IF (Stack[-1] == 0) GOTO 0x1182; Pop(1)

0x117d: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x117e: Pop(0)
0x117f: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1180: Pop(0)
0x1181: GOTO 0x1186

0x1182: Push("Can't find lsh animation : ")
0x1183: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1184: @ Trace(Stack[-1])
0x1185: Pop(1)
0x1186: Return(); Pop(6)

0x1187: PushEmpty(float, cvector, float, cvector)
0x1188: @@ GetEyesHeight(Stack[-2])
0x1189: Pop(0)
0x118a: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x118b: Push(CvectorIndex(Stack[-1], 1))
0x118c: Stack[-1] = Stack[-3]
0x118d: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x118e: Push("head")
0x118f: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1190: Pop(1)
0x1191: Return(); Pop(4)

0x1192: PushEmpty(bool)
0x1193: Call2 0x15b9

0x1194: Pop(0)
0x1195: IF (Stack[-1] == 0) GOTO 0x1198; Pop(1)

0x1196: @ lshStopSpeech()
0x1197: Pop(0)
0x1198: Return(); Pop(0)

0x1199: PushEmpty(bool, int, bool, int, bool, float, cvector, cvector, bool, int, bool, int, bool, float, cvector, cvector)
0x119a: @ IsExisting3DSound(Stack[-8], Stack[-17])
0x119b: Pop(0)
0x119c: Pop(0); Push((bool) Stack[-8] == 0)
0x119d: IF (Stack[-1] == 0) GOTO 0x11b2; Pop(1)

0x119e: Stack[-7] = (int) 0
0x119f: Push((int) 1)
0x11a0: Pop(1); Push(Stack[-8] + Stack[-1]);
0x11a1: Pop(1); Push(Stack[-18] + Stack[-1]);
0x11a2: @ IsExisting3DSound(Stack[-7], Stack[-1])
0x11a3: Pop(1)
0x11a4: Pop(0); Push((bool) Stack[-6] == 0)
0x11a5: IF (Stack[-1] == 0) GOTO 0x11a7; Pop(1)

0x11a6: GOTO 0x11aa

0x11a7: Push((int) 1)
0x11a8: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x11a9: GOTO 0x119f

0x11aa: Pop(0); Push((bool) Stack[-7] == 0)
0x11ab: IF (Stack[-1] == 0) GOTO 0x11ad; Pop(1)

0x11ac: Return(); Pop(16)

0x11ad: @ irand(Stack[-5], Stack[-7])
0x11ae: Pop(0)
0x11af: Push((int) 1)
0x11b0: Pop(1); Push(Stack[-6] + Stack[-1]);
0x11b1: Stack[-18] = Stack[-18] + Stack[-1]; Pop(1);
0x11b2: @ Is3DSoundLoaded(Stack[-4], Stack[-17])
0x11b3: Pop(0)
0x11b4: Push(Stack[-4])
0x11b5: IF (Stack[-1] == 0) GOTO 0x11c1; Pop(1)

0x11b6: @ GetEyesHeight(Stack[-3])
0x11b7: Pop(0)
0x11b8: @ GetDirection(Stack[-2])
0x11b9: Pop(0)
0x11ba: Push((int) 50)
0x11bb: Stack[-2] = Stack[-3] * Stack[-1]; Pop(1);
0x11bc: Push(CvectorIndex(Stack[-1], 1))
0x11bd: Stack[-1] = Stack[-1] + Stack[-4]; Pop(0);
0x11be: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x11bf: @ PlayGlobalSound(Stack[-17], Stack[-1])
0x11c0: Pop(0)
0x11c1: Return(); Pop(16)

0x11c2: PushEmpty(object, object)
0x11c3: @ self(Stack[-1])
0x11c4: Pop(0)
0x11c5: Stack[-3] = Stack[-1]
0x11c6: Return(); Pop(2)

0x11c7: Stack[-1] = 0
0x11c8: PushEmpty(float, float)
0x11c9: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11ca: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x11cb: Push((float)0.0)
0x11cc: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x11cd: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11ce: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x11cf: Return(); Pop(2)

0x11d0: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x11d1: Return(); Pop(2)

0x11d2: PushEmpty()
0x11d3: Pop(0); Push(Stack[-2] | Stack[-1]);
0x11d4: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11d5: Pop(0); Push(Stack[-3] | Stack[-3]);
0x11d6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11d7: Pop(1); Push(Sqrt(Stack[-1]))
0x11d8: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x11d9: Return(); Pop(0)

0x11da: PushEmpty()
0x11db: Push(CvectorIndex(Stack[-2], 0))
0x11dc: Push(CvectorIndex(Stack[-2], 0))
0x11dd: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11de: Push(CvectorIndex(Stack[-3], 2))
0x11df: Push(CvectorIndex(Stack[-3], 2))
0x11e0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11e1: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x11e2: Return(); Pop(0)

0x11e3: PushEmpty()
0x11e4: Push(CvectorIndex(Stack[-1], 0))
0x11e5: Push(CvectorIndex(Stack[-2], 0))
0x11e6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11e7: Push(CvectorIndex(Stack[-2], 2))
0x11e8: Push(CvectorIndex(Stack[-3], 2))
0x11e9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11ea: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11eb: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x11ec: Return(); Pop(0)

0x11ed: PushEmpty()
0x11ee: PushEmpty(float, cvector, cvector)
0x11ef: Stack[-2] = Stack[-5]
0x11f0: Stack[-1] = Stack[-4]
0x11f1: Call2 0x11da

0x11f2: Pop(2)
0x11f3: PushEmpty(float, cvector)
0x11f4: Stack[-1] = Stack[-5]
0x11f5: Call2 0x11e3

0x11f6: Pop(1)
0x11f7: PushEmpty(float, cvector)
0x11f8: Stack[-1] = Stack[-5]
0x11f9: Call2 0x11e3

0x11fa: Pop(1)
0x11fb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11fc: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x11fd: Return(); Pop(0)

0x11fe: PushEmpty(int, int)
0x11ff: @ GetVariable(Stack[-3], Stack[-1])
0x1200: Pop(0)
0x1201: Stack[-4] = Stack[-1]
0x1202: Return(); Pop(2)

0x1203: PushEmpty(float, float)
0x1204: @ GetGameTime(Stack[-1])
0x1205: Pop(0)
0x1206: Push((int) 1)
0x1207: PushEmpty(int)
0x1208: Push((int) 24)
0x1209: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x120a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x120b: Return(); Pop(2)

0x120c: PushEmpty()
0x120d: PushEmpty(int, string)
0x120e: Stack[-1] = "branch"
0x120f: Call2 0x11fe

0x1210: Pop(1)
0x1211: Push((int) 0)
0x1212: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1213: IF (Stack[-1] == 0) GOTO 0x1216; Pop(1)

0x1214: Stack[-2] = (bool) 1
0x1215: Return(); Pop(0)

0x1216: Stack[-2] = (bool) 0
0x1217: Return(); Pop(0)

0x1218: PushEmpty()
0x1219: PushEmpty(int, string)
0x121a: Stack[-1] = "branch"
0x121b: Call2 0x11fe

0x121c: Pop(1)
0x121d: Push((int) 2)
0x121e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x121f: IF (Stack[-1] == 0) GOTO 0x1222; Pop(1)

0x1220: Stack[-2] = (bool) 1
0x1221: Return(); Pop(0)

0x1222: Stack[-2] = (bool) 0
0x1223: Return(); Pop(0)

0x1224: PushEmpty()
0x1225: PushEmpty(bool, object)
0x1226: Stack[-1] = Stack[-3]
0x1227: Call2 0x12a6

0x1228: Pop(1)
0x1229: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x122a: Stack[-2] = (bool) 1
0x122b: Return(); Pop(0)

0x122c: Stack[-2] = (bool) 0
0x122d: Return(); Pop(0)

0x122e: PushEmpty()
0x122f: PushEmpty(bool, object)
0x1230: Stack[-1] = Stack[-3]
0x1231: Call2 0x12a9

0x1232: Pop(1)
0x1233: IF (Stack[-1] == 0) GOTO 0x1236; Pop(1)

0x1234: Stack[-2] = (bool) 1
0x1235: Return(); Pop(0)

0x1236: Stack[-2] = (bool) 0
0x1237: Return(); Pop(0)

0x1238: PushEmpty()
0x1239: PushEmpty(bool, object)
0x123a: Stack[-1] = Stack[-3]
0x123b: Call2 0x12b0

0x123c: Pop(1)
0x123d: IF (Stack[-1] == 0) GOTO 0x1240; Pop(1)

0x123e: Stack[-2] = (bool) 1
0x123f: Return(); Pop(0)

0x1240: Stack[-2] = (bool) 0
0x1241: Return(); Pop(0)

0x1242: PushEmpty()
0x1243: PushEmpty(bool, object)
0x1244: Stack[-1] = Stack[-3]
0x1245: Call2 0x12b7

0x1246: Pop(1)
0x1247: IF (Stack[-1] == 0) GOTO 0x124a; Pop(1)

0x1248: Stack[-2] = (bool) 1
0x1249: Return(); Pop(0)

0x124a: Stack[-2] = (bool) 0
0x124b: Return(); Pop(0)

0x124c: PushEmpty()
0x124d: PushEmpty(bool, object)
0x124e: Stack[-1] = Stack[-3]
0x124f: Call2 0x12be

0x1250: Pop(1)
0x1251: IF (Stack[-1] == 0) GOTO 0x1254; Pop(1)

0x1252: Stack[-2] = (bool) 1
0x1253: Return(); Pop(0)

0x1254: Stack[-2] = (bool) 0
0x1255: Return(); Pop(0)

0x1256: PushEmpty()
0x1257: PushEmpty(bool, object)
0x1258: Stack[-1] = Stack[-3]
0x1259: Call2 0x12c5

0x125a: Pop(1)
0x125b: IF (Stack[-1] == 0) GOTO 0x125e; Pop(1)

0x125c: Stack[-2] = (bool) 1
0x125d: Return(); Pop(0)

0x125e: Stack[-2] = (bool) 0
0x125f: Return(); Pop(0)

0x1260: PushEmpty()
0x1261: PushEmpty(bool, object)
0x1262: Stack[-1] = Stack[-3]
0x1263: Call2 0x12cc

0x1264: Pop(1)
0x1265: IF (Stack[-1] == 0) GOTO 0x1268; Pop(1)

0x1266: Stack[-2] = (bool) 1
0x1267: Return(); Pop(0)

0x1268: Stack[-2] = (bool) 0
0x1269: Return(); Pop(0)

0x126a: PushEmpty()
0x126b: PushEmpty(bool, object)
0x126c: Stack[-1] = Stack[-3]
0x126d: Call2 0x12d3

0x126e: Pop(1)
0x126f: IF (Stack[-1] == 0) GOTO 0x1272; Pop(1)

0x1270: Stack[-2] = (bool) 1
0x1271: Return(); Pop(0)

0x1272: Stack[-2] = (bool) 0
0x1273: Return(); Pop(0)

0x1274: PushEmpty()
0x1275: PushEmpty(bool, object)
0x1276: Stack[-1] = Stack[-3]
0x1277: Call2 0x12da

0x1278: Pop(1)
0x1279: IF (Stack[-1] == 0) GOTO 0x127c; Pop(1)

0x127a: Stack[-2] = (bool) 1
0x127b: Return(); Pop(0)

0x127c: Stack[-2] = (bool) 0
0x127d: Return(); Pop(0)

0x127e: PushEmpty()
0x127f: PushEmpty(bool, object)
0x1280: Stack[-1] = Stack[-3]
0x1281: Call2 0x12e1

0x1282: Pop(1)
0x1283: IF (Stack[-1] == 0) GOTO 0x1286; Pop(1)

0x1284: Stack[-2] = (bool) 1
0x1285: Return(); Pop(0)

0x1286: Stack[-2] = (bool) 0
0x1287: Return(); Pop(0)

0x1288: PushEmpty()
0x1289: PushEmpty(bool, object)
0x128a: Stack[-1] = Stack[-3]
0x128b: Call2 0x12e8

0x128c: Pop(1)
0x128d: IF (Stack[-1] == 0) GOTO 0x1290; Pop(1)

0x128e: Stack[-2] = (bool) 1
0x128f: Return(); Pop(0)

0x1290: Stack[-2] = (bool) 0
0x1291: Return(); Pop(0)

0x1292: PushEmpty()
0x1293: PushEmpty(bool, object)
0x1294: Stack[-1] = Stack[-3]
0x1295: Call2 0x12ef

0x1296: Pop(1)
0x1297: IF (Stack[-1] == 0) GOTO 0x129a; Pop(1)

0x1298: Stack[-2] = (bool) 1
0x1299: Return(); Pop(0)

0x129a: Stack[-2] = (bool) 0
0x129b: Return(); Pop(0)

0x129c: PushEmpty()
0x129d: PushEmpty(bool, object)
0x129e: Stack[-1] = Stack[-3]
0x129f: Call2 0x12f6

0x12a0: Pop(1)
0x12a1: IF (Stack[-1] == 0) GOTO 0x12a4; Pop(1)

0x12a2: Stack[-2] = (bool) 1
0x12a3: Return(); Pop(0)

0x12a4: Stack[-2] = (bool) 0
0x12a5: Return(); Pop(0)

0x12a6: PushEmpty()
0x12a7: Stack[-2] = (bool) 0
0x12a8: Return(); Pop(0)

0x12a9: PushEmpty()
0x12aa: PushEmpty(int)
0x12ab: Call2 0x1203

0x12ac: Pop(0)
0x12ad: Push((int) 1)
0x12ae: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12af: Return(); Pop(0)

0x12b0: PushEmpty()
0x12b1: PushEmpty(int)
0x12b2: Call2 0x1203

0x12b3: Pop(0)
0x12b4: Push((int) 2)
0x12b5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12b6: Return(); Pop(0)

0x12b7: PushEmpty()
0x12b8: PushEmpty(int)
0x12b9: Call2 0x1203

0x12ba: Pop(0)
0x12bb: Push((int) 3)
0x12bc: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12bd: Return(); Pop(0)

0x12be: PushEmpty()
0x12bf: PushEmpty(int)
0x12c0: Call2 0x1203

0x12c1: Pop(0)
0x12c2: Push((int) 4)
0x12c3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12c4: Return(); Pop(0)

0x12c5: PushEmpty()
0x12c6: PushEmpty(int)
0x12c7: Call2 0x1203

0x12c8: Pop(0)
0x12c9: Push((int) 5)
0x12ca: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12cb: Return(); Pop(0)

0x12cc: PushEmpty()
0x12cd: PushEmpty(int)
0x12ce: Call2 0x1203

0x12cf: Pop(0)
0x12d0: Push((int) 6)
0x12d1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12d2: Return(); Pop(0)

0x12d3: PushEmpty()
0x12d4: PushEmpty(int)
0x12d5: Call2 0x1203

0x12d6: Pop(0)
0x12d7: Push((int) 7)
0x12d8: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12d9: Return(); Pop(0)

0x12da: PushEmpty()
0x12db: PushEmpty(int)
0x12dc: Call2 0x1203

0x12dd: Pop(0)
0x12de: Push((int) 8)
0x12df: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12e0: Return(); Pop(0)

0x12e1: PushEmpty()
0x12e2: PushEmpty(int)
0x12e3: Call2 0x1203

0x12e4: Pop(0)
0x12e5: Push((int) 9)
0x12e6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12e7: Return(); Pop(0)

0x12e8: PushEmpty()
0x12e9: PushEmpty(int)
0x12ea: Call2 0x1203

0x12eb: Pop(0)
0x12ec: Push((int) 10)
0x12ed: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12ee: Return(); Pop(0)

0x12ef: PushEmpty()
0x12f0: PushEmpty(int)
0x12f1: Call2 0x1203

0x12f2: Pop(0)
0x12f3: Push((int) 11)
0x12f4: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12f5: Return(); Pop(0)

0x12f6: PushEmpty()
0x12f7: PushEmpty(int)
0x12f8: Call2 0x1203

0x12f9: Pop(0)
0x12fa: Push((int) 12)
0x12fb: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x12fc: Return(); Pop(0)

0x12fd: PushEmpty(int, int)
0x12fe: Push("branch")
0x12ff: @ GetVariable(Stack[-1], Stack[-2])
0x1300: Pop(1)
0x1301: Push((int) 0)
0x1302: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1303: IF (Stack[-1] == 0) GOTO 0x1307; Pop(1)

0x1304: Stack[-3] = (int) 1
0x1305: Return(); Pop(2)

0x1306: GOTO 0x130c

0x1307: Push((int) 1)
0x1308: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1309: IF (Stack[-1] == 0) GOTO 0x130c; Pop(1)

0x130a: Stack[-3] = (int) 2
0x130b: Return(); Pop(2)

0x130c: Stack[-3] = (int) 3
0x130d: Return(); Pop(2)

0x130e: PushEmpty(int, int)
0x130f: Push("branch")
0x1310: @ GetVariable(Stack[-1], Stack[-2])
0x1311: Pop(1)
0x1312: Stack[-3] = Stack[-1]
0x1313: Return(); Pop(2)

0x1314: PushEmpty(object, float, object, float)
0x1315: Push("player")
0x1316: @ FindActor(Stack[-3], Stack[-1])
0x1317: Pop(1)
0x1318: Pop(0); Push((bool) Stack[-2] == 0)
0x1319: IF (Stack[-1] == 0) GOTO 0x131c; Pop(1)

0x131a: Stack[-5] = (int) 0
0x131b: Return(); Pop(4)

0x131c: Push("reputation")
0x131d: @@ GetProperty(Stack[-1], Stack[-2])
0x131e: Pop(1)
0x131f: Stack[-5] = Stack[-1]
0x1320: Return(); Pop(4)

0x1321: Stack[-2] = 0
0x1322: PushEmpty()
0x1323: PushEmpty(int)
0x1324: Call2 0x130e

0x1325: Pop(0)
0x1326: Push((int) 1)
0x1327: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1328: IF (Stack[-1] == 0) GOTO 0x132c; Pop(1)

0x1329: @ WorkWithCorpse(Stack[-1])
0x132a: Pop(0)
0x132b: GOTO 0x132e

0x132c: @ Barter(Stack[-1])
0x132d: Pop(0)
0x132e: Return(); Pop(0)

0x132f: PushEmpty(int, bool, int, bool)
0x1330: Pop(0); Push((bool) Stack[-6] > Stack[-5])
0x1331: IF (Stack[-1] == 0) GOTO 0x1336; Pop(1)

0x1332: Push("GenerateMoney: iMin > iMax")
0x1333: @ Trace(Stack[-1])
0x1334: Pop(1)
0x1335: Return(); Pop(4)

0x1336: Stack[-2] = (int) 0
0x1337: Pop(0); Push((bool) Stack[-6] != Stack[-5])
0x1338: IF (Stack[-1] == 0) GOTO 0x133d; Pop(1)

0x1339: Pop(0); Push(Stack[-5] - Stack[-6]);
0x133a: @ irand(Stack[-3], Stack[-1])
0x133b: Pop(1)
0x133c: GOTO 0x1341

0x133d: Push((int) 0)
0x133e: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x133f: IF (Stack[-1] == 0) GOTO 0x1341; Pop(1)

0x1340: Return(); Pop(4)

0x1341: Stack[-2] = Stack[-2] + Stack[-6]; Pop(0);
0x1342: Push((int) 0)
0x1343: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1344: IF (Stack[-1] == 0) GOTO 0x1346; Pop(1)

0x1345: Return(); Pop(4)

0x1346: PushEmpty(int, string)
0x1347: Stack[-1] = "Money"
0x1348: Call2 0x1426

0x1349: Pop(1)
0x134a: Push((int) 0)
0x134b: @ AddItem(Stack[-3], Stack[-2], Stack[-1], Stack[-4])
0x134c: Pop(2)
0x134d: Return(); Pop(4)

0x134e: PushEmpty(object, int, bool, object, int, bool)
0x134f: @ CreateInvItem(Stack[-3])
0x1350: Pop(0)
0x1351: @@ SetItemName(Stack[-7])
0x1352: Pop(0)
0x1353: Push("Organ")
0x1354: Push((int) 1)
0x1355: @@ SetProperty(Stack[-2], Stack[-1])
0x1356: Pop(2)
0x1357: @@ GetItemID(Stack[-2])
0x1358: Pop(0)
0x1359: Push((int) 0)
0x135a: Push((int) 1)
0x135b: @ AddItem(Stack[-3], Stack[-5], Stack[-2], Stack[-1])
0x135c: Pop(2)
0x135d: Return(); Pop(6)

0x135e: Stack[-3] = 0
0x135f: PushEmpty(int)
0x1360: Call2 0x130e

0x1361: Pop(0)
0x1362: Push((int) 1)
0x1363: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x1364: IF (Stack[-1] == 0) GOTO 0x1366; Pop(1)

0x1365: Return(); Pop(0)

0x1366: PushEmpty(string)
0x1367: Stack[-1] = "liver"
0x1368: Call2 0x134e

0x1369: Pop(1)
0x136a: PushEmpty(string)
0x136b: Stack[-1] = "kidney"
0x136c: Call2 0x134e

0x136d: Pop(1)
0x136e: PushEmpty(string)
0x136f: Stack[-1] = "heart"
0x1370: Call2 0x134e

0x1371: Pop(1)
0x1372: PushEmpty(string)
0x1373: Stack[-1] = "blood"
0x1374: Call2 0x134e

0x1375: Pop(1)
0x1376: Return(); Pop(0)

0x1377: PushEmpty(int, bool, int, bool)
0x1378: Push(Stack[-5])
0x1379: IF (Stack[-1] == 0) GOTO 0x13d0; Pop(1)

0x137a: PushEmpty(int, int)
0x137b: Stack[-2] = (int) 0
0x137c: Push((int) 100)
0x137d: PushEmpty(int)
0x137e: Call2 0x1203

0x137f: Pop(0)
0x1380: Push((int) 100)
0x1381: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1382: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x1383: Call2 0x132f

0x1384: Pop(2)
0x1385: Push((int) 8)
0x1386: @ irand(Stack[-3], Stack[-1])
0x1387: Pop(1)
0x1388: Push((int) 0)
0x1389: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138a: IF (Stack[-1] == 0) GOTO 0x1394; Pop(1)

0x138b: PushEmpty(int, string)
0x138c: Stack[-1] = "lemon"
0x138d: Call2 0x1426

0x138e: Pop(1)
0x138f: Push((int) 0)
0x1390: Push((int) 1)
0x1391: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1392: Pop(3)
0x1393: GOTO 0x13cf

0x1394: Push((int) 1)
0x1395: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1396: IF (Stack[-1] == 0) GOTO 0x13a0; Pop(1)

0x1397: PushEmpty(int, string)
0x1398: Stack[-1] = "rusk"
0x1399: Call2 0x1426

0x139a: Pop(1)
0x139b: Push((int) 0)
0x139c: Push((int) 1)
0x139d: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x139e: Pop(3)
0x139f: GOTO 0x13cf

0x13a0: Push((int) 2)
0x13a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a2: IF (Stack[-1] == 0) GOTO 0x13ac; Pop(1)

0x13a3: PushEmpty(int, string)
0x13a4: Stack[-1] = "hook"
0x13a5: Call2 0x1426

0x13a6: Pop(1)
0x13a7: Push((int) 0)
0x13a8: Push((int) 1)
0x13a9: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13aa: Pop(3)
0x13ab: GOTO 0x13cf

0x13ac: Push((int) 4)
0x13ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ae: IF (Stack[-1] == 0) GOTO 0x13b8; Pop(1)

0x13af: PushEmpty(int, string)
0x13b0: Stack[-1] = "syringe"
0x13b1: Call2 0x1426

0x13b2: Pop(1)
0x13b3: Push((int) 0)
0x13b4: Push((int) 1)
0x13b5: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13b6: Pop(3)
0x13b7: GOTO 0x13cf

0x13b8: Push((int) 5)
0x13b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ba: IF (Stack[-1] == 0) GOTO 0x13c4; Pop(1)

0x13bb: PushEmpty(int, string)
0x13bc: Stack[-1] = "watch"
0x13bd: Call2 0x1426

0x13be: Pop(1)
0x13bf: Push((int) 0)
0x13c0: Push((int) 1)
0x13c1: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13c2: Pop(3)
0x13c3: GOTO 0x13cf

0x13c4: Push((int) 6)
0x13c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13c6: IF (Stack[-1] == 0) GOTO 0x13cf; Pop(1)

0x13c7: PushEmpty(int, string)
0x13c8: Stack[-1] = "razor"
0x13c9: Call2 0x1426

0x13ca: Pop(1)
0x13cb: Push((int) 0)
0x13cc: Push((int) 1)
0x13cd: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13ce: Pop(3)
0x13cf: GOTO 0x1425

0x13d0: PushEmpty(int, int)
0x13d1: Stack[-2] = (int) 0
0x13d2: Push((int) 50)
0x13d3: PushEmpty(int)
0x13d4: Call2 0x1203

0x13d5: Pop(0)
0x13d6: Push((int) 50)
0x13d7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x13d8: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x13d9: Call2 0x132f

0x13da: Pop(2)
0x13db: Push((int) 7)
0x13dc: @ irand(Stack[-3], Stack[-1])
0x13dd: Pop(1)
0x13de: Push((int) 0)
0x13df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13e0: IF (Stack[-1] == 0) GOTO 0x13ea; Pop(1)

0x13e1: PushEmpty(int, string)
0x13e2: Stack[-1] = "beads"
0x13e3: Call2 0x1426

0x13e4: Pop(1)
0x13e5: Push((int) 0)
0x13e6: Push((int) 1)
0x13e7: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13e8: Pop(3)
0x13e9: GOTO 0x1425

0x13ea: Push((int) 1)
0x13eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ec: IF (Stack[-1] == 0) GOTO 0x13f6; Pop(1)

0x13ed: PushEmpty(int, string)
0x13ee: Stack[-1] = "bracelet"
0x13ef: Call2 0x1426

0x13f0: Pop(1)
0x13f1: Push((int) 0)
0x13f2: Push((int) 1)
0x13f3: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13f4: Pop(3)
0x13f5: GOTO 0x1425

0x13f6: Push((int) 2)
0x13f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13f8: IF (Stack[-1] == 0) GOTO 0x1402; Pop(1)

0x13f9: PushEmpty(int, string)
0x13fa: Stack[-1] = "ear_ring"
0x13fb: Call2 0x1426

0x13fc: Pop(1)
0x13fd: Push((int) 0)
0x13fe: Push((int) 1)
0x13ff: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1400: Pop(3)
0x1401: GOTO 0x1425

0x1402: Push((int) 3)
0x1403: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1404: IF (Stack[-1] == 0) GOTO 0x140e; Pop(1)

0x1405: PushEmpty(int, string)
0x1406: Stack[-1] = "gold_ring"
0x1407: Call2 0x1426

0x1408: Pop(1)
0x1409: Push((int) 0)
0x140a: Push((int) 1)
0x140b: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x140c: Pop(3)
0x140d: GOTO 0x1425

0x140e: Push((int) 4)
0x140f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1410: IF (Stack[-1] == 0) GOTO 0x141a; Pop(1)

0x1411: PushEmpty(int, string)
0x1412: Stack[-1] = "silver_ring"
0x1413: Call2 0x1426

0x1414: Pop(1)
0x1415: Push((int) 0)
0x1416: Push((int) 1)
0x1417: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1418: Pop(3)
0x1419: GOTO 0x1425

0x141a: Push((int) 5)
0x141b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x141c: IF (Stack[-1] == 0) GOTO 0x1425; Pop(1)

0x141d: PushEmpty(int, string)
0x141e: Stack[-1] = "flower"
0x141f: Call2 0x1426

0x1420: Pop(1)
0x1421: Push((int) 0)
0x1422: Push((int) 1)
0x1423: @ AddItem(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1424: Pop(3)
0x1425: Return(); Pop(4)

0x1426: PushEmpty(int, int)
0x1427: @ GetInvItemByName(Stack[-1], Stack[-3])
0x1428: Pop(0)
0x1429: Stack[-4] = Stack[-1]
0x142a: Return(); Pop(2)

0x142b: PushEmpty()
0x142c: PushEmpty(object)
0x142d: Stack[-1] = Stack[-2]
0x142e: Push(-1, 0); TaskCall(2)
0x142f: Call2 0x8e6

0x1430: Pop(-1, 0); TaskReturn
0x1431: Pop(1)
0x1432: Return(); Pop(0)

0x1433: PushEmpty(float, float)
0x1434: Push("health")
0x1435: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1436: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x1437: Push("health")
0x1438: @ GetProperty(Stack[-1], Stack[-2])
0x1439: Pop(1)
0x143a: Push((int) 0)
0x143b: Pop(1); Push((bool) Stack[-2] <= Stack[-1])
0x143c: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143d: @ SignalDeath(Stack[-4])
0x143e: Pop(0)
0x143f: Return(); Pop(2)

0x1440: PushEmpty()
0x1441: PushEmpty(object)
0x1442: Stack[-1] = Stack[-2]
0x1443: Call2 0x142b

0x1444: Pop(1)
0x1445: Return(); Pop(0)

0x1446: PushEmpty()
0x1447: PushEmpty(object, int, float)
0x1448: Stack[-3] = Stack[-7]
0x1449: Stack[-2] = Stack[-6]
0x144a: Stack[-1] = Stack[-5]
0x144b: Call2 0x10af

0x144c: Pop(3)
0x144d: Return(); Pop(0)

0x144e: PushEmpty()
0x144f: PushEmpty(object, int, float, cvector, cvector)
0x1450: Stack[-5] = Stack[-11]
0x1451: Stack[-4] = Stack[-10]
0x1452: Stack[-3] = Stack[-9]
0x1453: Stack[-2] = Stack[-7]
0x1454: Stack[-1] = Stack[-6]
0x1455: Call2 0x10f3

0x1456: Pop(5)
0x1457: Return(); Pop(0)

0x1458: PushEmpty()
0x1459: Push("unholster")
0x145a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x145b: IF (Stack[-1] == 0) GOTO 0x1463; Pop(1)

0x145c: PushEmpty(bool, object)
0x145d: Stack[-1] = Stack[-4]
0x145e: Call2 0x157b

0x145f: Stack[-5] = Stack[-2]
0x1460: Pop(2)
0x1461: Return(); Pop(0)

0x1462: GOTO 0x1476

0x1463: Push("player_shot")
0x1464: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1465: IF (Stack[-1] == 0) GOTO 0x146d; Pop(1)

0x1466: PushEmpty(bool, object)
0x1467: Stack[-1] = Stack[-4]
0x1468: Call2 0x1588

0x1469: Stack[-5] = Stack[-2]
0x146a: Pop(2)
0x146b: Return(); Pop(0)

0x146c: GOTO 0x1476

0x146d: Push("battle")
0x146e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x146f: IF (Stack[-1] == 0) GOTO 0x1476; Pop(1)

0x1470: PushEmpty(bool, object)
0x1471: Stack[-1] = Stack[-4]
0x1472: Call2 0x159f

0x1473: Stack[-5] = Stack[-2]
0x1474: Pop(2)
0x1475: Return(); Pop(0)

0x1476: Stack[-3] = (bool) 0
0x1477: Return(); Pop(0)

0x1478: PushEmpty()
0x1479: Push("unholster")
0x147a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x147b: IF (Stack[-1] == 0) GOTO 0x1481; Pop(1)

0x147c: PushEmpty(object)
0x147d: Stack[-1] = Stack[-3]
0x147e: Call2 0x1580

0x147f: Pop(1)
0x1480: GOTO 0x1490

0x1481: Push("player_shot")
0x1482: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1483: IF (Stack[-1] == 0) GOTO 0x1489; Pop(1)

0x1484: PushEmpty(object)
0x1485: Stack[-1] = Stack[-3]
0x1486: Call2 0x1597

0x1487: Pop(1)
0x1488: GOTO 0x1490

0x1489: Push("battle")
0x148a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x148b: IF (Stack[-1] == 0) GOTO 0x1490; Pop(1)

0x148c: PushEmpty(object)
0x148d: Stack[-1] = Stack[-3]
0x148e: Call2 0x15a6

0x148f: Pop(1)
0x1490: Return(); Pop(0)

0x1491: PushEmpty(bool, bool)
0x1492: PushEmpty(bool)
0x1493: Stack[-1] = (bool) 0
0x1494: PushEmpty(bool, object)
0x1495: Stack[-1] = Stack[-6]
0x1496: Call2 0x157b

0x1497: Pop(1)
0x1498: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x1499: PushEmpty(bool, object)
0x149a: Stack[-1] = Stack[-6]
0x149b: Call2 0x1031

0x149c: Pop(1)
0x149d: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x149e: Stack[-1] = (bool) 1
0x149f: IF (Stack[-1] == 0) GOTO 0x14a6; Pop(1)

0x14a0: @@ IsWeaponHolstered(Stack[-1])
0x14a1: Pop(0)
0x14a2: Pop(0); Push((bool) Stack[-1] == 0)
0x14a3: IF (Stack[-1] == 0) GOTO 0x14a6; Pop(1)

0x14a4: Stack[-4] = (bool) 1
0x14a5: Return(); Pop(2)

0x14a6: Stack[-4] = (bool) 0
0x14a7: Return(); Pop(2)

0x14a8: PushEmpty()
0x14a9: PushEmpty(object)
0x14aa: Stack[-1] = Stack[-2]
0x14ab: Call2 0x1580

0x14ac: Pop(1)
0x14ad: Return(); Pop(0)

0x14ae: PushEmpty()
0x14af: PushEmpty(bool, object)
0x14b0: Stack[-1] = Stack[-3]
0x14b1: Call2 0x1031

0x14b2: Pop(1)
0x14b3: IF (Stack[-1] == 0) GOTO 0x14ba; Pop(1)

0x14b4: PushEmpty(object)
0x14b5: Call2 0x11c2

0x14b6: Pop(0)
0x14b7: Push((float)-0.03)
0x14b8: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x14b9: Pop(2)
0x14ba: Return(); Pop(0)

0x14bb: PushEmpty(object, object)
0x14bc: Push("heal")
0x14bd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x14be: IF (Stack[-1] == 0) GOTO 0x14c9; Pop(1)

0x14bf: Push("player")
0x14c0: @ FindActor(Stack[-2], Stack[-1])
0x14c1: Pop(1)
0x14c2: PushEmpty(bool, object)
0x14c3: Stack[-1] = Stack[-3]
0x14c4: Call2 0x15ac

0x14c5: Stack[-6] = Stack[-2]
0x14c6: Pop(2)
0x14c7: Return(); Pop(2)

0x14c8: Stack[-1] = 0
0x14c9: Stack[-4] = (bool) 0
0x14ca: Return(); Pop(2)

0x14cb: PushEmpty(object, object)
0x14cc: Push("heal")
0x14cd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x14ce: IF (Stack[-1] == 0) GOTO 0x14d7; Pop(1)

0x14cf: Push("player")
0x14d0: @ FindActor(Stack[-2], Stack[-1])
0x14d1: Pop(1)
0x14d2: PushEmpty(object)
0x14d3: Stack[-1] = Stack[-2]
0x14d4: Call2 0x15af

0x14d5: Pop(1)
0x14d6: Stack[-1] = 0
0x14d7: Return(); Pop(2)

0x14d8: PushEmpty(string, string)
0x14d9: Stack[-1] = "idle"
0x14da: Push(Stack[-3])
0x14db: IF (Stack[-1] == 0) GOTO 0x14dd; Pop(1)

0x14dc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x14dd: Stack[-4] = Stack[-1]
0x14de: Return(); Pop(2)

0x14df: PushEmpty(int, bool, int, bool)
0x14e0: Stack[-2] = (int) 0
0x14e1: Push("all")
0x14e2: PushEmpty(string, int)
0x14e3: Stack[-1] = Stack[-5]
0x14e4: Call2 0x14d8

0x14e5: Pop(1)
0x14e6: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x14e7: Pop(2)
0x14e8: Pop(0); Push((bool) Stack[-1] == 0)
0x14e9: IF (Stack[-1] == 0) GOTO 0x14eb; Pop(1)

0x14ea: GOTO 0x14ee

0x14eb: Push((int) 1)
0x14ec: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x14ed: GOTO 0x14e1

0x14ee: Stack[-5] = Stack[-2]
0x14ef: Return(); Pop(4)

0x14f0: PushEmpty()
0x14f1: PushEmpty(bool)
0x14f2: Call2 0x15d3

0x14f3: Pop(0)
0x14f4: IF (Stack[-1] == 0) GOTO 0x14f7; Pop(1)

0x14f5: Stack[-2] = (int) 2
0x14f6: GOTO 0x14f8

0x14f7: Stack[-2] = (int) 0
0x14f8: Return(); Pop(0)

0x14f9: PushEmpty()
0x14fa: PushEmpty(object)
0x14fb: Stack[-1] = Stack[-2]
0x14fc: Push(-1, 1); TaskCall(5)
0x14fd: Call2 0xbed

0x14fe: Pop(-1, 1); TaskReturn
0x14ff: Pop(1)
0x1500: Return(); Pop(0)

0x1501: PushEmpty()
0x1502: PushEmpty(bool, object)
0x1503: Stack[-1] = Stack[-3]
0x1504: Call2 0x106b

0x1505: Pop(1)
0x1506: IF (Stack[-1] == 0) GOTO 0x1509; Pop(1)

0x1507: Stack[-2] = (int) 2
0x1508: GOTO 0x150a

0x1509: Stack[-2] = (int) 0
0x150a: Return(); Pop(0)

0x150b: PushEmpty()
0x150c: PushEmpty(object)
0x150d: Stack[-1] = Stack[-2]
0x150e: Push(-1, 3); TaskCall(6)
0x150f: Call2 0xd00

0x1510: Pop(-1, 3); TaskReturn
0x1511: Pop(1)
0x1512: Return(); Pop(0)

0x1513: PushEmpty()
0x1514: PushEmpty(bool, object)
0x1515: Stack[-1] = Stack[-4]
0x1516: Call2 0x106b

0x1517: Pop(1)
0x1518: IF (Stack[-1] == 0) GOTO 0x151b; Pop(1)

0x1519: Stack[-3] = (int) 2
0x151a: GOTO 0x151c

0x151b: Stack[-3] = (int) 0
0x151c: Return(); Pop(0)

0x151d: PushEmpty()
0x151e: PushEmpty(object)
0x151f: Stack[-1] = Stack[-2]
0x1520: Push(-1, 3); TaskCall(7)
0x1521: Call2 0xdfc

0x1522: Pop(-1, 3); TaskReturn
0x1523: Pop(1)
0x1524: Return(); Pop(0)

0x1525: PushEmpty(string, bool, string, bool)
0x1526: PushEmpty(bool, object, string)
0x1527: Stack[-2] = Stack[-9]
0x1528: Stack[-1] = "class"
0x1529: Call2 0x1036

0x152a: Pop(2)
0x152b: Pop(1); Push((bool) Stack[-1] == 0)
0x152c: IF (Stack[-1] == 0) GOTO 0x152f; Pop(1)

0x152d: Stack[-8] = (bool) 0
0x152e: Return(); Pop(4)

0x152f: Push("class")
0x1530: @@ GetProperty(Stack[-1], Stack[-3])
0x1531: Pop(1)
0x1532: Push("rat")
0x1533: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1534: IF (Stack[-1] == 0) GOTO 0x1538; Pop(1)

0x1535: Stack[-8] = (bool) 0
0x1536: Return(); Pop(4)

0x1537: GOTO 0x1543

0x1538: Push("rat_big")
0x1539: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x153a: IF (Stack[-1] == 0) GOTO 0x153e; Pop(1)

0x153b: Stack[-8] = (bool) 0
0x153c: Return(); Pop(4)

0x153d: GOTO 0x1543

0x153e: Push("dog")
0x153f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1540: IF (Stack[-1] == 0) GOTO 0x1543; Pop(1)

0x1541: Stack[-8] = (bool) 0
0x1542: Return(); Pop(4)

0x1543: @ CanSee(Stack[-1], Stack[-7])
0x1544: Pop(0)
0x1545: PushEmpty(bool)
0x1546: Stack[-1] = (bool) 1
0x1547: Push(Stack[-2])
0x1548: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x1549: PushEmpty(float, object)
0x154a: Stack[-1] = Stack[-10]
0x154b: Call2 0x1029

0x154c: Pop(1)
0x154d: Pop(0); Push(Stack[-7] * Stack[-7]);
0x154e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x154f: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x1550: Stack[-1] = (bool) 0
0x1551: IF (Stack[-1] == 0) GOTO 0x1554; Pop(1)

0x1552: Stack[-8] = (bool) 1
0x1553: Return(); Pop(4)

0x1554: @ CanSee(Stack[-1], Stack[-6])
0x1555: Pop(0)
0x1556: PushEmpty(bool)
0x1557: Stack[-1] = (bool) 1
0x1558: Push(Stack[-2])
0x1559: IF (Stack[-1] == 0) GOTO 0x1562; Pop(1)

0x155a: PushEmpty(float, object)
0x155b: Stack[-1] = Stack[-9]
0x155c: Call2 0x1029

0x155d: Pop(1)
0x155e: Pop(0); Push(Stack[-7] * Stack[-7]);
0x155f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1560: IF (Stack[-1] == 0) GOTO 0x1562; Pop(1)

0x1561: Stack[-1] = (bool) 0
0x1562: IF (Stack[-1] == 0) GOTO 0x1565; Pop(1)

0x1563: Stack[-8] = (bool) 1
0x1564: Return(); Pop(4)

0x1565: Stack[-8] = (bool) 0
0x1566: Return(); Pop(4)

0x1567: PushEmpty()
0x1568: Stack[-2] = (int) 0
0x1569: Return(); Pop(0)

0x156a: PushEmpty()
0x156b: Return(); Pop(0)

0x156c: PushEmpty()
0x156d: Stack[-3] = (int) 0
0x156e: Return(); Pop(0)

0x156f: PushEmpty()
0x1570: Return(); Pop(0)

0x1571: PushEmpty()
0x1572: Stack[-2] = (int) 2
0x1573: Return(); Pop(0)

0x1574: PushEmpty()
0x1575: PushEmpty(object)
0x1576: Stack[-1] = Stack[-2]
0x1577: Call2 0x15bf

0x1578: Pop(1)
0x1579: Return(); Pop(0)

0x157a: Return(); Pop(0)

0x157b: PushEmpty(bool, bool)
0x157c: @ CanSee(Stack[-1], Stack[-3])
0x157d: Pop(0)
0x157e: Stack[-4] = Stack[-1]
0x157f: Return(); Pop(2)

0x1580: PushEmpty()
0x1581: PushEmpty(object)
0x1582: Stack[-1] = Stack[-2]
0x1583: Push(-1, 3); TaskCall(8)
0x1584: Call2 0xebe

0x1585: Pop(-1, 3); TaskReturn
0x1586: Pop(1)
0x1587: Return(); Pop(0)

0x1588: PushEmpty(bool, bool)
0x1589: @ CanSee(Stack[-1], Stack[-3])
0x158a: Pop(0)
0x158b: Stack[-4] = (bool) 1
0x158c: Push(Stack[-1])
0x158d: IF (Stack[-1] == 0) GOTO 0x1596; Pop(1)

0x158e: PushEmpty(float, object)
0x158f: Stack[-1] = Stack[-5]
0x1590: Call2 0x1029

0x1591: Pop(1)
0x1592: Push((int) 4000000)
0x1593: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1594: IF (Stack[-1] == 0) GOTO 0x1596; Pop(1)

0x1595: Stack[-4] = (bool) 0
0x1596: Return(); Pop(2)

0x1597: PushEmpty()
0x1598: PushEmpty(object)
0x1599: Stack[-1] = Stack[-2]
0x159a: Push(-1, 3); TaskCall(9)
0x159b: Call2 0xf80

0x159c: Pop(-1, 3); TaskReturn
0x159d: Pop(1)
0x159e: Return(); Pop(0)

0x159f: PushEmpty()
0x15a0: PushEmpty(bool, object)
0x15a1: Stack[-1] = Stack[-3]
0x15a2: Call2 0x1588

0x15a3: Stack[-4] = Stack[-2]
0x15a4: Pop(2)
0x15a5: Return(); Pop(0)

0x15a6: PushEmpty()
0x15a7: PushEmpty(object)
0x15a8: Stack[-1] = Stack[-2]
0x15a9: Call2 0x1597

0x15aa: Pop(1)
0x15ab: Return(); Pop(0)

0x15ac: PushEmpty()
0x15ad: Stack[-2] = (bool) 0
0x15ae: Return(); Pop(0)

0x15af: PushEmpty()
0x15b0: Return(); Pop(0)

0x15b1: Stack[-1] = (int) 515596
0x15b2: Return(); Pop(0)

0x15b3: Stack[-1] = (int) 514839
0x15b4: Return(); Pop(0)

0x15b5: Stack[-1] = "ui/NPC_Citizen3.png"
0x15b6: Return(); Pop(0)

0x15b7: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x15b8: Return(); Pop(0)

0x15b9: Stack[-1] = (bool) 0
0x15ba: Return(); Pop(0)

0x15bb: Push(GlobalVars[0])
0x15bc: Stack[-1] = (bool) 0
0x15bd: GlobalVars[0] = Stack[-1]; Pop(1)
0x15be: Return(); Pop(0)

0x15bf: PushEmpty(bool, bool)
0x15c0: Push(GlobalVars[0])
0x15c1: IF (Stack[-1] == 0) GOTO 0x15cc; Pop(1)

0x15c2: @ IsOverrideActive(Stack[-1])
0x15c3: Pop(0)
0x15c4: Pop(0); Push((bool) Stack[-1] == 0)
0x15c5: IF (Stack[-1] == 0) GOTO 0x15ca; Pop(1)

0x15c6: PushEmpty(object)
0x15c7: Stack[-1] = Stack[-4]
0x15c8: Call2 0x1322

0x15c9: Pop(1)
0x15ca: Return(); Pop(2)

0x15cb: GOTO 0x15d2

0x15cc: PushEmpty(int, object)
0x15cd: Stack[-1] = Stack[-5]
0x15ce: Push(-2, 1); TaskCall(0)
0x15cf: Call2 0x0

0x15d0: Pop(-2, 1); TaskReturn
0x15d1: Pop(2)
0x15d2: Return(); Pop(2)

0x15d3: PushEmpty(float)
0x15d4: Call2 0x1314

0x15d5: Pop(0)
0x15d6: Push((float)0.2)
0x15d7: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x15d8: Return(); Pop(0)

0x15d9: PushEmpty()
0x15da: PushEmpty(bool, object, object, float)
0x15db: Stack[-3] = Stack[-7]
0x15dc: Stack[-2] = Stack[-6]
0x15dd: Stack[-1] = (float) 700.0
0x15de: Call2 0x1525

0x15df: Stack[-8] = Stack[-4]
0x15e0: Pop(4)
0x15e1: Return(); Pop(0)

0x15e2: PushEmpty()
0x15e3: PushEmpty(bool, object)
0x15e4: Stack[-1] = Stack[-3]
0x15e5: Call2 0x1031

0x15e6: Pop(1)
0x15e7: IF (Stack[-1] == 0) GOTO 0x15f3; Pop(1)

0x15e8: PushEmpty(object)
0x15e9: Call2 0x11c2

0x15ea: Pop(0)
0x15eb: Push((float)-0.07)
0x15ec: Push((bool) 1)
0x15ed: @ ReportReputationChange(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ee: Pop(3)
0x15ef: PushEmpty(bool)
0x15f0: Stack[-1] = (bool) 0
0x15f1: Call2 0x1377

0x15f2: Pop(1)
0x15f3: PushEmpty()
0x15f4: Call2 0x135f

0x15f5: Pop(0)
0x15f6: Push(GlobalVars[0])
0x15f7: Stack[-1] = (bool) 1
0x15f8: GlobalVars[0] = Stack[-1]; Pop(1)
0x15f9: Push((int) 50)
0x15fa: Push((int) 40)
0x15fb: @ SetRTEnvelope(Stack[-2], Stack[-1])
0x15fc: Pop(2)
0x15fd: Return(); Pop(0)

