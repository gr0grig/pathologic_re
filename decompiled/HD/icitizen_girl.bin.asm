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
	.bin
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
	Received steal
	d1GhostCatHDPathologic
	quest_ghost_cat
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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png
	ToDie

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
	GetMainOutdoorScene (1 args)
	AddBlankActor (4 args)
	GetGameTime (1 args)
	ReportReputationChange (3 args)
	FindActor (2 args)
	HasAnimation (3 args)
	CanSee (2 args)
	SetVariable (2 args)
	WorkWithCorpse (1 args)
	Barter (1 args)
	ClearSubContainer (1 args)
	SetProperty (2 args)

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
		EVENT_11 Op = 0x9a5 Vars = (int, int)

Events:
EVENT_16 Op = 0x167d Vars = (object, string)
EVENT_41 Op = 0x167f Vars = (object)
EVENT_22 Op = 0x1681 Vars = (object, int, float, float)
EVENT_43 Op = 0x1683 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0x19a6

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0x15d0

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
0x1c: Call2 0x19a6

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
0x2c: Call2 0x19a8

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
0x38: Call2 0x1537

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0x179d

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0x1794

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
0x51: Call2 0x1797

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0x16db

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0x172e

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
0x69: Call2 0x1738

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0x19da

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0x1740

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
0x85: Call2 0x174a

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0x179e

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
0x99: Call2 0x17ae

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0x1685

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0x16a5

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0x17b4

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
0xbe: Call2 0x17b7

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0x16e8

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0x16f8

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0x16be

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0x16d5

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
0xf8: Call2 0x179d

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
0x111: Call2 0x167f

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0x1514

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
0x126: Call2 0x171d

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
0x134: Call2 0x1726

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
0x19c: Call2 0x1794

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
0x1aa: Call2 0x1797

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0x16db

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0x172e

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
0x1c2: Call2 0x1738

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0x19da

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0x1740

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
0x1de: Call2 0x174a

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0x179e

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
0x1f2: Call2 0x17ae

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0x1685

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0x16a5

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0x17b4

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
0x217: Call2 0x17b7

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0x16e8

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0x16f8

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0x179d

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0x16be

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0x16d5

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0x1537

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0x170c

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0x1537

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
0x263: Call2 0x1705

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
0x29c: Call2 0x14cb

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0x164b

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0x152c

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
0x2b4: Call2 0x152c

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
0x2c8: Call2 0x15ef

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0x1794

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
0x2dc: Call2 0x1797

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0x16db

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0x172e

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
0x2f4: Call2 0x1738

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0x19da

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0x1740

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
0x310: Call2 0x174a

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0x179e

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
0x324: Call2 0x17ae

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0x1685

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0x16a5

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0x17b4

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
0x349: Call2 0x17b7

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0x16e8

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0x16f8

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
0x36b: Call2 0x167f

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0x1514

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
0x381: Call2 0x14cb

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0x164b

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0x152c

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0x179d

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0x16be

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0x16d5

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
0x3c6: Call2 0x179d

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
0x3d3: Call2 0x1621

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0x1621

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
0x409: Call2 0x14c6

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
0x424: Call2 0x14c6

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
0x460: Call2 0x14c6

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
0x471: Call2 0x167f

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x14cb

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0x1630

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
0x48e: Call2 0x1621

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0x1621

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
0x4c4: Call2 0x14c6

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
0x4df: Call2 0x14c6

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
0x51b: Call2 0x14c6

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
0x52c: Call2 0x167f

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x14cb

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0x1630

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0x179d

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
0x550: Call2 0x1621

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0x1621

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
0x586: Call2 0x14c6

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
0x5a1: Call2 0x14c6

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
0x5dd: Call2 0x14c6

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
0x5ee: Call2 0x167f

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x14cb

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0x1630

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0x179d

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
0x612: Call2 0x1621

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0x1621

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
0x648: Call2 0x14c6

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
0x663: Call2 0x14c6

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
0x69f: Call2 0x14c6

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
0x6b0: Call2 0x167f

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x14cb

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0x1630

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0x153c

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0x19a0

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x199e

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0x19a2

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x19a4

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0x1916

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
0x704: Call2 0x1581

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
0x712: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0x180a

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x98f

0x71b: Pop(1)
0x71c: Push((int) 543209)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: PushEmpty(bool)
0x722: Stack[-1] = (bool) 1
0x723: PushEmpty(bool, object)
0x724: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x725: Call2 0x185c

0x726: Pop(1)
0x727: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x728: PushEmpty(bool, object)
0x729: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x72a: Call2 0x1870

0x72b: Pop(1)
0x72c: IF (Stack[-1] == 0) GOTO 0x72e; Pop(1)

0x72d: Stack[-1] = (bool) 0
0x72e: IF (Stack[-1] == 0) GOTO 0x734; Pop(1)

0x72f: Push((int) 543240)
0x730: Push((int) 45697)
0x731: Push((int) 45696)
0x732: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x733: Pop(3)
0x734: PushEmpty(bool)
0x735: Stack[-1] = (bool) 1
0x736: PushEmpty(bool)
0x737: Stack[-1] = (bool) 1
0x738: PushEmpty(bool)
0x739: Stack[-1] = (bool) 1
0x73a: PushEmpty(bool, object)
0x73b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Call2 0x1816

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x73f: PushEmpty(bool, object)
0x740: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x741: Call2 0x182a

0x742: Pop(1)
0x743: IF (Stack[-1] == 0) GOTO 0x745; Pop(1)

0x744: Stack[-1] = (bool) 0
0x745: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x746: PushEmpty(bool, object)
0x747: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x748: Call2 0x183e

0x749: Pop(1)
0x74a: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x74b: Stack[-1] = (bool) 0
0x74c: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x74d: PushEmpty(bool, object)
0x74e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74f: Call2 0x1834

0x750: Pop(1)
0x751: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x752: Stack[-1] = (bool) 0
0x753: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x754: Push((int) 543233)
0x755: Push((int) 45690)
0x756: Push((int) 45689)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: PushEmpty(bool, object)
0x75a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x75b: Call2 0x1820

0x75c: Pop(1)
0x75d: IF (Stack[-1] == 0) GOTO 0x763; Pop(1)

0x75e: Push((int) 543214)
0x75f: Push((int) 45672)
0x760: Push((int) 45670)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: PushEmpty(bool)
0x764: Stack[-1] = (bool) 1
0x765: PushEmpty(bool)
0x766: Stack[-1] = (bool) 1
0x767: PushEmpty(bool)
0x768: Stack[-1] = (bool) 1
0x769: PushEmpty(bool, object)
0x76a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76b: Call2 0x1816

0x76c: Pop(1)
0x76d: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x76e: PushEmpty(bool, object)
0x76f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x770: Call2 0x1820

0x771: Pop(1)
0x772: IF (Stack[-1] == 0) GOTO 0x774; Pop(1)

0x773: Stack[-1] = (bool) 0
0x774: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x775: PushEmpty(bool, object)
0x776: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x777: Call2 0x182a

0x778: Pop(1)
0x779: IF (Stack[-1] == 0) GOTO 0x77b; Pop(1)

0x77a: Stack[-1] = (bool) 0
0x77b: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77c: PushEmpty(bool, object)
0x77d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x77e: Call2 0x1834

0x77f: Pop(1)
0x780: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x781: Stack[-1] = (bool) 0
0x782: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x783: Push((int) 543210)
0x784: Push((int) -1)
0x785: Push((int) 45666)
0x786: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x787: Pop(3)
0x788: PushEmpty(bool)
0x789: Stack[-1] = (bool) 1
0x78a: PushEmpty(bool)
0x78b: Stack[-1] = (bool) 1
0x78c: PushEmpty(bool, object)
0x78d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x78e: Call2 0x183e

0x78f: Pop(1)
0x790: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x791: PushEmpty(bool, object)
0x792: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x793: Call2 0x1848

0x794: Pop(1)
0x795: IF (Stack[-1] == 0) GOTO 0x797; Pop(1)

0x796: Stack[-1] = (bool) 0
0x797: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x798: PushEmpty(bool, object)
0x799: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79a: Call2 0x1852

0x79b: Pop(1)
0x79c: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x79d: Stack[-1] = (bool) 0
0x79e: IF (Stack[-1] == 0) GOTO 0x7a4; Pop(1)

0x79f: Push((int) 543211)
0x7a0: Push((int) -1)
0x7a1: Push((int) 45667)
0x7a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a3: Pop(3)
0x7a4: PushEmpty(bool)
0x7a5: Stack[-1] = (bool) 1
0x7a6: PushEmpty(bool)
0x7a7: Stack[-1] = (bool) 1
0x7a8: PushEmpty(bool)
0x7a9: Stack[-1] = (bool) 1
0x7aa: PushEmpty(bool)
0x7ab: Stack[-1] = (bool) 1
0x7ac: PushEmpty(bool, object)
0x7ad: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ae: Call2 0x185c

0x7af: Pop(1)
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b1: PushEmpty(bool, object)
0x7b2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b3: Call2 0x1866

0x7b4: Pop(1)
0x7b5: IF (Stack[-1] == 0) GOTO 0x7b7; Pop(1)

0x7b6: Stack[-1] = (bool) 0
0x7b7: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b8: PushEmpty(bool, object)
0x7b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ba: Call2 0x1870

0x7bb: Pop(1)
0x7bc: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7bd: Stack[-1] = (bool) 0
0x7be: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7bf: PushEmpty(bool, object)
0x7c0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c1: Call2 0x187a

0x7c2: Pop(1)
0x7c3: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c4: Stack[-1] = (bool) 0
0x7c5: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7c6: PushEmpty(bool, object)
0x7c7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7c8: Call2 0x1884

0x7c9: Pop(1)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7cb: Stack[-1] = (bool) 0
0x7cc: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7cd: Push((int) 543212)
0x7ce: Push((int) -1)
0x7cf: Push((int) 45668)
0x7d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d1: Pop(3)
0x7d2: PushEmpty(bool)
0x7d3: Stack[-1] = (bool) 1
0x7d4: PushEmpty(bool)
0x7d5: Stack[-1] = (bool) 1
0x7d6: PushEmpty(bool)
0x7d7: Stack[-1] = (bool) 1
0x7d8: PushEmpty(bool)
0x7d9: Stack[-1] = (bool) 1
0x7da: PushEmpty(bool, object)
0x7db: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7dc: Call2 0x1816

0x7dd: Pop(1)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7df: PushEmpty(bool, object)
0x7e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e1: Call2 0x1820

0x7e2: Pop(1)
0x7e3: IF (Stack[-1] == 0) GOTO 0x7e5; Pop(1)

0x7e4: Stack[-1] = (bool) 0
0x7e5: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e6: PushEmpty(bool, object)
0x7e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e8: Call2 0x1834

0x7e9: Pop(1)
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7eb: Stack[-1] = (bool) 0
0x7ec: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7ed: PushEmpty(bool, object)
0x7ee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ef: Call2 0x183e

0x7f0: Pop(1)
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7f2: Stack[-1] = (bool) 0
0x7f3: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f4: PushEmpty(bool, object)
0x7f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f6: Call2 0x1852

0x7f7: Pop(1)
0x7f8: IF (Stack[-1] == 0) GOTO 0x7fa; Pop(1)

0x7f9: Stack[-1] = (bool) 0
0x7fa: IF (Stack[-1] == 0) GOTO 0x800; Pop(1)

0x7fb: Push((int) 543213)
0x7fc: Push((int) -1)
0x7fd: Push((int) 45669)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: PushEmpty(bool)
0x801: Stack[-1] = (bool) 1
0x802: PushEmpty(bool)
0x803: Stack[-1] = (bool) 1
0x804: PushEmpty(bool)
0x805: Stack[-1] = (bool) 1
0x806: PushEmpty(bool)
0x807: Stack[-1] = (bool) 1
0x808: PushEmpty(bool)
0x809: Stack[-1] = (bool) 1
0x80a: PushEmpty(bool)
0x80b: Stack[-1] = (bool) 1
0x80c: PushEmpty(bool, object)
0x80d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x80e: Call2 0x182a

0x80f: Pop(1)
0x810: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x811: PushEmpty(bool, object)
0x812: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x813: Call2 0x1848

0x814: Pop(1)
0x815: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x816: Stack[-1] = (bool) 0
0x817: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x818: PushEmpty(bool, object)
0x819: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x81a: Call2 0x1866

0x81b: Pop(1)
0x81c: IF (Stack[-1] == 0) GOTO 0x81e; Pop(1)

0x81d: Stack[-1] = (bool) 0
0x81e: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x81f: PushEmpty(bool, object)
0x820: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x821: Call2 0x1884

0x822: Pop(1)
0x823: IF (Stack[-1] == 0) GOTO 0x825; Pop(1)

0x824: Stack[-1] = (bool) 0
0x825: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x826: PushEmpty(bool, object)
0x827: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x828: Call2 0x1820

0x829: Pop(1)
0x82a: IF (Stack[-1] == 0) GOTO 0x82c; Pop(1)

0x82b: Stack[-1] = (bool) 0
0x82c: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x82d: PushEmpty(bool, object)
0x82e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82f: Call2 0x185c

0x830: Pop(1)
0x831: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x832: Stack[-1] = (bool) 0
0x833: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x834: PushEmpty(bool, object)
0x835: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x836: Call2 0x1870

0x837: Pop(1)
0x838: IF (Stack[-1] == 0) GOTO 0x83a; Pop(1)

0x839: Stack[-1] = (bool) 0
0x83a: IF (Stack[-1] == 0) GOTO 0x840; Pop(1)

0x83b: Push((int) 543215)
0x83c: Push((int) -1)
0x83d: Push((int) 45671)
0x83e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83f: Pop(3)
0x840: PushEmpty(bool)
0x841: Stack[-1] = (bool) 1
0x842: PushEmpty(bool)
0x843: Stack[-1] = (bool) 1
0x844: PushEmpty(bool)
0x845: Stack[-1] = (bool) 1
0x846: PushEmpty(bool, object)
0x847: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x848: Call2 0x187a

0x849: Pop(1)
0x84a: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x84b: PushEmpty(bool, object)
0x84c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84d: Call2 0x1866

0x84e: Pop(1)
0x84f: IF (Stack[-1] == 0) GOTO 0x851; Pop(1)

0x850: Stack[-1] = (bool) 0
0x851: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x852: PushEmpty(bool, object)
0x853: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x854: Call2 0x185c

0x855: Pop(1)
0x856: IF (Stack[-1] == 0) GOTO 0x858; Pop(1)

0x857: Stack[-1] = (bool) 0
0x858: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x859: PushEmpty(bool, object)
0x85a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x85b: Call2 0x1852

0x85c: Pop(1)
0x85d: IF (Stack[-1] == 0) GOTO 0x85f; Pop(1)

0x85e: Stack[-1] = (bool) 0
0x85f: IF (Stack[-1] == 0) GOTO 0x865; Pop(1)

0x860: Push((int) 543219)
0x861: Push((int) -1)
0x862: Push((int) 45675)
0x863: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x864: Pop(3)
0x865: GOTO 0x971

0x866: PushEmpty(string)
0x867: Stack[-1] = "Neutral"
0x868: Call2 0x98f

0x869: Pop(1)
0x86a: Push((int) 537240)
0x86b: @@ SetMessage(Stack[-1])
0x86c: Pop(1)
0x86d: @@ ClearReplies()
0x86e: Pop(0)
0x86f: Push((int) 537241)
0x870: Push((int) -1)
0x871: Push((int) 39084)
0x872: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x873: Pop(3)
0x874: PushEmpty(bool)
0x875: Stack[-1] = (bool) 0
0x876: PushEmpty(bool, object)
0x877: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x878: Call2 0x17fe

0x879: Pop(1)
0x87a: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x87b: PushEmpty(bool, object)
0x87c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87d: Call2 0x1816

0x87e: Pop(1)
0x87f: IF (Stack[-1] == 0) GOTO 0x881; Pop(1)

0x880: Stack[-1] = (bool) 1
0x881: IF (Stack[-1] == 0) GOTO 0x887; Pop(1)

0x882: Push((int) 537242)
0x883: Push((int) 39086)
0x884: Push((int) 39085)
0x885: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x886: Pop(3)
0x887: PushEmpty(bool, object)
0x888: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x889: Call2 0x1816

0x88a: Pop(1)
0x88b: IF (Stack[-1] == 0) GOTO 0x891; Pop(1)

0x88c: Push((int) 537277)
0x88d: Push((int) 39122)
0x88e: Push((int) 39121)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: PushEmpty(bool, object)
0x892: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x893: Call2 0x1820

0x894: Pop(1)
0x895: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x896: Push((int) 537329)
0x897: Push((int) 39176)
0x898: Push((int) 39175)
0x899: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89a: Pop(3)
0x89b: PushEmpty(bool)
0x89c: Stack[-1] = (bool) 0
0x89d: PushEmpty(bool, object)
0x89e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x89f: Call2 0x182a

0x8a0: Pop(1)
0x8a1: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a2: PushEmpty(bool, object)
0x8a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8a4: Call2 0x188e

0x8a5: Pop(1)
0x8a6: IF (Stack[-1] == 0) GOTO 0x8a8; Pop(1)

0x8a7: Stack[-1] = (bool) 1
0x8a8: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8a9: Push((int) 537352)
0x8aa: Push((int) 39199)
0x8ab: Push((int) 39198)
0x8ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ad: Pop(3)
0x8ae: PushEmpty(bool)
0x8af: Stack[-1] = (bool) 0
0x8b0: PushEmpty(bool)
0x8b1: Stack[-1] = (bool) 0
0x8b2: PushEmpty(bool, object)
0x8b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b4: Call2 0x17fe

0x8b5: Pop(1)
0x8b6: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8b7: PushEmpty(bool, object)
0x8b8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8b9: Call2 0x182a

0x8ba: Pop(1)
0x8bb: IF (Stack[-1] == 0) GOTO 0x8bd; Pop(1)

0x8bc: Stack[-1] = (bool) 1
0x8bd: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8be: PushEmpty(bool, object)
0x8bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8c0: Call2 0x1898

0x8c1: Pop(1)
0x8c2: IF (Stack[-1] == 0) GOTO 0x8c4; Pop(1)

0x8c3: Stack[-1] = (bool) 1
0x8c4: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8c5: Push((int) 537359)
0x8c6: Push((int) 39206)
0x8c7: Push((int) 39205)
0x8c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c9: Pop(3)
0x8ca: PushEmpty(bool)
0x8cb: Stack[-1] = (bool) 0
0x8cc: PushEmpty(bool, object)
0x8cd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8ce: Call2 0x1834

0x8cf: Pop(1)
0x8d0: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d1: PushEmpty(bool, object)
0x8d2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8d3: Call2 0x188e

0x8d4: Pop(1)
0x8d5: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8d6: Stack[-1] = (bool) 1
0x8d7: IF (Stack[-1] == 0) GOTO 0x8dd; Pop(1)

0x8d8: Push((int) 537380)
0x8d9: Push((int) 39227)
0x8da: Push((int) 39226)
0x8db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8dc: Pop(3)
0x8dd: PushEmpty(bool)
0x8de: Stack[-1] = (bool) 0
0x8df: PushEmpty(bool, object)
0x8e0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e1: Call2 0x1834

0x8e2: Pop(1)
0x8e3: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e4: PushEmpty(bool, object)
0x8e5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e6: Call2 0x1898

0x8e7: Pop(1)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ea; Pop(1)

0x8e9: Stack[-1] = (bool) 1
0x8ea: IF (Stack[-1] == 0) GOTO 0x8f0; Pop(1)

0x8eb: Push((int) 537390)
0x8ec: Push((int) 39237)
0x8ed: Push((int) 39236)
0x8ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ef: Pop(3)
0x8f0: PushEmpty(bool, object)
0x8f1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8f2: Call2 0x183e

0x8f3: Pop(1)
0x8f4: IF (Stack[-1] == 0) GOTO 0x8fa; Pop(1)

0x8f5: Push((int) 537400)
0x8f6: Push((int) 39247)
0x8f7: Push((int) 39246)
0x8f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(3)
0x8fa: PushEmpty(bool)
0x8fb: Stack[-1] = (bool) 0
0x8fc: PushEmpty(bool, object)
0x8fd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8fe: Call2 0x17fe

0x8ff: Pop(1)
0x900: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x901: PushEmpty(bool, object)
0x902: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x903: Call2 0x1848

0x904: Pop(1)
0x905: IF (Stack[-1] == 0) GOTO 0x907; Pop(1)

0x906: Stack[-1] = (bool) 1
0x907: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x908: Push((int) 537423)
0x909: Push((int) 39270)
0x90a: Push((int) 39269)
0x90b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90c: Pop(3)
0x90d: PushEmpty(bool, object)
0x90e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x90f: Call2 0x1852

0x910: Pop(1)
0x911: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x912: Push((int) 537433)
0x913: Push((int) 39280)
0x914: Push((int) 39279)
0x915: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x916: Pop(3)
0x917: PushEmpty(bool)
0x918: Stack[-1] = (bool) 0
0x919: PushEmpty(bool, object)
0x91a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x91b: Call2 0x17fe

0x91c: Pop(1)
0x91d: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x91e: PushEmpty(bool, object)
0x91f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x920: Call2 0x185c

0x921: Pop(1)
0x922: IF (Stack[-1] == 0) GOTO 0x924; Pop(1)

0x923: Stack[-1] = (bool) 1
0x924: IF (Stack[-1] == 0) GOTO 0x92a; Pop(1)

0x925: Push((int) 537451)
0x926: Push((int) 39299)
0x927: Push((int) 39298)
0x928: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x929: Pop(3)
0x92a: PushEmpty(bool)
0x92b: Stack[-1] = (bool) 0
0x92c: PushEmpty(bool, object)
0x92d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92e: Call2 0x17fe

0x92f: Pop(1)
0x930: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x931: PushEmpty(bool, object)
0x932: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x933: Call2 0x1866

0x934: Pop(1)
0x935: IF (Stack[-1] == 0) GOTO 0x937; Pop(1)

0x936: Stack[-1] = (bool) 1
0x937: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x938: Push((int) 537460)
0x939: Push((int) 39308)
0x93a: Push((int) 39307)
0x93b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x93c: Pop(3)
0x93d: PushEmpty(bool)
0x93e: Stack[-1] = (bool) 0
0x93f: PushEmpty(bool, object)
0x940: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x941: Call2 0x17fe

0x942: Pop(1)
0x943: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x944: PushEmpty(bool, object)
0x945: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x946: Call2 0x187a

0x947: Pop(1)
0x948: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x949: Stack[-1] = (bool) 1
0x94a: IF (Stack[-1] == 0) GOTO 0x950; Pop(1)

0x94b: Push((int) 537473)
0x94c: Push((int) 39321)
0x94d: Push((int) 39320)
0x94e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94f: Pop(3)
0x950: PushEmpty(bool, object)
0x951: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x952: Call2 0x187a

0x953: Pop(1)
0x954: IF (Stack[-1] == 0) GOTO 0x95a; Pop(1)

0x955: Push((int) 537483)
0x956: Push((int) 39331)
0x957: Push((int) 39330)
0x958: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x959: Pop(3)
0x95a: PushEmpty(bool, object)
0x95b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x95c: Call2 0x1884

0x95d: Pop(1)
0x95e: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x95f: Push((int) 537493)
0x960: Push((int) 39341)
0x961: Push((int) 39340)
0x962: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x963: Pop(3)
0x964: Push((int) 537503)
0x965: Push((int) -1)
0x966: Push((int) 39350)
0x967: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x968: Pop(3)
0x969: Push((int) 537504)
0x96a: Push((int) -1)
0x96b: Push((int) 39351)
0x96c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96d: Pop(3)
0x96e: GOTO 0x971

0x96f: Return(); Pop(0)

0x970: GOTO 0x711

0x971: PushEmpty(bool)
0x972: Call2 0x19a6

0x973: Pop(0)
0x974: IF (Stack[-1] == 0) GOTO 0x980; Pop(1)

0x975: @ lshWaitForAnimEnd()
0x976: Pop(0)
0x977: Push( Stack[3 + Tasks[-1].StackPointer] )
0x978: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x979: GOTO 0x97f

0x97a: PushEmpty(string)
0x97b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x97c: Call2 0x15d0

0x97d: Pop(1)
0x97e: GOTO 0x975

0x97f: GOTO 0x98e

0x980: Push("all")
0x981: Push("idle")
0x982: @ PlayAnimation(Stack[-2], Stack[-1])
0x983: Pop(2)
0x984: @ WaitForAnimEnd()
0x985: Pop(0)
0x986: Push( Stack[3 + Tasks[-1].StackPointer] )
0x987: IF (Stack[-1] == 0) GOTO 0x989; Pop(1)

0x988: GOTO 0x98e

0x989: Push("all")
0x98a: Push("idle")
0x98b: @ PlayAnimation(Stack[-2], Stack[-1])
0x98c: Pop(2)
0x98d: GOTO 0x984

0x98e: Return(); Pop(0)

0x98f: PushEmpty()
0x990: PushEmpty(bool)
0x991: Call2 0x19a6

0x992: Pop(0)
0x993: Pop(1); Push((bool) Stack[-1] == 0)
0x994: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x995: Return(); Pop(0)

0x996: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x997: IF (Stack[-1] == 0) GOTO 0x999; Pop(1)

0x998: Return(); Pop(0)

0x999: PushEmpty(string, bool)
0x99a: Stack[-2] = Stack[-3]
0x99b: Push("")
0x99c: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99d: IF (Stack[-1] == 0) GOTO 0x9a0; Pop(1)

0x99e: Stack[-1] = (bool) 0
0x99f: GOTO 0x9a1

0x9a0: Stack[-1] = (bool) 1
0x9a1: Call2 0x15e0

0x9a2: Pop(2)
0x9a3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9a4: Return(); Pop(0)

0x9a5: PushEmpty()
0x9a6: Push((int) 1)
0x9a7: IF (Stack[-1] == 0) GOTO 0x14c5; Pop(1)

0x9a8: PushEmpty()
0x9a9: Call2 0x15fa

0x9aa: Pop(0)
0x9ab: Push((int) 45666)
0x9ac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ad: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9ae: PushEmpty(object, object)
0x9af: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b1: Call2 0x17f9

0x9b2: Pop(2)
0x9b3: Push((int) 45667)
0x9b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9b5: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b6: PushEmpty(object, object)
0x9b7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9b8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9b9: Call2 0x17f9

0x9ba: Pop(2)
0x9bb: Push((int) 45668)
0x9bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9be: PushEmpty(object, object)
0x9bf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c1: Call2 0x17f9

0x9c2: Pop(2)
0x9c3: Push((int) 39084)
0x9c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c6: PushEmpty(object, object)
0x9c7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9c8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9c9: Call2 0x17f9

0x9ca: Pop(2)
0x9cb: Push((int) 39093)
0x9cc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9cd: IF (Stack[-1] == 0) GOTO 0x9d3; Pop(1)

0x9ce: PushEmpty(object, object)
0x9cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d1: Call2 0x17ef

0x9d2: Pop(2)
0x9d3: Push((int) 39094)
0x9d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9d5: IF (Stack[-1] == 0) GOTO 0x9db; Pop(1)

0x9d6: PushEmpty(object, object)
0x9d7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d9: Call2 0x17ef

0x9da: Pop(2)
0x9db: Push((int) 39095)
0x9dc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9dd: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9de: PushEmpty(object, object)
0x9df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e1: Call2 0x17ef

0x9e2: Pop(2)
0x9e3: Push((int) 45665)
0x9e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9e5: IF (Stack[-1] == 0) GOTO 0xc42; Pop(1)

0x9e6: PushEmpty(bool, object)
0x9e7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9e8: Call2 0x180a

0x9e9: Pop(1)
0x9ea: IF (Stack[-1] == 0) GOTO 0xb39; Pop(1)

0x9eb: PushEmpty(string)
0x9ec: Stack[-1] = "Neutral"
0x9ed: Call2 0x98f

0x9ee: Pop(1)
0x9ef: Push((int) 543209)
0x9f0: @@ SetMessage(Stack[-1])
0x9f1: Pop(1)
0x9f2: @@ ClearReplies()
0x9f3: Pop(0)
0x9f4: PushEmpty(bool)
0x9f5: Stack[-1] = (bool) 1
0x9f6: PushEmpty(bool, object)
0x9f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f8: Call2 0x185c

0x9f9: Pop(1)
0x9fa: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0x9fb: PushEmpty(bool, object)
0x9fc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9fd: Call2 0x1870

0x9fe: Pop(1)
0x9ff: IF (Stack[-1] == 0) GOTO 0xa01; Pop(1)

0xa00: Stack[-1] = (bool) 0
0xa01: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa02: Push((int) 543240)
0xa03: Push((int) 45697)
0xa04: Push((int) 45696)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: PushEmpty(bool)
0xa08: Stack[-1] = (bool) 1
0xa09: PushEmpty(bool)
0xa0a: Stack[-1] = (bool) 1
0xa0b: PushEmpty(bool)
0xa0c: Stack[-1] = (bool) 1
0xa0d: PushEmpty(bool, object)
0xa0e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0f: Call2 0x1816

0xa10: Pop(1)
0xa11: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa12: PushEmpty(bool, object)
0xa13: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa14: Call2 0x182a

0xa15: Pop(1)
0xa16: IF (Stack[-1] == 0) GOTO 0xa18; Pop(1)

0xa17: Stack[-1] = (bool) 0
0xa18: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa19: PushEmpty(bool, object)
0xa1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1b: Call2 0x183e

0xa1c: Pop(1)
0xa1d: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1e: Stack[-1] = (bool) 0
0xa1f: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa20: PushEmpty(bool, object)
0xa21: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa22: Call2 0x1834

0xa23: Pop(1)
0xa24: IF (Stack[-1] == 0) GOTO 0xa26; Pop(1)

0xa25: Stack[-1] = (bool) 0
0xa26: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa27: Push((int) 543233)
0xa28: Push((int) 45690)
0xa29: Push((int) 45689)
0xa2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa2b: Pop(3)
0xa2c: PushEmpty(bool, object)
0xa2d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2e: Call2 0x1820

0xa2f: Pop(1)
0xa30: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa31: Push((int) 543214)
0xa32: Push((int) 45672)
0xa33: Push((int) 45670)
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
0xa3e: Call2 0x1816

0xa3f: Pop(1)
0xa40: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa41: PushEmpty(bool, object)
0xa42: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa43: Call2 0x1820

0xa44: Pop(1)
0xa45: IF (Stack[-1] == 0) GOTO 0xa47; Pop(1)

0xa46: Stack[-1] = (bool) 0
0xa47: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa48: PushEmpty(bool, object)
0xa49: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa4a: Call2 0x182a

0xa4b: Pop(1)
0xa4c: IF (Stack[-1] == 0) GOTO 0xa4e; Pop(1)

0xa4d: Stack[-1] = (bool) 0
0xa4e: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa4f: PushEmpty(bool, object)
0xa50: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa51: Call2 0x1834

0xa52: Pop(1)
0xa53: IF (Stack[-1] == 0) GOTO 0xa55; Pop(1)

0xa54: Stack[-1] = (bool) 0
0xa55: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa56: Push((int) 543210)
0xa57: Push((int) -1)
0xa58: Push((int) 45666)
0xa59: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa5a: Pop(3)
0xa5b: PushEmpty(bool)
0xa5c: Stack[-1] = (bool) 1
0xa5d: PushEmpty(bool)
0xa5e: Stack[-1] = (bool) 1
0xa5f: PushEmpty(bool, object)
0xa60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa61: Call2 0x183e

0xa62: Pop(1)
0xa63: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa64: PushEmpty(bool, object)
0xa65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa66: Call2 0x1848

0xa67: Pop(1)
0xa68: IF (Stack[-1] == 0) GOTO 0xa6a; Pop(1)

0xa69: Stack[-1] = (bool) 0
0xa6a: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa6b: PushEmpty(bool, object)
0xa6c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa6d: Call2 0x1852

0xa6e: Pop(1)
0xa6f: IF (Stack[-1] == 0) GOTO 0xa71; Pop(1)

0xa70: Stack[-1] = (bool) 0
0xa71: IF (Stack[-1] == 0) GOTO 0xa77; Pop(1)

0xa72: Push((int) 543211)
0xa73: Push((int) -1)
0xa74: Push((int) 45667)
0xa75: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa76: Pop(3)
0xa77: PushEmpty(bool)
0xa78: Stack[-1] = (bool) 1
0xa79: PushEmpty(bool)
0xa7a: Stack[-1] = (bool) 1
0xa7b: PushEmpty(bool)
0xa7c: Stack[-1] = (bool) 1
0xa7d: PushEmpty(bool)
0xa7e: Stack[-1] = (bool) 1
0xa7f: PushEmpty(bool, object)
0xa80: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa81: Call2 0x185c

0xa82: Pop(1)
0xa83: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa84: PushEmpty(bool, object)
0xa85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa86: Call2 0x1866

0xa87: Pop(1)
0xa88: IF (Stack[-1] == 0) GOTO 0xa8a; Pop(1)

0xa89: Stack[-1] = (bool) 0
0xa8a: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa8b: PushEmpty(bool, object)
0xa8c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8d: Call2 0x1870

0xa8e: Pop(1)
0xa8f: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa90: Stack[-1] = (bool) 0
0xa91: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa92: PushEmpty(bool, object)
0xa93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa94: Call2 0x187a

0xa95: Pop(1)
0xa96: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa97: Stack[-1] = (bool) 0
0xa98: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa99: PushEmpty(bool, object)
0xa9a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa9b: Call2 0x1884

0xa9c: Pop(1)
0xa9d: IF (Stack[-1] == 0) GOTO 0xa9f; Pop(1)

0xa9e: Stack[-1] = (bool) 0
0xa9f: IF (Stack[-1] == 0) GOTO 0xaa5; Pop(1)

0xaa0: Push((int) 543212)
0xaa1: Push((int) -1)
0xaa2: Push((int) 45668)
0xaa3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa4: Pop(3)
0xaa5: PushEmpty(bool)
0xaa6: Stack[-1] = (bool) 1
0xaa7: PushEmpty(bool)
0xaa8: Stack[-1] = (bool) 1
0xaa9: PushEmpty(bool)
0xaaa: Stack[-1] = (bool) 1
0xaab: PushEmpty(bool)
0xaac: Stack[-1] = (bool) 1
0xaad: PushEmpty(bool, object)
0xaae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaaf: Call2 0x1816

0xab0: Pop(1)
0xab1: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab2: PushEmpty(bool, object)
0xab3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xab4: Call2 0x1820

0xab5: Pop(1)
0xab6: IF (Stack[-1] == 0) GOTO 0xab8; Pop(1)

0xab7: Stack[-1] = (bool) 0
0xab8: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xab9: PushEmpty(bool, object)
0xaba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xabb: Call2 0x1834

0xabc: Pop(1)
0xabd: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xabe: Stack[-1] = (bool) 0
0xabf: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac0: PushEmpty(bool, object)
0xac1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac2: Call2 0x183e

0xac3: Pop(1)
0xac4: IF (Stack[-1] == 0) GOTO 0xac6; Pop(1)

0xac5: Stack[-1] = (bool) 0
0xac6: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xac7: PushEmpty(bool, object)
0xac8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac9: Call2 0x1852

0xaca: Pop(1)
0xacb: IF (Stack[-1] == 0) GOTO 0xacd; Pop(1)

0xacc: Stack[-1] = (bool) 0
0xacd: IF (Stack[-1] == 0) GOTO 0xad3; Pop(1)

0xace: Push((int) 543213)
0xacf: Push((int) -1)
0xad0: Push((int) 45669)
0xad1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad2: Pop(3)
0xad3: PushEmpty(bool)
0xad4: Stack[-1] = (bool) 1
0xad5: PushEmpty(bool)
0xad6: Stack[-1] = (bool) 1
0xad7: PushEmpty(bool)
0xad8: Stack[-1] = (bool) 1
0xad9: PushEmpty(bool)
0xada: Stack[-1] = (bool) 1
0xadb: PushEmpty(bool)
0xadc: Stack[-1] = (bool) 1
0xadd: PushEmpty(bool)
0xade: Stack[-1] = (bool) 1
0xadf: PushEmpty(bool, object)
0xae0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae1: Call2 0x182a

0xae2: Pop(1)
0xae3: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae4: PushEmpty(bool, object)
0xae5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xae6: Call2 0x1848

0xae7: Pop(1)
0xae8: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xae9: Stack[-1] = (bool) 0
0xaea: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaeb: PushEmpty(bool, object)
0xaec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaed: Call2 0x1866

0xaee: Pop(1)
0xaef: IF (Stack[-1] == 0) GOTO 0xaf1; Pop(1)

0xaf0: Stack[-1] = (bool) 0
0xaf1: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf2: PushEmpty(bool, object)
0xaf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaf4: Call2 0x1884

0xaf5: Pop(1)
0xaf6: IF (Stack[-1] == 0) GOTO 0xaf8; Pop(1)

0xaf7: Stack[-1] = (bool) 0
0xaf8: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xaf9: PushEmpty(bool, object)
0xafa: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xafb: Call2 0x1820

0xafc: Pop(1)
0xafd: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xafe: Stack[-1] = (bool) 0
0xaff: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb00: PushEmpty(bool, object)
0xb01: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb02: Call2 0x185c

0xb03: Pop(1)
0xb04: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb05: Stack[-1] = (bool) 0
0xb06: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb07: PushEmpty(bool, object)
0xb08: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb09: Call2 0x1870

0xb0a: Pop(1)
0xb0b: IF (Stack[-1] == 0) GOTO 0xb0d; Pop(1)

0xb0c: Stack[-1] = (bool) 0
0xb0d: IF (Stack[-1] == 0) GOTO 0xb13; Pop(1)

0xb0e: Push((int) 543215)
0xb0f: Push((int) -1)
0xb10: Push((int) 45671)
0xb11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb12: Pop(3)
0xb13: PushEmpty(bool)
0xb14: Stack[-1] = (bool) 1
0xb15: PushEmpty(bool)
0xb16: Stack[-1] = (bool) 1
0xb17: PushEmpty(bool)
0xb18: Stack[-1] = (bool) 1
0xb19: PushEmpty(bool, object)
0xb1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb1b: Call2 0x187a

0xb1c: Pop(1)
0xb1d: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb1e: PushEmpty(bool, object)
0xb1f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb20: Call2 0x1866

0xb21: Pop(1)
0xb22: IF (Stack[-1] == 0) GOTO 0xb24; Pop(1)

0xb23: Stack[-1] = (bool) 0
0xb24: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb25: PushEmpty(bool, object)
0xb26: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb27: Call2 0x185c

0xb28: Pop(1)
0xb29: IF (Stack[-1] == 0) GOTO 0xb2b; Pop(1)

0xb2a: Stack[-1] = (bool) 0
0xb2b: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb2c: PushEmpty(bool, object)
0xb2d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb2e: Call2 0x1852

0xb2f: Pop(1)
0xb30: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb31: Stack[-1] = (bool) 0
0xb32: IF (Stack[-1] == 0) GOTO 0xb38; Pop(1)

0xb33: Push((int) 543219)
0xb34: Push((int) -1)
0xb35: Push((int) 45675)
0xb36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(3)
0xb38: Return(); Pop(0)

0xb39: PushEmpty(string)
0xb3a: Stack[-1] = "Neutral"
0xb3b: Call2 0x98f

0xb3c: Pop(1)
0xb3d: Push((int) 537240)
0xb3e: @@ SetMessage(Stack[-1])
0xb3f: Pop(1)
0xb40: @@ ClearReplies()
0xb41: Pop(0)
0xb42: Push((int) 537241)
0xb43: Push((int) -1)
0xb44: Push((int) 39084)
0xb45: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb46: Pop(3)
0xb47: PushEmpty(bool)
0xb48: Stack[-1] = (bool) 0
0xb49: PushEmpty(bool, object)
0xb4a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb4b: Call2 0x17fe

0xb4c: Pop(1)
0xb4d: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0xb4e: PushEmpty(bool, object)
0xb4f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb50: Call2 0x1816

0xb51: Pop(1)
0xb52: IF (Stack[-1] == 0) GOTO 0xb54; Pop(1)

0xb53: Stack[-1] = (bool) 1
0xb54: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb55: Push((int) 537242)
0xb56: Push((int) 39086)
0xb57: Push((int) 39085)
0xb58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb59: Pop(3)
0xb5a: PushEmpty(bool, object)
0xb5b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb5c: Call2 0x1816

0xb5d: Pop(1)
0xb5e: IF (Stack[-1] == 0) GOTO 0xb64; Pop(1)

0xb5f: Push((int) 537277)
0xb60: Push((int) 39122)
0xb61: Push((int) 39121)
0xb62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb63: Pop(3)
0xb64: PushEmpty(bool, object)
0xb65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb66: Call2 0x1820

0xb67: Pop(1)
0xb68: IF (Stack[-1] == 0) GOTO 0xb6e; Pop(1)

0xb69: Push((int) 537329)
0xb6a: Push((int) 39176)
0xb6b: Push((int) 39175)
0xb6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6d: Pop(3)
0xb6e: PushEmpty(bool)
0xb6f: Stack[-1] = (bool) 0
0xb70: PushEmpty(bool, object)
0xb71: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb72: Call2 0x182a

0xb73: Pop(1)
0xb74: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb75: PushEmpty(bool, object)
0xb76: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb77: Call2 0x188e

0xb78: Pop(1)
0xb79: IF (Stack[-1] == 0) GOTO 0xb7b; Pop(1)

0xb7a: Stack[-1] = (bool) 1
0xb7b: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb7c: Push((int) 537352)
0xb7d: Push((int) 39199)
0xb7e: Push((int) 39198)
0xb7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb80: Pop(3)
0xb81: PushEmpty(bool)
0xb82: Stack[-1] = (bool) 0
0xb83: PushEmpty(bool)
0xb84: Stack[-1] = (bool) 0
0xb85: PushEmpty(bool, object)
0xb86: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb87: Call2 0x17fe

0xb88: Pop(1)
0xb89: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb8a: PushEmpty(bool, object)
0xb8b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb8c: Call2 0x182a

0xb8d: Pop(1)
0xb8e: IF (Stack[-1] == 0) GOTO 0xb90; Pop(1)

0xb8f: Stack[-1] = (bool) 1
0xb90: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb91: PushEmpty(bool, object)
0xb92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb93: Call2 0x1898

0xb94: Pop(1)
0xb95: IF (Stack[-1] == 0) GOTO 0xb97; Pop(1)

0xb96: Stack[-1] = (bool) 1
0xb97: IF (Stack[-1] == 0) GOTO 0xb9d; Pop(1)

0xb98: Push((int) 537359)
0xb99: Push((int) 39206)
0xb9a: Push((int) 39205)
0xb9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9c: Pop(3)
0xb9d: PushEmpty(bool)
0xb9e: Stack[-1] = (bool) 0
0xb9f: PushEmpty(bool, object)
0xba0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba1: Call2 0x1834

0xba2: Pop(1)
0xba3: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba4: PushEmpty(bool, object)
0xba5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba6: Call2 0x188e

0xba7: Pop(1)
0xba8: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xba9: Stack[-1] = (bool) 1
0xbaa: IF (Stack[-1] == 0) GOTO 0xbb0; Pop(1)

0xbab: Push((int) 537380)
0xbac: Push((int) 39227)
0xbad: Push((int) 39226)
0xbae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbaf: Pop(3)
0xbb0: PushEmpty(bool)
0xbb1: Stack[-1] = (bool) 0
0xbb2: PushEmpty(bool, object)
0xbb3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb4: Call2 0x1834

0xbb5: Pop(1)
0xbb6: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbb7: PushEmpty(bool, object)
0xbb8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb9: Call2 0x1898

0xbba: Pop(1)
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbbc: Stack[-1] = (bool) 1
0xbbd: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbbe: Push((int) 537390)
0xbbf: Push((int) 39237)
0xbc0: Push((int) 39236)
0xbc1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc2: Pop(3)
0xbc3: PushEmpty(bool, object)
0xbc4: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbc5: Call2 0x183e

0xbc6: Pop(1)
0xbc7: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbc8: Push((int) 537400)
0xbc9: Push((int) 39247)
0xbca: Push((int) 39246)
0xbcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcc: Pop(3)
0xbcd: PushEmpty(bool)
0xbce: Stack[-1] = (bool) 0
0xbcf: PushEmpty(bool, object)
0xbd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd1: Call2 0x17fe

0xbd2: Pop(1)
0xbd3: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd4: PushEmpty(bool, object)
0xbd5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd6: Call2 0x1848

0xbd7: Pop(1)
0xbd8: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd9: Stack[-1] = (bool) 1
0xbda: IF (Stack[-1] == 0) GOTO 0xbe0; Pop(1)

0xbdb: Push((int) 537423)
0xbdc: Push((int) 39270)
0xbdd: Push((int) 39269)
0xbde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(3)
0xbe0: PushEmpty(bool, object)
0xbe1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbe2: Call2 0x1852

0xbe3: Pop(1)
0xbe4: IF (Stack[-1] == 0) GOTO 0xbea; Pop(1)

0xbe5: Push((int) 537433)
0xbe6: Push((int) 39280)
0xbe7: Push((int) 39279)
0xbe8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe9: Pop(3)
0xbea: PushEmpty(bool)
0xbeb: Stack[-1] = (bool) 0
0xbec: PushEmpty(bool, object)
0xbed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbee: Call2 0x17fe

0xbef: Pop(1)
0xbf0: IF (Stack[-1] == 0) GOTO 0xbf7; Pop(1)

0xbf1: PushEmpty(bool, object)
0xbf2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbf3: Call2 0x185c

0xbf4: Pop(1)
0xbf5: IF (Stack[-1] == 0) GOTO 0xbf7; Pop(1)

0xbf6: Stack[-1] = (bool) 1
0xbf7: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbf8: Push((int) 537451)
0xbf9: Push((int) 39299)
0xbfa: Push((int) 39298)
0xbfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfc: Pop(3)
0xbfd: PushEmpty(bool)
0xbfe: Stack[-1] = (bool) 0
0xbff: PushEmpty(bool, object)
0xc00: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc01: Call2 0x17fe

0xc02: Pop(1)
0xc03: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc04: PushEmpty(bool, object)
0xc05: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc06: Call2 0x1866

0xc07: Pop(1)
0xc08: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xc09: Stack[-1] = (bool) 1
0xc0a: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xc0b: Push((int) 537460)
0xc0c: Push((int) 39308)
0xc0d: Push((int) 39307)
0xc0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0f: Pop(3)
0xc10: PushEmpty(bool)
0xc11: Stack[-1] = (bool) 0
0xc12: PushEmpty(bool, object)
0xc13: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc14: Call2 0x17fe

0xc15: Pop(1)
0xc16: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc17: PushEmpty(bool, object)
0xc18: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc19: Call2 0x187a

0xc1a: Pop(1)
0xc1b: IF (Stack[-1] == 0) GOTO 0xc1d; Pop(1)

0xc1c: Stack[-1] = (bool) 1
0xc1d: IF (Stack[-1] == 0) GOTO 0xc23; Pop(1)

0xc1e: Push((int) 537473)
0xc1f: Push((int) 39321)
0xc20: Push((int) 39320)
0xc21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc22: Pop(3)
0xc23: PushEmpty(bool, object)
0xc24: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc25: Call2 0x187a

0xc26: Pop(1)
0xc27: IF (Stack[-1] == 0) GOTO 0xc2d; Pop(1)

0xc28: Push((int) 537483)
0xc29: Push((int) 39331)
0xc2a: Push((int) 39330)
0xc2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2c: Pop(3)
0xc2d: PushEmpty(bool, object)
0xc2e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2f: Call2 0x1884

0xc30: Pop(1)
0xc31: IF (Stack[-1] == 0) GOTO 0xc37; Pop(1)

0xc32: Push((int) 537493)
0xc33: Push((int) 39341)
0xc34: Push((int) 39340)
0xc35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc36: Pop(3)
0xc37: Push((int) 537503)
0xc38: Push((int) -1)
0xc39: Push((int) 39350)
0xc3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: Push((int) 537504)
0xc3d: Push((int) -1)
0xc3e: Push((int) 39351)
0xc3f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc40: Pop(3)
0xc41: Return(); Pop(0)

0xc42: Push((int) 39341)
0xc43: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc44: IF (Stack[-1] == 0) GOTO 0xc59; Pop(1)

0xc45: PushEmpty(string)
0xc46: Stack[-1] = "Neutral"
0xc47: Call2 0x98f

0xc48: Pop(1)
0xc49: Push((int) 537494)
0xc4a: @@ SetMessage(Stack[-1])
0xc4b: Pop(1)
0xc4c: @@ ClearReplies()
0xc4d: Pop(0)
0xc4e: Push((int) 537495)
0xc4f: Push((int) 39343)
0xc50: Push((int) 39342)
0xc51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc52: Pop(3)
0xc53: Push((int) 537499)
0xc54: Push((int) 39347)
0xc55: Push((int) 39346)
0xc56: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc57: Pop(3)
0xc58: Return(); Pop(0)

0xc59: Push((int) 39347)
0xc5a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5b: IF (Stack[-1] == 0) GOTO 0xc75; Pop(1)

0xc5c: PushEmpty(string)
0xc5d: Stack[-1] = "Neutral"
0xc5e: Call2 0x98f

0xc5f: Pop(1)
0xc60: Push((int) 537500)
0xc61: @@ SetMessage(Stack[-1])
0xc62: Pop(1)
0xc63: @@ ClearReplies()
0xc64: Pop(0)
0xc65: Push((int) 537501)
0xc66: Push((int) -1)
0xc67: Push((int) 39348)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: PushEmpty(bool, object)
0xc6b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc6c: Call2 0x17fe

0xc6d: Pop(1)
0xc6e: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc6f: Push((int) 537502)
0xc70: Push((int) -1)
0xc71: Push((int) 39349)
0xc72: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc73: Pop(3)
0xc74: Return(); Pop(0)

0xc75: Push((int) 39343)
0xc76: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc77: IF (Stack[-1] == 0) GOTO 0xc8c; Pop(1)

0xc78: PushEmpty(string)
0xc79: Stack[-1] = "Neutral"
0xc7a: Call2 0x98f

0xc7b: Pop(1)
0xc7c: Push((int) 537496)
0xc7d: @@ SetMessage(Stack[-1])
0xc7e: Pop(1)
0xc7f: @@ ClearReplies()
0xc80: Pop(0)
0xc81: Push((int) 537497)
0xc82: Push((int) -1)
0xc83: Push((int) 39344)
0xc84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc85: Pop(3)
0xc86: Push((int) 537498)
0xc87: Push((int) -1)
0xc88: Push((int) 39345)
0xc89: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc8a: Pop(3)
0xc8b: Return(); Pop(0)

0xc8c: Push((int) 39331)
0xc8d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc8e: IF (Stack[-1] == 0) GOTO 0xca3; Pop(1)

0xc8f: PushEmpty(string)
0xc90: Stack[-1] = "Neutral"
0xc91: Call2 0x98f

0xc92: Pop(1)
0xc93: Push((int) 537484)
0xc94: @@ SetMessage(Stack[-1])
0xc95: Pop(1)
0xc96: @@ ClearReplies()
0xc97: Pop(0)
0xc98: Push((int) 537485)
0xc99: Push((int) 39333)
0xc9a: Push((int) 39332)
0xc9b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9c: Pop(3)
0xc9d: Push((int) 537492)
0xc9e: Push((int) -1)
0xc9f: Push((int) 39339)
0xca0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca1: Pop(3)
0xca2: Return(); Pop(0)

0xca3: Push((int) 39333)
0xca4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xca5: IF (Stack[-1] == 0) GOTO 0xcbf; Pop(1)

0xca6: PushEmpty(string)
0xca7: Stack[-1] = "Neutral"
0xca8: Call2 0x98f

0xca9: Pop(1)
0xcaa: Push((int) 537486)
0xcab: @@ SetMessage(Stack[-1])
0xcac: Pop(1)
0xcad: @@ ClearReplies()
0xcae: Pop(0)
0xcaf: Push((int) 537487)
0xcb0: Push((int) 39335)
0xcb1: Push((int) 39334)
0xcb2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb3: Pop(3)
0xcb4: PushEmpty(bool, object)
0xcb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb6: Call2 0x17fe

0xcb7: Pop(1)
0xcb8: IF (Stack[-1] == 0) GOTO 0xcbe; Pop(1)

0xcb9: Push((int) 537491)
0xcba: Push((int) -1)
0xcbb: Push((int) 39338)
0xcbc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcbd: Pop(3)
0xcbe: Return(); Pop(0)

0xcbf: Push((int) 39335)
0xcc0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc1: IF (Stack[-1] == 0) GOTO 0xcd6; Pop(1)

0xcc2: PushEmpty(string)
0xcc3: Stack[-1] = "Neutral"
0xcc4: Call2 0x98f

0xcc5: Pop(1)
0xcc6: Push((int) 537488)
0xcc7: @@ SetMessage(Stack[-1])
0xcc8: Pop(1)
0xcc9: @@ ClearReplies()
0xcca: Pop(0)
0xccb: Push((int) 537489)
0xccc: Push((int) -1)
0xccd: Push((int) 39336)
0xcce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccf: Pop(3)
0xcd0: Push((int) 537490)
0xcd1: Push((int) -1)
0xcd2: Push((int) 39337)
0xcd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd4: Pop(3)
0xcd5: Return(); Pop(0)

0xcd6: Push((int) 39321)
0xcd7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd8: IF (Stack[-1] == 0) GOTO 0xced; Pop(1)

0xcd9: PushEmpty(string)
0xcda: Stack[-1] = "Neutral"
0xcdb: Call2 0x98f

0xcdc: Pop(1)
0xcdd: Push((int) 537474)
0xcde: @@ SetMessage(Stack[-1])
0xcdf: Pop(1)
0xce0: @@ ClearReplies()
0xce1: Pop(0)
0xce2: Push((int) 537475)
0xce3: Push((int) 39323)
0xce4: Push((int) 39322)
0xce5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce6: Pop(3)
0xce7: Push((int) 537482)
0xce8: Push((int) -1)
0xce9: Push((int) 39329)
0xcea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xceb: Pop(3)
0xcec: Return(); Pop(0)

0xced: Push((int) 39323)
0xcee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcef: IF (Stack[-1] == 0) GOTO 0xd04; Pop(1)

0xcf0: PushEmpty(string)
0xcf1: Stack[-1] = "Neutral"
0xcf2: Call2 0x98f

0xcf3: Pop(1)
0xcf4: Push((int) 537476)
0xcf5: @@ SetMessage(Stack[-1])
0xcf6: Pop(1)
0xcf7: @@ ClearReplies()
0xcf8: Pop(0)
0xcf9: Push((int) 537477)
0xcfa: Push((int) 39325)
0xcfb: Push((int) 39324)
0xcfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfd: Pop(3)
0xcfe: Push((int) 537481)
0xcff: Push((int) -1)
0xd00: Push((int) 39328)
0xd01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd02: Pop(3)
0xd03: Return(); Pop(0)

0xd04: Push((int) 39325)
0xd05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd06: IF (Stack[-1] == 0) GOTO 0xd1b; Pop(1)

0xd07: PushEmpty(string)
0xd08: Stack[-1] = "Neutral"
0xd09: Call2 0x98f

0xd0a: Pop(1)
0xd0b: Push((int) 537478)
0xd0c: @@ SetMessage(Stack[-1])
0xd0d: Pop(1)
0xd0e: @@ ClearReplies()
0xd0f: Pop(0)
0xd10: Push((int) 537479)
0xd11: Push((int) -1)
0xd12: Push((int) 39326)
0xd13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd14: Pop(3)
0xd15: Push((int) 537480)
0xd16: Push((int) -1)
0xd17: Push((int) 39327)
0xd18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd19: Pop(3)
0xd1a: Return(); Pop(0)

0xd1b: Push((int) 39308)
0xd1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd1d: IF (Stack[-1] == 0) GOTO 0xd32; Pop(1)

0xd1e: PushEmpty(string)
0xd1f: Stack[-1] = "Neutral"
0xd20: Call2 0x98f

0xd21: Pop(1)
0xd22: Push((int) 537461)
0xd23: @@ SetMessage(Stack[-1])
0xd24: Pop(1)
0xd25: @@ ClearReplies()
0xd26: Pop(0)
0xd27: Push((int) 537462)
0xd28: Push((int) 39310)
0xd29: Push((int) 39309)
0xd2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2b: Pop(3)
0xd2c: Push((int) 537472)
0xd2d: Push((int) -1)
0xd2e: Push((int) 39319)
0xd2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd30: Pop(3)
0xd31: Return(); Pop(0)

0xd32: Push((int) 39310)
0xd33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd34: IF (Stack[-1] == 0) GOTO 0xd49; Pop(1)

0xd35: PushEmpty(string)
0xd36: Stack[-1] = "Neutral"
0xd37: Call2 0x98f

0xd38: Pop(1)
0xd39: Push((int) 537463)
0xd3a: @@ SetMessage(Stack[-1])
0xd3b: Pop(1)
0xd3c: @@ ClearReplies()
0xd3d: Pop(0)
0xd3e: Push((int) 537464)
0xd3f: Push((int) 39312)
0xd40: Push((int) 39311)
0xd41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd42: Pop(3)
0xd43: Push((int) 537471)
0xd44: Push((int) -1)
0xd45: Push((int) 39318)
0xd46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd47: Pop(3)
0xd48: Return(); Pop(0)

0xd49: Push((int) 39312)
0xd4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4b: IF (Stack[-1] == 0) GOTO 0xd60; Pop(1)

0xd4c: PushEmpty(string)
0xd4d: Stack[-1] = "Neutral"
0xd4e: Call2 0x98f

0xd4f: Pop(1)
0xd50: Push((int) 537465)
0xd51: @@ SetMessage(Stack[-1])
0xd52: Pop(1)
0xd53: @@ ClearReplies()
0xd54: Pop(0)
0xd55: Push((int) 537466)
0xd56: Push((int) 39314)
0xd57: Push((int) 39313)
0xd58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd59: Pop(3)
0xd5a: Push((int) 537470)
0xd5b: Push((int) -1)
0xd5c: Push((int) 39317)
0xd5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd5e: Pop(3)
0xd5f: Return(); Pop(0)

0xd60: Push((int) 39314)
0xd61: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd62: IF (Stack[-1] == 0) GOTO 0xd77; Pop(1)

0xd63: PushEmpty(string)
0xd64: Stack[-1] = "Neutral"
0xd65: Call2 0x98f

0xd66: Pop(1)
0xd67: Push((int) 537467)
0xd68: @@ SetMessage(Stack[-1])
0xd69: Pop(1)
0xd6a: @@ ClearReplies()
0xd6b: Pop(0)
0xd6c: Push((int) 537468)
0xd6d: Push((int) -1)
0xd6e: Push((int) 39315)
0xd6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd70: Pop(3)
0xd71: Push((int) 537469)
0xd72: Push((int) -1)
0xd73: Push((int) 39316)
0xd74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd75: Pop(3)
0xd76: Return(); Pop(0)

0xd77: Push((int) 39299)
0xd78: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd79: IF (Stack[-1] == 0) GOTO 0xd8e; Pop(1)

0xd7a: PushEmpty(string)
0xd7b: Stack[-1] = "Neutral"
0xd7c: Call2 0x98f

0xd7d: Pop(1)
0xd7e: Push((int) 537452)
0xd7f: @@ SetMessage(Stack[-1])
0xd80: Pop(1)
0xd81: @@ ClearReplies()
0xd82: Pop(0)
0xd83: Push((int) 537453)
0xd84: Push((int) 39301)
0xd85: Push((int) 39300)
0xd86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd87: Pop(3)
0xd88: Push((int) 537459)
0xd89: Push((int) -1)
0xd8a: Push((int) 39306)
0xd8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd8c: Pop(3)
0xd8d: Return(); Pop(0)

0xd8e: Push((int) 39301)
0xd8f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd90: IF (Stack[-1] == 0) GOTO 0xda0; Pop(1)

0xd91: PushEmpty(string)
0xd92: Stack[-1] = "Neutral"
0xd93: Call2 0x98f

0xd94: Pop(1)
0xd95: Push((int) 537454)
0xd96: @@ SetMessage(Stack[-1])
0xd97: Pop(1)
0xd98: @@ ClearReplies()
0xd99: Pop(0)
0xd9a: Push((int) 537455)
0xd9b: Push((int) 39303)
0xd9c: Push((int) 39302)
0xd9d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd9e: Pop(3)
0xd9f: Return(); Pop(0)

0xda0: Push((int) 39303)
0xda1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xda2: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xda3: PushEmpty(string)
0xda4: Stack[-1] = "Neutral"
0xda5: Call2 0x98f

0xda6: Pop(1)
0xda7: Push((int) 537456)
0xda8: @@ SetMessage(Stack[-1])
0xda9: Pop(1)
0xdaa: @@ ClearReplies()
0xdab: Pop(0)
0xdac: Push((int) 537457)
0xdad: Push((int) -1)
0xdae: Push((int) 39304)
0xdaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb0: Pop(3)
0xdb1: Push((int) 537458)
0xdb2: Push((int) -1)
0xdb3: Push((int) 39305)
0xdb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb5: Pop(3)
0xdb6: Return(); Pop(0)

0xdb7: Push((int) 39280)
0xdb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdb9: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdba: PushEmpty(string)
0xdbb: Stack[-1] = "Neutral"
0xdbc: Call2 0x98f

0xdbd: Pop(1)
0xdbe: Push((int) 537434)
0xdbf: @@ SetMessage(Stack[-1])
0xdc0: Pop(1)
0xdc1: @@ ClearReplies()
0xdc2: Pop(0)
0xdc3: Push((int) 537435)
0xdc4: Push((int) 39282)
0xdc5: Push((int) 39281)
0xdc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdc7: Pop(3)
0xdc8: Push((int) 537447)
0xdc9: Push((int) 39294)
0xdca: Push((int) 39293)
0xdcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdcc: Pop(3)
0xdcd: Return(); Pop(0)

0xdce: Push((int) 39294)
0xdcf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd0: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xdd1: PushEmpty(string)
0xdd2: Stack[-1] = "Neutral"
0xdd3: Call2 0x98f

0xdd4: Pop(1)
0xdd5: Push((int) 537448)
0xdd6: @@ SetMessage(Stack[-1])
0xdd7: Pop(1)
0xdd8: @@ ClearReplies()
0xdd9: Pop(0)
0xdda: Push((int) 537449)
0xddb: Push((int) 39284)
0xddc: Push((int) 39295)
0xddd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdde: Pop(3)
0xddf: Push((int) 537450)
0xde0: Push((int) -1)
0xde1: Push((int) 39297)
0xde2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xde3: Pop(3)
0xde4: Return(); Pop(0)

0xde5: Push((int) 39282)
0xde6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde7: IF (Stack[-1] == 0) GOTO 0xdf7; Pop(1)

0xde8: PushEmpty(string)
0xde9: Stack[-1] = "Neutral"
0xdea: Call2 0x98f

0xdeb: Pop(1)
0xdec: Push((int) 537436)
0xded: @@ SetMessage(Stack[-1])
0xdee: Pop(1)
0xdef: @@ ClearReplies()
0xdf0: Pop(0)
0xdf1: Push((int) 537437)
0xdf2: Push((int) 39284)
0xdf3: Push((int) 39283)
0xdf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf5: Pop(3)
0xdf6: Return(); Pop(0)

0xdf7: Push((int) 39284)
0xdf8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf9: IF (Stack[-1] == 0) GOTO 0xe0e; Pop(1)

0xdfa: PushEmpty(string)
0xdfb: Stack[-1] = "Neutral"
0xdfc: Call2 0x98f

0xdfd: Pop(1)
0xdfe: Push((int) 537438)
0xdff: @@ SetMessage(Stack[-1])
0xe00: Pop(1)
0xe01: @@ ClearReplies()
0xe02: Pop(0)
0xe03: Push((int) 537439)
0xe04: Push((int) 39286)
0xe05: Push((int) 39285)
0xe06: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe07: Pop(3)
0xe08: Push((int) 537442)
0xe09: Push((int) 39289)
0xe0a: Push((int) 39288)
0xe0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0c: Pop(3)
0xe0d: Return(); Pop(0)

0xe0e: Push((int) 39289)
0xe0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe10: IF (Stack[-1] == 0) GOTO 0xe20; Pop(1)

0xe11: PushEmpty(string)
0xe12: Stack[-1] = "Neutral"
0xe13: Call2 0x98f

0xe14: Pop(1)
0xe15: Push((int) 537443)
0xe16: @@ SetMessage(Stack[-1])
0xe17: Pop(1)
0xe18: @@ ClearReplies()
0xe19: Pop(0)
0xe1a: Push((int) 537444)
0xe1b: Push((int) 39291)
0xe1c: Push((int) 39290)
0xe1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1e: Pop(3)
0xe1f: Return(); Pop(0)

0xe20: Push((int) 39291)
0xe21: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe22: IF (Stack[-1] == 0) GOTO 0xe32; Pop(1)

0xe23: PushEmpty(string)
0xe24: Stack[-1] = "Neutral"
0xe25: Call2 0x98f

0xe26: Pop(1)
0xe27: Push((int) 537445)
0xe28: @@ SetMessage(Stack[-1])
0xe29: Pop(1)
0xe2a: @@ ClearReplies()
0xe2b: Pop(0)
0xe2c: Push((int) 537446)
0xe2d: Push((int) -1)
0xe2e: Push((int) 39292)
0xe2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe30: Pop(3)
0xe31: Return(); Pop(0)

0xe32: Push((int) 39286)
0xe33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe34: IF (Stack[-1] == 0) GOTO 0xe44; Pop(1)

0xe35: PushEmpty(string)
0xe36: Stack[-1] = "Neutral"
0xe37: Call2 0x98f

0xe38: Pop(1)
0xe39: Push((int) 537440)
0xe3a: @@ SetMessage(Stack[-1])
0xe3b: Pop(1)
0xe3c: @@ ClearReplies()
0xe3d: Pop(0)
0xe3e: Push((int) 537441)
0xe3f: Push((int) -1)
0xe40: Push((int) 39287)
0xe41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe42: Pop(3)
0xe43: Return(); Pop(0)

0xe44: Push((int) 39270)
0xe45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe46: IF (Stack[-1] == 0) GOTO 0xe5b; Pop(1)

0xe47: PushEmpty(string)
0xe48: Stack[-1] = "Neutral"
0xe49: Call2 0x98f

0xe4a: Pop(1)
0xe4b: Push((int) 537424)
0xe4c: @@ SetMessage(Stack[-1])
0xe4d: Pop(1)
0xe4e: @@ ClearReplies()
0xe4f: Pop(0)
0xe50: Push((int) 537425)
0xe51: Push((int) 39272)
0xe52: Push((int) 39271)
0xe53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe54: Pop(3)
0xe55: Push((int) 537432)
0xe56: Push((int) -1)
0xe57: Push((int) 39278)
0xe58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe59: Pop(3)
0xe5a: Return(); Pop(0)

0xe5b: Push((int) 39272)
0xe5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe5d: IF (Stack[-1] == 0) GOTO 0xe72; Pop(1)

0xe5e: PushEmpty(string)
0xe5f: Stack[-1] = "Neutral"
0xe60: Call2 0x98f

0xe61: Pop(1)
0xe62: Push((int) 537426)
0xe63: @@ SetMessage(Stack[-1])
0xe64: Pop(1)
0xe65: @@ ClearReplies()
0xe66: Pop(0)
0xe67: Push((int) 537427)
0xe68: Push((int) 39274)
0xe69: Push((int) 39273)
0xe6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe6b: Pop(3)
0xe6c: Push((int) 537431)
0xe6d: Push((int) -1)
0xe6e: Push((int) 39277)
0xe6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe70: Pop(3)
0xe71: Return(); Pop(0)

0xe72: Push((int) 39274)
0xe73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe74: IF (Stack[-1] == 0) GOTO 0xe89; Pop(1)

0xe75: PushEmpty(string)
0xe76: Stack[-1] = "Neutral"
0xe77: Call2 0x98f

0xe78: Pop(1)
0xe79: Push((int) 537428)
0xe7a: @@ SetMessage(Stack[-1])
0xe7b: Pop(1)
0xe7c: @@ ClearReplies()
0xe7d: Pop(0)
0xe7e: Push((int) 537429)
0xe7f: Push((int) -1)
0xe80: Push((int) 39275)
0xe81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe82: Pop(3)
0xe83: Push((int) 537430)
0xe84: Push((int) -1)
0xe85: Push((int) 39276)
0xe86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe87: Pop(3)
0xe88: Return(); Pop(0)

0xe89: Push((int) 39247)
0xe8a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe8b: IF (Stack[-1] == 0) GOTO 0xeaa; Pop(1)

0xe8c: PushEmpty(string)
0xe8d: Stack[-1] = "Neutral"
0xe8e: Call2 0x98f

0xe8f: Pop(1)
0xe90: Push((int) 537401)
0xe91: @@ SetMessage(Stack[-1])
0xe92: Pop(1)
0xe93: @@ ClearReplies()
0xe94: Pop(0)
0xe95: Push((int) 537402)
0xe96: Push((int) 39249)
0xe97: Push((int) 39248)
0xe98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe99: Pop(3)
0xe9a: PushEmpty(bool, object)
0xe9b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe9c: Call2 0x17fe

0xe9d: Pop(1)
0xe9e: IF (Stack[-1] == 0) GOTO 0xea4; Pop(1)

0xe9f: Push((int) 537418)
0xea0: Push((int) 39265)
0xea1: Push((int) 39264)
0xea2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea3: Pop(3)
0xea4: Push((int) 537422)
0xea5: Push((int) -1)
0xea6: Push((int) 39268)
0xea7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea8: Pop(3)
0xea9: Return(); Pop(0)

0xeaa: Push((int) 39265)
0xeab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeac: IF (Stack[-1] == 0) GOTO 0xec1; Pop(1)

0xead: PushEmpty(string)
0xeae: Stack[-1] = "Neutral"
0xeaf: Call2 0x98f

0xeb0: Pop(1)
0xeb1: Push((int) 537419)
0xeb2: @@ SetMessage(Stack[-1])
0xeb3: Pop(1)
0xeb4: @@ ClearReplies()
0xeb5: Pop(0)
0xeb6: Push((int) 537420)
0xeb7: Push((int) -1)
0xeb8: Push((int) 39266)
0xeb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeba: Pop(3)
0xebb: Push((int) 537421)
0xebc: Push((int) -1)
0xebd: Push((int) 39267)
0xebe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xebf: Pop(3)
0xec0: Return(); Pop(0)

0xec1: Push((int) 39249)
0xec2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec3: IF (Stack[-1] == 0) GOTO 0xed8; Pop(1)

0xec4: PushEmpty(string)
0xec5: Stack[-1] = "Neutral"
0xec6: Call2 0x98f

0xec7: Pop(1)
0xec8: Push((int) 537403)
0xec9: @@ SetMessage(Stack[-1])
0xeca: Pop(1)
0xecb: @@ ClearReplies()
0xecc: Pop(0)
0xecd: Push((int) 537404)
0xece: Push((int) 39251)
0xecf: Push((int) 39250)
0xed0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed1: Pop(3)
0xed2: Push((int) 537417)
0xed3: Push((int) -1)
0xed4: Push((int) 39263)
0xed5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed6: Pop(3)
0xed7: Return(); Pop(0)

0xed8: Push((int) 39251)
0xed9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeda: IF (Stack[-1] == 0) GOTO 0xef4; Pop(1)

0xedb: PushEmpty(string)
0xedc: Stack[-1] = "Neutral"
0xedd: Call2 0x98f

0xede: Pop(1)
0xedf: Push((int) 537405)
0xee0: @@ SetMessage(Stack[-1])
0xee1: Pop(1)
0xee2: @@ ClearReplies()
0xee3: Pop(0)
0xee4: Push((int) 537406)
0xee5: Push((int) 39253)
0xee6: Push((int) 39252)
0xee7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee8: Pop(3)
0xee9: PushEmpty(bool, object)
0xeea: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xeeb: Call2 0x17fe

0xeec: Pop(1)
0xeed: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xeee: Push((int) 537416)
0xeef: Push((int) -1)
0xef0: Push((int) 39262)
0xef1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef2: Pop(3)
0xef3: Return(); Pop(0)

0xef4: Push((int) 39253)
0xef5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xef6: IF (Stack[-1] == 0) GOTO 0xf0b; Pop(1)

0xef7: PushEmpty(string)
0xef8: Stack[-1] = "Neutral"
0xef9: Call2 0x98f

0xefa: Pop(1)
0xefb: Push((int) 537407)
0xefc: @@ SetMessage(Stack[-1])
0xefd: Pop(1)
0xefe: @@ ClearReplies()
0xeff: Pop(0)
0xf00: Push((int) 537408)
0xf01: Push((int) 39255)
0xf02: Push((int) 39254)
0xf03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf04: Pop(3)
0xf05: Push((int) 537415)
0xf06: Push((int) -1)
0xf07: Push((int) 39261)
0xf08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf09: Pop(3)
0xf0a: Return(); Pop(0)

0xf0b: Push((int) 39255)
0xf0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf0d: IF (Stack[-1] == 0) GOTO 0xf22; Pop(1)

0xf0e: PushEmpty(string)
0xf0f: Stack[-1] = "Neutral"
0xf10: Call2 0x98f

0xf11: Pop(1)
0xf12: Push((int) 537409)
0xf13: @@ SetMessage(Stack[-1])
0xf14: Pop(1)
0xf15: @@ ClearReplies()
0xf16: Pop(0)
0xf17: Push((int) 537410)
0xf18: Push((int) 39257)
0xf19: Push((int) 39256)
0xf1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf1b: Pop(3)
0xf1c: Push((int) 537414)
0xf1d: Push((int) -1)
0xf1e: Push((int) 39260)
0xf1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf20: Pop(3)
0xf21: Return(); Pop(0)

0xf22: Push((int) 39257)
0xf23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf24: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf25: PushEmpty(string)
0xf26: Stack[-1] = "Neutral"
0xf27: Call2 0x98f

0xf28: Pop(1)
0xf29: Push((int) 537411)
0xf2a: @@ SetMessage(Stack[-1])
0xf2b: Pop(1)
0xf2c: @@ ClearReplies()
0xf2d: Pop(0)
0xf2e: Push((int) 537412)
0xf2f: Push((int) -1)
0xf30: Push((int) 39258)
0xf31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf32: Pop(3)
0xf33: Push((int) 537413)
0xf34: Push((int) -1)
0xf35: Push((int) 39259)
0xf36: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf37: Pop(3)
0xf38: Return(); Pop(0)

0xf39: Push((int) 39237)
0xf3a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf3b: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf3c: PushEmpty(string)
0xf3d: Stack[-1] = "Neutral"
0xf3e: Call2 0x98f

0xf3f: Pop(1)
0xf40: Push((int) 537391)
0xf41: @@ SetMessage(Stack[-1])
0xf42: Pop(1)
0xf43: @@ ClearReplies()
0xf44: Pop(0)
0xf45: Push((int) 537392)
0xf46: Push((int) 39239)
0xf47: Push((int) 39238)
0xf48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf49: Pop(3)
0xf4a: Push((int) 537397)
0xf4b: Push((int) 39244)
0xf4c: Push((int) 39243)
0xf4d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf4e: Pop(3)
0xf4f: Return(); Pop(0)

0xf50: Push((int) 39244)
0xf51: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf52: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf53: PushEmpty(string)
0xf54: Stack[-1] = "Neutral"
0xf55: Call2 0x98f

0xf56: Pop(1)
0xf57: Push((int) 537398)
0xf58: @@ SetMessage(Stack[-1])
0xf59: Pop(1)
0xf5a: @@ ClearReplies()
0xf5b: Pop(0)
0xf5c: Push((int) 537399)
0xf5d: Push((int) -1)
0xf5e: Push((int) 39245)
0xf5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf60: Pop(3)
0xf61: Return(); Pop(0)

0xf62: Push((int) 39239)
0xf63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf64: IF (Stack[-1] == 0) GOTO 0xf74; Pop(1)

0xf65: PushEmpty(string)
0xf66: Stack[-1] = "Neutral"
0xf67: Call2 0x98f

0xf68: Pop(1)
0xf69: Push((int) 537393)
0xf6a: @@ SetMessage(Stack[-1])
0xf6b: Pop(1)
0xf6c: @@ ClearReplies()
0xf6d: Pop(0)
0xf6e: Push((int) 537394)
0xf6f: Push((int) 39241)
0xf70: Push((int) 39240)
0xf71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf72: Pop(3)
0xf73: Return(); Pop(0)

0xf74: Push((int) 39241)
0xf75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf76: IF (Stack[-1] == 0) GOTO 0xf86; Pop(1)

0xf77: PushEmpty(string)
0xf78: Stack[-1] = "Neutral"
0xf79: Call2 0x98f

0xf7a: Pop(1)
0xf7b: Push((int) 537395)
0xf7c: @@ SetMessage(Stack[-1])
0xf7d: Pop(1)
0xf7e: @@ ClearReplies()
0xf7f: Pop(0)
0xf80: Push((int) 537396)
0xf81: Push((int) -1)
0xf82: Push((int) 39242)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: Return(); Pop(0)

0xf86: Push((int) 39227)
0xf87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xfa2; Pop(1)

0xf89: PushEmpty(string)
0xf8a: Stack[-1] = "Neutral"
0xf8b: Call2 0x98f

0xf8c: Pop(1)
0xf8d: Push((int) 537381)
0xf8e: @@ SetMessage(Stack[-1])
0xf8f: Pop(1)
0xf90: @@ ClearReplies()
0xf91: Pop(0)
0xf92: Push((int) 537382)
0xf93: Push((int) 39229)
0xf94: Push((int) 39228)
0xf95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: Push((int) 537386)
0xf98: Push((int) 39233)
0xf99: Push((int) 39232)
0xf9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9b: Pop(3)
0xf9c: Push((int) 537389)
0xf9d: Push((int) -1)
0xf9e: Push((int) 39235)
0xf9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa0: Pop(3)
0xfa1: Return(); Pop(0)

0xfa2: Push((int) 39233)
0xfa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfa4: IF (Stack[-1] == 0) GOTO 0xfb4; Pop(1)

0xfa5: PushEmpty(string)
0xfa6: Stack[-1] = "Neutral"
0xfa7: Call2 0x98f

0xfa8: Pop(1)
0xfa9: Push((int) 537387)
0xfaa: @@ SetMessage(Stack[-1])
0xfab: Pop(1)
0xfac: @@ ClearReplies()
0xfad: Pop(0)
0xfae: Push((int) 537388)
0xfaf: Push((int) -1)
0xfb0: Push((int) 39234)
0xfb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb2: Pop(3)
0xfb3: Return(); Pop(0)

0xfb4: Push((int) 39229)
0xfb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfb6: IF (Stack[-1] == 0) GOTO 0xfcb; Pop(1)

0xfb7: PushEmpty(string)
0xfb8: Stack[-1] = "Neutral"
0xfb9: Call2 0x98f

0xfba: Pop(1)
0xfbb: Push((int) 537383)
0xfbc: @@ SetMessage(Stack[-1])
0xfbd: Pop(1)
0xfbe: @@ ClearReplies()
0xfbf: Pop(0)
0xfc0: Push((int) 537384)
0xfc1: Push((int) -1)
0xfc2: Push((int) 39230)
0xfc3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc4: Pop(3)
0xfc5: Push((int) 537385)
0xfc6: Push((int) -1)
0xfc7: Push((int) 39231)
0xfc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc9: Pop(3)
0xfca: Return(); Pop(0)

0xfcb: Push((int) 39206)
0xfcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfcd: IF (Stack[-1] == 0) GOTO 0xfe7; Pop(1)

0xfce: PushEmpty(string)
0xfcf: Stack[-1] = "Neutral"
0xfd0: Call2 0x98f

0xfd1: Pop(1)
0xfd2: Push((int) 537360)
0xfd3: @@ SetMessage(Stack[-1])
0xfd4: Pop(1)
0xfd5: @@ ClearReplies()
0xfd6: Pop(0)
0xfd7: Push((int) 537361)
0xfd8: Push((int) 39208)
0xfd9: Push((int) 39207)
0xfda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfdb: Pop(3)
0xfdc: Push((int) 537376)
0xfdd: Push((int) 39223)
0xfde: Push((int) 39222)
0xfdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe0: Pop(3)
0xfe1: Push((int) 537379)
0xfe2: Push((int) -1)
0xfe3: Push((int) 39225)
0xfe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe5: Pop(3)
0xfe6: Return(); Pop(0)

0xfe7: Push((int) 39223)
0xfe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfe9: IF (Stack[-1] == 0) GOTO 0xff9; Pop(1)

0xfea: PushEmpty(string)
0xfeb: Stack[-1] = "Neutral"
0xfec: Call2 0x98f

0xfed: Pop(1)
0xfee: Push((int) 537377)
0xfef: @@ SetMessage(Stack[-1])
0xff0: Pop(1)
0xff1: @@ ClearReplies()
0xff2: Pop(0)
0xff3: Push((int) 537378)
0xff4: Push((int) -1)
0xff5: Push((int) 39224)
0xff6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff7: Pop(3)
0xff8: Return(); Pop(0)

0xff9: Push((int) 39208)
0xffa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xffb: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0xffc: PushEmpty(string)
0xffd: Stack[-1] = "Neutral"
0xffe: Call2 0x98f

0xfff: Pop(1)
0x1000: Push((int) 537362)
0x1001: @@ SetMessage(Stack[-1])
0x1002: Pop(1)
0x1003: @@ ClearReplies()
0x1004: Pop(0)
0x1005: Push((int) 537363)
0x1006: Push((int) 39210)
0x1007: Push((int) 39209)
0x1008: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1009: Pop(3)
0x100a: Push((int) 537369)
0x100b: Push((int) 39216)
0x100c: Push((int) 39215)
0x100d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100e: Pop(3)
0x100f: Return(); Pop(0)

0x1010: Push((int) 39216)
0x1011: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1012: IF (Stack[-1] == 0) GOTO 0x1027; Pop(1)

0x1013: PushEmpty(string)
0x1014: Stack[-1] = "Neutral"
0x1015: Call2 0x98f

0x1016: Pop(1)
0x1017: Push((int) 537370)
0x1018: @@ SetMessage(Stack[-1])
0x1019: Pop(1)
0x101a: @@ ClearReplies()
0x101b: Pop(0)
0x101c: Push((int) 537371)
0x101d: Push((int) 39218)
0x101e: Push((int) 39217)
0x101f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1020: Pop(3)
0x1021: Push((int) 537375)
0x1022: Push((int) -1)
0x1023: Push((int) 39221)
0x1024: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1025: Pop(3)
0x1026: Return(); Pop(0)

0x1027: Push((int) 39218)
0x1028: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1029: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x102a: PushEmpty(string)
0x102b: Stack[-1] = "Neutral"
0x102c: Call2 0x98f

0x102d: Pop(1)
0x102e: Push((int) 537372)
0x102f: @@ SetMessage(Stack[-1])
0x1030: Pop(1)
0x1031: @@ ClearReplies()
0x1032: Pop(0)
0x1033: Push((int) 537373)
0x1034: Push((int) -1)
0x1035: Push((int) 39219)
0x1036: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1037: Pop(3)
0x1038: Push((int) 537374)
0x1039: Push((int) -1)
0x103a: Push((int) 39220)
0x103b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103c: Pop(3)
0x103d: Return(); Pop(0)

0x103e: Push((int) 39210)
0x103f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1040: IF (Stack[-1] == 0) GOTO 0x1050; Pop(1)

0x1041: PushEmpty(string)
0x1042: Stack[-1] = "Neutral"
0x1043: Call2 0x98f

0x1044: Pop(1)
0x1045: Push((int) 537364)
0x1046: @@ SetMessage(Stack[-1])
0x1047: Pop(1)
0x1048: @@ ClearReplies()
0x1049: Pop(0)
0x104a: Push((int) 537365)
0x104b: Push((int) 39212)
0x104c: Push((int) 39211)
0x104d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104e: Pop(3)
0x104f: Return(); Pop(0)

0x1050: Push((int) 39212)
0x1051: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1052: IF (Stack[-1] == 0) GOTO 0x1067; Pop(1)

0x1053: PushEmpty(string)
0x1054: Stack[-1] = "Neutral"
0x1055: Call2 0x98f

0x1056: Pop(1)
0x1057: Push((int) 537366)
0x1058: @@ SetMessage(Stack[-1])
0x1059: Pop(1)
0x105a: @@ ClearReplies()
0x105b: Pop(0)
0x105c: Push((int) 537367)
0x105d: Push((int) -1)
0x105e: Push((int) 39213)
0x105f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1060: Pop(3)
0x1061: Push((int) 537368)
0x1062: Push((int) -1)
0x1063: Push((int) 39214)
0x1064: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1065: Pop(3)
0x1066: Return(); Pop(0)

0x1067: Push((int) 39199)
0x1068: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1069: IF (Stack[-1] == 0) GOTO 0x107e; Pop(1)

0x106a: PushEmpty(string)
0x106b: Stack[-1] = "Neutral"
0x106c: Call2 0x98f

0x106d: Pop(1)
0x106e: Push((int) 537353)
0x106f: @@ SetMessage(Stack[-1])
0x1070: Pop(1)
0x1071: @@ ClearReplies()
0x1072: Pop(0)
0x1073: Push((int) 537354)
0x1074: Push((int) 39201)
0x1075: Push((int) 39200)
0x1076: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1077: Pop(3)
0x1078: Push((int) 537358)
0x1079: Push((int) -1)
0x107a: Push((int) 39204)
0x107b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x107c: Pop(3)
0x107d: Return(); Pop(0)

0x107e: Push((int) 39201)
0x107f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1080: IF (Stack[-1] == 0) GOTO 0x1095; Pop(1)

0x1081: PushEmpty(string)
0x1082: Stack[-1] = "Neutral"
0x1083: Call2 0x98f

0x1084: Pop(1)
0x1085: Push((int) 537355)
0x1086: @@ SetMessage(Stack[-1])
0x1087: Pop(1)
0x1088: @@ ClearReplies()
0x1089: Pop(0)
0x108a: Push((int) 537356)
0x108b: Push((int) -1)
0x108c: Push((int) 39202)
0x108d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108e: Pop(3)
0x108f: Push((int) 537357)
0x1090: Push((int) -1)
0x1091: Push((int) 39203)
0x1092: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1093: Pop(3)
0x1094: Return(); Pop(0)

0x1095: Push((int) 39176)
0x1096: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1097: IF (Stack[-1] == 0) GOTO 0x10b1; Pop(1)

0x1098: PushEmpty(string)
0x1099: Stack[-1] = "Neutral"
0x109a: Call2 0x98f

0x109b: Pop(1)
0x109c: Push((int) 537330)
0x109d: @@ SetMessage(Stack[-1])
0x109e: Pop(1)
0x109f: @@ ClearReplies()
0x10a0: Pop(0)
0x10a1: Push((int) 537331)
0x10a2: Push((int) 39178)
0x10a3: Push((int) 39177)
0x10a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a5: Pop(3)
0x10a6: Push((int) 537341)
0x10a7: Push((int) 39188)
0x10a8: Push((int) 39187)
0x10a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10aa: Pop(3)
0x10ab: Push((int) 537351)
0x10ac: Push((int) -1)
0x10ad: Push((int) 39197)
0x10ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10af: Pop(3)
0x10b0: Return(); Pop(0)

0x10b1: Push((int) 39188)
0x10b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10b3: IF (Stack[-1] == 0) GOTO 0x10c8; Pop(1)

0x10b4: PushEmpty(string)
0x10b5: Stack[-1] = "Neutral"
0x10b6: Call2 0x98f

0x10b7: Pop(1)
0x10b8: Push((int) 537342)
0x10b9: @@ SetMessage(Stack[-1])
0x10ba: Pop(1)
0x10bb: @@ ClearReplies()
0x10bc: Pop(0)
0x10bd: Push((int) 537343)
0x10be: Push((int) 39190)
0x10bf: Push((int) 39189)
0x10c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c1: Pop(3)
0x10c2: Push((int) 537349)
0x10c3: Push((int) -1)
0x10c4: Push((int) 39195)
0x10c5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10c6: Pop(3)
0x10c7: Return(); Pop(0)

0x10c8: Push((int) 39190)
0x10c9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10ca: IF (Stack[-1] == 0) GOTO 0x10df; Pop(1)

0x10cb: PushEmpty(string)
0x10cc: Stack[-1] = "Neutral"
0x10cd: Call2 0x98f

0x10ce: Pop(1)
0x10cf: Push((int) 537344)
0x10d0: @@ SetMessage(Stack[-1])
0x10d1: Pop(1)
0x10d2: @@ ClearReplies()
0x10d3: Pop(0)
0x10d4: Push((int) 537345)
0x10d5: Push((int) 39192)
0x10d6: Push((int) 39191)
0x10d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10d8: Pop(3)
0x10d9: Push((int) 537348)
0x10da: Push((int) -1)
0x10db: Push((int) 39194)
0x10dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10dd: Pop(3)
0x10de: Return(); Pop(0)

0x10df: Push((int) 39192)
0x10e0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10e1: IF (Stack[-1] == 0) GOTO 0x10f1; Pop(1)

0x10e2: PushEmpty(string)
0x10e3: Stack[-1] = "Neutral"
0x10e4: Call2 0x98f

0x10e5: Pop(1)
0x10e6: Push((int) 537346)
0x10e7: @@ SetMessage(Stack[-1])
0x10e8: Pop(1)
0x10e9: @@ ClearReplies()
0x10ea: Pop(0)
0x10eb: Push((int) 537347)
0x10ec: Push((int) -1)
0x10ed: Push((int) 39193)
0x10ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10ef: Pop(3)
0x10f0: Return(); Pop(0)

0x10f1: Push((int) 39178)
0x10f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10f3: IF (Stack[-1] == 0) GOTO 0x1108; Pop(1)

0x10f4: PushEmpty(string)
0x10f5: Stack[-1] = "Neutral"
0x10f6: Call2 0x98f

0x10f7: Pop(1)
0x10f8: Push((int) 537332)
0x10f9: @@ SetMessage(Stack[-1])
0x10fa: Pop(1)
0x10fb: @@ ClearReplies()
0x10fc: Pop(0)
0x10fd: Push((int) 537333)
0x10fe: Push((int) 39180)
0x10ff: Push((int) 39179)
0x1100: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1101: Pop(3)
0x1102: Push((int) 537336)
0x1103: Push((int) 39183)
0x1104: Push((int) 39182)
0x1105: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1106: Pop(3)
0x1107: Return(); Pop(0)

0x1108: Push((int) 39183)
0x1109: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x110a: IF (Stack[-1] == 0) GOTO 0x111a; Pop(1)

0x110b: PushEmpty(string)
0x110c: Stack[-1] = "Neutral"
0x110d: Call2 0x98f

0x110e: Pop(1)
0x110f: Push((int) 537337)
0x1110: @@ SetMessage(Stack[-1])
0x1111: Pop(1)
0x1112: @@ ClearReplies()
0x1113: Pop(0)
0x1114: Push((int) 537338)
0x1115: Push((int) 39185)
0x1116: Push((int) 39184)
0x1117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1118: Pop(3)
0x1119: Return(); Pop(0)

0x111a: Push((int) 39185)
0x111b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x111c: IF (Stack[-1] == 0) GOTO 0x112c; Pop(1)

0x111d: PushEmpty(string)
0x111e: Stack[-1] = "Neutral"
0x111f: Call2 0x98f

0x1120: Pop(1)
0x1121: Push((int) 537339)
0x1122: @@ SetMessage(Stack[-1])
0x1123: Pop(1)
0x1124: @@ ClearReplies()
0x1125: Pop(0)
0x1126: Push((int) 537340)
0x1127: Push((int) 43752)
0x1128: Push((int) 39186)
0x1129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112a: Pop(3)
0x112b: Return(); Pop(0)

0x112c: Push((int) 43752)
0x112d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x112e: IF (Stack[-1] == 0) GOTO 0x113e; Pop(1)

0x112f: PushEmpty(string)
0x1130: Stack[-1] = "Neutral"
0x1131: Call2 0x98f

0x1132: Pop(1)
0x1133: Push((int) 541583)
0x1134: @@ SetMessage(Stack[-1])
0x1135: Pop(1)
0x1136: @@ ClearReplies()
0x1137: Pop(0)
0x1138: Push((int) 541584)
0x1139: Push((int) -1)
0x113a: Push((int) 43753)
0x113b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113c: Pop(3)
0x113d: Return(); Pop(0)

0x113e: Push((int) 39180)
0x113f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1140: IF (Stack[-1] == 0) GOTO 0x1150; Pop(1)

0x1141: PushEmpty(string)
0x1142: Stack[-1] = "Neutral"
0x1143: Call2 0x98f

0x1144: Pop(1)
0x1145: Push((int) 537334)
0x1146: @@ SetMessage(Stack[-1])
0x1147: Pop(1)
0x1148: @@ ClearReplies()
0x1149: Pop(0)
0x114a: Push((int) 537335)
0x114b: Push((int) -1)
0x114c: Push((int) 39181)
0x114d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x114e: Pop(3)
0x114f: Return(); Pop(0)

0x1150: Push((int) 39122)
0x1151: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1152: IF (Stack[-1] == 0) GOTO 0x1180; Pop(1)

0x1153: PushEmpty(string)
0x1154: Stack[-1] = "Neutral"
0x1155: Call2 0x98f

0x1156: Pop(1)
0x1157: Push((int) 537278)
0x1158: @@ SetMessage(Stack[-1])
0x1159: Pop(1)
0x115a: @@ ClearReplies()
0x115b: Pop(0)
0x115c: Push((int) 537279)
0x115d: Push((int) 39124)
0x115e: Push((int) 39123)
0x115f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1160: Pop(3)
0x1161: Push((int) 537292)
0x1162: Push((int) 39124)
0x1163: Push((int) 39137)
0x1164: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1165: Pop(3)
0x1166: PushEmpty(bool, object)
0x1167: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1168: Call2 0x17fe

0x1169: Pop(1)
0x116a: IF (Stack[-1] == 0) GOTO 0x1170; Pop(1)

0x116b: Push((int) 537293)
0x116c: Push((int) 39140)
0x116d: Push((int) 39139)
0x116e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116f: Pop(3)
0x1170: PushEmpty(bool, object)
0x1171: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1172: Call2 0x17fe

0x1173: Pop(1)
0x1174: IF (Stack[-1] == 0) GOTO 0x117a; Pop(1)

0x1175: Push((int) 537304)
0x1176: Push((int) 39151)
0x1177: Push((int) 39150)
0x1178: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1179: Pop(3)
0x117a: Push((int) 537328)
0x117b: Push((int) -1)
0x117c: Push((int) 39174)
0x117d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x117e: Pop(3)
0x117f: Return(); Pop(0)

0x1180: Push((int) 39151)
0x1181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1182: IF (Stack[-1] == 0) GOTO 0x1197; Pop(1)

0x1183: PushEmpty(string)
0x1184: Stack[-1] = "Neutral"
0x1185: Call2 0x98f

0x1186: Pop(1)
0x1187: Push((int) 537305)
0x1188: @@ SetMessage(Stack[-1])
0x1189: Pop(1)
0x118a: @@ ClearReplies()
0x118b: Pop(0)
0x118c: Push((int) 537306)
0x118d: Push((int) 39153)
0x118e: Push((int) 39152)
0x118f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1190: Pop(3)
0x1191: Push((int) 537318)
0x1192: Push((int) 39165)
0x1193: Push((int) 39164)
0x1194: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1195: Pop(3)
0x1196: Return(); Pop(0)

0x1197: Push((int) 39165)
0x1198: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1199: IF (Stack[-1] == 0) GOTO 0x11ae; Pop(1)

0x119a: PushEmpty(string)
0x119b: Stack[-1] = "Neutral"
0x119c: Call2 0x98f

0x119d: Pop(1)
0x119e: Push((int) 537319)
0x119f: @@ SetMessage(Stack[-1])
0x11a0: Pop(1)
0x11a1: @@ ClearReplies()
0x11a2: Pop(0)
0x11a3: Push((int) 537320)
0x11a4: Push((int) -1)
0x11a5: Push((int) 39166)
0x11a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a7: Pop(3)
0x11a8: Push((int) 537321)
0x11a9: Push((int) 39168)
0x11aa: Push((int) 39167)
0x11ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ac: Pop(3)
0x11ad: Return(); Pop(0)

0x11ae: Push((int) 39168)
0x11af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11b0: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11b1: PushEmpty(string)
0x11b2: Stack[-1] = "Neutral"
0x11b3: Call2 0x98f

0x11b4: Pop(1)
0x11b5: Push((int) 537322)
0x11b6: @@ SetMessage(Stack[-1])
0x11b7: Pop(1)
0x11b8: @@ ClearReplies()
0x11b9: Pop(0)
0x11ba: Push((int) 537323)
0x11bb: Push((int) -1)
0x11bc: Push((int) 39169)
0x11bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11be: Pop(3)
0x11bf: Push((int) 537324)
0x11c0: Push((int) 39171)
0x11c1: Push((int) 39170)
0x11c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11c3: Pop(3)
0x11c4: Return(); Pop(0)

0x11c5: Push((int) 39171)
0x11c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c7: IF (Stack[-1] == 0) GOTO 0x11d7; Pop(1)

0x11c8: PushEmpty(string)
0x11c9: Stack[-1] = "Neutral"
0x11ca: Call2 0x98f

0x11cb: Pop(1)
0x11cc: Push((int) 537325)
0x11cd: @@ SetMessage(Stack[-1])
0x11ce: Pop(1)
0x11cf: @@ ClearReplies()
0x11d0: Pop(0)
0x11d1: Push((int) 537326)
0x11d2: Push((int) -1)
0x11d3: Push((int) 39172)
0x11d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11d5: Pop(3)
0x11d6: Return(); Pop(0)

0x11d7: Push((int) 39153)
0x11d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11d9: IF (Stack[-1] == 0) GOTO 0x11ee; Pop(1)

0x11da: PushEmpty(string)
0x11db: Stack[-1] = "Neutral"
0x11dc: Call2 0x98f

0x11dd: Pop(1)
0x11de: Push((int) 537307)
0x11df: @@ SetMessage(Stack[-1])
0x11e0: Pop(1)
0x11e1: @@ ClearReplies()
0x11e2: Pop(0)
0x11e3: Push((int) 537308)
0x11e4: Push((int) 39155)
0x11e5: Push((int) 39154)
0x11e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11e7: Pop(3)
0x11e8: Push((int) 537317)
0x11e9: Push((int) -1)
0x11ea: Push((int) 39163)
0x11eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11ec: Pop(3)
0x11ed: Return(); Pop(0)

0x11ee: Push((int) 39155)
0x11ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f0: IF (Stack[-1] == 0) GOTO 0x1205; Pop(1)

0x11f1: PushEmpty(string)
0x11f2: Stack[-1] = "Neutral"
0x11f3: Call2 0x98f

0x11f4: Pop(1)
0x11f5: Push((int) 537309)
0x11f6: @@ SetMessage(Stack[-1])
0x11f7: Pop(1)
0x11f8: @@ ClearReplies()
0x11f9: Pop(0)
0x11fa: Push((int) 537310)
0x11fb: Push((int) 39157)
0x11fc: Push((int) 39156)
0x11fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11fe: Pop(3)
0x11ff: Push((int) 537313)
0x1200: Push((int) 39160)
0x1201: Push((int) 39159)
0x1202: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1203: Pop(3)
0x1204: Return(); Pop(0)

0x1205: Push((int) 39160)
0x1206: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1207: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1208: PushEmpty(string)
0x1209: Stack[-1] = "Neutral"
0x120a: Call2 0x98f

0x120b: Pop(1)
0x120c: Push((int) 537314)
0x120d: @@ SetMessage(Stack[-1])
0x120e: Pop(1)
0x120f: @@ ClearReplies()
0x1210: Pop(0)
0x1211: Push((int) 537315)
0x1212: Push((int) -1)
0x1213: Push((int) 39161)
0x1214: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1215: Pop(3)
0x1216: Push((int) 537316)
0x1217: Push((int) -1)
0x1218: Push((int) 39162)
0x1219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121a: Pop(3)
0x121b: Return(); Pop(0)

0x121c: Push((int) 39157)
0x121d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x121e: IF (Stack[-1] == 0) GOTO 0x122e; Pop(1)

0x121f: PushEmpty(string)
0x1220: Stack[-1] = "Neutral"
0x1221: Call2 0x98f

0x1222: Pop(1)
0x1223: Push((int) 537311)
0x1224: @@ SetMessage(Stack[-1])
0x1225: Pop(1)
0x1226: @@ ClearReplies()
0x1227: Pop(0)
0x1228: Push((int) 537312)
0x1229: Push((int) -1)
0x122a: Push((int) 39158)
0x122b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x122c: Pop(3)
0x122d: Return(); Pop(0)

0x122e: Push((int) 39140)
0x122f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1230: IF (Stack[-1] == 0) GOTO 0x1245; Pop(1)

0x1231: PushEmpty(string)
0x1232: Stack[-1] = "Neutral"
0x1233: Call2 0x98f

0x1234: Pop(1)
0x1235: Push((int) 537294)
0x1236: @@ SetMessage(Stack[-1])
0x1237: Pop(1)
0x1238: @@ ClearReplies()
0x1239: Pop(0)
0x123a: Push((int) 537295)
0x123b: Push((int) 39142)
0x123c: Push((int) 39141)
0x123d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x123e: Pop(3)
0x123f: Push((int) 537301)
0x1240: Push((int) 39148)
0x1241: Push((int) 39147)
0x1242: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1243: Pop(3)
0x1244: Return(); Pop(0)

0x1245: Push((int) 39148)
0x1246: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1247: IF (Stack[-1] == 0) GOTO 0x1257; Pop(1)

0x1248: PushEmpty(string)
0x1249: Stack[-1] = "Neutral"
0x124a: Call2 0x98f

0x124b: Pop(1)
0x124c: Push((int) 537302)
0x124d: @@ SetMessage(Stack[-1])
0x124e: Pop(1)
0x124f: @@ ClearReplies()
0x1250: Pop(0)
0x1251: Push((int) 537303)
0x1252: Push((int) -1)
0x1253: Push((int) 39149)
0x1254: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1255: Pop(3)
0x1256: Return(); Pop(0)

0x1257: Push((int) 39142)
0x1258: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1259: IF (Stack[-1] == 0) GOTO 0x1269; Pop(1)

0x125a: PushEmpty(string)
0x125b: Stack[-1] = "Neutral"
0x125c: Call2 0x98f

0x125d: Pop(1)
0x125e: Push((int) 537296)
0x125f: @@ SetMessage(Stack[-1])
0x1260: Pop(1)
0x1261: @@ ClearReplies()
0x1262: Pop(0)
0x1263: Push((int) 537297)
0x1264: Push((int) 39144)
0x1265: Push((int) 39143)
0x1266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1267: Pop(3)
0x1268: Return(); Pop(0)

0x1269: Push((int) 39144)
0x126a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x126b: IF (Stack[-1] == 0) GOTO 0x1280; Pop(1)

0x126c: PushEmpty(string)
0x126d: Stack[-1] = "Neutral"
0x126e: Call2 0x98f

0x126f: Pop(1)
0x1270: Push((int) 537298)
0x1271: @@ SetMessage(Stack[-1])
0x1272: Pop(1)
0x1273: @@ ClearReplies()
0x1274: Pop(0)
0x1275: Push((int) 537299)
0x1276: Push((int) -1)
0x1277: Push((int) 39145)
0x1278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1279: Pop(3)
0x127a: Push((int) 537300)
0x127b: Push((int) -1)
0x127c: Push((int) 39146)
0x127d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x127e: Pop(3)
0x127f: Return(); Pop(0)

0x1280: Push((int) 39124)
0x1281: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1282: IF (Stack[-1] == 0) GOTO 0x1297; Pop(1)

0x1283: PushEmpty(string)
0x1284: Stack[-1] = "Neutral"
0x1285: Call2 0x98f

0x1286: Pop(1)
0x1287: Push((int) 537280)
0x1288: @@ SetMessage(Stack[-1])
0x1289: Pop(1)
0x128a: @@ ClearReplies()
0x128b: Pop(0)
0x128c: Push((int) 537281)
0x128d: Push((int) 39126)
0x128e: Push((int) 39125)
0x128f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1290: Pop(3)
0x1291: Push((int) 537288)
0x1292: Push((int) 39133)
0x1293: Push((int) 39132)
0x1294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1295: Pop(3)
0x1296: Return(); Pop(0)

0x1297: Push((int) 39133)
0x1298: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1299: IF (Stack[-1] == 0) GOTO 0x12ae; Pop(1)

0x129a: PushEmpty(string)
0x129b: Stack[-1] = "Neutral"
0x129c: Call2 0x98f

0x129d: Pop(1)
0x129e: Push((int) 537289)
0x129f: @@ SetMessage(Stack[-1])
0x12a0: Pop(1)
0x12a1: @@ ClearReplies()
0x12a2: Pop(0)
0x12a3: Push((int) 537290)
0x12a4: Push((int) 39126)
0x12a5: Push((int) 39134)
0x12a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a7: Pop(3)
0x12a8: Push((int) 537291)
0x12a9: Push((int) -1)
0x12aa: Push((int) 39136)
0x12ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ac: Pop(3)
0x12ad: Return(); Pop(0)

0x12ae: Push((int) 39126)
0x12af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12b0: IF (Stack[-1] == 0) GOTO 0x12c5; Pop(1)

0x12b1: PushEmpty(string)
0x12b2: Stack[-1] = "Neutral"
0x12b3: Call2 0x98f

0x12b4: Pop(1)
0x12b5: Push((int) 537282)
0x12b6: @@ SetMessage(Stack[-1])
0x12b7: Pop(1)
0x12b8: @@ ClearReplies()
0x12b9: Pop(0)
0x12ba: Push((int) 537283)
0x12bb: Push((int) 39128)
0x12bc: Push((int) 39127)
0x12bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12be: Pop(3)
0x12bf: Push((int) 537287)
0x12c0: Push((int) -1)
0x12c1: Push((int) 39131)
0x12c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c3: Pop(3)
0x12c4: Return(); Pop(0)

0x12c5: Push((int) 39128)
0x12c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12c7: IF (Stack[-1] == 0) GOTO 0x12dc; Pop(1)

0x12c8: PushEmpty(string)
0x12c9: Stack[-1] = "Neutral"
0x12ca: Call2 0x98f

0x12cb: Pop(1)
0x12cc: Push((int) 537284)
0x12cd: @@ SetMessage(Stack[-1])
0x12ce: Pop(1)
0x12cf: @@ ClearReplies()
0x12d0: Pop(0)
0x12d1: Push((int) 537285)
0x12d2: Push((int) -1)
0x12d3: Push((int) 39129)
0x12d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d5: Pop(3)
0x12d6: Push((int) 537286)
0x12d7: Push((int) -1)
0x12d8: Push((int) 39130)
0x12d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12da: Pop(3)
0x12db: Return(); Pop(0)

0x12dc: Push((int) 39086)
0x12dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12de: IF (Stack[-1] == 0) GOTO 0x1302; Pop(1)

0x12df: PushEmpty(string)
0x12e0: Stack[-1] = "Neutral"
0x12e1: Call2 0x98f

0x12e2: Pop(1)
0x12e3: Push((int) 537243)
0x12e4: @@ SetMessage(Stack[-1])
0x12e5: Pop(1)
0x12e6: @@ ClearReplies()
0x12e7: Pop(0)
0x12e8: Push((int) 537244)
0x12e9: Push((int) 39088)
0x12ea: Push((int) 39087)
0x12eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12ec: Pop(3)
0x12ed: Push((int) 537254)
0x12ee: Push((int) 39099)
0x12ef: Push((int) 39098)
0x12f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f1: Pop(3)
0x12f2: Push((int) 537264)
0x12f3: Push((int) 39109)
0x12f4: Push((int) 39108)
0x12f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f6: Pop(3)
0x12f7: Push((int) 537275)
0x12f8: Push((int) -1)
0x12f9: Push((int) 39119)
0x12fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12fb: Pop(3)
0x12fc: Push((int) 537276)
0x12fd: Push((int) -1)
0x12fe: Push((int) 39120)
0x12ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1300: Pop(3)
0x1301: Return(); Pop(0)

0x1302: Push((int) 39109)
0x1303: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1304: IF (Stack[-1] == 0) GOTO 0x1319; Pop(1)

0x1305: PushEmpty(string)
0x1306: Stack[-1] = "Neutral"
0x1307: Call2 0x98f

0x1308: Pop(1)
0x1309: Push((int) 537265)
0x130a: @@ SetMessage(Stack[-1])
0x130b: Pop(1)
0x130c: @@ ClearReplies()
0x130d: Pop(0)
0x130e: Push((int) 537266)
0x130f: Push((int) 44319)
0x1310: Push((int) 39110)
0x1311: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1312: Pop(3)
0x1313: Push((int) 537267)
0x1314: Push((int) 39112)
0x1315: Push((int) 39111)
0x1316: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1317: Pop(3)
0x1318: Return(); Pop(0)

0x1319: Push((int) 39112)
0x131a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x131b: IF (Stack[-1] == 0) GOTO 0x1330; Pop(1)

0x131c: PushEmpty(string)
0x131d: Stack[-1] = "Neutral"
0x131e: Call2 0x98f

0x131f: Pop(1)
0x1320: Push((int) 537268)
0x1321: @@ SetMessage(Stack[-1])
0x1322: Pop(1)
0x1323: @@ ClearReplies()
0x1324: Pop(0)
0x1325: Push((int) 537269)
0x1326: Push((int) 39114)
0x1327: Push((int) 39113)
0x1328: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1329: Pop(3)
0x132a: Push((int) 537273)
0x132b: Push((int) -1)
0x132c: Push((int) 39117)
0x132d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132e: Pop(3)
0x132f: Return(); Pop(0)

0x1330: Push((int) 39114)
0x1331: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1332: IF (Stack[-1] == 0) GOTO 0x1347; Pop(1)

0x1333: PushEmpty(string)
0x1334: Stack[-1] = "Neutral"
0x1335: Call2 0x98f

0x1336: Pop(1)
0x1337: Push((int) 537270)
0x1338: @@ SetMessage(Stack[-1])
0x1339: Pop(1)
0x133a: @@ ClearReplies()
0x133b: Pop(0)
0x133c: Push((int) 537271)
0x133d: Push((int) -1)
0x133e: Push((int) 39115)
0x133f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1340: Pop(3)
0x1341: Push((int) 537272)
0x1342: Push((int) -1)
0x1343: Push((int) 39116)
0x1344: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1345: Pop(3)
0x1346: Return(); Pop(0)

0x1347: Push((int) 44319)
0x1348: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1349: IF (Stack[-1] == 0) GOTO 0x135e; Pop(1)

0x134a: PushEmpty(string)
0x134b: Stack[-1] = "Neutral"
0x134c: Call2 0x98f

0x134d: Pop(1)
0x134e: Push((int) 542040)
0x134f: @@ SetMessage(Stack[-1])
0x1350: Pop(1)
0x1351: @@ ClearReplies()
0x1352: Pop(0)
0x1353: Push((int) 542041)
0x1354: Push((int) -1)
0x1355: Push((int) 44320)
0x1356: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1357: Pop(3)
0x1358: Push((int) 542042)
0x1359: Push((int) -1)
0x135a: Push((int) 44321)
0x135b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x135c: Pop(3)
0x135d: Return(); Pop(0)

0x135e: Push((int) 39099)
0x135f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1360: IF (Stack[-1] == 0) GOTO 0x1375; Pop(1)

0x1361: PushEmpty(string)
0x1362: Stack[-1] = "Neutral"
0x1363: Call2 0x98f

0x1364: Pop(1)
0x1365: Push((int) 537255)
0x1366: @@ SetMessage(Stack[-1])
0x1367: Pop(1)
0x1368: @@ ClearReplies()
0x1369: Pop(0)
0x136a: Push((int) 537256)
0x136b: Push((int) 39101)
0x136c: Push((int) 39100)
0x136d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x136e: Pop(3)
0x136f: Push((int) 537260)
0x1370: Push((int) 39105)
0x1371: Push((int) 39104)
0x1372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1373: Pop(3)
0x1374: Return(); Pop(0)

0x1375: Push((int) 39105)
0x1376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1377: IF (Stack[-1] == 0) GOTO 0x138c; Pop(1)

0x1378: PushEmpty(string)
0x1379: Stack[-1] = "Neutral"
0x137a: Call2 0x98f

0x137b: Pop(1)
0x137c: Push((int) 537261)
0x137d: @@ SetMessage(Stack[-1])
0x137e: Pop(1)
0x137f: @@ ClearReplies()
0x1380: Pop(0)
0x1381: Push((int) 537262)
0x1382: Push((int) -1)
0x1383: Push((int) 39106)
0x1384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1385: Pop(3)
0x1386: Push((int) 537263)
0x1387: Push((int) -1)
0x1388: Push((int) 39107)
0x1389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138a: Pop(3)
0x138b: Return(); Pop(0)

0x138c: Push((int) 39101)
0x138d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138e: IF (Stack[-1] == 0) GOTO 0x13a3; Pop(1)

0x138f: PushEmpty(string)
0x1390: Stack[-1] = "Neutral"
0x1391: Call2 0x98f

0x1392: Pop(1)
0x1393: Push((int) 537257)
0x1394: @@ SetMessage(Stack[-1])
0x1395: Pop(1)
0x1396: @@ ClearReplies()
0x1397: Pop(0)
0x1398: Push((int) 537258)
0x1399: Push((int) -1)
0x139a: Push((int) 39102)
0x139b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x139c: Pop(3)
0x139d: Push((int) 537259)
0x139e: Push((int) -1)
0x139f: Push((int) 39103)
0x13a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13a1: Pop(3)
0x13a2: Return(); Pop(0)

0x13a3: Push((int) 39088)
0x13a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13a5: IF (Stack[-1] == 0) GOTO 0x13ba; Pop(1)

0x13a6: PushEmpty(string)
0x13a7: Stack[-1] = "Neutral"
0x13a8: Call2 0x98f

0x13a9: Pop(1)
0x13aa: Push((int) 537245)
0x13ab: @@ SetMessage(Stack[-1])
0x13ac: Pop(1)
0x13ad: @@ ClearReplies()
0x13ae: Pop(0)
0x13af: Push((int) 537246)
0x13b0: Push((int) 39090)
0x13b1: Push((int) 39089)
0x13b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b3: Pop(3)
0x13b4: Push((int) 537253)
0x13b5: Push((int) 39090)
0x13b6: Push((int) 39096)
0x13b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b8: Pop(3)
0x13b9: Return(); Pop(0)

0x13ba: Push((int) 39090)
0x13bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13bc: IF (Stack[-1] == 0) GOTO 0x13d1; Pop(1)

0x13bd: PushEmpty(string)
0x13be: Stack[-1] = "Neutral"
0x13bf: Call2 0x98f

0x13c0: Pop(1)
0x13c1: Push((int) 537247)
0x13c2: @@ SetMessage(Stack[-1])
0x13c3: Pop(1)
0x13c4: @@ ClearReplies()
0x13c5: Pop(0)
0x13c6: Push((int) 537248)
0x13c7: Push((int) 39092)
0x13c8: Push((int) 39091)
0x13c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13ca: Pop(3)
0x13cb: Push((int) 537252)
0x13cc: Push((int) -1)
0x13cd: Push((int) 39095)
0x13ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13cf: Pop(3)
0x13d0: Return(); Pop(0)

0x13d1: Push((int) 39092)
0x13d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13d3: IF (Stack[-1] == 0) GOTO 0x13e8; Pop(1)

0x13d4: PushEmpty(string)
0x13d5: Stack[-1] = "Neutral"
0x13d6: Call2 0x98f

0x13d7: Pop(1)
0x13d8: Push((int) 537249)
0x13d9: @@ SetMessage(Stack[-1])
0x13da: Pop(1)
0x13db: @@ ClearReplies()
0x13dc: Pop(0)
0x13dd: Push((int) 537250)
0x13de: Push((int) -1)
0x13df: Push((int) 39093)
0x13e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e1: Pop(3)
0x13e2: Push((int) 537251)
0x13e3: Push((int) -1)
0x13e4: Push((int) 39094)
0x13e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13e6: Pop(3)
0x13e7: Return(); Pop(0)

0x13e8: Push((int) 45672)
0x13e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x13ea: IF (Stack[-1] == 0) GOTO 0x13ff; Pop(1)

0x13eb: PushEmpty(string)
0x13ec: Stack[-1] = "Neutral"
0x13ed: Call2 0x98f

0x13ee: Pop(1)
0x13ef: Push((int) 543216)
0x13f0: @@ SetMessage(Stack[-1])
0x13f1: Pop(1)
0x13f2: @@ ClearReplies()
0x13f3: Pop(0)
0x13f4: Push((int) 543220)
0x13f5: Push((int) -1)
0x13f6: Push((int) 45676)
0x13f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13f8: Pop(3)
0x13f9: Push((int) 543221)
0x13fa: Push((int) 45678)
0x13fb: Push((int) 45677)
0x13fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13fd: Pop(3)
0x13fe: Return(); Pop(0)

0x13ff: Push((int) 45678)
0x1400: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1401: IF (Stack[-1] == 0) GOTO 0x1416; Pop(1)

0x1402: PushEmpty(string)
0x1403: Stack[-1] = "Neutral"
0x1404: Call2 0x98f

0x1405: Pop(1)
0x1406: Push((int) 543222)
0x1407: @@ SetMessage(Stack[-1])
0x1408: Pop(1)
0x1409: @@ ClearReplies()
0x140a: Pop(0)
0x140b: Push((int) 543223)
0x140c: Push((int) -1)
0x140d: Push((int) 45679)
0x140e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140f: Pop(3)
0x1410: Push((int) 543225)
0x1411: Push((int) 45682)
0x1412: Push((int) 45681)
0x1413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1414: Pop(3)
0x1415: Return(); Pop(0)

0x1416: Push((int) 45682)
0x1417: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1418: IF (Stack[-1] == 0) GOTO 0x142d; Pop(1)

0x1419: PushEmpty(string)
0x141a: Stack[-1] = "Neutral"
0x141b: Call2 0x98f

0x141c: Pop(1)
0x141d: Push((int) 543226)
0x141e: @@ SetMessage(Stack[-1])
0x141f: Pop(1)
0x1420: @@ ClearReplies()
0x1421: Pop(0)
0x1422: Push((int) 543227)
0x1423: Push((int) -1)
0x1424: Push((int) 45683)
0x1425: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1426: Pop(3)
0x1427: Push((int) 543228)
0x1428: Push((int) 45686)
0x1429: Push((int) 45684)
0x142a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x142b: Pop(3)
0x142c: Return(); Pop(0)

0x142d: Push((int) 45686)
0x142e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x142f: IF (Stack[-1] == 0) GOTO 0x1444; Pop(1)

0x1430: PushEmpty(string)
0x1431: Stack[-1] = "Neutral"
0x1432: Call2 0x98f

0x1433: Pop(1)
0x1434: Push((int) 543230)
0x1435: @@ SetMessage(Stack[-1])
0x1436: Pop(1)
0x1437: @@ ClearReplies()
0x1438: Pop(0)
0x1439: Push((int) 543231)
0x143a: Push((int) -1)
0x143b: Push((int) 45687)
0x143c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143d: Pop(3)
0x143e: Push((int) 543232)
0x143f: Push((int) -1)
0x1440: Push((int) 45688)
0x1441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1442: Pop(3)
0x1443: Return(); Pop(0)

0x1444: Push((int) 45690)
0x1445: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1446: IF (Stack[-1] == 0) GOTO 0x148b; Pop(1)

0x1447: PushEmpty(bool)
0x1448: Stack[-1] = (bool) 1
0x1449: PushEmpty(bool)
0x144a: Stack[-1] = (bool) 1
0x144b: PushEmpty(bool, object)
0x144c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x144d: Call2 0x182a

0x144e: Pop(1)
0x144f: IF (Stack[-1] == 0) GOTO 0x1456; Pop(1)

0x1450: PushEmpty(bool, object)
0x1451: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1452: Call2 0x183e

0x1453: Pop(1)
0x1454: IF (Stack[-1] == 0) GOTO 0x1456; Pop(1)

0x1455: Stack[-1] = (bool) 0
0x1456: IF (Stack[-1] == 0) GOTO 0x145d; Pop(1)

0x1457: PushEmpty(bool, object)
0x1458: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1459: Call2 0x1834

0x145a: Pop(1)
0x145b: IF (Stack[-1] == 0) GOTO 0x145d; Pop(1)

0x145c: Stack[-1] = (bool) 0
0x145d: IF (Stack[-1] == 0) GOTO 0x1472; Pop(1)

0x145e: PushEmpty(string)
0x145f: Stack[-1] = "Neutral"
0x1460: Call2 0x98f

0x1461: Pop(1)
0x1462: Push((int) 543234)
0x1463: @@ SetMessage(Stack[-1])
0x1464: Pop(1)
0x1465: @@ ClearReplies()
0x1466: Pop(0)
0x1467: Push((int) 543235)
0x1468: Push((int) -1)
0x1469: Push((int) 45691)
0x146a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146b: Pop(3)
0x146c: Push((int) 543236)
0x146d: Push((int) -1)
0x146e: Push((int) 45692)
0x146f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1470: Pop(3)
0x1471: Return(); Pop(0)

0x1472: PushEmpty(bool, object)
0x1473: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1474: Call2 0x1816

0x1475: Pop(1)
0x1476: IF (Stack[-1] == 0) GOTO 0x148b; Pop(1)

0x1477: PushEmpty(string)
0x1478: Stack[-1] = "Neutral"
0x1479: Call2 0x98f

0x147a: Pop(1)
0x147b: Push((int) 543237)
0x147c: @@ SetMessage(Stack[-1])
0x147d: Pop(1)
0x147e: @@ ClearReplies()
0x147f: Pop(0)
0x1480: Push((int) 543238)
0x1481: Push((int) -1)
0x1482: Push((int) 45694)
0x1483: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1484: Pop(3)
0x1485: Push((int) 543239)
0x1486: Push((int) -1)
0x1487: Push((int) 45695)
0x1488: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1489: Pop(3)
0x148a: Return(); Pop(0)

0x148b: Push((int) 45697)
0x148c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x148d: IF (Stack[-1] == 0) GOTO 0x14a2; Pop(1)

0x148e: PushEmpty(string)
0x148f: Stack[-1] = "Neutral"
0x1490: Call2 0x98f

0x1491: Pop(1)
0x1492: Push((int) 543241)
0x1493: @@ SetMessage(Stack[-1])
0x1494: Pop(1)
0x1495: @@ ClearReplies()
0x1496: Pop(0)
0x1497: Push((int) 543242)
0x1498: Push((int) -1)
0x1499: Push((int) 45698)
0x149a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149b: Pop(3)
0x149c: Push((int) 543243)
0x149d: Push((int) 45700)
0x149e: Push((int) 45699)
0x149f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a0: Pop(3)
0x14a1: Return(); Pop(0)

0x14a2: Push((int) 45700)
0x14a3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a4: IF (Stack[-1] == 0) GOTO 0x14b9; Pop(1)

0x14a5: PushEmpty(string)
0x14a6: Stack[-1] = "Neutral"
0x14a7: Call2 0x98f

0x14a8: Pop(1)
0x14a9: Push((int) 543244)
0x14aa: @@ SetMessage(Stack[-1])
0x14ab: Pop(1)
0x14ac: @@ ClearReplies()
0x14ad: Pop(0)
0x14ae: Push((int) 543245)
0x14af: Push((int) -1)
0x14b0: Push((int) 45701)
0x14b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b2: Pop(3)
0x14b3: Push((int) 543246)
0x14b4: Push((int) -1)
0x14b5: Push((int) 45702)
0x14b6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14b7: Pop(3)
0x14b8: Return(); Pop(0)

0x14b9: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x14ba: PushEmpty(bool)
0x14bb: Call2 0x19a6

0x14bc: Pop(0)
0x14bd: IF (Stack[-1] == 0) GOTO 0x14c1; Pop(1)

0x14be: @ lshStopAnimation()
0x14bf: Pop(0)
0x14c0: GOTO 0x14c3

0x14c1: @ StopAnimation()
0x14c2: Pop(0)
0x14c3: Return(); Pop(0)

0x14c4: GOTO 0x9a6

0x14c5: Return(); Pop(0)

0x14c6: PushEmpty(cvector, cvector)
0x14c7: @ GetPosition(Stack[-1])
0x14c8: Pop(0)
0x14c9: Stack[-3] = Stack[-1]
0x14ca: Return(); Pop(2)

0x14cb: PushEmpty(cvector, cvector, cvector, cvector)
0x14cc: @ GetPosition(Stack[-2])
0x14cd: Pop(0)
0x14ce: @@ GetPosition(Stack[-1])
0x14cf: Pop(0)
0x14d0: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x14d1: Return(); Pop(4)

0x14d2: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x14d3: @ GetPosition(Stack[-3])
0x14d4: Pop(0)
0x14d5: @@ GetPosition(Stack[-2])
0x14d6: Pop(0)
0x14d7: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x14d8: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x14d9: Return(); Pop(6)

0x14da: PushEmpty(bool, bool)
0x14db: @ IsPlayerActor(Stack[-3], Stack[-1])
0x14dc: Pop(0)
0x14dd: Stack[-4] = Stack[-1]
0x14de: Return(); Pop(2)

0x14df: PushEmpty(bool, bool)
0x14e0: Push("HasProperty")
0x14e1: Push((int) 2)
0x14e2: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x14e3: Pop(1); Push((bool) Stack[-1] == 0)
0x14e4: IF (Stack[-1] == 0) GOTO 0x14e7; Pop(1)

0x14e5: Stack[-5] = (bool) 0
0x14e6: Return(); Pop(2)

0x14e7: @@ HasProperty(Stack[-3], Stack[-1])
0x14e8: Pop(0)
0x14e9: Stack[-5] = Stack[-1]
0x14ea: Return(); Pop(2)

0x14eb: PushEmpty(bool, bool)
0x14ec: @@ IsDead(Stack[-1])
0x14ed: Pop(0)
0x14ee: Stack[-4] = Stack[-1]
0x14ef: Return(); Pop(2)

0x14f0: PushEmpty(object, object, object, object)
0x14f1: Pop(0); Push((bool) Stack[-5] == 0)
0x14f2: IF (Stack[-1] == 0) GOTO 0x14f5; Pop(1)

0x14f3: Stack[-6] = (bool) 0
0x14f4: Return(); Pop(4)

0x14f5: PushEmpty(bool)
0x14f6: Stack[-1] = (bool) 0
0x14f7: Push("IsDead")
0x14f8: Push((int) 1)
0x14f9: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0x14fa: IF (Stack[-1] == 0) GOTO 0x1501; Pop(1)

0x14fb: PushEmpty(bool, object)
0x14fc: Stack[-1] = Stack[-8]
0x14fd: Call2 0x14eb

0x14fe: Pop(1)
0x14ff: IF (Stack[-1] == 0) GOTO 0x1501; Pop(1)

0x1500: Stack[-1] = (bool) 1
0x1501: IF (Stack[-1] == 0) GOTO 0x1504; Pop(1)

0x1502: Stack[-6] = (bool) 0
0x1503: Return(); Pop(4)

0x1504: @ GetScene(Stack[-2])
0x1505: Pop(0)
0x1506: Pop(0); Push((bool) Stack[-2] == 0)
0x1507: IF (Stack[-1] == 0) GOTO 0x150a; Pop(1)

0x1508: Stack[-6] = (bool) 0
0x1509: Return(); Pop(4)

0x150a: @@ GetScene(Stack[-1])
0x150b: Pop(0)
0x150c: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0x150d: IF (Stack[-1] == 0) GOTO 0x1510; Pop(1)

0x150e: Stack[-6] = (bool) 0
0x150f: Return(); Pop(4)

0x1510: Stack[-6] = (bool) 1
0x1511: Return(); Pop(4)

0x1512: Stack[-1] = 0
0x1513: Stack[-2] = 0
0x1514: PushEmpty(int, int)
0x1515: PushEmpty(bool, object)
0x1516: Stack[-1] = Stack[-5]
0x1517: Call2 0x14f0

0x1518: Pop(1)
0x1519: Pop(1); Push((bool) Stack[-1] == 0)
0x151a: IF (Stack[-1] == 0) GOTO 0x151d; Pop(1)

0x151b: Stack[-4] = (bool) 0
0x151c: Return(); Pop(2)

0x151d: PushEmpty(bool, object, string)
0x151e: Stack[-2] = Stack[-6]
0x151f: Stack[-1] = "noaccess"
0x1520: Call2 0x14df

0x1521: Pop(2)
0x1522: Pop(1); Push((bool) Stack[-1] == 0)
0x1523: IF (Stack[-1] == 0) GOTO 0x1526; Pop(1)

0x1524: Stack[-4] = (bool) 1
0x1525: Return(); Pop(2)

0x1526: Push("noaccess")
0x1527: @@ GetProperty(Stack[-1], Stack[-2])
0x1528: Pop(1)
0x1529: Push((int) 0)
0x152a: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0x152b: Return(); Pop(2)

0x152c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x152d: @@ GetPosition(Stack[-3])
0x152e: Pop(0)
0x152f: @ GetPosition(Stack[-2])
0x1530: Pop(0)
0x1531: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0x1532: Push(CvectorIndex(Stack[-1], 0))
0x1533: Push(CvectorIndex(Stack[-2], 2))
0x1534: @ RotateAsync(Stack[-2], Stack[-1])
0x1535: Pop(2)
0x1536: Return(); Pop(6)

0x1537: PushEmpty(bool, bool)
0x1538: @ IsLoaded(Stack[-1])
0x1539: Pop(0)
0x153a: Stack[-3] = Stack[-1]
0x153b: Return(); Pop(2)

0x153c: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x153d: @@ GetPosition(Stack[-8])
0x153e: Pop(0)
0x153f: @@ GetEyesHeight(Stack[-9])
0x1540: Pop(0)
0x1541: Push(CvectorIndex(Stack[-8], 1))
0x1542: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1543: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1544: @ GetPosition(Stack[-7])
0x1545: Pop(0)
0x1546: @ GetEyesHeight(Stack[-9])
0x1547: Pop(0)
0x1548: Push(CvectorIndex(Stack[-7], 1))
0x1549: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x154a: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x154b: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x154c: Push(CvectorIndex(Stack[-6], 1))
0x154d: Stack[-1] = (int) 0
0x154e: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x154f: Pop(0); Push(Stack[-6] | Stack[-6]);
0x1550: Pop(1); Push(Sqrt(Stack[-1]))
0x1551: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x1552: Stack[-5] = -Stack[-6]; Pop(0);
0x1553: Pop(0); Push(Stack[-6] * Stack[-19]);
0x1554: PushEmpty(cvector, cvector)
0x1555: Push(CVector(0.0, 1.0, 0.0))
0x1556: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x1557: Call2 0x1621

0x1558: Pop(1)
0x1559: Push((int) 25)
0x155a: Pop(2); Push(Stack[-2] * Stack[-1]);
0x155b: Pop(2); Push(Stack[-2] + Stack[-1]);
0x155c: Push(CVector(0.0, 10.0, 0.0))
0x155d: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x155e: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x155f: @ IsOverrideActive(Stack[-2])
0x1560: Pop(0)
0x1561: Push(Stack[-2])
0x1562: IF (Stack[-1] == 0) GOTO 0x1565; Pop(1)

0x1563: Stack[-21] = (bool) 0
0x1564: Return(); Pop(18)

0x1565: @ StopWorld()
0x1566: Pop(0)
0x1567: Push((bool) 1)
0x1568: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x1569: Pop(1)
0x156a: Push(CvectorIndex(Stack[-4], 0))
0x156b: Push(CvectorIndex(Stack[-5], 2))
0x156c: @ Rotate(Stack[-2], Stack[-1])
0x156d: Pop(2)
0x156e: PushEmpty(bool)
0x156f: Call2 0x19a6

0x1570: Pop(0)
0x1571: IF (Stack[-1] == 0) GOTO 0x1573; Pop(1)

0x1572: GOTO 0x157b

0x1573: Push("head")
0x1574: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x1575: Pop(1)
0x1576: Push(Stack[-1])
0x1577: IF (Stack[-1] == 0) GOTO 0x157b; Pop(1)

0x1578: Push("head")
0x1579: @ LookAsyncCamera(Stack[-1])
0x157a: Pop(1)
0x157b: @ CameraWaitForPlayFinish()
0x157c: Pop(0)
0x157d: @ ResumeWorld()
0x157e: Pop(0)
0x157f: Stack[-21] = (bool) 1
0x1580: Return(); Pop(18)

0x1581: PushEmpty(bool, bool)
0x1582: Push((bool) 1)
0x1583: @ CameraSwitchToNormal(Stack[-1])
0x1584: Pop(1)
0x1585: PushEmpty(bool)
0x1586: Call2 0x19a6

0x1587: Pop(0)
0x1588: IF (Stack[-1] == 0) GOTO 0x158a; Pop(1)

0x1589: GOTO 0x1592

0x158a: Push("head")
0x158b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x158c: Pop(1)
0x158d: Push(Stack[-1])
0x158e: IF (Stack[-1] == 0) GOTO 0x1592; Pop(1)

0x158f: Push("head")
0x1590: @ UnlookAsync(Stack[-1])
0x1591: Pop(1)
0x1592: Return(); Pop(2)

0x1593: PushEmpty()
0x1594: PushEmpty(bool, object, float)
0x1595: Stack[-2] = Stack[-4]
0x1596: Stack[-1] = (int) 70
0x1597: Call2 0x159b

0x1598: Stack[-5] = Stack[-3]
0x1599: Pop(3)
0x159a: Return(); Pop(0)

0x159b: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x159c: @@ GetPosition(Stack[-7])
0x159d: Pop(0)
0x159e: @@ GetEyesHeight(Stack[-8])
0x159f: Pop(0)
0x15a0: Push(CvectorIndex(Stack[-7], 1))
0x15a1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x15a2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x15a3: @ GetPosition(Stack[-6])
0x15a4: Pop(0)
0x15a5: @ GetEyesHeight(Stack[-8])
0x15a6: Pop(0)
0x15a7: Push(CvectorIndex(Stack[-6], 1))
0x15a8: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x15a9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x15aa: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x15ab: Push(CvectorIndex(Stack[-5], 1))
0x15ac: Stack[-1] = (int) 0
0x15ad: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x15ae: Pop(0); Push(Stack[-5] | Stack[-5]);
0x15af: Pop(1); Push(Sqrt(Stack[-1]))
0x15b0: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x15b1: Stack[-4] = -Stack[-5]; Pop(0);
0x15b2: Pop(0); Push(Stack[-5] * Stack[-17]);
0x15b3: Push(CVector(0.0, 10.0, 0.0))
0x15b4: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x15b5: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x15b6: @ IsOverrideActive(Stack[-1])
0x15b7: Pop(0)
0x15b8: Push(Stack[-1])
0x15b9: IF (Stack[-1] == 0) GOTO 0x15bc; Pop(1)

0x15ba: Stack[-19] = (bool) 0
0x15bb: Return(); Pop(16)

0x15bc: @ StopWorld()
0x15bd: Pop(0)
0x15be: Push((bool) 1)
0x15bf: @ CameraTransit(Stack[-3], Stack[-5], Stack[-1])
0x15c0: Pop(1)
0x15c1: Push(CvectorIndex(Stack[-3], 0))
0x15c2: Push(CvectorIndex(Stack[-4], 2))
0x15c3: @ Rotate(Stack[-2], Stack[-1])
0x15c4: Pop(2)
0x15c5: @ CameraWaitForPlayFinish()
0x15c6: Pop(0)
0x15c7: @ ResumeWorld()
0x15c8: Pop(0)
0x15c9: Stack[-19] = (bool) 1
0x15ca: Return(); Pop(16)

0x15cb: PushEmpty()
0x15cc: Push((bool) 1)
0x15cd: @ CameraSwitchToNormal(Stack[-1])
0x15ce: Pop(1)
0x15cf: Return(); Pop(0)

0x15d0: PushEmpty(bool, float, float, bool, float, float)
0x15d1: @ lshHasAnimation(Stack[-3], Stack[-7])
0x15d2: Pop(0)
0x15d3: Push(Stack[-3])
0x15d4: IF (Stack[-1] == 0) GOTO 0x15db; Pop(1)

0x15d5: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x15d6: Pop(0)
0x15d7: Push((bool) 0)
0x15d8: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x15d9: Pop(1)
0x15da: GOTO 0x15df

0x15db: Push("Can't find lsh animation : ")
0x15dc: Pop(1); Push(Stack[-1] + Stack[-8]);
0x15dd: @ Trace(Stack[-1])
0x15de: Pop(1)
0x15df: Return(); Pop(6)

0x15e0: PushEmpty(bool, float, float, bool, float, float)
0x15e1: @ lshHasAnimation(Stack[-3], Stack[-8])
0x15e2: Pop(0)
0x15e3: Push(Stack[-3])
0x15e4: IF (Stack[-1] == 0) GOTO 0x15ea; Pop(1)

0x15e5: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x15e6: Pop(0)
0x15e7: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x15e8: Pop(0)
0x15e9: GOTO 0x15ee

0x15ea: Push("Can't find lsh animation : ")
0x15eb: Pop(1); Push(Stack[-1] + Stack[-9]);
0x15ec: @ Trace(Stack[-1])
0x15ed: Pop(1)
0x15ee: Return(); Pop(6)

0x15ef: PushEmpty(float, cvector, float, cvector)
0x15f0: @@ GetEyesHeight(Stack[-2])
0x15f1: Pop(0)
0x15f2: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x15f3: Push(CvectorIndex(Stack[-1], 1))
0x15f4: Stack[-1] = Stack[-3]
0x15f5: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x15f6: Push("head")
0x15f7: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x15f8: Pop(1)
0x15f9: Return(); Pop(4)

0x15fa: PushEmpty(bool)
0x15fb: Call2 0x19a6

0x15fc: Pop(0)
0x15fd: IF (Stack[-1] == 0) GOTO 0x1600; Pop(1)

0x15fe: @ lshStopSpeech()
0x15ff: Pop(0)
0x1600: Return(); Pop(0)

0x1601: PushEmpty(bool, bool)
0x1602: PushEmpty(bool, int, int)
0x1603: Stack[-2] = Stack[-7]
0x1604: Stack[-1] = Stack[-6]
0x1605: Call2 0x162b

0x1606: Pop(2)
0x1607: IF (Stack[-1] == 0) GOTO 0x160b; Pop(1)

0x1608: Push((int) 0)
0x1609: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0x160a: Pop(1)
0x160b: Return(); Pop(2)

0x160c: PushEmpty(int, bool, int, bool)
0x160d: PushEmpty(bool, int, int)
0x160e: Stack[-2] = Stack[-10]
0x160f: Stack[-1] = Stack[-9]
0x1610: Call2 0x162b

0x1611: Pop(2)
0x1612: IF (Stack[-1] == 0) GOTO 0x161a; Pop(1)

0x1613: @ irand(Stack[-2], Stack[-5])
0x1614: Pop(0)
0x1615: Push((int) 0)
0x1616: Push((int) 1)
0x1617: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1618: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0x1619: Pop(2)
0x161a: Return(); Pop(4)

0x161b: PushEmpty(object, object)
0x161c: @ self(Stack[-1])
0x161d: Pop(0)
0x161e: Stack[-3] = Stack[-1]
0x161f: Return(); Pop(2)

0x1620: Stack[-1] = 0
0x1621: PushEmpty(float, float)
0x1622: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1623: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x1624: Push((float)0.0)
0x1625: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x1626: IF (Stack[-1] == 0) GOTO 0x1629; Pop(1)

0x1627: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x1628: Return(); Pop(2)

0x1629: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x162a: Return(); Pop(2)

0x162b: PushEmpty(int, int)
0x162c: @ irand(Stack[-1], Stack[-3])
0x162d: Pop(0)
0x162e: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0x162f: Return(); Pop(2)

0x1630: PushEmpty()
0x1631: Pop(0); Push(Stack[-2] | Stack[-1]);
0x1632: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1633: Pop(0); Push(Stack[-3] | Stack[-3]);
0x1634: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1635: Pop(1); Push(Sqrt(Stack[-1]))
0x1636: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x1637: Return(); Pop(0)

0x1638: PushEmpty()
0x1639: Push(CvectorIndex(Stack[-2], 0))
0x163a: Push(CvectorIndex(Stack[-2], 0))
0x163b: Pop(2); Push(Stack[-2] * Stack[-1]);
0x163c: Push(CvectorIndex(Stack[-3], 2))
0x163d: Push(CvectorIndex(Stack[-3], 2))
0x163e: Pop(2); Push(Stack[-2] * Stack[-1]);
0x163f: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1640: Return(); Pop(0)

0x1641: PushEmpty()
0x1642: Push(CvectorIndex(Stack[-1], 0))
0x1643: Push(CvectorIndex(Stack[-2], 0))
0x1644: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1645: Push(CvectorIndex(Stack[-2], 2))
0x1646: Push(CvectorIndex(Stack[-3], 2))
0x1647: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1648: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1649: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0x164a: Return(); Pop(0)

0x164b: PushEmpty()
0x164c: PushEmpty(float, cvector, cvector)
0x164d: Stack[-2] = Stack[-5]
0x164e: Stack[-1] = Stack[-4]
0x164f: Call2 0x1638

0x1650: Pop(2)
0x1651: PushEmpty(float, cvector)
0x1652: Stack[-1] = Stack[-5]
0x1653: Call2 0x1641

0x1654: Pop(1)
0x1655: PushEmpty(float, cvector)
0x1656: Stack[-1] = Stack[-5]
0x1657: Call2 0x1641

0x1658: Pop(1)
0x1659: Pop(2); Push(Stack[-2] * Stack[-1]);
0x165a: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0x165b: Return(); Pop(0)

0x165c: PushEmpty(int, int)
0x165d: @ GetVariable(Stack[-3], Stack[-1])
0x165e: Pop(0)
0x165f: Stack[-4] = Stack[-1]
0x1660: Return(); Pop(2)

0x1661: PushEmpty(object, object, object, object)
0x1662: @ GetMainOutdoorScene(Stack[-2])
0x1663: Pop(0)
0x1664: Push(".bin")
0x1665: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1666: @ AddBlankActor(Stack[-2], Stack[-3], Stack[-6], Stack[-1])
0x1667: Pop(1)
0x1668: Stack[-6] = Stack[-1]
0x1669: Return(); Pop(4)

0x166a: Stack[-1] = 0
0x166b: Stack[-2] = 0
0x166c: PushEmpty(float, float)
0x166d: @ GetGameTime(Stack[-1])
0x166e: Pop(0)
0x166f: Push((int) 1)
0x1670: PushEmpty(int)
0x1671: Push((int) 24)
0x1672: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x1673: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x1674: Return(); Pop(2)

0x1675: PushEmpty(float, float)
0x1676: @ GetGameTime(Stack[-1])
0x1677: Pop(0)
0x1678: PushEmpty(int)
0x1679: Stack[-1] = Stack[-2]
0x167a: Push((int) 24)
0x167b: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0x167c: Return(); Pop(2)

0x167d: PushEmpty()
0x167e: Return(); Pop(0)

0x167f: PushEmpty()
0x1680: Return(); Pop(0)

0x1681: PushEmpty()
0x1682: Return(); Pop(0)

0x1683: PushEmpty()
0x1684: Return(); Pop(0)

0x1685: PushEmpty()
0x1686: Push("unholster")
0x1687: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1688: IF (Stack[-1] == 0) GOTO 0x1690; Pop(1)

0x1689: PushEmpty(bool, object)
0x168a: Stack[-1] = Stack[-4]
0x168b: Call2 0x17b9

0x168c: Stack[-5] = Stack[-2]
0x168d: Pop(2)
0x168e: Return(); Pop(0)

0x168f: GOTO 0x16a3

0x1690: Push("player_shot")
0x1691: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1692: IF (Stack[-1] == 0) GOTO 0x169a; Pop(1)

0x1693: PushEmpty(bool, object)
0x1694: Stack[-1] = Stack[-4]
0x1695: Call2 0x17c6

0x1696: Stack[-5] = Stack[-2]
0x1697: Pop(2)
0x1698: Return(); Pop(0)

0x1699: GOTO 0x16a3

0x169a: Push("battle")
0x169b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x169c: IF (Stack[-1] == 0) GOTO 0x16a3; Pop(1)

0x169d: PushEmpty(bool, object)
0x169e: Stack[-1] = Stack[-4]
0x169f: Call2 0x17dd

0x16a0: Stack[-5] = Stack[-2]
0x16a1: Pop(2)
0x16a2: Return(); Pop(0)

0x16a3: Stack[-3] = (bool) 0
0x16a4: Return(); Pop(0)

0x16a5: PushEmpty()
0x16a6: Push("unholster")
0x16a7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16a8: IF (Stack[-1] == 0) GOTO 0x16ae; Pop(1)

0x16a9: PushEmpty(object)
0x16aa: Stack[-1] = Stack[-3]
0x16ab: Call2 0x17be

0x16ac: Pop(1)
0x16ad: GOTO 0x16bd

0x16ae: Push("player_shot")
0x16af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b0: IF (Stack[-1] == 0) GOTO 0x16b6; Pop(1)

0x16b1: PushEmpty(object)
0x16b2: Stack[-1] = Stack[-3]
0x16b3: Call2 0x17d5

0x16b4: Pop(1)
0x16b5: GOTO 0x16bd

0x16b6: Push("battle")
0x16b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x16b8: IF (Stack[-1] == 0) GOTO 0x16bd; Pop(1)

0x16b9: PushEmpty(object)
0x16ba: Stack[-1] = Stack[-3]
0x16bb: Call2 0x17e4

0x16bc: Pop(1)
0x16bd: Return(); Pop(0)

0x16be: PushEmpty(bool, bool)
0x16bf: PushEmpty(bool)
0x16c0: Stack[-1] = (bool) 0
0x16c1: PushEmpty(bool, object)
0x16c2: Stack[-1] = Stack[-6]
0x16c3: Call2 0x17b9

0x16c4: Pop(1)
0x16c5: IF (Stack[-1] == 0) GOTO 0x16cc; Pop(1)

0x16c6: PushEmpty(bool, object)
0x16c7: Stack[-1] = Stack[-6]
0x16c8: Call2 0x14da

0x16c9: Pop(1)
0x16ca: IF (Stack[-1] == 0) GOTO 0x16cc; Pop(1)

0x16cb: Stack[-1] = (bool) 1
0x16cc: IF (Stack[-1] == 0) GOTO 0x16d3; Pop(1)

0x16cd: @@ IsWeaponHolstered(Stack[-1])
0x16ce: Pop(0)
0x16cf: Pop(0); Push((bool) Stack[-1] == 0)
0x16d0: IF (Stack[-1] == 0) GOTO 0x16d3; Pop(1)

0x16d1: Stack[-4] = (bool) 1
0x16d2: Return(); Pop(2)

0x16d3: Stack[-4] = (bool) 0
0x16d4: Return(); Pop(2)

0x16d5: PushEmpty()
0x16d6: PushEmpty(object)
0x16d7: Stack[-1] = Stack[-2]
0x16d8: Call2 0x17be

0x16d9: Pop(1)
0x16da: Return(); Pop(0)

0x16db: PushEmpty()
0x16dc: PushEmpty(bool, object)
0x16dd: Stack[-1] = Stack[-3]
0x16de: Call2 0x14da

0x16df: Pop(1)
0x16e0: IF (Stack[-1] == 0) GOTO 0x16e7; Pop(1)

0x16e1: PushEmpty(object)
0x16e2: Call2 0x161b

0x16e3: Pop(0)
0x16e4: Push((float)-0.05)
0x16e5: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0x16e6: Pop(2)
0x16e7: Return(); Pop(0)

0x16e8: PushEmpty(object, object)
0x16e9: Push("heal")
0x16ea: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16eb: IF (Stack[-1] == 0) GOTO 0x16f6; Pop(1)

0x16ec: Push("player")
0x16ed: @ FindActor(Stack[-2], Stack[-1])
0x16ee: Pop(1)
0x16ef: PushEmpty(bool, object)
0x16f0: Stack[-1] = Stack[-3]
0x16f1: Call2 0x17ea

0x16f2: Stack[-6] = Stack[-2]
0x16f3: Pop(2)
0x16f4: Return(); Pop(2)

0x16f5: Stack[-1] = 0
0x16f6: Stack[-4] = (bool) 0
0x16f7: Return(); Pop(2)

0x16f8: PushEmpty(object, object)
0x16f9: Push("heal")
0x16fa: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x16fb: IF (Stack[-1] == 0) GOTO 0x1704; Pop(1)

0x16fc: Push("player")
0x16fd: @ FindActor(Stack[-2], Stack[-1])
0x16fe: Pop(1)
0x16ff: PushEmpty(object)
0x1700: Stack[-1] = Stack[-2]
0x1701: Call2 0x17ed

0x1702: Pop(1)
0x1703: Stack[-1] = 0
0x1704: Return(); Pop(2)

0x1705: PushEmpty(string, string)
0x1706: Stack[-1] = "idle"
0x1707: Push(Stack[-3])
0x1708: IF (Stack[-1] == 0) GOTO 0x170a; Pop(1)

0x1709: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x170a: Stack[-4] = Stack[-1]
0x170b: Return(); Pop(2)

0x170c: PushEmpty(int, bool, int, bool)
0x170d: Stack[-2] = (int) 0
0x170e: Push("all")
0x170f: PushEmpty(string, int)
0x1710: Stack[-1] = Stack[-5]
0x1711: Call2 0x1705

0x1712: Pop(1)
0x1713: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1714: Pop(2)
0x1715: Pop(0); Push((bool) Stack[-1] == 0)
0x1716: IF (Stack[-1] == 0) GOTO 0x1718; Pop(1)

0x1717: GOTO 0x171b

0x1718: Push((int) 1)
0x1719: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x171a: GOTO 0x170e

0x171b: Stack[-5] = Stack[-2]
0x171c: Return(); Pop(4)

0x171d: PushEmpty()
0x171e: PushEmpty(bool)
0x171f: Call2 0x19d8

0x1720: Pop(0)
0x1721: IF (Stack[-1] == 0) GOTO 0x1724; Pop(1)

0x1722: Stack[-2] = (int) 2
0x1723: GOTO 0x1725

0x1724: Stack[-2] = (int) 0
0x1725: Return(); Pop(0)

0x1726: PushEmpty()
0x1727: PushEmpty(object)
0x1728: Stack[-1] = Stack[-2]
0x1729: Push(-1, 1); TaskCall(3)
0x172a: Call2 0x293

0x172b: Pop(-1, 1); TaskReturn
0x172c: Pop(1)
0x172d: Return(); Pop(0)

0x172e: PushEmpty()
0x172f: PushEmpty(bool, object)
0x1730: Stack[-1] = Stack[-3]
0x1731: Call2 0x1514

0x1732: Pop(1)
0x1733: IF (Stack[-1] == 0) GOTO 0x1736; Pop(1)

0x1734: Stack[-2] = (int) 2
0x1735: GOTO 0x1737

0x1736: Stack[-2] = (int) 0
0x1737: Return(); Pop(0)

0x1738: PushEmpty()
0x1739: PushEmpty(object)
0x173a: Stack[-1] = Stack[-2]
0x173b: Push(-1, 3); TaskCall(4)
0x173c: Call2 0x3a6

0x173d: Pop(-1, 3); TaskReturn
0x173e: Pop(1)
0x173f: Return(); Pop(0)

0x1740: PushEmpty()
0x1741: PushEmpty(bool, object)
0x1742: Stack[-1] = Stack[-4]
0x1743: Call2 0x1514

0x1744: Pop(1)
0x1745: IF (Stack[-1] == 0) GOTO 0x1748; Pop(1)

0x1746: Stack[-3] = (int) 2
0x1747: GOTO 0x1749

0x1748: Stack[-3] = (int) 0
0x1749: Return(); Pop(0)

0x174a: PushEmpty()
0x174b: PushEmpty(object)
0x174c: Stack[-1] = Stack[-2]
0x174d: Push(-1, 3); TaskCall(5)
0x174e: Call2 0x4a2

0x174f: Pop(-1, 3); TaskReturn
0x1750: Pop(1)
0x1751: Return(); Pop(0)

0x1752: PushEmpty(string, bool, string, bool)
0x1753: PushEmpty(bool, object, string)
0x1754: Stack[-2] = Stack[-9]
0x1755: Stack[-1] = "class"
0x1756: Call2 0x14df

0x1757: Pop(2)
0x1758: Pop(1); Push((bool) Stack[-1] == 0)
0x1759: IF (Stack[-1] == 0) GOTO 0x175c; Pop(1)

0x175a: Stack[-8] = (bool) 0
0x175b: Return(); Pop(4)

0x175c: Push("class")
0x175d: @@ GetProperty(Stack[-1], Stack[-3])
0x175e: Pop(1)
0x175f: Push("rat")
0x1760: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1761: IF (Stack[-1] == 0) GOTO 0x1765; Pop(1)

0x1762: Stack[-8] = (bool) 0
0x1763: Return(); Pop(4)

0x1764: GOTO 0x1770

0x1765: Push("rat_big")
0x1766: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1767: IF (Stack[-1] == 0) GOTO 0x176b; Pop(1)

0x1768: Stack[-8] = (bool) 0
0x1769: Return(); Pop(4)

0x176a: GOTO 0x1770

0x176b: Push("dog")
0x176c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176d: IF (Stack[-1] == 0) GOTO 0x1770; Pop(1)

0x176e: Stack[-8] = (bool) 0
0x176f: Return(); Pop(4)

0x1770: @ CanSee(Stack[-1], Stack[-7])
0x1771: Pop(0)
0x1772: PushEmpty(bool)
0x1773: Stack[-1] = (bool) 1
0x1774: Push(Stack[-2])
0x1775: IF (Stack[-1] == 0) GOTO 0x177e; Pop(1)

0x1776: PushEmpty(float, object)
0x1777: Stack[-1] = Stack[-10]
0x1778: Call2 0x14d2

0x1779: Pop(1)
0x177a: Pop(0); Push(Stack[-7] * Stack[-7]);
0x177b: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x177c: IF (Stack[-1] == 0) GOTO 0x177e; Pop(1)

0x177d: Stack[-1] = (bool) 0
0x177e: IF (Stack[-1] == 0) GOTO 0x1781; Pop(1)

0x177f: Stack[-8] = (bool) 1
0x1780: Return(); Pop(4)

0x1781: @ CanSee(Stack[-1], Stack[-6])
0x1782: Pop(0)
0x1783: PushEmpty(bool)
0x1784: Stack[-1] = (bool) 1
0x1785: Push(Stack[-2])
0x1786: IF (Stack[-1] == 0) GOTO 0x178f; Pop(1)

0x1787: PushEmpty(float, object)
0x1788: Stack[-1] = Stack[-9]
0x1789: Call2 0x14d2

0x178a: Pop(1)
0x178b: Pop(0); Push(Stack[-7] * Stack[-7]);
0x178c: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x178d: IF (Stack[-1] == 0) GOTO 0x178f; Pop(1)

0x178e: Stack[-1] = (bool) 0
0x178f: IF (Stack[-1] == 0) GOTO 0x1792; Pop(1)

0x1790: Stack[-8] = (bool) 1
0x1791: Return(); Pop(4)

0x1792: Stack[-8] = (bool) 0
0x1793: Return(); Pop(4)

0x1794: PushEmpty()
0x1795: Stack[-2] = (int) 2
0x1796: Return(); Pop(0)

0x1797: PushEmpty()
0x1798: PushEmpty(object)
0x1799: Stack[-1] = Stack[-2]
0x179a: Call2 0x19b0

0x179b: Pop(1)
0x179c: Return(); Pop(0)

0x179d: Return(); Pop(0)

0x179e: PushEmpty(bool, bool)
0x179f: Push("Received steal")
0x17a0: @ Trace(Stack[-1])
0x17a1: Pop(1)
0x17a2: @ CanSee(Stack[-1], Stack[-3])
0x17a3: Pop(0)
0x17a4: Push(Stack[-1])
0x17a5: IF (Stack[-1] == 0) GOTO 0x17ac; Pop(1)

0x17a6: PushEmpty(int, object)
0x17a7: Stack[-1] = Stack[-5]
0x17a8: Call2 0x172e

0x17a9: Stack[-6] = Stack[-2]
0x17aa: Pop(2)
0x17ab: Return(); Pop(2)

0x17ac: Stack[-4] = (int) 0
0x17ad: Return(); Pop(2)

0x17ae: PushEmpty()
0x17af: PushEmpty(object)
0x17b0: Stack[-1] = Stack[-2]
0x17b1: Call2 0x1738

0x17b2: Pop(1)
0x17b3: Return(); Pop(0)

0x17b4: PushEmpty()
0x17b5: Stack[-3] = (int) 0
0x17b6: Return(); Pop(0)

0x17b7: PushEmpty()
0x17b8: Return(); Pop(0)

0x17b9: PushEmpty(bool, bool)
0x17ba: @ CanSee(Stack[-1], Stack[-3])
0x17bb: Pop(0)
0x17bc: Stack[-4] = Stack[-1]
0x17bd: Return(); Pop(2)

0x17be: PushEmpty()
0x17bf: PushEmpty(object)
0x17c0: Stack[-1] = Stack[-2]
0x17c1: Push(-1, 3); TaskCall(6)
0x17c2: Call2 0x564

0x17c3: Pop(-1, 3); TaskReturn
0x17c4: Pop(1)
0x17c5: Return(); Pop(0)

0x17c6: PushEmpty(bool, bool)
0x17c7: @ CanSee(Stack[-1], Stack[-3])
0x17c8: Pop(0)
0x17c9: Stack[-4] = (bool) 1
0x17ca: Push(Stack[-1])
0x17cb: IF (Stack[-1] == 0) GOTO 0x17d4; Pop(1)

0x17cc: PushEmpty(float, object)
0x17cd: Stack[-1] = Stack[-5]
0x17ce: Call2 0x14d2

0x17cf: Pop(1)
0x17d0: Push((int) 4000000)
0x17d1: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x17d2: IF (Stack[-1] == 0) GOTO 0x17d4; Pop(1)

0x17d3: Stack[-4] = (bool) 0
0x17d4: Return(); Pop(2)

0x17d5: PushEmpty()
0x17d6: PushEmpty(object)
0x17d7: Stack[-1] = Stack[-2]
0x17d8: Push(-1, 3); TaskCall(7)
0x17d9: Call2 0x626

0x17da: Pop(-1, 3); TaskReturn
0x17db: Pop(1)
0x17dc: Return(); Pop(0)

0x17dd: PushEmpty()
0x17de: PushEmpty(bool, object)
0x17df: Stack[-1] = Stack[-3]
0x17e0: Call2 0x17c6

0x17e1: Stack[-4] = Stack[-2]
0x17e2: Pop(2)
0x17e3: Return(); Pop(0)

0x17e4: PushEmpty()
0x17e5: PushEmpty(object)
0x17e6: Stack[-1] = Stack[-2]
0x17e7: Call2 0x17d5

0x17e8: Pop(1)
0x17e9: Return(); Pop(0)

0x17ea: PushEmpty()
0x17eb: Stack[-2] = (bool) 0
0x17ec: Return(); Pop(0)

0x17ed: PushEmpty()
0x17ee: Return(); Pop(0)

0x17ef: PushEmpty()
0x17f0: Push("d1GhostCatHDPathologic")
0x17f1: Push((int) 1)
0x17f2: @ SetVariable(Stack[-2], Stack[-1])
0x17f3: Pop(2)
0x17f4: PushEmpty(object, string)
0x17f5: Stack[-1] = "quest_ghost_cat"
0x17f6: Call2 0x1661

0x17f7: Pop(2)
0x17f8: Return(); Pop(0)

0x17f9: PushEmpty()
0x17fa: Push((int) 1000)
0x17fb: @@ SetReturnValue(Stack[-1])
0x17fc: Pop(1)
0x17fd: Return(); Pop(0)

0x17fe: PushEmpty()
0x17ff: PushEmpty(int, string)
0x1800: Stack[-1] = "branch"
0x1801: Call2 0x165c

0x1802: Pop(1)
0x1803: Push((int) 0)
0x1804: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1805: IF (Stack[-1] == 0) GOTO 0x1808; Pop(1)

0x1806: Stack[-2] = (bool) 1
0x1807: Return(); Pop(0)

0x1808: Stack[-2] = (bool) 0
0x1809: Return(); Pop(0)

0x180a: PushEmpty()
0x180b: PushEmpty(int, string)
0x180c: Stack[-1] = "branch"
0x180d: Call2 0x165c

0x180e: Pop(1)
0x180f: Push((int) 2)
0x1810: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1811: IF (Stack[-1] == 0) GOTO 0x1814; Pop(1)

0x1812: Stack[-2] = (bool) 1
0x1813: Return(); Pop(0)

0x1814: Stack[-2] = (bool) 0
0x1815: Return(); Pop(0)

0x1816: PushEmpty()
0x1817: PushEmpty(bool, object)
0x1818: Stack[-1] = Stack[-3]
0x1819: Call2 0x18a2

0x181a: Pop(1)
0x181b: IF (Stack[-1] == 0) GOTO 0x181e; Pop(1)

0x181c: Stack[-2] = (bool) 1
0x181d: Return(); Pop(0)

0x181e: Stack[-2] = (bool) 0
0x181f: Return(); Pop(0)

0x1820: PushEmpty()
0x1821: PushEmpty(bool, object)
0x1822: Stack[-1] = Stack[-3]
0x1823: Call2 0x18a9

0x1824: Pop(1)
0x1825: IF (Stack[-1] == 0) GOTO 0x1828; Pop(1)

0x1826: Stack[-2] = (bool) 1
0x1827: Return(); Pop(0)

0x1828: Stack[-2] = (bool) 0
0x1829: Return(); Pop(0)

0x182a: PushEmpty()
0x182b: PushEmpty(bool, object)
0x182c: Stack[-1] = Stack[-3]
0x182d: Call2 0x18b0

0x182e: Pop(1)
0x182f: IF (Stack[-1] == 0) GOTO 0x1832; Pop(1)

0x1830: Stack[-2] = (bool) 1
0x1831: Return(); Pop(0)

0x1832: Stack[-2] = (bool) 0
0x1833: Return(); Pop(0)

0x1834: PushEmpty()
0x1835: PushEmpty(bool, object)
0x1836: Stack[-1] = Stack[-3]
0x1837: Call2 0x18b7

0x1838: Pop(1)
0x1839: IF (Stack[-1] == 0) GOTO 0x183c; Pop(1)

0x183a: Stack[-2] = (bool) 1
0x183b: Return(); Pop(0)

0x183c: Stack[-2] = (bool) 0
0x183d: Return(); Pop(0)

0x183e: PushEmpty()
0x183f: PushEmpty(bool, object)
0x1840: Stack[-1] = Stack[-3]
0x1841: Call2 0x18be

0x1842: Pop(1)
0x1843: IF (Stack[-1] == 0) GOTO 0x1846; Pop(1)

0x1844: Stack[-2] = (bool) 1
0x1845: Return(); Pop(0)

0x1846: Stack[-2] = (bool) 0
0x1847: Return(); Pop(0)

0x1848: PushEmpty()
0x1849: PushEmpty(bool, object)
0x184a: Stack[-1] = Stack[-3]
0x184b: Call2 0x18c5

0x184c: Pop(1)
0x184d: IF (Stack[-1] == 0) GOTO 0x1850; Pop(1)

0x184e: Stack[-2] = (bool) 1
0x184f: Return(); Pop(0)

0x1850: Stack[-2] = (bool) 0
0x1851: Return(); Pop(0)

0x1852: PushEmpty()
0x1853: PushEmpty(bool, object)
0x1854: Stack[-1] = Stack[-3]
0x1855: Call2 0x18cc

0x1856: Pop(1)
0x1857: IF (Stack[-1] == 0) GOTO 0x185a; Pop(1)

0x1858: Stack[-2] = (bool) 1
0x1859: Return(); Pop(0)

0x185a: Stack[-2] = (bool) 0
0x185b: Return(); Pop(0)

0x185c: PushEmpty()
0x185d: PushEmpty(bool, object)
0x185e: Stack[-1] = Stack[-3]
0x185f: Call2 0x18d3

0x1860: Pop(1)
0x1861: IF (Stack[-1] == 0) GOTO 0x1864; Pop(1)

0x1862: Stack[-2] = (bool) 1
0x1863: Return(); Pop(0)

0x1864: Stack[-2] = (bool) 0
0x1865: Return(); Pop(0)

0x1866: PushEmpty()
0x1867: PushEmpty(bool, object)
0x1868: Stack[-1] = Stack[-3]
0x1869: Call2 0x18da

0x186a: Pop(1)
0x186b: IF (Stack[-1] == 0) GOTO 0x186e; Pop(1)

0x186c: Stack[-2] = (bool) 1
0x186d: Return(); Pop(0)

0x186e: Stack[-2] = (bool) 0
0x186f: Return(); Pop(0)

0x1870: PushEmpty()
0x1871: PushEmpty(bool, object)
0x1872: Stack[-1] = Stack[-3]
0x1873: Call2 0x18e1

0x1874: Pop(1)
0x1875: IF (Stack[-1] == 0) GOTO 0x1878; Pop(1)

0x1876: Stack[-2] = (bool) 1
0x1877: Return(); Pop(0)

0x1878: Stack[-2] = (bool) 0
0x1879: Return(); Pop(0)

0x187a: PushEmpty()
0x187b: PushEmpty(bool, object)
0x187c: Stack[-1] = Stack[-3]
0x187d: Call2 0x18e8

0x187e: Pop(1)
0x187f: IF (Stack[-1] == 0) GOTO 0x1882; Pop(1)

0x1880: Stack[-2] = (bool) 1
0x1881: Return(); Pop(0)

0x1882: Stack[-2] = (bool) 0
0x1883: Return(); Pop(0)

0x1884: PushEmpty()
0x1885: PushEmpty(bool, object)
0x1886: Stack[-1] = Stack[-3]
0x1887: Call2 0x18ef

0x1888: Pop(1)
0x1889: IF (Stack[-1] == 0) GOTO 0x188c; Pop(1)

0x188a: Stack[-2] = (bool) 1
0x188b: Return(); Pop(0)

0x188c: Stack[-2] = (bool) 0
0x188d: Return(); Pop(0)

0x188e: PushEmpty()
0x188f: PushEmpty(bool, object)
0x1890: Stack[-1] = Stack[-3]
0x1891: Call2 0x18f6

0x1892: Pop(1)
0x1893: IF (Stack[-1] == 0) GOTO 0x1896; Pop(1)

0x1894: Stack[-2] = (bool) 1
0x1895: Return(); Pop(0)

0x1896: Stack[-2] = (bool) 0
0x1897: Return(); Pop(0)

0x1898: PushEmpty()
0x1899: PushEmpty(bool, object)
0x189a: Stack[-1] = Stack[-3]
0x189b: Call2 0x190b

0x189c: Pop(1)
0x189d: IF (Stack[-1] == 0) GOTO 0x18a0; Pop(1)

0x189e: Stack[-2] = (bool) 1
0x189f: Return(); Pop(0)

0x18a0: Stack[-2] = (bool) 0
0x18a1: Return(); Pop(0)

0x18a2: PushEmpty()
0x18a3: PushEmpty(int)
0x18a4: Call2 0x166c

0x18a5: Pop(0)
0x18a6: Push((int) 1)
0x18a7: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18a8: Return(); Pop(0)

0x18a9: PushEmpty()
0x18aa: PushEmpty(int)
0x18ab: Call2 0x166c

0x18ac: Pop(0)
0x18ad: Push((int) 2)
0x18ae: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18af: Return(); Pop(0)

0x18b0: PushEmpty()
0x18b1: PushEmpty(int)
0x18b2: Call2 0x166c

0x18b3: Pop(0)
0x18b4: Push((int) 3)
0x18b5: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18b6: Return(); Pop(0)

0x18b7: PushEmpty()
0x18b8: PushEmpty(int)
0x18b9: Call2 0x166c

0x18ba: Pop(0)
0x18bb: Push((int) 4)
0x18bc: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18bd: Return(); Pop(0)

0x18be: PushEmpty()
0x18bf: PushEmpty(int)
0x18c0: Call2 0x166c

0x18c1: Pop(0)
0x18c2: Push((int) 5)
0x18c3: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18c4: Return(); Pop(0)

0x18c5: PushEmpty()
0x18c6: PushEmpty(int)
0x18c7: Call2 0x166c

0x18c8: Pop(0)
0x18c9: Push((int) 6)
0x18ca: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18cb: Return(); Pop(0)

0x18cc: PushEmpty()
0x18cd: PushEmpty(int)
0x18ce: Call2 0x166c

0x18cf: Pop(0)
0x18d0: Push((int) 7)
0x18d1: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18d2: Return(); Pop(0)

0x18d3: PushEmpty()
0x18d4: PushEmpty(int)
0x18d5: Call2 0x166c

0x18d6: Pop(0)
0x18d7: Push((int) 8)
0x18d8: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18d9: Return(); Pop(0)

0x18da: PushEmpty()
0x18db: PushEmpty(int)
0x18dc: Call2 0x166c

0x18dd: Pop(0)
0x18de: Push((int) 9)
0x18df: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18e0: Return(); Pop(0)

0x18e1: PushEmpty()
0x18e2: PushEmpty(int)
0x18e3: Call2 0x166c

0x18e4: Pop(0)
0x18e5: Push((int) 10)
0x18e6: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18e7: Return(); Pop(0)

0x18e8: PushEmpty()
0x18e9: PushEmpty(int)
0x18ea: Call2 0x166c

0x18eb: Pop(0)
0x18ec: Push((int) 11)
0x18ed: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18ee: Return(); Pop(0)

0x18ef: PushEmpty()
0x18f0: PushEmpty(int)
0x18f1: Call2 0x166c

0x18f2: Pop(0)
0x18f3: Push((int) 12)
0x18f4: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0x18f5: Return(); Pop(0)

0x18f6: PushEmpty()
0x18f7: PushEmpty(bool)
0x18f8: Stack[-1] = (bool) 0
0x18f9: PushEmpty(int)
0x18fa: Call2 0x1675

0x18fb: Pop(0)
0x18fc: Push((int) 0)
0x18fd: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x18fe: IF (Stack[-1] == 0) GOTO 0x1906; Pop(1)

0x18ff: PushEmpty(int)
0x1900: Call2 0x1675

0x1901: Pop(0)
0x1902: Push((int) 12)
0x1903: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x1904: IF (Stack[-1] == 0) GOTO 0x1906; Pop(1)

0x1905: Stack[-1] = (bool) 1
0x1906: IF (Stack[-1] == 0) GOTO 0x1909; Pop(1)

0x1907: Stack[-2] = (bool) 1
0x1908: Return(); Pop(0)

0x1909: Stack[-2] = (bool) 0
0x190a: Return(); Pop(0)

0x190b: PushEmpty()
0x190c: PushEmpty(int)
0x190d: Call2 0x1675

0x190e: Pop(0)
0x190f: Push((int) 12)
0x1910: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0x1911: IF (Stack[-1] == 0) GOTO 0x1914; Pop(1)

0x1912: Stack[-2] = (bool) 1
0x1913: Return(); Pop(0)

0x1914: Stack[-2] = (bool) 0
0x1915: Return(); Pop(0)

0x1916: PushEmpty(int, int)
0x1917: Push("branch")
0x1918: @ GetVariable(Stack[-1], Stack[-2])
0x1919: Pop(1)
0x191a: Push((int) 0)
0x191b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x191c: IF (Stack[-1] == 0) GOTO 0x1920; Pop(1)

0x191d: Stack[-3] = (int) 1
0x191e: Return(); Pop(2)

0x191f: GOTO 0x1925

0x1920: Push((int) 1)
0x1921: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1922: IF (Stack[-1] == 0) GOTO 0x1925; Pop(1)

0x1923: Stack[-3] = (int) 2
0x1924: Return(); Pop(2)

0x1925: Stack[-3] = (int) 3
0x1926: Return(); Pop(2)

0x1927: PushEmpty(int, int)
0x1928: Push("branch")
0x1929: @ GetVariable(Stack[-1], Stack[-2])
0x192a: Pop(1)
0x192b: Stack[-3] = Stack[-1]
0x192c: Return(); Pop(2)

0x192d: PushEmpty()
0x192e: PushEmpty(int)
0x192f: Call2 0x1927

0x1930: Pop(0)
0x1931: Push((int) 1)
0x1932: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1933: IF (Stack[-1] == 0) GOTO 0x1937; Pop(1)

0x1934: @ WorkWithCorpse(Stack[-1])
0x1935: Pop(0)
0x1936: GOTO 0x1939

0x1937: @ Barter(Stack[-1])
0x1938: Pop(0)
0x1939: Return(); Pop(0)

0x193a: PushEmpty(int, bool, int, int, bool, int)
0x193b: Push((int) 0)
0x193c: @ ClearSubContainer(Stack[-1])
0x193d: Pop(1)
0x193e: PushEmpty(int)
0x193f: Call2 0x166c

0x1940: Stack[-2] = Stack[-1]
0x1941: Pop(1)
0x1942: Push(Stack[-7])
0x1943: IF (Stack[-1] == 0) GOTO 0x1970; Pop(1)

0x1944: PushEmpty(string, int, int, int)
0x1945: Stack[-4] = "alpha_pills"
0x1946: Stack[-3] = (int) 1
0x1947: Stack[-2] = (int) 2
0x1948: Stack[-1] = (int) 4
0x1949: Call2 0x160c

0x194a: Pop(4)
0x194b: PushEmpty(string, int, int, int)
0x194c: Stack[-4] = "meradorm"
0x194d: Stack[-3] = (int) 2
0x194e: Stack[-2] = (int) 3
0x194f: Stack[-1] = (int) 3
0x1950: Call2 0x160c

0x1951: Pop(4)
0x1952: Push((int) 3)
0x1953: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1954: IF (Stack[-1] == 0) GOTO 0x195b; Pop(1)

0x1955: PushEmpty(string, int, int)
0x1956: Stack[-3] = "beta_pills"
0x1957: Stack[-2] = (int) 1
0x1958: Stack[-1] = (int) 4
0x1959: Call2 0x1601

0x195a: Pop(3)
0x195b: Push((int) 8)
0x195c: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x195d: IF (Stack[-1] == 0) GOTO 0x1966; Pop(1)

0x195e: PushEmpty(string, int, int, int)
0x195f: Stack[-4] = "monomicin"
0x1960: Stack[-3] = (int) 1
0x1961: Stack[-2] = (int) 2
0x1962: Stack[-1] = (int) 2
0x1963: Call2 0x160c

0x1964: Pop(4)
0x1965: GOTO 0x196f

0x1966: Push((int) 4)
0x1967: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1968: IF (Stack[-1] == 0) GOTO 0x196f; Pop(1)

0x1969: PushEmpty(string, int, int)
0x196a: Stack[-3] = "monomicin"
0x196b: Stack[-2] = (int) 1
0x196c: Stack[-1] = (int) 2
0x196d: Call2 0x1601

0x196e: Pop(3)
0x196f: GOTO 0x199d

0x1970: PushEmpty(string, int, int)
0x1971: Stack[-3] = "lockpick"
0x1972: Stack[-2] = (int) 1
0x1973: Stack[-1] = (int) 4
0x1974: Call2 0x1601

0x1975: Pop(3)
0x1976: PushEmpty(string, int, int)
0x1977: Stack[-3] = "rifle_ammo"
0x1978: Stack[-2] = (int) 1
0x1979: Stack[-1] = (int) 2
0x197a: Call2 0x1601

0x197b: Pop(3)
0x197c: PushEmpty(string, int, int)
0x197d: Stack[-3] = "revolver_ammo"
0x197e: Stack[-2] = (int) 1
0x197f: Stack[-1] = (int) 2
0x1980: Call2 0x1601

0x1981: Pop(3)
0x1982: PushEmpty(string, int, int, int)
0x1983: Stack[-4] = "samopal_ammo"
0x1984: Stack[-3] = (int) 1
0x1985: Stack[-2] = (int) 2
0x1986: Stack[-1] = (int) 2
0x1987: Call2 0x160c

0x1988: Pop(4)
0x1989: Push((int) 8)
0x198a: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x198b: IF (Stack[-1] == 0) GOTO 0x1994; Pop(1)

0x198c: PushEmpty(string, int, int, int)
0x198d: Stack[-4] = "monomicin"
0x198e: Stack[-3] = (int) 1
0x198f: Stack[-2] = (int) 2
0x1990: Stack[-1] = (int) 2
0x1991: Call2 0x160c

0x1992: Pop(4)
0x1993: GOTO 0x199d

0x1994: Push((int) 4)
0x1995: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x1996: IF (Stack[-1] == 0) GOTO 0x199d; Pop(1)

0x1997: PushEmpty(string, int, int)
0x1998: Stack[-3] = "monomicin"
0x1999: Stack[-2] = (int) 1
0x199a: Stack[-1] = (int) 2
0x199b: Call2 0x1601

0x199c: Pop(3)
0x199d: Return(); Pop(6)

0x199e: Stack[-1] = (int) 515559
0x199f: Return(); Pop(0)

0x19a0: Stack[-1] = (int) 503344
0x19a1: Return(); Pop(0)

0x19a2: Stack[-1] = "ui/NPC_Citizen1.png"
0x19a3: Return(); Pop(0)

0x19a4: Stack[-1] = "ui/NPC_Citizen1_b.png"
0x19a5: Return(); Pop(0)

0x19a6: Stack[-1] = (bool) 0
0x19a7: Return(); Pop(0)

0x19a8: Push(GlobalVars[0])
0x19a9: Stack[-1] = (bool) 0
0x19aa: GlobalVars[0] = Stack[-1]; Pop(1)
0x19ab: PushEmpty(bool)
0x19ac: Stack[-1] = (bool) 0
0x19ad: Call2 0x193a

0x19ae: Pop(1)
0x19af: Return(); Pop(0)

0x19b0: PushEmpty(bool, bool)
0x19b1: Push(GlobalVars[0])
0x19b2: IF (Stack[-1] == 0) GOTO 0x19bd; Pop(1)

0x19b3: @ IsOverrideActive(Stack[-1])
0x19b4: Pop(0)
0x19b5: Pop(0); Push((bool) Stack[-1] == 0)
0x19b6: IF (Stack[-1] == 0) GOTO 0x19bb; Pop(1)

0x19b7: PushEmpty(object)
0x19b8: Stack[-1] = Stack[-4]
0x19b9: Call2 0x192d

0x19ba: Pop(1)
0x19bb: Return(); Pop(2)

0x19bc: GOTO 0x19d7

0x19bd: Push((int) 1000)
0x19be: PushEmpty(int, object)
0x19bf: Stack[-1] = Stack[-6]
0x19c0: Push(-2, 1); TaskCall(8)
0x19c1: Call2 0x6c3

0x19c2: Pop(-2, 1); TaskReturn
0x19c3: Pop(1)
0x19c4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x19c5: IF (Stack[-1] == 0) GOTO 0x19d7; Pop(1)

0x19c6: PushEmpty(bool, object)
0x19c7: Stack[-1] = Stack[-5]
0x19c8: Call2 0x1593

0x19c9: Pop(1)
0x19ca: Pop(1); Push((bool) Stack[-1] == 0)
0x19cb: IF (Stack[-1] == 0) GOTO 0x19cd; Pop(1)

0x19cc: Return(); Pop(2)

0x19cd: PushEmpty(object)
0x19ce: Stack[-1] = Stack[-4]
0x19cf: Push(-1, 1); TaskCall(0)
0x19d0: Call2 0x0

0x19d1: Pop(-1, 1); TaskReturn
0x19d2: Pop(1)
0x19d3: PushEmpty(object)
0x19d4: Stack[-1] = Stack[-4]
0x19d5: Call2 0x15cb

0x19d6: Pop(1)
0x19d7: Return(); Pop(2)

0x19d8: Stack[-1] = (bool) 1
0x19d9: Return(); Pop(0)

0x19da: PushEmpty()
0x19db: PushEmpty(bool, object, object, float)
0x19dc: Stack[-3] = Stack[-7]
0x19dd: Stack[-2] = Stack[-6]
0x19de: Stack[-1] = (float) 500.0
0x19df: Call2 0x1752

0x19e0: Pop(3)
0x19e1: IF (Stack[-1] == 0) GOTO 0x19e8; Pop(1)

0x19e2: Push("ToDie")
0x19e3: Push((bool) 1)
0x19e4: @ SetProperty(Stack[-2], Stack[-1])
0x19e5: Pop(2)
0x19e6: Stack[-4] = (bool) 1
0x19e7: Return(); Pop(0)

0x19e8: Stack[-4] = (bool) 0
0x19e9: Return(); Pop(0)

