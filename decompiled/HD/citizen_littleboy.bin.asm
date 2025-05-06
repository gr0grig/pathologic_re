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
	class
	rat
	rat_big
	dog
	SetReturnValue
	branch
	reputation
	rifle_ammo
	revolver_ammo
	samopal_ammo
	lockpick
	alpha_pills
	meradorm
	powder
	beta_pills
	gamma_pills
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
	CameraTransit (3 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
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
		EVENT_11 Op = 0x9d1 Vars = (int, int)

Events:
EVENT_16 Op = 0x1527 Vars = (object, string)
EVENT_41 Op = 0x1529 Vars = (object)
EVENT_22 Op = 0x152b Vars = (object, int, float, float)
EVENT_43 Op = 0x152d Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x182b

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x1485

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
0x1c: Call2 0x182b

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
0x2c: Call2 0x182d

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
0x38: Call2 0x13ec

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x1651

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0x1648

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
0x51: Call2 0x164b

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x1585

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0x15d8

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
0x69: Call2 0x15e2

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x1863

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0x15ea

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
0x85: Call2 0x15f4

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x163e

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
0x99: Call2 0x1641

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0x152f

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x154f

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0x1643

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
0xbe: Call2 0x1646

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0x1592

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x15a2

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0x1568

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0x157f

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
0xf8: Call2 0x1651

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
0x111: Call2 0x1529

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0x13c9

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
0x126: Call2 0x15c7

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
0x134: Call2 0x15d0

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
0x19c: Call2 0x1648

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
0x1aa: Call2 0x164b

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0x1585

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0x15d8

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
0x1c2: Call2 0x15e2

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0x1863

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x15ea

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
0x1de: Call2 0x15f4

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0x163e

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
0x1f2: Call2 0x1641

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x152f

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0x154f

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x1643

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
0x217: Call2 0x1646

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x1592

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0x15a2

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x1651

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0x1568

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x157f

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x13ec

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x15b6

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x13ec

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
0x263: Call2 0x15af

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
0x29c: Call2 0x1380

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x1500

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x13e1

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
0x2b4: Call2 0x13e1

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
0x2c8: Call2 0x14a4

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0x1648

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
0x2dc: Call2 0x164b

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x1585

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0x15d8

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
0x2f4: Call2 0x15e2

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x1863

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0x15ea

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
0x310: Call2 0x15f4

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x163e

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
0x324: Call2 0x1641

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0x152f

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0x154f

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x1643

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
0x349: Call2 0x1646

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x1592

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0x15a2

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
0x36b: Call2 0x1529

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x13c9

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
0x381: Call2 0x1380

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0x1500

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x13e1

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x1651

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x1568

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0x157f

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
0x3c6: Call2 0x1651

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
0x3d3: Call2 0x14d6

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x14d6

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
0x409: Call2 0x137b

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
0x424: Call2 0x137b

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
0x460: Call2 0x137b

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
0x471: Call2 0x1529

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x1380

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x14e5

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
0x48e: Call2 0x14d6

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x14d6

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
0x4c4: Call2 0x137b

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
0x4df: Call2 0x137b

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
0x51b: Call2 0x137b

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
0x52c: Call2 0x1529

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x1380

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x14e5

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x1651

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
0x550: Call2 0x14d6

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x14d6

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
0x586: Call2 0x137b

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
0x5a1: Call2 0x137b

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
0x5dd: Call2 0x137b

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
0x5ee: Call2 0x1529

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x1380

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0x14e5

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x1651

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
0x612: Call2 0x14d6

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x14d6

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
0x648: Call2 0x137b

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
0x663: Call2 0x137b

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
0x69f: Call2 0x137b

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
0x6b0: Call2 0x1529

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x1380

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0x14e5

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x13f1

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x1825

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x1823

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x1827

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x1829

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x17a5

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
0x704: Call2 0x1436

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
0x712: IF (Stack[-1] == 0) GOTO 0x99d; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x1699

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x84d; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x9bb

0x71b: Pop(1)
0x71c: Push((int) 543247)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 1
0x723: PushEmpty(bool)
0x724: Stack[-1] = (bool) 1
0x725: PushEmpty(bool, object)
0x726: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x727: Call2 0x16af

0x728: Pop(1)
0x729: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72a: PushEmpty(bool, object)
0x72b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72c: Call2 0x16e1

0x72d: Pop(1)
0x72e: IF (Stack[-1] == 0) GOTO 0x730; Pop(1)

0x72f: Stack[-1] = (bool) 0
0x730: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x731: PushEmpty(bool, object)
0x732: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x733: Call2 0x16ff

0x734: Pop(1)
0x735: IF (Stack[-1] == 0) GOTO 0x737; Pop(1)

0x736: Stack[-1] = (bool) 0
0x737: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x738: Push((int) 543249)
0x739: Push((int) 45709)
0x73a: Push((int) 45705)
0x73b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73c: Pop(3)
0x73d: PushEmpty(bool, object)
0x73e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73f: Call2 0x16cd

0x740: Pop(1)
0x741: IF (Stack[-1] == 0) GOTO 0x747; Pop(1)

0x742: Push((int) 543251)
0x743: Push((int) 45719)
0x744: Push((int) 45707)
0x745: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x746: Pop(3)
0x747: PushEmpty(bool)
0x748: Stack[-1] = (bool) 1
0x749: PushEmpty(bool, object)
0x74a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74b: Call2 0x16cd

0x74c: Pop(1)
0x74d: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x74e: PushEmpty(bool, object)
0x74f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x750: Call2 0x16d7

0x751: Pop(1)
0x752: IF (Stack[-1] == 0) GOTO 0x754; Pop(1)

0x753: Stack[-1] = (bool) 0
0x754: IF (Stack[-1] == 0) GOTO 0x75a; Pop(1)

0x755: Push((int) 543277)
0x756: Push((int) 45734)
0x757: Push((int) 45733)
0x758: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x759: Pop(3)
0x75a: PushEmpty(bool)
0x75b: Stack[-1] = (bool) 1
0x75c: PushEmpty(bool, object)
0x75d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75e: Call2 0x16eb

0x75f: Pop(1)
0x760: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x761: PushEmpty(bool, object)
0x762: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x763: Call2 0x16f5

0x764: Pop(1)
0x765: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x766: Stack[-1] = (bool) 0
0x767: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x768: Push((int) 543282)
0x769: Push((int) 45739)
0x76a: Push((int) 45738)
0x76b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x76c: Pop(3)
0x76d: PushEmpty(bool)
0x76e: Stack[-1] = (bool) 1
0x76f: PushEmpty(bool)
0x770: Stack[-1] = (bool) 1
0x771: PushEmpty(bool)
0x772: Stack[-1] = (bool) 1
0x773: PushEmpty(bool, object)
0x774: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x775: Call2 0x16a5

0x776: Pop(1)
0x777: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x778: PushEmpty(bool, object)
0x779: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77a: Call2 0x16af

0x77b: Pop(1)
0x77c: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77d: Stack[-1] = (bool) 0
0x77e: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x77f: PushEmpty(bool, object)
0x780: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x781: Call2 0x16b9

0x782: Pop(1)
0x783: IF (Stack[-1] == 0) GOTO 0x785; Pop(1)

0x784: Stack[-1] = (bool) 0
0x785: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x786: PushEmpty(bool, object)
0x787: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x788: Call2 0x16c3

0x789: Pop(1)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Stack[-1] = (bool) 0
0x78c: IF (Stack[-1] == 0) GOTO 0x792; Pop(1)

0x78d: Push((int) 543250)
0x78e: Push((int) -1)
0x78f: Push((int) 45706)
0x790: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x791: Pop(3)
0x792: PushEmpty(bool)
0x793: Stack[-1] = (bool) 1
0x794: PushEmpty(bool)
0x795: Stack[-1] = (bool) 1
0x796: PushEmpty(bool)
0x797: Stack[-1] = (bool) 1
0x798: PushEmpty(bool, object)
0x799: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79a: Call2 0x16cd

0x79b: Pop(1)
0x79c: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x79d: PushEmpty(bool, object)
0x79e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79f: Call2 0x16d7

0x7a0: Pop(1)
0x7a1: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x7a2: Stack[-1] = (bool) 0
0x7a3: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a4: PushEmpty(bool, object)
0x7a5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a6: Call2 0x16e1

0x7a7: Pop(1)
0x7a8: IF (Stack[-1] == 0) GOTO 0x7aa; Pop(1)

0x7a9: Stack[-1] = (bool) 0
0x7aa: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7ab: PushEmpty(bool, object)
0x7ac: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ad: Call2 0x16eb

0x7ae: Pop(1)
0x7af: IF (Stack[-1] == 0) GOTO 0x7b1; Pop(1)

0x7b0: Stack[-1] = (bool) 0
0x7b1: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b2: Push((int) 543262)
0x7b3: Push((int) -1)
0x7b4: Push((int) 45718)
0x7b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b6: Pop(3)
0x7b7: PushEmpty(bool)
0x7b8: Stack[-1] = (bool) 1
0x7b9: PushEmpty(bool)
0x7ba: Stack[-1] = (bool) 1
0x7bb: PushEmpty(bool)
0x7bc: Stack[-1] = (bool) 1
0x7bd: PushEmpty(bool, object)
0x7be: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bf: Call2 0x16f5

0x7c0: Pop(1)
0x7c1: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c2: PushEmpty(bool, object)
0x7c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c4: Call2 0x16ff

0x7c5: Pop(1)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7c8; Pop(1)

0x7c7: Stack[-1] = (bool) 0
0x7c8: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7c9: PushEmpty(bool, object)
0x7ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cb: Call2 0x1709

0x7cc: Pop(1)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7cf; Pop(1)

0x7ce: Stack[-1] = (bool) 0
0x7cf: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d0: PushEmpty(bool, object)
0x7d1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7d2: Call2 0x1713

0x7d3: Pop(1)
0x7d4: IF (Stack[-1] == 0) GOTO 0x7d6; Pop(1)

0x7d5: Stack[-1] = (bool) 0
0x7d6: IF (Stack[-1] == 0) GOTO 0x7dc; Pop(1)

0x7d7: Push((int) 543276)
0x7d8: Push((int) -1)
0x7d9: Push((int) 45732)
0x7da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7db: Pop(3)
0x7dc: PushEmpty(bool)
0x7dd: Stack[-1] = (bool) 1
0x7de: PushEmpty(bool)
0x7df: Stack[-1] = (bool) 1
0x7e0: PushEmpty(bool)
0x7e1: Stack[-1] = (bool) 1
0x7e2: PushEmpty(bool, object)
0x7e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e4: Call2 0x16a5

0x7e5: Pop(1)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7e7: PushEmpty(bool, object)
0x7e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e9: Call2 0x16b9

0x7ea: Pop(1)
0x7eb: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7ec: Stack[-1] = (bool) 0
0x7ed: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7ee: PushEmpty(bool, object)
0x7ef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f0: Call2 0x16c3

0x7f1: Pop(1)
0x7f2: IF (Stack[-1] == 0) GOTO 0x7f4; Pop(1)

0x7f3: Stack[-1] = (bool) 0
0x7f4: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7f5: PushEmpty(bool, object)
0x7f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f7: Call2 0x16e1

0x7f8: Pop(1)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fb; Pop(1)

0x7fa: Stack[-1] = (bool) 0
0x7fb: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7fc: Push((int) 543248)
0x7fd: Push((int) -1)
0x7fe: Push((int) 45704)
0x7ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x800: Pop(3)
0x801: PushEmpty(bool)
0x802: Stack[-1] = (bool) 1
0x803: PushEmpty(bool)
0x804: Stack[-1] = (bool) 1
0x805: PushEmpty(bool)
0x806: Stack[-1] = (bool) 1
0x807: PushEmpty(bool, object)
0x808: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x809: Call2 0x16d7

0x80a: Pop(1)
0x80b: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x80c: PushEmpty(bool, object)
0x80d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80e: Call2 0x16cd

0x80f: Pop(1)
0x810: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x811: Stack[-1] = (bool) 0
0x812: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x813: PushEmpty(bool, object)
0x814: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x815: Call2 0x16eb

0x816: Pop(1)
0x817: IF (Stack[-1] == 0) GOTO 0x819; Pop(1)

0x818: Stack[-1] = (bool) 0
0x819: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81a: PushEmpty(bool, object)
0x81b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81c: Call2 0x16af

0x81d: Pop(1)
0x81e: IF (Stack[-1] == 0) GOTO 0x820; Pop(1)

0x81f: Stack[-1] = (bool) 0
0x820: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x821: Push((int) 543252)
0x822: Push((int) -1)
0x823: Push((int) 45708)
0x824: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x825: Pop(3)
0x826: PushEmpty(bool)
0x827: Stack[-1] = (bool) 1
0x828: PushEmpty(bool, object)
0x829: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82a: Call2 0x1709

0x82b: Pop(1)
0x82c: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82d: PushEmpty(bool, object)
0x82e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82f: Call2 0x1713

0x830: Pop(1)
0x831: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x832: Stack[-1] = (bool) 0
0x833: IF (Stack[-1] == 0) GOTO 0x839; Pop(1)

0x834: Push((int) 543281)
0x835: Push((int) -1)
0x836: Push((int) 45737)
0x837: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x838: Pop(3)
0x839: PushEmpty(bool)
0x83a: Stack[-1] = (bool) 1
0x83b: PushEmpty(bool, object)
0x83c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x83d: Call2 0x16f5

0x83e: Pop(1)
0x83f: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x840: PushEmpty(bool, object)
0x841: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x842: Call2 0x16ff

0x843: Pop(1)
0x844: IF (Stack[-1] == 0) GOTO 0x846; Pop(1)

0x845: Stack[-1] = (bool) 0
0x846: IF (Stack[-1] == 0) GOTO 0x84c; Pop(1)

0x847: Push((int) 543275)
0x848: Push((int) -1)
0x849: Push((int) 45731)
0x84a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84b: Pop(3)
0x84c: GOTO 0x99d

0x84d: PushEmpty(string)
0x84e: Stack[-1] = "Neutral"
0x84f: Call2 0x9bb

0x850: Pop(1)
0x851: Push((int) 537506)
0x852: @@ SetMessage(Stack[-1])
0x853: Pop(1)
0x854: @@ ClearReplies()
0x855: Pop(0)
0x856: Push((int) 537507)
0x857: Push((int) -1)
0x858: Push((int) 39354)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: PushEmpty(bool)
0x85c: Stack[-1] = (bool) 0
0x85d: PushEmpty(bool)
0x85e: Stack[-1] = (bool) 0
0x85f: PushEmpty(bool, object)
0x860: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x861: Call2 0x168d

0x862: Pop(1)
0x863: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x864: PushEmpty(bool, object)
0x865: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x866: Call2 0x16a5

0x867: Pop(1)
0x868: IF (Stack[-1] == 0) GOTO 0x86a; Pop(1)

0x869: Stack[-1] = (bool) 1
0x86a: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x86b: PushEmpty(bool, object)
0x86c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86d: Call2 0x171d

0x86e: Pop(1)
0x86f: IF (Stack[-1] == 0) GOTO 0x871; Pop(1)

0x870: Stack[-1] = (bool) 1
0x871: IF (Stack[-1] == 0) GOTO 0x877; Pop(1)

0x872: Push((int) 537508)
0x873: Push((int) 39356)
0x874: Push((int) 39355)
0x875: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x876: Pop(3)
0x877: PushEmpty(bool)
0x878: Stack[-1] = (bool) 0
0x879: PushEmpty(bool)
0x87a: Stack[-1] = (bool) 0
0x87b: PushEmpty(bool, object)
0x87c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87d: Call2 0x168d

0x87e: Pop(1)
0x87f: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x880: PushEmpty(bool, object)
0x881: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x882: Call2 0x16a5

0x883: Pop(1)
0x884: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x885: Stack[-1] = (bool) 1
0x886: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x887: PushEmpty(bool, object)
0x888: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x889: Call2 0x1727

0x88a: Pop(1)
0x88b: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x88c: Stack[-1] = (bool) 1
0x88d: IF (Stack[-1] == 0) GOTO 0x893; Pop(1)

0x88e: Push((int) 537524)
0x88f: Push((int) 39372)
0x890: Push((int) 39371)
0x891: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x892: Pop(3)
0x893: PushEmpty(bool)
0x894: Stack[-1] = (bool) 0
0x895: PushEmpty(bool, object)
0x896: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x897: Call2 0x168d

0x898: Pop(1)
0x899: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89a: PushEmpty(bool, object)
0x89b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89c: Call2 0x16af

0x89d: Pop(1)
0x89e: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89f: Stack[-1] = (bool) 1
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a6; Pop(1)

0x8a1: Push((int) 537534)
0x8a2: Push((int) 39382)
0x8a3: Push((int) 39381)
0x8a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a5: Pop(3)
0x8a6: PushEmpty(bool)
0x8a7: Stack[-1] = (bool) 0
0x8a8: PushEmpty(bool, object)
0x8a9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8aa: Call2 0x168d

0x8ab: Pop(1)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8ad: PushEmpty(bool, object)
0x8ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8af: Call2 0x16b9

0x8b0: Pop(1)
0x8b1: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b2: Stack[-1] = (bool) 1
0x8b3: IF (Stack[-1] == 0) GOTO 0x8b9; Pop(1)

0x8b4: Push((int) 537549)
0x8b5: Push((int) 39397)
0x8b6: Push((int) 39396)
0x8b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b8: Pop(3)
0x8b9: PushEmpty(bool)
0x8ba: Stack[-1] = (bool) 0
0x8bb: PushEmpty(bool, object)
0x8bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8bd: Call2 0x168d

0x8be: Pop(1)
0x8bf: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c0: PushEmpty(bool, object)
0x8c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c2: Call2 0x16c3

0x8c3: Pop(1)
0x8c4: IF (Stack[-1] == 0) GOTO 0x8c6; Pop(1)

0x8c5: Stack[-1] = (bool) 1
0x8c6: IF (Stack[-1] == 0) GOTO 0x8cc; Pop(1)

0x8c7: Push((int) 537559)
0x8c8: Push((int) 39407)
0x8c9: Push((int) 39406)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: PushEmpty(bool)
0x8cd: Stack[-1] = (bool) 0
0x8ce: PushEmpty(bool, object)
0x8cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d0: Call2 0x168d

0x8d1: Pop(1)
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d3: PushEmpty(bool, object)
0x8d4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d5: Call2 0x16cd

0x8d6: Pop(1)
0x8d7: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8d8: Stack[-1] = (bool) 1
0x8d9: IF (Stack[-1] == 0) GOTO 0x8df; Pop(1)

0x8da: Push((int) 537571)
0x8db: Push((int) 39419)
0x8dc: Push((int) 39418)
0x8dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8de: Pop(3)
0x8df: PushEmpty(bool)
0x8e0: Stack[-1] = (bool) 0
0x8e1: PushEmpty(bool, object)
0x8e2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e3: Call2 0x168d

0x8e4: Pop(1)
0x8e5: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8e6: PushEmpty(bool, object)
0x8e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e8: Call2 0x16d7

0x8e9: Pop(1)
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ec; Pop(1)

0x8eb: Stack[-1] = (bool) 1
0x8ec: IF (Stack[-1] == 0) GOTO 0x8f2; Pop(1)

0x8ed: Push((int) 537593)
0x8ee: Push((int) 39442)
0x8ef: Push((int) 39441)
0x8f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f1: Pop(3)
0x8f2: PushEmpty(bool)
0x8f3: Stack[-1] = (bool) 0
0x8f4: PushEmpty(bool, object)
0x8f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f6: Call2 0x168d

0x8f7: Pop(1)
0x8f8: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8f9: PushEmpty(bool, object)
0x8fa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fb: Call2 0x16e1

0x8fc: Pop(1)
0x8fd: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fe: Stack[-1] = (bool) 1
0x8ff: IF (Stack[-1] == 0) GOTO 0x905; Pop(1)

0x900: Push((int) 537603)
0x901: Push((int) 39452)
0x902: Push((int) 39451)
0x903: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x904: Pop(3)
0x905: PushEmpty(bool)
0x906: Stack[-1] = (bool) 0
0x907: PushEmpty(bool, object)
0x908: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x909: Call2 0x168d

0x90a: Pop(1)
0x90b: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x90c: PushEmpty(bool, object)
0x90d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90e: Call2 0x16eb

0x90f: Pop(1)
0x910: IF (Stack[-1] == 0) GOTO 0x912; Pop(1)

0x911: Stack[-1] = (bool) 1
0x912: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x913: Push((int) 537621)
0x914: Push((int) 39470)
0x915: Push((int) 39469)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: PushEmpty(bool, object)
0x919: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91a: Call2 0x16f5

0x91b: Pop(1)
0x91c: IF (Stack[-1] == 0) GOTO 0x922; Pop(1)

0x91d: Push((int) 537633)
0x91e: Push((int) 39482)
0x91f: Push((int) 39481)
0x920: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x921: Pop(3)
0x922: PushEmpty(bool, object)
0x923: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x924: Call2 0x16ff

0x925: Pop(1)
0x926: IF (Stack[-1] == 0) GOTO 0x92c; Pop(1)

0x927: Push((int) 537640)
0x928: Push((int) 39489)
0x929: Push((int) 39488)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: PushEmpty(bool)
0x92d: Stack[-1] = (bool) 0
0x92e: PushEmpty(bool, object)
0x92f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x930: Call2 0x168d

0x931: Pop(1)
0x932: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x933: PushEmpty(bool, object)
0x934: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x935: Call2 0x1709

0x936: Pop(1)
0x937: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x938: Stack[-1] = (bool) 1
0x939: IF (Stack[-1] == 0) GOTO 0x93f; Pop(1)

0x93a: Push((int) 537647)
0x93b: Push((int) 39496)
0x93c: Push((int) 39495)
0x93d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93e: Pop(3)
0x93f: PushEmpty(bool)
0x940: Stack[-1] = (bool) 0
0x941: PushEmpty(bool)
0x942: Stack[-1] = (bool) 0
0x943: PushEmpty(bool, object)
0x944: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x945: Call2 0x168d

0x946: Pop(1)
0x947: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x948: PushEmpty(bool, object)
0x949: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x94a: Call2 0x1727

0x94b: Pop(1)
0x94c: IF (Stack[-1] == 0) GOTO 0x94e; Pop(1)

0x94d: Stack[-1] = (bool) 1
0x94e: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x94f: PushEmpty(bool, object)
0x950: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x951: Call2 0x16a5

0x952: Pop(1)
0x953: IF (Stack[-1] == 0) GOTO 0x955; Pop(1)

0x954: Stack[-1] = (bool) 1
0x955: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x956: Push((int) 537659)
0x957: Push((int) 39508)
0x958: Push((int) 39507)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: PushEmpty(bool, object)
0x95c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95d: Call2 0x16a5

0x95e: Pop(1)
0x95f: IF (Stack[-1] == 0) GOTO 0x965; Pop(1)

0x960: Push((int) 537665)
0x961: Push((int) 39514)
0x962: Push((int) 39513)
0x963: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x964: Pop(3)
0x965: PushEmpty(bool, object)
0x966: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x967: Call2 0x16a5

0x968: Pop(1)
0x969: IF (Stack[-1] == 0) GOTO 0x96f; Pop(1)

0x96a: Push((int) 537671)
0x96b: Push((int) 39520)
0x96c: Push((int) 39519)
0x96d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96e: Pop(3)
0x96f: PushEmpty(bool)
0x970: Stack[-1] = (bool) 0
0x971: PushEmpty(bool, object)
0x972: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x973: Call2 0x16a5

0x974: Pop(1)
0x975: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x976: PushEmpty(bool, object)
0x977: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x978: Call2 0x171d

0x979: Pop(1)
0x97a: IF (Stack[-1] == 0) GOTO 0x97c; Pop(1)

0x97b: Stack[-1] = (bool) 1
0x97c: IF (Stack[-1] == 0) GOTO 0x982; Pop(1)

0x97d: Push((int) 537689)
0x97e: Push((int) 39538)
0x97f: Push((int) 39537)
0x980: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x981: Pop(3)
0x982: PushEmpty(bool)
0x983: Stack[-1] = (bool) 0
0x984: PushEmpty(bool, object)
0x985: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x986: Call2 0x16a5

0x987: Pop(1)
0x988: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x989: PushEmpty(bool, object)
0x98a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98b: Call2 0x171d

0x98c: Pop(1)
0x98d: IF (Stack[-1] == 0) GOTO 0x98f; Pop(1)

0x98e: Stack[-1] = (bool) 1
0x98f: IF (Stack[-1] == 0) GOTO 0x995; Pop(1)

0x990: Push((int) 537702)
0x991: Push((int) 39551)
0x992: Push((int) 39550)
0x993: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x994: Pop(3)
0x995: Push((int) 537721)
0x996: Push((int) -1)
0x997: Push((int) 39569)
0x998: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x999: Pop(3)
0x99a: GOTO 0x99d

0x99b: Return(); Pop(0)

0x99c: GOTO 0x711

0x99d: PushEmpty(bool)
0x99e: Call2 0x182b

0x99f: Pop(0)
0x9a0: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9a1: @ lshWaitForAnimEnd()
0x9a2: Pop(0)
0x9a3: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9a4: IF (Stack[-1] == 0) GOTO 0x9a6; Pop(1)

0x9a5: GOTO 0x9ab

0x9a6: PushEmpty(string)
0x9a7: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9a8: Call2 0x1485

0x9a9: Pop(1)
0x9aa: GOTO 0x9a1

0x9ab: GOTO 0x9ba

0x9ac: Push("all")
0x9ad: Push("idle")
0x9ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x9af: Pop(2)
0x9b0: @ WaitForAnimEnd()
0x9b1: Pop(0)
0x9b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b3: IF (Stack[-1] == 0) GOTO 0x9b5; Pop(1)

0x9b4: GOTO 0x9ba

0x9b5: Push("all")
0x9b6: Push("idle")
0x9b7: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b8: Pop(2)
0x9b9: GOTO 0x9b0

0x9ba: Return(); Pop(0)

0x9bb: PushEmpty()
0x9bc: PushEmpty(bool)
0x9bd: Call2 0x182b

0x9be: Pop(0)
0x9bf: Pop(1); Push((bool) Stack[-1] == 0)
0x9c0: IF (Stack[-1] == 0) GOTO 0x9c2; Pop(1)

0x9c1: Return(); Pop(0)

0x9c2: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9c3: IF (Stack[-1] == 0) GOTO 0x9c5; Pop(1)

0x9c4: Return(); Pop(0)

0x9c5: PushEmpty(string, bool)
0x9c6: Stack[-2] = Stack[-3]
0x9c7: Push("")
0x9c8: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cc; Pop(1)

0x9ca: Stack[-1] = (bool) 0
0x9cb: GOTO 0x9cd

0x9cc: Stack[-1] = (bool) 1
0x9cd: Call2 0x1495

0x9ce: Pop(2)
0x9cf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9d0: Return(); Pop(0)

0x9d1: PushEmpty()
0x9d2: Push((int) 1)
0x9d3: IF (Stack[-1] == 0) GOTO 0x137a; Pop(1)

0x9d4: PushEmpty()
0x9d5: Call2 0x14af

0x9d6: Pop(0)
0x9d7: Push((int) 45706)
0x9d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d9: IF (Stack[-1] == 0) GOTO 0x9df; Pop(1)

0x9da: PushEmpty(object, object)
0x9db: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9dc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9dd: Call2 0x1688

0x9de: Pop(2)
0x9df: Push((int) 45718)
0x9e0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e7; Pop(1)

0x9e2: PushEmpty(object, object)
0x9e3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e5: Call2 0x1688

0x9e6: Pop(2)
0x9e7: Push((int) 45732)
0x9e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9e9: IF (Stack[-1] == 0) GOTO 0x9ef; Pop(1)

0x9ea: PushEmpty(object, object)
0x9eb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9ec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9ed: Call2 0x1688

0x9ee: Pop(2)
0x9ef: Push((int) 39354)
0x9f0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9f2: PushEmpty(object, object)
0x9f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f5: Call2 0x1688

0x9f6: Pop(2)
0x9f7: Push((int) 45703)
0x9f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0x9fa: PushEmpty(bool, object)
0x9fb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fc: Call2 0x1699

0x9fd: Pop(1)
0x9fe: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0x9ff: PushEmpty(string)
0xa00: Stack[-1] = "Neutral"
0xa01: Call2 0x9bb

0xa02: Pop(1)
0xa03: Push((int) 543247)
0xa04: @@ SetMessage(Stack[-1])
0xa05: Pop(1)
0xa06: @@ ClearReplies()
0xa07: Pop(0)
0xa08: PushEmpty(bool)
0xa09: Stack[-1] = (bool) 1
0xa0a: PushEmpty(bool)
0xa0b: Stack[-1] = (bool) 1
0xa0c: PushEmpty(bool, object)
0xa0d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0e: Call2 0x16af

0xa0f: Pop(1)
0xa10: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa11: PushEmpty(bool, object)
0xa12: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa13: Call2 0x16e1

0xa14: Pop(1)
0xa15: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa16: Stack[-1] = (bool) 0
0xa17: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa18: PushEmpty(bool, object)
0xa19: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1a: Call2 0x16ff

0xa1b: Pop(1)
0xa1c: IF (Stack[-1] == 0) GOTO 0xa1e; Pop(1)

0xa1d: Stack[-1] = (bool) 0
0xa1e: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0xa1f: Push((int) 543249)
0xa20: Push((int) 45709)
0xa21: Push((int) 45705)
0xa22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa23: Pop(3)
0xa24: PushEmpty(bool, object)
0xa25: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa26: Call2 0x16cd

0xa27: Pop(1)
0xa28: IF (Stack[-1] == 0) GOTO 0xa2e; Pop(1)

0xa29: Push((int) 543251)
0xa2a: Push((int) 45719)
0xa2b: Push((int) 45707)
0xa2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2d: Pop(3)
0xa2e: PushEmpty(bool)
0xa2f: Stack[-1] = (bool) 1
0xa30: PushEmpty(bool, object)
0xa31: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa32: Call2 0x16cd

0xa33: Pop(1)
0xa34: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa35: PushEmpty(bool, object)
0xa36: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa37: Call2 0x16d7

0xa38: Pop(1)
0xa39: IF (Stack[-1] == 0) GOTO 0xa3b; Pop(1)

0xa3a: Stack[-1] = (bool) 0
0xa3b: IF (Stack[-1] == 0) GOTO 0xa41; Pop(1)

0xa3c: Push((int) 543277)
0xa3d: Push((int) 45734)
0xa3e: Push((int) 45733)
0xa3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa40: Pop(3)
0xa41: PushEmpty(bool)
0xa42: Stack[-1] = (bool) 1
0xa43: PushEmpty(bool, object)
0xa44: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa45: Call2 0x16eb

0xa46: Pop(1)
0xa47: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa48: PushEmpty(bool, object)
0xa49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Call2 0x16f5

0xa4b: Pop(1)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: Stack[-1] = (bool) 0
0xa4e: IF (Stack[-1] == 0) GOTO 0xa54; Pop(1)

0xa4f: Push((int) 543282)
0xa50: Push((int) 45739)
0xa51: Push((int) 45738)
0xa52: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa53: Pop(3)
0xa54: PushEmpty(bool)
0xa55: Stack[-1] = (bool) 1
0xa56: PushEmpty(bool)
0xa57: Stack[-1] = (bool) 1
0xa58: PushEmpty(bool)
0xa59: Stack[-1] = (bool) 1
0xa5a: PushEmpty(bool, object)
0xa5b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5c: Call2 0x16a5

0xa5d: Pop(1)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa5f: PushEmpty(bool, object)
0xa60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa61: Call2 0x16af

0xa62: Pop(1)
0xa63: IF (Stack[-1] == 0) GOTO 0xa65; Pop(1)

0xa64: Stack[-1] = (bool) 0
0xa65: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa66: PushEmpty(bool, object)
0xa67: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa68: Call2 0x16b9

0xa69: Pop(1)
0xa6a: IF (Stack[-1] == 0) GOTO 0xa6c; Pop(1)

0xa6b: Stack[-1] = (bool) 0
0xa6c: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa6d: PushEmpty(bool, object)
0xa6e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6f: Call2 0x16c3

0xa70: Pop(1)
0xa71: IF (Stack[-1] == 0) GOTO 0xa73; Pop(1)

0xa72: Stack[-1] = (bool) 0
0xa73: IF (Stack[-1] == 0) GOTO 0xa79; Pop(1)

0xa74: Push((int) 543250)
0xa75: Push((int) -1)
0xa76: Push((int) 45706)
0xa77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa78: Pop(3)
0xa79: PushEmpty(bool)
0xa7a: Stack[-1] = (bool) 1
0xa7b: PushEmpty(bool)
0xa7c: Stack[-1] = (bool) 1
0xa7d: PushEmpty(bool)
0xa7e: Stack[-1] = (bool) 1
0xa7f: PushEmpty(bool, object)
0xa80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa81: Call2 0x16cd

0xa82: Pop(1)
0xa83: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa84: PushEmpty(bool, object)
0xa85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa86: Call2 0x16d7

0xa87: Pop(1)
0xa88: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa89: Stack[-1] = (bool) 0
0xa8a: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8b: PushEmpty(bool, object)
0xa8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8d: Call2 0x16e1

0xa8e: Pop(1)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa90: Stack[-1] = (bool) 0
0xa91: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa92: PushEmpty(bool, object)
0xa93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa94: Call2 0x16eb

0xa95: Pop(1)
0xa96: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa97: Stack[-1] = (bool) 0
0xa98: IF (Stack[-1] == 0) GOTO 0xa9e; Pop(1)

0xa99: Push((int) 543262)
0xa9a: Push((int) -1)
0xa9b: Push((int) 45718)
0xa9c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9d: Pop(3)
0xa9e: PushEmpty(bool)
0xa9f: Stack[-1] = (bool) 1
0xaa0: PushEmpty(bool)
0xaa1: Stack[-1] = (bool) 1
0xaa2: PushEmpty(bool)
0xaa3: Stack[-1] = (bool) 1
0xaa4: PushEmpty(bool, object)
0xaa5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaa6: Call2 0x16f5

0xaa7: Pop(1)
0xaa8: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaa9: PushEmpty(bool, object)
0xaaa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaab: Call2 0x16ff

0xaac: Pop(1)
0xaad: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xaae: Stack[-1] = (bool) 0
0xaaf: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab0: PushEmpty(bool, object)
0xab1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab2: Call2 0x1709

0xab3: Pop(1)
0xab4: IF (Stack[-1] == 0) GOTO 0xab6; Pop(1)

0xab5: Stack[-1] = (bool) 0
0xab6: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xab7: PushEmpty(bool, object)
0xab8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab9: Call2 0x1713

0xaba: Pop(1)
0xabb: IF (Stack[-1] == 0) GOTO 0xabd; Pop(1)

0xabc: Stack[-1] = (bool) 0
0xabd: IF (Stack[-1] == 0) GOTO 0xac3; Pop(1)

0xabe: Push((int) 543276)
0xabf: Push((int) -1)
0xac0: Push((int) 45732)
0xac1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac2: Pop(3)
0xac3: PushEmpty(bool)
0xac4: Stack[-1] = (bool) 1
0xac5: PushEmpty(bool)
0xac6: Stack[-1] = (bool) 1
0xac7: PushEmpty(bool)
0xac8: Stack[-1] = (bool) 1
0xac9: PushEmpty(bool, object)
0xaca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xacb: Call2 0x16a5

0xacc: Pop(1)
0xacd: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xace: PushEmpty(bool, object)
0xacf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad0: Call2 0x16b9

0xad1: Pop(1)
0xad2: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xad3: Stack[-1] = (bool) 0
0xad4: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xad5: PushEmpty(bool, object)
0xad6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad7: Call2 0x16c3

0xad8: Pop(1)
0xad9: IF (Stack[-1] == 0) GOTO 0xadb; Pop(1)

0xada: Stack[-1] = (bool) 0
0xadb: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xadc: PushEmpty(bool, object)
0xadd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xade: Call2 0x16e1

0xadf: Pop(1)
0xae0: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xae1: Stack[-1] = (bool) 0
0xae2: IF (Stack[-1] == 0) GOTO 0xae8; Pop(1)

0xae3: Push((int) 543248)
0xae4: Push((int) -1)
0xae5: Push((int) 45704)
0xae6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae7: Pop(3)
0xae8: PushEmpty(bool)
0xae9: Stack[-1] = (bool) 1
0xaea: PushEmpty(bool)
0xaeb: Stack[-1] = (bool) 1
0xaec: PushEmpty(bool)
0xaed: Stack[-1] = (bool) 1
0xaee: PushEmpty(bool, object)
0xaef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf0: Call2 0x16d7

0xaf1: Pop(1)
0xaf2: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaf3: PushEmpty(bool, object)
0xaf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf5: Call2 0x16cd

0xaf6: Pop(1)
0xaf7: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaf8: Stack[-1] = (bool) 0
0xaf9: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xafa: PushEmpty(bool, object)
0xafb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xafc: Call2 0x16eb

0xafd: Pop(1)
0xafe: IF (Stack[-1] == 0) GOTO 0xb00; Pop(1)

0xaff: Stack[-1] = (bool) 0
0xb00: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb01: PushEmpty(bool, object)
0xb02: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb03: Call2 0x16af

0xb04: Pop(1)
0xb05: IF (Stack[-1] == 0) GOTO 0xb07; Pop(1)

0xb06: Stack[-1] = (bool) 0
0xb07: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb08: Push((int) 543252)
0xb09: Push((int) -1)
0xb0a: Push((int) 45708)
0xb0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0c: Pop(3)
0xb0d: PushEmpty(bool)
0xb0e: Stack[-1] = (bool) 1
0xb0f: PushEmpty(bool, object)
0xb10: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb11: Call2 0x1709

0xb12: Pop(1)
0xb13: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb14: PushEmpty(bool, object)
0xb15: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb16: Call2 0x1713

0xb17: Pop(1)
0xb18: IF (Stack[-1] == 0) GOTO 0xb1a; Pop(1)

0xb19: Stack[-1] = (bool) 0
0xb1a: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb1b: Push((int) 543281)
0xb1c: Push((int) -1)
0xb1d: Push((int) 45737)
0xb1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1f: Pop(3)
0xb20: PushEmpty(bool)
0xb21: Stack[-1] = (bool) 1
0xb22: PushEmpty(bool, object)
0xb23: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb24: Call2 0x16f5

0xb25: Pop(1)
0xb26: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb27: PushEmpty(bool, object)
0xb28: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb29: Call2 0x16ff

0xb2a: Pop(1)
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2d; Pop(1)

0xb2c: Stack[-1] = (bool) 0
0xb2d: IF (Stack[-1] == 0) GOTO 0xb33; Pop(1)

0xb2e: Push((int) 543275)
0xb2f: Push((int) -1)
0xb30: Push((int) 45731)
0xb31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb32: Pop(3)
0xb33: Return(); Pop(0)

0xb34: PushEmpty(string)
0xb35: Stack[-1] = "Neutral"
0xb36: Call2 0x9bb

0xb37: Pop(1)
0xb38: Push((int) 537506)
0xb39: @@ SetMessage(Stack[-1])
0xb3a: Pop(1)
0xb3b: @@ ClearReplies()
0xb3c: Pop(0)
0xb3d: Push((int) 537507)
0xb3e: Push((int) -1)
0xb3f: Push((int) 39354)
0xb40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb41: Pop(3)
0xb42: PushEmpty(bool)
0xb43: Stack[-1] = (bool) 0
0xb44: PushEmpty(bool)
0xb45: Stack[-1] = (bool) 0
0xb46: PushEmpty(bool, object)
0xb47: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb48: Call2 0x168d

0xb49: Pop(1)
0xb4a: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb4b: PushEmpty(bool, object)
0xb4c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4d: Call2 0x16a5

0xb4e: Pop(1)
0xb4f: IF (Stack[-1] == 0) GOTO 0xb51; Pop(1)

0xb50: Stack[-1] = (bool) 1
0xb51: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb52: PushEmpty(bool, object)
0xb53: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb54: Call2 0x171d

0xb55: Pop(1)
0xb56: IF (Stack[-1] == 0) GOTO 0xb58; Pop(1)

0xb57: Stack[-1] = (bool) 1
0xb58: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb59: Push((int) 537508)
0xb5a: Push((int) 39356)
0xb5b: Push((int) 39355)
0xb5c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5d: Pop(3)
0xb5e: PushEmpty(bool)
0xb5f: Stack[-1] = (bool) 0
0xb60: PushEmpty(bool)
0xb61: Stack[-1] = (bool) 0
0xb62: PushEmpty(bool, object)
0xb63: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb64: Call2 0x168d

0xb65: Pop(1)
0xb66: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb67: PushEmpty(bool, object)
0xb68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb69: Call2 0x16a5

0xb6a: Pop(1)
0xb6b: IF (Stack[-1] == 0) GOTO 0xb6d; Pop(1)

0xb6c: Stack[-1] = (bool) 1
0xb6d: IF (Stack[-1] == 0) GOTO 0xb74; Pop(1)

0xb6e: PushEmpty(bool, object)
0xb6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb70: Call2 0x1727

0xb71: Pop(1)
0xb72: IF (Stack[-1] == 0) GOTO 0xb74; Pop(1)

0xb73: Stack[-1] = (bool) 1
0xb74: IF (Stack[-1] == 0) GOTO 0xb7a; Pop(1)

0xb75: Push((int) 537524)
0xb76: Push((int) 39372)
0xb77: Push((int) 39371)
0xb78: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb79: Pop(3)
0xb7a: PushEmpty(bool)
0xb7b: Stack[-1] = (bool) 0
0xb7c: PushEmpty(bool, object)
0xb7d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb7e: Call2 0x168d

0xb7f: Pop(1)
0xb80: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb81: PushEmpty(bool, object)
0xb82: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb83: Call2 0x16af

0xb84: Pop(1)
0xb85: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb86: Stack[-1] = (bool) 1
0xb87: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb88: Push((int) 537534)
0xb89: Push((int) 39382)
0xb8a: Push((int) 39381)
0xb8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb8c: Pop(3)
0xb8d: PushEmpty(bool)
0xb8e: Stack[-1] = (bool) 0
0xb8f: PushEmpty(bool, object)
0xb90: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb91: Call2 0x168d

0xb92: Pop(1)
0xb93: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb94: PushEmpty(bool, object)
0xb95: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb96: Call2 0x16b9

0xb97: Pop(1)
0xb98: IF (Stack[-1] == 0) GOTO 0xb9a; Pop(1)

0xb99: Stack[-1] = (bool) 1
0xb9a: IF (Stack[-1] == 0) GOTO 0xba0; Pop(1)

0xb9b: Push((int) 537549)
0xb9c: Push((int) 39397)
0xb9d: Push((int) 39396)
0xb9e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9f: Pop(3)
0xba0: PushEmpty(bool)
0xba1: Stack[-1] = (bool) 0
0xba2: PushEmpty(bool, object)
0xba3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba4: Call2 0x168d

0xba5: Pop(1)
0xba6: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xba7: PushEmpty(bool, object)
0xba8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba9: Call2 0x16c3

0xbaa: Pop(1)
0xbab: IF (Stack[-1] == 0) GOTO 0xbad; Pop(1)

0xbac: Stack[-1] = (bool) 1
0xbad: IF (Stack[-1] == 0) GOTO 0xbb3; Pop(1)

0xbae: Push((int) 537559)
0xbaf: Push((int) 39407)
0xbb0: Push((int) 39406)
0xbb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb2: Pop(3)
0xbb3: PushEmpty(bool)
0xbb4: Stack[-1] = (bool) 0
0xbb5: PushEmpty(bool, object)
0xbb6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb7: Call2 0x168d

0xbb8: Pop(1)
0xbb9: IF (Stack[-1] == 0) GOTO 0xbc0; Pop(1)

0xbba: PushEmpty(bool, object)
0xbbb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbbc: Call2 0x16cd

0xbbd: Pop(1)
0xbbe: IF (Stack[-1] == 0) GOTO 0xbc0; Pop(1)

0xbbf: Stack[-1] = (bool) 1
0xbc0: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc1: Push((int) 537571)
0xbc2: Push((int) 39419)
0xbc3: Push((int) 39418)
0xbc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc5: Pop(3)
0xbc6: PushEmpty(bool)
0xbc7: Stack[-1] = (bool) 0
0xbc8: PushEmpty(bool, object)
0xbc9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbca: Call2 0x168d

0xbcb: Pop(1)
0xbcc: IF (Stack[-1] == 0) GOTO 0xbd3; Pop(1)

0xbcd: PushEmpty(bool, object)
0xbce: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbcf: Call2 0x16d7

0xbd0: Pop(1)
0xbd1: IF (Stack[-1] == 0) GOTO 0xbd3; Pop(1)

0xbd2: Stack[-1] = (bool) 1
0xbd3: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd4: Push((int) 537593)
0xbd5: Push((int) 39442)
0xbd6: Push((int) 39441)
0xbd7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd8: Pop(3)
0xbd9: PushEmpty(bool)
0xbda: Stack[-1] = (bool) 0
0xbdb: PushEmpty(bool, object)
0xbdc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbdd: Call2 0x168d

0xbde: Pop(1)
0xbdf: IF (Stack[-1] == 0) GOTO 0xbe6; Pop(1)

0xbe0: PushEmpty(bool, object)
0xbe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe2: Call2 0x16e1

0xbe3: Pop(1)
0xbe4: IF (Stack[-1] == 0) GOTO 0xbe6; Pop(1)

0xbe5: Stack[-1] = (bool) 1
0xbe6: IF (Stack[-1] == 0) GOTO 0xbec; Pop(1)

0xbe7: Push((int) 537603)
0xbe8: Push((int) 39452)
0xbe9: Push((int) 39451)
0xbea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbeb: Pop(3)
0xbec: PushEmpty(bool)
0xbed: Stack[-1] = (bool) 0
0xbee: PushEmpty(bool, object)
0xbef: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf0: Call2 0x168d

0xbf1: Pop(1)
0xbf2: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf3: PushEmpty(bool, object)
0xbf4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf5: Call2 0x16eb

0xbf6: Pop(1)
0xbf7: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbf8: Stack[-1] = (bool) 1
0xbf9: IF (Stack[-1] == 0) GOTO 0xbff; Pop(1)

0xbfa: Push((int) 537621)
0xbfb: Push((int) 39470)
0xbfc: Push((int) 39469)
0xbfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfe: Pop(3)
0xbff: PushEmpty(bool, object)
0xc00: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc01: Call2 0x16f5

0xc02: Pop(1)
0xc03: IF (Stack[-1] == 0) GOTO 0xc09; Pop(1)

0xc04: Push((int) 537633)
0xc05: Push((int) 39482)
0xc06: Push((int) 39481)
0xc07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc08: Pop(3)
0xc09: PushEmpty(bool, object)
0xc0a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0b: Call2 0x16ff

0xc0c: Pop(1)
0xc0d: IF (Stack[-1] == 0) GOTO 0xc13; Pop(1)

0xc0e: Push((int) 537640)
0xc0f: Push((int) 39489)
0xc10: Push((int) 39488)
0xc11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(3)
0xc13: PushEmpty(bool)
0xc14: Stack[-1] = (bool) 0
0xc15: PushEmpty(bool, object)
0xc16: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc17: Call2 0x168d

0xc18: Pop(1)
0xc19: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc1a: PushEmpty(bool, object)
0xc1b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc1c: Call2 0x1709

0xc1d: Pop(1)
0xc1e: IF (Stack[-1] == 0) GOTO 0xc20; Pop(1)

0xc1f: Stack[-1] = (bool) 1
0xc20: IF (Stack[-1] == 0) GOTO 0xc26; Pop(1)

0xc21: Push((int) 537647)
0xc22: Push((int) 39496)
0xc23: Push((int) 39495)
0xc24: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc25: Pop(3)
0xc26: PushEmpty(bool)
0xc27: Stack[-1] = (bool) 0
0xc28: PushEmpty(bool)
0xc29: Stack[-1] = (bool) 0
0xc2a: PushEmpty(bool, object)
0xc2b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2c: Call2 0x168d

0xc2d: Pop(1)
0xc2e: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc2f: PushEmpty(bool, object)
0xc30: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc31: Call2 0x1727

0xc32: Pop(1)
0xc33: IF (Stack[-1] == 0) GOTO 0xc35; Pop(1)

0xc34: Stack[-1] = (bool) 1
0xc35: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc36: PushEmpty(bool, object)
0xc37: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc38: Call2 0x16a5

0xc39: Pop(1)
0xc3a: IF (Stack[-1] == 0) GOTO 0xc3c; Pop(1)

0xc3b: Stack[-1] = (bool) 1
0xc3c: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0xc3d: Push((int) 537659)
0xc3e: Push((int) 39508)
0xc3f: Push((int) 39507)
0xc40: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc41: Pop(3)
0xc42: PushEmpty(bool, object)
0xc43: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc44: Call2 0x16a5

0xc45: Pop(1)
0xc46: IF (Stack[-1] == 0) GOTO 0xc4c; Pop(1)

0xc47: Push((int) 537665)
0xc48: Push((int) 39514)
0xc49: Push((int) 39513)
0xc4a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4b: Pop(3)
0xc4c: PushEmpty(bool, object)
0xc4d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc4e: Call2 0x16a5

0xc4f: Pop(1)
0xc50: IF (Stack[-1] == 0) GOTO 0xc56; Pop(1)

0xc51: Push((int) 537671)
0xc52: Push((int) 39520)
0xc53: Push((int) 39519)
0xc54: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc55: Pop(3)
0xc56: PushEmpty(bool)
0xc57: Stack[-1] = (bool) 0
0xc58: PushEmpty(bool, object)
0xc59: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5a: Call2 0x16a5

0xc5b: Pop(1)
0xc5c: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc5d: PushEmpty(bool, object)
0xc5e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc5f: Call2 0x171d

0xc60: Pop(1)
0xc61: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc62: Stack[-1] = (bool) 1
0xc63: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc64: Push((int) 537689)
0xc65: Push((int) 39538)
0xc66: Push((int) 39537)
0xc67: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc68: Pop(3)
0xc69: PushEmpty(bool)
0xc6a: Stack[-1] = (bool) 0
0xc6b: PushEmpty(bool, object)
0xc6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6d: Call2 0x16a5

0xc6e: Pop(1)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc70: PushEmpty(bool, object)
0xc71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc72: Call2 0x171d

0xc73: Pop(1)
0xc74: IF (Stack[-1] == 0) GOTO 0xc76; Pop(1)

0xc75: Stack[-1] = (bool) 1
0xc76: IF (Stack[-1] == 0) GOTO 0xc7c; Pop(1)

0xc77: Push((int) 537702)
0xc78: Push((int) 39551)
0xc79: Push((int) 39550)
0xc7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7b: Pop(3)
0xc7c: Push((int) 537721)
0xc7d: Push((int) -1)
0xc7e: Push((int) 39569)
0xc7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc80: Pop(3)
0xc81: Return(); Pop(0)

0xc82: Push((int) 39551)
0xc83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc84: IF (Stack[-1] == 0) GOTO 0xc94; Pop(1)

0xc85: PushEmpty(string)
0xc86: Stack[-1] = "Neutral"
0xc87: Call2 0x9bb

0xc88: Pop(1)
0xc89: Push((int) 537703)
0xc8a: @@ SetMessage(Stack[-1])
0xc8b: Pop(1)
0xc8c: @@ ClearReplies()
0xc8d: Pop(0)
0xc8e: Push((int) 537704)
0xc8f: Push((int) 39553)
0xc90: Push((int) 39552)
0xc91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc92: Pop(3)
0xc93: Return(); Pop(0)

0xc94: Push((int) 39553)
0xc95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc96: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xc97: PushEmpty(string)
0xc98: Stack[-1] = "Neutral"
0xc99: Call2 0x9bb

0xc9a: Pop(1)
0xc9b: Push((int) 537705)
0xc9c: @@ SetMessage(Stack[-1])
0xc9d: Pop(1)
0xc9e: @@ ClearReplies()
0xc9f: Pop(0)
0xca0: Push((int) 537706)
0xca1: Push((int) 39555)
0xca2: Push((int) 39554)
0xca3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca4: Pop(3)
0xca5: Push((int) 537717)
0xca6: Push((int) 39566)
0xca7: Push((int) 39565)
0xca8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: Return(); Pop(0)

0xcab: Push((int) 39566)
0xcac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcc7; Pop(1)

0xcae: PushEmpty(string)
0xcaf: Stack[-1] = "Neutral"
0xcb0: Call2 0x9bb

0xcb1: Pop(1)
0xcb2: Push((int) 537718)
0xcb3: @@ SetMessage(Stack[-1])
0xcb4: Pop(1)
0xcb5: @@ ClearReplies()
0xcb6: Pop(0)
0xcb7: Push((int) 537719)
0xcb8: Push((int) -1)
0xcb9: Push((int) 39567)
0xcba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbb: Pop(3)
0xcbc: PushEmpty(bool, object)
0xcbd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcbe: Call2 0x168d

0xcbf: Pop(1)
0xcc0: IF (Stack[-1] == 0) GOTO 0xcc6; Pop(1)

0xcc1: Push((int) 537720)
0xcc2: Push((int) -1)
0xcc3: Push((int) 39568)
0xcc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc5: Pop(3)
0xcc6: Return(); Pop(0)

0xcc7: Push((int) 39555)
0xcc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc9: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcca: PushEmpty(string)
0xccb: Stack[-1] = "Neutral"
0xccc: Call2 0x9bb

0xccd: Pop(1)
0xcce: Push((int) 537707)
0xccf: @@ SetMessage(Stack[-1])
0xcd0: Pop(1)
0xcd1: @@ ClearReplies()
0xcd2: Pop(0)
0xcd3: Push((int) 537708)
0xcd4: Push((int) 39557)
0xcd5: Push((int) 39556)
0xcd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd7: Pop(3)
0xcd8: Push((int) 537711)
0xcd9: Push((int) 39560)
0xcda: Push((int) 39559)
0xcdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcdc: Pop(3)
0xcdd: Return(); Pop(0)

0xcde: Push((int) 39560)
0xcdf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce0: IF (Stack[-1] == 0) GOTO 0xcfa; Pop(1)

0xce1: PushEmpty(string)
0xce2: Stack[-1] = "Neutral"
0xce3: Call2 0x9bb

0xce4: Pop(1)
0xce5: Push((int) 537712)
0xce6: @@ SetMessage(Stack[-1])
0xce7: Pop(1)
0xce8: @@ ClearReplies()
0xce9: Pop(0)
0xcea: PushEmpty(bool, object)
0xceb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcec: Call2 0x168d

0xced: Pop(1)
0xcee: IF (Stack[-1] == 0) GOTO 0xcf4; Pop(1)

0xcef: Push((int) 537713)
0xcf0: Push((int) -1)
0xcf1: Push((int) 39561)
0xcf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf3: Pop(3)
0xcf4: Push((int) 537714)
0xcf5: Push((int) 39563)
0xcf6: Push((int) 39562)
0xcf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf8: Pop(3)
0xcf9: Return(); Pop(0)

0xcfa: Push((int) 39563)
0xcfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfc: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xcfd: PushEmpty(string)
0xcfe: Stack[-1] = "Neutral"
0xcff: Call2 0x9bb

0xd00: Pop(1)
0xd01: Push((int) 537715)
0xd02: @@ SetMessage(Stack[-1])
0xd03: Pop(1)
0xd04: @@ ClearReplies()
0xd05: Pop(0)
0xd06: Push((int) 537716)
0xd07: Push((int) -1)
0xd08: Push((int) 39564)
0xd09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0a: Pop(3)
0xd0b: Return(); Pop(0)

0xd0c: Push((int) 39557)
0xd0d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd0e: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd0f: PushEmpty(string)
0xd10: Stack[-1] = "Neutral"
0xd11: Call2 0x9bb

0xd12: Pop(1)
0xd13: Push((int) 537709)
0xd14: @@ SetMessage(Stack[-1])
0xd15: Pop(1)
0xd16: @@ ClearReplies()
0xd17: Pop(0)
0xd18: Push((int) 537710)
0xd19: Push((int) -1)
0xd1a: Push((int) 39558)
0xd1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1c: Pop(3)
0xd1d: Return(); Pop(0)

0xd1e: Push((int) 39538)
0xd1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd20: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xd21: PushEmpty(string)
0xd22: Stack[-1] = "Neutral"
0xd23: Call2 0x9bb

0xd24: Pop(1)
0xd25: Push((int) 537690)
0xd26: @@ SetMessage(Stack[-1])
0xd27: Pop(1)
0xd28: @@ ClearReplies()
0xd29: Pop(0)
0xd2a: Push((int) 537691)
0xd2b: Push((int) 39540)
0xd2c: Push((int) 39539)
0xd2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2e: Pop(3)
0xd2f: Push((int) 537701)
0xd30: Push((int) -1)
0xd31: Push((int) 39549)
0xd32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd33: Pop(3)
0xd34: Return(); Pop(0)

0xd35: Push((int) 39540)
0xd36: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd37: IF (Stack[-1] == 0) GOTO 0xd4c; Pop(1)

0xd38: PushEmpty(string)
0xd39: Stack[-1] = "Neutral"
0xd3a: Call2 0x9bb

0xd3b: Pop(1)
0xd3c: Push((int) 537692)
0xd3d: @@ SetMessage(Stack[-1])
0xd3e: Pop(1)
0xd3f: @@ ClearReplies()
0xd40: Pop(0)
0xd41: Push((int) 537693)
0xd42: Push((int) 39542)
0xd43: Push((int) 39541)
0xd44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd45: Pop(3)
0xd46: Push((int) 537696)
0xd47: Push((int) 39545)
0xd48: Push((int) 39544)
0xd49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd4a: Pop(3)
0xd4b: Return(); Pop(0)

0xd4c: Push((int) 39545)
0xd4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4e: IF (Stack[-1] == 0) GOTO 0xd5e; Pop(1)

0xd4f: PushEmpty(string)
0xd50: Stack[-1] = "Neutral"
0xd51: Call2 0x9bb

0xd52: Pop(1)
0xd53: Push((int) 537697)
0xd54: @@ SetMessage(Stack[-1])
0xd55: Pop(1)
0xd56: @@ ClearReplies()
0xd57: Pop(0)
0xd58: Push((int) 537698)
0xd59: Push((int) 39547)
0xd5a: Push((int) 39546)
0xd5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5c: Pop(3)
0xd5d: Return(); Pop(0)

0xd5e: Push((int) 39547)
0xd5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd60: IF (Stack[-1] == 0) GOTO 0xd70; Pop(1)

0xd61: PushEmpty(string)
0xd62: Stack[-1] = "Neutral"
0xd63: Call2 0x9bb

0xd64: Pop(1)
0xd65: Push((int) 537699)
0xd66: @@ SetMessage(Stack[-1])
0xd67: Pop(1)
0xd68: @@ ClearReplies()
0xd69: Pop(0)
0xd6a: Push((int) 537700)
0xd6b: Push((int) -1)
0xd6c: Push((int) 39548)
0xd6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd6e: Pop(3)
0xd6f: Return(); Pop(0)

0xd70: Push((int) 39542)
0xd71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd72: IF (Stack[-1] == 0) GOTO 0xd82; Pop(1)

0xd73: PushEmpty(string)
0xd74: Stack[-1] = "Neutral"
0xd75: Call2 0x9bb

0xd76: Pop(1)
0xd77: Push((int) 537694)
0xd78: @@ SetMessage(Stack[-1])
0xd79: Pop(1)
0xd7a: @@ ClearReplies()
0xd7b: Pop(0)
0xd7c: Push((int) 537695)
0xd7d: Push((int) -1)
0xd7e: Push((int) 39543)
0xd7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd80: Pop(3)
0xd81: Return(); Pop(0)

0xd82: Push((int) 39520)
0xd83: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd84: IF (Stack[-1] == 0) GOTO 0xd99; Pop(1)

0xd85: PushEmpty(string)
0xd86: Stack[-1] = "Neutral"
0xd87: Call2 0x9bb

0xd88: Pop(1)
0xd89: Push((int) 537672)
0xd8a: @@ SetMessage(Stack[-1])
0xd8b: Pop(1)
0xd8c: @@ ClearReplies()
0xd8d: Pop(0)
0xd8e: Push((int) 537673)
0xd8f: Push((int) 39522)
0xd90: Push((int) 39521)
0xd91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd92: Pop(3)
0xd93: Push((int) 537678)
0xd94: Push((int) 39527)
0xd95: Push((int) 39526)
0xd96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd97: Pop(3)
0xd98: Return(); Pop(0)

0xd99: Push((int) 39527)
0xd9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd9b: IF (Stack[-1] == 0) GOTO 0xdab; Pop(1)

0xd9c: PushEmpty(string)
0xd9d: Stack[-1] = "Neutral"
0xd9e: Call2 0x9bb

0xd9f: Pop(1)
0xda0: Push((int) 537679)
0xda1: @@ SetMessage(Stack[-1])
0xda2: Pop(1)
0xda3: @@ ClearReplies()
0xda4: Pop(0)
0xda5: Push((int) 537680)
0xda6: Push((int) 39529)
0xda7: Push((int) 39528)
0xda8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xda9: Pop(3)
0xdaa: Return(); Pop(0)

0xdab: Push((int) 39529)
0xdac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdad: IF (Stack[-1] == 0) GOTO 0xdc7; Pop(1)

0xdae: PushEmpty(string)
0xdaf: Stack[-1] = "Neutral"
0xdb0: Call2 0x9bb

0xdb1: Pop(1)
0xdb2: Push((int) 537681)
0xdb3: @@ SetMessage(Stack[-1])
0xdb4: Pop(1)
0xdb5: @@ ClearReplies()
0xdb6: Pop(0)
0xdb7: PushEmpty(bool, object)
0xdb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb9: Call2 0x168d

0xdba: Pop(1)
0xdbb: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbc: Push((int) 537682)
0xdbd: Push((int) 39531)
0xdbe: Push((int) 39530)
0xdbf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc0: Pop(3)
0xdc1: Push((int) 537688)
0xdc2: Push((int) -1)
0xdc3: Push((int) 39536)
0xdc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc5: Pop(3)
0xdc6: Return(); Pop(0)

0xdc7: Push((int) 39531)
0xdc8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdc9: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xdca: PushEmpty(string)
0xdcb: Stack[-1] = "Neutral"
0xdcc: Call2 0x9bb

0xdcd: Pop(1)
0xdce: Push((int) 537683)
0xdcf: @@ SetMessage(Stack[-1])
0xdd0: Pop(1)
0xdd1: @@ ClearReplies()
0xdd2: Pop(0)
0xdd3: Push((int) 537684)
0xdd4: Push((int) 39533)
0xdd5: Push((int) 39532)
0xdd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdd7: Pop(3)
0xdd8: Push((int) 537687)
0xdd9: Push((int) -1)
0xdda: Push((int) 39535)
0xddb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xddc: Pop(3)
0xddd: Return(); Pop(0)

0xdde: Push((int) 39533)
0xddf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde0: IF (Stack[-1] == 0) GOTO 0xdf0; Pop(1)

0xde1: PushEmpty(string)
0xde2: Stack[-1] = "Neutral"
0xde3: Call2 0x9bb

0xde4: Pop(1)
0xde5: Push((int) 537685)
0xde6: @@ SetMessage(Stack[-1])
0xde7: Pop(1)
0xde8: @@ ClearReplies()
0xde9: Pop(0)
0xdea: Push((int) 537686)
0xdeb: Push((int) -1)
0xdec: Push((int) 39534)
0xded: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdee: Pop(3)
0xdef: Return(); Pop(0)

0xdf0: Push((int) 39522)
0xdf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf2: IF (Stack[-1] == 0) GOTO 0xe02; Pop(1)

0xdf3: PushEmpty(string)
0xdf4: Stack[-1] = "Neutral"
0xdf5: Call2 0x9bb

0xdf6: Pop(1)
0xdf7: Push((int) 537674)
0xdf8: @@ SetMessage(Stack[-1])
0xdf9: Pop(1)
0xdfa: @@ ClearReplies()
0xdfb: Pop(0)
0xdfc: Push((int) 537675)
0xdfd: Push((int) 39524)
0xdfe: Push((int) 39523)
0xdff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe00: Pop(3)
0xe01: Return(); Pop(0)

0xe02: Push((int) 39524)
0xe03: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe04: IF (Stack[-1] == 0) GOTO 0xe14; Pop(1)

0xe05: PushEmpty(string)
0xe06: Stack[-1] = "Neutral"
0xe07: Call2 0x9bb

0xe08: Pop(1)
0xe09: Push((int) 537676)
0xe0a: @@ SetMessage(Stack[-1])
0xe0b: Pop(1)
0xe0c: @@ ClearReplies()
0xe0d: Pop(0)
0xe0e: Push((int) 537677)
0xe0f: Push((int) -1)
0xe10: Push((int) 39525)
0xe11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe12: Pop(3)
0xe13: Return(); Pop(0)

0xe14: Push((int) 39514)
0xe15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe16: IF (Stack[-1] == 0) GOTO 0xe2b; Pop(1)

0xe17: PushEmpty(string)
0xe18: Stack[-1] = "Neutral"
0xe19: Call2 0x9bb

0xe1a: Pop(1)
0xe1b: Push((int) 537666)
0xe1c: @@ SetMessage(Stack[-1])
0xe1d: Pop(1)
0xe1e: @@ ClearReplies()
0xe1f: Pop(0)
0xe20: Push((int) 537667)
0xe21: Push((int) 39516)
0xe22: Push((int) 39515)
0xe23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe24: Pop(3)
0xe25: Push((int) 537670)
0xe26: Push((int) -1)
0xe27: Push((int) 39518)
0xe28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe29: Pop(3)
0xe2a: Return(); Pop(0)

0xe2b: Push((int) 39516)
0xe2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe2d: IF (Stack[-1] == 0) GOTO 0xe3d; Pop(1)

0xe2e: PushEmpty(string)
0xe2f: Stack[-1] = "Neutral"
0xe30: Call2 0x9bb

0xe31: Pop(1)
0xe32: Push((int) 537668)
0xe33: @@ SetMessage(Stack[-1])
0xe34: Pop(1)
0xe35: @@ ClearReplies()
0xe36: Pop(0)
0xe37: Push((int) 537669)
0xe38: Push((int) -1)
0xe39: Push((int) 39517)
0xe3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3b: Pop(3)
0xe3c: Return(); Pop(0)

0xe3d: Push((int) 39508)
0xe3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe3f: IF (Stack[-1] == 0) GOTO 0xe54; Pop(1)

0xe40: PushEmpty(string)
0xe41: Stack[-1] = "Neutral"
0xe42: Call2 0x9bb

0xe43: Pop(1)
0xe44: Push((int) 537660)
0xe45: @@ SetMessage(Stack[-1])
0xe46: Pop(1)
0xe47: @@ ClearReplies()
0xe48: Pop(0)
0xe49: Push((int) 537661)
0xe4a: Push((int) 39510)
0xe4b: Push((int) 39509)
0xe4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4d: Pop(3)
0xe4e: Push((int) 537664)
0xe4f: Push((int) -1)
0xe50: Push((int) 39512)
0xe51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe52: Pop(3)
0xe53: Return(); Pop(0)

0xe54: Push((int) 39510)
0xe55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe56: IF (Stack[-1] == 0) GOTO 0xe66; Pop(1)

0xe57: PushEmpty(string)
0xe58: Stack[-1] = "Neutral"
0xe59: Call2 0x9bb

0xe5a: Pop(1)
0xe5b: Push((int) 537662)
0xe5c: @@ SetMessage(Stack[-1])
0xe5d: Pop(1)
0xe5e: @@ ClearReplies()
0xe5f: Pop(0)
0xe60: Push((int) 537663)
0xe61: Push((int) -1)
0xe62: Push((int) 39511)
0xe63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe64: Pop(3)
0xe65: Return(); Pop(0)

0xe66: Push((int) 39496)
0xe67: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe68: IF (Stack[-1] == 0) GOTO 0xe7d; Pop(1)

0xe69: PushEmpty(string)
0xe6a: Stack[-1] = "Neutral"
0xe6b: Call2 0x9bb

0xe6c: Pop(1)
0xe6d: Push((int) 537648)
0xe6e: @@ SetMessage(Stack[-1])
0xe6f: Pop(1)
0xe70: @@ ClearReplies()
0xe71: Pop(0)
0xe72: Push((int) 537649)
0xe73: Push((int) 39498)
0xe74: Push((int) 39497)
0xe75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe76: Pop(3)
0xe77: Push((int) 537658)
0xe78: Push((int) -1)
0xe79: Push((int) 39506)
0xe7a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7b: Pop(3)
0xe7c: Return(); Pop(0)

0xe7d: Push((int) 39498)
0xe7e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7f: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe80: PushEmpty(string)
0xe81: Stack[-1] = "Neutral"
0xe82: Call2 0x9bb

0xe83: Pop(1)
0xe84: Push((int) 537650)
0xe85: @@ SetMessage(Stack[-1])
0xe86: Pop(1)
0xe87: @@ ClearReplies()
0xe88: Pop(0)
0xe89: Push((int) 537651)
0xe8a: Push((int) 39500)
0xe8b: Push((int) 39499)
0xe8c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8d: Pop(3)
0xe8e: Push((int) 537657)
0xe8f: Push((int) -1)
0xe90: Push((int) 39505)
0xe91: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe92: Pop(3)
0xe93: Return(); Pop(0)

0xe94: Push((int) 39500)
0xe95: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe96: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xe97: PushEmpty(string)
0xe98: Stack[-1] = "Neutral"
0xe99: Call2 0x9bb

0xe9a: Pop(1)
0xe9b: Push((int) 537652)
0xe9c: @@ SetMessage(Stack[-1])
0xe9d: Pop(1)
0xe9e: @@ ClearReplies()
0xe9f: Pop(0)
0xea0: Push((int) 537653)
0xea1: Push((int) -1)
0xea2: Push((int) 39501)
0xea3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea4: Pop(3)
0xea5: Push((int) 537654)
0xea6: Push((int) 39503)
0xea7: Push((int) 39502)
0xea8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea9: Pop(3)
0xeaa: Return(); Pop(0)

0xeab: Push((int) 39503)
0xeac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xead: IF (Stack[-1] == 0) GOTO 0xebd; Pop(1)

0xeae: PushEmpty(string)
0xeaf: Stack[-1] = "Neutral"
0xeb0: Call2 0x9bb

0xeb1: Pop(1)
0xeb2: Push((int) 537655)
0xeb3: @@ SetMessage(Stack[-1])
0xeb4: Pop(1)
0xeb5: @@ ClearReplies()
0xeb6: Pop(0)
0xeb7: Push((int) 537656)
0xeb8: Push((int) -1)
0xeb9: Push((int) 39504)
0xeba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebb: Pop(3)
0xebc: Return(); Pop(0)

0xebd: Push((int) 39489)
0xebe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebf: IF (Stack[-1] == 0) GOTO 0xed4; Pop(1)

0xec0: PushEmpty(string)
0xec1: Stack[-1] = "Neutral"
0xec2: Call2 0x9bb

0xec3: Pop(1)
0xec4: Push((int) 537641)
0xec5: @@ SetMessage(Stack[-1])
0xec6: Pop(1)
0xec7: @@ ClearReplies()
0xec8: Pop(0)
0xec9: Push((int) 537642)
0xeca: Push((int) 39491)
0xecb: Push((int) 39490)
0xecc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xecd: Pop(3)
0xece: Push((int) 537646)
0xecf: Push((int) -1)
0xed0: Push((int) 39494)
0xed1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed2: Pop(3)
0xed3: Return(); Pop(0)

0xed4: Push((int) 39491)
0xed5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed6: IF (Stack[-1] == 0) GOTO 0xef0; Pop(1)

0xed7: PushEmpty(string)
0xed8: Stack[-1] = "Neutral"
0xed9: Call2 0x9bb

0xeda: Pop(1)
0xedb: Push((int) 537643)
0xedc: @@ SetMessage(Stack[-1])
0xedd: Pop(1)
0xede: @@ ClearReplies()
0xedf: Pop(0)
0xee0: Push((int) 537644)
0xee1: Push((int) -1)
0xee2: Push((int) 39492)
0xee3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee4: Pop(3)
0xee5: PushEmpty(bool, object)
0xee6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xee7: Call2 0x168d

0xee8: Pop(1)
0xee9: IF (Stack[-1] == 0) GOTO 0xeef; Pop(1)

0xeea: Push((int) 537645)
0xeeb: Push((int) -1)
0xeec: Push((int) 39493)
0xeed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeee: Pop(3)
0xeef: Return(); Pop(0)

0xef0: Push((int) 39482)
0xef1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef2: IF (Stack[-1] == 0) GOTO 0xf07; Pop(1)

0xef3: PushEmpty(string)
0xef4: Stack[-1] = "Neutral"
0xef5: Call2 0x9bb

0xef6: Pop(1)
0xef7: Push((int) 537634)
0xef8: @@ SetMessage(Stack[-1])
0xef9: Pop(1)
0xefa: @@ ClearReplies()
0xefb: Pop(0)
0xefc: Push((int) 537635)
0xefd: Push((int) 39484)
0xefe: Push((int) 39483)
0xeff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf00: Pop(3)
0xf01: Push((int) 537639)
0xf02: Push((int) -1)
0xf03: Push((int) 39487)
0xf04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf05: Pop(3)
0xf06: Return(); Pop(0)

0xf07: Push((int) 39484)
0xf08: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf09: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf0a: PushEmpty(string)
0xf0b: Stack[-1] = "Neutral"
0xf0c: Call2 0x9bb

0xf0d: Pop(1)
0xf0e: Push((int) 537636)
0xf0f: @@ SetMessage(Stack[-1])
0xf10: Pop(1)
0xf11: @@ ClearReplies()
0xf12: Pop(0)
0xf13: Push((int) 537637)
0xf14: Push((int) -1)
0xf15: Push((int) 39485)
0xf16: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf17: Pop(3)
0xf18: Push((int) 537638)
0xf19: Push((int) -1)
0xf1a: Push((int) 39486)
0xf1b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1c: Pop(3)
0xf1d: Return(); Pop(0)

0xf1e: Push((int) 39470)
0xf1f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf20: IF (Stack[-1] == 0) GOTO 0xf35; Pop(1)

0xf21: PushEmpty(string)
0xf22: Stack[-1] = "Neutral"
0xf23: Call2 0x9bb

0xf24: Pop(1)
0xf25: Push((int) 537622)
0xf26: @@ SetMessage(Stack[-1])
0xf27: Pop(1)
0xf28: @@ ClearReplies()
0xf29: Pop(0)
0xf2a: Push((int) 537623)
0xf2b: Push((int) 39472)
0xf2c: Push((int) 39471)
0xf2d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2e: Pop(3)
0xf2f: Push((int) 537632)
0xf30: Push((int) -1)
0xf31: Push((int) 39480)
0xf32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf33: Pop(3)
0xf34: Return(); Pop(0)

0xf35: Push((int) 39472)
0xf36: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf37: IF (Stack[-1] == 0) GOTO 0xf47; Pop(1)

0xf38: PushEmpty(string)
0xf39: Stack[-1] = "Neutral"
0xf3a: Call2 0x9bb

0xf3b: Pop(1)
0xf3c: Push((int) 537624)
0xf3d: @@ SetMessage(Stack[-1])
0xf3e: Pop(1)
0xf3f: @@ ClearReplies()
0xf40: Pop(0)
0xf41: Push((int) 537625)
0xf42: Push((int) 39474)
0xf43: Push((int) 39473)
0xf44: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf45: Pop(3)
0xf46: Return(); Pop(0)

0xf47: Push((int) 39474)
0xf48: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf49: IF (Stack[-1] == 0) GOTO 0xf5e; Pop(1)

0xf4a: PushEmpty(string)
0xf4b: Stack[-1] = "Neutral"
0xf4c: Call2 0x9bb

0xf4d: Pop(1)
0xf4e: Push((int) 537626)
0xf4f: @@ SetMessage(Stack[-1])
0xf50: Pop(1)
0xf51: @@ ClearReplies()
0xf52: Pop(0)
0xf53: Push((int) 537627)
0xf54: Push((int) -1)
0xf55: Push((int) 39475)
0xf56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf57: Pop(3)
0xf58: Push((int) 537628)
0xf59: Push((int) 39477)
0xf5a: Push((int) 39476)
0xf5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5c: Pop(3)
0xf5d: Return(); Pop(0)

0xf5e: Push((int) 39477)
0xf5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf60: IF (Stack[-1] == 0) GOTO 0xf75; Pop(1)

0xf61: PushEmpty(string)
0xf62: Stack[-1] = "Neutral"
0xf63: Call2 0x9bb

0xf64: Pop(1)
0xf65: Push((int) 537629)
0xf66: @@ SetMessage(Stack[-1])
0xf67: Pop(1)
0xf68: @@ ClearReplies()
0xf69: Pop(0)
0xf6a: Push((int) 537630)
0xf6b: Push((int) -1)
0xf6c: Push((int) 39478)
0xf6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6e: Pop(3)
0xf6f: Push((int) 537631)
0xf70: Push((int) -1)
0xf71: Push((int) 39479)
0xf72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf73: Pop(3)
0xf74: Return(); Pop(0)

0xf75: Push((int) 39452)
0xf76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf77: IF (Stack[-1] == 0) GOTO 0xf8c; Pop(1)

0xf78: PushEmpty(string)
0xf79: Stack[-1] = "Neutral"
0xf7a: Call2 0x9bb

0xf7b: Pop(1)
0xf7c: Push((int) 537604)
0xf7d: @@ SetMessage(Stack[-1])
0xf7e: Pop(1)
0xf7f: @@ ClearReplies()
0xf80: Pop(0)
0xf81: Push((int) 537605)
0xf82: Push((int) 39454)
0xf83: Push((int) 39453)
0xf84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf85: Pop(3)
0xf86: Push((int) 537612)
0xf87: Push((int) 39461)
0xf88: Push((int) 39460)
0xf89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8a: Pop(3)
0xf8b: Return(); Pop(0)

0xf8c: Push((int) 39461)
0xf8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf8e: IF (Stack[-1] == 0) GOTO 0xfa3; Pop(1)

0xf8f: PushEmpty(string)
0xf90: Stack[-1] = "Neutral"
0xf91: Call2 0x9bb

0xf92: Pop(1)
0xf93: Push((int) 537613)
0xf94: @@ SetMessage(Stack[-1])
0xf95: Pop(1)
0xf96: @@ ClearReplies()
0xf97: Pop(0)
0xf98: Push((int) 537614)
0xf99: Push((int) 39463)
0xf9a: Push((int) 39462)
0xf9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9c: Pop(3)
0xf9d: Push((int) 537620)
0xf9e: Push((int) -1)
0xf9f: Push((int) 39468)
0xfa0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa1: Pop(3)
0xfa2: Return(); Pop(0)

0xfa3: Push((int) 39463)
0xfa4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa5: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfa6: PushEmpty(string)
0xfa7: Stack[-1] = "Neutral"
0xfa8: Call2 0x9bb

0xfa9: Pop(1)
0xfaa: Push((int) 537615)
0xfab: @@ SetMessage(Stack[-1])
0xfac: Pop(1)
0xfad: @@ ClearReplies()
0xfae: Pop(0)
0xfaf: Push((int) 537616)
0xfb0: Push((int) 39465)
0xfb1: Push((int) 39464)
0xfb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb3: Pop(3)
0xfb4: Return(); Pop(0)

0xfb5: Push((int) 39465)
0xfb6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb7: IF (Stack[-1] == 0) GOTO 0xfcc; Pop(1)

0xfb8: PushEmpty(string)
0xfb9: Stack[-1] = "Neutral"
0xfba: Call2 0x9bb

0xfbb: Pop(1)
0xfbc: Push((int) 537617)
0xfbd: @@ SetMessage(Stack[-1])
0xfbe: Pop(1)
0xfbf: @@ ClearReplies()
0xfc0: Pop(0)
0xfc1: Push((int) 537618)
0xfc2: Push((int) -1)
0xfc3: Push((int) 39466)
0xfc4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc5: Pop(3)
0xfc6: Push((int) 537619)
0xfc7: Push((int) -1)
0xfc8: Push((int) 39467)
0xfc9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfca: Pop(3)
0xfcb: Return(); Pop(0)

0xfcc: Push((int) 39454)
0xfcd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfce: IF (Stack[-1] == 0) GOTO 0xfe3; Pop(1)

0xfcf: PushEmpty(string)
0xfd0: Stack[-1] = "Neutral"
0xfd1: Call2 0x9bb

0xfd2: Pop(1)
0xfd3: Push((int) 537606)
0xfd4: @@ SetMessage(Stack[-1])
0xfd5: Pop(1)
0xfd6: @@ ClearReplies()
0xfd7: Pop(0)
0xfd8: Push((int) 537607)
0xfd9: Push((int) 39456)
0xfda: Push((int) 39455)
0xfdb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfdc: Pop(3)
0xfdd: Push((int) 537611)
0xfde: Push((int) -1)
0xfdf: Push((int) 39459)
0xfe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe1: Pop(3)
0xfe2: Return(); Pop(0)

0xfe3: Push((int) 39456)
0xfe4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe5: IF (Stack[-1] == 0) GOTO 0xffa; Pop(1)

0xfe6: PushEmpty(string)
0xfe7: Stack[-1] = "Neutral"
0xfe8: Call2 0x9bb

0xfe9: Pop(1)
0xfea: Push((int) 537608)
0xfeb: @@ SetMessage(Stack[-1])
0xfec: Pop(1)
0xfed: @@ ClearReplies()
0xfee: Pop(0)
0xfef: Push((int) 537609)
0xff0: Push((int) -1)
0xff1: Push((int) 39457)
0xff2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff3: Pop(3)
0xff4: Push((int) 537610)
0xff5: Push((int) -1)
0xff6: Push((int) 39458)
0xff7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff8: Pop(3)
0xff9: Return(); Pop(0)

0xffa: Push((int) 39442)
0xffb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xffc: IF (Stack[-1] == 0) GOTO 0x1011; Pop(1)

0xffd: PushEmpty(string)
0xffe: Stack[-1] = "Neutral"
0xfff: Call2 0x9bb

0x1000: Pop(1)
0x1001: Push((int) 537594)
0x1002: @@ SetMessage(Stack[-1])
0x1003: Pop(1)
0x1004: @@ ClearReplies()
0x1005: Pop(0)
0x1006: Push((int) 537595)
0x1007: Push((int) 39444)
0x1008: Push((int) 39443)
0x1009: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100a: Pop(3)
0x100b: Push((int) 537602)
0x100c: Push((int) -1)
0x100d: Push((int) 39450)
0x100e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100f: Pop(3)
0x1010: Return(); Pop(0)

0x1011: Push((int) 39444)
0x1012: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1013: IF (Stack[-1] == 0) GOTO 0x1028; Pop(1)

0x1014: PushEmpty(string)
0x1015: Stack[-1] = "Neutral"
0x1016: Call2 0x9bb

0x1017: Pop(1)
0x1018: Push((int) 537596)
0x1019: @@ SetMessage(Stack[-1])
0x101a: Pop(1)
0x101b: @@ ClearReplies()
0x101c: Pop(0)
0x101d: Push((int) 537597)
0x101e: Push((int) 39446)
0x101f: Push((int) 39445)
0x1020: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1021: Pop(3)
0x1022: Push((int) 537601)
0x1023: Push((int) -1)
0x1024: Push((int) 39449)
0x1025: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1026: Pop(3)
0x1027: Return(); Pop(0)

0x1028: Push((int) 39446)
0x1029: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x102a: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x102b: PushEmpty(string)
0x102c: Stack[-1] = "Neutral"
0x102d: Call2 0x9bb

0x102e: Pop(1)
0x102f: Push((int) 537598)
0x1030: @@ SetMessage(Stack[-1])
0x1031: Pop(1)
0x1032: @@ ClearReplies()
0x1033: Pop(0)
0x1034: Push((int) 537599)
0x1035: Push((int) -1)
0x1036: Push((int) 39447)
0x1037: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1038: Pop(3)
0x1039: Push((int) 537600)
0x103a: Push((int) -1)
0x103b: Push((int) 39448)
0x103c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103d: Pop(3)
0x103e: Return(); Pop(0)

0x103f: Push((int) 39419)
0x1040: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1041: IF (Stack[-1] == 0) GOTO 0x1060; Pop(1)

0x1042: PushEmpty(string)
0x1043: Stack[-1] = "Neutral"
0x1044: Call2 0x9bb

0x1045: Pop(1)
0x1046: Push((int) 537572)
0x1047: @@ SetMessage(Stack[-1])
0x1048: Pop(1)
0x1049: @@ ClearReplies()
0x104a: Pop(0)
0x104b: Push((int) 537573)
0x104c: Push((int) 39421)
0x104d: Push((int) 39420)
0x104e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104f: Pop(3)
0x1050: Push((int) 537578)
0x1051: Push((int) 39426)
0x1052: Push((int) 39425)
0x1053: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1054: Pop(3)
0x1055: Push((int) 537588)
0x1056: Push((int) 39437)
0x1057: Push((int) 39436)
0x1058: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1059: Pop(3)
0x105a: Push((int) 537592)
0x105b: Push((int) -1)
0x105c: Push((int) 39440)
0x105d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x105e: Pop(3)
0x105f: Return(); Pop(0)

0x1060: Push((int) 39437)
0x1061: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1062: IF (Stack[-1] == 0) GOTO 0x1077; Pop(1)

0x1063: PushEmpty(string)
0x1064: Stack[-1] = "Neutral"
0x1065: Call2 0x9bb

0x1066: Pop(1)
0x1067: Push((int) 537589)
0x1068: @@ SetMessage(Stack[-1])
0x1069: Pop(1)
0x106a: @@ ClearReplies()
0x106b: Pop(0)
0x106c: Push((int) 537590)
0x106d: Push((int) -1)
0x106e: Push((int) 39438)
0x106f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1070: Pop(3)
0x1071: Push((int) 537591)
0x1072: Push((int) -1)
0x1073: Push((int) 39439)
0x1074: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1075: Pop(3)
0x1076: Return(); Pop(0)

0x1077: Push((int) 39426)
0x1078: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1079: IF (Stack[-1] == 0) GOTO 0x108e; Pop(1)

0x107a: PushEmpty(string)
0x107b: Stack[-1] = "Neutral"
0x107c: Call2 0x9bb

0x107d: Pop(1)
0x107e: Push((int) 537579)
0x107f: @@ SetMessage(Stack[-1])
0x1080: Pop(1)
0x1081: @@ ClearReplies()
0x1082: Pop(0)
0x1083: Push((int) 537580)
0x1084: Push((int) 39421)
0x1085: Push((int) 39427)
0x1086: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1087: Pop(3)
0x1088: Push((int) 537581)
0x1089: Push((int) 39430)
0x108a: Push((int) 39429)
0x108b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108c: Pop(3)
0x108d: Return(); Pop(0)

0x108e: Push((int) 39430)
0x108f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1090: IF (Stack[-1] == 0) GOTO 0x10a5; Pop(1)

0x1091: PushEmpty(string)
0x1092: Stack[-1] = "Neutral"
0x1093: Call2 0x9bb

0x1094: Pop(1)
0x1095: Push((int) 537582)
0x1096: @@ SetMessage(Stack[-1])
0x1097: Pop(1)
0x1098: @@ ClearReplies()
0x1099: Pop(0)
0x109a: Push((int) 537583)
0x109b: Push((int) 39432)
0x109c: Push((int) 39431)
0x109d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109e: Pop(3)
0x109f: Push((int) 537587)
0x10a0: Push((int) -1)
0x10a1: Push((int) 39435)
0x10a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a3: Pop(3)
0x10a4: Return(); Pop(0)

0x10a5: Push((int) 39432)
0x10a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10a7: IF (Stack[-1] == 0) GOTO 0x10bc; Pop(1)

0x10a8: PushEmpty(string)
0x10a9: Stack[-1] = "Neutral"
0x10aa: Call2 0x9bb

0x10ab: Pop(1)
0x10ac: Push((int) 537584)
0x10ad: @@ SetMessage(Stack[-1])
0x10ae: Pop(1)
0x10af: @@ ClearReplies()
0x10b0: Pop(0)
0x10b1: Push((int) 537585)
0x10b2: Push((int) -1)
0x10b3: Push((int) 39433)
0x10b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10b5: Pop(3)
0x10b6: Push((int) 537586)
0x10b7: Push((int) -1)
0x10b8: Push((int) 39434)
0x10b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ba: Pop(3)
0x10bb: Return(); Pop(0)

0x10bc: Push((int) 39421)
0x10bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10be: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10bf: PushEmpty(string)
0x10c0: Stack[-1] = "Neutral"
0x10c1: Call2 0x9bb

0x10c2: Pop(1)
0x10c3: Push((int) 537574)
0x10c4: @@ SetMessage(Stack[-1])
0x10c5: Pop(1)
0x10c6: @@ ClearReplies()
0x10c7: Pop(0)
0x10c8: Push((int) 537575)
0x10c9: Push((int) 39423)
0x10ca: Push((int) 39422)
0x10cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10cc: Pop(3)
0x10cd: Return(); Pop(0)

0x10ce: Push((int) 39423)
0x10cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10d0: IF (Stack[-1] == 0) GOTO 0x10e0; Pop(1)

0x10d1: PushEmpty(string)
0x10d2: Stack[-1] = "Neutral"
0x10d3: Call2 0x9bb

0x10d4: Pop(1)
0x10d5: Push((int) 537576)
0x10d6: @@ SetMessage(Stack[-1])
0x10d7: Pop(1)
0x10d8: @@ ClearReplies()
0x10d9: Pop(0)
0x10da: Push((int) 537577)
0x10db: Push((int) -1)
0x10dc: Push((int) 39424)
0x10dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10de: Pop(3)
0x10df: Return(); Pop(0)

0x10e0: Push((int) 39407)
0x10e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e2: IF (Stack[-1] == 0) GOTO 0x10f7; Pop(1)

0x10e3: PushEmpty(string)
0x10e4: Stack[-1] = "Neutral"
0x10e5: Call2 0x9bb

0x10e6: Pop(1)
0x10e7: Push((int) 537560)
0x10e8: @@ SetMessage(Stack[-1])
0x10e9: Pop(1)
0x10ea: @@ ClearReplies()
0x10eb: Pop(0)
0x10ec: Push((int) 537561)
0x10ed: Push((int) 39409)
0x10ee: Push((int) 39408)
0x10ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f0: Pop(3)
0x10f1: Push((int) 537570)
0x10f2: Push((int) -1)
0x10f3: Push((int) 39417)
0x10f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f5: Pop(3)
0x10f6: Return(); Pop(0)

0x10f7: Push((int) 39409)
0x10f8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f9: IF (Stack[-1] == 0) GOTO 0x110e; Pop(1)

0x10fa: PushEmpty(string)
0x10fb: Stack[-1] = "Neutral"
0x10fc: Call2 0x9bb

0x10fd: Pop(1)
0x10fe: Push((int) 537562)
0x10ff: @@ SetMessage(Stack[-1])
0x1100: Pop(1)
0x1101: @@ ClearReplies()
0x1102: Pop(0)
0x1103: Push((int) 537563)
0x1104: Push((int) 39411)
0x1105: Push((int) 39410)
0x1106: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1107: Pop(3)
0x1108: Push((int) 537567)
0x1109: Push((int) 39415)
0x110a: Push((int) 39414)
0x110b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x110c: Pop(3)
0x110d: Return(); Pop(0)

0x110e: Push((int) 39415)
0x110f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1110: IF (Stack[-1] == 0) GOTO 0x1120; Pop(1)

0x1111: PushEmpty(string)
0x1112: Stack[-1] = "Neutral"
0x1113: Call2 0x9bb

0x1114: Pop(1)
0x1115: Push((int) 537568)
0x1116: @@ SetMessage(Stack[-1])
0x1117: Pop(1)
0x1118: @@ ClearReplies()
0x1119: Pop(0)
0x111a: Push((int) 537569)
0x111b: Push((int) -1)
0x111c: Push((int) 39416)
0x111d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x111e: Pop(3)
0x111f: Return(); Pop(0)

0x1120: Push((int) 39411)
0x1121: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1122: IF (Stack[-1] == 0) GOTO 0x1137; Pop(1)

0x1123: PushEmpty(string)
0x1124: Stack[-1] = "Neutral"
0x1125: Call2 0x9bb

0x1126: Pop(1)
0x1127: Push((int) 537564)
0x1128: @@ SetMessage(Stack[-1])
0x1129: Pop(1)
0x112a: @@ ClearReplies()
0x112b: Pop(0)
0x112c: Push((int) 537565)
0x112d: Push((int) -1)
0x112e: Push((int) 39412)
0x112f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1130: Pop(3)
0x1131: Push((int) 537566)
0x1132: Push((int) -1)
0x1133: Push((int) 39413)
0x1134: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1135: Pop(3)
0x1136: Return(); Pop(0)

0x1137: Push((int) 39397)
0x1138: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1139: IF (Stack[-1] == 0) GOTO 0x114e; Pop(1)

0x113a: PushEmpty(string)
0x113b: Stack[-1] = "Neutral"
0x113c: Call2 0x9bb

0x113d: Pop(1)
0x113e: Push((int) 537550)
0x113f: @@ SetMessage(Stack[-1])
0x1140: Pop(1)
0x1141: @@ ClearReplies()
0x1142: Pop(0)
0x1143: Push((int) 537551)
0x1144: Push((int) 39399)
0x1145: Push((int) 39398)
0x1146: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1147: Pop(3)
0x1148: Push((int) 537558)
0x1149: Push((int) -1)
0x114a: Push((int) 39405)
0x114b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114c: Pop(3)
0x114d: Return(); Pop(0)

0x114e: Push((int) 39399)
0x114f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1150: IF (Stack[-1] == 0) GOTO 0x1165; Pop(1)

0x1151: PushEmpty(string)
0x1152: Stack[-1] = "Neutral"
0x1153: Call2 0x9bb

0x1154: Pop(1)
0x1155: Push((int) 537552)
0x1156: @@ SetMessage(Stack[-1])
0x1157: Pop(1)
0x1158: @@ ClearReplies()
0x1159: Pop(0)
0x115a: Push((int) 537553)
0x115b: Push((int) 39401)
0x115c: Push((int) 39400)
0x115d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x115e: Pop(3)
0x115f: Push((int) 537557)
0x1160: Push((int) -1)
0x1161: Push((int) 39404)
0x1162: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1163: Pop(3)
0x1164: Return(); Pop(0)

0x1165: Push((int) 39401)
0x1166: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1167: IF (Stack[-1] == 0) GOTO 0x117c; Pop(1)

0x1168: PushEmpty(string)
0x1169: Stack[-1] = "Neutral"
0x116a: Call2 0x9bb

0x116b: Pop(1)
0x116c: Push((int) 537554)
0x116d: @@ SetMessage(Stack[-1])
0x116e: Pop(1)
0x116f: @@ ClearReplies()
0x1170: Pop(0)
0x1171: Push((int) 537555)
0x1172: Push((int) -1)
0x1173: Push((int) 39402)
0x1174: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1175: Pop(3)
0x1176: Push((int) 537556)
0x1177: Push((int) -1)
0x1178: Push((int) 39403)
0x1179: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117a: Pop(3)
0x117b: Return(); Pop(0)

0x117c: Push((int) 39382)
0x117d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117e: IF (Stack[-1] == 0) GOTO 0x118e; Pop(1)

0x117f: PushEmpty(string)
0x1180: Stack[-1] = "Neutral"
0x1181: Call2 0x9bb

0x1182: Pop(1)
0x1183: Push((int) 537535)
0x1184: @@ SetMessage(Stack[-1])
0x1185: Pop(1)
0x1186: @@ ClearReplies()
0x1187: Pop(0)
0x1188: Push((int) 537536)
0x1189: Push((int) 39384)
0x118a: Push((int) 39383)
0x118b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118c: Pop(3)
0x118d: Return(); Pop(0)

0x118e: Push((int) 39384)
0x118f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1190: IF (Stack[-1] == 0) GOTO 0x11a5; Pop(1)

0x1191: PushEmpty(string)
0x1192: Stack[-1] = "Neutral"
0x1193: Call2 0x9bb

0x1194: Pop(1)
0x1195: Push((int) 537537)
0x1196: @@ SetMessage(Stack[-1])
0x1197: Pop(1)
0x1198: @@ ClearReplies()
0x1199: Pop(0)
0x119a: Push((int) 537538)
0x119b: Push((int) 39386)
0x119c: Push((int) 39385)
0x119d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x119e: Pop(3)
0x119f: Push((int) 537548)
0x11a0: Push((int) -1)
0x11a1: Push((int) 39395)
0x11a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a3: Pop(3)
0x11a4: Return(); Pop(0)

0x11a5: Push((int) 39386)
0x11a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11a7: IF (Stack[-1] == 0) GOTO 0x11c1; Pop(1)

0x11a8: PushEmpty(string)
0x11a9: Stack[-1] = "Neutral"
0x11aa: Call2 0x9bb

0x11ab: Pop(1)
0x11ac: Push((int) 537539)
0x11ad: @@ SetMessage(Stack[-1])
0x11ae: Pop(1)
0x11af: @@ ClearReplies()
0x11b0: Pop(0)
0x11b1: Push((int) 537540)
0x11b2: Push((int) 39388)
0x11b3: Push((int) 39387)
0x11b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b5: Pop(3)
0x11b6: Push((int) 537543)
0x11b7: Push((int) -1)
0x11b8: Push((int) 39390)
0x11b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ba: Pop(3)
0x11bb: Push((int) 537544)
0x11bc: Push((int) 39392)
0x11bd: Push((int) 39391)
0x11be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11bf: Pop(3)
0x11c0: Return(); Pop(0)

0x11c1: Push((int) 39392)
0x11c2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c3: IF (Stack[-1] == 0) GOTO 0x11d8; Pop(1)

0x11c4: PushEmpty(string)
0x11c5: Stack[-1] = "Neutral"
0x11c6: Call2 0x9bb

0x11c7: Pop(1)
0x11c8: Push((int) 537545)
0x11c9: @@ SetMessage(Stack[-1])
0x11ca: Pop(1)
0x11cb: @@ ClearReplies()
0x11cc: Pop(0)
0x11cd: Push((int) 537546)
0x11ce: Push((int) -1)
0x11cf: Push((int) 39393)
0x11d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d1: Pop(3)
0x11d2: Push((int) 537547)
0x11d3: Push((int) -1)
0x11d4: Push((int) 39394)
0x11d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d6: Pop(3)
0x11d7: Return(); Pop(0)

0x11d8: Push((int) 39388)
0x11d9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11da: IF (Stack[-1] == 0) GOTO 0x11ea; Pop(1)

0x11db: PushEmpty(string)
0x11dc: Stack[-1] = "Neutral"
0x11dd: Call2 0x9bb

0x11de: Pop(1)
0x11df: Push((int) 537541)
0x11e0: @@ SetMessage(Stack[-1])
0x11e1: Pop(1)
0x11e2: @@ ClearReplies()
0x11e3: Pop(0)
0x11e4: Push((int) 537542)
0x11e5: Push((int) -1)
0x11e6: Push((int) 39389)
0x11e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e8: Pop(3)
0x11e9: Return(); Pop(0)

0x11ea: Push((int) 39372)
0x11eb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11ec: IF (Stack[-1] == 0) GOTO 0x1201; Pop(1)

0x11ed: PushEmpty(string)
0x11ee: Stack[-1] = "Neutral"
0x11ef: Call2 0x9bb

0x11f0: Pop(1)
0x11f1: Push((int) 537525)
0x11f2: @@ SetMessage(Stack[-1])
0x11f3: Pop(1)
0x11f4: @@ ClearReplies()
0x11f5: Pop(0)
0x11f6: Push((int) 537526)
0x11f7: Push((int) 39374)
0x11f8: Push((int) 39373)
0x11f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11fa: Pop(3)
0x11fb: Push((int) 537533)
0x11fc: Push((int) -1)
0x11fd: Push((int) 39380)
0x11fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ff: Pop(3)
0x1200: Return(); Pop(0)

0x1201: Push((int) 39374)
0x1202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1203: IF (Stack[-1] == 0) GOTO 0x1218; Pop(1)

0x1204: PushEmpty(string)
0x1205: Stack[-1] = "Neutral"
0x1206: Call2 0x9bb

0x1207: Pop(1)
0x1208: Push((int) 537527)
0x1209: @@ SetMessage(Stack[-1])
0x120a: Pop(1)
0x120b: @@ ClearReplies()
0x120c: Pop(0)
0x120d: Push((int) 537528)
0x120e: Push((int) 39376)
0x120f: Push((int) 39375)
0x1210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1211: Pop(3)
0x1212: Push((int) 537532)
0x1213: Push((int) -1)
0x1214: Push((int) 39379)
0x1215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1216: Pop(3)
0x1217: Return(); Pop(0)

0x1218: Push((int) 39376)
0x1219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121a: IF (Stack[-1] == 0) GOTO 0x122f; Pop(1)

0x121b: PushEmpty(string)
0x121c: Stack[-1] = "Neutral"
0x121d: Call2 0x9bb

0x121e: Pop(1)
0x121f: Push((int) 537529)
0x1220: @@ SetMessage(Stack[-1])
0x1221: Pop(1)
0x1222: @@ ClearReplies()
0x1223: Pop(0)
0x1224: Push((int) 537530)
0x1225: Push((int) -1)
0x1226: Push((int) 39377)
0x1227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1228: Pop(3)
0x1229: Push((int) 537531)
0x122a: Push((int) -1)
0x122b: Push((int) 39378)
0x122c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122d: Pop(3)
0x122e: Return(); Pop(0)

0x122f: Push((int) 39356)
0x1230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1231: IF (Stack[-1] == 0) GOTO 0x1246; Pop(1)

0x1232: PushEmpty(string)
0x1233: Stack[-1] = "Neutral"
0x1234: Call2 0x9bb

0x1235: Pop(1)
0x1236: Push((int) 537509)
0x1237: @@ SetMessage(Stack[-1])
0x1238: Pop(1)
0x1239: @@ ClearReplies()
0x123a: Pop(0)
0x123b: Push((int) 537510)
0x123c: Push((int) 39358)
0x123d: Push((int) 39357)
0x123e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123f: Pop(3)
0x1240: Push((int) 537520)
0x1241: Push((int) 39368)
0x1242: Push((int) 39367)
0x1243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1244: Pop(3)
0x1245: Return(); Pop(0)

0x1246: Push((int) 39368)
0x1247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1248: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x1249: PushEmpty(string)
0x124a: Stack[-1] = "Neutral"
0x124b: Call2 0x9bb

0x124c: Pop(1)
0x124d: Push((int) 537521)
0x124e: @@ SetMessage(Stack[-1])
0x124f: Pop(1)
0x1250: @@ ClearReplies()
0x1251: Pop(0)
0x1252: Push((int) 537522)
0x1253: Push((int) -1)
0x1254: Push((int) 39369)
0x1255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1256: Pop(3)
0x1257: Push((int) 537523)
0x1258: Push((int) -1)
0x1259: Push((int) 39370)
0x125a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125b: Pop(3)
0x125c: Return(); Pop(0)

0x125d: Push((int) 39358)
0x125e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x125f: IF (Stack[-1] == 0) GOTO 0x1274; Pop(1)

0x1260: PushEmpty(string)
0x1261: Stack[-1] = "Neutral"
0x1262: Call2 0x9bb

0x1263: Pop(1)
0x1264: Push((int) 537511)
0x1265: @@ SetMessage(Stack[-1])
0x1266: Pop(1)
0x1267: @@ ClearReplies()
0x1268: Pop(0)
0x1269: Push((int) 537512)
0x126a: Push((int) 39360)
0x126b: Push((int) 39359)
0x126c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126d: Pop(3)
0x126e: Push((int) 537519)
0x126f: Push((int) -1)
0x1270: Push((int) 39366)
0x1271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1272: Pop(3)
0x1273: Return(); Pop(0)

0x1274: Push((int) 39360)
0x1275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1276: IF (Stack[-1] == 0) GOTO 0x128b; Pop(1)

0x1277: PushEmpty(string)
0x1278: Stack[-1] = "Neutral"
0x1279: Call2 0x9bb

0x127a: Pop(1)
0x127b: Push((int) 537513)
0x127c: @@ SetMessage(Stack[-1])
0x127d: Pop(1)
0x127e: @@ ClearReplies()
0x127f: Pop(0)
0x1280: Push((int) 537514)
0x1281: Push((int) 39362)
0x1282: Push((int) 39361)
0x1283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1284: Pop(3)
0x1285: Push((int) 537518)
0x1286: Push((int) -1)
0x1287: Push((int) 39365)
0x1288: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1289: Pop(3)
0x128a: Return(); Pop(0)

0x128b: Push((int) 39362)
0x128c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x128d: IF (Stack[-1] == 0) GOTO 0x12a2; Pop(1)

0x128e: PushEmpty(string)
0x128f: Stack[-1] = "Neutral"
0x1290: Call2 0x9bb

0x1291: Pop(1)
0x1292: Push((int) 537515)
0x1293: @@ SetMessage(Stack[-1])
0x1294: Pop(1)
0x1295: @@ ClearReplies()
0x1296: Pop(0)
0x1297: Push((int) 537516)
0x1298: Push((int) -1)
0x1299: Push((int) 39363)
0x129a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129b: Pop(3)
0x129c: Push((int) 537517)
0x129d: Push((int) -1)
0x129e: Push((int) 39364)
0x129f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a0: Pop(3)
0x12a1: Return(); Pop(0)

0x12a2: Push((int) 45739)
0x12a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a4: IF (Stack[-1] == 0) GOTO 0x12be; Pop(1)

0x12a5: PushEmpty(string)
0x12a6: Stack[-1] = "Neutral"
0x12a7: Call2 0x9bb

0x12a8: Pop(1)
0x12a9: Push((int) 543283)
0x12aa: @@ SetMessage(Stack[-1])
0x12ab: Pop(1)
0x12ac: @@ ClearReplies()
0x12ad: Pop(0)
0x12ae: Push((int) 543284)
0x12af: Push((int) -1)
0x12b0: Push((int) 45740)
0x12b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b2: Pop(3)
0x12b3: Push((int) 543285)
0x12b4: Push((int) -1)
0x12b5: Push((int) 45741)
0x12b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12b7: Pop(3)
0x12b8: Push((int) 543286)
0x12b9: Push((int) -1)
0x12ba: Push((int) 45742)
0x12bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12bc: Pop(3)
0x12bd: Return(); Pop(0)

0x12be: Push((int) 45734)
0x12bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c0: IF (Stack[-1] == 0) GOTO 0x12d5; Pop(1)

0x12c1: PushEmpty(string)
0x12c2: Stack[-1] = "Neutral"
0x12c3: Call2 0x9bb

0x12c4: Pop(1)
0x12c5: Push((int) 543278)
0x12c6: @@ SetMessage(Stack[-1])
0x12c7: Pop(1)
0x12c8: @@ ClearReplies()
0x12c9: Pop(0)
0x12ca: Push((int) 543279)
0x12cb: Push((int) -1)
0x12cc: Push((int) 45735)
0x12cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ce: Pop(3)
0x12cf: Push((int) 543280)
0x12d0: Push((int) -1)
0x12d1: Push((int) 45736)
0x12d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d3: Pop(3)
0x12d4: Return(); Pop(0)

0x12d5: Push((int) 45719)
0x12d6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d7: IF (Stack[-1] == 0) GOTO 0x12f1; Pop(1)

0x12d8: PushEmpty(string)
0x12d9: Stack[-1] = "Neutral"
0x12da: Call2 0x9bb

0x12db: Pop(1)
0x12dc: Push((int) 543263)
0x12dd: @@ SetMessage(Stack[-1])
0x12de: Pop(1)
0x12df: @@ ClearReplies()
0x12e0: Pop(0)
0x12e1: Push((int) 543264)
0x12e2: Push((int) 45723)
0x12e3: Push((int) 45720)
0x12e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12e5: Pop(3)
0x12e6: Push((int) 543265)
0x12e7: Push((int) -1)
0x12e8: Push((int) 45721)
0x12e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ea: Pop(3)
0x12eb: Push((int) 543266)
0x12ec: Push((int) -1)
0x12ed: Push((int) 45722)
0x12ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ef: Pop(3)
0x12f0: Return(); Pop(0)

0x12f1: Push((int) 45723)
0x12f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12f3: IF (Stack[-1] == 0) GOTO 0x130d; Pop(1)

0x12f4: PushEmpty(string)
0x12f5: Stack[-1] = "Neutral"
0x12f6: Call2 0x9bb

0x12f7: Pop(1)
0x12f8: Push((int) 543267)
0x12f9: @@ SetMessage(Stack[-1])
0x12fa: Pop(1)
0x12fb: @@ ClearReplies()
0x12fc: Pop(0)
0x12fd: Push((int) 543268)
0x12fe: Push((int) 45727)
0x12ff: Push((int) 45724)
0x1300: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1301: Pop(3)
0x1302: Push((int) 543269)
0x1303: Push((int) -1)
0x1304: Push((int) 45725)
0x1305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1306: Pop(3)
0x1307: Push((int) 543270)
0x1308: Push((int) -1)
0x1309: Push((int) 45726)
0x130a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x130b: Pop(3)
0x130c: Return(); Pop(0)

0x130d: Push((int) 45727)
0x130e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x130f: IF (Stack[-1] == 0) GOTO 0x1329; Pop(1)

0x1310: PushEmpty(string)
0x1311: Stack[-1] = "Neutral"
0x1312: Call2 0x9bb

0x1313: Pop(1)
0x1314: Push((int) 543271)
0x1315: @@ SetMessage(Stack[-1])
0x1316: Pop(1)
0x1317: @@ ClearReplies()
0x1318: Pop(0)
0x1319: Push((int) 543272)
0x131a: Push((int) -1)
0x131b: Push((int) 45728)
0x131c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131d: Pop(3)
0x131e: Push((int) 543273)
0x131f: Push((int) -1)
0x1320: Push((int) 45729)
0x1321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1322: Pop(3)
0x1323: Push((int) 543274)
0x1324: Push((int) -1)
0x1325: Push((int) 45730)
0x1326: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1327: Pop(3)
0x1328: Return(); Pop(0)

0x1329: Push((int) 45709)
0x132a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x132b: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x132c: PushEmpty(string)
0x132d: Stack[-1] = "Neutral"
0x132e: Call2 0x9bb

0x132f: Pop(1)
0x1330: Push((int) 543253)
0x1331: @@ SetMessage(Stack[-1])
0x1332: Pop(1)
0x1333: @@ ClearReplies()
0x1334: Pop(0)
0x1335: Push((int) 543254)
0x1336: Push((int) 45714)
0x1337: Push((int) 45710)
0x1338: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1339: Pop(3)
0x133a: Push((int) 543255)
0x133b: Push((int) 45716)
0x133c: Push((int) 45711)
0x133d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x133e: Pop(3)
0x133f: Push((int) 543256)
0x1340: Push((int) -1)
0x1341: Push((int) 45712)
0x1342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1343: Pop(3)
0x1344: Push((int) 543257)
0x1345: Push((int) -1)
0x1346: Push((int) 45713)
0x1347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1348: Pop(3)
0x1349: Return(); Pop(0)

0x134a: Push((int) 45716)
0x134b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x134c: IF (Stack[-1] == 0) GOTO 0x135c; Pop(1)

0x134d: PushEmpty(string)
0x134e: Stack[-1] = "Neutral"
0x134f: Call2 0x9bb

0x1350: Pop(1)
0x1351: Push((int) 543260)
0x1352: @@ SetMessage(Stack[-1])
0x1353: Pop(1)
0x1354: @@ ClearReplies()
0x1355: Pop(0)
0x1356: Push((int) 543261)
0x1357: Push((int) -1)
0x1358: Push((int) 45717)
0x1359: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135a: Pop(3)
0x135b: Return(); Pop(0)

0x135c: Push((int) 45714)
0x135d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135e: IF (Stack[-1] == 0) GOTO 0x136e; Pop(1)

0x135f: PushEmpty(string)
0x1360: Stack[-1] = "Neutral"
0x1361: Call2 0x9bb

0x1362: Pop(1)
0x1363: Push((int) 543258)
0x1364: @@ SetMessage(Stack[-1])
0x1365: Pop(1)
0x1366: @@ ClearReplies()
0x1367: Pop(0)
0x1368: Push((int) 543259)
0x1369: Push((int) -1)
0x136a: Push((int) 45715)
0x136b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136c: Pop(3)
0x136d: Return(); Pop(0)

0x136e: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x136f: PushEmpty(bool)
0x1370: Call2 0x182b

0x1371: Pop(0)
0x1372: IF (Stack[-1] == 0) GOTO 0x1376; Pop(1)

0x1373: @ lshStopAnimation()
0x1374: Pop(0)
0x1375: GOTO 0x1378

0x1376: @ StopAnimation()
0x1377: Pop(0)
0x1378: Return(); Pop(0)

0x1379: GOTO 0x9d2

0x137a: Return(); Pop(0)

0x137b: PushEmpty(cvector, cvector)
0x137c: @ GetPosition(Stack[-1])
0x137d: Pop(0)
0x137e: Stack[-3] = Stack[-1]
0x137f: Return(); Pop(2)

0x1380: PushEmpty(cvector, cvector, cvector, cvector)
0x1381: @ GetPosition(Stack[-2])
0x1382: Pop(0)
0x1383: @@ GetPosition(Stack[-1])
0x1384: Pop(0)
0x1385: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x1386: Return(); Pop(4)

0x1387: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1388: @ GetPosition(Stack[-3])
0x1389: Pop(0)
0x138a: @@ GetPosition(Stack[-2])
0x138b: Pop(0)
0x138c: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x138d: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x138e: Return(); Pop(6)

0x138f: PushEmpty(bool, bool)
0x1390: @ IsPlayerActor(Stack[-3], Stack[-1])
0x1391: Pop(0)
0x1392: Stack[-4] = Stack[-1]
0x1393: Return(); Pop(2)

0x1394: PushEmpty(bool, bool)
0x1395: Push("HasProperty")
0x1396: Push((int) 2)
0x1397: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x1398: Pop(1); Push((bool) Stack[-1] == 0)
0x1399: IF (Stack[-1] == 0) GOTO 0x139c; Pop(1)

0x139a: Stack[-5] = (bool) 0
0x139b: Return(); Pop(2)

0x139c: @@ HasProperty(Stack[-3], Stack[-1])
0x139d: Pop(0)
0x139e: Stack[-5] = Stack[-1]
0x139f: Return(); Pop(2)

0x13a0: PushEmpty(bool, bool)
0x13a1: @@ IsDead(Stack[-1])
0x13a2: Pop(0)
0x13a3: Stack[-4] = Stack[-1]
0x13a4: Return(); Pop(2)

0x13a5: PushEmpty(object, object, object, object)
0x13a6: Pop(0); Push((bool) Stack[-5] == 0)
0x13a7: IF (Stack[-1] == 0) GOTO 0x13aa; Pop(1)

0x13a8: Stack[-6] = (bool) 0
0x13a9: Return(); Pop(4)

0x13aa: PushEmpty(bool)
0x13ab: Stack[-1] = (bool) 0
0x13ac: Push("IsDead")
0x13ad: Push((int) 1)
0x13ae: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x13af: IF (Stack[-1] == 0) GOTO 0x13b6; Pop(1)

0x13b0: PushEmpty(bool, object)
0x13b1: Stack[-1] = Stack[-8]
0x13b2: Call2 0x13a0

0x13b3: Pop(1)
0x13b4: IF (Stack[-1] == 0) GOTO 0x13b6; Pop(1)

0x13b5: Stack[-1] = (bool) 1
0x13b6: IF (Stack[-1] == 0) GOTO 0x13b9; Pop(1)

0x13b7: Stack[-6] = (bool) 0
0x13b8: Return(); Pop(4)

0x13b9: @ GetScene(Stack[-2])
0x13ba: Pop(0)
0x13bb: Pop(0); Push((bool) Stack[-2] == 0)
0x13bc: IF (Stack[-1] == 0) GOTO 0x13bf; Pop(1)

0x13bd: Stack[-6] = (bool) 0
0x13be: Return(); Pop(4)

0x13bf: @@ GetScene(Stack[-1])
0x13c0: Pop(0)
0x13c1: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x13c2: IF (Stack[-1] == 0) GOTO 0x13c5; Pop(1)

0x13c3: Stack[-6] = (bool) 0
0x13c4: Return(); Pop(4)

0x13c5: Stack[-6] = (bool) 1
0x13c6: Return(); Pop(4)

0x13c7: Stack[-1] = 0
0x13c8: Stack[-2] = 0
0x13c9: PushEmpty(int, int)
0x13ca: PushEmpty(bool, object)
0x13cb: Stack[-1] = Stack[-5]
0x13cc: Call2 0x13a5

0x13cd: Pop(1)
0x13ce: Pop(1); Push((bool) Stack[-1] == 0)
0x13cf: IF (Stack[-1] == 0) GOTO 0x13d2; Pop(1)

0x13d0: Stack[-4] = (bool) 0
0x13d1: Return(); Pop(2)

0x13d2: PushEmpty(bool, object, string)
0x13d3: Stack[-2] = Stack[-6]
0x13d4: Stack[-1] = "noaccess"
0x13d5: Call2 0x1394

0x13d6: Pop(2)
0x13d7: Pop(1); Push((bool) Stack[-1] == 0)
0x13d8: IF (Stack[-1] == 0) GOTO 0x13db; Pop(1)

0x13d9: Stack[-4] = (bool) 1
0x13da: Return(); Pop(2)

0x13db: Push("noaccess")
0x13dc: @@ GetProperty(Stack[-1], Stack[-2])
0x13dd: Pop(1)
0x13de: Push((int) 0)
0x13df: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x13e0: Return(); Pop(2)

0x13e1: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x13e2: @@ GetPosition(Stack[-3])
0x13e3: Pop(0)
0x13e4: @ GetPosition(Stack[-2])
0x13e5: Pop(0)
0x13e6: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x13e7: Push(CvectorIndex(Stack[-1], 0))
0x13e8: Push(CvectorIndex(Stack[-2], 2))
0x13e9: @ RotateAsync(Stack[-2], Stack[-1])
0x13ea: Pop(2)
0x13eb: Return(); Pop(6)

0x13ec: PushEmpty(bool, bool)
0x13ed: @ IsLoaded(Stack[-1])
0x13ee: Pop(0)
0x13ef: Stack[-3] = Stack[-1]
0x13f0: Return(); Pop(2)

0x13f1: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x13f2: @@ GetPosition(Stack[-8])
0x13f3: Pop(0)
0x13f4: @@ GetEyesHeight(Stack[-9])
0x13f5: Pop(0)
0x13f6: Push(CvectorIndex(Stack[-8], 1))
0x13f7: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x13f8: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x13f9: @ GetPosition(Stack[-7])
0x13fa: Pop(0)
0x13fb: @ GetEyesHeight(Stack[-9])
0x13fc: Pop(0)
0x13fd: Push(CvectorIndex(Stack[-7], 1))
0x13fe: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x13ff: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1400: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x1401: Push(CvectorIndex(Stack[-6], 1))
0x1402: Stack[-1] = (int) 0
0x1403: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1404: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1405: Pop(1); Push(Sqrt(Stack[-1]))
0x1406: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1407: Stack[-5] = -Stack[-6]; Pop(0);
0x1408: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1409: PushEmpty(cvector, cvector)
0x140a: Push(CVector(0.0, 1.0, 0.0))
0x140b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x140c: Call2 0x14d6

0x140d: Pop(1)
0x140e: Push((int) 25)
0x140f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1410: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1411: Push(CVector(0.0, 10.0, 0.0))
0x1412: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x1413: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x1414: @ IsOverrideActive(Stack[-2])
0x1415: Pop(0)
0x1416: Push(Stack[-2])
0x1417: IF (Stack[-1] == 0) GOTO 0x141a; Pop(1)

0x1418: Stack[-21] = (bool) 0
0x1419: Return(); Pop(18)

0x141a: @ StopWorld()
0x141b: Pop(0)
0x141c: Push((bool) 1)
0x141d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x141e: Pop(1)
0x141f: Push(CvectorIndex(Stack[-4], 0))
0x1420: Push(CvectorIndex(Stack[-5], 2))
0x1421: @ Rotate(Stack[-2], Stack[-1])
0x1422: Pop(2)
0x1423: PushEmpty(bool)
0x1424: Call2 0x182b

0x1425: Pop(0)
0x1426: IF (Stack[-1] == 0) GOTO 0x1428; Pop(1)

0x1427: GOTO 0x1430

0x1428: Push("head")
0x1429: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x142a: Pop(1)
0x142b: Push(Stack[-1])
0x142c: IF (Stack[-1] == 0) GOTO 0x1430; Pop(1)

0x142d: Push("head")
0x142e: @ LookAsyncCamera(Stack[-1])
0x142f: Pop(1)
0x1430: @ CameraWaitForPlayFinish()
0x1431: Pop(0)
0x1432: @ ResumeWorld()
0x1433: Pop(0)
0x1434: Stack[-21] = (bool) 1
0x1435: Return(); Pop(18)

0x1436: PushEmpty(bool, bool)
0x1437: Push((bool) 1)
0x1438: @ CameraSwitchToNormal(Stack[-1])
0x1439: Pop(1)
0x143a: PushEmpty(bool)
0x143b: Call2 0x182b

0x143c: Pop(0)
0x143d: IF (Stack[-1] == 0) GOTO 0x143f; Pop(1)

0x143e: GOTO 0x1447

0x143f: Push("head")
0x1440: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1441: Pop(1)
0x1442: Push(Stack[-1])
0x1443: IF (Stack[-1] == 0) GOTO 0x1447; Pop(1)

0x1444: Push("head")
0x1445: @ UnlookAsync(Stack[-1])
0x1446: Pop(1)
0x1447: Return(); Pop(2)

0x1448: PushEmpty()
0x1449: PushEmpty(bool, object, float)
0x144a: Stack[-2] = Stack[-4]
0x144b: Stack[-1] = (int) 70
0x144c: Call2 0x1450

0x144d: Stack[-5] = Stack[-3]
0x144e: Pop(3)
0x144f: Return(); Pop(0)

0x1450: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1451: @@ GetPosition(Stack[-7])
0x1452: Pop(0)
0x1453: @@ GetEyesHeight(Stack[-8])
0x1454: Pop(0)
0x1455: Push(CvectorIndex(Stack[-7], 1))
0x1456: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1457: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1458: @ GetPosition(Stack[-6])
0x1459: Pop(0)
0x145a: @ GetEyesHeight(Stack[-8])
0x145b: Pop(0)
0x145c: Push(CvectorIndex(Stack[-6], 1))
0x145d: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x145e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x145f: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1460: Push(CvectorIndex(Stack[-5], 1))
0x1461: Stack[-1] = (int) 0
0x1462: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1463: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1464: Pop(1); Push(Sqrt(Stack[-1]))
0x1465: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1466: Stack[-4] = -Stack[-5]; Pop(0);
0x1467: Pop(0); Push(Stack[-5] * Stack[-17]);
0x1468: Push(CVector(0.0, 10.0, 0.0))
0x1469: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x146a: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x146b: @ IsOverrideActive(Stack[-1])
0x146c: Pop(0)
0x146d: Push(Stack[-1])
0x146e: IF (Stack[-1] == 0) GOTO 0x1471; Pop(1)

0x146f: Stack[-19] = (bool) 0
0x1470: Return(); Pop(16)

0x1471: @ StopWorld()
0x1472: Pop(0)
0x1473: Push((bool) 1)
0x1474: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x1475: Pop(1)
0x1476: Push(CvectorIndex(Stack[-3], 0))
0x1477: Push(CvectorIndex(Stack[-4], 2))
0x1478: @ Rotate(Stack[-2], Stack[-1])
0x1479: Pop(2)
0x147a: @ CameraWaitForPlayFinish()
0x147b: Pop(0)
0x147c: @ ResumeWorld()
0x147d: Pop(0)
0x147e: Stack[-19] = (bool) 1
0x147f: Return(); Pop(16)

0x1480: PushEmpty()
0x1481: Push((bool) 1)
0x1482: @ CameraSwitchToNormal(Stack[-1])
0x1483: Pop(1)
0x1484: Return(); Pop(0)

0x1485: PushEmpty(bool, float, float, bool, float, float)
0x1486: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1487: Pop(0)
0x1488: Push(Stack[-3])
0x1489: IF (Stack[-1] == 0) GOTO 0x1490; Pop(1)

0x148a: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x148b: Pop(0)
0x148c: Push((bool) 0)
0x148d: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x148e: Pop(1)
0x148f: GOTO 0x1494

0x1490: Push("Can't find lsh animation : ")
0x1491: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1492: @ Trace(Stack[-1])
0x1493: Pop(1)
0x1494: Return(); Pop(6)

0x1495: PushEmpty(bool, float, float, bool, float, float)
0x1496: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1497: Pop(0)
0x1498: Push(Stack[-3])
0x1499: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x149a: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x149b: Pop(0)
0x149c: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x149d: Pop(0)
0x149e: GOTO 0x14a3

0x149f: Push("Can't find lsh animation : ")
0x14a0: Pop(1); Push(Stack[-1] + Stack[-9]);
0x14a1: @ Trace(Stack[-1])
0x14a2: Pop(1)
0x14a3: Return(); Pop(6)

0x14a4: PushEmpty(float, cvector, float, cvector)
0x14a5: @@ GetEyesHeight(Stack[-2])
0x14a6: Pop(0)
0x14a7: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x14a8: Push(CvectorIndex(Stack[-1], 1))
0x14a9: Stack[-1] = Stack[-3]
0x14aa: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x14ab: Push("head")
0x14ac: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x14ad: Pop(1)
0x14ae: Return(); Pop(4)

0x14af: PushEmpty(bool)
0x14b0: Call2 0x182b

0x14b1: Pop(0)
0x14b2: IF (Stack[-1] == 0) GOTO 0x14b5; Pop(1)

0x14b3: @ lshStopSpeech()
0x14b4: Pop(0)
0x14b5: Return(); Pop(0)

0x14b6: PushEmpty(bool, bool)
0x14b7: PushEmpty(bool, int, int)
0x14b8: Stack[-2] = Stack[-7]
0x14b9: Stack[-1] = Stack[-6]
0x14ba: Call2 0x14e0

0x14bb: Pop(2)
0x14bc: IF (Stack[-1] == 0) GOTO 0x14c0; Pop(1)

0x14bd: Push((int) 0)
0x14be: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x14bf: Pop(1)
0x14c0: Return(); Pop(2)

0x14c1: PushEmpty(int, bool, int, bool)
0x14c2: PushEmpty(bool, int, int)
0x14c3: Stack[-2] = Stack[-10]
0x14c4: Stack[-1] = Stack[-9]
0x14c5: Call2 0x14e0

0x14c6: Pop(2)
0x14c7: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14c8: @ irand(Stack[-2], Stack[-5])
0x14c9: Pop(0)
0x14ca: Push((int) 0)
0x14cb: Push((int) 1)
0x14cc: Pop(1); Push(Stack[-4] + Stack[-1]);
0x14cd: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x14ce: Pop(2)
0x14cf: Return(); Pop(4)

0x14d0: PushEmpty(object, object)
0x14d1: @ self(Stack[-1])
0x14d2: Pop(0)
0x14d3: Stack[-3] = Stack[-1]
0x14d4: Return(); Pop(2)

0x14d5: Stack[-1] = 0
0x14d6: PushEmpty(float, float)
0x14d7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x14d8: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x14d9: Push((float)0.0)
0x14da: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x14db: IF (Stack[-1] == 0) GOTO 0x14de; Pop(1)

0x14dc: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x14dd: Return(); Pop(2)

0x14de: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x14df: Return(); Pop(2)

0x14e0: PushEmpty(int, int)
0x14e1: @ irand(Stack[-1], Stack[-3])
0x14e2: Pop(0)
0x14e3: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x14e4: Return(); Pop(2)

0x14e5: PushEmpty()
0x14e6: Pop(0); Push(Stack[-2] | Stack[-1]);
0x14e7: Pop(0); Push(Stack[-3] | Stack[-3]);
0x14e8: Pop(0); Push(Stack[-3] | Stack[-3]);
0x14e9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14ea: Pop(1); Push(Sqrt(Stack[-1]))
0x14eb: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x14ec: Return(); Pop(0)

0x14ed: PushEmpty()
0x14ee: Push(CvectorIndex(Stack[-2], 0))
0x14ef: Push(CvectorIndex(Stack[-2], 0))
0x14f0: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14f1: Push(CvectorIndex(Stack[-3], 2))
0x14f2: Push(CvectorIndex(Stack[-3], 2))
0x14f3: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14f4: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x14f5: Return(); Pop(0)

0x14f6: PushEmpty()
0x14f7: Push(CvectorIndex(Stack[-1], 0))
0x14f8: Push(CvectorIndex(Stack[-2], 0))
0x14f9: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14fa: Push(CvectorIndex(Stack[-2], 2))
0x14fb: Push(CvectorIndex(Stack[-3], 2))
0x14fc: Pop(2); Push(Stack[-2] * Stack[-1]);
0x14fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x14fe: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x14ff: Return(); Pop(0)

0x1500: PushEmpty()
0x1501: PushEmpty(float, cvector, cvector)
0x1502: Stack[-2] = Stack[-5]
0x1503: Stack[-1] = Stack[-4]
0x1504: Call2 0x14ed

0x1505: Pop(2)
0x1506: PushEmpty(float, cvector)
0x1507: Stack[-1] = Stack[-5]
0x1508: Call2 0x14f6

0x1509: Pop(1)
0x150a: PushEmpty(float, cvector)
0x150b: Stack[-1] = Stack[-5]
0x150c: Call2 0x14f6

0x150d: Pop(1)
0x150e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x150f: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x1510: Return(); Pop(0)

0x1511: PushEmpty(int, int)
0x1512: @ GetVariable(Stack[-3], Stack[-1])
0x1513: Pop(0)
0x1514: Stack[-4] = Stack[-1]
0x1515: Return(); Pop(2)

0x1516: PushEmpty(float, float)
0x1517: @ GetGameTime(Stack[-1])
0x1518: Pop(0)
0x1519: Push((int) 1)
0x151a: PushEmpty(int)
0x151b: Push((int) 24)
0x151c: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x151d: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x151e: Return(); Pop(2)

0x151f: PushEmpty(float, float)
0x1520: @ GetGameTime(Stack[-1])
0x1521: Pop(0)
0x1522: PushEmpty(int)
0x1523: Stack[-1] = Stack[-2]
0x1524: Push((int) 24)
0x1525: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x1526: Return(); Pop(2)

0x1527: PushEmpty()
0x1528: Return(); Pop(0)

0x1529: PushEmpty()
0x152a: Return(); Pop(0)

0x152b: PushEmpty()
0x152c: Return(); Pop(0)

0x152d: PushEmpty()
0x152e: Return(); Pop(0)

0x152f: PushEmpty()
0x1530: Push("unholster")
0x1531: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1532: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1533: PushEmpty(bool, object)
0x1534: Stack[-1] = Stack[-4]
0x1535: Call2 0x1652

0x1536: Stack[-5] = Stack[-2]
0x1537: Pop(2)
0x1538: Return(); Pop(0)

0x1539: GOTO 0x154d

0x153a: Push("player_shot")
0x153b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x153c: IF (Stack[-1] == 0) GOTO 0x1544; Pop(1)

0x153d: PushEmpty(bool, object)
0x153e: Stack[-1] = Stack[-4]
0x153f: Call2 0x165f

0x1540: Stack[-5] = Stack[-2]
0x1541: Pop(2)
0x1542: Return(); Pop(0)

0x1543: GOTO 0x154d

0x1544: Push("battle")
0x1545: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1546: IF (Stack[-1] == 0) GOTO 0x154d; Pop(1)

0x1547: PushEmpty(bool, object)
0x1548: Stack[-1] = Stack[-4]
0x1549: Call2 0x1676

0x154a: Stack[-5] = Stack[-2]
0x154b: Pop(2)
0x154c: Return(); Pop(0)

0x154d: Stack[-3] = (bool) 0
0x154e: Return(); Pop(0)

0x154f: PushEmpty()
0x1550: Push("unholster")
0x1551: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1552: IF (Stack[-1] == 0) GOTO 0x1558; Pop(1)

0x1553: PushEmpty(object)
0x1554: Stack[-1] = Stack[-3]
0x1555: Call2 0x1657

0x1556: Pop(1)
0x1557: GOTO 0x1567

0x1558: Push("player_shot")
0x1559: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x155a: IF (Stack[-1] == 0) GOTO 0x1560; Pop(1)

0x155b: PushEmpty(object)
0x155c: Stack[-1] = Stack[-3]
0x155d: Call2 0x166e

0x155e: Pop(1)
0x155f: GOTO 0x1567

0x1560: Push("battle")
0x1561: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1562: IF (Stack[-1] == 0) GOTO 0x1567; Pop(1)

0x1563: PushEmpty(object)
0x1564: Stack[-1] = Stack[-3]
0x1565: Call2 0x167d

0x1566: Pop(1)
0x1567: Return(); Pop(0)

0x1568: PushEmpty(bool, bool)
0x1569: PushEmpty(bool)
0x156a: Stack[-1] = (bool) 0
0x156b: PushEmpty(bool, object)
0x156c: Stack[-1] = Stack[-6]
0x156d: Call2 0x1652

0x156e: Pop(1)
0x156f: IF (Stack[-1] == 0) GOTO 0x1576; Pop(1)

0x1570: PushEmpty(bool, object)
0x1571: Stack[-1] = Stack[-6]
0x1572: Call2 0x138f

0x1573: Pop(1)
0x1574: IF (Stack[-1] == 0) GOTO 0x1576; Pop(1)

0x1575: Stack[-1] = (bool) 1
0x1576: IF (Stack[-1] == 0) GOTO 0x157d; Pop(1)

0x1577: @@ IsWeaponHolstered(Stack[-1])
0x1578: Pop(0)
0x1579: Pop(0); Push((bool) Stack[-1] == 0)
0x157a: IF (Stack[-1] == 0) GOTO 0x157d; Pop(1)

0x157b: Stack[-4] = (bool) 1
0x157c: Return(); Pop(2)

0x157d: Stack[-4] = (bool) 0
0x157e: Return(); Pop(2)

0x157f: PushEmpty()
0x1580: PushEmpty(object)
0x1581: Stack[-1] = Stack[-2]
0x1582: Call2 0x1657

0x1583: Pop(1)
0x1584: Return(); Pop(0)

0x1585: PushEmpty()
0x1586: PushEmpty(bool, object)
0x1587: Stack[-1] = Stack[-3]
0x1588: Call2 0x138f

0x1589: Pop(1)
0x158a: IF (Stack[-1] == 0) GOTO 0x1591; Pop(1)

0x158b: PushEmpty(object)
0x158c: Call2 0x14d0

0x158d: Pop(0)
0x158e: Push((float)-0.03)
0x158f: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x1590: Pop(2)
0x1591: Return(); Pop(0)

0x1592: PushEmpty(object, object)
0x1593: Push("heal")
0x1594: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1595: IF (Stack[-1] == 0) GOTO 0x15a0; Pop(1)

0x1596: Push("player")
0x1597: @ FindActor(Stack[-2], Stack[-1])
0x1598: Pop(1)
0x1599: PushEmpty(bool, object)
0x159a: Stack[-1] = Stack[-3]
0x159b: Call2 0x1683

0x159c: Stack[-6] = Stack[-2]
0x159d: Pop(2)
0x159e: Return(); Pop(2)

0x159f: Stack[-1] = 0
0x15a0: Stack[-4] = (bool) 0
0x15a1: Return(); Pop(2)

0x15a2: PushEmpty(object, object)
0x15a3: Push("heal")
0x15a4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15a5: IF (Stack[-1] == 0) GOTO 0x15ae; Pop(1)

0x15a6: Push("player")
0x15a7: @ FindActor(Stack[-2], Stack[-1])
0x15a8: Pop(1)
0x15a9: PushEmpty(object)
0x15aa: Stack[-1] = Stack[-2]
0x15ab: Call2 0x1686

0x15ac: Pop(1)
0x15ad: Stack[-1] = 0
0x15ae: Return(); Pop(2)

0x15af: PushEmpty(string, string)
0x15b0: Stack[-1] = "idle"
0x15b1: Push(Stack[-3])
0x15b2: IF (Stack[-1] == 0) GOTO 0x15b4; Pop(1)

0x15b3: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x15b4: Stack[-4] = Stack[-1]
0x15b5: Return(); Pop(2)

0x15b6: PushEmpty(int, bool, int, bool)
0x15b7: Stack[-2] = (int) 0
0x15b8: Push("all")
0x15b9: PushEmpty(string, int)
0x15ba: Stack[-1] = Stack[-5]
0x15bb: Call2 0x15af

0x15bc: Pop(1)
0x15bd: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x15be: Pop(2)
0x15bf: Pop(0); Push((bool) Stack[-1] == 0)
0x15c0: IF (Stack[-1] == 0) GOTO 0x15c2; Pop(1)

0x15c1: GOTO 0x15c5

0x15c2: Push((int) 1)
0x15c3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x15c4: GOTO 0x15b8

0x15c5: Stack[-5] = Stack[-2]
0x15c6: Return(); Pop(4)

0x15c7: PushEmpty()
0x15c8: PushEmpty(bool)
0x15c9: Call2 0x185d

0x15ca: Pop(0)
0x15cb: IF (Stack[-1] == 0) GOTO 0x15ce; Pop(1)

0x15cc: Stack[-2] = (int) 2
0x15cd: GOTO 0x15cf

0x15ce: Stack[-2] = (int) 0
0x15cf: Return(); Pop(0)

0x15d0: PushEmpty()
0x15d1: PushEmpty(object)
0x15d2: Stack[-1] = Stack[-2]
0x15d3: Push(-1, 1); TaskCall(3)
0x15d4: Call2 0x293

0x15d5: Pop(-1, 1); TaskReturn
0x15d6: Pop(1)
0x15d7: Return(); Pop(0)

0x15d8: PushEmpty()
0x15d9: PushEmpty(bool, object)
0x15da: Stack[-1] = Stack[-3]
0x15db: Call2 0x13c9

0x15dc: Pop(1)
0x15dd: IF (Stack[-1] == 0) GOTO 0x15e0; Pop(1)

0x15de: Stack[-2] = (int) 2
0x15df: GOTO 0x15e1

0x15e0: Stack[-2] = (int) 0
0x15e1: Return(); Pop(0)

0x15e2: PushEmpty()
0x15e3: PushEmpty(object)
0x15e4: Stack[-1] = Stack[-2]
0x15e5: Push(-1, 3); TaskCall(4)
0x15e6: Call2 0x3a6

0x15e7: Pop(-1, 3); TaskReturn
0x15e8: Pop(1)
0x15e9: Return(); Pop(0)

0x15ea: PushEmpty()
0x15eb: PushEmpty(bool, object)
0x15ec: Stack[-1] = Stack[-4]
0x15ed: Call2 0x13c9

0x15ee: Pop(1)
0x15ef: IF (Stack[-1] == 0) GOTO 0x15f2; Pop(1)

0x15f0: Stack[-3] = (int) 2
0x15f1: GOTO 0x15f3

0x15f2: Stack[-3] = (int) 0
0x15f3: Return(); Pop(0)

0x15f4: PushEmpty()
0x15f5: PushEmpty(object)
0x15f6: Stack[-1] = Stack[-2]
0x15f7: Push(-1, 3); TaskCall(5)
0x15f8: Call2 0x4a2

0x15f9: Pop(-1, 3); TaskReturn
0x15fa: Pop(1)
0x15fb: Return(); Pop(0)

0x15fc: PushEmpty(string, bool, string, bool)
0x15fd: PushEmpty(bool, object, string)
0x15fe: Stack[-2] = Stack[-9]
0x15ff: Stack[-1] = "class"
0x1600: Call2 0x1394

0x1601: Pop(2)
0x1602: Pop(1); Push((bool) Stack[-1] == 0)
0x1603: IF (Stack[-1] == 0) GOTO 0x1606; Pop(1)

0x1604: Stack[-8] = (bool) 0
0x1605: Return(); Pop(4)

0x1606: Push("class")
0x1607: @@ GetProperty(Stack[-1], Stack[-3])
0x1608: Pop(1)
0x1609: Push("rat")
0x160a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x160b: IF (Stack[-1] == 0) GOTO 0x160f; Pop(1)

0x160c: Stack[-8] = (bool) 0
0x160d: Return(); Pop(4)

0x160e: GOTO 0x161a

0x160f: Push("rat_big")
0x1610: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1611: IF (Stack[-1] == 0) GOTO 0x1615; Pop(1)

0x1612: Stack[-8] = (bool) 0
0x1613: Return(); Pop(4)

0x1614: GOTO 0x161a

0x1615: Push("dog")
0x1616: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1617: IF (Stack[-1] == 0) GOTO 0x161a; Pop(1)

0x1618: Stack[-8] = (bool) 0
0x1619: Return(); Pop(4)

0x161a: @ CanSee(Stack[-1], Stack[-7])
0x161b: Pop(0)
0x161c: PushEmpty(bool)
0x161d: Stack[-1] = (bool) 1
0x161e: Push(Stack[-2])
0x161f: IF (Stack[-1] == 0) GOTO 0x1628; Pop(1)

0x1620: PushEmpty(float, object)
0x1621: Stack[-1] = Stack[-10]
0x1622: Call2 0x1387

0x1623: Pop(1)
0x1624: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1625: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1626: IF (Stack[-1] == 0) GOTO 0x1628; Pop(1)

0x1627: Stack[-1] = (bool) 0
0x1628: IF (Stack[-1] == 0) GOTO 0x162b; Pop(1)

0x1629: Stack[-8] = (bool) 1
0x162a: Return(); Pop(4)

0x162b: @ CanSee(Stack[-1], Stack[-6])
0x162c: Pop(0)
0x162d: PushEmpty(bool)
0x162e: Stack[-1] = (bool) 1
0x162f: Push(Stack[-2])
0x1630: IF (Stack[-1] == 0) GOTO 0x1639; Pop(1)

0x1631: PushEmpty(float, object)
0x1632: Stack[-1] = Stack[-9]
0x1633: Call2 0x1387

0x1634: Pop(1)
0x1635: Pop(0); Push(Stack[-7] * Stack[-7]);
0x1636: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1637: IF (Stack[-1] == 0) GOTO 0x1639; Pop(1)

0x1638: Stack[-1] = (bool) 0
0x1639: IF (Stack[-1] == 0) GOTO 0x163c; Pop(1)

0x163a: Stack[-8] = (bool) 1
0x163b: Return(); Pop(4)

0x163c: Stack[-8] = (bool) 0
0x163d: Return(); Pop(4)

0x163e: PushEmpty()
0x163f: Stack[-2] = (int) 0
0x1640: Return(); Pop(0)

0x1641: PushEmpty()
0x1642: Return(); Pop(0)

0x1643: PushEmpty()
0x1644: Stack[-3] = (int) 0
0x1645: Return(); Pop(0)

0x1646: PushEmpty()
0x1647: Return(); Pop(0)

0x1648: PushEmpty()
0x1649: Stack[-2] = (int) 2
0x164a: Return(); Pop(0)

0x164b: PushEmpty()
0x164c: PushEmpty(object)
0x164d: Stack[-1] = Stack[-2]
0x164e: Call2 0x1835

0x164f: Pop(1)
0x1650: Return(); Pop(0)

0x1651: Return(); Pop(0)

0x1652: PushEmpty(bool, bool)
0x1653: @ CanSee(Stack[-1], Stack[-3])
0x1654: Pop(0)
0x1655: Stack[-4] = Stack[-1]
0x1656: Return(); Pop(2)

0x1657: PushEmpty()
0x1658: PushEmpty(object)
0x1659: Stack[-1] = Stack[-2]
0x165a: Push(-1, 3); TaskCall(6)
0x165b: Call2 0x564

0x165c: Pop(-1, 3); TaskReturn
0x165d: Pop(1)
0x165e: Return(); Pop(0)

0x165f: PushEmpty(bool, bool)
0x1660: @ CanSee(Stack[-1], Stack[-3])
0x1661: Pop(0)
0x1662: Stack[-4] = (bool) 1
0x1663: Push(Stack[-1])
0x1664: IF (Stack[-1] == 0) GOTO 0x166d; Pop(1)

0x1665: PushEmpty(float, object)
0x1666: Stack[-1] = Stack[-5]
0x1667: Call2 0x1387

0x1668: Pop(1)
0x1669: Push((int) 4000000)
0x166a: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x166b: IF (Stack[-1] == 0) GOTO 0x166d; Pop(1)

0x166c: Stack[-4] = (bool) 0
0x166d: Return(); Pop(2)

0x166e: PushEmpty()
0x166f: PushEmpty(object)
0x1670: Stack[-1] = Stack[-2]
0x1671: Push(-1, 3); TaskCall(7)
0x1672: Call2 0x626

0x1673: Pop(-1, 3); TaskReturn
0x1674: Pop(1)
0x1675: Return(); Pop(0)

0x1676: PushEmpty()
0x1677: PushEmpty(bool, object)
0x1678: Stack[-1] = Stack[-3]
0x1679: Call2 0x165f

0x167a: Stack[-4] = Stack[-2]
0x167b: Pop(2)
0x167c: Return(); Pop(0)

0x167d: PushEmpty()
0x167e: PushEmpty(object)
0x167f: Stack[-1] = Stack[-2]
0x1680: Call2 0x166e

0x1681: Pop(1)
0x1682: Return(); Pop(0)

0x1683: PushEmpty()
0x1684: Stack[-2] = (bool) 0
0x1685: Return(); Pop(0)

0x1686: PushEmpty()
0x1687: Return(); Pop(0)

0x1688: PushEmpty()
0x1689: Push((int) 1000)
0x168a: @@ SetReturnValue(Stack[-1])
0x168b: Pop(1)
0x168c: Return(); Pop(0)

0x168d: PushEmpty()
0x168e: PushEmpty(int, string)
0x168f: Stack[-1] = "branch"
0x1690: Call2 0x1511

0x1691: Pop(1)
0x1692: Push((int) 0)
0x1693: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1694: IF (Stack[-1] == 0) GOTO 0x1697; Pop(1)

0x1695: Stack[-2] = (bool) 1
0x1696: Return(); Pop(0)

0x1697: Stack[-2] = (bool) 0
0x1698: Return(); Pop(0)

0x1699: PushEmpty()
0x169a: PushEmpty(int, string)
0x169b: Stack[-1] = "branch"
0x169c: Call2 0x1511

0x169d: Pop(1)
0x169e: Push((int) 2)
0x169f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x16a0: IF (Stack[-1] == 0) GOTO 0x16a3; Pop(1)

0x16a1: Stack[-2] = (bool) 1
0x16a2: Return(); Pop(0)

0x16a3: Stack[-2] = (bool) 0
0x16a4: Return(); Pop(0)

0x16a5: PushEmpty()
0x16a6: PushEmpty(bool, object)
0x16a7: Stack[-1] = Stack[-3]
0x16a8: Call2 0x1731

0x16a9: Pop(1)
0x16aa: IF (Stack[-1] == 0) GOTO 0x16ad; Pop(1)

0x16ab: Stack[-2] = (bool) 1
0x16ac: Return(); Pop(0)

0x16ad: Stack[-2] = (bool) 0
0x16ae: Return(); Pop(0)

0x16af: PushEmpty()
0x16b0: PushEmpty(bool, object)
0x16b1: Stack[-1] = Stack[-3]
0x16b2: Call2 0x1738

0x16b3: Pop(1)
0x16b4: IF (Stack[-1] == 0) GOTO 0x16b7; Pop(1)

0x16b5: Stack[-2] = (bool) 1
0x16b6: Return(); Pop(0)

0x16b7: Stack[-2] = (bool) 0
0x16b8: Return(); Pop(0)

0x16b9: PushEmpty()
0x16ba: PushEmpty(bool, object)
0x16bb: Stack[-1] = Stack[-3]
0x16bc: Call2 0x173f

0x16bd: Pop(1)
0x16be: IF (Stack[-1] == 0) GOTO 0x16c1; Pop(1)

0x16bf: Stack[-2] = (bool) 1
0x16c0: Return(); Pop(0)

0x16c1: Stack[-2] = (bool) 0
0x16c2: Return(); Pop(0)

0x16c3: PushEmpty()
0x16c4: PushEmpty(bool, object)
0x16c5: Stack[-1] = Stack[-3]
0x16c6: Call2 0x1746

0x16c7: Pop(1)
0x16c8: IF (Stack[-1] == 0) GOTO 0x16cb; Pop(1)

0x16c9: Stack[-2] = (bool) 1
0x16ca: Return(); Pop(0)

0x16cb: Stack[-2] = (bool) 0
0x16cc: Return(); Pop(0)

0x16cd: PushEmpty()
0x16ce: PushEmpty(bool, object)
0x16cf: Stack[-1] = Stack[-3]
0x16d0: Call2 0x174d

0x16d1: Pop(1)
0x16d2: IF (Stack[-1] == 0) GOTO 0x16d5; Pop(1)

0x16d3: Stack[-2] = (bool) 1
0x16d4: Return(); Pop(0)

0x16d5: Stack[-2] = (bool) 0
0x16d6: Return(); Pop(0)

0x16d7: PushEmpty()
0x16d8: PushEmpty(bool, object)
0x16d9: Stack[-1] = Stack[-3]
0x16da: Call2 0x1754

0x16db: Pop(1)
0x16dc: IF (Stack[-1] == 0) GOTO 0x16df; Pop(1)

0x16dd: Stack[-2] = (bool) 1
0x16de: Return(); Pop(0)

0x16df: Stack[-2] = (bool) 0
0x16e0: Return(); Pop(0)

0x16e1: PushEmpty()
0x16e2: PushEmpty(bool, object)
0x16e3: Stack[-1] = Stack[-3]
0x16e4: Call2 0x175b

0x16e5: Pop(1)
0x16e6: IF (Stack[-1] == 0) GOTO 0x16e9; Pop(1)

0x16e7: Stack[-2] = (bool) 1
0x16e8: Return(); Pop(0)

0x16e9: Stack[-2] = (bool) 0
0x16ea: Return(); Pop(0)

0x16eb: PushEmpty()
0x16ec: PushEmpty(bool, object)
0x16ed: Stack[-1] = Stack[-3]
0x16ee: Call2 0x1762

0x16ef: Pop(1)
0x16f0: IF (Stack[-1] == 0) GOTO 0x16f3; Pop(1)

0x16f1: Stack[-2] = (bool) 1
0x16f2: Return(); Pop(0)

0x16f3: Stack[-2] = (bool) 0
0x16f4: Return(); Pop(0)

0x16f5: PushEmpty()
0x16f6: PushEmpty(bool, object)
0x16f7: Stack[-1] = Stack[-3]
0x16f8: Call2 0x1769

0x16f9: Pop(1)
0x16fa: IF (Stack[-1] == 0) GOTO 0x16fd; Pop(1)

0x16fb: Stack[-2] = (bool) 1
0x16fc: Return(); Pop(0)

0x16fd: Stack[-2] = (bool) 0
0x16fe: Return(); Pop(0)

0x16ff: PushEmpty()
0x1700: PushEmpty(bool, object)
0x1701: Stack[-1] = Stack[-3]
0x1702: Call2 0x1770

0x1703: Pop(1)
0x1704: IF (Stack[-1] == 0) GOTO 0x1707; Pop(1)

0x1705: Stack[-2] = (bool) 1
0x1706: Return(); Pop(0)

0x1707: Stack[-2] = (bool) 0
0x1708: Return(); Pop(0)

0x1709: PushEmpty()
0x170a: PushEmpty(bool, object)
0x170b: Stack[-1] = Stack[-3]
0x170c: Call2 0x1777

0x170d: Pop(1)
0x170e: IF (Stack[-1] == 0) GOTO 0x1711; Pop(1)

0x170f: Stack[-2] = (bool) 1
0x1710: Return(); Pop(0)

0x1711: Stack[-2] = (bool) 0
0x1712: Return(); Pop(0)

0x1713: PushEmpty()
0x1714: PushEmpty(bool, object)
0x1715: Stack[-1] = Stack[-3]
0x1716: Call2 0x177e

0x1717: Pop(1)
0x1718: IF (Stack[-1] == 0) GOTO 0x171b; Pop(1)

0x1719: Stack[-2] = (bool) 1
0x171a: Return(); Pop(0)

0x171b: Stack[-2] = (bool) 0
0x171c: Return(); Pop(0)

0x171d: PushEmpty()
0x171e: PushEmpty(bool, object)
0x171f: Stack[-1] = Stack[-3]
0x1720: Call2 0x1785

0x1721: Pop(1)
0x1722: IF (Stack[-1] == 0) GOTO 0x1725; Pop(1)

0x1723: Stack[-2] = (bool) 1
0x1724: Return(); Pop(0)

0x1725: Stack[-2] = (bool) 0
0x1726: Return(); Pop(0)

0x1727: PushEmpty()
0x1728: PushEmpty(bool, object)
0x1729: Stack[-1] = Stack[-3]
0x172a: Call2 0x179a

0x172b: Pop(1)
0x172c: IF (Stack[-1] == 0) GOTO 0x172f; Pop(1)

0x172d: Stack[-2] = (bool) 1
0x172e: Return(); Pop(0)

0x172f: Stack[-2] = (bool) 0
0x1730: Return(); Pop(0)

0x1731: PushEmpty()
0x1732: PushEmpty(int)
0x1733: Call2 0x1516

0x1734: Pop(0)
0x1735: Push((int) 1)
0x1736: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1737: Return(); Pop(0)

0x1738: PushEmpty()
0x1739: PushEmpty(int)
0x173a: Call2 0x1516

0x173b: Pop(0)
0x173c: Push((int) 2)
0x173d: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x173e: Return(); Pop(0)

0x173f: PushEmpty()
0x1740: PushEmpty(int)
0x1741: Call2 0x1516

0x1742: Pop(0)
0x1743: Push((int) 3)
0x1744: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1745: Return(); Pop(0)

0x1746: PushEmpty()
0x1747: PushEmpty(int)
0x1748: Call2 0x1516

0x1749: Pop(0)
0x174a: Push((int) 4)
0x174b: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x174c: Return(); Pop(0)

0x174d: PushEmpty()
0x174e: PushEmpty(int)
0x174f: Call2 0x1516

0x1750: Pop(0)
0x1751: Push((int) 5)
0x1752: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1753: Return(); Pop(0)

0x1754: PushEmpty()
0x1755: PushEmpty(int)
0x1756: Call2 0x1516

0x1757: Pop(0)
0x1758: Push((int) 6)
0x1759: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x175a: Return(); Pop(0)

0x175b: PushEmpty()
0x175c: PushEmpty(int)
0x175d: Call2 0x1516

0x175e: Pop(0)
0x175f: Push((int) 7)
0x1760: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1761: Return(); Pop(0)

0x1762: PushEmpty()
0x1763: PushEmpty(int)
0x1764: Call2 0x1516

0x1765: Pop(0)
0x1766: Push((int) 8)
0x1767: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1768: Return(); Pop(0)

0x1769: PushEmpty()
0x176a: PushEmpty(int)
0x176b: Call2 0x1516

0x176c: Pop(0)
0x176d: Push((int) 9)
0x176e: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x176f: Return(); Pop(0)

0x1770: PushEmpty()
0x1771: PushEmpty(int)
0x1772: Call2 0x1516

0x1773: Pop(0)
0x1774: Push((int) 10)
0x1775: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1776: Return(); Pop(0)

0x1777: PushEmpty()
0x1778: PushEmpty(int)
0x1779: Call2 0x1516

0x177a: Pop(0)
0x177b: Push((int) 11)
0x177c: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x177d: Return(); Pop(0)

0x177e: PushEmpty()
0x177f: PushEmpty(int)
0x1780: Call2 0x1516

0x1781: Pop(0)
0x1782: Push((int) 12)
0x1783: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x1784: Return(); Pop(0)

0x1785: PushEmpty()
0x1786: PushEmpty(bool)
0x1787: Stack[-1] = (bool) 0
0x1788: PushEmpty(int)
0x1789: Call2 0x151f

0x178a: Pop(0)
0x178b: Push((int) 0)
0x178c: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x178d: IF (Stack[-1] == 0) GOTO 0x1795; Pop(1)

0x178e: PushEmpty(int)
0x178f: Call2 0x151f

0x1790: Pop(0)
0x1791: Push((int) 12)
0x1792: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1793: IF (Stack[-1] == 0) GOTO 0x1795; Pop(1)

0x1794: Stack[-1] = (bool) 1
0x1795: IF (Stack[-1] == 0) GOTO 0x1798; Pop(1)

0x1796: Stack[-2] = (bool) 1
0x1797: Return(); Pop(0)

0x1798: Stack[-2] = (bool) 0
0x1799: Return(); Pop(0)

0x179a: PushEmpty()
0x179b: PushEmpty(int)
0x179c: Call2 0x151f

0x179d: Pop(0)
0x179e: Push((int) 12)
0x179f: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x17a0: IF (Stack[-1] == 0) GOTO 0x17a3; Pop(1)

0x17a1: Stack[-2] = (bool) 1
0x17a2: Return(); Pop(0)

0x17a3: Stack[-2] = (bool) 0
0x17a4: Return(); Pop(0)

0x17a5: PushEmpty(int, int)
0x17a6: Push("branch")
0x17a7: @ GetVariable(Stack[-1], Stack[-2])
0x17a8: Pop(1)
0x17a9: Push((int) 0)
0x17aa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17ab: IF (Stack[-1] == 0) GOTO 0x17af; Pop(1)

0x17ac: Stack[-3] = (int) 1
0x17ad: Return(); Pop(2)

0x17ae: GOTO 0x17b4

0x17af: Push((int) 1)
0x17b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x17b1: IF (Stack[-1] == 0) GOTO 0x17b4; Pop(1)

0x17b2: Stack[-3] = (int) 2
0x17b3: Return(); Pop(2)

0x17b4: Stack[-3] = (int) 3
0x17b5: Return(); Pop(2)

0x17b6: PushEmpty(int, int)
0x17b7: Push("branch")
0x17b8: @ GetVariable(Stack[-1], Stack[-2])
0x17b9: Pop(1)
0x17ba: Stack[-3] = Stack[-1]
0x17bb: Return(); Pop(2)

0x17bc: PushEmpty(object, float, object, float)
0x17bd: Push("player")
0x17be: @ FindActor(Stack[-3], Stack[-1])
0x17bf: Pop(1)
0x17c0: Pop(0); Push((bool) Stack[-2] == 0)
0x17c1: IF (Stack[-1] == 0) GOTO 0x17c4; Pop(1)

0x17c2: Stack[-5] = (int) 0
0x17c3: Return(); Pop(4)

0x17c4: Push("reputation")
0x17c5: @@ GetProperty(Stack[-1], Stack[-2])
0x17c6: Pop(1)
0x17c7: Stack[-5] = Stack[-1]
0x17c8: Return(); Pop(4)

0x17c9: Stack[-2] = 0
0x17ca: PushEmpty()
0x17cb: PushEmpty(int)
0x17cc: Call2 0x17b6

0x17cd: Pop(0)
0x17ce: Push((int) 1)
0x17cf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x17d0: IF (Stack[-1] == 0) GOTO 0x17d4; Pop(1)

0x17d1: @ WorkWithCorpse(Stack[-1])
0x17d2: Pop(0)
0x17d3: GOTO 0x17d6

0x17d4: @ Barter(Stack[-1])
0x17d5: Pop(0)
0x17d6: Return(); Pop(0)

0x17d7: PushEmpty(int, int)
0x17d8: Push((int) 0)
0x17d9: @ ClearSubContainer(Stack[-1])
0x17da: Pop(1)
0x17db: Push(Stack[-3])
0x17dc: IF (Stack[-1] == 0) GOTO 0x17f3; Pop(1)

0x17dd: PushEmpty(string, int, int, int)
0x17de: Stack[-4] = "rifle_ammo"
0x17df: Stack[-3] = (int) 1
0x17e0: Stack[-2] = (int) 2
0x17e1: Stack[-1] = (int) 2
0x17e2: Call2 0x14c1

0x17e3: Pop(4)
0x17e4: PushEmpty(string, int, int, int)
0x17e5: Stack[-4] = "revolver_ammo"
0x17e6: Stack[-3] = (int) 1
0x17e7: Stack[-2] = (int) 2
0x17e8: Stack[-1] = (int) 2
0x17e9: Call2 0x14c1

0x17ea: Pop(4)
0x17eb: PushEmpty(string, int, int, int)
0x17ec: Stack[-4] = "samopal_ammo"
0x17ed: Stack[-3] = (int) 2
0x17ee: Stack[-2] = (int) 2
0x17ef: Stack[-1] = (int) 2
0x17f0: Call2 0x14c1

0x17f1: Pop(4)
0x17f2: GOTO 0x1822

0x17f3: PushEmpty(string, int, int)
0x17f4: Stack[-3] = "lockpick"
0x17f5: Stack[-2] = (int) 1
0x17f6: Stack[-1] = (int) 4
0x17f7: Call2 0x14b6

0x17f8: Pop(3)
0x17f9: PushEmpty(string, int, int, int)
0x17fa: Stack[-4] = "alpha_pills"
0x17fb: Stack[-3] = (int) 1
0x17fc: Stack[-2] = (int) 2
0x17fd: Stack[-1] = (int) 3
0x17fe: Call2 0x14c1

0x17ff: Pop(4)
0x1800: PushEmpty(string, int, int)
0x1801: Stack[-3] = "meradorm"
0x1802: Stack[-2] = (int) 1
0x1803: Stack[-1] = (int) 2
0x1804: Call2 0x14b6

0x1805: Pop(3)
0x1806: PushEmpty(string, int, int)
0x1807: Stack[-3] = "powder"
0x1808: Stack[-2] = (int) 1
0x1809: Stack[-1] = (int) 15
0x180a: Call2 0x14b6

0x180b: Pop(3)
0x180c: PushEmpty(int)
0x180d: Call2 0x1516

0x180e: Stack[-2] = Stack[-1]
0x180f: Pop(1)
0x1810: Push((int) 4)
0x1811: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1812: IF (Stack[-1] == 0) GOTO 0x1819; Pop(1)

0x1813: PushEmpty(string, int, int)
0x1814: Stack[-3] = "beta_pills"
0x1815: Stack[-2] = (int) 1
0x1816: Stack[-1] = (int) 2
0x1817: Call2 0x14b6

0x1818: Pop(3)
0x1819: Push((int) 6)
0x181a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x181b: IF (Stack[-1] == 0) GOTO 0x1822; Pop(1)

0x181c: PushEmpty(string, int, int)
0x181d: Stack[-3] = "gamma_pills"
0x181e: Stack[-2] = (int) 1
0x181f: Stack[-1] = (int) 7
0x1820: Call2 0x14b6

0x1821: Pop(3)
0x1822: Return(); Pop(2)

0x1823: Stack[-1] = (int) 515560
0x1824: Return(); Pop(0)

0x1825: Stack[-1] = (int) 503345
0x1826: Return(); Pop(0)

0x1827: Stack[-1] = "ui/NPC_Citizen3.png"
0x1828: Return(); Pop(0)

0x1829: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x182a: Return(); Pop(0)

0x182b: Stack[-1] = (bool) 0
0x182c: Return(); Pop(0)

0x182d: Push(GlobalVars[0])
0x182e: Stack[-1] = (bool) 0
0x182f: GlobalVars[0] = Stack[-1]; Pop(1)
0x1830: PushEmpty(bool)
0x1831: Stack[-1] = (bool) 1
0x1832: Call2 0x17d7

0x1833: Pop(1)
0x1834: Return(); Pop(0)

0x1835: PushEmpty(bool, bool)
0x1836: Push(GlobalVars[0])
0x1837: IF (Stack[-1] == 0) GOTO 0x1842; Pop(1)

0x1838: @ IsOverrideActive(Stack[-1])
0x1839: Pop(0)
0x183a: Pop(0); Push((bool) Stack[-1] == 0)
0x183b: IF (Stack[-1] == 0) GOTO 0x1840; Pop(1)

0x183c: PushEmpty(object)
0x183d: Stack[-1] = Stack[-4]
0x183e: Call2 0x17ca

0x183f: Pop(1)
0x1840: Return(); Pop(2)

0x1841: GOTO 0x185c

0x1842: Push((int) 1000)
0x1843: PushEmpty(int, object)
0x1844: Stack[-1] = Stack[-6]
0x1845: Push(-2, 1); TaskCall(8)
0x1846: Call2 0x6c3

0x1847: Pop(-2, 1); TaskReturn
0x1848: Pop(1)
0x1849: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x184a: IF (Stack[-1] == 0) GOTO 0x185c; Pop(1)

0x184b: PushEmpty(bool, object)
0x184c: Stack[-1] = Stack[-5]
0x184d: Call2 0x1448

0x184e: Pop(1)
0x184f: Pop(1); Push((bool) Stack[-1] == 0)
0x1850: IF (Stack[-1] == 0) GOTO 0x1852; Pop(1)

0x1851: Return(); Pop(2)

0x1852: PushEmpty(object)
0x1853: Stack[-1] = Stack[-4]
0x1854: Push(-1, 1); TaskCall(0)
0x1855: Call2 0x0

0x1856: Pop(-1, 1); TaskReturn
0x1857: Pop(1)
0x1858: PushEmpty(object)
0x1859: Stack[-1] = Stack[-4]
0x185a: Call2 0x1480

0x185b: Pop(1)
0x185c: Return(); Pop(2)

0x185d: PushEmpty(float)
0x185e: Call2 0x17bc

0x185f: Pop(0)
0x1860: Push((float)0.4)
0x1861: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0x1862: Return(); Pop(0)

0x1863: PushEmpty()
0x1864: PushEmpty(bool, object, object, float)
0x1865: Stack[-3] = Stack[-7]
0x1866: Stack[-2] = Stack[-6]
0x1867: Stack[-1] = (float) 700.0
0x1868: Call2 0x15fc

0x1869: Stack[-8] = Stack[-4]
0x186a: Pop(4)
0x186b: Return(); Pop(0)

