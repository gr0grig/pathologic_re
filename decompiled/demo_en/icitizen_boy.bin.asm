GlobalVarCount = 1
	G_VAR_0 bool 

Strings:
	Neutral
	all
	idle
	head
	attack_on
	attack_stay
	attack_off
	GetPosition
	Can't retreat, distance: 
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	SetMessage
	ClearReplies
	AddReply
	HasProperty
	HasProperty
	IsDead
	IsDead
	GetScene
	noaccess
	GetProperty
	GetEyesHeight
	Can't find lsh animation : 
	unholster
	player_shot
	battle
	IsWeaponHolstered
	heal
	player
	SetReturnValue
	branch
	alpha_pills
	meradorm
	beta_pills
	monomicin
	lockpick
	rifle_ammo
	revolver_ammo
	samopal_ammo
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

Import:
	DoTrade (0 args)
	lshWaitForAnimEnd (0 args)
	WaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	StopTrade (0 args)
	SensePlayerOnly (1 args)
	KillTimer (1 args)
	ResetAAS (0 args)
	IsPlayerActor (2 args)
	SetTimer (2 args)
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
	GetDirection (1 args)
	StopAsync (0 args)
	UnlookAsync (1 args)
	Face (1 args)
	FindLongestDir (6 args)
	Trace (1 args)
	Rotate (2 args)
	MovePoint (3 args)
	FindDirLength (3 args)
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	GetScene (1 args)
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
	LookAsync (3 args)
	lshStopSpeech (0 args)
	AddItem (3 args)
	AddItem (4 args)
	self (1 args)
	GetVariable (2 args)
	GetGameTime (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	ClearSubContainer (1 args)

RunOp = 0x28
RunTask = 1

GlobalTasks: 
	GTASK_0 Vars = (bool) Params = 1
		EVENT_11 Op = 0x1a Vars = (int)
	GTASK_1 Vars = (bool, bool, bool) Params = 0
		EVENT_0 Op = 0x40 Vars = (object)
		EVENT_17 Op = 0x54 Vars = (object)
		EVENT_30 Op = 0x6c Vars = (object, object, bool)
		EVENT_40 Op = 0x88 Vars = (object)
		EVENT_42 Op = 0x9c Vars = (object, string)
		EVENT_26 Op = 0xc1 Vars = (string)
		EVENT_1 Op = 0xcf Vars = (object)
		EVENT_3 Op = 0xe2 Vars = (object)
		EVENT_7 Op = 0xe8 Vars = (int)
		EVENT_6 Op = 0xf4 Vars = ()
		EVENT_41 Op = 0x10b Vars = (object)
		EVENT_10 Op = 0x17c Vars = (object)
		EVENT_28 Op = 0x180 Vars = ()
	GTASK_2  Params = 0
		EVENT_0 Op = 0x199 Vars = (object)
		EVENT_17 Op = 0x1ad Vars = (object)
		EVENT_30 Op = 0x1c5 Vars = (object, object, bool)
		EVENT_40 Op = 0x1e1 Vars = (object)
		EVENT_42 Op = 0x1f5 Vars = (object, string)
		EVENT_26 Op = 0x21a Vars = (string)
		EVENT_6 Op = 0x228 Vars = ()
		EVENT_1 Op = 0x22f Vars = (object)
	GTASK_3 Vars = (object) Params = 1
		EVENT_0 Op = 0x2cb Vars = (object)
		EVENT_17 Op = 0x2df Vars = (object)
		EVENT_30 Op = 0x2f7 Vars = (object, object, bool)
		EVENT_40 Op = 0x313 Vars = (object)
		EVENT_42 Op = 0x327 Vars = (object, string)
		EVENT_26 Op = 0x34c Vars = (string)
		EVENT_41 Op = 0x365 Vars = (object)
		EVENT_7 Op = 0x36e Vars = (int)
		EVENT_6 Op = 0x391 Vars = ()
		EVENT_1 Op = 0x398 Vars = (object)
	GTASK_4 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x3c2 Vars = ()
		EVENT_7 Op = 0x430 Vars = (int)
		EVENT_41 Op = 0x46b Vars = (object)
	GTASK_5 Vars = (object, cvector, bool) Params = 1
		EVENT_7 Op = 0x4eb Vars = (int)
		EVENT_41 Op = 0x526 Vars = (object)
	GTASK_6 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x53f Vars = ()
		EVENT_7 Op = 0x5ad Vars = (int)
		EVENT_41 Op = 0x5e8 Vars = (object)
	GTASK_7 Vars = (object, cvector, bool) Params = 1
		EVENT_6 Op = 0x601 Vars = ()
		EVENT_7 Op = 0x66f Vars = (int)
		EVENT_41 Op = 0x6aa Vars = (object)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x985 Vars = (int, int)

Events:
EVENT_16 Op = 0x14f7 Vars = (object, string)
EVENT_41 Op = 0x14f9 Vars = (object)
EVENT_22 Op = 0x14fb Vars = (object, int, float, float)
EVENT_43 Op = 0x14fd Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x178f

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x145d

0xb: Pop(1)
0xc: @ lshWaitForAnimEnd()
0xd: Pop(0)
0xe: GOTO 0x15

0xf: @ WaitForAnimEnd()
0x10: Pop(0)
0x11: Push("all")
0x12: Push("idle")
0x13: @ PlayAnimation(Stack[-2], Stack[-1])
0x14: Pop(2)
0x15: Push( Stack[0 + Tasks[-1].StackPointer] )
0x16: IF (Stack[-1] == 0) GOTO 0x18; Pop(1)

0x17: Return(); Pop(0)

0x18: GOTO 0x4

0x19: Return(); Pop(0)

0x1a: PushEmpty()
0x1b: PushEmpty(bool)
0x1c: Call2 0x178f

0x1d: Pop(0)
0x1e: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x1f: @ lshStopAnimation()
0x20: Pop(0)
0x21: GOTO 0x24

0x22: @ StopAnimation()
0x23: Pop(0)
0x24: @ StopTrade()
0x25: Pop(0)
0x26: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x27: Return(); Pop(0)

0x28: Push((bool) 1)
0x29: @ SensePlayerOnly(Stack[-1])
0x2a: Pop(1)
0x2b: PushEmpty()
0x2c: Call2 0x1791

0x2d: Pop(0)
0x2e: PushEmpty()
0x2f: Call2 0x37

0x30: Pop(0)
0x31: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x32: PushEmpty()
0x33: Call2 0x13c

0x34: Pop(0)
0x35: GOTO 0x31

0x36: Return(); Pop(0)

0x37: PushEmpty(bool)
0x38: Call2 0x13c8

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x15df

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0x15d6

0x44: Stack[-3] = Stack[-2]
0x45: Pop(2)
0x46: Push((int) 0)
0x47: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x48: IF (Stack[-1] == 0) GOTO 0x53; Pop(1)

0x49: Push((int) 1)
0x4a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: PushEmpty()
0x4d: Call2 0xfb

0x4e: Pop(0)
0x4f: PushEmpty(object)
0x50: Stack[-1] = Stack[-4]
0x51: Call2 0x15d9

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x1555

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0x15a8

0x5c: Stack[-3] = Stack[-2]
0x5d: Pop(2)
0x5e: Push((int) 0)
0x5f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x60: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x61: Push((int) 1)
0x62: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x63: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x64: PushEmpty()
0x65: Call2 0xfb

0x66: Pop(0)
0x67: PushEmpty(object)
0x68: Stack[-1] = Stack[-4]
0x69: Call2 0x15b2

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x17c3

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0x15ba

0x78: Stack[-4] = Stack[-3]
0x79: Pop(3)
0x7a: Push((int) 0)
0x7b: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7c: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x7d: Push((int) 1)
0x7e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x7f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x80: PushEmpty()
0x81: Call2 0xfb

0x82: Pop(0)
0x83: PushEmpty(object)
0x84: Stack[-1] = Stack[-6]
0x85: Call2 0x15c4

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x15cc

0x8c: Stack[-3] = Stack[-2]
0x8d: Pop(2)
0x8e: Push((int) 0)
0x8f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x90: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x91: Push((int) 1)
0x92: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: PushEmpty()
0x95: Call2 0xfb

0x96: Pop(0)
0x97: PushEmpty(object)
0x98: Stack[-1] = Stack[-4]
0x99: Call2 0x15cf

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0x14ff

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x151f

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0x15d1

0xb0: Stack[-4] = Stack[-3]
0xb1: Pop(3)
0xb2: Push((int) 0)
0xb3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xc0; Pop(1)

0xb5: Push((int) 1)
0xb6: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xbb; Pop(1)

0xb8: PushEmpty()
0xb9: Call2 0xfb

0xba: Pop(0)
0xbb: PushEmpty(string, object)
0xbc: Stack[-2] = Stack[-5]
0xbd: Stack[-1] = Stack[-6]
0xbe: Call2 0x15d4

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0x1562

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x1572

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0x1538

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0x154f

0xdb: Pop(1)
0xdc: GOTO 0xe1

0xdd: PushEmpty(object)
0xde: Stack[-1] = Stack[-2]
0xdf: Call2 0x114

0xe0: Pop(1)
0xe1: Return(); Pop(0)

0xe2: PushEmpty()
0xe3: PushEmpty(object)
0xe4: Stack[-1] = Stack[-2]
0xe5: Call2 0x114

0xe6: Pop(1)
0xe7: Return(); Pop(0)

0xe8: PushEmpty()
0xe9: Push((int) 110)
0xea: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0xeb: IF (Stack[-1] == 0) GOTO 0xed; Pop(1)

0xec: Return(); Pop(0)

0xed: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xee: Push((int) 110)
0xef: @ KillTimer(Stack[-1])
0xf0: Pop(1)
0xf1: @ ResetAAS()
0xf2: Pop(0)
0xf3: Return(); Pop(0)

0xf4: PushEmpty()
0xf5: Call2 0xfb

0xf6: Pop(0)
0xf7: PushEmpty()
0xf8: Call2 0x15df

0xf9: Pop(0)
0xfa: Return(); Pop(0)

0xfb: Push((int) 110)
0xfc: @ KillTimer(Stack[-1])
0xfd: Pop(1)
0xfe: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0xff: PushEmpty()
0x100: Call2 0x183

0x101: Pop(0)
0x102: Return(); Pop(0)

0x103: Push((int) 110)
0x104: @ KillTimer(Stack[-1])
0x105: Pop(1)
0x106: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x107: PushEmpty()
0x108: Call2 0x18a

0x109: Pop(0)
0x10a: Return(); Pop(0)

0x10b: PushEmpty()
0x10c: PushEmpty()
0x10d: Call2 0xfb

0x10e: Pop(0)
0x10f: PushEmpty(object)
0x110: Stack[-1] = Stack[-2]
0x111: Call2 0x14f9

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0x13a5

0x118: Pop(1)
0x119: Pop(1); Push((bool) Stack[-1] == 0)
0x11a: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x11b: Return(); Pop(4)

0x11c: Push( Stack[2 + Tasks[-1].StackPointer] )
0x11d: IF (Stack[-1] == 0) GOTO 0x11f; Pop(1)

0x11e: Return(); Pop(4)

0x11f: @ IsPlayerActor(Stack[-5], Stack[-2])
0x120: Pop(0)
0x121: Pop(0); Push((bool) Stack[-2] == 0)
0x122: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x123: Return(); Pop(4)

0x124: PushEmpty(int, object)
0x125: Stack[-1] = Stack[-7]
0x126: Call2 0x1597

0x127: Stack[-3] = Stack[-2]
0x128: Pop(2)
0x129: Push((int) 0)
0x12a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12b: IF (Stack[-1] == 0) GOTO 0x13b; Pop(1)

0x12c: Push((int) 1)
0x12d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x132; Pop(1)

0x12f: PushEmpty()
0x130: Call2 0x103

0x131: Pop(0)
0x132: PushEmpty(object)
0x133: Stack[-1] = Stack[-6]
0x134: Call2 0x15a0

0x135: Pop(1)
0x136: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x137: Push((int) 110)
0x138: Push((float)10.0)
0x139: @ SetTimer(Stack[-2], Stack[-1])
0x13a: Pop(2)
0x13b: Return(); Pop(4)

0x13c: PushEmpty(float, cvector, cvector, bool, object, bool, float, cvector, cvector, bool, object, bool)
0x13d: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x13e: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x13f: Push((float)0.5)
0x140: @ rand(Stack[-7], Stack[-1])
0x141: Pop(1)
0x142: @ Sleep(Stack[-6])
0x143: Pop(0)
0x144: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x145: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x146: Pop(0); Push((bool) Stack[1 + Tasks[-1].StackPointer] == 0)
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: @ GetPosition(Stack[-4])
0x149: Pop(0)
0x14a: PushEmpty(float)
0x14b: Call2 0x177

0x14c: Pop(0)
0x14d: @ GetRandomPFPointInCircle(Stack[-6], Stack[-5], Stack[-1], Stack[-4])
0x14e: Pop(1)
0x14f: Push(Stack[-3])
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: GOTO 0x156

0x152: Push((int) 1)
0x153: @ Sleep(Stack[-1])
0x154: Pop(1)
0x155: GOTO 0x148

0x156: GOTO 0x158

0x157: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x158: PushEmpty(object, cvector)
0x159: Stack[-1] = Stack[-7]
0x15a: Call2 0x193

0x15b: Stack[-4] = Stack[-2]
0x15c: Pop(2)
0x15d: Pop(0); Push(( Stack[-2] != 0 )
0x15e: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x15f: @ RotatePath(Stack[-2], Stack[-1])
0x160: Pop(0)
0x161: Push(Stack[-1])
0x162: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x163: PushEmpty(bool)
0x164: Call2 0x191

0x165: Pop(0)
0x166: @ FollowPath(Stack[-3], Stack[-1], Stack[-2])
0x167: Pop(1)
0x168: Stack[-2] = 0
0x169: Push(Stack[-1])
0x16a: IF (Stack[-1] == 0) GOTO 0x170; Pop(1)

0x16b: PushEmpty()
0x16c: Push(-0, 0); TaskCall(2)
0x16d: Call2 0x23d

0x16e: Pop(-0, 0); TaskReturn
0x16f: Pop(0)
0x170: GOTO 0x174

0x171: Push((int) 1)
0x172: @ Sleep(Stack[-1])
0x173: Pop(1)
0x174: Stack[-2] = 0
0x175: GOTO 0x144

0x176: Return(); Pop(12)

0x177: PushEmpty(float, float)
0x178: @ GetCameraFarDistance(Stack[-1])
0x179: Pop(0)
0x17a: Stack[-3] = Stack[-1]
0x17b: Return(); Pop(2)

0x17c: PushEmpty()
0x17d: @ RequestClearPath(Stack[-1])
0x17e: Pop(0)
0x17f: Return(); Pop(0)

0x180: @ Stop()
0x181: Pop(0)
0x182: Return(); Pop(0)

0x183: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x184: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x185: @ Stop()
0x186: Pop(0)
0x187: @ StopGroup0()
0x188: Pop(0)
0x189: Return(); Pop(0)

0x18a: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x18b: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x18c: @ Stop()
0x18d: Pop(0)
0x18e: @ StopGroup0()
0x18f: Pop(0)
0x190: Return(); Pop(0)

0x191: Stack[-1] = (bool) 0
0x192: Return(); Pop(0)

0x193: PushEmpty(object, object)
0x194: @ FindShiftedPathTo(Stack[-1], Stack[-3])
0x195: Pop(0)
0x196: Stack[-4] = Stack[-1]
0x197: Return(); Pop(2)

0x198: Stack[-1] = 0
0x199: PushEmpty(int, int)
0x19a: PushEmpty(int, object)
0x19b: Stack[-1] = Stack[-5]
0x19c: Call2 0x15d6

0x19d: Stack[-3] = Stack[-2]
0x19e: Pop(2)
0x19f: Push((int) 0)
0x1a0: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a2: Push((int) 1)
0x1a3: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a8; Pop(1)

0x1a5: PushEmpty()
0x1a6: Call2 0x28e

0x1a7: Pop(0)
0x1a8: PushEmpty(object)
0x1a9: Stack[-1] = Stack[-4]
0x1aa: Call2 0x15d9

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0x1555

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0x15a8

0x1b5: Stack[-3] = Stack[-2]
0x1b6: Pop(2)
0x1b7: Push((int) 0)
0x1b8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c4; Pop(1)

0x1ba: Push((int) 1)
0x1bb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1bc: IF (Stack[-1] == 0) GOTO 0x1c0; Pop(1)

0x1bd: PushEmpty()
0x1be: Call2 0x28e

0x1bf: Pop(0)
0x1c0: PushEmpty(object)
0x1c1: Stack[-1] = Stack[-4]
0x1c2: Call2 0x15b2

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0x17c3

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x15ba

0x1d1: Stack[-4] = Stack[-3]
0x1d2: Pop(3)
0x1d3: Push((int) 0)
0x1d4: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d6: Push((int) 1)
0x1d7: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1d8: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d9: PushEmpty()
0x1da: Call2 0x28e

0x1db: Pop(0)
0x1dc: PushEmpty(object)
0x1dd: Stack[-1] = Stack[-6]
0x1de: Call2 0x15c4

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0x15cc

0x1e5: Stack[-3] = Stack[-2]
0x1e6: Pop(2)
0x1e7: Push((int) 0)
0x1e8: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1e9: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1ea: Push((int) 1)
0x1eb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x1ec: IF (Stack[-1] == 0) GOTO 0x1f0; Pop(1)

0x1ed: PushEmpty()
0x1ee: Call2 0x28e

0x1ef: Pop(0)
0x1f0: PushEmpty(object)
0x1f1: Stack[-1] = Stack[-4]
0x1f2: Call2 0x15cf

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x14ff

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0x151f

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x15d1

0x209: Stack[-4] = Stack[-3]
0x20a: Pop(3)
0x20b: Push((int) 0)
0x20c: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x20d: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x20e: Push((int) 1)
0x20f: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x210: IF (Stack[-1] == 0) GOTO 0x214; Pop(1)

0x211: PushEmpty()
0x212: Call2 0x28e

0x213: Pop(0)
0x214: PushEmpty(string, object)
0x215: Stack[-2] = Stack[-5]
0x216: Stack[-1] = Stack[-6]
0x217: Call2 0x15d4

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x1562

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0x1572

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x15df

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0x1538

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x154f

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x13c8

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x1586

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x13c8

0x252: Pop(0)
0x253: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x254: Stack[-1] = (bool) 1
0x255: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x256: Push((int) 3)
0x257: @ irand(Stack[-6], Stack[-1])
0x258: Pop(1)
0x259: Push((int) 0)
0x25a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x25b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x25c: Push(Stack[-7])
0x25d: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x25e: @ irand(Stack[-4], Stack[-7])
0x25f: Pop(0)
0x260: Push("all")
0x261: PushEmpty(string, int)
0x262: Stack[-1] = Stack[-7]
0x263: Call2 0x157f

0x264: Pop(1)
0x265: @ PlayAnimation(Stack[-2], Stack[-1])
0x266: Pop(2)
0x267: @ WaitForAnimEnd(Stack[-3])
0x268: Pop(0)
0x269: Pop(0); Push((bool) Stack[-3] == 0)
0x26a: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26b: GOTO 0x289

0x26c: GOTO 0x27e

0x26d: Push((int) 1)
0x26e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x26f: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x270: Push((int) 4)
0x271: @ rand(Stack[-3], Stack[-1])
0x272: Pop(1)
0x273: Push((int) 1)
0x274: Pop(1); Push(Stack[-3] + Stack[-1]);
0x275: @ Sleep(Stack[-1], Stack[-2])
0x276: Pop(1)
0x277: Pop(0); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27a; Pop(1)

0x279: GOTO 0x289

0x27a: GOTO 0x27e

0x27b: Push(Stack[-6])
0x27c: IF (Stack[-1] == 0) GOTO 0x27e; Pop(1)

0x27d: GOTO 0x289

0x27e: PushEmpty(bool)
0x27f: Call2 0x28c

0x280: Pop(0)
0x281: Pop(1); Push((bool) Stack[-1] == 0)
0x282: IF (Stack[-1] == 0) GOTO 0x284; Pop(1)

0x283: GOTO 0x289

0x284: @ ResetAAS()
0x285: Pop(0)
0x286: Push((int) 1)
0x287: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x288: GOTO 0x24b

0x289: @ ResetAAS()
0x28a: Pop(0)
0x28b: Return(); Pop(14)

0x28c: Stack[-1] = (bool) 1
0x28d: Return(); Pop(0)

0x28e: @ StopAnimation()
0x28f: Pop(0)
0x290: @ StopGroup0()
0x291: Pop(0)
0x292: Return(); Pop(0)

0x293: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x294: Stack[0 + Tasks[-1].StackPointer] = Stack[-7]
0x295: PushEmpty()
0x296: Call2 0x2c6

0x297: Pop(0)
0x298: @ GetDirection(Stack[-3])
0x299: Pop(0)
0x29a: PushEmpty(cvector, object)
0x29b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x29c: Call2 0x135c

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x14d8

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x13bd

0x2aa: Pop(1)
0x2ab: Stack[-1] = (bool) 1
0x2ac: GOTO 0x2b0

0x2ad: Push((float)1.5)
0x2ae: @ Sleep(Stack[-1], Stack[-2])
0x2af: Pop(1)
0x2b0: Push(Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2c0; Pop(1)

0x2b2: PushEmpty(object)
0x2b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2b4: Call2 0x13bd

0x2b5: Pop(1)
0x2b6: Push((int) 111)
0x2b7: Push((float)0.5)
0x2b8: @ SetTimer(Stack[-2], Stack[-1])
0x2b9: Pop(2)
0x2ba: Push((float)5.0)
0x2bb: @ Sleep(Stack[-1])
0x2bc: Pop(1)
0x2bd: Push((int) 111)
0x2be: @ KillTimer(Stack[-1])
0x2bf: Pop(1)
0x2c0: @ StopAsync()
0x2c1: Pop(0)
0x2c2: Push("head")
0x2c3: @ UnlookAsync(Stack[-1])
0x2c4: Pop(1)
0x2c5: Return(); Pop(6)

0x2c6: PushEmpty(object)
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x147c

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0x15d6

0x2cf: Stack[-3] = Stack[-2]
0x2d0: Pop(2)
0x2d1: Push((int) 0)
0x2d2: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d4: Push((int) 1)
0x2d5: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2da; Pop(1)

0x2d7: PushEmpty()
0x2d8: Call2 0x35a

0x2d9: Pop(0)
0x2da: PushEmpty(object)
0x2db: Stack[-1] = Stack[-4]
0x2dc: Call2 0x15d9

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x1555

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0x15a8

0x2e7: Stack[-3] = Stack[-2]
0x2e8: Pop(2)
0x2e9: Push((int) 0)
0x2ea: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2ec: Push((int) 1)
0x2ed: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2ef: PushEmpty()
0x2f0: Call2 0x35a

0x2f1: Pop(0)
0x2f2: PushEmpty(object)
0x2f3: Stack[-1] = Stack[-4]
0x2f4: Call2 0x15b2

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x17c3

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0x15ba

0x303: Stack[-4] = Stack[-3]
0x304: Pop(3)
0x305: Push((int) 0)
0x306: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x308: Push((int) 1)
0x309: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x30a: IF (Stack[-1] == 0) GOTO 0x30e; Pop(1)

0x30b: PushEmpty()
0x30c: Call2 0x35a

0x30d: Pop(0)
0x30e: PushEmpty(object)
0x30f: Stack[-1] = Stack[-6]
0x310: Call2 0x15c4

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x15cc

0x317: Stack[-3] = Stack[-2]
0x318: Pop(2)
0x319: Push((int) 0)
0x31a: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x326; Pop(1)

0x31c: Push((int) 1)
0x31d: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x31e: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x31f: PushEmpty()
0x320: Call2 0x35a

0x321: Pop(0)
0x322: PushEmpty(object)
0x323: Stack[-1] = Stack[-4]
0x324: Call2 0x15cf

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0x14ff

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0x151f

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x15d1

0x33b: Stack[-4] = Stack[-3]
0x33c: Pop(3)
0x33d: Push((int) 0)
0x33e: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x340: Push((int) 1)
0x341: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x342: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x343: PushEmpty()
0x344: Call2 0x35a

0x345: Pop(0)
0x346: PushEmpty(string, object)
0x347: Stack[-2] = Stack[-5]
0x348: Stack[-1] = Stack[-6]
0x349: Call2 0x15d4

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x1562

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0x1572

0x358: Pop(1)
0x359: Return(); Pop(0)

0x35a: @ StopGroup0()
0x35b: Pop(0)
0x35c: @ StopAsync()
0x35d: Pop(0)
0x35e: Push("head")
0x35f: @ UnlookAsync(Stack[-1])
0x360: Pop(1)
0x361: Push((int) 111)
0x362: @ KillTimer(Stack[-1])
0x363: Pop(1)
0x364: Return(); Pop(0)

0x365: PushEmpty()
0x366: PushEmpty()
0x367: Call2 0x35a

0x368: Pop(0)
0x369: PushEmpty(object)
0x36a: Stack[-1] = Stack[-2]
0x36b: Call2 0x14f9

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x13a5

0x376: Pop(1)
0x377: Pop(1); Push((bool) Stack[-1] == 0)
0x378: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x379: PushEmpty()
0x37a: Call2 0x35a

0x37b: Pop(0)
0x37c: Return(); Pop(4)

0x37d: @ GetDirection(Stack[-2])
0x37e: Pop(0)
0x37f: PushEmpty(cvector, object)
0x380: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x381: Call2 0x135c

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0x14d8

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x13bd

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x15df

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x1538

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0x154f

0x3a4: Pop(1)
0x3a5: Return(); Pop(0)

0x3a6: PushEmpty()
0x3a7: @ Face(Stack[-1])
0x3a8: Pop(0)
0x3a9: Push("all")
0x3aa: Push("attack_on")
0x3ab: @ PlayAnimation(Stack[-2], Stack[-1])
0x3ac: Pop(2)
0x3ad: @ WaitForAnimEnd()
0x3ae: Pop(0)
0x3af: Push("all")
0x3b0: Push("attack_stay")
0x3b1: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b2: Pop(2)
0x3b3: @ WaitForAnimEnd()
0x3b4: Pop(0)
0x3b5: Push("all")
0x3b6: Push("attack_off")
0x3b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x3b8: Pop(2)
0x3b9: @ WaitForAnimEnd()
0x3ba: Pop(0)
0x3bb: @ StopAsync()
0x3bc: Pop(0)
0x3bd: PushEmpty(object)
0x3be: Stack[-1] = Stack[-2]
0x3bf: Call2 0x3e7

0x3c0: Pop(1)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Call2 0x464

0x3c4: Pop(0)
0x3c5: PushEmpty()
0x3c6: Call2 0x15df

0x3c7: Pop(0)
0x3c8: Return(); Pop(0)

0x3c9: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x3ca: @ GetPosition(Stack[-6])
0x3cb: Pop(0)
0x3cc: @@ GetPosition(Stack[-5])
0x3cd: Pop(0)
0x3ce: @ GetDirection(Stack[-4])
0x3cf: Pop(0)
0x3d0: PushEmpty(cvector, cvector)
0x3d1: PushEmpty(cvector, cvector)
0x3d2: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x3d3: Call2 0x14ae

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x14ae

0x3d9: Stack[-5] = Stack[-2]
0x3da: Pop(2)
0x3db: Push((int) 32)
0x3dc: Push((float)7000.0)
0x3dd: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x3de: Pop(2)
0x3df: Push((int) 100)
0x3e0: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x3e1: Push((int) 0)
0x3e2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e5; Pop(1)

0x3e4: Stack[-1] = (int) 0
0x3e5: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x3e6: Return(); Pop(12)

0x3e7: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x3e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x3e9: PushEmpty(cvector, float)
0x3ea: Stack[-1] = (float) 1.74533
0x3eb: Call2 0x3c9

0x3ec: Stack[-7] = Stack[-2]
0x3ed: Pop(2)
0x3ee: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3ef: Push((float)2500.0)
0x3f0: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3f1: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f2: PushEmpty(cvector, float)
0x3f3: Stack[-1] = (float) 2.61799
0x3f4: Call2 0x3c9

0x3f5: Stack[-7] = Stack[-2]
0x3f6: Pop(2)
0x3f7: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x3f8: Push((float)2500.0)
0x3f9: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x3fa: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3fb: Push("Can't retreat, distance: ")
0x3fc: Pop(0); Push(Sqrt(Stack[-5]))
0x3fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x3fe: @ Trace(Stack[-1])
0x3ff: Pop(1)
0x400: Push((float)0.5)
0x401: @ Sleep(Stack[-1])
0x402: Pop(1)
0x403: Return(); Pop(10)

0x404: Push(CvectorIndex(Stack[-5], 0))
0x405: Push(CvectorIndex(Stack[-6], 2))
0x406: @ Rotate(Stack[-2], Stack[-1])
0x407: Pop(2)
0x408: PushEmpty(cvector)
0x409: Call2 0x1357

0x40a: Pop(0)
0x40b: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x40c: Push((int) 120)
0x40d: Push((float)0.5)
0x40e: @ SetTimer(Stack[-2], Stack[-1])
0x40f: Pop(2)
0x410: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x411: Push((int) 1)
0x412: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x413: Pop(1)
0x414: Push(Stack[-3])
0x415: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x416: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: GOTO 0x42f

0x419: GOTO 0x42d

0x41a: PushEmpty(cvector, float)
0x41b: Stack[-1] = (float) 2.61799
0x41c: Call2 0x3c9

0x41d: Stack[-4] = Stack[-2]
0x41e: Pop(2)
0x41f: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x420: Push((float)2500.0)
0x421: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x422: IF (Stack[-1] == 0) GOTO 0x42c; Pop(1)

0x423: PushEmpty(cvector)
0x424: Call2 0x1357

0x425: Pop(0)
0x426: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x427: Push((int) 120)
0x428: Push((float)0.5)
0x429: @ SetTimer(Stack[-2], Stack[-1])
0x42a: Pop(2)
0x42b: GOTO 0x42d

0x42c: GOTO 0x42f

0x42d: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x42e: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x42f: Return(); Pop(10)

0x430: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x431: Push((int) 120)
0x432: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x435; Pop(1)

0x434: Return(); Pop(8)

0x435: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x436: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x437: @ Stop()
0x438: Pop(0)
0x439: Push((int) 1)
0x43a: @ KillTimer(Stack[-1])
0x43b: Pop(1)
0x43c: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x43d: GOTO 0x463

0x43e: @ GetDirection(Stack[-4])
0x43f: Pop(0)
0x440: Push((float)7000.0)
0x441: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x442: Pop(1)
0x443: PushEmpty(cvector, float)
0x444: Stack[-1] = (float) 1.74533
0x445: Call2 0x3c9

0x446: Stack[-4] = Stack[-2]
0x447: Pop(2)
0x448: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x449: PushEmpty(bool)
0x44a: Stack[-1] = (bool) 0
0x44b: Push((float)2500.0)
0x44c: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x44e: PushEmpty(bool)
0x44f: Stack[-1] = (bool) 1
0x450: Pop(0); Push(Stack[-5] * Stack[-5]);
0x451: Push((float)2.25)
0x452: Pop(2); Push(Stack[-2] * Stack[-1]);
0x453: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x455: PushEmpty(bool)
0x456: Call2 0x474

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x459: Stack[-1] = (bool) 0
0x45a: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x45b: Stack[-1] = (bool) 1
0x45c: IF (Stack[-1] == 0) GOTO 0x463; Pop(1)

0x45d: @ Stop()
0x45e: Pop(0)
0x45f: PushEmpty(cvector)
0x460: Call2 0x1357

0x461: Pop(0)
0x462: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x463: Return(); Pop(8)

0x464: @ Stop()
0x465: Pop(0)
0x466: Push((int) 120)
0x467: @ KillTimer(Stack[-1])
0x468: Pop(1)
0x469: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x46a: Return(); Pop(0)

0x46b: PushEmpty()
0x46c: PushEmpty()
0x46d: Call2 0x464

0x46e: Pop(0)
0x46f: PushEmpty(object)
0x470: Stack[-1] = Stack[-2]
0x471: Call2 0x14f9

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x135c

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x14bd

0x480: Pop(2)
0x481: Push((float)-0.34202)
0x482: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x483: Return(); Pop(4)

0x484: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x485: @ GetPosition(Stack[-6])
0x486: Pop(0)
0x487: @@ GetPosition(Stack[-5])
0x488: Pop(0)
0x489: @ GetDirection(Stack[-4])
0x48a: Pop(0)
0x48b: PushEmpty(cvector, cvector)
0x48c: PushEmpty(cvector, cvector)
0x48d: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x48e: Call2 0x14ae

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x14ae

0x494: Stack[-5] = Stack[-2]
0x495: Pop(2)
0x496: Push((int) 32)
0x497: Push((float)7000.0)
0x498: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x499: Pop(2)
0x49a: Push((int) 100)
0x49b: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x49c: Push((int) 0)
0x49d: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x49e: IF (Stack[-1] == 0) GOTO 0x4a0; Pop(1)

0x49f: Stack[-1] = (int) 0
0x4a0: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x4a1: Return(); Pop(12)

0x4a2: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x4a3: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x4a4: PushEmpty(cvector, float)
0x4a5: Stack[-1] = (float) 1.74533
0x4a6: Call2 0x484

0x4a7: Stack[-7] = Stack[-2]
0x4a8: Pop(2)
0x4a9: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4aa: Push((float)2500.0)
0x4ab: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4ac: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4ad: PushEmpty(cvector, float)
0x4ae: Stack[-1] = (float) 2.61799
0x4af: Call2 0x484

0x4b0: Stack[-7] = Stack[-2]
0x4b1: Pop(2)
0x4b2: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x4b3: Push((float)2500.0)
0x4b4: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x4b5: IF (Stack[-1] == 0) GOTO 0x4bf; Pop(1)

0x4b6: Push("Can't retreat, distance: ")
0x4b7: Pop(0); Push(Sqrt(Stack[-5]))
0x4b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4b9: @ Trace(Stack[-1])
0x4ba: Pop(1)
0x4bb: Push((float)0.5)
0x4bc: @ Sleep(Stack[-1])
0x4bd: Pop(1)
0x4be: Return(); Pop(10)

0x4bf: Push(CvectorIndex(Stack[-5], 0))
0x4c0: Push(CvectorIndex(Stack[-6], 2))
0x4c1: @ Rotate(Stack[-2], Stack[-1])
0x4c2: Pop(2)
0x4c3: PushEmpty(cvector)
0x4c4: Call2 0x1357

0x4c5: Pop(0)
0x4c6: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x4c7: Push((int) 120)
0x4c8: Push((float)0.5)
0x4c9: @ SetTimer(Stack[-2], Stack[-1])
0x4ca: Pop(2)
0x4cb: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x4cc: Push((int) 1)
0x4cd: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x4ce: Pop(1)
0x4cf: Push(Stack[-3])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4d1: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d5; Pop(1)

0x4d3: GOTO 0x4ea

0x4d4: GOTO 0x4e8

0x4d5: PushEmpty(cvector, float)
0x4d6: Stack[-1] = (float) 2.61799
0x4d7: Call2 0x484

0x4d8: Stack[-4] = Stack[-2]
0x4d9: Pop(2)
0x4da: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x4db: Push((float)2500.0)
0x4dc: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x4dd: IF (Stack[-1] == 0) GOTO 0x4e7; Pop(1)

0x4de: PushEmpty(cvector)
0x4df: Call2 0x1357

0x4e0: Pop(0)
0x4e1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x4e2: Push((int) 120)
0x4e3: Push((float)0.5)
0x4e4: @ SetTimer(Stack[-2], Stack[-1])
0x4e5: Pop(2)
0x4e6: GOTO 0x4e8

0x4e7: GOTO 0x4ea

0x4e8: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4ea: Return(); Pop(10)

0x4eb: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x4ec: Push((int) 120)
0x4ed: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4ef: Return(); Pop(8)

0x4f0: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4f1: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f2: @ Stop()
0x4f3: Pop(0)
0x4f4: Push((int) 1)
0x4f5: @ KillTimer(Stack[-1])
0x4f6: Pop(1)
0x4f7: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x4f8: GOTO 0x51e

0x4f9: @ GetDirection(Stack[-4])
0x4fa: Pop(0)
0x4fb: Push((float)7000.0)
0x4fc: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x4fd: Pop(1)
0x4fe: PushEmpty(cvector, float)
0x4ff: Stack[-1] = (float) 1.74533
0x500: Call2 0x484

0x501: Stack[-4] = Stack[-2]
0x502: Pop(2)
0x503: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x504: PushEmpty(bool)
0x505: Stack[-1] = (bool) 0
0x506: Push((float)2500.0)
0x507: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x508: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x509: PushEmpty(bool)
0x50a: Stack[-1] = (bool) 1
0x50b: Pop(0); Push(Stack[-5] * Stack[-5]);
0x50c: Push((float)2.25)
0x50d: Pop(2); Push(Stack[-2] * Stack[-1]);
0x50e: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x50f: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x510: PushEmpty(bool)
0x511: Call2 0x52f

0x512: Pop(0)
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Stack[-1] = (bool) 0
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: Stack[-1] = (bool) 1
0x517: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x518: @ Stop()
0x519: Pop(0)
0x51a: PushEmpty(cvector)
0x51b: Call2 0x1357

0x51c: Pop(0)
0x51d: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x51e: Return(); Pop(8)

0x51f: @ Stop()
0x520: Pop(0)
0x521: Push((int) 120)
0x522: @ KillTimer(Stack[-1])
0x523: Pop(1)
0x524: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x525: Return(); Pop(0)

0x526: PushEmpty()
0x527: PushEmpty()
0x528: Call2 0x51f

0x529: Pop(0)
0x52a: PushEmpty(object)
0x52b: Stack[-1] = Stack[-2]
0x52c: Call2 0x14f9

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x135c

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x14bd

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x15df

0x544: Pop(0)
0x545: Return(); Pop(0)

0x546: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x547: @ GetPosition(Stack[-6])
0x548: Pop(0)
0x549: @@ GetPosition(Stack[-5])
0x54a: Pop(0)
0x54b: @ GetDirection(Stack[-4])
0x54c: Pop(0)
0x54d: PushEmpty(cvector, cvector)
0x54e: PushEmpty(cvector, cvector)
0x54f: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x550: Call2 0x14ae

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x14ae

0x556: Stack[-5] = Stack[-2]
0x557: Pop(2)
0x558: Push((int) 32)
0x559: Push((float)7000.0)
0x55a: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x55b: Pop(2)
0x55c: Push((int) 100)
0x55d: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x55e: Push((int) 0)
0x55f: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x560: IF (Stack[-1] == 0) GOTO 0x562; Pop(1)

0x561: Stack[-1] = (int) 0
0x562: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x563: Return(); Pop(12)

0x564: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x565: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x566: PushEmpty(cvector, float)
0x567: Stack[-1] = (float) 1.74533
0x568: Call2 0x546

0x569: Stack[-7] = Stack[-2]
0x56a: Pop(2)
0x56b: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x56c: Push((float)2500.0)
0x56d: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x56e: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56f: PushEmpty(cvector, float)
0x570: Stack[-1] = (float) 2.61799
0x571: Call2 0x546

0x572: Stack[-7] = Stack[-2]
0x573: Pop(2)
0x574: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x575: Push((float)2500.0)
0x576: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x577: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x578: Push("Can't retreat, distance: ")
0x579: Pop(0); Push(Sqrt(Stack[-5]))
0x57a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x57b: @ Trace(Stack[-1])
0x57c: Pop(1)
0x57d: Push((float)0.5)
0x57e: @ Sleep(Stack[-1])
0x57f: Pop(1)
0x580: Return(); Pop(10)

0x581: Push(CvectorIndex(Stack[-5], 0))
0x582: Push(CvectorIndex(Stack[-6], 2))
0x583: @ Rotate(Stack[-2], Stack[-1])
0x584: Pop(2)
0x585: PushEmpty(cvector)
0x586: Call2 0x1357

0x587: Pop(0)
0x588: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x589: Push((int) 120)
0x58a: Push((float)0.5)
0x58b: @ SetTimer(Stack[-2], Stack[-1])
0x58c: Pop(2)
0x58d: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x58e: Push((int) 1)
0x58f: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x590: Pop(1)
0x591: Push(Stack[-3])
0x592: IF (Stack[-1] == 0) GOTO 0x5aa; Pop(1)

0x593: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x594: IF (Stack[-1] == 0) GOTO 0x597; Pop(1)

0x595: GOTO 0x5ac

0x596: GOTO 0x5aa

0x597: PushEmpty(cvector, float)
0x598: Stack[-1] = (float) 2.61799
0x599: Call2 0x546

0x59a: Stack[-4] = Stack[-2]
0x59b: Pop(2)
0x59c: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x59d: Push((float)2500.0)
0x59e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5a9; Pop(1)

0x5a0: PushEmpty(cvector)
0x5a1: Call2 0x1357

0x5a2: Pop(0)
0x5a3: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5a4: Push((int) 120)
0x5a5: Push((float)0.5)
0x5a6: @ SetTimer(Stack[-2], Stack[-1])
0x5a7: Pop(2)
0x5a8: GOTO 0x5aa

0x5a9: GOTO 0x5ac

0x5aa: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x5ab: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x5ac: Return(); Pop(10)

0x5ad: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x5ae: Push((int) 120)
0x5af: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5b1: Return(); Pop(8)

0x5b2: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x5b3: IF (Stack[-1] == 0) GOTO 0x5bb; Pop(1)

0x5b4: @ Stop()
0x5b5: Pop(0)
0x5b6: Push((int) 1)
0x5b7: @ KillTimer(Stack[-1])
0x5b8: Pop(1)
0x5b9: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5ba: GOTO 0x5e0

0x5bb: @ GetDirection(Stack[-4])
0x5bc: Pop(0)
0x5bd: Push((float)7000.0)
0x5be: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x5bf: Pop(1)
0x5c0: PushEmpty(cvector, float)
0x5c1: Stack[-1] = (float) 1.74533
0x5c2: Call2 0x546

0x5c3: Stack[-4] = Stack[-2]
0x5c4: Pop(2)
0x5c5: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x5c6: PushEmpty(bool)
0x5c7: Stack[-1] = (bool) 0
0x5c8: Push((float)2500.0)
0x5c9: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5cb: PushEmpty(bool)
0x5cc: Stack[-1] = (bool) 1
0x5cd: Pop(0); Push(Stack[-5] * Stack[-5]);
0x5ce: Push((float)2.25)
0x5cf: Pop(2); Push(Stack[-2] * Stack[-1]);
0x5d0: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d2: PushEmpty(bool)
0x5d3: Call2 0x5f1

0x5d4: Pop(0)
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5d6: Stack[-1] = (bool) 0
0x5d7: IF (Stack[-1] == 0) GOTO 0x5d9; Pop(1)

0x5d8: Stack[-1] = (bool) 1
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5da: @ Stop()
0x5db: Pop(0)
0x5dc: PushEmpty(cvector)
0x5dd: Call2 0x1357

0x5de: Pop(0)
0x5df: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x5e0: Return(); Pop(8)

0x5e1: @ Stop()
0x5e2: Pop(0)
0x5e3: Push((int) 120)
0x5e4: @ KillTimer(Stack[-1])
0x5e5: Pop(1)
0x5e6: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x5e7: Return(); Pop(0)

0x5e8: PushEmpty()
0x5e9: PushEmpty()
0x5ea: Call2 0x5e1

0x5eb: Pop(0)
0x5ec: PushEmpty(object)
0x5ed: Stack[-1] = Stack[-2]
0x5ee: Call2 0x14f9

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x135c

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0x14bd

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x15df

0x606: Pop(0)
0x607: Return(); Pop(0)

0x608: PushEmpty(cvector, cvector, cvector, cvector, cvector, float, cvector, cvector, cvector, cvector, cvector, float)
0x609: @ GetPosition(Stack[-6])
0x60a: Pop(0)
0x60b: @@ GetPosition(Stack[-5])
0x60c: Pop(0)
0x60d: @ GetDirection(Stack[-4])
0x60e: Pop(0)
0x60f: PushEmpty(cvector, cvector)
0x610: PushEmpty(cvector, cvector)
0x611: Stack[-1] = Stack[-10] - Stack[-9]; Pop(0);
0x612: Call2 0x14ae

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x14ae

0x618: Stack[-5] = Stack[-2]
0x619: Pop(2)
0x61a: Push((int) 32)
0x61b: Push((float)7000.0)
0x61c: @ FindLongestDir(Stack[-4], Stack[-3], Stack[-5], Stack[-15], Stack[-2], Stack[-1])
0x61d: Pop(2)
0x61e: Push((int) 100)
0x61f: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x620: Push((int) 0)
0x621: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x622: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x623: Stack[-1] = (int) 0
0x624: Stack[-14] = Stack[-2] * Stack[-1]; Pop(0);
0x625: Return(); Pop(12)

0x626: PushEmpty(cvector, float, bool, cvector, float, cvector, float, bool, cvector, float)
0x627: Stack[0 + Tasks[-1].StackPointer] = Stack[-11]
0x628: PushEmpty(cvector, float)
0x629: Stack[-1] = (float) 1.74533
0x62a: Call2 0x608

0x62b: Stack[-7] = Stack[-2]
0x62c: Pop(2)
0x62d: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x62e: Push((float)2500.0)
0x62f: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x630: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x631: PushEmpty(cvector, float)
0x632: Stack[-1] = (float) 2.61799
0x633: Call2 0x608

0x634: Stack[-7] = Stack[-2]
0x635: Pop(2)
0x636: Stack[-4] = Stack[-5] | Stack[-5]; Pop(0);
0x637: Push((float)2500.0)
0x638: Pop(1); Push((bool) Stack[-5] < Stack[-1])
0x639: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x63a: Push("Can't retreat, distance: ")
0x63b: Pop(0); Push(Sqrt(Stack[-5]))
0x63c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x63d: @ Trace(Stack[-1])
0x63e: Pop(1)
0x63f: Push((float)0.5)
0x640: @ Sleep(Stack[-1])
0x641: Pop(1)
0x642: Return(); Pop(10)

0x643: Push(CvectorIndex(Stack[-5], 0))
0x644: Push(CvectorIndex(Stack[-6], 2))
0x645: @ Rotate(Stack[-2], Stack[-1])
0x646: Pop(2)
0x647: PushEmpty(cvector)
0x648: Call2 0x1357

0x649: Pop(0)
0x64a: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-6]; Pop(1);
0x64b: Push((int) 120)
0x64c: Push((float)0.5)
0x64d: @ SetTimer(Stack[-2], Stack[-1])
0x64e: Pop(2)
0x64f: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x650: Push((int) 1)
0x651: @ MovePoint(Stack[-1], Stack[-1], Stack[-4])
0x652: Pop(1)
0x653: Push(Stack[-3])
0x654: IF (Stack[-1] == 0) GOTO 0x66c; Pop(1)

0x655: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x656: IF (Stack[-1] == 0) GOTO 0x659; Pop(1)

0x657: GOTO 0x66e

0x658: GOTO 0x66c

0x659: PushEmpty(cvector, float)
0x65a: Stack[-1] = (float) 2.61799
0x65b: Call2 0x608

0x65c: Stack[-4] = Stack[-2]
0x65d: Pop(2)
0x65e: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x65f: Push((float)2500.0)
0x660: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x661: IF (Stack[-1] == 0) GOTO 0x66b; Pop(1)

0x662: PushEmpty(cvector)
0x663: Call2 0x1357

0x664: Pop(0)
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x666: Push((int) 120)
0x667: Push((float)0.5)
0x668: @ SetTimer(Stack[-2], Stack[-1])
0x669: Pop(2)
0x66a: GOTO 0x66c

0x66b: GOTO 0x66e

0x66c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x66d: IF (Stack[-1] == 0) GOTO 0x650; Pop(1)

0x66e: Return(); Pop(10)

0x66f: PushEmpty(cvector, float, cvector, float, cvector, float, cvector, float)
0x670: Push((int) 120)
0x671: Pop(1); Push((bool) Stack[-10] != Stack[-1])
0x672: IF (Stack[-1] == 0) GOTO 0x674; Pop(1)

0x673: Return(); Pop(8)

0x674: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x675: IF (Stack[-1] == 0) GOTO 0x67d; Pop(1)

0x676: @ Stop()
0x677: Pop(0)
0x678: Push((int) 1)
0x679: @ KillTimer(Stack[-1])
0x67a: Pop(1)
0x67b: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x67c: GOTO 0x6a2

0x67d: @ GetDirection(Stack[-4])
0x67e: Pop(0)
0x67f: Push((float)7000.0)
0x680: @ FindDirLength(Stack[-4], Stack[-5], Stack[-1])
0x681: Pop(1)
0x682: PushEmpty(cvector, float)
0x683: Stack[-1] = (float) 1.74533
0x684: Call2 0x608

0x685: Stack[-4] = Stack[-2]
0x686: Pop(2)
0x687: Stack[-1] = Stack[-2] | Stack[-2]; Pop(0);
0x688: PushEmpty(bool)
0x689: Stack[-1] = (bool) 0
0x68a: Push((float)2500.0)
0x68b: Pop(1); Push((bool) Stack[-3] >= Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x68d: PushEmpty(bool)
0x68e: Stack[-1] = (bool) 1
0x68f: Pop(0); Push(Stack[-5] * Stack[-5]);
0x690: Push((float)2.25)
0x691: Pop(2); Push(Stack[-2] * Stack[-1]);
0x692: Pop(1); Push((bool) Stack[-4] >= Stack[-1])
0x693: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x694: PushEmpty(bool)
0x695: Call2 0x6b3

0x696: Pop(0)
0x697: IF (Stack[-1] == 0) GOTO 0x699; Pop(1)

0x698: Stack[-1] = (bool) 0
0x699: IF (Stack[-1] == 0) GOTO 0x69b; Pop(1)

0x69a: Stack[-1] = (bool) 1
0x69b: IF (Stack[-1] == 0) GOTO 0x6a2; Pop(1)

0x69c: @ Stop()
0x69d: Pop(0)
0x69e: PushEmpty(cvector)
0x69f: Call2 0x1357

0x6a0: Pop(0)
0x6a1: Stack[1 + Tasks[-1].StackPointer] = Stack[-1] + Stack[-3]; Pop(1);
0x6a2: Return(); Pop(8)

0x6a3: @ Stop()
0x6a4: Pop(0)
0x6a5: Push((int) 120)
0x6a6: @ KillTimer(Stack[-1])
0x6a7: Pop(1)
0x6a8: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x6a9: Return(); Pop(0)

0x6aa: PushEmpty()
0x6ab: PushEmpty()
0x6ac: Call2 0x6a3

0x6ad: Pop(0)
0x6ae: PushEmpty(object)
0x6af: Stack[-1] = Stack[-2]
0x6b0: Call2 0x14f9

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x135c

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0x14bd

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x13cd

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x1789

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x1787

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x178b

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x178d

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x16ff

0x6e6: Pop(0)
0x6e7: @@ SetPlayerName(Stack[-1])
0x6e8: Pop(1)
0x6e9: Stack[-2] = (int) -1
0x6ea: @ IsOverrideActive(Stack[-3])
0x6eb: Pop(0)
0x6ec: Push(Stack[-3])
0x6ed: IF (Stack[-1] == 0) GOTO 0x6f0; Pop(1)

0x6ee: Stack[-10] = (int) -2
0x6ef: Return(); Pop(8)

0x6f0: @ DoDialog(Stack[-4])
0x6f1: Pop(0)
0x6f2: PushEmpty(object, object)
0x6f3: Stack[-2] = Stack[-11]
0x6f4: Stack[-1] = Stack[-6]
0x6f5: Push(-2, 4); TaskCall(9)
0x6f6: Call2 0x70d

0x6f7: Pop(-2, 4); TaskReturn
0x6f8: Pop(2)
0x6f9: @@ IsDialogEnd(Stack[-1])
0x6fa: Pop(0)
0x6fb: Pop(0); Push((bool) Stack[-1] == 0)
0x6fc: IF (Stack[-1] == 0) GOTO 0x702; Pop(1)

0x6fd: @ sync()
0x6fe: Pop(0)
0x6ff: @@ IsDialogEnd(Stack[-1])
0x700: Pop(0)
0x701: GOTO 0x6fb

0x702: PushEmpty(object)
0x703: Stack[-1] = Stack[-10]
0x704: Call2 0x1411

0x705: Pop(1)
0x706: @ StopDialog(Stack[-4])
0x707: Pop(0)
0x708: @@ GetReturnValue(Stack[-2])
0x709: Pop(0)
0x70a: Stack[-10] = Stack[-2]
0x70b: Return(); Pop(8)

0x70c: Stack[-4] = 0
0x70d: PushEmpty()
0x70e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x70f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x710: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x711: Push((int) 1)
0x712: IF (Stack[-1] == 0) GOTO 0x951; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x1627

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x96f

0x71b: Pop(1)
0x71c: Push((int) 543072)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool, object)
0x722: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x723: Call2 0x1633

0x724: Pop(1)
0x725: IF (Stack[-1] == 0) GOTO 0x72b; Pop(1)

0x726: Push((int) 543073)
0x727: Push((int) 45531)
0x728: Push((int) 45528)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: PushEmpty(bool, object)
0x72c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72d: Call2 0x163d

0x72e: Pop(1)
0x72f: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x730: Push((int) 543092)
0x731: Push((int) 45550)
0x732: Push((int) 45547)
0x733: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x734: Pop(3)
0x735: PushEmpty(bool)
0x736: Stack[-1] = (bool) 1
0x737: PushEmpty(bool, object)
0x738: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x739: Call2 0x1647

0x73a: Pop(1)
0x73b: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x73c: PushEmpty(bool, object)
0x73d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73e: Call2 0x166f

0x73f: Pop(1)
0x740: IF (Stack[-1] == 0) GOTO 0x742; Pop(1)

0x741: Stack[-1] = (bool) 0
0x742: IF (Stack[-1] == 0) GOTO 0x748; Pop(1)

0x743: Push((int) 543108)
0x744: Push((int) 45564)
0x745: Push((int) 45563)
0x746: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x747: Pop(3)
0x748: PushEmpty(bool, object)
0x749: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74a: Call2 0x1651

0x74b: Pop(1)
0x74c: IF (Stack[-1] == 0) GOTO 0x752; Pop(1)

0x74d: Push((int) 543101)
0x74e: Push((int) 45557)
0x74f: Push((int) 45556)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: PushEmpty(bool, object)
0x753: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x754: Call2 0x165b

0x755: Pop(1)
0x756: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x757: Push((int) 543117)
0x758: Push((int) 45573)
0x759: Push((int) 45572)
0x75a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75b: Pop(3)
0x75c: PushEmpty(bool, object)
0x75d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75e: Call2 0x1665

0x75f: Pop(1)
0x760: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x761: Push((int) 543127)
0x762: Push((int) 45583)
0x763: Push((int) 45582)
0x764: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x765: Pop(3)
0x766: PushEmpty(bool)
0x767: Stack[-1] = (bool) 1
0x768: PushEmpty(bool, object)
0x769: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76a: Call2 0x1679

0x76b: Pop(1)
0x76c: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x76d: PushEmpty(bool, object)
0x76e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76f: Call2 0x1683

0x770: Pop(1)
0x771: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x772: Stack[-1] = (bool) 0
0x773: IF (Stack[-1] == 0) GOTO 0x779; Pop(1)

0x774: Push((int) 543139)
0x775: Push((int) 45595)
0x776: Push((int) 45594)
0x777: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x778: Pop(3)
0x779: PushEmpty(bool, object)
0x77a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77b: Call2 0x1633

0x77c: Pop(1)
0x77d: IF (Stack[-1] == 0) GOTO 0x783; Pop(1)

0x77e: Push((int) 543075)
0x77f: Push((int) -1)
0x780: Push((int) 45530)
0x781: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x782: Pop(3)
0x783: PushEmpty(bool)
0x784: Stack[-1] = (bool) 1
0x785: PushEmpty(bool)
0x786: Stack[-1] = (bool) 1
0x787: PushEmpty(bool)
0x788: Stack[-1] = (bool) 1
0x789: PushEmpty(bool, object)
0x78a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78b: Call2 0x163d

0x78c: Pop(1)
0x78d: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x78e: PushEmpty(bool, object)
0x78f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x790: Call2 0x1647

0x791: Pop(1)
0x792: IF (Stack[-1] == 0) GOTO 0x794; Pop(1)

0x793: Stack[-1] = (bool) 0
0x794: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x795: PushEmpty(bool, object)
0x796: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x797: Call2 0x1651

0x798: Pop(1)
0x799: IF (Stack[-1] == 0) GOTO 0x79b; Pop(1)

0x79a: Stack[-1] = (bool) 0
0x79b: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x79c: PushEmpty(bool, object)
0x79d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79e: Call2 0x165b

0x79f: Pop(1)
0x7a0: IF (Stack[-1] == 0) GOTO 0x7a2; Pop(1)

0x7a1: Stack[-1] = (bool) 0
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a3: Push((int) 543100)
0x7a4: Push((int) -1)
0x7a5: Push((int) 45555)
0x7a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a7: Pop(3)
0x7a8: PushEmpty(bool, object)
0x7a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7aa: Call2 0x1665

0x7ab: Pop(1)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x7ad: Push((int) 543125)
0x7ae: Push((int) -1)
0x7af: Push((int) 45580)
0x7b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b1: Pop(3)
0x7b2: PushEmpty(bool)
0x7b3: Stack[-1] = (bool) 1
0x7b4: PushEmpty(bool)
0x7b5: Stack[-1] = (bool) 1
0x7b6: PushEmpty(bool, object)
0x7b7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b8: Call2 0x166f

0x7b9: Pop(1)
0x7ba: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7bb: PushEmpty(bool, object)
0x7bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bd: Call2 0x1679

0x7be: Pop(1)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c1; Pop(1)

0x7c0: Stack[-1] = (bool) 0
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c2: PushEmpty(bool, object)
0x7c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c4: Call2 0x1683

0x7c5: Pop(1)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c7: Stack[-1] = (bool) 0
0x7c8: IF (Stack[-1] == 0) GOTO 0x7ce; Pop(1)

0x7c9: Push((int) 543147)
0x7ca: Push((int) -1)
0x7cb: Push((int) 45602)
0x7cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cd: Pop(3)
0x7ce: PushEmpty(bool)
0x7cf: Stack[-1] = (bool) 1
0x7d0: PushEmpty(bool)
0x7d1: Stack[-1] = (bool) 1
0x7d2: PushEmpty(bool, object)
0x7d3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d4: Call2 0x168d

0x7d5: Pop(1)
0x7d6: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7d7: PushEmpty(bool, object)
0x7d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d9: Call2 0x1697

0x7da: Pop(1)
0x7db: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7dc: Stack[-1] = (bool) 0
0x7dd: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7de: PushEmpty(bool, object)
0x7df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e0: Call2 0x16a1

0x7e1: Pop(1)
0x7e2: IF (Stack[-1] == 0) GOTO 0x7e4; Pop(1)

0x7e3: Stack[-1] = (bool) 0
0x7e4: IF (Stack[-1] == 0) GOTO 0x7ea; Pop(1)

0x7e5: Push((int) 543148)
0x7e6: Push((int) -1)
0x7e7: Push((int) 45603)
0x7e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e9: Pop(3)
0x7ea: PushEmpty(bool, object)
0x7eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ec: Call2 0x1633

0x7ed: Pop(1)
0x7ee: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ef: Push((int) 543074)
0x7f0: Push((int) -1)
0x7f1: Push((int) 45529)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: PushEmpty(bool)
0x7f5: Stack[-1] = (bool) 1
0x7f6: PushEmpty(bool, object)
0x7f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f8: Call2 0x163d

0x7f9: Pop(1)
0x7fa: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7fb: PushEmpty(bool, object)
0x7fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7fd: Call2 0x1647

0x7fe: Pop(1)
0x7ff: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x800: Stack[-1] = (bool) 0
0x801: IF (Stack[-1] == 0) GOTO 0x807; Pop(1)

0x802: Push((int) 543090)
0x803: Push((int) -1)
0x804: Push((int) 45545)
0x805: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x806: Pop(3)
0x807: PushEmpty(bool)
0x808: Stack[-1] = (bool) 1
0x809: PushEmpty(bool, object)
0x80a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80b: Call2 0x163d

0x80c: Pop(1)
0x80d: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x80e: PushEmpty(bool, object)
0x80f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x810: Call2 0x1647

0x811: Pop(1)
0x812: IF (Stack[-1] == 0) GOTO 0x814; Pop(1)

0x813: Stack[-1] = (bool) 0
0x814: IF (Stack[-1] == 0) GOTO 0x81a; Pop(1)

0x815: Push((int) 543099)
0x816: Push((int) -1)
0x817: Push((int) 45554)
0x818: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x819: Pop(3)
0x81a: PushEmpty(bool)
0x81b: Stack[-1] = (bool) 1
0x81c: PushEmpty(bool, object)
0x81d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81e: Call2 0x1665

0x81f: Pop(1)
0x820: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x821: PushEmpty(bool, object)
0x822: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x823: Call2 0x1683

0x824: Pop(1)
0x825: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x826: Stack[-1] = (bool) 0
0x827: IF (Stack[-1] == 0) GOTO 0x82d; Pop(1)

0x828: Push((int) 543126)
0x829: Push((int) -1)
0x82a: Push((int) 45581)
0x82b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(3)
0x82d: PushEmpty(bool)
0x82e: Stack[-1] = (bool) 1
0x82f: PushEmpty(bool)
0x830: Stack[-1] = (bool) 1
0x831: PushEmpty(bool)
0x832: Stack[-1] = (bool) 1
0x833: PushEmpty(bool, object)
0x834: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x835: Call2 0x166f

0x836: Pop(1)
0x837: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x838: PushEmpty(bool, object)
0x839: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83a: Call2 0x1679

0x83b: Pop(1)
0x83c: IF (Stack[-1] == 0) GOTO 0x83e; Pop(1)

0x83d: Stack[-1] = (bool) 0
0x83e: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x83f: PushEmpty(bool, object)
0x840: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x841: Call2 0x168d

0x842: Pop(1)
0x843: IF (Stack[-1] == 0) GOTO 0x845; Pop(1)

0x844: Stack[-1] = (bool) 0
0x845: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x846: PushEmpty(bool, object)
0x847: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x848: Call2 0x16a1

0x849: Pop(1)
0x84a: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x84b: Stack[-1] = (bool) 0
0x84c: IF (Stack[-1] == 0) GOTO 0x852; Pop(1)

0x84d: Push((int) 543149)
0x84e: Push((int) -1)
0x84f: Push((int) 45604)
0x850: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x851: Pop(3)
0x852: PushEmpty(bool)
0x853: Stack[-1] = (bool) 1
0x854: PushEmpty(bool)
0x855: Stack[-1] = (bool) 1
0x856: PushEmpty(bool)
0x857: Stack[-1] = (bool) 1
0x858: PushEmpty(bool)
0x859: Stack[-1] = (bool) 1
0x85a: PushEmpty(bool, object)
0x85b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85c: Call2 0x1651

0x85d: Pop(1)
0x85e: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x85f: PushEmpty(bool, object)
0x860: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x861: Call2 0x165b

0x862: Pop(1)
0x863: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x864: Stack[-1] = (bool) 0
0x865: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x866: PushEmpty(bool, object)
0x867: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x868: Call2 0x1683

0x869: Pop(1)
0x86a: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x86b: Stack[-1] = (bool) 0
0x86c: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x86d: PushEmpty(bool, object)
0x86e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86f: Call2 0x1697

0x870: Pop(1)
0x871: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x872: Stack[-1] = (bool) 0
0x873: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x874: PushEmpty(bool, object)
0x875: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x876: Call2 0x16a1

0x877: Pop(1)
0x878: IF (Stack[-1] == 0) GOTO 0x87a; Pop(1)

0x879: Stack[-1] = (bool) 0
0x87a: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87b: Push((int) 543150)
0x87c: Push((int) -1)
0x87d: Push((int) 45605)
0x87e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87f: Pop(3)
0x880: GOTO 0x951

0x881: PushEmpty(string)
0x882: Stack[-1] = "Neutral"
0x883: Call2 0x96f

0x884: Pop(1)
0x885: Push((int) 536854)
0x886: @@ SetMessage(Stack[-1])
0x887: Pop(1)
0x888: @@ ClearReplies()
0x889: Pop(0)
0x88a: Push((int) 536855)
0x88b: Push((int) -1)
0x88c: Push((int) 38691)
0x88d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88e: Pop(3)
0x88f: PushEmpty(bool, object)
0x890: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x891: Call2 0x1633

0x892: Pop(1)
0x893: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x894: Push((int) 536856)
0x895: Push((int) 38693)
0x896: Push((int) 38692)
0x897: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x898: Pop(3)
0x899: PushEmpty(bool, object)
0x89a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89b: Call2 0x1633

0x89c: Pop(1)
0x89d: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x89e: Push((int) 536870)
0x89f: Push((int) 38709)
0x8a0: Push((int) 38708)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: PushEmpty(bool, object)
0x8a4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a5: Call2 0x163d

0x8a6: Pop(1)
0x8a7: IF (Stack[-1] == 0) GOTO 0x8ad; Pop(1)

0x8a8: Push((int) 536885)
0x8a9: Push((int) 38724)
0x8aa: Push((int) 38723)
0x8ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ac: Pop(3)
0x8ad: PushEmpty(bool, object)
0x8ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8af: Call2 0x1647

0x8b0: Pop(1)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8b2: Push((int) 536904)
0x8b3: Push((int) 38743)
0x8b4: Push((int) 38742)
0x8b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b6: Pop(3)
0x8b7: PushEmpty(bool, object)
0x8b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b9: Call2 0x1651

0x8ba: Pop(1)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8c1; Pop(1)

0x8bc: Push((int) 536916)
0x8bd: Push((int) 38755)
0x8be: Push((int) 38754)
0x8bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c0: Pop(3)
0x8c1: PushEmpty(bool)
0x8c2: Stack[-1] = (bool) 0
0x8c3: PushEmpty(bool, object)
0x8c4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c5: Call2 0x1665

0x8c6: Pop(1)
0x8c7: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8c8: PushEmpty(bool, object)
0x8c9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ca: Call2 0x161b

0x8cb: Pop(1)
0x8cc: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8cd: Stack[-1] = (bool) 1
0x8ce: IF (Stack[-1] == 0) GOTO 0x8d4; Pop(1)

0x8cf: Push((int) 536931)
0x8d0: Push((int) 38770)
0x8d1: Push((int) 38769)
0x8d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d3: Pop(3)
0x8d4: PushEmpty(bool, object)
0x8d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d6: Call2 0x1679

0x8d7: Pop(1)
0x8d8: IF (Stack[-1] == 0) GOTO 0x8de; Pop(1)

0x8d9: Push((int) 536943)
0x8da: Push((int) 38782)
0x8db: Push((int) 38781)
0x8dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dd: Pop(3)
0x8de: PushEmpty(bool, object)
0x8df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e0: Call2 0x1683

0x8e1: Pop(1)
0x8e2: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e3: Push((int) 536961)
0x8e4: Push((int) 38800)
0x8e5: Push((int) 38799)
0x8e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e7: Pop(3)
0x8e8: PushEmpty(bool, object)
0x8e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ea: Call2 0x168d

0x8eb: Pop(1)
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8ed: Push((int) 536978)
0x8ee: Push((int) 38817)
0x8ef: Push((int) 38816)
0x8f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f1: Pop(3)
0x8f2: PushEmpty(bool)
0x8f3: Stack[-1] = (bool) 0
0x8f4: PushEmpty(bool, object)
0x8f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f6: Call2 0x1697

0x8f7: Pop(1)
0x8f8: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8f9: PushEmpty(bool, object)
0x8fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fb: Call2 0x161b

0x8fc: Pop(1)
0x8fd: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fe: Stack[-1] = (bool) 1
0x8ff: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x900: Push((int) 536993)
0x901: Push((int) 38832)
0x902: Push((int) 38831)
0x903: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x904: Pop(3)
0x905: PushEmpty(bool)
0x906: Stack[-1] = (bool) 0
0x907: PushEmpty(bool, object)
0x908: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x909: Call2 0x1633

0x90a: Pop(1)
0x90b: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90c: PushEmpty(bool, object)
0x90d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90e: Call2 0x161b

0x90f: Pop(1)
0x910: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x911: Stack[-1] = (bool) 1
0x912: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x913: Push((int) 537006)
0x914: Push((int) 38846)
0x915: Push((int) 38845)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: PushEmpty(bool)
0x919: Stack[-1] = (bool) 0
0x91a: PushEmpty(bool, object)
0x91b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91c: Call2 0x1633

0x91d: Pop(1)
0x91e: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x91f: PushEmpty(bool, object)
0x920: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x921: Call2 0x161b

0x922: Pop(1)
0x923: IF (Stack[-1] == 0) GOTO 0x925; Pop(1)

0x924: Stack[-1] = (bool) 1
0x925: IF (Stack[-1] == 0) GOTO 0x92b; Pop(1)

0x926: Push((int) 537017)
0x927: Push((int) 38857)
0x928: Push((int) 38856)
0x929: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92a: Pop(3)
0x92b: PushEmpty(bool, object)
0x92c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92d: Call2 0x1633

0x92e: Pop(1)
0x92f: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x930: Push((int) 537025)
0x931: Push((int) 38865)
0x932: Push((int) 38864)
0x933: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x934: Pop(3)
0x935: PushEmpty(bool, object)
0x936: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x937: Call2 0x1633

0x938: Pop(1)
0x939: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93a: Push((int) 537035)
0x93b: Push((int) 38875)
0x93c: Push((int) 38874)
0x93d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93e: Pop(3)
0x93f: PushEmpty(bool, object)
0x940: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x941: Call2 0x1633

0x942: Pop(1)
0x943: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x944: Push((int) 537044)
0x945: Push((int) 38884)
0x946: Push((int) 38883)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Push((int) 537050)
0x94a: Push((int) -1)
0x94b: Push((int) 38889)
0x94c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94d: Pop(3)
0x94e: GOTO 0x951

0x94f: Return(); Pop(0)

0x950: GOTO 0x711

0x951: PushEmpty(bool)
0x952: Call2 0x178f

0x953: Pop(0)
0x954: IF (Stack[-1] == 0) GOTO 0x960; Pop(1)

0x955: @ lshWaitForAnimEnd()
0x956: Pop(0)
0x957: Push( Stack[3 + Tasks[-1].StackPointer] )
0x958: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x959: GOTO 0x95f

0x95a: PushEmpty(string)
0x95b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x95c: Call2 0x145d

0x95d: Pop(1)
0x95e: GOTO 0x955

0x95f: GOTO 0x96e

0x960: Push("all")
0x961: Push("idle")
0x962: @ PlayAnimation(Stack[-2], Stack[-1])
0x963: Pop(2)
0x964: @ WaitForAnimEnd()
0x965: Pop(0)
0x966: Push( Stack[3 + Tasks[-1].StackPointer] )
0x967: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x968: GOTO 0x96e

0x969: Push("all")
0x96a: Push("idle")
0x96b: @ PlayAnimation(Stack[-2], Stack[-1])
0x96c: Pop(2)
0x96d: GOTO 0x964

0x96e: Return(); Pop(0)

0x96f: PushEmpty()
0x970: PushEmpty(bool)
0x971: Call2 0x178f

0x972: Pop(0)
0x973: Pop(1); Push((bool) Stack[-1] == 0)
0x974: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x975: Return(); Pop(0)

0x976: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x977: IF (Stack[-1] == 0) GOTO 0x979; Pop(1)

0x978: Return(); Pop(0)

0x979: PushEmpty(string, bool)
0x97a: Stack[-2] = Stack[-3]
0x97b: Push("")
0x97c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x97d: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x97e: Stack[-1] = (bool) 0
0x97f: GOTO 0x981

0x980: Stack[-1] = (bool) 1
0x981: Call2 0x146d

0x982: Pop(2)
0x983: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x984: Return(); Pop(0)

0x985: PushEmpty()
0x986: Push((int) 1)
0x987: IF (Stack[-1] == 0) GOTO 0x1356; Pop(1)

0x988: PushEmpty()
0x989: Call2 0x1487

0x98a: Pop(0)
0x98b: Push((int) 45532)
0x98c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x98d: IF (Stack[-1] == 0) GOTO 0x993; Pop(1)

0x98e: PushEmpty(object, object)
0x98f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x990: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x991: Call2 0x1616

0x992: Pop(2)
0x993: Push((int) 45530)
0x994: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x995: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x996: PushEmpty(object, object)
0x997: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x998: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x999: Call2 0x1616

0x99a: Pop(2)
0x99b: Push((int) 45555)
0x99c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x99d: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x99e: PushEmpty(object, object)
0x99f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a1: Call2 0x1616

0x9a2: Pop(2)
0x9a3: Push((int) 45580)
0x9a4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9a5: IF (Stack[-1] == 0) GOTO 0x9ab; Pop(1)

0x9a6: PushEmpty(object, object)
0x9a7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9a9: Call2 0x1616

0x9aa: Pop(2)
0x9ab: Push((int) 45602)
0x9ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9ae: PushEmpty(object, object)
0x9af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b1: Call2 0x1616

0x9b2: Pop(2)
0x9b3: Push((int) 45603)
0x9b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b5: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b6: PushEmpty(object, object)
0x9b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b9: Call2 0x1616

0x9ba: Pop(2)
0x9bb: Push((int) 38691)
0x9bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9be: PushEmpty(object, object)
0x9bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c1: Call2 0x1616

0x9c2: Pop(2)
0x9c3: Push((int) 45527)
0x9c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0x9c6: PushEmpty(bool, object)
0x9c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c8: Call2 0x1627

0x9c9: Pop(1)
0x9ca: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0x9cb: PushEmpty(string)
0x9cc: Stack[-1] = "Neutral"
0x9cd: Call2 0x96f

0x9ce: Pop(1)
0x9cf: Push((int) 543072)
0x9d0: @@ SetMessage(Stack[-1])
0x9d1: Pop(1)
0x9d2: @@ ClearReplies()
0x9d3: Pop(0)
0x9d4: PushEmpty(bool, object)
0x9d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9d6: Call2 0x1633

0x9d7: Pop(1)
0x9d8: IF (Stack[-1] == 0) GOTO 0x9de; Pop(1)

0x9d9: Push((int) 543073)
0x9da: Push((int) 45531)
0x9db: Push((int) 45528)
0x9dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9dd: Pop(3)
0x9de: PushEmpty(bool, object)
0x9df: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e0: Call2 0x163d

0x9e1: Pop(1)
0x9e2: IF (Stack[-1] == 0) GOTO 0x9e8; Pop(1)

0x9e3: Push((int) 543092)
0x9e4: Push((int) 45550)
0x9e5: Push((int) 45547)
0x9e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e7: Pop(3)
0x9e8: PushEmpty(bool)
0x9e9: Stack[-1] = (bool) 1
0x9ea: PushEmpty(bool, object)
0x9eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9ec: Call2 0x1647

0x9ed: Pop(1)
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9ef: PushEmpty(bool, object)
0x9f0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f1: Call2 0x166f

0x9f2: Pop(1)
0x9f3: IF (Stack[-1] == 0) GOTO 0x9f5; Pop(1)

0x9f4: Stack[-1] = (bool) 0
0x9f5: IF (Stack[-1] == 0) GOTO 0x9fb; Pop(1)

0x9f6: Push((int) 543108)
0x9f7: Push((int) 45564)
0x9f8: Push((int) 45563)
0x9f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fa: Pop(3)
0x9fb: PushEmpty(bool, object)
0x9fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fd: Call2 0x1651

0x9fe: Pop(1)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa05; Pop(1)

0xa00: Push((int) 543101)
0xa01: Push((int) 45557)
0xa02: Push((int) 45556)
0xa03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa04: Pop(3)
0xa05: PushEmpty(bool, object)
0xa06: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa07: Call2 0x165b

0xa08: Pop(1)
0xa09: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0a: Push((int) 543117)
0xa0b: Push((int) 45573)
0xa0c: Push((int) 45572)
0xa0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa0e: Pop(3)
0xa0f: PushEmpty(bool, object)
0xa10: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa11: Call2 0x1665

0xa12: Pop(1)
0xa13: IF (Stack[-1] == 0) GOTO 0xa19; Pop(1)

0xa14: Push((int) 543127)
0xa15: Push((int) 45583)
0xa16: Push((int) 45582)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: PushEmpty(bool)
0xa1a: Stack[-1] = (bool) 1
0xa1b: PushEmpty(bool, object)
0xa1c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1d: Call2 0x1679

0xa1e: Pop(1)
0xa1f: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa20: PushEmpty(bool, object)
0xa21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa22: Call2 0x1683

0xa23: Pop(1)
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (bool) 0
0xa26: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa27: Push((int) 543139)
0xa28: Push((int) 45595)
0xa29: Push((int) 45594)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: PushEmpty(bool, object)
0xa2d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2e: Call2 0x1633

0xa2f: Pop(1)
0xa30: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa31: Push((int) 543075)
0xa32: Push((int) -1)
0xa33: Push((int) 45530)
0xa34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa35: Pop(3)
0xa36: PushEmpty(bool)
0xa37: Stack[-1] = (bool) 1
0xa38: PushEmpty(bool)
0xa39: Stack[-1] = (bool) 1
0xa3a: PushEmpty(bool)
0xa3b: Stack[-1] = (bool) 1
0xa3c: PushEmpty(bool, object)
0xa3d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa3e: Call2 0x163d

0xa3f: Pop(1)
0xa40: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa41: PushEmpty(bool, object)
0xa42: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa43: Call2 0x1647

0xa44: Pop(1)
0xa45: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa46: Stack[-1] = (bool) 0
0xa47: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa48: PushEmpty(bool, object)
0xa49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Call2 0x1651

0xa4b: Pop(1)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: Stack[-1] = (bool) 0
0xa4e: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa4f: PushEmpty(bool, object)
0xa50: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa51: Call2 0x165b

0xa52: Pop(1)
0xa53: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa54: Stack[-1] = (bool) 0
0xa55: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa56: Push((int) 543100)
0xa57: Push((int) -1)
0xa58: Push((int) 45555)
0xa59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5a: Pop(3)
0xa5b: PushEmpty(bool, object)
0xa5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5d: Call2 0x1665

0xa5e: Pop(1)
0xa5f: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa60: Push((int) 543125)
0xa61: Push((int) -1)
0xa62: Push((int) 45580)
0xa63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa64: Pop(3)
0xa65: PushEmpty(bool)
0xa66: Stack[-1] = (bool) 1
0xa67: PushEmpty(bool)
0xa68: Stack[-1] = (bool) 1
0xa69: PushEmpty(bool, object)
0xa6a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6b: Call2 0x166f

0xa6c: Pop(1)
0xa6d: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa6e: PushEmpty(bool, object)
0xa6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa70: Call2 0x1679

0xa71: Pop(1)
0xa72: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa73: Stack[-1] = (bool) 0
0xa74: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa75: PushEmpty(bool, object)
0xa76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa77: Call2 0x1683

0xa78: Pop(1)
0xa79: IF (Stack[-1] == 0) GOTO 0xa7b; Pop(1)

0xa7a: Stack[-1] = (bool) 0
0xa7b: IF (Stack[-1] == 0) GOTO 0xa81; Pop(1)

0xa7c: Push((int) 543147)
0xa7d: Push((int) -1)
0xa7e: Push((int) 45602)
0xa7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa80: Pop(3)
0xa81: PushEmpty(bool)
0xa82: Stack[-1] = (bool) 1
0xa83: PushEmpty(bool)
0xa84: Stack[-1] = (bool) 1
0xa85: PushEmpty(bool, object)
0xa86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa87: Call2 0x168d

0xa88: Pop(1)
0xa89: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8a: PushEmpty(bool, object)
0xa8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8c: Call2 0x1697

0xa8d: Pop(1)
0xa8e: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8f: Stack[-1] = (bool) 0
0xa90: IF (Stack[-1] == 0) GOTO 0xa97; Pop(1)

0xa91: PushEmpty(bool, object)
0xa92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa93: Call2 0x16a1

0xa94: Pop(1)
0xa95: IF (Stack[-1] == 0) GOTO 0xa97; Pop(1)

0xa96: Stack[-1] = (bool) 0
0xa97: IF (Stack[-1] == 0) GOTO 0xa9d; Pop(1)

0xa98: Push((int) 543148)
0xa99: Push((int) -1)
0xa9a: Push((int) 45603)
0xa9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9c: Pop(3)
0xa9d: PushEmpty(bool, object)
0xa9e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9f: Call2 0x1633

0xaa0: Pop(1)
0xaa1: IF (Stack[-1] == 0) GOTO 0xaa7; Pop(1)

0xaa2: Push((int) 543074)
0xaa3: Push((int) -1)
0xaa4: Push((int) 45529)
0xaa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa6: Pop(3)
0xaa7: PushEmpty(bool)
0xaa8: Stack[-1] = (bool) 1
0xaa9: PushEmpty(bool, object)
0xaaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaab: Call2 0x163d

0xaac: Pop(1)
0xaad: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xaae: PushEmpty(bool, object)
0xaaf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab0: Call2 0x1647

0xab1: Pop(1)
0xab2: IF (Stack[-1] == 0) GOTO 0xab4; Pop(1)

0xab3: Stack[-1] = (bool) 0
0xab4: IF (Stack[-1] == 0) GOTO 0xaba; Pop(1)

0xab5: Push((int) 543090)
0xab6: Push((int) -1)
0xab7: Push((int) 45545)
0xab8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab9: Pop(3)
0xaba: PushEmpty(bool)
0xabb: Stack[-1] = (bool) 1
0xabc: PushEmpty(bool, object)
0xabd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xabe: Call2 0x163d

0xabf: Pop(1)
0xac0: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac1: PushEmpty(bool, object)
0xac2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac3: Call2 0x1647

0xac4: Pop(1)
0xac5: IF (Stack[-1] == 0) GOTO 0xac7; Pop(1)

0xac6: Stack[-1] = (bool) 0
0xac7: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xac8: Push((int) 543099)
0xac9: Push((int) -1)
0xaca: Push((int) 45554)
0xacb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacc: Pop(3)
0xacd: PushEmpty(bool)
0xace: Stack[-1] = (bool) 1
0xacf: PushEmpty(bool, object)
0xad0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad1: Call2 0x1665

0xad2: Pop(1)
0xad3: IF (Stack[-1] == 0) GOTO 0xada; Pop(1)

0xad4: PushEmpty(bool, object)
0xad5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad6: Call2 0x1683

0xad7: Pop(1)
0xad8: IF (Stack[-1] == 0) GOTO 0xada; Pop(1)

0xad9: Stack[-1] = (bool) 0
0xada: IF (Stack[-1] == 0) GOTO 0xae0; Pop(1)

0xadb: Push((int) 543126)
0xadc: Push((int) -1)
0xadd: Push((int) 45581)
0xade: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xadf: Pop(3)
0xae0: PushEmpty(bool)
0xae1: Stack[-1] = (bool) 1
0xae2: PushEmpty(bool)
0xae3: Stack[-1] = (bool) 1
0xae4: PushEmpty(bool)
0xae5: Stack[-1] = (bool) 1
0xae6: PushEmpty(bool, object)
0xae7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae8: Call2 0x166f

0xae9: Pop(1)
0xaea: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaeb: PushEmpty(bool, object)
0xaec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaed: Call2 0x1679

0xaee: Pop(1)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaf0: Stack[-1] = (bool) 0
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf2: PushEmpty(bool, object)
0xaf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf4: Call2 0x168d

0xaf5: Pop(1)
0xaf6: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf7: Stack[-1] = (bool) 0
0xaf8: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xaf9: PushEmpty(bool, object)
0xafa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xafb: Call2 0x16a1

0xafc: Pop(1)
0xafd: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xafe: Stack[-1] = (bool) 0
0xaff: IF (Stack[-1] == 0) GOTO 0xb05; Pop(1)

0xb00: Push((int) 543149)
0xb01: Push((int) -1)
0xb02: Push((int) 45604)
0xb03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb04: Pop(3)
0xb05: PushEmpty(bool)
0xb06: Stack[-1] = (bool) 1
0xb07: PushEmpty(bool)
0xb08: Stack[-1] = (bool) 1
0xb09: PushEmpty(bool)
0xb0a: Stack[-1] = (bool) 1
0xb0b: PushEmpty(bool)
0xb0c: Stack[-1] = (bool) 1
0xb0d: PushEmpty(bool, object)
0xb0e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb0f: Call2 0x1651

0xb10: Pop(1)
0xb11: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb12: PushEmpty(bool, object)
0xb13: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb14: Call2 0x165b

0xb15: Pop(1)
0xb16: IF (Stack[-1] == 0) GOTO 0xb18; Pop(1)

0xb17: Stack[-1] = (bool) 0
0xb18: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb19: PushEmpty(bool, object)
0xb1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1b: Call2 0x1683

0xb1c: Pop(1)
0xb1d: IF (Stack[-1] == 0) GOTO 0xb1f; Pop(1)

0xb1e: Stack[-1] = (bool) 0
0xb1f: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb20: PushEmpty(bool, object)
0xb21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb22: Call2 0x1697

0xb23: Pop(1)
0xb24: IF (Stack[-1] == 0) GOTO 0xb26; Pop(1)

0xb25: Stack[-1] = (bool) 0
0xb26: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb27: PushEmpty(bool, object)
0xb28: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb29: Call2 0x16a1

0xb2a: Pop(1)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2c: Stack[-1] = (bool) 0
0xb2d: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb2e: Push((int) 543150)
0xb2f: Push((int) -1)
0xb30: Push((int) 45605)
0xb31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb32: Pop(3)
0xb33: Return(); Pop(0)

0xb34: PushEmpty(string)
0xb35: Stack[-1] = "Neutral"
0xb36: Call2 0x96f

0xb37: Pop(1)
0xb38: Push((int) 536854)
0xb39: @@ SetMessage(Stack[-1])
0xb3a: Pop(1)
0xb3b: @@ ClearReplies()
0xb3c: Pop(0)
0xb3d: Push((int) 536855)
0xb3e: Push((int) -1)
0xb3f: Push((int) 38691)
0xb40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb41: Pop(3)
0xb42: PushEmpty(bool, object)
0xb43: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb44: Call2 0x1633

0xb45: Pop(1)
0xb46: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb47: Push((int) 536856)
0xb48: Push((int) 38693)
0xb49: Push((int) 38692)
0xb4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4b: Pop(3)
0xb4c: PushEmpty(bool, object)
0xb4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4e: Call2 0x1633

0xb4f: Pop(1)
0xb50: IF (Stack[-1] == 0) GOTO 0xb56; Pop(1)

0xb51: Push((int) 536870)
0xb52: Push((int) 38709)
0xb53: Push((int) 38708)
0xb54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb55: Pop(3)
0xb56: PushEmpty(bool, object)
0xb57: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb58: Call2 0x163d

0xb59: Pop(1)
0xb5a: IF (Stack[-1] == 0) GOTO 0xb60; Pop(1)

0xb5b: Push((int) 536885)
0xb5c: Push((int) 38724)
0xb5d: Push((int) 38723)
0xb5e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5f: Pop(3)
0xb60: PushEmpty(bool, object)
0xb61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb62: Call2 0x1647

0xb63: Pop(1)
0xb64: IF (Stack[-1] == 0) GOTO 0xb6a; Pop(1)

0xb65: Push((int) 536904)
0xb66: Push((int) 38743)
0xb67: Push((int) 38742)
0xb68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb69: Pop(3)
0xb6a: PushEmpty(bool, object)
0xb6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6c: Call2 0x1651

0xb6d: Pop(1)
0xb6e: IF (Stack[-1] == 0) GOTO 0xb74; Pop(1)

0xb6f: Push((int) 536916)
0xb70: Push((int) 38755)
0xb71: Push((int) 38754)
0xb72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb73: Pop(3)
0xb74: PushEmpty(bool)
0xb75: Stack[-1] = (bool) 0
0xb76: PushEmpty(bool, object)
0xb77: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb78: Call2 0x1665

0xb79: Pop(1)
0xb7a: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7b: PushEmpty(bool, object)
0xb7c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb7d: Call2 0x161b

0xb7e: Pop(1)
0xb7f: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb80: Stack[-1] = (bool) 1
0xb81: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb82: Push((int) 536931)
0xb83: Push((int) 38770)
0xb84: Push((int) 38769)
0xb85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb86: Pop(3)
0xb87: PushEmpty(bool, object)
0xb88: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb89: Call2 0x1679

0xb8a: Pop(1)
0xb8b: IF (Stack[-1] == 0) GOTO 0xb91; Pop(1)

0xb8c: Push((int) 536943)
0xb8d: Push((int) 38782)
0xb8e: Push((int) 38781)
0xb8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb90: Pop(3)
0xb91: PushEmpty(bool, object)
0xb92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb93: Call2 0x1683

0xb94: Pop(1)
0xb95: IF (Stack[-1] == 0) GOTO 0xb9b; Pop(1)

0xb96: Push((int) 536961)
0xb97: Push((int) 38800)
0xb98: Push((int) 38799)
0xb99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9a: Pop(3)
0xb9b: PushEmpty(bool, object)
0xb9c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9d: Call2 0x168d

0xb9e: Pop(1)
0xb9f: IF (Stack[-1] == 0) GOTO 0xba5; Pop(1)

0xba0: Push((int) 536978)
0xba1: Push((int) 38817)
0xba2: Push((int) 38816)
0xba3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba4: Pop(3)
0xba5: PushEmpty(bool)
0xba6: Stack[-1] = (bool) 0
0xba7: PushEmpty(bool, object)
0xba8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba9: Call2 0x1697

0xbaa: Pop(1)
0xbab: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbac: PushEmpty(bool, object)
0xbad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbae: Call2 0x161b

0xbaf: Pop(1)
0xbb0: IF (Stack[-1] == 0) GOTO 0xbb2; Pop(1)

0xbb1: Stack[-1] = (bool) 1
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb8; Pop(1)

0xbb3: Push((int) 536993)
0xbb4: Push((int) 38832)
0xbb5: Push((int) 38831)
0xbb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb7: Pop(3)
0xbb8: PushEmpty(bool)
0xbb9: Stack[-1] = (bool) 0
0xbba: PushEmpty(bool, object)
0xbbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbbc: Call2 0x1633

0xbbd: Pop(1)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbbf: PushEmpty(bool, object)
0xbc0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc1: Call2 0x161b

0xbc2: Pop(1)
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbc4: Stack[-1] = (bool) 1
0xbc5: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbc6: Push((int) 537006)
0xbc7: Push((int) 38846)
0xbc8: Push((int) 38845)
0xbc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbca: Pop(3)
0xbcb: PushEmpty(bool)
0xbcc: Stack[-1] = (bool) 0
0xbcd: PushEmpty(bool, object)
0xbce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbcf: Call2 0x1633

0xbd0: Pop(1)
0xbd1: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd2: PushEmpty(bool, object)
0xbd3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd4: Call2 0x161b

0xbd5: Pop(1)
0xbd6: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd7: Stack[-1] = (bool) 1
0xbd8: IF (Stack[-1] == 0) GOTO 0xbde; Pop(1)

0xbd9: Push((int) 537017)
0xbda: Push((int) 38857)
0xbdb: Push((int) 38856)
0xbdc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdd: Pop(3)
0xbde: PushEmpty(bool, object)
0xbdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe0: Call2 0x1633

0xbe1: Pop(1)
0xbe2: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe3: Push((int) 537025)
0xbe4: Push((int) 38865)
0xbe5: Push((int) 38864)
0xbe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe7: Pop(3)
0xbe8: PushEmpty(bool, object)
0xbe9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbea: Call2 0x1633

0xbeb: Pop(1)
0xbec: IF (Stack[-1] == 0) GOTO 0xbf2; Pop(1)

0xbed: Push((int) 537035)
0xbee: Push((int) 38875)
0xbef: Push((int) 38874)
0xbf0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf1: Pop(3)
0xbf2: PushEmpty(bool, object)
0xbf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf4: Call2 0x1633

0xbf5: Pop(1)
0xbf6: IF (Stack[-1] == 0) GOTO 0xbfc; Pop(1)

0xbf7: Push((int) 537044)
0xbf8: Push((int) 38884)
0xbf9: Push((int) 38883)
0xbfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfb: Pop(3)
0xbfc: Push((int) 537050)
0xbfd: Push((int) -1)
0xbfe: Push((int) 38889)
0xbff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc00: Pop(3)
0xc01: Return(); Pop(0)

0xc02: Push((int) 38884)
0xc03: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc19; Pop(1)

0xc05: PushEmpty(string)
0xc06: Stack[-1] = "Neutral"
0xc07: Call2 0x96f

0xc08: Pop(1)
0xc09: Push((int) 537045)
0xc0a: @@ SetMessage(Stack[-1])
0xc0b: Pop(1)
0xc0c: @@ ClearReplies()
0xc0d: Pop(0)
0xc0e: Push((int) 537046)
0xc0f: Push((int) 38886)
0xc10: Push((int) 38885)
0xc11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(3)
0xc13: Push((int) 537049)
0xc14: Push((int) -1)
0xc15: Push((int) 38888)
0xc16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc17: Pop(3)
0xc18: Return(); Pop(0)

0xc19: Push((int) 38886)
0xc1a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1b: IF (Stack[-1] == 0) GOTO 0xc2b; Pop(1)

0xc1c: PushEmpty(string)
0xc1d: Stack[-1] = "Neutral"
0xc1e: Call2 0x96f

0xc1f: Pop(1)
0xc20: Push((int) 537047)
0xc21: @@ SetMessage(Stack[-1])
0xc22: Pop(1)
0xc23: @@ ClearReplies()
0xc24: Pop(0)
0xc25: Push((int) 537048)
0xc26: Push((int) -1)
0xc27: Push((int) 38887)
0xc28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc29: Pop(3)
0xc2a: Return(); Pop(0)

0xc2b: Push((int) 38875)
0xc2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc2e: PushEmpty(string)
0xc2f: Stack[-1] = "Neutral"
0xc30: Call2 0x96f

0xc31: Pop(1)
0xc32: Push((int) 537036)
0xc33: @@ SetMessage(Stack[-1])
0xc34: Pop(1)
0xc35: @@ ClearReplies()
0xc36: Pop(0)
0xc37: Push((int) 537037)
0xc38: Push((int) 38877)
0xc39: Push((int) 38876)
0xc3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: Push((int) 537043)
0xc3d: Push((int) -1)
0xc3e: Push((int) 38882)
0xc3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc40: Pop(3)
0xc41: Return(); Pop(0)

0xc42: Push((int) 38877)
0xc43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc45: PushEmpty(string)
0xc46: Stack[-1] = "Neutral"
0xc47: Call2 0x96f

0xc48: Pop(1)
0xc49: Push((int) 537038)
0xc4a: @@ SetMessage(Stack[-1])
0xc4b: Pop(1)
0xc4c: @@ ClearReplies()
0xc4d: Pop(0)
0xc4e: PushEmpty(bool, object)
0xc4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc50: Call2 0x161b

0xc51: Pop(1)
0xc52: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc53: Push((int) 537039)
0xc54: Push((int) 38879)
0xc55: Push((int) 38878)
0xc56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc57: Pop(3)
0xc58: Push((int) 537042)
0xc59: Push((int) -1)
0xc5a: Push((int) 38881)
0xc5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc5c: Pop(3)
0xc5d: Return(); Pop(0)

0xc5e: Push((int) 38879)
0xc5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc60: IF (Stack[-1] == 0) GOTO 0xc70; Pop(1)

0xc61: PushEmpty(string)
0xc62: Stack[-1] = "Neutral"
0xc63: Call2 0x96f

0xc64: Pop(1)
0xc65: Push((int) 537040)
0xc66: @@ SetMessage(Stack[-1])
0xc67: Pop(1)
0xc68: @@ ClearReplies()
0xc69: Pop(0)
0xc6a: Push((int) 537041)
0xc6b: Push((int) -1)
0xc6c: Push((int) 38880)
0xc6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6e: Pop(3)
0xc6f: Return(); Pop(0)

0xc70: Push((int) 38865)
0xc71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc72: IF (Stack[-1] == 0) GOTO 0xc87; Pop(1)

0xc73: PushEmpty(string)
0xc74: Stack[-1] = "Neutral"
0xc75: Call2 0x96f

0xc76: Pop(1)
0xc77: Push((int) 537026)
0xc78: @@ SetMessage(Stack[-1])
0xc79: Pop(1)
0xc7a: @@ ClearReplies()
0xc7b: Pop(0)
0xc7c: Push((int) 537027)
0xc7d: Push((int) 38867)
0xc7e: Push((int) 38866)
0xc7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc80: Pop(3)
0xc81: Push((int) 537034)
0xc82: Push((int) -1)
0xc83: Push((int) 38873)
0xc84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc85: Pop(3)
0xc86: Return(); Pop(0)

0xc87: Push((int) 38867)
0xc88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc89: IF (Stack[-1] == 0) GOTO 0xc9e; Pop(1)

0xc8a: PushEmpty(string)
0xc8b: Stack[-1] = "Neutral"
0xc8c: Call2 0x96f

0xc8d: Pop(1)
0xc8e: Push((int) 537028)
0xc8f: @@ SetMessage(Stack[-1])
0xc90: Pop(1)
0xc91: @@ ClearReplies()
0xc92: Pop(0)
0xc93: Push((int) 537029)
0xc94: Push((int) 38869)
0xc95: Push((int) 38868)
0xc96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc97: Pop(3)
0xc98: Push((int) 537033)
0xc99: Push((int) -1)
0xc9a: Push((int) 38872)
0xc9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9c: Pop(3)
0xc9d: Return(); Pop(0)

0xc9e: Push((int) 38869)
0xc9f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca0: IF (Stack[-1] == 0) GOTO 0xcba; Pop(1)

0xca1: PushEmpty(string)
0xca2: Stack[-1] = "Neutral"
0xca3: Call2 0x96f

0xca4: Pop(1)
0xca5: Push((int) 537030)
0xca6: @@ SetMessage(Stack[-1])
0xca7: Pop(1)
0xca8: @@ ClearReplies()
0xca9: Pop(0)
0xcaa: Push((int) 537031)
0xcab: Push((int) -1)
0xcac: Push((int) 38870)
0xcad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcae: Pop(3)
0xcaf: PushEmpty(bool, object)
0xcb0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb1: Call2 0x161b

0xcb2: Pop(1)
0xcb3: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb4: Push((int) 537032)
0xcb5: Push((int) -1)
0xcb6: Push((int) 38871)
0xcb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb8: Pop(3)
0xcb9: Return(); Pop(0)

0xcba: Push((int) 38857)
0xcbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcbc: IF (Stack[-1] == 0) GOTO 0xccc; Pop(1)

0xcbd: PushEmpty(string)
0xcbe: Stack[-1] = "Neutral"
0xcbf: Call2 0x96f

0xcc0: Pop(1)
0xcc1: Push((int) 537018)
0xcc2: @@ SetMessage(Stack[-1])
0xcc3: Pop(1)
0xcc4: @@ ClearReplies()
0xcc5: Pop(0)
0xcc6: Push((int) 537019)
0xcc7: Push((int) 38859)
0xcc8: Push((int) 38858)
0xcc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcca: Pop(3)
0xccb: Return(); Pop(0)

0xccc: Push((int) 38859)
0xccd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcce: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xccf: PushEmpty(string)
0xcd0: Stack[-1] = "Neutral"
0xcd1: Call2 0x96f

0xcd2: Pop(1)
0xcd3: Push((int) 537020)
0xcd4: @@ SetMessage(Stack[-1])
0xcd5: Pop(1)
0xcd6: @@ ClearReplies()
0xcd7: Pop(0)
0xcd8: Push((int) 537021)
0xcd9: Push((int) 38861)
0xcda: Push((int) 38860)
0xcdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdc: Pop(3)
0xcdd: Return(); Pop(0)

0xcde: Push((int) 38861)
0xcdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce0: IF (Stack[-1] == 0) GOTO 0xcf5; Pop(1)

0xce1: PushEmpty(string)
0xce2: Stack[-1] = "Neutral"
0xce3: Call2 0x96f

0xce4: Pop(1)
0xce5: Push((int) 537022)
0xce6: @@ SetMessage(Stack[-1])
0xce7: Pop(1)
0xce8: @@ ClearReplies()
0xce9: Pop(0)
0xcea: Push((int) 537023)
0xceb: Push((int) -1)
0xcec: Push((int) 38862)
0xced: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcee: Pop(3)
0xcef: Push((int) 537024)
0xcf0: Push((int) -1)
0xcf1: Push((int) 38863)
0xcf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf3: Pop(3)
0xcf4: Return(); Pop(0)

0xcf5: Push((int) 38846)
0xcf6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcf7: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xcf8: PushEmpty(string)
0xcf9: Stack[-1] = "Neutral"
0xcfa: Call2 0x96f

0xcfb: Pop(1)
0xcfc: Push((int) 537007)
0xcfd: @@ SetMessage(Stack[-1])
0xcfe: Pop(1)
0xcff: @@ ClearReplies()
0xd00: Pop(0)
0xd01: Push((int) 537008)
0xd02: Push((int) 38848)
0xd03: Push((int) 38847)
0xd04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd05: Pop(3)
0xd06: Push((int) 537016)
0xd07: Push((int) -1)
0xd08: Push((int) 38855)
0xd09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0a: Pop(3)
0xd0b: Return(); Pop(0)

0xd0c: Push((int) 38848)
0xd0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0e: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd0f: PushEmpty(string)
0xd10: Stack[-1] = "Neutral"
0xd11: Call2 0x96f

0xd12: Pop(1)
0xd13: Push((int) 537009)
0xd14: @@ SetMessage(Stack[-1])
0xd15: Pop(1)
0xd16: @@ ClearReplies()
0xd17: Pop(0)
0xd18: Push((int) 537010)
0xd19: Push((int) 38850)
0xd1a: Push((int) 38849)
0xd1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1c: Pop(3)
0xd1d: Return(); Pop(0)

0xd1e: Push((int) 38850)
0xd1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd20: IF (Stack[-1] == 0) GOTO 0xd30; Pop(1)

0xd21: PushEmpty(string)
0xd22: Stack[-1] = "Neutral"
0xd23: Call2 0x96f

0xd24: Pop(1)
0xd25: Push((int) 537011)
0xd26: @@ SetMessage(Stack[-1])
0xd27: Pop(1)
0xd28: @@ ClearReplies()
0xd29: Pop(0)
0xd2a: Push((int) 537012)
0xd2b: Push((int) 38852)
0xd2c: Push((int) 38851)
0xd2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2e: Pop(3)
0xd2f: Return(); Pop(0)

0xd30: Push((int) 38852)
0xd31: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd32: IF (Stack[-1] == 0) GOTO 0xd47; Pop(1)

0xd33: PushEmpty(string)
0xd34: Stack[-1] = "Neutral"
0xd35: Call2 0x96f

0xd36: Pop(1)
0xd37: Push((int) 537013)
0xd38: @@ SetMessage(Stack[-1])
0xd39: Pop(1)
0xd3a: @@ ClearReplies()
0xd3b: Pop(0)
0xd3c: Push((int) 537014)
0xd3d: Push((int) -1)
0xd3e: Push((int) 38853)
0xd3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd40: Pop(3)
0xd41: Push((int) 537015)
0xd42: Push((int) -1)
0xd43: Push((int) 38854)
0xd44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd45: Pop(3)
0xd46: Return(); Pop(0)

0xd47: Push((int) 38832)
0xd48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd49: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd4a: PushEmpty(string)
0xd4b: Stack[-1] = "Neutral"
0xd4c: Call2 0x96f

0xd4d: Pop(1)
0xd4e: Push((int) 536994)
0xd4f: @@ SetMessage(Stack[-1])
0xd50: Pop(1)
0xd51: @@ ClearReplies()
0xd52: Pop(0)
0xd53: Push((int) 536995)
0xd54: Push((int) 38834)
0xd55: Push((int) 38833)
0xd56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd57: Pop(3)
0xd58: Push((int) 537005)
0xd59: Push((int) -1)
0xd5a: Push((int) 38844)
0xd5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5c: Pop(3)
0xd5d: Return(); Pop(0)

0xd5e: Push((int) 38834)
0xd5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd60: IF (Stack[-1] == 0) GOTO 0xd75; Pop(1)

0xd61: PushEmpty(string)
0xd62: Stack[-1] = "Neutral"
0xd63: Call2 0x96f

0xd64: Pop(1)
0xd65: Push((int) 536996)
0xd66: @@ SetMessage(Stack[-1])
0xd67: Pop(1)
0xd68: @@ ClearReplies()
0xd69: Pop(0)
0xd6a: Push((int) 536997)
0xd6b: Push((int) 38836)
0xd6c: Push((int) 38835)
0xd6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6e: Pop(3)
0xd6f: Push((int) 537004)
0xd70: Push((int) -1)
0xd71: Push((int) 38843)
0xd72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd73: Pop(3)
0xd74: Return(); Pop(0)

0xd75: Push((int) 38836)
0xd76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd77: IF (Stack[-1] == 0) GOTO 0xd8c; Pop(1)

0xd78: PushEmpty(string)
0xd79: Stack[-1] = "Neutral"
0xd7a: Call2 0x96f

0xd7b: Pop(1)
0xd7c: Push((int) 536998)
0xd7d: @@ SetMessage(Stack[-1])
0xd7e: Pop(1)
0xd7f: @@ ClearReplies()
0xd80: Pop(0)
0xd81: Push((int) 536999)
0xd82: Push((int) 38838)
0xd83: Push((int) 38837)
0xd84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd85: Pop(3)
0xd86: Push((int) 537003)
0xd87: Push((int) 38838)
0xd88: Push((int) 38841)
0xd89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8a: Pop(3)
0xd8b: Return(); Pop(0)

0xd8c: Push((int) 38838)
0xd8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd8e: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xd8f: PushEmpty(string)
0xd90: Stack[-1] = "Neutral"
0xd91: Call2 0x96f

0xd92: Pop(1)
0xd93: Push((int) 537000)
0xd94: @@ SetMessage(Stack[-1])
0xd95: Pop(1)
0xd96: @@ ClearReplies()
0xd97: Pop(0)
0xd98: Push((int) 537001)
0xd99: Push((int) -1)
0xd9a: Push((int) 38839)
0xd9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9c: Pop(3)
0xd9d: Push((int) 537002)
0xd9e: Push((int) -1)
0xd9f: Push((int) 38840)
0xda0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda1: Pop(3)
0xda2: Return(); Pop(0)

0xda3: Push((int) 38817)
0xda4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda5: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xda6: PushEmpty(string)
0xda7: Stack[-1] = "Neutral"
0xda8: Call2 0x96f

0xda9: Pop(1)
0xdaa: Push((int) 536979)
0xdab: @@ SetMessage(Stack[-1])
0xdac: Pop(1)
0xdad: @@ ClearReplies()
0xdae: Pop(0)
0xdaf: Push((int) 536980)
0xdb0: Push((int) 38819)
0xdb1: Push((int) 38818)
0xdb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb3: Pop(3)
0xdb4: Push((int) 536992)
0xdb5: Push((int) -1)
0xdb6: Push((int) 38830)
0xdb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb8: Pop(3)
0xdb9: Return(); Pop(0)

0xdba: Push((int) 38819)
0xdbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdbc: IF (Stack[-1] == 0) GOTO 0xdd1; Pop(1)

0xdbd: PushEmpty(string)
0xdbe: Stack[-1] = "Neutral"
0xdbf: Call2 0x96f

0xdc0: Pop(1)
0xdc1: Push((int) 536981)
0xdc2: @@ SetMessage(Stack[-1])
0xdc3: Pop(1)
0xdc4: @@ ClearReplies()
0xdc5: Pop(0)
0xdc6: Push((int) 536982)
0xdc7: Push((int) 38821)
0xdc8: Push((int) 38820)
0xdc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdca: Pop(3)
0xdcb: Push((int) 536991)
0xdcc: Push((int) -1)
0xdcd: Push((int) 38829)
0xdce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcf: Pop(3)
0xdd0: Return(); Pop(0)

0xdd1: Push((int) 38821)
0xdd2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd3: IF (Stack[-1] == 0) GOTO 0xde3; Pop(1)

0xdd4: PushEmpty(string)
0xdd5: Stack[-1] = "Neutral"
0xdd6: Call2 0x96f

0xdd7: Pop(1)
0xdd8: Push((int) 536983)
0xdd9: @@ SetMessage(Stack[-1])
0xdda: Pop(1)
0xddb: @@ ClearReplies()
0xddc: Pop(0)
0xddd: Push((int) 536984)
0xdde: Push((int) 38823)
0xddf: Push((int) 38822)
0xde0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde1: Pop(3)
0xde2: Return(); Pop(0)

0xde3: Push((int) 38823)
0xde4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde5: IF (Stack[-1] == 0) GOTO 0xdfa; Pop(1)

0xde6: PushEmpty(string)
0xde7: Stack[-1] = "Neutral"
0xde8: Call2 0x96f

0xde9: Pop(1)
0xdea: Push((int) 536985)
0xdeb: @@ SetMessage(Stack[-1])
0xdec: Pop(1)
0xded: @@ ClearReplies()
0xdee: Pop(0)
0xdef: Push((int) 536986)
0xdf0: Push((int) 38825)
0xdf1: Push((int) 38824)
0xdf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf3: Pop(3)
0xdf4: Push((int) 536990)
0xdf5: Push((int) -1)
0xdf6: Push((int) 38828)
0xdf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf8: Pop(3)
0xdf9: Return(); Pop(0)

0xdfa: Push((int) 38825)
0xdfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdfc: IF (Stack[-1] == 0) GOTO 0xe11; Pop(1)

0xdfd: PushEmpty(string)
0xdfe: Stack[-1] = "Neutral"
0xdff: Call2 0x96f

0xe00: Pop(1)
0xe01: Push((int) 536987)
0xe02: @@ SetMessage(Stack[-1])
0xe03: Pop(1)
0xe04: @@ ClearReplies()
0xe05: Pop(0)
0xe06: Push((int) 536988)
0xe07: Push((int) -1)
0xe08: Push((int) 38826)
0xe09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0a: Pop(3)
0xe0b: Push((int) 536989)
0xe0c: Push((int) -1)
0xe0d: Push((int) 38827)
0xe0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0f: Pop(3)
0xe10: Return(); Pop(0)

0xe11: Push((int) 38800)
0xe12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe13: IF (Stack[-1] == 0) GOTO 0xe28; Pop(1)

0xe14: PushEmpty(string)
0xe15: Stack[-1] = "Neutral"
0xe16: Call2 0x96f

0xe17: Pop(1)
0xe18: Push((int) 536962)
0xe19: @@ SetMessage(Stack[-1])
0xe1a: Pop(1)
0xe1b: @@ ClearReplies()
0xe1c: Pop(0)
0xe1d: Push((int) 536963)
0xe1e: Push((int) 38802)
0xe1f: Push((int) 38801)
0xe20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe21: Pop(3)
0xe22: Push((int) 536971)
0xe23: Push((int) 38810)
0xe24: Push((int) 38809)
0xe25: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe26: Pop(3)
0xe27: Return(); Pop(0)

0xe28: Push((int) 38810)
0xe29: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2a: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe2b: PushEmpty(string)
0xe2c: Stack[-1] = "Neutral"
0xe2d: Call2 0x96f

0xe2e: Pop(1)
0xe2f: Push((int) 536972)
0xe30: @@ SetMessage(Stack[-1])
0xe31: Pop(1)
0xe32: @@ ClearReplies()
0xe33: Pop(0)
0xe34: Push((int) 536973)
0xe35: Push((int) 38812)
0xe36: Push((int) 38811)
0xe37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe38: Pop(3)
0xe39: Push((int) 536976)
0xe3a: Push((int) -1)
0xe3b: Push((int) 38814)
0xe3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3d: Pop(3)
0xe3e: Push((int) 536977)
0xe3f: Push((int) -1)
0xe40: Push((int) 38815)
0xe41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe42: Pop(3)
0xe43: Return(); Pop(0)

0xe44: Push((int) 38812)
0xe45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe46: IF (Stack[-1] == 0) GOTO 0xe56; Pop(1)

0xe47: PushEmpty(string)
0xe48: Stack[-1] = "Neutral"
0xe49: Call2 0x96f

0xe4a: Pop(1)
0xe4b: Push((int) 536974)
0xe4c: @@ SetMessage(Stack[-1])
0xe4d: Pop(1)
0xe4e: @@ ClearReplies()
0xe4f: Pop(0)
0xe50: Push((int) 536975)
0xe51: Push((int) -1)
0xe52: Push((int) 38813)
0xe53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe54: Pop(3)
0xe55: Return(); Pop(0)

0xe56: Push((int) 38802)
0xe57: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe58: IF (Stack[-1] == 0) GOTO 0xe68; Pop(1)

0xe59: PushEmpty(string)
0xe5a: Stack[-1] = "Neutral"
0xe5b: Call2 0x96f

0xe5c: Pop(1)
0xe5d: Push((int) 536964)
0xe5e: @@ SetMessage(Stack[-1])
0xe5f: Pop(1)
0xe60: @@ ClearReplies()
0xe61: Pop(0)
0xe62: Push((int) 536965)
0xe63: Push((int) 38804)
0xe64: Push((int) 38803)
0xe65: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe66: Pop(3)
0xe67: Return(); Pop(0)

0xe68: Push((int) 38804)
0xe69: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe6a: IF (Stack[-1] == 0) GOTO 0xe7a; Pop(1)

0xe6b: PushEmpty(string)
0xe6c: Stack[-1] = "Neutral"
0xe6d: Call2 0x96f

0xe6e: Pop(1)
0xe6f: Push((int) 536966)
0xe70: @@ SetMessage(Stack[-1])
0xe71: Pop(1)
0xe72: @@ ClearReplies()
0xe73: Pop(0)
0xe74: Push((int) 536967)
0xe75: Push((int) 38806)
0xe76: Push((int) 38805)
0xe77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe78: Pop(3)
0xe79: Return(); Pop(0)

0xe7a: Push((int) 38806)
0xe7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7c: IF (Stack[-1] == 0) GOTO 0xe91; Pop(1)

0xe7d: PushEmpty(string)
0xe7e: Stack[-1] = "Neutral"
0xe7f: Call2 0x96f

0xe80: Pop(1)
0xe81: Push((int) 536968)
0xe82: @@ SetMessage(Stack[-1])
0xe83: Pop(1)
0xe84: @@ ClearReplies()
0xe85: Pop(0)
0xe86: Push((int) 536969)
0xe87: Push((int) -1)
0xe88: Push((int) 38807)
0xe89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8a: Pop(3)
0xe8b: Push((int) 536970)
0xe8c: Push((int) -1)
0xe8d: Push((int) 38808)
0xe8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8f: Pop(3)
0xe90: Return(); Pop(0)

0xe91: Push((int) 38782)
0xe92: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe93: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xe94: PushEmpty(string)
0xe95: Stack[-1] = "Neutral"
0xe96: Call2 0x96f

0xe97: Pop(1)
0xe98: Push((int) 536944)
0xe99: @@ SetMessage(Stack[-1])
0xe9a: Pop(1)
0xe9b: @@ ClearReplies()
0xe9c: Pop(0)
0xe9d: Push((int) 536945)
0xe9e: Push((int) 38784)
0xe9f: Push((int) 38783)
0xea0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea1: Pop(3)
0xea2: Push((int) 536960)
0xea3: Push((int) -1)
0xea4: Push((int) 38798)
0xea5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea6: Pop(3)
0xea7: Return(); Pop(0)

0xea8: Push((int) 38784)
0xea9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeaa: IF (Stack[-1] == 0) GOTO 0xeba; Pop(1)

0xeab: PushEmpty(string)
0xeac: Stack[-1] = "Neutral"
0xead: Call2 0x96f

0xeae: Pop(1)
0xeaf: Push((int) 536946)
0xeb0: @@ SetMessage(Stack[-1])
0xeb1: Pop(1)
0xeb2: @@ ClearReplies()
0xeb3: Pop(0)
0xeb4: Push((int) 536947)
0xeb5: Push((int) 38786)
0xeb6: Push((int) 38785)
0xeb7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeb8: Pop(3)
0xeb9: Return(); Pop(0)

0xeba: Push((int) 38786)
0xebb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebc: IF (Stack[-1] == 0) GOTO 0xed6; Pop(1)

0xebd: PushEmpty(string)
0xebe: Stack[-1] = "Neutral"
0xebf: Call2 0x96f

0xec0: Pop(1)
0xec1: Push((int) 536948)
0xec2: @@ SetMessage(Stack[-1])
0xec3: Pop(1)
0xec4: @@ ClearReplies()
0xec5: Pop(0)
0xec6: Push((int) 536949)
0xec7: Push((int) 38788)
0xec8: Push((int) 38787)
0xec9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeca: Pop(3)
0xecb: PushEmpty(bool, object)
0xecc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xecd: Call2 0x161b

0xece: Pop(1)
0xecf: IF (Stack[-1] == 0) GOTO 0xed5; Pop(1)

0xed0: Push((int) 536957)
0xed1: Push((int) 38796)
0xed2: Push((int) 38795)
0xed3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed4: Pop(3)
0xed5: Return(); Pop(0)

0xed6: Push((int) 38796)
0xed7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed8: IF (Stack[-1] == 0) GOTO 0xee8; Pop(1)

0xed9: PushEmpty(string)
0xeda: Stack[-1] = "Neutral"
0xedb: Call2 0x96f

0xedc: Pop(1)
0xedd: Push((int) 536958)
0xede: @@ SetMessage(Stack[-1])
0xedf: Pop(1)
0xee0: @@ ClearReplies()
0xee1: Pop(0)
0xee2: Push((int) 536959)
0xee3: Push((int) -1)
0xee4: Push((int) 38797)
0xee5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee6: Pop(3)
0xee7: Return(); Pop(0)

0xee8: Push((int) 38788)
0xee9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeea: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xeeb: PushEmpty(string)
0xeec: Stack[-1] = "Neutral"
0xeed: Call2 0x96f

0xeee: Pop(1)
0xeef: Push((int) 536950)
0xef0: @@ SetMessage(Stack[-1])
0xef1: Pop(1)
0xef2: @@ ClearReplies()
0xef3: Pop(0)
0xef4: Push((int) 536951)
0xef5: Push((int) 38790)
0xef6: Push((int) 38789)
0xef7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef8: Pop(3)
0xef9: Return(); Pop(0)

0xefa: Push((int) 38790)
0xefb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xefc: IF (Stack[-1] == 0) GOTO 0xf11; Pop(1)

0xefd: PushEmpty(string)
0xefe: Stack[-1] = "Neutral"
0xeff: Call2 0x96f

0xf00: Pop(1)
0xf01: Push((int) 536952)
0xf02: @@ SetMessage(Stack[-1])
0xf03: Pop(1)
0xf04: @@ ClearReplies()
0xf05: Pop(0)
0xf06: Push((int) 536953)
0xf07: Push((int) 38792)
0xf08: Push((int) 38791)
0xf09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0a: Pop(3)
0xf0b: Push((int) 536956)
0xf0c: Push((int) -1)
0xf0d: Push((int) 38794)
0xf0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0f: Pop(3)
0xf10: Return(); Pop(0)

0xf11: Push((int) 38792)
0xf12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf13: IF (Stack[-1] == 0) GOTO 0xf23; Pop(1)

0xf14: PushEmpty(string)
0xf15: Stack[-1] = "Neutral"
0xf16: Call2 0x96f

0xf17: Pop(1)
0xf18: Push((int) 536954)
0xf19: @@ SetMessage(Stack[-1])
0xf1a: Pop(1)
0xf1b: @@ ClearReplies()
0xf1c: Pop(0)
0xf1d: Push((int) 536955)
0xf1e: Push((int) -1)
0xf1f: Push((int) 38793)
0xf20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf21: Pop(3)
0xf22: Return(); Pop(0)

0xf23: Push((int) 38770)
0xf24: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf25: IF (Stack[-1] == 0) GOTO 0xf3a; Pop(1)

0xf26: PushEmpty(string)
0xf27: Stack[-1] = "Neutral"
0xf28: Call2 0x96f

0xf29: Pop(1)
0xf2a: Push((int) 536932)
0xf2b: @@ SetMessage(Stack[-1])
0xf2c: Pop(1)
0xf2d: @@ ClearReplies()
0xf2e: Pop(0)
0xf2f: Push((int) 536933)
0xf30: Push((int) 38772)
0xf31: Push((int) 38771)
0xf32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf33: Pop(3)
0xf34: Push((int) 536942)
0xf35: Push((int) -1)
0xf36: Push((int) 38780)
0xf37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf38: Pop(3)
0xf39: Return(); Pop(0)

0xf3a: Push((int) 38772)
0xf3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3c: IF (Stack[-1] == 0) GOTO 0xf4c; Pop(1)

0xf3d: PushEmpty(string)
0xf3e: Stack[-1] = "Neutral"
0xf3f: Call2 0x96f

0xf40: Pop(1)
0xf41: Push((int) 536934)
0xf42: @@ SetMessage(Stack[-1])
0xf43: Pop(1)
0xf44: @@ ClearReplies()
0xf45: Pop(0)
0xf46: Push((int) 536935)
0xf47: Push((int) 38774)
0xf48: Push((int) 38773)
0xf49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4a: Pop(3)
0xf4b: Return(); Pop(0)

0xf4c: Push((int) 38774)
0xf4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf4e: IF (Stack[-1] == 0) GOTO 0xf63; Pop(1)

0xf4f: PushEmpty(string)
0xf50: Stack[-1] = "Neutral"
0xf51: Call2 0x96f

0xf52: Pop(1)
0xf53: Push((int) 536936)
0xf54: @@ SetMessage(Stack[-1])
0xf55: Pop(1)
0xf56: @@ ClearReplies()
0xf57: Pop(0)
0xf58: Push((int) 536937)
0xf59: Push((int) 38776)
0xf5a: Push((int) 38775)
0xf5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5c: Pop(3)
0xf5d: Push((int) 536941)
0xf5e: Push((int) -1)
0xf5f: Push((int) 38779)
0xf60: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf61: Pop(3)
0xf62: Return(); Pop(0)

0xf63: Push((int) 38776)
0xf64: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf65: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf66: PushEmpty(string)
0xf67: Stack[-1] = "Neutral"
0xf68: Call2 0x96f

0xf69: Pop(1)
0xf6a: Push((int) 536938)
0xf6b: @@ SetMessage(Stack[-1])
0xf6c: Pop(1)
0xf6d: @@ ClearReplies()
0xf6e: Pop(0)
0xf6f: Push((int) 536939)
0xf70: Push((int) -1)
0xf71: Push((int) 38777)
0xf72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf73: Pop(3)
0xf74: Push((int) 536940)
0xf75: Push((int) -1)
0xf76: Push((int) 38778)
0xf77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf78: Pop(3)
0xf79: Return(); Pop(0)

0xf7a: Push((int) 38755)
0xf7b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf7c: IF (Stack[-1] == 0) GOTO 0xf96; Pop(1)

0xf7d: PushEmpty(string)
0xf7e: Stack[-1] = "Neutral"
0xf7f: Call2 0x96f

0xf80: Pop(1)
0xf81: Push((int) 536917)
0xf82: @@ SetMessage(Stack[-1])
0xf83: Pop(1)
0xf84: @@ ClearReplies()
0xf85: Pop(0)
0xf86: Push((int) 536918)
0xf87: Push((int) 38757)
0xf88: Push((int) 38756)
0xf89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8a: Pop(3)
0xf8b: PushEmpty(bool, object)
0xf8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf8d: Call2 0x161b

0xf8e: Pop(1)
0xf8f: IF (Stack[-1] == 0) GOTO 0xf95; Pop(1)

0xf90: Push((int) 536930)
0xf91: Push((int) -1)
0xf92: Push((int) 38768)
0xf93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf94: Pop(3)
0xf95: Return(); Pop(0)

0xf96: Push((int) 38757)
0xf97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf98: IF (Stack[-1] == 0) GOTO 0xfad; Pop(1)

0xf99: PushEmpty(string)
0xf9a: Stack[-1] = "Neutral"
0xf9b: Call2 0x96f

0xf9c: Pop(1)
0xf9d: Push((int) 536919)
0xf9e: @@ SetMessage(Stack[-1])
0xf9f: Pop(1)
0xfa0: @@ ClearReplies()
0xfa1: Pop(0)
0xfa2: Push((int) 536920)
0xfa3: Push((int) 38759)
0xfa4: Push((int) 38758)
0xfa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa6: Pop(3)
0xfa7: Push((int) 536929)
0xfa8: Push((int) -1)
0xfa9: Push((int) 38767)
0xfaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfab: Pop(3)
0xfac: Return(); Pop(0)

0xfad: Push((int) 38759)
0xfae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfaf: IF (Stack[-1] == 0) GOTO 0xfc9; Pop(1)

0xfb0: PushEmpty(string)
0xfb1: Stack[-1] = "Neutral"
0xfb2: Call2 0x96f

0xfb3: Pop(1)
0xfb4: Push((int) 536921)
0xfb5: @@ SetMessage(Stack[-1])
0xfb6: Pop(1)
0xfb7: @@ ClearReplies()
0xfb8: Pop(0)
0xfb9: PushEmpty(bool, object)
0xfba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xfbb: Call2 0x161b

0xfbc: Pop(1)
0xfbd: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfbe: Push((int) 536922)
0xfbf: Push((int) 38761)
0xfc0: Push((int) 38760)
0xfc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc2: Pop(3)
0xfc3: Push((int) 536926)
0xfc4: Push((int) 38765)
0xfc5: Push((int) 38764)
0xfc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc7: Pop(3)
0xfc8: Return(); Pop(0)

0xfc9: Push((int) 38765)
0xfca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcb: IF (Stack[-1] == 0) GOTO 0xfdb; Pop(1)

0xfcc: PushEmpty(string)
0xfcd: Stack[-1] = "Neutral"
0xfce: Call2 0x96f

0xfcf: Pop(1)
0xfd0: Push((int) 536927)
0xfd1: @@ SetMessage(Stack[-1])
0xfd2: Pop(1)
0xfd3: @@ ClearReplies()
0xfd4: Pop(0)
0xfd5: Push((int) 536928)
0xfd6: Push((int) -1)
0xfd7: Push((int) 38766)
0xfd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfd9: Pop(3)
0xfda: Return(); Pop(0)

0xfdb: Push((int) 38761)
0xfdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfdd: IF (Stack[-1] == 0) GOTO 0xff2; Pop(1)

0xfde: PushEmpty(string)
0xfdf: Stack[-1] = "Neutral"
0xfe0: Call2 0x96f

0xfe1: Pop(1)
0xfe2: Push((int) 536923)
0xfe3: @@ SetMessage(Stack[-1])
0xfe4: Pop(1)
0xfe5: @@ ClearReplies()
0xfe6: Pop(0)
0xfe7: Push((int) 536924)
0xfe8: Push((int) -1)
0xfe9: Push((int) 38762)
0xfea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfeb: Pop(3)
0xfec: Push((int) 536925)
0xfed: Push((int) -1)
0xfee: Push((int) 38763)
0xfef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff0: Pop(3)
0xff1: Return(); Pop(0)

0xff2: Push((int) 38743)
0xff3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xff4: IF (Stack[-1] == 0) GOTO 0x1004; Pop(1)

0xff5: PushEmpty(string)
0xff6: Stack[-1] = "Neutral"
0xff7: Call2 0x96f

0xff8: Pop(1)
0xff9: Push((int) 536905)
0xffa: @@ SetMessage(Stack[-1])
0xffb: Pop(1)
0xffc: @@ ClearReplies()
0xffd: Pop(0)
0xffe: Push((int) 536906)
0xfff: Push((int) 38745)
0x1000: Push((int) 38744)
0x1001: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1002: Pop(3)
0x1003: Return(); Pop(0)

0x1004: Push((int) 38745)
0x1005: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1006: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x1007: PushEmpty(string)
0x1008: Stack[-1] = "Neutral"
0x1009: Call2 0x96f

0x100a: Pop(1)
0x100b: Push((int) 536907)
0x100c: @@ SetMessage(Stack[-1])
0x100d: Pop(1)
0x100e: @@ ClearReplies()
0x100f: Pop(0)
0x1010: Push((int) 536908)
0x1011: Push((int) 38747)
0x1012: Push((int) 38746)
0x1013: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1014: Pop(3)
0x1015: PushEmpty(bool, object)
0x1016: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1017: Call2 0x161b

0x1018: Pop(1)
0x1019: IF (Stack[-1] == 0) GOTO 0x101f; Pop(1)

0x101a: Push((int) 536912)
0x101b: Push((int) 38751)
0x101c: Push((int) 38750)
0x101d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x101e: Pop(3)
0x101f: Return(); Pop(0)

0x1020: Push((int) 38751)
0x1021: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1022: IF (Stack[-1] == 0) GOTO 0x1037; Pop(1)

0x1023: PushEmpty(string)
0x1024: Stack[-1] = "Neutral"
0x1025: Call2 0x96f

0x1026: Pop(1)
0x1027: Push((int) 536913)
0x1028: @@ SetMessage(Stack[-1])
0x1029: Pop(1)
0x102a: @@ ClearReplies()
0x102b: Pop(0)
0x102c: Push((int) 536914)
0x102d: Push((int) -1)
0x102e: Push((int) 38752)
0x102f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1030: Pop(3)
0x1031: Push((int) 536915)
0x1032: Push((int) -1)
0x1033: Push((int) 38753)
0x1034: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1035: Pop(3)
0x1036: Return(); Pop(0)

0x1037: Push((int) 38747)
0x1038: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1039: IF (Stack[-1] == 0) GOTO 0x104e; Pop(1)

0x103a: PushEmpty(string)
0x103b: Stack[-1] = "Neutral"
0x103c: Call2 0x96f

0x103d: Pop(1)
0x103e: Push((int) 536909)
0x103f: @@ SetMessage(Stack[-1])
0x1040: Pop(1)
0x1041: @@ ClearReplies()
0x1042: Pop(0)
0x1043: Push((int) 536910)
0x1044: Push((int) -1)
0x1045: Push((int) 38748)
0x1046: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1047: Pop(3)
0x1048: Push((int) 536911)
0x1049: Push((int) -1)
0x104a: Push((int) 38749)
0x104b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104c: Pop(3)
0x104d: Return(); Pop(0)

0x104e: Push((int) 38724)
0x104f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1050: IF (Stack[-1] == 0) GOTO 0x1065; Pop(1)

0x1051: PushEmpty(string)
0x1052: Stack[-1] = "Neutral"
0x1053: Call2 0x96f

0x1054: Pop(1)
0x1055: Push((int) 536886)
0x1056: @@ SetMessage(Stack[-1])
0x1057: Pop(1)
0x1058: @@ ClearReplies()
0x1059: Pop(0)
0x105a: Push((int) 536887)
0x105b: Push((int) 38726)
0x105c: Push((int) 38725)
0x105d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105e: Pop(3)
0x105f: Push((int) 536901)
0x1060: Push((int) 38740)
0x1061: Push((int) 38739)
0x1062: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1063: Pop(3)
0x1064: Return(); Pop(0)

0x1065: Push((int) 38740)
0x1066: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1067: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1068: PushEmpty(string)
0x1069: Stack[-1] = "Neutral"
0x106a: Call2 0x96f

0x106b: Pop(1)
0x106c: Push((int) 536902)
0x106d: @@ SetMessage(Stack[-1])
0x106e: Pop(1)
0x106f: @@ ClearReplies()
0x1070: Pop(0)
0x1071: Push((int) 536903)
0x1072: Push((int) -1)
0x1073: Push((int) 38741)
0x1074: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1075: Pop(3)
0x1076: Return(); Pop(0)

0x1077: Push((int) 38726)
0x1078: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1079: IF (Stack[-1] == 0) GOTO 0x1089; Pop(1)

0x107a: PushEmpty(string)
0x107b: Stack[-1] = "Neutral"
0x107c: Call2 0x96f

0x107d: Pop(1)
0x107e: Push((int) 536888)
0x107f: @@ SetMessage(Stack[-1])
0x1080: Pop(1)
0x1081: @@ ClearReplies()
0x1082: Pop(0)
0x1083: Push((int) 536889)
0x1084: Push((int) 38728)
0x1085: Push((int) 38727)
0x1086: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1087: Pop(3)
0x1088: Return(); Pop(0)

0x1089: Push((int) 38728)
0x108a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108b: IF (Stack[-1] == 0) GOTO 0x10a0; Pop(1)

0x108c: PushEmpty(string)
0x108d: Stack[-1] = "Neutral"
0x108e: Call2 0x96f

0x108f: Pop(1)
0x1090: Push((int) 536890)
0x1091: @@ SetMessage(Stack[-1])
0x1092: Pop(1)
0x1093: @@ ClearReplies()
0x1094: Pop(0)
0x1095: Push((int) 536891)
0x1096: Push((int) 38730)
0x1097: Push((int) 38729)
0x1098: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1099: Pop(3)
0x109a: Push((int) 536900)
0x109b: Push((int) -1)
0x109c: Push((int) 38738)
0x109d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109e: Pop(3)
0x109f: Return(); Pop(0)

0x10a0: Push((int) 38730)
0x10a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a2: IF (Stack[-1] == 0) GOTO 0x10bc; Pop(1)

0x10a3: PushEmpty(string)
0x10a4: Stack[-1] = "Neutral"
0x10a5: Call2 0x96f

0x10a6: Pop(1)
0x10a7: Push((int) 536892)
0x10a8: @@ SetMessage(Stack[-1])
0x10a9: Pop(1)
0x10aa: @@ ClearReplies()
0x10ab: Pop(0)
0x10ac: PushEmpty(bool, object)
0x10ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10ae: Call2 0x161b

0x10af: Pop(1)
0x10b0: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b1: Push((int) 536893)
0x10b2: Push((int) 38732)
0x10b3: Push((int) 38731)
0x10b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b5: Pop(3)
0x10b6: Push((int) 536899)
0x10b7: Push((int) -1)
0x10b8: Push((int) 38737)
0x10b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ba: Pop(3)
0x10bb: Return(); Pop(0)

0x10bc: Push((int) 38732)
0x10bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10be: IF (Stack[-1] == 0) GOTO 0x10d3; Pop(1)

0x10bf: PushEmpty(string)
0x10c0: Stack[-1] = "Neutral"
0x10c1: Call2 0x96f

0x10c2: Pop(1)
0x10c3: Push((int) 536894)
0x10c4: @@ SetMessage(Stack[-1])
0x10c5: Pop(1)
0x10c6: @@ ClearReplies()
0x10c7: Pop(0)
0x10c8: Push((int) 536895)
0x10c9: Push((int) 38734)
0x10ca: Push((int) 38733)
0x10cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10cc: Pop(3)
0x10cd: Push((int) 536898)
0x10ce: Push((int) -1)
0x10cf: Push((int) 38736)
0x10d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d1: Pop(3)
0x10d2: Return(); Pop(0)

0x10d3: Push((int) 38734)
0x10d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d5: IF (Stack[-1] == 0) GOTO 0x10e5; Pop(1)

0x10d6: PushEmpty(string)
0x10d7: Stack[-1] = "Neutral"
0x10d8: Call2 0x96f

0x10d9: Pop(1)
0x10da: Push((int) 536896)
0x10db: @@ SetMessage(Stack[-1])
0x10dc: Pop(1)
0x10dd: @@ ClearReplies()
0x10de: Pop(0)
0x10df: Push((int) 536897)
0x10e0: Push((int) -1)
0x10e1: Push((int) 38735)
0x10e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e3: Pop(3)
0x10e4: Return(); Pop(0)

0x10e5: Push((int) 38709)
0x10e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e7: IF (Stack[-1] == 0) GOTO 0x10fc; Pop(1)

0x10e8: PushEmpty(string)
0x10e9: Stack[-1] = "Neutral"
0x10ea: Call2 0x96f

0x10eb: Pop(1)
0x10ec: Push((int) 536871)
0x10ed: @@ SetMessage(Stack[-1])
0x10ee: Pop(1)
0x10ef: @@ ClearReplies()
0x10f0: Pop(0)
0x10f1: Push((int) 536872)
0x10f2: Push((int) 38711)
0x10f3: Push((int) 38710)
0x10f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f5: Pop(3)
0x10f6: Push((int) 536882)
0x10f7: Push((int) 38721)
0x10f8: Push((int) 38720)
0x10f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10fa: Pop(3)
0x10fb: Return(); Pop(0)

0x10fc: Push((int) 38721)
0x10fd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10fe: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x10ff: PushEmpty(string)
0x1100: Stack[-1] = "Neutral"
0x1101: Call2 0x96f

0x1102: Pop(1)
0x1103: Push((int) 536883)
0x1104: @@ SetMessage(Stack[-1])
0x1105: Pop(1)
0x1106: @@ ClearReplies()
0x1107: Pop(0)
0x1108: Push((int) 536884)
0x1109: Push((int) -1)
0x110a: Push((int) 38722)
0x110b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110c: Pop(3)
0x110d: Return(); Pop(0)

0x110e: Push((int) 38711)
0x110f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1110: IF (Stack[-1] == 0) GOTO 0x1125; Pop(1)

0x1111: PushEmpty(string)
0x1112: Stack[-1] = "Neutral"
0x1113: Call2 0x96f

0x1114: Pop(1)
0x1115: Push((int) 536873)
0x1116: @@ SetMessage(Stack[-1])
0x1117: Pop(1)
0x1118: @@ ClearReplies()
0x1119: Pop(0)
0x111a: Push((int) 536874)
0x111b: Push((int) 38713)
0x111c: Push((int) 38712)
0x111d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111e: Pop(3)
0x111f: Push((int) 536881)
0x1120: Push((int) -1)
0x1121: Push((int) 38719)
0x1122: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1123: Pop(3)
0x1124: Return(); Pop(0)

0x1125: Push((int) 38713)
0x1126: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1127: IF (Stack[-1] == 0) GOTO 0x1141; Pop(1)

0x1128: PushEmpty(string)
0x1129: Stack[-1] = "Neutral"
0x112a: Call2 0x96f

0x112b: Pop(1)
0x112c: Push((int) 536875)
0x112d: @@ SetMessage(Stack[-1])
0x112e: Pop(1)
0x112f: @@ ClearReplies()
0x1130: Pop(0)
0x1131: Push((int) 536876)
0x1132: Push((int) 38715)
0x1133: Push((int) 38714)
0x1134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1135: Pop(3)
0x1136: PushEmpty(bool, object)
0x1137: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1138: Call2 0x161b

0x1139: Pop(1)
0x113a: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113b: Push((int) 536880)
0x113c: Push((int) -1)
0x113d: Push((int) 38718)
0x113e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113f: Pop(3)
0x1140: Return(); Pop(0)

0x1141: Push((int) 38715)
0x1142: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1143: IF (Stack[-1] == 0) GOTO 0x1158; Pop(1)

0x1144: PushEmpty(string)
0x1145: Stack[-1] = "Neutral"
0x1146: Call2 0x96f

0x1147: Pop(1)
0x1148: Push((int) 536877)
0x1149: @@ SetMessage(Stack[-1])
0x114a: Pop(1)
0x114b: @@ ClearReplies()
0x114c: Pop(0)
0x114d: Push((int) 536878)
0x114e: Push((int) -1)
0x114f: Push((int) 38716)
0x1150: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1151: Pop(3)
0x1152: Push((int) 536879)
0x1153: Push((int) -1)
0x1154: Push((int) 38717)
0x1155: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1156: Pop(3)
0x1157: Return(); Pop(0)

0x1158: Push((int) 38693)
0x1159: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x115a: IF (Stack[-1] == 0) GOTO 0x116f; Pop(1)

0x115b: PushEmpty(string)
0x115c: Stack[-1] = "Neutral"
0x115d: Call2 0x96f

0x115e: Pop(1)
0x115f: Push((int) 536857)
0x1160: @@ SetMessage(Stack[-1])
0x1161: Pop(1)
0x1162: @@ ClearReplies()
0x1163: Pop(0)
0x1164: Push((int) 536858)
0x1165: Push((int) 38695)
0x1166: Push((int) 38694)
0x1167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1168: Pop(3)
0x1169: Push((int) 536867)
0x116a: Push((int) 38705)
0x116b: Push((int) 38704)
0x116c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116d: Pop(3)
0x116e: Return(); Pop(0)

0x116f: Push((int) 38705)
0x1170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1171: IF (Stack[-1] == 0) GOTO 0x1181; Pop(1)

0x1172: PushEmpty(string)
0x1173: Stack[-1] = "Neutral"
0x1174: Call2 0x96f

0x1175: Pop(1)
0x1176: Push((int) 536868)
0x1177: @@ SetMessage(Stack[-1])
0x1178: Pop(1)
0x1179: @@ ClearReplies()
0x117a: Pop(0)
0x117b: Push((int) 536869)
0x117c: Push((int) 38697)
0x117d: Push((int) 38706)
0x117e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117f: Pop(3)
0x1180: Return(); Pop(0)

0x1181: Push((int) 38695)
0x1182: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1183: IF (Stack[-1] == 0) GOTO 0x1198; Pop(1)

0x1184: PushEmpty(string)
0x1185: Stack[-1] = "Neutral"
0x1186: Call2 0x96f

0x1187: Pop(1)
0x1188: Push((int) 536859)
0x1189: @@ SetMessage(Stack[-1])
0x118a: Pop(1)
0x118b: @@ ClearReplies()
0x118c: Pop(0)
0x118d: Push((int) 536860)
0x118e: Push((int) 38697)
0x118f: Push((int) 38696)
0x1190: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1191: Pop(3)
0x1192: Push((int) 536864)
0x1193: Push((int) 38701)
0x1194: Push((int) 38700)
0x1195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1196: Pop(3)
0x1197: Return(); Pop(0)

0x1198: Push((int) 38701)
0x1199: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x119a: IF (Stack[-1] == 0) GOTO 0x11aa; Pop(1)

0x119b: PushEmpty(string)
0x119c: Stack[-1] = "Neutral"
0x119d: Call2 0x96f

0x119e: Pop(1)
0x119f: Push((int) 536865)
0x11a0: @@ SetMessage(Stack[-1])
0x11a1: Pop(1)
0x11a2: @@ ClearReplies()
0x11a3: Pop(0)
0x11a4: Push((int) 536866)
0x11a5: Push((int) 38697)
0x11a6: Push((int) 38702)
0x11a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a8: Pop(3)
0x11a9: Return(); Pop(0)

0x11aa: Push((int) 38697)
0x11ab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ac: IF (Stack[-1] == 0) GOTO 0x11c1; Pop(1)

0x11ad: PushEmpty(string)
0x11ae: Stack[-1] = "Neutral"
0x11af: Call2 0x96f

0x11b0: Pop(1)
0x11b1: Push((int) 536861)
0x11b2: @@ SetMessage(Stack[-1])
0x11b3: Pop(1)
0x11b4: @@ ClearReplies()
0x11b5: Pop(0)
0x11b6: Push((int) 536862)
0x11b7: Push((int) -1)
0x11b8: Push((int) 38698)
0x11b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ba: Pop(3)
0x11bb: Push((int) 536863)
0x11bc: Push((int) -1)
0x11bd: Push((int) 38699)
0x11be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11bf: Pop(3)
0x11c0: Return(); Pop(0)

0x11c1: Push((int) 45595)
0x11c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c3: IF (Stack[-1] == 0) GOTO 0x11dd; Pop(1)

0x11c4: PushEmpty(string)
0x11c5: Stack[-1] = "Neutral"
0x11c6: Call2 0x96f

0x11c7: Pop(1)
0x11c8: Push((int) 543140)
0x11c9: @@ SetMessage(Stack[-1])
0x11ca: Pop(1)
0x11cb: @@ ClearReplies()
0x11cc: Pop(0)
0x11cd: Push((int) 543141)
0x11ce: Push((int) -1)
0x11cf: Push((int) 45596)
0x11d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d1: Pop(3)
0x11d2: Push((int) 543142)
0x11d3: Push((int) -1)
0x11d4: Push((int) 45597)
0x11d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d6: Pop(3)
0x11d7: Push((int) 543143)
0x11d8: Push((int) 45599)
0x11d9: Push((int) 45598)
0x11da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11db: Pop(3)
0x11dc: Return(); Pop(0)

0x11dd: Push((int) 45599)
0x11de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11df: IF (Stack[-1] == 0) GOTO 0x11f4; Pop(1)

0x11e0: PushEmpty(string)
0x11e1: Stack[-1] = "Neutral"
0x11e2: Call2 0x96f

0x11e3: Pop(1)
0x11e4: Push((int) 543144)
0x11e5: @@ SetMessage(Stack[-1])
0x11e6: Pop(1)
0x11e7: @@ ClearReplies()
0x11e8: Pop(0)
0x11e9: Push((int) 543145)
0x11ea: Push((int) -1)
0x11eb: Push((int) 45600)
0x11ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ed: Pop(3)
0x11ee: Push((int) 543146)
0x11ef: Push((int) -1)
0x11f0: Push((int) 45601)
0x11f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11f2: Pop(3)
0x11f3: Return(); Pop(0)

0x11f4: Push((int) 45583)
0x11f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f6: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x11f7: PushEmpty(string)
0x11f8: Stack[-1] = "Neutral"
0x11f9: Call2 0x96f

0x11fa: Pop(1)
0x11fb: Push((int) 543128)
0x11fc: @@ SetMessage(Stack[-1])
0x11fd: Pop(1)
0x11fe: @@ ClearReplies()
0x11ff: Pop(0)
0x1200: Push((int) 543129)
0x1201: Push((int) 45587)
0x1202: Push((int) 45584)
0x1203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1204: Pop(3)
0x1205: Push((int) 543130)
0x1206: Push((int) -1)
0x1207: Push((int) 45585)
0x1208: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1209: Pop(3)
0x120a: Push((int) 543131)
0x120b: Push((int) -1)
0x120c: Push((int) 45586)
0x120d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x120e: Pop(3)
0x120f: Return(); Pop(0)

0x1210: Push((int) 45587)
0x1211: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1212: IF (Stack[-1] == 0) GOTO 0x122c; Pop(1)

0x1213: PushEmpty(string)
0x1214: Stack[-1] = "Neutral"
0x1215: Call2 0x96f

0x1216: Pop(1)
0x1217: Push((int) 543132)
0x1218: @@ SetMessage(Stack[-1])
0x1219: Pop(1)
0x121a: @@ ClearReplies()
0x121b: Pop(0)
0x121c: Push((int) 543133)
0x121d: Push((int) -1)
0x121e: Push((int) 45588)
0x121f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1220: Pop(3)
0x1221: Push((int) 543134)
0x1222: Push((int) 45591)
0x1223: Push((int) 45589)
0x1224: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1225: Pop(3)
0x1226: Push((int) 543135)
0x1227: Push((int) -1)
0x1228: Push((int) 45590)
0x1229: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122a: Pop(3)
0x122b: Return(); Pop(0)

0x122c: Push((int) 45591)
0x122d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x122e: IF (Stack[-1] == 0) GOTO 0x1243; Pop(1)

0x122f: PushEmpty(string)
0x1230: Stack[-1] = "Neutral"
0x1231: Call2 0x96f

0x1232: Pop(1)
0x1233: Push((int) 543136)
0x1234: @@ SetMessage(Stack[-1])
0x1235: Pop(1)
0x1236: @@ ClearReplies()
0x1237: Pop(0)
0x1238: Push((int) 543137)
0x1239: Push((int) -1)
0x123a: Push((int) 45592)
0x123b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123c: Pop(3)
0x123d: Push((int) 543138)
0x123e: Push((int) -1)
0x123f: Push((int) 45593)
0x1240: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1241: Pop(3)
0x1242: Return(); Pop(0)

0x1243: Push((int) 45573)
0x1244: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1245: IF (Stack[-1] == 0) GOTO 0x125f; Pop(1)

0x1246: PushEmpty(string)
0x1247: Stack[-1] = "Neutral"
0x1248: Call2 0x96f

0x1249: Pop(1)
0x124a: Push((int) 543118)
0x124b: @@ SetMessage(Stack[-1])
0x124c: Pop(1)
0x124d: @@ ClearReplies()
0x124e: Pop(0)
0x124f: Push((int) 543119)
0x1250: Push((int) -1)
0x1251: Push((int) 45574)
0x1252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1253: Pop(3)
0x1254: Push((int) 543120)
0x1255: Push((int) 45577)
0x1256: Push((int) 45575)
0x1257: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1258: Pop(3)
0x1259: Push((int) 543121)
0x125a: Push((int) -1)
0x125b: Push((int) 45576)
0x125c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125d: Pop(3)
0x125e: Return(); Pop(0)

0x125f: Push((int) 45577)
0x1260: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1261: IF (Stack[-1] == 0) GOTO 0x1276; Pop(1)

0x1262: PushEmpty(string)
0x1263: Stack[-1] = "Neutral"
0x1264: Call2 0x96f

0x1265: Pop(1)
0x1266: Push((int) 543122)
0x1267: @@ SetMessage(Stack[-1])
0x1268: Pop(1)
0x1269: @@ ClearReplies()
0x126a: Pop(0)
0x126b: Push((int) 543123)
0x126c: Push((int) -1)
0x126d: Push((int) 45578)
0x126e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126f: Pop(3)
0x1270: Push((int) 543124)
0x1271: Push((int) -1)
0x1272: Push((int) 45579)
0x1273: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1274: Pop(3)
0x1275: Return(); Pop(0)

0x1276: Push((int) 45557)
0x1277: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1278: IF (Stack[-1] == 0) GOTO 0x128d; Pop(1)

0x1279: PushEmpty(string)
0x127a: Stack[-1] = "Neutral"
0x127b: Call2 0x96f

0x127c: Pop(1)
0x127d: Push((int) 543102)
0x127e: @@ SetMessage(Stack[-1])
0x127f: Pop(1)
0x1280: @@ ClearReplies()
0x1281: Pop(0)
0x1282: Push((int) 543103)
0x1283: Push((int) -1)
0x1284: Push((int) 45558)
0x1285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1286: Pop(3)
0x1287: Push((int) 543104)
0x1288: Push((int) 45560)
0x1289: Push((int) 45559)
0x128a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x128b: Pop(3)
0x128c: Return(); Pop(0)

0x128d: Push((int) 45560)
0x128e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128f: IF (Stack[-1] == 0) GOTO 0x12a4; Pop(1)

0x1290: PushEmpty(string)
0x1291: Stack[-1] = "Neutral"
0x1292: Call2 0x96f

0x1293: Pop(1)
0x1294: Push((int) 543105)
0x1295: @@ SetMessage(Stack[-1])
0x1296: Pop(1)
0x1297: @@ ClearReplies()
0x1298: Pop(0)
0x1299: Push((int) 543106)
0x129a: Push((int) -1)
0x129b: Push((int) 45561)
0x129c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129d: Pop(3)
0x129e: Push((int) 543107)
0x129f: Push((int) -1)
0x12a0: Push((int) 45562)
0x12a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a2: Pop(3)
0x12a3: Return(); Pop(0)

0x12a4: Push((int) 45564)
0x12a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a6: IF (Stack[-1] == 0) GOTO 0x12bb; Pop(1)

0x12a7: PushEmpty(string)
0x12a8: Stack[-1] = "Neutral"
0x12a9: Call2 0x96f

0x12aa: Pop(1)
0x12ab: Push((int) 543109)
0x12ac: @@ SetMessage(Stack[-1])
0x12ad: Pop(1)
0x12ae: @@ ClearReplies()
0x12af: Pop(0)
0x12b0: Push((int) 543110)
0x12b1: Push((int) -1)
0x12b2: Push((int) 45565)
0x12b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b4: Pop(3)
0x12b5: Push((int) 543111)
0x12b6: Push((int) 45568)
0x12b7: Push((int) 45566)
0x12b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b9: Pop(3)
0x12ba: Return(); Pop(0)

0x12bb: Push((int) 45568)
0x12bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12bd: IF (Stack[-1] == 0) GOTO 0x12d2; Pop(1)

0x12be: PushEmpty(string)
0x12bf: Stack[-1] = "Neutral"
0x12c0: Call2 0x96f

0x12c1: Pop(1)
0x12c2: Push((int) 543113)
0x12c3: @@ SetMessage(Stack[-1])
0x12c4: Pop(1)
0x12c5: @@ ClearReplies()
0x12c6: Pop(0)
0x12c7: Push((int) 543114)
0x12c8: Push((int) -1)
0x12c9: Push((int) 45569)
0x12ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12cb: Pop(3)
0x12cc: Push((int) 543116)
0x12cd: Push((int) -1)
0x12ce: Push((int) 45571)
0x12cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d0: Pop(3)
0x12d1: Return(); Pop(0)

0x12d2: Push((int) 45550)
0x12d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d4: IF (Stack[-1] == 0) GOTO 0x12e9; Pop(1)

0x12d5: PushEmpty(string)
0x12d6: Stack[-1] = "Neutral"
0x12d7: Call2 0x96f

0x12d8: Pop(1)
0x12d9: Push((int) 543095)
0x12da: @@ SetMessage(Stack[-1])
0x12db: Pop(1)
0x12dc: @@ ClearReplies()
0x12dd: Pop(0)
0x12de: Push((int) 543096)
0x12df: Push((int) -1)
0x12e0: Push((int) 45551)
0x12e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e2: Pop(3)
0x12e3: Push((int) 543098)
0x12e4: Push((int) -1)
0x12e5: Push((int) 45553)
0x12e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e7: Pop(3)
0x12e8: Return(); Pop(0)

0x12e9: Push((int) 45531)
0x12ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12eb: IF (Stack[-1] == 0) GOTO 0x1305; Pop(1)

0x12ec: PushEmpty(string)
0x12ed: Stack[-1] = "Neutral"
0x12ee: Call2 0x96f

0x12ef: Pop(1)
0x12f0: Push((int) 543076)
0x12f1: @@ SetMessage(Stack[-1])
0x12f2: Pop(1)
0x12f3: @@ ClearReplies()
0x12f4: Pop(0)
0x12f5: Push((int) 543077)
0x12f6: Push((int) -1)
0x12f7: Push((int) 45532)
0x12f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f9: Pop(3)
0x12fa: Push((int) 543078)
0x12fb: Push((int) -1)
0x12fc: Push((int) 45533)
0x12fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12fe: Pop(3)
0x12ff: Push((int) 543079)
0x1300: Push((int) 45535)
0x1301: Push((int) 45534)
0x1302: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1303: Pop(3)
0x1304: Return(); Pop(0)

0x1305: Push((int) 45535)
0x1306: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1307: IF (Stack[-1] == 0) GOTO 0x131c; Pop(1)

0x1308: PushEmpty(string)
0x1309: Stack[-1] = "Neutral"
0x130a: Call2 0x96f

0x130b: Pop(1)
0x130c: Push((int) 543080)
0x130d: @@ SetMessage(Stack[-1])
0x130e: Pop(1)
0x130f: @@ ClearReplies()
0x1310: Pop(0)
0x1311: Push((int) 543081)
0x1312: Push((int) -1)
0x1313: Push((int) 45536)
0x1314: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1315: Pop(3)
0x1316: Push((int) 543082)
0x1317: Push((int) 45538)
0x1318: Push((int) 45537)
0x1319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131a: Pop(3)
0x131b: Return(); Pop(0)

0x131c: Push((int) 45538)
0x131d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131e: IF (Stack[-1] == 0) GOTO 0x1333; Pop(1)

0x131f: PushEmpty(string)
0x1320: Stack[-1] = "Neutral"
0x1321: Call2 0x96f

0x1322: Pop(1)
0x1323: Push((int) 543083)
0x1324: @@ SetMessage(Stack[-1])
0x1325: Pop(1)
0x1326: @@ ClearReplies()
0x1327: Pop(0)
0x1328: Push((int) 543084)
0x1329: Push((int) 45541)
0x132a: Push((int) 45539)
0x132b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132c: Pop(3)
0x132d: Push((int) 543085)
0x132e: Push((int) -1)
0x132f: Push((int) 45540)
0x1330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1331: Pop(3)
0x1332: Return(); Pop(0)

0x1333: Push((int) 45541)
0x1334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1335: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1336: PushEmpty(string)
0x1337: Stack[-1] = "Neutral"
0x1338: Call2 0x96f

0x1339: Pop(1)
0x133a: Push((int) 543086)
0x133b: @@ SetMessage(Stack[-1])
0x133c: Pop(1)
0x133d: @@ ClearReplies()
0x133e: Pop(0)
0x133f: Push((int) 543087)
0x1340: Push((int) -1)
0x1341: Push((int) 45542)
0x1342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1343: Pop(3)
0x1344: Push((int) 543088)
0x1345: Push((int) -1)
0x1346: Push((int) 45543)
0x1347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1348: Pop(3)
0x1349: Return(); Pop(0)

0x134a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x134b: PushEmpty(bool)
0x134c: Call2 0x178f

0x134d: Pop(0)
0x134e: IF (Stack[-1] == 0) GOTO 0x1352; Pop(1)

0x134f: @ lshStopAnimation()
0x1350: Pop(0)
0x1351: GOTO 0x1354

0x1352: @ StopAnimation()
0x1353: Pop(0)
0x1354: Return(); Pop(0)

0x1355: GOTO 0x986

0x1356: Return(); Pop(0)

0x1357: PushEmpty(cvector, cvector)
0x1358: @ GetPosition(Stack[-1])
0x1359: Pop(0)
0x135a: Stack[-3] = Stack[-1]
0x135b: Return(); Pop(2)

0x135c: PushEmpty(cvector, cvector, cvector, cvector)
0x135d: @ GetPosition(Stack[-2])
0x135e: Pop(0)
0x135f: @@ GetPosition(Stack[-1])
0x1360: Pop(0)
0x1361: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1362: Return(); Pop(4)

0x1363: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1364: @ GetPosition(Stack[-3])
0x1365: Pop(0)
0x1366: @@ GetPosition(Stack[-2])
0x1367: Pop(0)
0x1368: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1369: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x136a: Return(); Pop(6)

0x136b: PushEmpty(bool, bool)
0x136c: @ IsPlayerActor(Stack[-3], Stack[-1])
0x136d: Pop(0)
0x136e: Stack[-4] = Stack[-1]
0x136f: Return(); Pop(2)

0x1370: PushEmpty(bool, bool)
0x1371: Push("HasProperty")
0x1372: Push((int) 2)
0x1373: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1374: Pop(1); Push((bool) Stack[-1] == 0)
0x1375: IF (Stack[-1] == 0) GOTO 0x1378; Pop(1)

0x1376: Stack[-5] = (bool) 0
0x1377: Return(); Pop(2)

0x1378: @@ HasProperty(Stack[-3], Stack[-1])
0x1379: Pop(0)
0x137a: Stack[-5] = Stack[-1]
0x137b: Return(); Pop(2)

0x137c: PushEmpty(bool, bool)
0x137d: @@ IsDead(Stack[-1])
0x137e: Pop(0)
0x137f: Stack[-4] = Stack[-1]
0x1380: Return(); Pop(2)

0x1381: PushEmpty(object, object, object, object)
0x1382: Pop(0); Push((bool) Stack[-5] == 0)
0x1383: IF (Stack[-1] == 0) GOTO 0x1386; Pop(1)

0x1384: Stack[-6] = (bool) 0
0x1385: Return(); Pop(4)

0x1386: PushEmpty(bool)
0x1387: Stack[-1] = (bool) 0
0x1388: Push("IsDead")
0x1389: Push((int) 1)
0x138a: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x138b: IF (Stack[-1] == 0) GOTO 0x1392; Pop(1)

0x138c: PushEmpty(bool, object)
0x138d: Stack[-1] = Stack[-8]
0x138e: Call2 0x137c

0x138f: Pop(1)
0x1390: IF (Stack[-1] == 0) GOTO 0x1392; Pop(1)

0x1391: Stack[-1] = (bool) 1
0x1392: IF (Stack[-1] == 0) GOTO 0x1395; Pop(1)

0x1393: Stack[-6] = (bool) 0
0x1394: Return(); Pop(4)

0x1395: @ GetScene(Stack[-2])
0x1396: Pop(0)
0x1397: Pop(0); Push((bool) Stack[-2] == 0)
0x1398: IF (Stack[-1] == 0) GOTO 0x139b; Pop(1)

0x1399: Stack[-6] = (bool) 0
0x139a: Return(); Pop(4)

0x139b: @@ GetScene(Stack[-1])
0x139c: Pop(0)
0x139d: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x139e: IF (Stack[-1] == 0) GOTO 0x13a1; Pop(1)

0x139f: Stack[-6] = (bool) 0
0x13a0: Return(); Pop(4)

0x13a1: Stack[-6] = (bool) 1
0x13a2: Return(); Pop(4)

0x13a3: Stack[-1] = 0
0x13a4: Stack[-2] = 0
0x13a5: PushEmpty(int, int)
0x13a6: PushEmpty(bool, object)
0x13a7: Stack[-1] = Stack[-5]
0x13a8: Call2 0x1381

0x13a9: Pop(1)
0x13aa: Pop(1); Push((bool) Stack[-1] == 0)
0x13ab: IF (Stack[-1] == 0) GOTO 0x13ae; Pop(1)

0x13ac: Stack[-4] = (bool) 0
0x13ad: Return(); Pop(2)

0x13ae: PushEmpty(bool, object, string)
0x13af: Stack[-2] = Stack[-6]
0x13b0: Stack[-1] = "noaccess"
0x13b1: Call2 0x1370

0x13b2: Pop(2)
0x13b3: Pop(1); Push((bool) Stack[-1] == 0)
0x13b4: IF (Stack[-1] == 0) GOTO 0x13b7; Pop(1)

0x13b5: Stack[-4] = (bool) 1
0x13b6: Return(); Pop(2)

0x13b7: Push("noaccess")
0x13b8: @@ GetProperty(Stack[-1], Stack[-2])
0x13b9: Pop(1)
0x13ba: Push((int) 0)
0x13bb: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x13bc: Return(); Pop(2)

0x13bd: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x13be: @@ GetPosition(Stack[-3])
0x13bf: Pop(0)
0x13c0: @ GetPosition(Stack[-2])
0x13c1: Pop(0)
0x13c2: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x13c3: Push(CvectorIndex(Stack[-1], 0))
0x13c4: Push(CvectorIndex(Stack[-2], 2))
0x13c5: @ RotateAsync(Stack[-2], Stack[-1])
0x13c6: Pop(2)
0x13c7: Return(); Pop(6)

0x13c8: PushEmpty(bool, bool)
0x13c9: @ IsLoaded(Stack[-1])
0x13ca: Pop(0)
0x13cb: Stack[-3] = Stack[-1]
0x13cc: Return(); Pop(2)

0x13cd: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x13ce: @@ GetPosition(Stack[-8])
0x13cf: Pop(0)
0x13d0: @@ GetEyesHeight(Stack[-9])
0x13d1: Pop(0)
0x13d2: Push(CvectorIndex(Stack[-8], 1))
0x13d3: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x13d4: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x13d5: @ GetPosition(Stack[-7])
0x13d6: Pop(0)
0x13d7: @ GetEyesHeight(Stack[-9])
0x13d8: Pop(0)
0x13d9: Push(CvectorIndex(Stack[-7], 1))
0x13da: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x13db: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x13dc: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x13dd: Push(CvectorIndex(Stack[-6], 1))
0x13de: Stack[-1] = (int) 0
0x13df: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x13e0: Pop(0); Push(Stack[-6] | Stack[-6]);
0x13e1: Pop(1); Push(Sqrt(Stack[-1]))
0x13e2: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x13e3: Stack[-5] = -Stack[-6]; Pop(0);
0x13e4: Pop(0); Push(Stack[-6] * Stack[-19]);
0x13e5: PushEmpty(cvector, cvector)
0x13e6: Push(CVector(0.0, 1.0, 0.0))
0x13e7: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x13e8: Call2 0x14ae

0x13e9: Pop(1)
0x13ea: Push((int) 25)
0x13eb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x13ec: Pop(2); Push(Stack[-2] + Stack[-1]);
0x13ed: Push(CVector(0.0, 10.0, 0.0))
0x13ee: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x13ef: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x13f0: @ IsOverrideActive(Stack[-2])
0x13f1: Pop(0)
0x13f2: Push(Stack[-2])
0x13f3: IF (Stack[-1] == 0) GOTO 0x13f6; Pop(1)

0x13f4: Stack[-21] = (bool) 0
0x13f5: Return(); Pop(18)

0x13f6: @ StopWorld()
0x13f7: Pop(0)
0x13f8: @ CameraTransit(Stack[-3], Stack[-5])
0x13f9: Pop(0)
0x13fa: Push(CvectorIndex(Stack[-4], 0))
0x13fb: Push(CvectorIndex(Stack[-5], 2))
0x13fc: @ Rotate(Stack[-2], Stack[-1])
0x13fd: Pop(2)
0x13fe: PushEmpty(bool)
0x13ff: Call2 0x178f

0x1400: Pop(0)
0x1401: IF (Stack[-1] == 0) GOTO 0x1403; Pop(1)

0x1402: GOTO 0x140b

0x1403: Push("head")
0x1404: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1405: Pop(1)
0x1406: Push(Stack[-1])
0x1407: IF (Stack[-1] == 0) GOTO 0x140b; Pop(1)

0x1408: Push("head")
0x1409: @ LookAsyncCamera(Stack[-1])
0x140a: Pop(1)
0x140b: @ CameraWaitForPlayFinish()
0x140c: Pop(0)
0x140d: @ ResumeWorld()
0x140e: Pop(0)
0x140f: Stack[-21] = (bool) 1
0x1410: Return(); Pop(18)

0x1411: PushEmpty(bool, bool)
0x1412: @ CameraSwitchToNormal()
0x1413: Pop(0)
0x1414: PushEmpty(bool)
0x1415: Call2 0x178f

0x1416: Pop(0)
0x1417: IF (Stack[-1] == 0) GOTO 0x1419; Pop(1)

0x1418: GOTO 0x1421

0x1419: Push("head")
0x141a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x141b: Pop(1)
0x141c: Push(Stack[-1])
0x141d: IF (Stack[-1] == 0) GOTO 0x1421; Pop(1)

0x141e: Push("head")
0x141f: @ UnlookAsync(Stack[-1])
0x1420: Pop(1)
0x1421: Return(); Pop(2)

0x1422: PushEmpty()
0x1423: PushEmpty(bool, object, float)
0x1424: Stack[-2] = Stack[-4]
0x1425: Stack[-1] = (int) 70
0x1426: Call2 0x142a

0x1427: Stack[-5] = Stack[-3]
0x1428: Pop(3)
0x1429: Return(); Pop(0)

0x142a: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x142b: @@ GetPosition(Stack[-7])
0x142c: Pop(0)
0x142d: @@ GetEyesHeight(Stack[-8])
0x142e: Pop(0)
0x142f: Push(CvectorIndex(Stack[-7], 1))
0x1430: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1431: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1432: @ GetPosition(Stack[-6])
0x1433: Pop(0)
0x1434: @ GetEyesHeight(Stack[-8])
0x1435: Pop(0)
0x1436: Push(CvectorIndex(Stack[-6], 1))
0x1437: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1438: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1439: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x143a: Push(CvectorIndex(Stack[-5], 1))
0x143b: Stack[-1] = (int) 0
0x143c: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x143d: Pop(0); Push(Stack[-5] | Stack[-5]);
0x143e: Pop(1); Push(Sqrt(Stack[-1]))
0x143f: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1440: Stack[-4] = -Stack[-5]; Pop(0);
0x1441: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1442: Push(CVector(0.0, 10.0, 0.0))
0x1443: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1444: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1445: @ IsOverrideActive(Stack[-1])
0x1446: Pop(0)
0x1447: Push(Stack[-1])
0x1448: IF (Stack[-1] == 0) GOTO 0x144b; Pop(1)

0x1449: Stack[-19] = (bool) 0
0x144a: Return(); Pop(16)

0x144b: @ StopWorld()
0x144c: Pop(0)
0x144d: @ CameraTransit(Stack[-2], Stack[-4])
0x144e: Pop(0)
0x144f: Push(CvectorIndex(Stack[-3], 0))
0x1450: Push(CvectorIndex(Stack[-4], 2))
0x1451: @ Rotate(Stack[-2], Stack[-1])
0x1452: Pop(2)
0x1453: @ CameraWaitForPlayFinish()
0x1454: Pop(0)
0x1455: @ ResumeWorld()
0x1456: Pop(0)
0x1457: Stack[-19] = (bool) 1
0x1458: Return(); Pop(16)

0x1459: PushEmpty()
0x145a: @ CameraSwitchToNormal()
0x145b: Pop(0)
0x145c: Return(); Pop(0)

0x145d: PushEmpty(bool, float, float, bool, float, float)
0x145e: @ lshHasAnimation(Stack[-3], Stack[-7])
0x145f: Pop(0)
0x1460: Push(Stack[-3])
0x1461: IF (Stack[-1] == 0) GOTO 0x1468; Pop(1)

0x1462: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1463: Pop(0)
0x1464: Push((bool) 0)
0x1465: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1466: Pop(1)
0x1467: GOTO 0x146c

0x1468: Push("Can't find lsh animation : ")
0x1469: Pop(1); Push(Stack[-1] + Stack[-8]);
0x146a: @ Trace(Stack[-1])
0x146b: Pop(1)
0x146c: Return(); Pop(6)

0x146d: PushEmpty(bool, float, float, bool, float, float)
0x146e: @ lshHasAnimation(Stack[-3], Stack[-8])
0x146f: Pop(0)
0x1470: Push(Stack[-3])
0x1471: IF (Stack[-1] == 0) GOTO 0x1477; Pop(1)

0x1472: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1473: Pop(0)
0x1474: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1475: Pop(0)
0x1476: GOTO 0x147b

0x1477: Push("Can't find lsh animation : ")
0x1478: Pop(1); Push(Stack[-1] + Stack[-9]);
0x1479: @ Trace(Stack[-1])
0x147a: Pop(1)
0x147b: Return(); Pop(6)

0x147c: PushEmpty(float, cvector, float, cvector)
0x147d: @@ GetEyesHeight(Stack[-2])
0x147e: Pop(0)
0x147f: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x1480: Push(CvectorIndex(Stack[-1], 1))
0x1481: Stack[-1] = Stack[-3]
0x1482: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x1483: Push("head")
0x1484: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x1485: Pop(1)
0x1486: Return(); Pop(4)

0x1487: PushEmpty(bool)
0x1488: Call2 0x178f

0x1489: Pop(0)
0x148a: IF (Stack[-1] == 0) GOTO 0x148d; Pop(1)

0x148b: @ lshStopSpeech()
0x148c: Pop(0)
0x148d: Return(); Pop(0)

0x148e: PushEmpty(bool, bool)
0x148f: PushEmpty(bool, int, int)
0x1490: Stack[-2] = Stack[-7]
0x1491: Stack[-1] = Stack[-6]
0x1492: Call2 0x14b8

0x1493: Pop(2)
0x1494: IF (Stack[-1] == 0) GOTO 0x1498; Pop(1)

0x1495: Push((int) 0)
0x1496: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x1497: Pop(1)
0x1498: Return(); Pop(2)

0x1499: PushEmpty(int, bool, int, bool)
0x149a: PushEmpty(bool, int, int)
0x149b: Stack[-2] = Stack[-10]
0x149c: Stack[-1] = Stack[-9]
0x149d: Call2 0x14b8

0x149e: Pop(2)
0x149f: IF (Stack[-1] == 0) GOTO 0x14a7; Pop(1)

0x14a0: @ irand(Stack[-2], Stack[-5])
0x14a1: Pop(0)
0x14a2: Push((int) 0)
0x14a3: Push((int) 1)
0x14a4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x14a5: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x14a6: Pop(2)
0x14a7: Return(); Pop(4)

0x14a8: PushEmpty(object, object)
0x14a9: @ self(Stack[-1])
0x14aa: Pop(0)
0x14ab: Stack[-3] = Stack[-1]
0x14ac: Return(); Pop(2)

0x14ad: Stack[-1] = 0
0x14ae: PushEmpty(float, float)
0x14af: Pop(0); Push(Stack[-3] | Stack[-3]);
0x14b0: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x14b1: Push((float)0.0)
0x14b2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x14b3: IF (Stack[-1] == 0) GOTO 0x14b6; Pop(1)

0x14b4: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x14b5: Return(); Pop(2)

0x14b6: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x14b7: Return(); Pop(2)

0x14b8: PushEmpty(int, int)
0x14b9: @ irand(Stack[-1], Stack[-3])
0x14ba: Pop(0)
0x14bb: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x14bc: Return(); Pop(2)

0x14bd: PushEmpty()
0x14be: Pop(0); Push(Stack[-2] | Stack[-1]);
0x14bf: Pop(0); Push(Stack[-3] | Stack[-3]);
0x14c0: Pop(0); Push(Stack[-3] | Stack[-3]);
0x14c1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14c2: Pop(1); Push(Sqrt(Stack[-1]))
0x14c3: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x14c4: Return(); Pop(0)

0x14c5: PushEmpty()
0x14c6: Push(CvectorIndex(Stack[-2], 0))
0x14c7: Push(CvectorIndex(Stack[-2], 0))
0x14c8: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14c9: Push(CvectorIndex(Stack[-3], 2))
0x14ca: Push(CvectorIndex(Stack[-3], 2))
0x14cb: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14cc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x14cd: Return(); Pop(0)

0x14ce: PushEmpty()
0x14cf: Push(CvectorIndex(Stack[-1], 0))
0x14d0: Push(CvectorIndex(Stack[-2], 0))
0x14d1: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14d2: Push(CvectorIndex(Stack[-2], 2))
0x14d3: Push(CvectorIndex(Stack[-3], 2))
0x14d4: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14d5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14d6: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x14d7: Return(); Pop(0)

0x14d8: PushEmpty()
0x14d9: PushEmpty(float, cvector, cvector)
0x14da: Stack[-2] = Stack[-5]
0x14db: Stack[-1] = Stack[-4]
0x14dc: Call2 0x14c5

0x14dd: Pop(2)
0x14de: PushEmpty(float, cvector)
0x14df: Stack[-1] = Stack[-5]
0x14e0: Call2 0x14ce

0x14e1: Pop(1)
0x14e2: PushEmpty(float, cvector)
0x14e3: Stack[-1] = Stack[-5]
0x14e4: Call2 0x14ce

0x14e5: Pop(1)
0x14e6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14e7: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x14e8: Return(); Pop(0)

0x14e9: PushEmpty(int, int)
0x14ea: @ GetVariable(Stack[-3], Stack[-1])
0x14eb: Pop(0)
0x14ec: Stack[-4] = Stack[-1]
0x14ed: Return(); Pop(2)

0x14ee: PushEmpty(float, float)
0x14ef: @ GetGameTime(Stack[-1])
0x14f0: Pop(0)
0x14f1: Push((int) 1)
0x14f2: PushEmpty(int)
0x14f3: Push((int) 24)
0x14f4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x14f5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x14f6: Return(); Pop(2)

0x14f7: PushEmpty()
0x14f8: Return(); Pop(0)

0x14f9: PushEmpty()
0x14fa: Return(); Pop(0)

0x14fb: PushEmpty()
0x14fc: Return(); Pop(0)

0x14fd: PushEmpty()
0x14fe: Return(); Pop(0)

0x14ff: PushEmpty()
0x1500: Push("unholster")
0x1501: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1502: IF (Stack[-1] == 0) GOTO 0x150a; Pop(1)

0x1503: PushEmpty(bool, object)
0x1504: Stack[-1] = Stack[-4]
0x1505: Call2 0x15e0

0x1506: Stack[-5] = Stack[-2]
0x1507: Pop(2)
0x1508: Return(); Pop(0)

0x1509: GOTO 0x151d

0x150a: Push("player_shot")
0x150b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x150c: IF (Stack[-1] == 0) GOTO 0x1514; Pop(1)

0x150d: PushEmpty(bool, object)
0x150e: Stack[-1] = Stack[-4]
0x150f: Call2 0x15ed

0x1510: Stack[-5] = Stack[-2]
0x1511: Pop(2)
0x1512: Return(); Pop(0)

0x1513: GOTO 0x151d

0x1514: Push("battle")
0x1515: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1516: IF (Stack[-1] == 0) GOTO 0x151d; Pop(1)

0x1517: PushEmpty(bool, object)
0x1518: Stack[-1] = Stack[-4]
0x1519: Call2 0x1604

0x151a: Stack[-5] = Stack[-2]
0x151b: Pop(2)
0x151c: Return(); Pop(0)

0x151d: Stack[-3] = (bool) 0
0x151e: Return(); Pop(0)

0x151f: PushEmpty()
0x1520: Push("unholster")
0x1521: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1522: IF (Stack[-1] == 0) GOTO 0x1528; Pop(1)

0x1523: PushEmpty(object)
0x1524: Stack[-1] = Stack[-3]
0x1525: Call2 0x15e5

0x1526: Pop(1)
0x1527: GOTO 0x1537

0x1528: Push("player_shot")
0x1529: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x152a: IF (Stack[-1] == 0) GOTO 0x1530; Pop(1)

0x152b: PushEmpty(object)
0x152c: Stack[-1] = Stack[-3]
0x152d: Call2 0x15fc

0x152e: Pop(1)
0x152f: GOTO 0x1537

0x1530: Push("battle")
0x1531: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1532: IF (Stack[-1] == 0) GOTO 0x1537; Pop(1)

0x1533: PushEmpty(object)
0x1534: Stack[-1] = Stack[-3]
0x1535: Call2 0x160b

0x1536: Pop(1)
0x1537: Return(); Pop(0)

0x1538: PushEmpty(bool, bool)
0x1539: PushEmpty(bool)
0x153a: Stack[-1] = (bool) 0
0x153b: PushEmpty(bool, object)
0x153c: Stack[-1] = Stack[-6]
0x153d: Call2 0x15e0

0x153e: Pop(1)
0x153f: IF (Stack[-1] == 0) GOTO 0x1546; Pop(1)

0x1540: PushEmpty(bool, object)
0x1541: Stack[-1] = Stack[-6]
0x1542: Call2 0x136b

0x1543: Pop(1)
0x1544: IF (Stack[-1] == 0) GOTO 0x1546; Pop(1)

0x1545: Stack[-1] = (bool) 1
0x1546: IF (Stack[-1] == 0) GOTO 0x154d; Pop(1)

0x1547: @@ IsWeaponHolstered(Stack[-1])
0x1548: Pop(0)
0x1549: Pop(0); Push((bool) Stack[-1] == 0)
0x154a: IF (Stack[-1] == 0) GOTO 0x154d; Pop(1)

0x154b: Stack[-4] = (bool) 1
0x154c: Return(); Pop(2)

0x154d: Stack[-4] = (bool) 0
0x154e: Return(); Pop(2)

0x154f: PushEmpty()
0x1550: PushEmpty(object)
0x1551: Stack[-1] = Stack[-2]
0x1552: Call2 0x15e5

0x1553: Pop(1)
0x1554: Return(); Pop(0)

0x1555: PushEmpty()
0x1556: PushEmpty(bool, object)
0x1557: Stack[-1] = Stack[-3]
0x1558: Call2 0x136b

0x1559: Pop(1)
0x155a: IF (Stack[-1] == 0) GOTO 0x1561; Pop(1)

0x155b: PushEmpty(object)
0x155c: Call2 0x14a8

0x155d: Pop(0)
0x155e: Push((float)-0.05)
0x155f: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1560: Pop(2)
0x1561: Return(); Pop(0)

0x1562: PushEmpty(object, object)
0x1563: Push("heal")
0x1564: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1565: IF (Stack[-1] == 0) GOTO 0x1570; Pop(1)

0x1566: Push("player")
0x1567: @ FindActor(Stack[-2], Stack[-1])
0x1568: Pop(1)
0x1569: PushEmpty(bool, object)
0x156a: Stack[-1] = Stack[-3]
0x156b: Call2 0x1611

0x156c: Stack[-6] = Stack[-2]
0x156d: Pop(2)
0x156e: Return(); Pop(2)

0x156f: Stack[-1] = 0
0x1570: Stack[-4] = (bool) 0
0x1571: Return(); Pop(2)

0x1572: PushEmpty(object, object)
0x1573: Push("heal")
0x1574: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1575: IF (Stack[-1] == 0) GOTO 0x157e; Pop(1)

0x1576: Push("player")
0x1577: @ FindActor(Stack[-2], Stack[-1])
0x1578: Pop(1)
0x1579: PushEmpty(object)
0x157a: Stack[-1] = Stack[-2]
0x157b: Call2 0x1614

0x157c: Pop(1)
0x157d: Stack[-1] = 0
0x157e: Return(); Pop(2)

0x157f: PushEmpty(string, string)
0x1580: Stack[-1] = "idle"
0x1581: Push(Stack[-3])
0x1582: IF (Stack[-1] == 0) GOTO 0x1584; Pop(1)

0x1583: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1584: Stack[-4] = Stack[-1]
0x1585: Return(); Pop(2)

0x1586: PushEmpty(int, bool, int, bool)
0x1587: Stack[-2] = (int) 0
0x1588: Push("all")
0x1589: PushEmpty(string, int)
0x158a: Stack[-1] = Stack[-5]
0x158b: Call2 0x157f

0x158c: Pop(1)
0x158d: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x158e: Pop(2)
0x158f: Pop(0); Push((bool) Stack[-1] == 0)
0x1590: IF (Stack[-1] == 0) GOTO 0x1592; Pop(1)

0x1591: GOTO 0x1595

0x1592: Push((int) 1)
0x1593: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1594: GOTO 0x1588

0x1595: Stack[-5] = Stack[-2]
0x1596: Return(); Pop(4)

0x1597: PushEmpty()
0x1598: PushEmpty(bool)
0x1599: Call2 0x17c1

0x159a: Pop(0)
0x159b: IF (Stack[-1] == 0) GOTO 0x159e; Pop(1)

0x159c: Stack[-2] = (int) 2
0x159d: GOTO 0x159f

0x159e: Stack[-2] = (int) 0
0x159f: Return(); Pop(0)

0x15a0: PushEmpty()
0x15a1: PushEmpty(object)
0x15a2: Stack[-1] = Stack[-2]
0x15a3: Push(-1, 1); TaskCall(3)
0x15a4: Call2 0x293

0x15a5: Pop(-1, 1); TaskReturn
0x15a6: Pop(1)
0x15a7: Return(); Pop(0)

0x15a8: PushEmpty()
0x15a9: PushEmpty(bool, object)
0x15aa: Stack[-1] = Stack[-3]
0x15ab: Call2 0x13a5

0x15ac: Pop(1)
0x15ad: IF (Stack[-1] == 0) GOTO 0x15b0; Pop(1)

0x15ae: Stack[-2] = (int) 2
0x15af: GOTO 0x15b1

0x15b0: Stack[-2] = (int) 0
0x15b1: Return(); Pop(0)

0x15b2: PushEmpty()
0x15b3: PushEmpty(object)
0x15b4: Stack[-1] = Stack[-2]
0x15b5: Push(-1, 3); TaskCall(4)
0x15b6: Call2 0x3a6

0x15b7: Pop(-1, 3); TaskReturn
0x15b8: Pop(1)
0x15b9: Return(); Pop(0)

0x15ba: PushEmpty()
0x15bb: PushEmpty(bool, object)
0x15bc: Stack[-1] = Stack[-4]
0x15bd: Call2 0x13a5

0x15be: Pop(1)
0x15bf: IF (Stack[-1] == 0) GOTO 0x15c2; Pop(1)

0x15c0: Stack[-3] = (int) 2
0x15c1: GOTO 0x15c3

0x15c2: Stack[-3] = (int) 0
0x15c3: Return(); Pop(0)

0x15c4: PushEmpty()
0x15c5: PushEmpty(object)
0x15c6: Stack[-1] = Stack[-2]
0x15c7: Push(-1, 3); TaskCall(5)
0x15c8: Call2 0x4a2

0x15c9: Pop(-1, 3); TaskReturn
0x15ca: Pop(1)
0x15cb: Return(); Pop(0)

0x15cc: PushEmpty()
0x15cd: Stack[-2] = (int) 0
0x15ce: Return(); Pop(0)

0x15cf: PushEmpty()
0x15d0: Return(); Pop(0)

0x15d1: PushEmpty()
0x15d2: Stack[-3] = (int) 0
0x15d3: Return(); Pop(0)

0x15d4: PushEmpty()
0x15d5: Return(); Pop(0)

0x15d6: PushEmpty()
0x15d7: Stack[-2] = (int) 2
0x15d8: Return(); Pop(0)

0x15d9: PushEmpty()
0x15da: PushEmpty(object)
0x15db: Stack[-1] = Stack[-2]
0x15dc: Call2 0x1799

0x15dd: Pop(1)
0x15de: Return(); Pop(0)

0x15df: Return(); Pop(0)

0x15e0: PushEmpty(bool, bool)
0x15e1: @ CanSee(Stack[-1], Stack[-3])
0x15e2: Pop(0)
0x15e3: Stack[-4] = Stack[-1]
0x15e4: Return(); Pop(2)

0x15e5: PushEmpty()
0x15e6: PushEmpty(object)
0x15e7: Stack[-1] = Stack[-2]
0x15e8: Push(-1, 3); TaskCall(6)
0x15e9: Call2 0x564

0x15ea: Pop(-1, 3); TaskReturn
0x15eb: Pop(1)
0x15ec: Return(); Pop(0)

0x15ed: PushEmpty(bool, bool)
0x15ee: @ CanSee(Stack[-1], Stack[-3])
0x15ef: Pop(0)
0x15f0: Stack[-4] = (bool) 1
0x15f1: Push(Stack[-1])
0x15f2: IF (Stack[-1] == 0) GOTO 0x15fb; Pop(1)

0x15f3: PushEmpty(float, object)
0x15f4: Stack[-1] = Stack[-5]
0x15f5: Call2 0x1363

0x15f6: Pop(1)
0x15f7: Push((int) 4000000)
0x15f8: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x15f9: IF (Stack[-1] == 0) GOTO 0x15fb; Pop(1)

0x15fa: Stack[-4] = (bool) 0
0x15fb: Return(); Pop(2)

0x15fc: PushEmpty()
0x15fd: PushEmpty(object)
0x15fe: Stack[-1] = Stack[-2]
0x15ff: Push(-1, 3); TaskCall(7)
0x1600: Call2 0x626

0x1601: Pop(-1, 3); TaskReturn
0x1602: Pop(1)
0x1603: Return(); Pop(0)

0x1604: PushEmpty()
0x1605: PushEmpty(bool, object)
0x1606: Stack[-1] = Stack[-3]
0x1607: Call2 0x15ed

0x1608: Stack[-4] = Stack[-2]
0x1609: Pop(2)
0x160a: Return(); Pop(0)

0x160b: PushEmpty()
0x160c: PushEmpty(object)
0x160d: Stack[-1] = Stack[-2]
0x160e: Call2 0x15fc

0x160f: Pop(1)
0x1610: Return(); Pop(0)

0x1611: PushEmpty()
0x1612: Stack[-2] = (bool) 0
0x1613: Return(); Pop(0)

0x1614: PushEmpty()
0x1615: Return(); Pop(0)

0x1616: PushEmpty()
0x1617: Push((int) 1000)
0x1618: @@ SetReturnValue(Stack[-1])
0x1619: Pop(1)
0x161a: Return(); Pop(0)

0x161b: PushEmpty()
0x161c: PushEmpty(int, string)
0x161d: Stack[-1] = "branch"
0x161e: Call2 0x14e9

0x161f: Pop(1)
0x1620: Push((int) 0)
0x1621: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1622: IF (Stack[-1] == 0) GOTO 0x1625; Pop(1)

0x1623: Stack[-2] = (bool) 1
0x1624: Return(); Pop(0)

0x1625: Stack[-2] = (bool) 0
0x1626: Return(); Pop(0)

0x1627: PushEmpty()
0x1628: PushEmpty(int, string)
0x1629: Stack[-1] = "branch"
0x162a: Call2 0x14e9

0x162b: Pop(1)
0x162c: Push((int) 2)
0x162d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x162e: IF (Stack[-1] == 0) GOTO 0x1631; Pop(1)

0x162f: Stack[-2] = (bool) 1
0x1630: Return(); Pop(0)

0x1631: Stack[-2] = (bool) 0
0x1632: Return(); Pop(0)

0x1633: PushEmpty()
0x1634: PushEmpty(bool, object)
0x1635: Stack[-1] = Stack[-3]
0x1636: Call2 0x16ab

0x1637: Pop(1)
0x1638: IF (Stack[-1] == 0) GOTO 0x163b; Pop(1)

0x1639: Stack[-2] = (bool) 1
0x163a: Return(); Pop(0)

0x163b: Stack[-2] = (bool) 0
0x163c: Return(); Pop(0)

0x163d: PushEmpty()
0x163e: PushEmpty(bool, object)
0x163f: Stack[-1] = Stack[-3]
0x1640: Call2 0x16b2

0x1641: Pop(1)
0x1642: IF (Stack[-1] == 0) GOTO 0x1645; Pop(1)

0x1643: Stack[-2] = (bool) 1
0x1644: Return(); Pop(0)

0x1645: Stack[-2] = (bool) 0
0x1646: Return(); Pop(0)

0x1647: PushEmpty()
0x1648: PushEmpty(bool, object)
0x1649: Stack[-1] = Stack[-3]
0x164a: Call2 0x16b9

0x164b: Pop(1)
0x164c: IF (Stack[-1] == 0) GOTO 0x164f; Pop(1)

0x164d: Stack[-2] = (bool) 1
0x164e: Return(); Pop(0)

0x164f: Stack[-2] = (bool) 0
0x1650: Return(); Pop(0)

0x1651: PushEmpty()
0x1652: PushEmpty(bool, object)
0x1653: Stack[-1] = Stack[-3]
0x1654: Call2 0x16c0

0x1655: Pop(1)
0x1656: IF (Stack[-1] == 0) GOTO 0x1659; Pop(1)

0x1657: Stack[-2] = (bool) 1
0x1658: Return(); Pop(0)

0x1659: Stack[-2] = (bool) 0
0x165a: Return(); Pop(0)

0x165b: PushEmpty()
0x165c: PushEmpty(bool, object)
0x165d: Stack[-1] = Stack[-3]
0x165e: Call2 0x16c7

0x165f: Pop(1)
0x1660: IF (Stack[-1] == 0) GOTO 0x1663; Pop(1)

0x1661: Stack[-2] = (bool) 1
0x1662: Return(); Pop(0)

0x1663: Stack[-2] = (bool) 0
0x1664: Return(); Pop(0)

0x1665: PushEmpty()
0x1666: PushEmpty(bool, object)
0x1667: Stack[-1] = Stack[-3]
0x1668: Call2 0x16ce

0x1669: Pop(1)
0x166a: IF (Stack[-1] == 0) GOTO 0x166d; Pop(1)

0x166b: Stack[-2] = (bool) 1
0x166c: Return(); Pop(0)

0x166d: Stack[-2] = (bool) 0
0x166e: Return(); Pop(0)

0x166f: PushEmpty()
0x1670: PushEmpty(bool, object)
0x1671: Stack[-1] = Stack[-3]
0x1672: Call2 0x16d5

0x1673: Pop(1)
0x1674: IF (Stack[-1] == 0) GOTO 0x1677; Pop(1)

0x1675: Stack[-2] = (bool) 1
0x1676: Return(); Pop(0)

0x1677: Stack[-2] = (bool) 0
0x1678: Return(); Pop(0)

0x1679: PushEmpty()
0x167a: PushEmpty(bool, object)
0x167b: Stack[-1] = Stack[-3]
0x167c: Call2 0x16dc

0x167d: Pop(1)
0x167e: IF (Stack[-1] == 0) GOTO 0x1681; Pop(1)

0x167f: Stack[-2] = (bool) 1
0x1680: Return(); Pop(0)

0x1681: Stack[-2] = (bool) 0
0x1682: Return(); Pop(0)

0x1683: PushEmpty()
0x1684: PushEmpty(bool, object)
0x1685: Stack[-1] = Stack[-3]
0x1686: Call2 0x16e3

0x1687: Pop(1)
0x1688: IF (Stack[-1] == 0) GOTO 0x168b; Pop(1)

0x1689: Stack[-2] = (bool) 1
0x168a: Return(); Pop(0)

0x168b: Stack[-2] = (bool) 0
0x168c: Return(); Pop(0)

0x168d: PushEmpty()
0x168e: PushEmpty(bool, object)
0x168f: Stack[-1] = Stack[-3]
0x1690: Call2 0x16ea

0x1691: Pop(1)
0x1692: IF (Stack[-1] == 0) GOTO 0x1695; Pop(1)

0x1693: Stack[-2] = (bool) 1
0x1694: Return(); Pop(0)

0x1695: Stack[-2] = (bool) 0
0x1696: Return(); Pop(0)

0x1697: PushEmpty()
0x1698: PushEmpty(bool, object)
0x1699: Stack[-1] = Stack[-3]
0x169a: Call2 0x16f1

0x169b: Pop(1)
0x169c: IF (Stack[-1] == 0) GOTO 0x169f; Pop(1)

0x169d: Stack[-2] = (bool) 1
0x169e: Return(); Pop(0)

0x169f: Stack[-2] = (bool) 0
0x16a0: Return(); Pop(0)

0x16a1: PushEmpty()
0x16a2: PushEmpty(bool, object)
0x16a3: Stack[-1] = Stack[-3]
0x16a4: Call2 0x16f8

0x16a5: Pop(1)
0x16a6: IF (Stack[-1] == 0) GOTO 0x16a9; Pop(1)

0x16a7: Stack[-2] = (bool) 1
0x16a8: Return(); Pop(0)

0x16a9: Stack[-2] = (bool) 0
0x16aa: Return(); Pop(0)

0x16ab: PushEmpty()
0x16ac: PushEmpty(int)
0x16ad: Call2 0x14ee

0x16ae: Pop(0)
0x16af: Push((int) 1)
0x16b0: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16b1: Return(); Pop(0)

0x16b2: PushEmpty()
0x16b3: PushEmpty(int)
0x16b4: Call2 0x14ee

0x16b5: Pop(0)
0x16b6: Push((int) 2)
0x16b7: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16b8: Return(); Pop(0)

0x16b9: PushEmpty()
0x16ba: PushEmpty(int)
0x16bb: Call2 0x14ee

0x16bc: Pop(0)
0x16bd: Push((int) 3)
0x16be: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16bf: Return(); Pop(0)

0x16c0: PushEmpty()
0x16c1: PushEmpty(int)
0x16c2: Call2 0x14ee

0x16c3: Pop(0)
0x16c4: Push((int) 4)
0x16c5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16c6: Return(); Pop(0)

0x16c7: PushEmpty()
0x16c8: PushEmpty(int)
0x16c9: Call2 0x14ee

0x16ca: Pop(0)
0x16cb: Push((int) 5)
0x16cc: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16cd: Return(); Pop(0)

0x16ce: PushEmpty()
0x16cf: PushEmpty(int)
0x16d0: Call2 0x14ee

0x16d1: Pop(0)
0x16d2: Push((int) 6)
0x16d3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16d4: Return(); Pop(0)

0x16d5: PushEmpty()
0x16d6: PushEmpty(int)
0x16d7: Call2 0x14ee

0x16d8: Pop(0)
0x16d9: Push((int) 7)
0x16da: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16db: Return(); Pop(0)

0x16dc: PushEmpty()
0x16dd: PushEmpty(int)
0x16de: Call2 0x14ee

0x16df: Pop(0)
0x16e0: Push((int) 8)
0x16e1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16e2: Return(); Pop(0)

0x16e3: PushEmpty()
0x16e4: PushEmpty(int)
0x16e5: Call2 0x14ee

0x16e6: Pop(0)
0x16e7: Push((int) 9)
0x16e8: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16e9: Return(); Pop(0)

0x16ea: PushEmpty()
0x16eb: PushEmpty(int)
0x16ec: Call2 0x14ee

0x16ed: Pop(0)
0x16ee: Push((int) 10)
0x16ef: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16f0: Return(); Pop(0)

0x16f1: PushEmpty()
0x16f2: PushEmpty(int)
0x16f3: Call2 0x14ee

0x16f4: Pop(0)
0x16f5: Push((int) 11)
0x16f6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16f7: Return(); Pop(0)

0x16f8: PushEmpty()
0x16f9: PushEmpty(int)
0x16fa: Call2 0x14ee

0x16fb: Pop(0)
0x16fc: Push((int) 12)
0x16fd: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x16fe: Return(); Pop(0)

0x16ff: PushEmpty(int, int)
0x1700: Push("branch")
0x1701: @ GetVariable(Stack[-1], Stack[-2])
0x1702: Pop(1)
0x1703: Push((int) 0)
0x1704: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1705: IF (Stack[-1] == 0) GOTO 0x1709; Pop(1)

0x1706: Stack[-3] = (int) 1
0x1707: Return(); Pop(2)

0x1708: GOTO 0x170e

0x1709: Push((int) 1)
0x170a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x170b: IF (Stack[-1] == 0) GOTO 0x170e; Pop(1)

0x170c: Stack[-3] = (int) 2
0x170d: Return(); Pop(2)

0x170e: Stack[-3] = (int) 3
0x170f: Return(); Pop(2)

0x1710: PushEmpty(int, int)
0x1711: Push("branch")
0x1712: @ GetVariable(Stack[-1], Stack[-2])
0x1713: Pop(1)
0x1714: Stack[-3] = Stack[-1]
0x1715: Return(); Pop(2)

0x1716: PushEmpty()
0x1717: PushEmpty(int)
0x1718: Call2 0x1710

0x1719: Pop(0)
0x171a: Push((int) 1)
0x171b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x171c: IF (Stack[-1] == 0) GOTO 0x1720; Pop(1)

0x171d: @ WorkWithCorpse(Stack[-1])
0x171e: Pop(0)
0x171f: GOTO 0x1722

0x1720: @ Barter(Stack[-1])
0x1721: Pop(0)
0x1722: Return(); Pop(0)

0x1723: PushEmpty(int, bool, int, int, bool, int)
0x1724: Push((int) 0)
0x1725: @ ClearSubContainer(Stack[-1])
0x1726: Pop(1)
0x1727: PushEmpty(int)
0x1728: Call2 0x14ee

0x1729: Stack[-2] = Stack[-1]
0x172a: Pop(1)
0x172b: Push(Stack[-7])
0x172c: IF (Stack[-1] == 0) GOTO 0x1759; Pop(1)

0x172d: PushEmpty(string, int, int, int)
0x172e: Stack[-4] = "alpha_pills"
0x172f: Stack[-3] = (int) 1
0x1730: Stack[-2] = (int) 2
0x1731: Stack[-1] = (int) 4
0x1732: Call2 0x1499

0x1733: Pop(4)
0x1734: PushEmpty(string, int, int, int)
0x1735: Stack[-4] = "meradorm"
0x1736: Stack[-3] = (int) 2
0x1737: Stack[-2] = (int) 3
0x1738: Stack[-1] = (int) 3
0x1739: Call2 0x1499

0x173a: Pop(4)
0x173b: Push((int) 3)
0x173c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x173d: IF (Stack[-1] == 0) GOTO 0x1744; Pop(1)

0x173e: PushEmpty(string, int, int)
0x173f: Stack[-3] = "beta_pills"
0x1740: Stack[-2] = (int) 1
0x1741: Stack[-1] = (int) 4
0x1742: Call2 0x148e

0x1743: Pop(3)
0x1744: Push((int) 8)
0x1745: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1746: IF (Stack[-1] == 0) GOTO 0x174f; Pop(1)

0x1747: PushEmpty(string, int, int, int)
0x1748: Stack[-4] = "monomicin"
0x1749: Stack[-3] = (int) 1
0x174a: Stack[-2] = (int) 2
0x174b: Stack[-1] = (int) 2
0x174c: Call2 0x1499

0x174d: Pop(4)
0x174e: GOTO 0x1758

0x174f: Push((int) 4)
0x1750: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1751: IF (Stack[-1] == 0) GOTO 0x1758; Pop(1)

0x1752: PushEmpty(string, int, int)
0x1753: Stack[-3] = "monomicin"
0x1754: Stack[-2] = (int) 1
0x1755: Stack[-1] = (int) 2
0x1756: Call2 0x148e

0x1757: Pop(3)
0x1758: GOTO 0x1786

0x1759: PushEmpty(string, int, int)
0x175a: Stack[-3] = "lockpick"
0x175b: Stack[-2] = (int) 1
0x175c: Stack[-1] = (int) 4
0x175d: Call2 0x148e

0x175e: Pop(3)
0x175f: PushEmpty(string, int, int)
0x1760: Stack[-3] = "rifle_ammo"
0x1761: Stack[-2] = (int) 1
0x1762: Stack[-1] = (int) 2
0x1763: Call2 0x148e

0x1764: Pop(3)
0x1765: PushEmpty(string, int, int)
0x1766: Stack[-3] = "revolver_ammo"
0x1767: Stack[-2] = (int) 1
0x1768: Stack[-1] = (int) 2
0x1769: Call2 0x148e

0x176a: Pop(3)
0x176b: PushEmpty(string, int, int, int)
0x176c: Stack[-4] = "samopal_ammo"
0x176d: Stack[-3] = (int) 1
0x176e: Stack[-2] = (int) 2
0x176f: Stack[-1] = (int) 2
0x1770: Call2 0x1499

0x1771: Pop(4)
0x1772: Push((int) 8)
0x1773: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1774: IF (Stack[-1] == 0) GOTO 0x177d; Pop(1)

0x1775: PushEmpty(string, int, int, int)
0x1776: Stack[-4] = "monomicin"
0x1777: Stack[-3] = (int) 1
0x1778: Stack[-2] = (int) 2
0x1779: Stack[-1] = (int) 2
0x177a: Call2 0x1499

0x177b: Pop(4)
0x177c: GOTO 0x1786

0x177d: Push((int) 4)
0x177e: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x177f: IF (Stack[-1] == 0) GOTO 0x1786; Pop(1)

0x1780: PushEmpty(string, int, int)
0x1781: Stack[-3] = "monomicin"
0x1782: Stack[-2] = (int) 1
0x1783: Stack[-1] = (int) 2
0x1784: Call2 0x148e

0x1785: Pop(3)
0x1786: Return(); Pop(6)

0x1787: Stack[-1] = (int) 515558
0x1788: Return(); Pop(0)

0x1789: Stack[-1] = (int) 503343
0x178a: Return(); Pop(0)

0x178b: Stack[-1] = "ui/NPC_Citizen3.png"
0x178c: Return(); Pop(0)

0x178d: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x178e: Return(); Pop(0)

0x178f: Stack[-1] = (bool) 0
0x1790: Return(); Pop(0)

0x1791: Push(GlobalVars[0])
0x1792: Stack[-1] = (bool) 0
0x1793: GlobalVars[0] = Stack[-1]; Pop(1)
0x1794: PushEmpty(bool)
0x1795: Stack[-1] = (bool) 1
0x1796: Call2 0x1723

0x1797: Pop(1)
0x1798: Return(); Pop(0)

0x1799: PushEmpty(bool, bool)
0x179a: Push(GlobalVars[0])
0x179b: IF (Stack[-1] == 0) GOTO 0x17a6; Pop(1)

0x179c: @ IsOverrideActive(Stack[-1])
0x179d: Pop(0)
0x179e: Pop(0); Push((bool) Stack[-1] == 0)
0x179f: IF (Stack[-1] == 0) GOTO 0x17a4; Pop(1)

0x17a0: PushEmpty(object)
0x17a1: Stack[-1] = Stack[-4]
0x17a2: Call2 0x1716

0x17a3: Pop(1)
0x17a4: Return(); Pop(2)

0x17a5: GOTO 0x17c0

0x17a6: Push((int) 1000)
0x17a7: PushEmpty(int, object)
0x17a8: Stack[-1] = Stack[-6]
0x17a9: Push(-2, 1); TaskCall(8)
0x17aa: Call2 0x6c3

0x17ab: Pop(-2, 1); TaskReturn
0x17ac: Pop(1)
0x17ad: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17ae: IF (Stack[-1] == 0) GOTO 0x17c0; Pop(1)

0x17af: PushEmpty(bool, object)
0x17b0: Stack[-1] = Stack[-5]
0x17b1: Call2 0x1422

0x17b2: Pop(1)
0x17b3: Pop(1); Push((bool) Stack[-1] == 0)
0x17b4: IF (Stack[-1] == 0) GOTO 0x17b6; Pop(1)

0x17b5: Return(); Pop(2)

0x17b6: PushEmpty(object)
0x17b7: Stack[-1] = Stack[-4]
0x17b8: Push(-1, 1); TaskCall(0)
0x17b9: Call2 0x0

0x17ba: Pop(-1, 1); TaskReturn
0x17bb: Pop(1)
0x17bc: PushEmpty(object)
0x17bd: Stack[-1] = Stack[-4]
0x17be: Call2 0x1459

0x17bf: Pop(1)
0x17c0: Return(); Pop(2)

0x17c1: Stack[-1] = (bool) 0
0x17c2: Return(); Pop(0)

0x17c3: PushEmpty()
0x17c4: Stack[-4] = (bool) 0
0x17c5: Return(); Pop(0)

