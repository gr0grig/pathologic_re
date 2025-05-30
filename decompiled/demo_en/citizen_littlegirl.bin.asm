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
	ui/NPC_Citizen1.png
	ui/NPC_Citizen1_b.png

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
		EVENT_11 Op = 0x79a Vars = (int, int)

Events:
EVENT_16 Op = 0xb70 Vars = (object, string)
EVENT_41 Op = 0xb72 Vars = (object)
EVENT_22 Op = 0xb74 Vars = (object, int, float, float)
EVENT_43 Op = 0xb76 Vars = (object, int, float, float, cvector, cvector)

0x0: PushEmpty()
0x1: @ DoTrade()
0x2: Pop(0)
0x3: Stack[0 + Tasks[-1].StackPointer] = (bool)0
0x4: PushEmpty(bool)
0x5: Call2 0xd85

0x6: Pop(0)
0x7: IF (Stack[-1] == 0) GOTO 0xf; Pop(1)

0x8: PushEmpty(string)
0x9: Stack[-1] = "Neutral"
0xa: Call2 0xad6

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
0x1c: Call2 0xd85

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
0x2c: Call2 0xd87

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
0x38: Call2 0xa41

0x39: Pop(0)
0x3a: Pop(1); Push((bool) Stack[-1] == 0)
0x3b: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3c: PushEmpty()
0x3d: Call2 0xc9a

0x3e: Pop(0)
0x3f: Return(); Pop(0)

0x40: PushEmpty(int, int)
0x41: PushEmpty(int, object)
0x42: Stack[-1] = Stack[-5]
0x43: Call2 0xc91

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
0x51: Call2 0xc94

0x52: Pop(1)
0x53: Return(); Pop(2)

0x54: PushEmpty(int, int)
0x55: PushEmpty(object)
0x56: Stack[-1] = Stack[-4]
0x57: Call2 0xbce

0x58: Pop(1)
0x59: PushEmpty(int, object)
0x5a: Stack[-1] = Stack[-5]
0x5b: Call2 0xc21

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
0x69: Call2 0xc2b

0x6a: Pop(1)
0x6b: Return(); Pop(2)

0x6c: PushEmpty(int, int)
0x6d: PushEmpty(bool, object, object, bool)
0x6e: Stack[-3] = Stack[-9]
0x6f: Stack[-2] = Stack[-8]
0x70: Stack[-1] = Stack[-7]
0x71: Call2 0xdbd

0x72: Pop(3)
0x73: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x74: PushEmpty(int, object, bool)
0x75: Stack[-2] = Stack[-8]
0x76: Stack[-1] = Stack[-6]
0x77: Call2 0xc33

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
0x85: Call2 0xc3d

0x86: Pop(1)
0x87: Return(); Pop(2)

0x88: PushEmpty(int, int)
0x89: PushEmpty(int, object)
0x8a: Stack[-1] = Stack[-5]
0x8b: Call2 0xc87

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
0x99: Call2 0xc8a

0x9a: Pop(1)
0x9b: Return(); Pop(2)

0x9c: PushEmpty(int, int)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-7]
0x9f: Stack[-1] = Stack[-6]
0xa0: Call2 0xb78

0xa1: Pop(2)
0xa2: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xa3: PushEmpty()
0xa4: Call2 0xfb

0xa5: Pop(0)
0xa6: PushEmpty(object, string)
0xa7: Stack[-2] = Stack[-6]
0xa8: Stack[-1] = Stack[-5]
0xa9: Call2 0xb98

0xaa: Pop(2)
0xab: GOTO 0xc0

0xac: PushEmpty(int, string, object)
0xad: Stack[-2] = Stack[-6]
0xae: Stack[-1] = Stack[-7]
0xaf: Call2 0xc8c

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
0xbe: Call2 0xc8f

0xbf: Pop(2)
0xc0: Return(); Pop(2)

0xc1: PushEmpty()
0xc2: PushEmpty(bool, string)
0xc3: Stack[-1] = Stack[-3]
0xc4: Call2 0xbdb

0xc5: Pop(1)
0xc6: IF (Stack[-1] == 0) GOTO 0xce; Pop(1)

0xc7: PushEmpty()
0xc8: Call2 0xfb

0xc9: Pop(0)
0xca: PushEmpty(string)
0xcb: Stack[-1] = Stack[-2]
0xcc: Call2 0xbeb

0xcd: Pop(1)
0xce: Return(); Pop(0)

0xcf: PushEmpty()
0xd0: PushEmpty(bool, object)
0xd1: Stack[-1] = Stack[-3]
0xd2: Call2 0xbb1

0xd3: Pop(1)
0xd4: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xfb

0xd7: Pop(0)
0xd8: PushEmpty(object)
0xd9: Stack[-1] = Stack[-2]
0xda: Call2 0xbc8

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
0xf8: Call2 0xc9a

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
0x111: Call2 0xb72

0x112: Pop(1)
0x113: Return(); Pop(0)

0x114: PushEmpty(bool, int, bool, int)
0x115: PushEmpty(bool, object)
0x116: Stack[-1] = Stack[-7]
0x117: Call2 0xa1e

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
0x126: Call2 0xc10

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
0x134: Call2 0xc19

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
0x19c: Call2 0xc91

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
0x1aa: Call2 0xc94

0x1ab: Pop(1)
0x1ac: Return(); Pop(2)

0x1ad: PushEmpty(int, int)
0x1ae: PushEmpty(object)
0x1af: Stack[-1] = Stack[-4]
0x1b0: Call2 0xbce

0x1b1: Pop(1)
0x1b2: PushEmpty(int, object)
0x1b3: Stack[-1] = Stack[-5]
0x1b4: Call2 0xc21

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
0x1c2: Call2 0xc2b

0x1c3: Pop(1)
0x1c4: Return(); Pop(2)

0x1c5: PushEmpty(int, int)
0x1c6: PushEmpty(bool, object, object, bool)
0x1c7: Stack[-3] = Stack[-9]
0x1c8: Stack[-2] = Stack[-8]
0x1c9: Stack[-1] = Stack[-7]
0x1ca: Call2 0xdbd

0x1cb: Pop(3)
0x1cc: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1cd: PushEmpty(int, object, bool)
0x1ce: Stack[-2] = Stack[-8]
0x1cf: Stack[-1] = Stack[-6]
0x1d0: Call2 0xc33

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
0x1de: Call2 0xc3d

0x1df: Pop(1)
0x1e0: Return(); Pop(2)

0x1e1: PushEmpty(int, int)
0x1e2: PushEmpty(int, object)
0x1e3: Stack[-1] = Stack[-5]
0x1e4: Call2 0xc87

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
0x1f2: Call2 0xc8a

0x1f3: Pop(1)
0x1f4: Return(); Pop(2)

0x1f5: PushEmpty(int, int)
0x1f6: PushEmpty(bool, object, string)
0x1f7: Stack[-2] = Stack[-7]
0x1f8: Stack[-1] = Stack[-6]
0x1f9: Call2 0xb78

0x1fa: Pop(2)
0x1fb: IF (Stack[-1] == 0) GOTO 0x205; Pop(1)

0x1fc: PushEmpty()
0x1fd: Call2 0x28e

0x1fe: Pop(0)
0x1ff: PushEmpty(object, string)
0x200: Stack[-2] = Stack[-6]
0x201: Stack[-1] = Stack[-5]
0x202: Call2 0xb98

0x203: Pop(2)
0x204: GOTO 0x219

0x205: PushEmpty(int, string, object)
0x206: Stack[-2] = Stack[-6]
0x207: Stack[-1] = Stack[-7]
0x208: Call2 0xc8c

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
0x217: Call2 0xc8f

0x218: Pop(2)
0x219: Return(); Pop(2)

0x21a: PushEmpty()
0x21b: PushEmpty(bool, string)
0x21c: Stack[-1] = Stack[-3]
0x21d: Call2 0xbdb

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x227; Pop(1)

0x220: PushEmpty()
0x221: Call2 0x28e

0x222: Pop(0)
0x223: PushEmpty(string)
0x224: Stack[-1] = Stack[-2]
0x225: Call2 0xbeb

0x226: Pop(1)
0x227: Return(); Pop(0)

0x228: PushEmpty()
0x229: Call2 0x28e

0x22a: Pop(0)
0x22b: PushEmpty()
0x22c: Call2 0xc9a

0x22d: Pop(0)
0x22e: Return(); Pop(0)

0x22f: PushEmpty()
0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[-3]
0x232: Call2 0xbb1

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x235: PushEmpty()
0x236: Call2 0x28e

0x237: Pop(0)
0x238: PushEmpty(object)
0x239: Stack[-1] = Stack[-2]
0x23a: Call2 0xbc8

0x23b: Pop(1)
0x23c: Return(); Pop(0)

0x23d: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x23e: @ WaitForAnimEnd()
0x23f: Pop(0)
0x240: PushEmpty(bool)
0x241: Call2 0xa41

0x242: Pop(0)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Return(); Pop(14)

0x246: PushEmpty(int)
0x247: Call2 0xbff

0x248: Stack[-8] = Stack[-1]
0x249: Pop(1)
0x24a: Stack[-6] = (int) 0
0x24b: PushEmpty(bool)
0x24c: Stack[-1] = (bool) 0
0x24d: Push((int) 5)
0x24e: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x24f: IF (Stack[-1] == 0) GOTO 0x255; Pop(1)

0x250: PushEmpty(bool)
0x251: Call2 0xa41

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
0x263: Call2 0xbf8

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
0x29c: Call2 0x9d5

0x29d: Stack[-4] = Stack[-2]
0x29e: Pop(2)
0x29f: PushEmpty(float, cvector, cvector)
0x2a0: Stack[-2] = Stack[-6]
0x2a1: Stack[-1] = Stack[-5]
0x2a2: Call2 0xb51

0x2a3: Pop(2)
0x2a4: Push((int) 0)
0x2a5: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x2a6: IF (Stack[-1] == 0) GOTO 0x2ad; Pop(1)

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2a9: Call2 0xa36

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
0x2b4: Call2 0xa36

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
0x2c8: Call2 0xaf5

0x2c9: Pop(1)
0x2ca: Return(); Pop(0)

0x2cb: PushEmpty(int, int)
0x2cc: PushEmpty(int, object)
0x2cd: Stack[-1] = Stack[-5]
0x2ce: Call2 0xc91

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
0x2dc: Call2 0xc94

0x2dd: Pop(1)
0x2de: Return(); Pop(2)

0x2df: PushEmpty(int, int)
0x2e0: PushEmpty(object)
0x2e1: Stack[-1] = Stack[-4]
0x2e2: Call2 0xbce

0x2e3: Pop(1)
0x2e4: PushEmpty(int, object)
0x2e5: Stack[-1] = Stack[-5]
0x2e6: Call2 0xc21

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
0x2f4: Call2 0xc2b

0x2f5: Pop(1)
0x2f6: Return(); Pop(2)

0x2f7: PushEmpty(int, int)
0x2f8: PushEmpty(bool, object, object, bool)
0x2f9: Stack[-3] = Stack[-9]
0x2fa: Stack[-2] = Stack[-8]
0x2fb: Stack[-1] = Stack[-7]
0x2fc: Call2 0xdbd

0x2fd: Pop(3)
0x2fe: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x2ff: PushEmpty(int, object, bool)
0x300: Stack[-2] = Stack[-8]
0x301: Stack[-1] = Stack[-6]
0x302: Call2 0xc33

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
0x310: Call2 0xc3d

0x311: Pop(1)
0x312: Return(); Pop(2)

0x313: PushEmpty(int, int)
0x314: PushEmpty(int, object)
0x315: Stack[-1] = Stack[-5]
0x316: Call2 0xc87

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
0x324: Call2 0xc8a

0x325: Pop(1)
0x326: Return(); Pop(2)

0x327: PushEmpty(int, int)
0x328: PushEmpty(bool, object, string)
0x329: Stack[-2] = Stack[-7]
0x32a: Stack[-1] = Stack[-6]
0x32b: Call2 0xb78

0x32c: Pop(2)
0x32d: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x32e: PushEmpty()
0x32f: Call2 0x35a

0x330: Pop(0)
0x331: PushEmpty(object, string)
0x332: Stack[-2] = Stack[-6]
0x333: Stack[-1] = Stack[-5]
0x334: Call2 0xb98

0x335: Pop(2)
0x336: GOTO 0x34b

0x337: PushEmpty(int, string, object)
0x338: Stack[-2] = Stack[-6]
0x339: Stack[-1] = Stack[-7]
0x33a: Call2 0xc8c

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
0x349: Call2 0xc8f

0x34a: Pop(2)
0x34b: Return(); Pop(2)

0x34c: PushEmpty()
0x34d: PushEmpty(bool, string)
0x34e: Stack[-1] = Stack[-3]
0x34f: Call2 0xbdb

0x350: Pop(1)
0x351: IF (Stack[-1] == 0) GOTO 0x359; Pop(1)

0x352: PushEmpty()
0x353: Call2 0x35a

0x354: Pop(0)
0x355: PushEmpty(string)
0x356: Stack[-1] = Stack[-2]
0x357: Call2 0xbeb

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
0x36b: Call2 0xb72

0x36c: Pop(1)
0x36d: Return(); Pop(0)

0x36e: PushEmpty(cvector, cvector, cvector, cvector)
0x36f: Push((int) 111)
0x370: Pop(1); Push((bool) Stack[-6] != Stack[-1])
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Return(); Pop(4)

0x373: PushEmpty(bool, object)
0x374: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x375: Call2 0xa1e

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
0x381: Call2 0x9d5

0x382: Stack[-3] = Stack[-2]
0x383: Pop(2)
0x384: PushEmpty(float, cvector, cvector)
0x385: Stack[-2] = Stack[-5]
0x386: Stack[-1] = Stack[-4]
0x387: Call2 0xb51

0x388: Pop(2)
0x389: Push((float)0.5)
0x38a: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x390; Pop(1)

0x38c: PushEmpty(object)
0x38d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x38e: Call2 0xa36

0x38f: Pop(1)
0x390: Return(); Pop(4)

0x391: PushEmpty()
0x392: Call2 0x35a

0x393: Pop(0)
0x394: PushEmpty()
0x395: Call2 0xc9a

0x396: Pop(0)
0x397: Return(); Pop(0)

0x398: PushEmpty()
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[-3]
0x39b: Call2 0xbb1

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x39e: PushEmpty()
0x39f: Call2 0x35a

0x3a0: Pop(0)
0x3a1: PushEmpty(object)
0x3a2: Stack[-1] = Stack[-2]
0x3a3: Call2 0xbc8

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
0x3c6: Call2 0xc9a

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
0x3d3: Call2 0xb27

0x3d4: Pop(1)
0x3d5: Push((float)0.75)
0x3d6: Pop(1); Push(Stack[-8] * Stack[-1]);
0x3d7: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Call2 0xb27

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
0x409: Call2 0x9d0

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
0x424: Call2 0x9d0

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
0x460: Call2 0x9d0

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
0x471: Call2 0xb72

0x472: Pop(1)
0x473: Return(); Pop(0)

0x474: PushEmpty(cvector, cvector, cvector, cvector)
0x475: @ GetDirection(Stack[-2])
0x476: Pop(0)
0x477: PushEmpty(cvector, object)
0x478: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x479: Call2 0x9d5

0x47a: Stack[-3] = Stack[-2]
0x47b: Pop(2)
0x47c: PushEmpty(float, cvector, cvector)
0x47d: Stack[-2] = Stack[-5]
0x47e: Stack[-1] = Stack[-4]
0x47f: Call2 0xb36

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
0x48e: Call2 0xb27

0x48f: Pop(1)
0x490: Push((float)0.75)
0x491: Pop(1); Push(Stack[-8] * Stack[-1]);
0x492: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x493: Call2 0xb27

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
0x4c4: Call2 0x9d0

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
0x4df: Call2 0x9d0

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
0x51b: Call2 0x9d0

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
0x52c: Call2 0xb72

0x52d: Pop(1)
0x52e: Return(); Pop(0)

0x52f: PushEmpty(cvector, cvector, cvector, cvector)
0x530: @ GetDirection(Stack[-2])
0x531: Pop(0)
0x532: PushEmpty(cvector, object)
0x533: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x534: Call2 0x9d5

0x535: Stack[-3] = Stack[-2]
0x536: Pop(2)
0x537: PushEmpty(float, cvector, cvector)
0x538: Stack[-2] = Stack[-5]
0x539: Stack[-1] = Stack[-4]
0x53a: Call2 0xb36

0x53b: Pop(2)
0x53c: Push((float)-0.34202)
0x53d: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x53e: Return(); Pop(4)

0x53f: PushEmpty()
0x540: Call2 0x5e1

0x541: Pop(0)
0x542: PushEmpty()
0x543: Call2 0xc9a

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
0x550: Call2 0xb27

0x551: Pop(1)
0x552: Push((float)0.75)
0x553: Pop(1); Push(Stack[-8] * Stack[-1]);
0x554: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x555: Call2 0xb27

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
0x586: Call2 0x9d0

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
0x5a1: Call2 0x9d0

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
0x5dd: Call2 0x9d0

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
0x5ee: Call2 0xb72

0x5ef: Pop(1)
0x5f0: Return(); Pop(0)

0x5f1: PushEmpty(cvector, cvector, cvector, cvector)
0x5f2: @ GetDirection(Stack[-2])
0x5f3: Pop(0)
0x5f4: PushEmpty(cvector, object)
0x5f5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x5f6: Call2 0x9d5

0x5f7: Stack[-3] = Stack[-2]
0x5f8: Pop(2)
0x5f9: PushEmpty(float, cvector, cvector)
0x5fa: Stack[-2] = Stack[-5]
0x5fb: Stack[-1] = Stack[-4]
0x5fc: Call2 0xb36

0x5fd: Pop(2)
0x5fe: Push((float)-0.34202)
0x5ff: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x600: Return(); Pop(4)

0x601: PushEmpty()
0x602: Call2 0x6a3

0x603: Pop(0)
0x604: PushEmpty()
0x605: Call2 0xc9a

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
0x612: Call2 0xb27

0x613: Pop(1)
0x614: Push((float)0.75)
0x615: Pop(1); Push(Stack[-8] * Stack[-1]);
0x616: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x617: Call2 0xb27

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
0x648: Call2 0x9d0

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
0x663: Call2 0x9d0

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
0x69f: Call2 0x9d0

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
0x6b0: Call2 0xb72

0x6b1: Pop(1)
0x6b2: Return(); Pop(0)

0x6b3: PushEmpty(cvector, cvector, cvector, cvector)
0x6b4: @ GetDirection(Stack[-2])
0x6b5: Pop(0)
0x6b6: PushEmpty(cvector, object)
0x6b7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6b8: Call2 0x9d5

0x6b9: Stack[-3] = Stack[-2]
0x6ba: Pop(2)
0x6bb: PushEmpty(float, cvector, cvector)
0x6bc: Stack[-2] = Stack[-5]
0x6bd: Stack[-1] = Stack[-4]
0x6be: Call2 0xb36

0x6bf: Pop(2)
0x6c0: Push((float)-0.34202)
0x6c1: Stack[-7] = Stack[-2] >= Stack[-1]; Pop(2);
0x6c2: Return(); Pop(4)

0x6c3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6c5: PushEmpty(bool, object, float)
0x6c6: Stack[-2] = Stack[-12]
0x6c7: Stack[-1] = (float) 70.0
0x6c8: Call2 0xa46

0x6c9: Pop(2)
0x6ca: Pop(1); Push((bool) Stack[-1] == 0)
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-10] = (int) -2
0x6cd: Return(); Pop(8)

0x6ce: @ CreateDialog(Stack[-4])
0x6cf: Pop(0)
0x6d0: PushEmpty(int)
0x6d1: Call2 0xd7f

0x6d2: Pop(0)
0x6d3: @@ SetNPCName(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(int)
0x6d6: Call2 0xd7d

0x6d7: Pop(0)
0x6d8: @@ SetNPCDescription(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(string)
0x6db: Call2 0xd81

0x6dc: Pop(0)
0x6dd: @@ SetPhoto(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0xd83

0x6e1: Pop(0)
0x6e2: @@ SetPhoto2(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(int)
0x6e5: Call2 0xcff

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
0x704: Call2 0xa8a

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
0x712: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x713: PushEmpty(bool, object)
0x714: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x715: Call2 0xce2

0x716: Pop(1)
0x717: IF (Stack[-1] == 0) GOTO 0x731; Pop(1)

0x718: PushEmpty(string)
0x719: Stack[-1] = "Neutral"
0x71a: Call2 0x784

0x71b: Pop(1)
0x71c: Push((int) 543287)
0x71d: @@ SetMessage(Stack[-1])
0x71e: Pop(1)
0x71f: @@ ClearReplies()
0x720: Pop(0)
0x721: Push((int) 543288)
0x722: Push((int) -1)
0x723: Push((int) 45744)
0x724: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x725: Pop(3)
0x726: Push((int) 543289)
0x727: Push((int) -1)
0x728: Push((int) 45745)
0x729: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72a: Pop(3)
0x72b: Push((int) 543304)
0x72c: Push((int) -1)
0x72d: Push((int) 45760)
0x72e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72f: Pop(3)
0x730: GOTO 0x766

0x731: PushEmpty(string)
0x732: Stack[-1] = "Neutral"
0x733: Call2 0x784

0x734: Pop(1)
0x735: Push((int) 537723)
0x736: @@ SetMessage(Stack[-1])
0x737: Pop(1)
0x738: @@ ClearReplies()
0x739: Pop(0)
0x73a: PushEmpty(bool, object)
0x73b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73c: Call2 0xcd6

0x73d: Pop(1)
0x73e: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x73f: Push((int) 537724)
0x740: Push((int) 39573)
0x741: Push((int) 39572)
0x742: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x743: Pop(3)
0x744: PushEmpty(bool, object)
0x745: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x746: Call2 0xcd6

0x747: Pop(1)
0x748: Pop(1); Push((bool) Stack[-1] == 0)
0x749: IF (Stack[-1] == 0) GOTO 0x74f; Pop(1)

0x74a: Push((int) 537728)
0x74b: Push((int) -1)
0x74c: Push((int) 39576)
0x74d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74e: Pop(3)
0x74f: PushEmpty(bool, object)
0x750: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x751: Call2 0xcee

0x752: Pop(1)
0x753: IF (Stack[-1] == 0) GOTO 0x759; Pop(1)

0x754: Push((int) 537755)
0x755: Push((int) 39604)
0x756: Push((int) 39603)
0x757: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x758: Pop(3)
0x759: Push((int) 537783)
0x75a: Push((int) -1)
0x75b: Push((int) 39634)
0x75c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75d: Pop(3)
0x75e: Push((int) 537784)
0x75f: Push((int) -1)
0x760: Push((int) 39635)
0x761: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x762: Pop(3)
0x763: GOTO 0x766

0x764: Return(); Pop(0)

0x765: GOTO 0x711

0x766: PushEmpty(bool)
0x767: Call2 0xd85

0x768: Pop(0)
0x769: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x76a: @ lshWaitForAnimEnd()
0x76b: Pop(0)
0x76c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76d: IF (Stack[-1] == 0) GOTO 0x76f; Pop(1)

0x76e: GOTO 0x774

0x76f: PushEmpty(string)
0x770: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x771: Call2 0xad6

0x772: Pop(1)
0x773: GOTO 0x76a

0x774: GOTO 0x783

0x775: Push("all")
0x776: Push("idle")
0x777: @ PlayAnimation(Stack[-2], Stack[-1])
0x778: Pop(2)
0x779: @ WaitForAnimEnd()
0x77a: Pop(0)
0x77b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77c: IF (Stack[-1] == 0) GOTO 0x77e; Pop(1)

0x77d: GOTO 0x783

0x77e: Push("all")
0x77f: Push("idle")
0x780: @ PlayAnimation(Stack[-2], Stack[-1])
0x781: Pop(2)
0x782: GOTO 0x779

0x783: Return(); Pop(0)

0x784: PushEmpty()
0x785: PushEmpty(bool)
0x786: Call2 0xd85

0x787: Pop(0)
0x788: Pop(1); Push((bool) Stack[-1] == 0)
0x789: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x78a: Return(); Pop(0)

0x78b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x78c: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x78d: Return(); Pop(0)

0x78e: PushEmpty(string, bool)
0x78f: Stack[-2] = Stack[-3]
0x790: Push("")
0x791: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x792: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x793: Stack[-1] = (bool) 0
0x794: GOTO 0x796

0x795: Stack[-1] = (bool) 1
0x796: Call2 0xae6

0x797: Pop(2)
0x798: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x799: Return(); Pop(0)

0x79a: PushEmpty()
0x79b: Push((int) 1)
0x79c: IF (Stack[-1] == 0) GOTO 0x9cf; Pop(1)

0x79d: PushEmpty()
0x79e: Call2 0xb00

0x79f: Pop(0)
0x7a0: Push((int) 45744)
0x7a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a3: PushEmpty(object, object)
0x7a4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a6: Call2 0xcd1

0x7a7: Pop(2)
0x7a8: Push((int) 39574)
0x7a9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7aa: IF (Stack[-1] == 0) GOTO 0x7b0; Pop(1)

0x7ab: PushEmpty(object, object)
0x7ac: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ad: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ae: Call2 0xcd1

0x7af: Pop(2)
0x7b0: Push((int) 39576)
0x7b1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b2: IF (Stack[-1] == 0) GOTO 0x7b8; Pop(1)

0x7b3: PushEmpty(object, object)
0x7b4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b6: Call2 0xcd1

0x7b7: Pop(2)
0x7b8: Push((int) 45743)
0x7b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7ba: IF (Stack[-1] == 0) GOTO 0x80c; Pop(1)

0x7bb: PushEmpty(bool, object)
0x7bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bd: Call2 0xce2

0x7be: Pop(1)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7d9; Pop(1)

0x7c0: PushEmpty(string)
0x7c1: Stack[-1] = "Neutral"
0x7c2: Call2 0x784

0x7c3: Pop(1)
0x7c4: Push((int) 543287)
0x7c5: @@ SetMessage(Stack[-1])
0x7c6: Pop(1)
0x7c7: @@ ClearReplies()
0x7c8: Pop(0)
0x7c9: Push((int) 543288)
0x7ca: Push((int) -1)
0x7cb: Push((int) 45744)
0x7cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cd: Pop(3)
0x7ce: Push((int) 543289)
0x7cf: Push((int) -1)
0x7d0: Push((int) 45745)
0x7d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d2: Pop(3)
0x7d3: Push((int) 543304)
0x7d4: Push((int) -1)
0x7d5: Push((int) 45760)
0x7d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d7: Pop(3)
0x7d8: Return(); Pop(0)

0x7d9: PushEmpty(string)
0x7da: Stack[-1] = "Neutral"
0x7db: Call2 0x784

0x7dc: Pop(1)
0x7dd: Push((int) 537723)
0x7de: @@ SetMessage(Stack[-1])
0x7df: Pop(1)
0x7e0: @@ ClearReplies()
0x7e1: Pop(0)
0x7e2: PushEmpty(bool, object)
0x7e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7e4: Call2 0xcd6

0x7e5: Pop(1)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7ec; Pop(1)

0x7e7: Push((int) 537724)
0x7e8: Push((int) 39573)
0x7e9: Push((int) 39572)
0x7ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7eb: Pop(3)
0x7ec: PushEmpty(bool, object)
0x7ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ee: Call2 0xcd6

0x7ef: Pop(1)
0x7f0: Pop(1); Push((bool) Stack[-1] == 0)
0x7f1: IF (Stack[-1] == 0) GOTO 0x7f7; Pop(1)

0x7f2: Push((int) 537728)
0x7f3: Push((int) -1)
0x7f4: Push((int) 39576)
0x7f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f6: Pop(3)
0x7f7: PushEmpty(bool, object)
0x7f8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f9: Call2 0xcee

0x7fa: Pop(1)
0x7fb: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7fc: Push((int) 537755)
0x7fd: Push((int) 39604)
0x7fe: Push((int) 39603)
0x7ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x800: Pop(3)
0x801: Push((int) 537783)
0x802: Push((int) -1)
0x803: Push((int) 39634)
0x804: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x805: Pop(3)
0x806: Push((int) 537784)
0x807: Push((int) -1)
0x808: Push((int) 39635)
0x809: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80a: Pop(3)
0x80b: Return(); Pop(0)

0x80c: Push((int) 39604)
0x80d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80e: IF (Stack[-1] == 0) GOTO 0x828; Pop(1)

0x80f: PushEmpty(string)
0x810: Stack[-1] = "Neutral"
0x811: Call2 0x784

0x812: Pop(1)
0x813: Push((int) 537756)
0x814: @@ SetMessage(Stack[-1])
0x815: Pop(1)
0x816: @@ ClearReplies()
0x817: Pop(0)
0x818: Push((int) 537757)
0x819: Push((int) 39606)
0x81a: Push((int) 39605)
0x81b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81c: Pop(3)
0x81d: Push((int) 537766)
0x81e: Push((int) 39615)
0x81f: Push((int) 39614)
0x820: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x821: Pop(3)
0x822: Push((int) 537782)
0x823: Push((int) -1)
0x824: Push((int) 39633)
0x825: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x826: Pop(3)
0x827: Return(); Pop(0)

0x828: Push((int) 39615)
0x829: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82a: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x82b: PushEmpty(string)
0x82c: Stack[-1] = "Neutral"
0x82d: Call2 0x784

0x82e: Pop(1)
0x82f: Push((int) 537767)
0x830: @@ SetMessage(Stack[-1])
0x831: Pop(1)
0x832: @@ ClearReplies()
0x833: Pop(0)
0x834: Push((int) 537768)
0x835: Push((int) 39617)
0x836: Push((int) 39616)
0x837: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x838: Pop(3)
0x839: Push((int) 537781)
0x83a: Push((int) -1)
0x83b: Push((int) 39632)
0x83c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83d: Pop(3)
0x83e: Return(); Pop(0)

0x83f: Push((int) 39617)
0x840: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x841: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x842: PushEmpty(string)
0x843: Stack[-1] = "Neutral"
0x844: Call2 0x784

0x845: Pop(1)
0x846: Push((int) 537769)
0x847: @@ SetMessage(Stack[-1])
0x848: Pop(1)
0x849: @@ ClearReplies()
0x84a: Pop(0)
0x84b: Push((int) 537770)
0x84c: Push((int) 39608)
0x84d: Push((int) 39618)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Push((int) 537771)
0x851: Push((int) 39621)
0x852: Push((int) 39620)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: Return(); Pop(0)

0x856: Push((int) 39621)
0x857: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x858: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x859: PushEmpty(string)
0x85a: Stack[-1] = "Neutral"
0x85b: Call2 0x784

0x85c: Pop(1)
0x85d: Push((int) 537772)
0x85e: @@ SetMessage(Stack[-1])
0x85f: Pop(1)
0x860: @@ ClearReplies()
0x861: Pop(0)
0x862: PushEmpty(bool, object)
0x863: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x864: Call2 0xcd6

0x865: Pop(1)
0x866: IF (Stack[-1] == 0) GOTO 0x86c; Pop(1)

0x867: Push((int) 537773)
0x868: Push((int) 39623)
0x869: Push((int) 39622)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Push((int) 537777)
0x86d: Push((int) 39628)
0x86e: Push((int) 39627)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: Return(); Pop(0)

0x872: Push((int) 39628)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x88e; Pop(1)

0x875: PushEmpty(string)
0x876: Stack[-1] = "Neutral"
0x877: Call2 0x784

0x878: Pop(1)
0x879: Push((int) 537778)
0x87a: @@ SetMessage(Stack[-1])
0x87b: Pop(1)
0x87c: @@ ClearReplies()
0x87d: Pop(0)
0x87e: Push((int) 537779)
0x87f: Push((int) 39608)
0x880: Push((int) 39629)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: PushEmpty(bool, object)
0x884: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x885: Call2 0xcd6

0x886: Pop(1)
0x887: IF (Stack[-1] == 0) GOTO 0x88d; Pop(1)

0x888: Push((int) 537780)
0x889: Push((int) -1)
0x88a: Push((int) 39631)
0x88b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88c: Pop(3)
0x88d: Return(); Pop(0)

0x88e: Push((int) 39623)
0x88f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x890: IF (Stack[-1] == 0) GOTO 0x8a5; Pop(1)

0x891: PushEmpty(string)
0x892: Stack[-1] = "Neutral"
0x893: Call2 0x784

0x894: Pop(1)
0x895: Push((int) 537774)
0x896: @@ SetMessage(Stack[-1])
0x897: Pop(1)
0x898: @@ ClearReplies()
0x899: Pop(0)
0x89a: Push((int) 537775)
0x89b: Push((int) 39608)
0x89c: Push((int) 39624)
0x89d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89e: Pop(3)
0x89f: Push((int) 537776)
0x8a0: Push((int) -1)
0x8a1: Push((int) 39626)
0x8a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a3: Pop(3)
0x8a4: Return(); Pop(0)

0x8a5: Push((int) 39606)
0x8a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a7: IF (Stack[-1] == 0) GOTO 0x8b7; Pop(1)

0x8a8: PushEmpty(string)
0x8a9: Stack[-1] = "Neutral"
0x8aa: Call2 0x784

0x8ab: Pop(1)
0x8ac: Push((int) 537758)
0x8ad: @@ SetMessage(Stack[-1])
0x8ae: Pop(1)
0x8af: @@ ClearReplies()
0x8b0: Pop(0)
0x8b1: Push((int) 537759)
0x8b2: Push((int) 39608)
0x8b3: Push((int) 39607)
0x8b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b5: Pop(3)
0x8b6: Return(); Pop(0)

0x8b7: Push((int) 39608)
0x8b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b9: IF (Stack[-1] == 0) GOTO 0x8ce; Pop(1)

0x8ba: PushEmpty(string)
0x8bb: Stack[-1] = "Neutral"
0x8bc: Call2 0x784

0x8bd: Pop(1)
0x8be: Push((int) 537760)
0x8bf: @@ SetMessage(Stack[-1])
0x8c0: Pop(1)
0x8c1: @@ ClearReplies()
0x8c2: Pop(0)
0x8c3: Push((int) 537761)
0x8c4: Push((int) 39610)
0x8c5: Push((int) 39609)
0x8c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c7: Pop(3)
0x8c8: Push((int) 537765)
0x8c9: Push((int) -1)
0x8ca: Push((int) 39613)
0x8cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cc: Pop(3)
0x8cd: Return(); Pop(0)

0x8ce: Push((int) 39610)
0x8cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d0: IF (Stack[-1] == 0) GOTO 0x8e5; Pop(1)

0x8d1: PushEmpty(string)
0x8d2: Stack[-1] = "Neutral"
0x8d3: Call2 0x784

0x8d4: Pop(1)
0x8d5: Push((int) 537762)
0x8d6: @@ SetMessage(Stack[-1])
0x8d7: Pop(1)
0x8d8: @@ ClearReplies()
0x8d9: Pop(0)
0x8da: Push((int) 537763)
0x8db: Push((int) -1)
0x8dc: Push((int) 39611)
0x8dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8de: Pop(3)
0x8df: Push((int) 537764)
0x8e0: Push((int) -1)
0x8e1: Push((int) 39612)
0x8e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e3: Pop(3)
0x8e4: Return(); Pop(0)

0x8e5: Push((int) 39589)
0x8e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e7: IF (Stack[-1] == 0) GOTO 0x8e8; Pop(1)

0x8e8: Push((int) 39596)
0x8e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ea: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8eb: PushEmpty(string)
0x8ec: Stack[-1] = "Neutral"
0x8ed: Call2 0x784

0x8ee: Pop(1)
0x8ef: Push((int) 537748)
0x8f0: @@ SetMessage(Stack[-1])
0x8f1: Pop(1)
0x8f2: @@ ClearReplies()
0x8f3: Pop(0)
0x8f4: Push((int) 537749)
0x8f5: Push((int) 39598)
0x8f6: Push((int) 39597)
0x8f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f8: Pop(3)
0x8f9: Push((int) 537753)
0x8fa: Push((int) -1)
0x8fb: Push((int) 39601)
0x8fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fd: Pop(3)
0x8fe: Return(); Pop(0)

0x8ff: Push((int) 39598)
0x900: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x901: IF (Stack[-1] == 0) GOTO 0x916; Pop(1)

0x902: PushEmpty(string)
0x903: Stack[-1] = "Neutral"
0x904: Call2 0x784

0x905: Pop(1)
0x906: Push((int) 537750)
0x907: @@ SetMessage(Stack[-1])
0x908: Pop(1)
0x909: @@ ClearReplies()
0x90a: Pop(0)
0x90b: Push((int) 537751)
0x90c: Push((int) -1)
0x90d: Push((int) 39599)
0x90e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90f: Pop(3)
0x910: Push((int) 537752)
0x911: Push((int) -1)
0x912: Push((int) 39600)
0x913: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x914: Pop(3)
0x915: Return(); Pop(0)

0x916: Push((int) 39591)
0x917: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x918: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x919: PushEmpty(string)
0x91a: Stack[-1] = "Neutral"
0x91b: Call2 0x784

0x91c: Pop(1)
0x91d: Push((int) 537743)
0x91e: @@ SetMessage(Stack[-1])
0x91f: Pop(1)
0x920: @@ ClearReplies()
0x921: Pop(0)
0x922: Push((int) 537744)
0x923: Push((int) -1)
0x924: Push((int) 39592)
0x925: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x926: Pop(3)
0x927: Push((int) 537745)
0x928: Push((int) -1)
0x929: Push((int) 39593)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Push((int) 537746)
0x92d: Push((int) -1)
0x92e: Push((int) 39594)
0x92f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: Return(); Pop(0)

0x932: Push((int) 39578)
0x933: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x934: IF (Stack[-1] == 0) GOTO 0x935; Pop(1)

0x935: Push((int) 39580)
0x936: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x937: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x938: PushEmpty(string)
0x939: Stack[-1] = "Neutral"
0x93a: Call2 0x784

0x93b: Pop(1)
0x93c: Push((int) 537732)
0x93d: @@ SetMessage(Stack[-1])
0x93e: Pop(1)
0x93f: @@ ClearReplies()
0x940: Pop(0)
0x941: Push((int) 537733)
0x942: Push((int) 39582)
0x943: Push((int) 39581)
0x944: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x945: Pop(3)
0x946: Push((int) 537737)
0x947: Push((int) -1)
0x948: Push((int) 39585)
0x949: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x94a: Pop(3)
0x94b: Return(); Pop(0)

0x94c: Push((int) 39582)
0x94d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94e: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x94f: PushEmpty(string)
0x950: Stack[-1] = "Neutral"
0x951: Call2 0x784

0x952: Pop(1)
0x953: Push((int) 537734)
0x954: @@ SetMessage(Stack[-1])
0x955: Pop(1)
0x956: @@ ClearReplies()
0x957: Pop(0)
0x958: Push((int) 537735)
0x959: Push((int) -1)
0x95a: Push((int) 39583)
0x95b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95c: Pop(3)
0x95d: Push((int) 537736)
0x95e: Push((int) -1)
0x95f: Push((int) 39584)
0x960: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x961: Pop(3)
0x962: Return(); Pop(0)

0x963: Push((int) 39573)
0x964: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x965: IF (Stack[-1] == 0) GOTO 0x97a; Pop(1)

0x966: PushEmpty(string)
0x967: Stack[-1] = "Neutral"
0x968: Call2 0x784

0x969: Pop(1)
0x96a: Push((int) 537725)
0x96b: @@ SetMessage(Stack[-1])
0x96c: Pop(1)
0x96d: @@ ClearReplies()
0x96e: Pop(0)
0x96f: Push((int) 537726)
0x970: Push((int) -1)
0x971: Push((int) 39574)
0x972: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x973: Pop(3)
0x974: Push((int) 537727)
0x975: Push((int) -1)
0x976: Push((int) 39575)
0x977: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x978: Pop(3)
0x979: Return(); Pop(0)

0x97a: Push((int) 45761)
0x97b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97c: IF (Stack[-1] == 0) GOTO 0x97d; Pop(1)

0x97d: Push((int) 45766)
0x97e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97f: IF (Stack[-1] == 0) GOTO 0x994; Pop(1)

0x980: PushEmpty(string)
0x981: Stack[-1] = "Neutral"
0x982: Call2 0x784

0x983: Pop(1)
0x984: Push((int) 543310)
0x985: @@ SetMessage(Stack[-1])
0x986: Pop(1)
0x987: @@ ClearReplies()
0x988: Pop(0)
0x989: Push((int) 543312)
0x98a: Push((int) -1)
0x98b: Push((int) 45768)
0x98c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x98d: Pop(3)
0x98e: Push((int) 543311)
0x98f: Push((int) -1)
0x990: Push((int) 45767)
0x991: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x992: Pop(3)
0x993: Return(); Pop(0)

0x994: Push((int) 45752)
0x995: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x996: IF (Stack[-1] == 0) GOTO 0x997; Pop(1)

0x997: Push((int) 45756)
0x998: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x999: IF (Stack[-1] == 0) GOTO 0x9ae; Pop(1)

0x99a: PushEmpty(string)
0x99b: Stack[-1] = "Neutral"
0x99c: Call2 0x784

0x99d: Pop(1)
0x99e: Push((int) 543300)
0x99f: @@ SetMessage(Stack[-1])
0x9a0: Pop(1)
0x9a1: @@ ClearReplies()
0x9a2: Pop(0)
0x9a3: Push((int) 543302)
0x9a4: Push((int) -1)
0x9a5: Push((int) 45758)
0x9a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a7: Pop(3)
0x9a8: Push((int) 543303)
0x9a9: Push((int) -1)
0x9aa: Push((int) 45759)
0x9ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ac: Pop(3)
0x9ad: Return(); Pop(0)

0x9ae: Push((int) 45755)
0x9af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b0: IF (Stack[-1] == 0) GOTO 0x9c0; Pop(1)

0x9b1: PushEmpty(string)
0x9b2: Stack[-1] = "Neutral"
0x9b3: Call2 0x784

0x9b4: Pop(1)
0x9b5: Push((int) 543299)
0x9b6: @@ SetMessage(Stack[-1])
0x9b7: Pop(1)
0x9b8: @@ ClearReplies()
0x9b9: Pop(0)
0x9ba: Push((int) 543301)
0x9bb: Push((int) -1)
0x9bc: Push((int) 45757)
0x9bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9be: Pop(3)
0x9bf: Return(); Pop(0)

0x9c0: Push((int) 45747)
0x9c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c2: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9c3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x9c4: PushEmpty(bool)
0x9c5: Call2 0xd85

0x9c6: Pop(0)
0x9c7: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9c8: @ lshStopAnimation()
0x9c9: Pop(0)
0x9ca: GOTO 0x9cd

0x9cb: @ StopAnimation()
0x9cc: Pop(0)
0x9cd: Return(); Pop(0)

0x9ce: GOTO 0x79b

0x9cf: Return(); Pop(0)

0x9d0: PushEmpty(cvector, cvector)
0x9d1: @ GetPosition(Stack[-1])
0x9d2: Pop(0)
0x9d3: Stack[-3] = Stack[-1]
0x9d4: Return(); Pop(2)

0x9d5: PushEmpty(cvector, cvector, cvector, cvector)
0x9d6: @ GetPosition(Stack[-2])
0x9d7: Pop(0)
0x9d8: @@ GetPosition(Stack[-1])
0x9d9: Pop(0)
0x9da: Stack[-6] = Stack[-1] - Stack[-2]; Pop(0);
0x9db: Return(); Pop(4)

0x9dc: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x9dd: @ GetPosition(Stack[-3])
0x9de: Pop(0)
0x9df: @@ GetPosition(Stack[-2])
0x9e0: Pop(0)
0x9e1: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x9e2: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x9e3: Return(); Pop(6)

0x9e4: PushEmpty(bool, bool)
0x9e5: @ IsPlayerActor(Stack[-3], Stack[-1])
0x9e6: Pop(0)
0x9e7: Stack[-4] = Stack[-1]
0x9e8: Return(); Pop(2)

0x9e9: PushEmpty(bool, bool)
0x9ea: Push("HasProperty")
0x9eb: Push((int) 2)
0x9ec: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x9ed: Pop(1); Push((bool) Stack[-1] == 0)
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9ef: Stack[-5] = (bool) 0
0x9f0: Return(); Pop(2)

0x9f1: @@ HasProperty(Stack[-3], Stack[-1])
0x9f2: Pop(0)
0x9f3: Stack[-5] = Stack[-1]
0x9f4: Return(); Pop(2)

0x9f5: PushEmpty(bool, bool)
0x9f6: @@ IsDead(Stack[-1])
0x9f7: Pop(0)
0x9f8: Stack[-4] = Stack[-1]
0x9f9: Return(); Pop(2)

0x9fa: PushEmpty(object, object, object, object)
0x9fb: Pop(0); Push((bool) Stack[-5] == 0)
0x9fc: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fd: Stack[-6] = (bool) 0
0x9fe: Return(); Pop(4)

0x9ff: PushEmpty(bool)
0xa00: Stack[-1] = (bool) 0
0xa01: Push("IsDead")
0xa02: Push((int) 1)
0xa03: Pop(2); Push(IsFuncExist(Stack[-8], Stack[-2], Stack[-1]))
0xa04: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa05: PushEmpty(bool, object)
0xa06: Stack[-1] = Stack[-8]
0xa07: Call2 0x9f5

0xa08: Pop(1)
0xa09: IF (Stack[-1] == 0) GOTO 0xa0b; Pop(1)

0xa0a: Stack[-1] = (bool) 1
0xa0b: IF (Stack[-1] == 0) GOTO 0xa0e; Pop(1)

0xa0c: Stack[-6] = (bool) 0
0xa0d: Return(); Pop(4)

0xa0e: @ GetScene(Stack[-2])
0xa0f: Pop(0)
0xa10: Pop(0); Push((bool) Stack[-2] == 0)
0xa11: IF (Stack[-1] == 0) GOTO 0xa14; Pop(1)

0xa12: Stack[-6] = (bool) 0
0xa13: Return(); Pop(4)

0xa14: @@ GetScene(Stack[-1])
0xa15: Pop(0)
0xa16: Pop(0); Push((bool) Stack[-2] != Stack[-1])
0xa17: IF (Stack[-1] == 0) GOTO 0xa1a; Pop(1)

0xa18: Stack[-6] = (bool) 0
0xa19: Return(); Pop(4)

0xa1a: Stack[-6] = (bool) 1
0xa1b: Return(); Pop(4)

0xa1c: Stack[-1] = 0
0xa1d: Stack[-2] = 0
0xa1e: PushEmpty(int, int)
0xa1f: PushEmpty(bool, object)
0xa20: Stack[-1] = Stack[-5]
0xa21: Call2 0x9fa

0xa22: Pop(1)
0xa23: Pop(1); Push((bool) Stack[-1] == 0)
0xa24: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa25: Stack[-4] = (bool) 0
0xa26: Return(); Pop(2)

0xa27: PushEmpty(bool, object, string)
0xa28: Stack[-2] = Stack[-6]
0xa29: Stack[-1] = "noaccess"
0xa2a: Call2 0x9e9

0xa2b: Pop(2)
0xa2c: Pop(1); Push((bool) Stack[-1] == 0)
0xa2d: IF (Stack[-1] == 0) GOTO 0xa30; Pop(1)

0xa2e: Stack[-4] = (bool) 1
0xa2f: Return(); Pop(2)

0xa30: Push("noaccess")
0xa31: @@ GetProperty(Stack[-1], Stack[-2])
0xa32: Pop(1)
0xa33: Push((int) 0)
0xa34: Stack[-5] = Stack[-2] == Stack[-1]; Pop(1);
0xa35: Return(); Pop(2)

0xa36: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xa37: @@ GetPosition(Stack[-3])
0xa38: Pop(0)
0xa39: @ GetPosition(Stack[-2])
0xa3a: Pop(0)
0xa3b: Stack[-1] = Stack[-3] - Stack[-2]; Pop(0);
0xa3c: Push(CvectorIndex(Stack[-1], 0))
0xa3d: Push(CvectorIndex(Stack[-2], 2))
0xa3e: @ RotateAsync(Stack[-2], Stack[-1])
0xa3f: Pop(2)
0xa40: Return(); Pop(6)

0xa41: PushEmpty(bool, bool)
0xa42: @ IsLoaded(Stack[-1])
0xa43: Pop(0)
0xa44: Stack[-3] = Stack[-1]
0xa45: Return(); Pop(2)

0xa46: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xa47: @@ GetPosition(Stack[-8])
0xa48: Pop(0)
0xa49: @@ GetEyesHeight(Stack[-9])
0xa4a: Pop(0)
0xa4b: Push(CvectorIndex(Stack[-8], 1))
0xa4c: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa4d: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xa4e: @ GetPosition(Stack[-7])
0xa4f: Pop(0)
0xa50: @ GetEyesHeight(Stack[-9])
0xa51: Pop(0)
0xa52: Push(CvectorIndex(Stack[-7], 1))
0xa53: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xa54: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xa55: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xa56: Push(CvectorIndex(Stack[-6], 1))
0xa57: Stack[-1] = (int) 0
0xa58: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xa59: Pop(0); Push(Stack[-6] | Stack[-6]);
0xa5a: Pop(1); Push(Sqrt(Stack[-1]))
0xa5b: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xa5c: Stack[-5] = -Stack[-6]; Pop(0);
0xa5d: Pop(0); Push(Stack[-6] * Stack[-19]);
0xa5e: PushEmpty(cvector, cvector)
0xa5f: Push(CVector(0.0, 1.0, 0.0))
0xa60: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xa61: Call2 0xb27

0xa62: Pop(1)
0xa63: Push((int) 25)
0xa64: Pop(2); Push(Stack[-2] * Stack[-1]);
0xa65: Pop(2); Push(Stack[-2] + Stack[-1]);
0xa66: Push(CVector(0.0, 10.0, 0.0))
0xa67: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xa68: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xa69: @ IsOverrideActive(Stack[-2])
0xa6a: Pop(0)
0xa6b: Push(Stack[-2])
0xa6c: IF (Stack[-1] == 0) GOTO 0xa6f; Pop(1)

0xa6d: Stack[-21] = (bool) 0
0xa6e: Return(); Pop(18)

0xa6f: @ StopWorld()
0xa70: Pop(0)
0xa71: @ CameraTransit(Stack[-3], Stack[-5])
0xa72: Pop(0)
0xa73: Push(CvectorIndex(Stack[-4], 0))
0xa74: Push(CvectorIndex(Stack[-5], 2))
0xa75: @ Rotate(Stack[-2], Stack[-1])
0xa76: Pop(2)
0xa77: PushEmpty(bool)
0xa78: Call2 0xd85

0xa79: Pop(0)
0xa7a: IF (Stack[-1] == 0) GOTO 0xa7c; Pop(1)

0xa7b: GOTO 0xa84

0xa7c: Push("head")
0xa7d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa7e: Pop(1)
0xa7f: Push(Stack[-1])
0xa80: IF (Stack[-1] == 0) GOTO 0xa84; Pop(1)

0xa81: Push("head")
0xa82: @ LookAsyncCamera(Stack[-1])
0xa83: Pop(1)
0xa84: @ CameraWaitForPlayFinish()
0xa85: Pop(0)
0xa86: @ ResumeWorld()
0xa87: Pop(0)
0xa88: Stack[-21] = (bool) 1
0xa89: Return(); Pop(18)

0xa8a: PushEmpty(bool, bool)
0xa8b: @ CameraSwitchToNormal()
0xa8c: Pop(0)
0xa8d: PushEmpty(bool)
0xa8e: Call2 0xd85

0xa8f: Pop(0)
0xa90: IF (Stack[-1] == 0) GOTO 0xa92; Pop(1)

0xa91: GOTO 0xa9a

0xa92: Push("head")
0xa93: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xa94: Pop(1)
0xa95: Push(Stack[-1])
0xa96: IF (Stack[-1] == 0) GOTO 0xa9a; Pop(1)

0xa97: Push("head")
0xa98: @ UnlookAsync(Stack[-1])
0xa99: Pop(1)
0xa9a: Return(); Pop(2)

0xa9b: PushEmpty()
0xa9c: PushEmpty(bool, object, float)
0xa9d: Stack[-2] = Stack[-4]
0xa9e: Stack[-1] = (int) 70
0xa9f: Call2 0xaa3

0xaa0: Stack[-5] = Stack[-3]
0xaa1: Pop(3)
0xaa2: Return(); Pop(0)

0xaa3: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0xaa4: @@ GetPosition(Stack[-7])
0xaa5: Pop(0)
0xaa6: @@ GetEyesHeight(Stack[-8])
0xaa7: Pop(0)
0xaa8: Push(CvectorIndex(Stack[-7], 1))
0xaa9: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xaaa: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xaab: @ GetPosition(Stack[-6])
0xaac: Pop(0)
0xaad: @ GetEyesHeight(Stack[-8])
0xaae: Pop(0)
0xaaf: Push(CvectorIndex(Stack[-6], 1))
0xab0: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0xab1: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xab2: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0xab3: Push(CvectorIndex(Stack[-5], 1))
0xab4: Stack[-1] = (int) 0
0xab5: CvectorIndex(Stack[-6], 1) = Stack[-1];
0xab6: Pop(0); Push(Stack[-5] | Stack[-5]);
0xab7: Pop(1); Push(Sqrt(Stack[-1]))
0xab8: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0xab9: Stack[-4] = -Stack[-5]; Pop(0);
0xaba: Pop(0); Push(Stack[-5] * Stack[-17]);
0xabb: Push(CVector(0.0, 10.0, 0.0))
0xabc: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0xabd: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0xabe: @ IsOverrideActive(Stack[-1])
0xabf: Pop(0)
0xac0: Push(Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xac4; Pop(1)

0xac2: Stack[-19] = (bool) 0
0xac3: Return(); Pop(16)

0xac4: @ StopWorld()
0xac5: Pop(0)
0xac6: @ CameraTransit(Stack[-2], Stack[-4])
0xac7: Pop(0)
0xac8: Push(CvectorIndex(Stack[-3], 0))
0xac9: Push(CvectorIndex(Stack[-4], 2))
0xaca: @ Rotate(Stack[-2], Stack[-1])
0xacb: Pop(2)
0xacc: @ CameraWaitForPlayFinish()
0xacd: Pop(0)
0xace: @ ResumeWorld()
0xacf: Pop(0)
0xad0: Stack[-19] = (bool) 1
0xad1: Return(); Pop(16)

0xad2: PushEmpty()
0xad3: @ CameraSwitchToNormal()
0xad4: Pop(0)
0xad5: Return(); Pop(0)

0xad6: PushEmpty(bool, float, float, bool, float, float)
0xad7: @ lshHasAnimation(Stack[-3], Stack[-7])
0xad8: Pop(0)
0xad9: Push(Stack[-3])
0xada: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xadb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xadc: Pop(0)
0xadd: Push((bool) 0)
0xade: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xadf: Pop(1)
0xae0: GOTO 0xae5

0xae1: Push("Can't find lsh animation : ")
0xae2: Pop(1); Push(Stack[-1] + Stack[-8]);
0xae3: @ Trace(Stack[-1])
0xae4: Pop(1)
0xae5: Return(); Pop(6)

0xae6: PushEmpty(bool, float, float, bool, float, float)
0xae7: @ lshHasAnimation(Stack[-3], Stack[-8])
0xae8: Pop(0)
0xae9: Push(Stack[-3])
0xaea: IF (Stack[-1] == 0) GOTO 0xaf0; Pop(1)

0xaeb: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xaec: Pop(0)
0xaed: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xaee: Pop(0)
0xaef: GOTO 0xaf4

0xaf0: Push("Can't find lsh animation : ")
0xaf1: Pop(1); Push(Stack[-1] + Stack[-9]);
0xaf2: @ Trace(Stack[-1])
0xaf3: Pop(1)
0xaf4: Return(); Pop(6)

0xaf5: PushEmpty(float, cvector, float, cvector)
0xaf6: @@ GetEyesHeight(Stack[-2])
0xaf7: Pop(0)
0xaf8: Stack[-1] = CVector(0.0, 0.0, 0.0)
0xaf9: Push(CvectorIndex(Stack[-1], 1))
0xafa: Stack[-1] = Stack[-3]
0xafb: CvectorIndex(Stack[-2], 1) = Stack[-1];
0xafc: Push("head")
0xafd: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0xafe: Pop(1)
0xaff: Return(); Pop(4)

0xb00: PushEmpty(bool)
0xb01: Call2 0xd85

0xb02: Pop(0)
0xb03: IF (Stack[-1] == 0) GOTO 0xb06; Pop(1)

0xb04: @ lshStopSpeech()
0xb05: Pop(0)
0xb06: Return(); Pop(0)

0xb07: PushEmpty(bool, bool)
0xb08: PushEmpty(bool, int, int)
0xb09: Stack[-2] = Stack[-7]
0xb0a: Stack[-1] = Stack[-6]
0xb0b: Call2 0xb31

0xb0c: Pop(2)
0xb0d: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0e: Push((int) 0)
0xb0f: @ AddItem(Stack[-2], Stack[-6], Stack[-1])
0xb10: Pop(1)
0xb11: Return(); Pop(2)

0xb12: PushEmpty(int, bool, int, bool)
0xb13: PushEmpty(bool, int, int)
0xb14: Stack[-2] = Stack[-10]
0xb15: Stack[-1] = Stack[-9]
0xb16: Call2 0xb31

0xb17: Pop(2)
0xb18: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb19: @ irand(Stack[-2], Stack[-5])
0xb1a: Pop(0)
0xb1b: Push((int) 0)
0xb1c: Push((int) 1)
0xb1d: Pop(1); Push(Stack[-4] + Stack[-1]);
0xb1e: @ AddItem(Stack[-3], Stack[-10], Stack[-2], Stack[-1])
0xb1f: Pop(2)
0xb20: Return(); Pop(4)

0xb21: PushEmpty(object, object)
0xb22: @ self(Stack[-1])
0xb23: Pop(0)
0xb24: Stack[-3] = Stack[-1]
0xb25: Return(); Pop(2)

0xb26: Stack[-1] = 0
0xb27: PushEmpty(float, float)
0xb28: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb29: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xb2a: Push((float)0.0)
0xb2b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xb2c: IF (Stack[-1] == 0) GOTO 0xb2f; Pop(1)

0xb2d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xb2e: Return(); Pop(2)

0xb2f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xb30: Return(); Pop(2)

0xb31: PushEmpty(int, int)
0xb32: @ irand(Stack[-1], Stack[-3])
0xb33: Pop(0)
0xb34: Stack[-5] = Stack[-1] < Stack[-4]; Pop(0);
0xb35: Return(); Pop(2)

0xb36: PushEmpty()
0xb37: Pop(0); Push(Stack[-2] | Stack[-1]);
0xb38: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb39: Pop(0); Push(Stack[-3] | Stack[-3]);
0xb3a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb3b: Pop(1); Push(Sqrt(Stack[-1]))
0xb3c: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb3d: Return(); Pop(0)

0xb3e: PushEmpty()
0xb3f: Push(CvectorIndex(Stack[-2], 0))
0xb40: Push(CvectorIndex(Stack[-2], 0))
0xb41: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb42: Push(CvectorIndex(Stack[-3], 2))
0xb43: Push(CvectorIndex(Stack[-3], 2))
0xb44: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb45: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb46: Return(); Pop(0)

0xb47: PushEmpty()
0xb48: Push(CvectorIndex(Stack[-1], 0))
0xb49: Push(CvectorIndex(Stack[-2], 0))
0xb4a: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb4b: Push(CvectorIndex(Stack[-2], 2))
0xb4c: Push(CvectorIndex(Stack[-3], 2))
0xb4d: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb4e: Pop(2); Push(Stack[-2] + Stack[-1]);
0xb4f: Stack[-3] = Sqrt(Stack[-1]); Pop(1);
0xb50: Return(); Pop(0)

0xb51: PushEmpty()
0xb52: PushEmpty(float, cvector, cvector)
0xb53: Stack[-2] = Stack[-5]
0xb54: Stack[-1] = Stack[-4]
0xb55: Call2 0xb3e

0xb56: Pop(2)
0xb57: PushEmpty(float, cvector)
0xb58: Stack[-1] = Stack[-5]
0xb59: Call2 0xb47

0xb5a: Pop(1)
0xb5b: PushEmpty(float, cvector)
0xb5c: Stack[-1] = Stack[-5]
0xb5d: Call2 0xb47

0xb5e: Pop(1)
0xb5f: Pop(2); Push(Stack[-2] * Stack[-1]);
0xb60: Stack[-5] = Stack[-2] / Stack[-1]; Pop(2);
0xb61: Return(); Pop(0)

0xb62: PushEmpty(int, int)
0xb63: @ GetVariable(Stack[-3], Stack[-1])
0xb64: Pop(0)
0xb65: Stack[-4] = Stack[-1]
0xb66: Return(); Pop(2)

0xb67: PushEmpty(float, float)
0xb68: @ GetGameTime(Stack[-1])
0xb69: Pop(0)
0xb6a: Push((int) 1)
0xb6b: PushEmpty(int)
0xb6c: Push((int) 24)
0xb6d: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xb6e: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xb6f: Return(); Pop(2)

0xb70: PushEmpty()
0xb71: Return(); Pop(0)

0xb72: PushEmpty()
0xb73: Return(); Pop(0)

0xb74: PushEmpty()
0xb75: Return(); Pop(0)

0xb76: PushEmpty()
0xb77: Return(); Pop(0)

0xb78: PushEmpty()
0xb79: Push("unholster")
0xb7a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb83; Pop(1)

0xb7c: PushEmpty(bool, object)
0xb7d: Stack[-1] = Stack[-4]
0xb7e: Call2 0xc9b

0xb7f: Stack[-5] = Stack[-2]
0xb80: Pop(2)
0xb81: Return(); Pop(0)

0xb82: GOTO 0xb96

0xb83: Push("player_shot")
0xb84: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb85: IF (Stack[-1] == 0) GOTO 0xb8d; Pop(1)

0xb86: PushEmpty(bool, object)
0xb87: Stack[-1] = Stack[-4]
0xb88: Call2 0xca8

0xb89: Stack[-5] = Stack[-2]
0xb8a: Pop(2)
0xb8b: Return(); Pop(0)

0xb8c: GOTO 0xb96

0xb8d: Push("battle")
0xb8e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb8f: IF (Stack[-1] == 0) GOTO 0xb96; Pop(1)

0xb90: PushEmpty(bool, object)
0xb91: Stack[-1] = Stack[-4]
0xb92: Call2 0xcbf

0xb93: Stack[-5] = Stack[-2]
0xb94: Pop(2)
0xb95: Return(); Pop(0)

0xb96: Stack[-3] = (bool) 0
0xb97: Return(); Pop(0)

0xb98: PushEmpty()
0xb99: Push("unholster")
0xb9a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xba1; Pop(1)

0xb9c: PushEmpty(object)
0xb9d: Stack[-1] = Stack[-3]
0xb9e: Call2 0xca0

0xb9f: Pop(1)
0xba0: GOTO 0xbb0

0xba1: Push("player_shot")
0xba2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xba3: IF (Stack[-1] == 0) GOTO 0xba9; Pop(1)

0xba4: PushEmpty(object)
0xba5: Stack[-1] = Stack[-3]
0xba6: Call2 0xcb7

0xba7: Pop(1)
0xba8: GOTO 0xbb0

0xba9: Push("battle")
0xbaa: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xbab: IF (Stack[-1] == 0) GOTO 0xbb0; Pop(1)

0xbac: PushEmpty(object)
0xbad: Stack[-1] = Stack[-3]
0xbae: Call2 0xcc6

0xbaf: Pop(1)
0xbb0: Return(); Pop(0)

0xbb1: PushEmpty(bool, bool)
0xbb2: PushEmpty(bool)
0xbb3: Stack[-1] = (bool) 0
0xbb4: PushEmpty(bool, object)
0xbb5: Stack[-1] = Stack[-6]
0xbb6: Call2 0xc9b

0xbb7: Pop(1)
0xbb8: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbb9: PushEmpty(bool, object)
0xbba: Stack[-1] = Stack[-6]
0xbbb: Call2 0x9e4

0xbbc: Pop(1)
0xbbd: IF (Stack[-1] == 0) GOTO 0xbbf; Pop(1)

0xbbe: Stack[-1] = (bool) 1
0xbbf: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc0: @@ IsWeaponHolstered(Stack[-1])
0xbc1: Pop(0)
0xbc2: Pop(0); Push((bool) Stack[-1] == 0)
0xbc3: IF (Stack[-1] == 0) GOTO 0xbc6; Pop(1)

0xbc4: Stack[-4] = (bool) 1
0xbc5: Return(); Pop(2)

0xbc6: Stack[-4] = (bool) 0
0xbc7: Return(); Pop(2)

0xbc8: PushEmpty()
0xbc9: PushEmpty(object)
0xbca: Stack[-1] = Stack[-2]
0xbcb: Call2 0xca0

0xbcc: Pop(1)
0xbcd: Return(); Pop(0)

0xbce: PushEmpty()
0xbcf: PushEmpty(bool, object)
0xbd0: Stack[-1] = Stack[-3]
0xbd1: Call2 0x9e4

0xbd2: Pop(1)
0xbd3: IF (Stack[-1] == 0) GOTO 0xbda; Pop(1)

0xbd4: PushEmpty(object)
0xbd5: Call2 0xb21

0xbd6: Pop(0)
0xbd7: Push((float)-0.03)
0xbd8: @ ReportReputationChange(Stack[-3], Stack[-2], Stack[-1])
0xbd9: Pop(2)
0xbda: Return(); Pop(0)

0xbdb: PushEmpty(object, object)
0xbdc: Push("heal")
0xbdd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbde: IF (Stack[-1] == 0) GOTO 0xbe9; Pop(1)

0xbdf: Push("player")
0xbe0: @ FindActor(Stack[-2], Stack[-1])
0xbe1: Pop(1)
0xbe2: PushEmpty(bool, object)
0xbe3: Stack[-1] = Stack[-3]
0xbe4: Call2 0xccc

0xbe5: Stack[-6] = Stack[-2]
0xbe6: Pop(2)
0xbe7: Return(); Pop(2)

0xbe8: Stack[-1] = 0
0xbe9: Stack[-4] = (bool) 0
0xbea: Return(); Pop(2)

0xbeb: PushEmpty(object, object)
0xbec: Push("heal")
0xbed: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbee: IF (Stack[-1] == 0) GOTO 0xbf7; Pop(1)

0xbef: Push("player")
0xbf0: @ FindActor(Stack[-2], Stack[-1])
0xbf1: Pop(1)
0xbf2: PushEmpty(object)
0xbf3: Stack[-1] = Stack[-2]
0xbf4: Call2 0xccf

0xbf5: Pop(1)
0xbf6: Stack[-1] = 0
0xbf7: Return(); Pop(2)

0xbf8: PushEmpty(string, string)
0xbf9: Stack[-1] = "idle"
0xbfa: Push(Stack[-3])
0xbfb: IF (Stack[-1] == 0) GOTO 0xbfd; Pop(1)

0xbfc: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xbfd: Stack[-4] = Stack[-1]
0xbfe: Return(); Pop(2)

0xbff: PushEmpty(int, bool, int, bool)
0xc00: Stack[-2] = (int) 0
0xc01: Push("all")
0xc02: PushEmpty(string, int)
0xc03: Stack[-1] = Stack[-5]
0xc04: Call2 0xbf8

0xc05: Pop(1)
0xc06: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xc07: Pop(2)
0xc08: Pop(0); Push((bool) Stack[-1] == 0)
0xc09: IF (Stack[-1] == 0) GOTO 0xc0b; Pop(1)

0xc0a: GOTO 0xc0e

0xc0b: Push((int) 1)
0xc0c: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xc0d: GOTO 0xc01

0xc0e: Stack[-5] = Stack[-2]
0xc0f: Return(); Pop(4)

0xc10: PushEmpty()
0xc11: PushEmpty(bool)
0xc12: Call2 0xdb7

0xc13: Pop(0)
0xc14: IF (Stack[-1] == 0) GOTO 0xc17; Pop(1)

0xc15: Stack[-2] = (int) 2
0xc16: GOTO 0xc18

0xc17: Stack[-2] = (int) 0
0xc18: Return(); Pop(0)

0xc19: PushEmpty()
0xc1a: PushEmpty(object)
0xc1b: Stack[-1] = Stack[-2]
0xc1c: Push(-1, 1); TaskCall(3)
0xc1d: Call2 0x293

0xc1e: Pop(-1, 1); TaskReturn
0xc1f: Pop(1)
0xc20: Return(); Pop(0)

0xc21: PushEmpty()
0xc22: PushEmpty(bool, object)
0xc23: Stack[-1] = Stack[-3]
0xc24: Call2 0xa1e

0xc25: Pop(1)
0xc26: IF (Stack[-1] == 0) GOTO 0xc29; Pop(1)

0xc27: Stack[-2] = (int) 2
0xc28: GOTO 0xc2a

0xc29: Stack[-2] = (int) 0
0xc2a: Return(); Pop(0)

0xc2b: PushEmpty()
0xc2c: PushEmpty(object)
0xc2d: Stack[-1] = Stack[-2]
0xc2e: Push(-1, 3); TaskCall(4)
0xc2f: Call2 0x3a6

0xc30: Pop(-1, 3); TaskReturn
0xc31: Pop(1)
0xc32: Return(); Pop(0)

0xc33: PushEmpty()
0xc34: PushEmpty(bool, object)
0xc35: Stack[-1] = Stack[-4]
0xc36: Call2 0xa1e

0xc37: Pop(1)
0xc38: IF (Stack[-1] == 0) GOTO 0xc3b; Pop(1)

0xc39: Stack[-3] = (int) 2
0xc3a: GOTO 0xc3c

0xc3b: Stack[-3] = (int) 0
0xc3c: Return(); Pop(0)

0xc3d: PushEmpty()
0xc3e: PushEmpty(object)
0xc3f: Stack[-1] = Stack[-2]
0xc40: Push(-1, 3); TaskCall(5)
0xc41: Call2 0x4a2

0xc42: Pop(-1, 3); TaskReturn
0xc43: Pop(1)
0xc44: Return(); Pop(0)

0xc45: PushEmpty(string, bool, string, bool)
0xc46: PushEmpty(bool, object, string)
0xc47: Stack[-2] = Stack[-9]
0xc48: Stack[-1] = "class"
0xc49: Call2 0x9e9

0xc4a: Pop(2)
0xc4b: Pop(1); Push((bool) Stack[-1] == 0)
0xc4c: IF (Stack[-1] == 0) GOTO 0xc4f; Pop(1)

0xc4d: Stack[-8] = (bool) 0
0xc4e: Return(); Pop(4)

0xc4f: Push("class")
0xc50: @@ GetProperty(Stack[-1], Stack[-3])
0xc51: Pop(1)
0xc52: Push("rat")
0xc53: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc54: IF (Stack[-1] == 0) GOTO 0xc58; Pop(1)

0xc55: Stack[-8] = (bool) 0
0xc56: Return(); Pop(4)

0xc57: GOTO 0xc63

0xc58: Push("rat_big")
0xc59: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5a: IF (Stack[-1] == 0) GOTO 0xc5e; Pop(1)

0xc5b: Stack[-8] = (bool) 0
0xc5c: Return(); Pop(4)

0xc5d: GOTO 0xc63

0xc5e: Push("dog")
0xc5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc60: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc61: Stack[-8] = (bool) 0
0xc62: Return(); Pop(4)

0xc63: @ CanSee(Stack[-1], Stack[-7])
0xc64: Pop(0)
0xc65: PushEmpty(bool)
0xc66: Stack[-1] = (bool) 1
0xc67: Push(Stack[-2])
0xc68: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc69: PushEmpty(float, object)
0xc6a: Stack[-1] = Stack[-10]
0xc6b: Call2 0x9dc

0xc6c: Pop(1)
0xc6d: Pop(0); Push(Stack[-7] * Stack[-7]);
0xc6e: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xc6f: IF (Stack[-1] == 0) GOTO 0xc71; Pop(1)

0xc70: Stack[-1] = (bool) 0
0xc71: IF (Stack[-1] == 0) GOTO 0xc74; Pop(1)

0xc72: Stack[-8] = (bool) 1
0xc73: Return(); Pop(4)

0xc74: @ CanSee(Stack[-1], Stack[-6])
0xc75: Pop(0)
0xc76: PushEmpty(bool)
0xc77: Stack[-1] = (bool) 1
0xc78: Push(Stack[-2])
0xc79: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc7a: PushEmpty(float, object)
0xc7b: Stack[-1] = Stack[-9]
0xc7c: Call2 0x9dc

0xc7d: Pop(1)
0xc7e: Pop(0); Push(Stack[-7] * Stack[-7]);
0xc7f: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xc80: IF (Stack[-1] == 0) GOTO 0xc82; Pop(1)

0xc81: Stack[-1] = (bool) 0
0xc82: IF (Stack[-1] == 0) GOTO 0xc85; Pop(1)

0xc83: Stack[-8] = (bool) 1
0xc84: Return(); Pop(4)

0xc85: Stack[-8] = (bool) 0
0xc86: Return(); Pop(4)

0xc87: PushEmpty()
0xc88: Stack[-2] = (int) 0
0xc89: Return(); Pop(0)

0xc8a: PushEmpty()
0xc8b: Return(); Pop(0)

0xc8c: PushEmpty()
0xc8d: Stack[-3] = (int) 0
0xc8e: Return(); Pop(0)

0xc8f: PushEmpty()
0xc90: Return(); Pop(0)

0xc91: PushEmpty()
0xc92: Stack[-2] = (int) 2
0xc93: Return(); Pop(0)

0xc94: PushEmpty()
0xc95: PushEmpty(object)
0xc96: Stack[-1] = Stack[-2]
0xc97: Call2 0xd8f

0xc98: Pop(1)
0xc99: Return(); Pop(0)

0xc9a: Return(); Pop(0)

0xc9b: PushEmpty(bool, bool)
0xc9c: @ CanSee(Stack[-1], Stack[-3])
0xc9d: Pop(0)
0xc9e: Stack[-4] = Stack[-1]
0xc9f: Return(); Pop(2)

0xca0: PushEmpty()
0xca1: PushEmpty(object)
0xca2: Stack[-1] = Stack[-2]
0xca3: Push(-1, 3); TaskCall(6)
0xca4: Call2 0x564

0xca5: Pop(-1, 3); TaskReturn
0xca6: Pop(1)
0xca7: Return(); Pop(0)

0xca8: PushEmpty(bool, bool)
0xca9: @ CanSee(Stack[-1], Stack[-3])
0xcaa: Pop(0)
0xcab: Stack[-4] = (bool) 1
0xcac: Push(Stack[-1])
0xcad: IF (Stack[-1] == 0) GOTO 0xcb6; Pop(1)

0xcae: PushEmpty(float, object)
0xcaf: Stack[-1] = Stack[-5]
0xcb0: Call2 0x9dc

0xcb1: Pop(1)
0xcb2: Push((int) 4000000)
0xcb3: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0xcb4: IF (Stack[-1] == 0) GOTO 0xcb6; Pop(1)

0xcb5: Stack[-4] = (bool) 0
0xcb6: Return(); Pop(2)

0xcb7: PushEmpty()
0xcb8: PushEmpty(object)
0xcb9: Stack[-1] = Stack[-2]
0xcba: Push(-1, 3); TaskCall(7)
0xcbb: Call2 0x626

0xcbc: Pop(-1, 3); TaskReturn
0xcbd: Pop(1)
0xcbe: Return(); Pop(0)

0xcbf: PushEmpty()
0xcc0: PushEmpty(bool, object)
0xcc1: Stack[-1] = Stack[-3]
0xcc2: Call2 0xca8

0xcc3: Stack[-4] = Stack[-2]
0xcc4: Pop(2)
0xcc5: Return(); Pop(0)

0xcc6: PushEmpty()
0xcc7: PushEmpty(object)
0xcc8: Stack[-1] = Stack[-2]
0xcc9: Call2 0xcb7

0xcca: Pop(1)
0xccb: Return(); Pop(0)

0xccc: PushEmpty()
0xccd: Stack[-2] = (bool) 0
0xcce: Return(); Pop(0)

0xccf: PushEmpty()
0xcd0: Return(); Pop(0)

0xcd1: PushEmpty()
0xcd2: Push((int) 1000)
0xcd3: @@ SetReturnValue(Stack[-1])
0xcd4: Pop(1)
0xcd5: Return(); Pop(0)

0xcd6: PushEmpty()
0xcd7: PushEmpty(int, string)
0xcd8: Stack[-1] = "branch"
0xcd9: Call2 0xb62

0xcda: Pop(1)
0xcdb: Push((int) 0)
0xcdc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xcdd: IF (Stack[-1] == 0) GOTO 0xce0; Pop(1)

0xcde: Stack[-2] = (bool) 1
0xcdf: Return(); Pop(0)

0xce0: Stack[-2] = (bool) 0
0xce1: Return(); Pop(0)

0xce2: PushEmpty()
0xce3: PushEmpty(int, string)
0xce4: Stack[-1] = "branch"
0xce5: Call2 0xb62

0xce6: Pop(1)
0xce7: Push((int) 2)
0xce8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xce9: IF (Stack[-1] == 0) GOTO 0xcec; Pop(1)

0xcea: Stack[-2] = (bool) 1
0xceb: Return(); Pop(0)

0xcec: Stack[-2] = (bool) 0
0xced: Return(); Pop(0)

0xcee: PushEmpty()
0xcef: PushEmpty(bool, object)
0xcf0: Stack[-1] = Stack[-3]
0xcf1: Call2 0xcf8

0xcf2: Pop(1)
0xcf3: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf4: Stack[-2] = (bool) 1
0xcf5: Return(); Pop(0)

0xcf6: Stack[-2] = (bool) 0
0xcf7: Return(); Pop(0)

0xcf8: PushEmpty()
0xcf9: PushEmpty(int)
0xcfa: Call2 0xb67

0xcfb: Pop(0)
0xcfc: Push((int) 5)
0xcfd: Stack[-4] = Stack[-2] == Stack[-1]; Pop(2);
0xcfe: Return(); Pop(0)

0xcff: PushEmpty(int, int)
0xd00: Push("branch")
0xd01: @ GetVariable(Stack[-1], Stack[-2])
0xd02: Pop(1)
0xd03: Push((int) 0)
0xd04: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd05: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xd06: Stack[-3] = (int) 1
0xd07: Return(); Pop(2)

0xd08: GOTO 0xd0e

0xd09: Push((int) 1)
0xd0a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd0b: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xd0c: Stack[-3] = (int) 2
0xd0d: Return(); Pop(2)

0xd0e: Stack[-3] = (int) 3
0xd0f: Return(); Pop(2)

0xd10: PushEmpty(int, int)
0xd11: Push("branch")
0xd12: @ GetVariable(Stack[-1], Stack[-2])
0xd13: Pop(1)
0xd14: Stack[-3] = Stack[-1]
0xd15: Return(); Pop(2)

0xd16: PushEmpty(object, float, object, float)
0xd17: Push("player")
0xd18: @ FindActor(Stack[-3], Stack[-1])
0xd19: Pop(1)
0xd1a: Pop(0); Push((bool) Stack[-2] == 0)
0xd1b: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1c: Stack[-5] = (int) 0
0xd1d: Return(); Pop(4)

0xd1e: Push("reputation")
0xd1f: @@ GetProperty(Stack[-1], Stack[-2])
0xd20: Pop(1)
0xd21: Stack[-5] = Stack[-1]
0xd22: Return(); Pop(4)

0xd23: Stack[-2] = 0
0xd24: PushEmpty()
0xd25: PushEmpty(int)
0xd26: Call2 0xd10

0xd27: Pop(0)
0xd28: Push((int) 1)
0xd29: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2e; Pop(1)

0xd2b: @ WorkWithCorpse(Stack[-1])
0xd2c: Pop(0)
0xd2d: GOTO 0xd30

0xd2e: @ Barter(Stack[-1])
0xd2f: Pop(0)
0xd30: Return(); Pop(0)

0xd31: PushEmpty(int, int)
0xd32: Push((int) 0)
0xd33: @ ClearSubContainer(Stack[-1])
0xd34: Pop(1)
0xd35: Push(Stack[-3])
0xd36: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd37: PushEmpty(string, int, int, int)
0xd38: Stack[-4] = "rifle_ammo"
0xd39: Stack[-3] = (int) 1
0xd3a: Stack[-2] = (int) 2
0xd3b: Stack[-1] = (int) 2
0xd3c: Call2 0xb12

0xd3d: Pop(4)
0xd3e: PushEmpty(string, int, int, int)
0xd3f: Stack[-4] = "revolver_ammo"
0xd40: Stack[-3] = (int) 1
0xd41: Stack[-2] = (int) 2
0xd42: Stack[-1] = (int) 2
0xd43: Call2 0xb12

0xd44: Pop(4)
0xd45: PushEmpty(string, int, int, int)
0xd46: Stack[-4] = "samopal_ammo"
0xd47: Stack[-3] = (int) 2
0xd48: Stack[-2] = (int) 2
0xd49: Stack[-1] = (int) 2
0xd4a: Call2 0xb12

0xd4b: Pop(4)
0xd4c: GOTO 0xd7c

0xd4d: PushEmpty(string, int, int)
0xd4e: Stack[-3] = "lockpick"
0xd4f: Stack[-2] = (int) 1
0xd50: Stack[-1] = (int) 4
0xd51: Call2 0xb07

0xd52: Pop(3)
0xd53: PushEmpty(string, int, int, int)
0xd54: Stack[-4] = "alpha_pills"
0xd55: Stack[-3] = (int) 1
0xd56: Stack[-2] = (int) 2
0xd57: Stack[-1] = (int) 3
0xd58: Call2 0xb12

0xd59: Pop(4)
0xd5a: PushEmpty(string, int, int)
0xd5b: Stack[-3] = "meradorm"
0xd5c: Stack[-2] = (int) 1
0xd5d: Stack[-1] = (int) 2
0xd5e: Call2 0xb07

0xd5f: Pop(3)
0xd60: PushEmpty(string, int, int)
0xd61: Stack[-3] = "powder"
0xd62: Stack[-2] = (int) 1
0xd63: Stack[-1] = (int) 15
0xd64: Call2 0xb07

0xd65: Pop(3)
0xd66: PushEmpty(int)
0xd67: Call2 0xb67

0xd68: Stack[-2] = Stack[-1]
0xd69: Pop(1)
0xd6a: Push((int) 4)
0xd6b: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd6c: IF (Stack[-1] == 0) GOTO 0xd73; Pop(1)

0xd6d: PushEmpty(string, int, int)
0xd6e: Stack[-3] = "beta_pills"
0xd6f: Stack[-2] = (int) 1
0xd70: Stack[-1] = (int) 2
0xd71: Call2 0xb07

0xd72: Pop(3)
0xd73: Push((int) 6)
0xd74: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0xd75: IF (Stack[-1] == 0) GOTO 0xd7c; Pop(1)

0xd76: PushEmpty(string, int, int)
0xd77: Stack[-3] = "gamma_pills"
0xd78: Stack[-2] = (int) 1
0xd79: Stack[-1] = (int) 7
0xd7a: Call2 0xb07

0xd7b: Pop(3)
0xd7c: Return(); Pop(2)

0xd7d: Stack[-1] = (int) 515561
0xd7e: Return(); Pop(0)

0xd7f: Stack[-1] = (int) 503346
0xd80: Return(); Pop(0)

0xd81: Stack[-1] = "ui/NPC_Citizen1.png"
0xd82: Return(); Pop(0)

0xd83: Stack[-1] = "ui/NPC_Citizen1_b.png"
0xd84: Return(); Pop(0)

0xd85: Stack[-1] = (bool) 0
0xd86: Return(); Pop(0)

0xd87: Push(GlobalVars[0])
0xd88: Stack[-1] = (bool) 0
0xd89: GlobalVars[0] = Stack[-1]; Pop(1)
0xd8a: PushEmpty(bool)
0xd8b: Stack[-1] = (bool) 0
0xd8c: Call2 0xd31

0xd8d: Pop(1)
0xd8e: Return(); Pop(0)

0xd8f: PushEmpty(bool, bool)
0xd90: Push(GlobalVars[0])
0xd91: IF (Stack[-1] == 0) GOTO 0xd9c; Pop(1)

0xd92: @ IsOverrideActive(Stack[-1])
0xd93: Pop(0)
0xd94: Pop(0); Push((bool) Stack[-1] == 0)
0xd95: IF (Stack[-1] == 0) GOTO 0xd9a; Pop(1)

0xd96: PushEmpty(object)
0xd97: Stack[-1] = Stack[-4]
0xd98: Call2 0xd24

0xd99: Pop(1)
0xd9a: Return(); Pop(2)

0xd9b: GOTO 0xdb6

0xd9c: Push((int) 1000)
0xd9d: PushEmpty(int, object)
0xd9e: Stack[-1] = Stack[-6]
0xd9f: Push(-2, 1); TaskCall(8)
0xda0: Call2 0x6c3

0xda1: Pop(-2, 1); TaskReturn
0xda2: Pop(1)
0xda3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xda4: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xda5: PushEmpty(bool, object)
0xda6: Stack[-1] = Stack[-5]
0xda7: Call2 0xa9b

0xda8: Pop(1)
0xda9: Pop(1); Push((bool) Stack[-1] == 0)
0xdaa: IF (Stack[-1] == 0) GOTO 0xdac; Pop(1)

0xdab: Return(); Pop(2)

0xdac: PushEmpty(object)
0xdad: Stack[-1] = Stack[-4]
0xdae: Push(-1, 1); TaskCall(0)
0xdaf: Call2 0x0

0xdb0: Pop(-1, 1); TaskReturn
0xdb1: Pop(1)
0xdb2: PushEmpty(object)
0xdb3: Stack[-1] = Stack[-4]
0xdb4: Call2 0xad2

0xdb5: Pop(1)
0xdb6: Return(); Pop(2)

0xdb7: PushEmpty(float)
0xdb8: Call2 0xd16

0xdb9: Pop(0)
0xdba: Push((float)0.2)
0xdbb: Stack[-3] = Stack[-2] > Stack[-1]; Pop(2);
0xdbc: Return(); Pop(0)

0xdbd: PushEmpty()
0xdbe: PushEmpty(bool, object, object, float)
0xdbf: Stack[-3] = Stack[-7]
0xdc0: Stack[-2] = Stack[-6]
0xdc1: Stack[-1] = (float) 700.0
0xdc2: Call2 0xc45

0xdc3: Stack[-8] = Stack[-4]
0xdc4: Pop(4)
0xdc5: Return(); Pop(0)

