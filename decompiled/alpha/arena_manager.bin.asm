GlobalVarCount = 2
	G_VAR_0 cvector 
	G_VAR_1 bool 

Strings:
	player
	head
	all
	RemoveAllItems
	pt_arena_player
	GetLocator
	pt_arena_enemy
	pers_butcher
	arena_fighter.xml
	pers_worker
	arena_spectator_worker.xml
	pt_arena_spectator1
	pt_arena_spectator2
	pers_unosha
	arena_spectator_unosha.xml
	pt_arena_spectator3
	pt_arena_spectator4
	arena_spectator_unosha2.xml
	pt_arena_spectator5
	pers_dohodyaga
	arena_spectator_dohodyaga.xml
	pt_arena_spectator6
	pers_boy
	arena_spectator_boy.xml
	pt_arena_spectator7
	IsDead
	SelectWeapon
	pt_arena_return
	GetItemCount
	GetItem
	GetItemID
	Group
	IsItemSelected
	GetItemAmount
	RemoveItem
	Locator doesn't exist for arena spectator 
	AddStationaryActor
	add
	size
	get
	GetActor
	Remove
	clear
	GetPosition
	noaccess
	HasProperty
	GetProperty
	SetProperty
	RemoveProperty
	AddItem
	SelectItem
	GetEyesHeight
	noinv_drop
	nouse_container
	idle

Import:
	SetTimer (2 args)
	GetDirection (1 args)
	KillTimer (1 args)
	FindActor (2 args)
	UnlookAsync (1 args)
	StopAnimation (0 args)
	irand (2 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	GetPFPosition (1 args)
	Sleep (2 args)
	FindPathTo (2 args)
	RotatePath (2 args)
	FollowPath (3 args)
	Rotate (3 args)
	WaitForAnimEnd (1 args)
	Sleep (1 args)
	StopGroup0 (0 args)
	Stop (0 args)
	LockCamera (0 args)
	RotateAsync (2 args)
	GetScene (1 args)
	Teleport (4 args)
	AddActor (6 args)
	Rotate (2 args)
	UnlockCamera (0 args)
	RemoveActor (1 args)
	StopAsync (0 args)
	HasInvItemProperty (3 args)
	GetInvItemProperty (3 args)
	Trace (1 args)
	GetPosition (1 args)
	CreateIntVector (1 args)
	LookAsync (3 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	ModDarkenLevel (1 args)
	sync (1 args)
	HasAnimation (3 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (cvector, cvector, bool) Params = 0
		EVENT_0 Op = 0x17 Vars = (object)
		EVENT_7 Op = 0x29 Vars = (int)
	GTASK_1 Vars = (object, object, object, object, object, object, object, object, object, object, object) Params = 1


0x0: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x1: Push(GlobalVars[1])
0x2: Stack[-1] = (bool) 0
0x3: GlobalVars[1] = Stack[-1]; Pop(1)
0x4: Push(GlobalVars[0])
0x5: PushEmpty(cvector)
0x6: Call 0x12

0x7: Stack[-2] = Stack[-1]
0x8: Pop(1)
0x9: GlobalVars[0] = Stack[-1]; Pop(1)
0xa: Push((int) 10)
0xb: Push((float)0.75)
0xc: @ SetTimer(Stack[-2], Stack[-1])
0xd: Pop(2)
0xe: PushEmpty()
0xf: Call 0x68

0x10: Pop(0)
0x11: Return(); Pop(0)

0x12: PushEmpty(cvector, cvector)
0x13: @ GetDirection(Stack[-1])
0x14: Pop(0)
0x15: Stack[-3] = Stack[-1]
0x16: Return(); Pop(2)

0x17: PushEmpty()
0x18: PushEmpty()
0x19: Call 0x4a

0x1a: Pop(0)
0x1b: Push((int) 10)
0x1c: @ KillTimer(Stack[-1])
0x1d: Pop(1)
0x1e: PushEmpty(object)
0x1f: Stack[-1] = Stack[-2]
0x20: Push(-1, 11); TaskCall(1)
0x21: Call 0xbb

0x22: Pop(-1, 11); TaskReturn
0x23: Pop(1)
0x24: Push((int) 10)
0x25: Push((float)0.75)
0x26: @ SetTimer(Stack[-2], Stack[-1])
0x27: Pop(2)
0x28: Return(); Pop(0)

0x29: PushEmpty(object, object)
0x2a: Push((int) 10)
0x2b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c: IF (Stack[-1] == 0) GOTO 0x49; Pop(1)

0x2d: Push("player")
0x2e: @ FindActor(Stack[-2], Stack[-1])
0x2f: Pop(1)
0x30: PushEmpty(bool, object)
0x31: Stack[-1] = Stack[-3]
0x32: Call 0x306

0x33: Pop(1)
0x34: IF (Stack[-1] == 0) GOTO 0x40; Pop(1)

0x35: Push(GlobalVars[1])
0x36: Pop(1); Push((bool) Stack[-1] == 0)
0x37: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x38: PushEmpty(object)
0x39: Stack[-1] = Stack[-2]
0x3a: Call 0x2a6

0x3b: Pop(1)
0x3c: Push(GlobalVars[1])
0x3d: Stack[-1] = (bool) 1
0x3e: GlobalVars[1] = Stack[-1]; Pop(1)
0x3f: GOTO 0x48

0x40: Push(GlobalVars[1])
0x41: IF (Stack[-1] == 0) GOTO 0x48; Pop(1)

0x42: Push("head")
0x43: @ UnlookAsync(Stack[-1])
0x44: Pop(1)
0x45: Push(GlobalVars[1])
0x46: Stack[-1] = (bool) 0
0x47: GlobalVars[1] = Stack[-1]; Pop(1)
0x48: Stack[-1] = 0
0x49: Return(); Pop(2)

0x4a: Push( Stack[2 + Tasks[-1].StackPointer] )
0x4b: IF (Stack[-1] == 0) GOTO 0x4f; Pop(1)

0x4c: @ StopAnimation()
0x4d: Pop(0)
0x4e: GOTO 0x52

0x4f: PushEmpty()
0x50: Call 0xb6

0x51: Pop(0)
0x52: Return(); Pop(0)

0x53: PushEmpty(int, int, int, int)
0x54: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x55: PushEmpty(int)
0x56: Call 0x2f5

0x57: Stack[-3] = Stack[-1]
0x58: Pop(1)
0x59: Push(Stack[-2])
0x5a: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x5b: @ irand(Stack[-1], Stack[-2])
0x5c: Pop(0)
0x5d: Push("all")
0x5e: PushEmpty(string, int)
0x5f: Stack[-1] = Stack[-4]
0x60: Call 0x2ee

0x61: Pop(1)
0x62: @ PlayAnimation(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: @ WaitForAnimEnd()
0x65: Pop(0)
0x66: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x67: Return(); Pop(4)

0x68: PushEmpty(int, bool, cvector, object, int, bool, cvector, object)
0x69: @ GetPFPosition(Stack[-1])
0x6a: Pop(0)
0x6b: @ GetDirection(Stack[-0])
0x6c: Pop(0)
0x6d: Push((int) 60)
0x6e: @ irand(Stack[-5], Stack[-1])
0x6f: Pop(1)
0x70: Push((int) 30)
0x71: Pop(1); Push(Stack[-5] + Stack[-1]);
0x72: @ Sleep(Stack[-1], Stack[-4])
0x73: Pop(1)
0x74: Push(Stack[-3])
0x75: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x76: PushEmpty()
0x77: Call 0x53

0x78: Pop(0)
0x79: GOTO 0xb4

0x7a: @ GetPFPosition(Stack[-2])
0x7b: Pop(0)
0x7c: PushEmpty(float, cvector, cvector)
0x7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7e: Stack[-1] = Stack[-5]
0x7f: Call 0x2b1

0x80: Pop(2)
0x81: Push((int) 40000)
0x82: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x83: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0x84: @ FindPathTo(Stack[-1], Stack[-1])
0x85: Pop(0)
0x86: Pop(0); Push(( Stack[-1] != 0 )
0x87: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x88: @ RotatePath(Stack[-1], Stack[-3])
0x89: Pop(0)
0x8a: Pop(0); Push((bool) Stack[-3] == 0)
0x8b: IF (Stack[-1] == 0) GOTO 0x8d; Pop(1)

0x8c: GOTO 0xb3

0x8d: Push((bool) 0)
0x8e: @ FollowPath(Stack[-2], Stack[-1], Stack[-4])
0x8f: Pop(1)
0x90: Pop(0); Push((bool) Stack[-3] == 0)
0x91: IF (Stack[-1] == 0) GOTO 0x93; Pop(1)

0x92: GOTO 0xb3

0x93: Push(CvectorIndex(Stack[-0], 0))
0x94: Push(CvectorIndex(Stack[-0], 2))
0x95: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0x96: Pop(2)
0x97: Pop(0); Push((bool) Stack[-3] == 0)
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: GOTO 0xb3

0x9a: @ WaitForAnimEnd(Stack[-3])
0x9b: Pop(0)
0x9c: Pop(0); Push((bool) Stack[-3] == 0)
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xb3

0x9f: GOTO 0xb4

0xa0: GOTO 0xa4

0xa1: Push((int) 1)
0xa2: @ Sleep(Stack[-1])
0xa3: Pop(1)
0xa4: Stack[-1] = 0
0xa5: GOTO 0xb3

0xa6: Push(CvectorIndex(Stack[-0], 0))
0xa7: Push(CvectorIndex(Stack[-0], 2))
0xa8: @ Rotate(Stack[-2], Stack[-1], Stack[-5])
0xa9: Pop(2)
0xaa: Pop(0); Push((bool) Stack[-3] == 0)
0xab: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xac: GOTO 0xb3

0xad: @ WaitForAnimEnd(Stack[-3])
0xae: Pop(0)
0xaf: Pop(0); Push((bool) Stack[-3] == 0)
0xb0: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xb1: GOTO 0xb3

0xb2: GOTO 0xb4

0xb3: GOTO 0x7a

0xb4: GOTO 0x6d

0xb5: Return(); Pop(8)

0xb6: @ StopGroup0()
0xb7: Pop(0)
0xb8: @ Stop()
0xb9: Pop(0)
0xba: Return(); Pop(0)

0xbb: PushEmpty(cvector, int, object, cvector, cvector, cvector, cvector, bool, object, bool, cvector, cvector, cvector, int, object, cvector, cvector, cvector, cvector, bool, object, bool, cvector, cvector)
0xbc: PushEmpty(object)
0xbd: Call 0x2b5

0xbe: Stack[10 + Tasks[-1].StackPointer] = Stack[-1]
0xbf: Pop(1)
0xc0: PushEmpty(object)
0xc1: Stack[-1] = Stack[-26]
0xc2: Call 0x234

0xc3: Pop(1)
0xc4: PushEmpty()
0xc5: Call 0x2c8

0xc6: Pop(0)
0xc7: PushEmpty()
0xc8: Call 0x2d4

0xc9: Pop(0)
0xca: Push(GlobalVars[0])
0xcb: Stack[-13] = Stack[-1]
0xcc: Pop(1)
0xcd: @ LockCamera()
0xce: Pop(0)
0xcf: Push(CvectorIndex(Stack[-12], 0))
0xd0: Pop(1); Push(( -Stack[-1])
0xd1: Push(CvectorIndex(Stack[-13], 2))
0xd2: Pop(1); Push(( -Stack[-1])
0xd3: @ RotateAsync(Stack[-2], Stack[-1])
0xd4: Pop(2)
0xd5: PushEmpty(float, float, float)
0xd6: Stack[-3] = (int) 0
0xd7: Stack[-2] = (int) 1
0xd8: Stack[-1] = (float) 0.75
0xd9: Call 0x2da

0xda: Pop(3)
0xdb: PushEmpty(object, object, int)
0xdc: Stack[-2] = Stack[-28]
0xdd: Stack[-1] = (int) 0
0xde: Call 0x25f

0xdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0xe0: Pop(3)
0xe1: PushEmpty(object, object, int)
0xe2: Stack[-2] = Stack[-28]
0xe3: Stack[-1] = (int) 1
0xe4: Call 0x25f

0xe5: Stack[1 + Tasks[-1].StackPointer] = Stack[-3]
0xe6: Pop(3)
0xe7: PushEmpty(object, object, int)
0xe8: Stack[-2] = Stack[-28]
0xe9: Stack[-1] = (int) 2
0xea: Call 0x25f

0xeb: Stack[2 + Tasks[-1].StackPointer] = Stack[-3]
0xec: Pop(3)
0xed: PushEmpty(object, object, int)
0xee: Stack[-2] = Stack[-28]
0xef: Stack[-1] = (int) 3
0xf0: Call 0x25f

0xf1: Stack[3 + Tasks[-1].StackPointer] = Stack[-3]
0xf2: Pop(3)
0xf3: PushEmpty(object, object, int)
0xf4: Stack[-2] = Stack[-28]
0xf5: Stack[-1] = (int) 4
0xf6: Call 0x25f

0xf7: Stack[4 + Tasks[-1].StackPointer] = Stack[-3]
0xf8: Pop(3)
0xf9: PushEmpty(object, object, int)
0xfa: Stack[-2] = Stack[-28]
0xfb: Stack[-1] = (int) 0
0xfc: Call 0x274

0xfd: Stack[5 + Tasks[-1].StackPointer] = Stack[-3]
0xfe: Pop(3)
0xff: PushEmpty(object, object, int)
0x100: Stack[-2] = Stack[-28]
0x101: Stack[-1] = (int) 1
0x102: Call 0x274

0x103: Stack[6 + Tasks[-1].StackPointer] = Stack[-3]
0x104: Pop(3)
0x105: PushEmpty(object, object, int)
0x106: Stack[-2] = Stack[-28]
0x107: Stack[-1] = (int) 2
0x108: Call 0x274

0x109: Stack[7 + Tasks[-1].StackPointer] = Stack[-3]
0x10a: Pop(3)
0x10b: PushEmpty(object, object, int)
0x10c: Stack[-2] = Stack[-28]
0x10d: Stack[-1] = (int) 3
0x10e: Call 0x274

0x10f: Stack[8 + Tasks[-1].StackPointer] = Stack[-3]
0x110: Pop(3)
0x111: PushEmpty(object, object, int)
0x112: Stack[-2] = Stack[-28]
0x113: Stack[-1] = (int) 4
0x114: Call 0x274

0x115: Stack[9 + Tasks[-1].StackPointer] = Stack[-3]
0x116: Pop(3)
0x117: PushEmpty(object)
0x118: Stack[-1] = Stack[-26]
0x119: Call 0x1d6

0x11a: Pop(1)
0x11b: Stack[-11] = (int) 1
0x11c: Push((int) 5)
0x11d: Pop(1); Push((bool) Stack[-12] < Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x124; Pop(1)

0x11f: @@ RemoveAllItems(Stack[-11])
0x120: Pop(0)
0x121: Push((int) 1)
0x122: Stack[-12] = Stack[-12] + Stack[-1]; Pop(1);
0x123: GOTO 0x11c

0x124: @ GetScene(Stack[-10])
0x125: Pop(0)
0x126: Push("pt_arena_player")
0x127: @@ GetLocator(Stack[-1], Stack[-6], Stack[-10], Stack[-9])
0x128: Pop(1)
0x129: Push("pt_arena_enemy")
0x12a: @@ GetLocator(Stack[-1], Stack[-6], Stack[-8], Stack[-7])
0x12b: Pop(1)
0x12c: @ Teleport(Stack[-25], Stack[-10], Stack[-9], Stack[-8])
0x12d: Pop(0)
0x12e: Push("pers_butcher")
0x12f: Push("arena_fighter.xml")
0x130: @ AddActor(Stack[-6], Stack[-2], Stack[-12], Stack[-9], Stack[-8], Stack[-1])
0x131: Pop(2)
0x132: PushEmpty(object, string, string, string)
0x133: Stack[-4] = Stack[-14]
0x134: Stack[-3] = "pers_worker"
0x135: Stack[-2] = "arena_spectator_worker.xml"
0x136: Stack[-1] = "pt_arena_spectator1"
0x137: Call 0x203

0x138: Pop(4)
0x139: PushEmpty(object, string, string, string)
0x13a: Stack[-4] = Stack[-14]
0x13b: Stack[-3] = "pers_worker"
0x13c: Stack[-2] = "arena_spectator_worker.xml"
0x13d: Stack[-1] = "pt_arena_spectator2"
0x13e: Call 0x203

0x13f: Pop(4)
0x140: PushEmpty(object, string, string, string)
0x141: Stack[-4] = Stack[-14]
0x142: Stack[-3] = "pers_unosha"
0x143: Stack[-2] = "arena_spectator_unosha.xml"
0x144: Stack[-1] = "pt_arena_spectator3"
0x145: Call 0x203

0x146: Pop(4)
0x147: PushEmpty(object, string, string, string)
0x148: Stack[-4] = Stack[-14]
0x149: Stack[-3] = "pers_unosha"
0x14a: Stack[-2] = "arena_spectator_unosha.xml"
0x14b: Stack[-1] = "pt_arena_spectator4"
0x14c: Call 0x203

0x14d: Pop(4)
0x14e: PushEmpty(object, string, string, string)
0x14f: Stack[-4] = Stack[-14]
0x150: Stack[-3] = "pers_unosha"
0x151: Stack[-2] = "arena_spectator_unosha2.xml"
0x152: Stack[-1] = "pt_arena_spectator5"
0x153: Call 0x203

0x154: Pop(4)
0x155: PushEmpty(object, string, string, string)
0x156: Stack[-4] = Stack[-14]
0x157: Stack[-3] = "pers_dohodyaga"
0x158: Stack[-2] = "arena_spectator_dohodyaga.xml"
0x159: Stack[-1] = "pt_arena_spectator6"
0x15a: Call 0x203

0x15b: Pop(4)
0x15c: PushEmpty(object, string, string, string)
0x15d: Stack[-4] = Stack[-14]
0x15e: Stack[-3] = "pers_boy"
0x15f: Stack[-2] = "arena_spectator_boy.xml"
0x160: Stack[-1] = "pt_arena_spectator7"
0x161: Call 0x203

0x162: Pop(4)
0x163: Push(CvectorIndex(Stack[-12], 0))
0x164: Pop(1); Push(( -Stack[-1])
0x165: Push(CvectorIndex(Stack[-13], 2))
0x166: Pop(1); Push(( -Stack[-1])
0x167: @ Rotate(Stack[-2], Stack[-1])
0x168: Pop(2)
0x169: PushEmpty(object)
0x16a: Stack[-1] = Stack[-26]
0x16b: Call 0x2a6

0x16c: Pop(1)
0x16d: PushEmpty(float, float, float)
0x16e: Stack[-3] = (int) 1
0x16f: Stack[-2] = (int) 0
0x170: Stack[-1] = (float) 0.75
0x171: Call 0x2da

0x172: Pop(3)
0x173: @ UnlockCamera()
0x174: Pop(0)
0x175: Push((int) 1)
0x176: @ Sleep(Stack[-1])
0x177: Pop(1)
0x178: Pop(0); Push(( Stack[-25] != 0 )
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: @@ IsDead(Stack[-3])
0x17b: Pop(0)
0x17c: Push(Stack[-3])
0x17d: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17e: GOTO 0x180

0x17f: GOTO 0x175

0x180: @ LockCamera()
0x181: Pop(0)
0x182: Push(CvectorIndex(Stack[-12], 0))
0x183: Push(CvectorIndex(Stack[-13], 2))
0x184: @ RotateAsync(Stack[-2], Stack[-1])
0x185: Pop(2)
0x186: PushEmpty(float, float, float)
0x187: Stack[-3] = (int) 0
0x188: Stack[-2] = (int) 1
0x189: Stack[-1] = (float) 0.75
0x18a: Call 0x2da

0x18b: Pop(3)
0x18c: @ RemoveActor(Stack[-4])
0x18d: Pop(0)
0x18e: PushEmpty()
0x18f: Call 0x214

0x190: Pop(0)
0x191: PushEmpty(object, int, object, object)
0x192: Stack[-4] = Stack[-29]
0x193: Stack[-3] = (int) 0
0x194: Stack[-2] = Stack[0 + Tasks[-1].StackPointer]
0x195: Stack[-1] = Stack[5 + Tasks[-1].StackPointer]
0x196: Call 0x288

0x197: Pop(4)
0x198: PushEmpty(object, int, object, object)
0x199: Stack[-4] = Stack[-29]
0x19a: Stack[-3] = (int) 1
0x19b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19c: Stack[-1] = Stack[6 + Tasks[-1].StackPointer]
0x19d: Call 0x288

0x19e: Pop(4)
0x19f: PushEmpty(object, int, object, object)
0x1a0: Stack[-4] = Stack[-29]
0x1a1: Stack[-3] = (int) 2
0x1a2: Stack[-2] = Stack[2 + Tasks[-1].StackPointer]
0x1a3: Stack[-1] = Stack[7 + Tasks[-1].StackPointer]
0x1a4: Call 0x288

0x1a5: Pop(4)
0x1a6: PushEmpty(object, int, object, object)
0x1a7: Stack[-4] = Stack[-29]
0x1a8: Stack[-3] = (int) 3
0x1a9: Stack[-2] = Stack[3 + Tasks[-1].StackPointer]
0x1aa: Stack[-1] = Stack[8 + Tasks[-1].StackPointer]
0x1ab: Call 0x288

0x1ac: Pop(4)
0x1ad: PushEmpty(object, int, object, object)
0x1ae: Stack[-4] = Stack[-29]
0x1af: Stack[-3] = (int) 4
0x1b0: Stack[-2] = Stack[4 + Tasks[-1].StackPointer]
0x1b1: Stack[-1] = Stack[9 + Tasks[-1].StackPointer]
0x1b2: Call 0x288

0x1b3: Pop(4)
0x1b4: @@ SelectWeapon()
0x1b5: Pop(0)
0x1b6: Push("pt_arena_return")
0x1b7: @@ GetLocator(Stack[-1], Stack[-6], Stack[-3], Stack[-2])
0x1b8: Pop(1)
0x1b9: @ Teleport(Stack[-25], Stack[-10], Stack[-2], Stack[-1])
0x1ba: Pop(0)
0x1bb: @ StopAsync()
0x1bc: Pop(0)
0x1bd: Push(CvectorIndex(Stack[-12], 0))
0x1be: Push(CvectorIndex(Stack[-13], 2))
0x1bf: @ Rotate(Stack[-2], Stack[-1])
0x1c0: Pop(2)
0x1c1: PushEmpty(float, float, float)
0x1c2: Stack[-3] = (int) 1
0x1c3: Stack[-2] = (int) 0
0x1c4: Stack[-1] = (float) 0.75
0x1c5: Call 0x2da

0x1c6: Pop(3)
0x1c7: @ UnlockCamera()
0x1c8: Pop(0)
0x1c9: PushEmpty()
0x1ca: Call 0x2ce

0x1cb: Pop(0)
0x1cc: PushEmpty()
0x1cd: Call 0x2c2

0x1ce: Pop(0)
0x1cf: PushEmpty(object)
0x1d0: Stack[-1] = Stack[-26]
0x1d1: Call 0x24b

0x1d2: Pop(1)
0x1d3: Return(); Pop(24)

0x1d4: Stack[-4] = 0
0x1d5: Stack[-10] = 0
0x1d6: PushEmpty(int, int, object, int, bool, int, bool, int, int, int, object, int, bool, int, bool, int)
0x1d7: Push((int) 0)
0x1d8: @@ GetItemCount(Stack[-9], Stack[-1])
0x1d9: Pop(1)
0x1da: Stack[-7] = (int) 0
0x1db: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0x1dc: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1dd: @@ GetItem(Stack[-6], Stack[-7])
0x1de: Pop(0)
0x1df: @@ GetItemID(Stack[-5])
0x1e0: Pop(0)
0x1e1: Push("Group")
0x1e2: @ HasInvItemProperty(Stack[-5], Stack[-6], Stack[-1])
0x1e3: Pop(1)
0x1e4: Push(Stack[-4])
0x1e5: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e6: Push("Group")
0x1e7: @ GetInvItemProperty(Stack[-4], Stack[-6], Stack[-1])
0x1e8: Pop(1)
0x1e9: Push((int) 0)
0x1ea: Pop(1); Push((bool) Stack[-4] != Stack[-1])
0x1eb: IF (Stack[-1] == 0) GOTO 0x1ee; Pop(1)

0x1ec: GOTO 0x1ff

0x1ed: GOTO 0x1f4

0x1ee: Push((int) 0)
0x1ef: @@ IsItemSelected(Stack[-3], Stack[-8], Stack[-1])
0x1f0: Pop(1)
0x1f1: Push(Stack[-2])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1f3: GOTO 0x1ff

0x1f4: Push((int) 0)
0x1f5: @@ GetItemAmount(Stack[-2], Stack[-8], Stack[-1])
0x1f6: Pop(1)
0x1f7: Push((int) 0)
0x1f8: @@ RemoveItem(Stack[-8], Stack[-2], Stack[-1])
0x1f9: Pop(1)
0x1fa: Push((int) -1)
0x1fb: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x1fc: Push((int) -1)
0x1fd: Stack[-9] = Stack[-9] + Stack[-1]; Pop(1);
0x1fe: Stack[-6] = 0
0x1ff: Push((int) 1)
0x200: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0x201: GOTO 0x1db

0x202: Return(); Pop(16)

0x203: PushEmpty(cvector, cvector, bool, object, cvector, cvector, bool, object)
0x204: @@ GetLocator(Stack[-9], Stack[-2], Stack[-4], Stack[-3])
0x205: Pop(0)
0x206: Pop(0); Push((bool) Stack[-2] == 0)
0x207: IF (Stack[-1] == 0) GOTO 0x20d; Pop(1)

0x208: Push("Locator doesn't exist for arena spectator ")
0x209: Pop(1); Push(Stack[-1] + Stack[-10]);
0x20a: @ Trace(Stack[-1])
0x20b: Pop(1)
0x20c: Return(); Pop(8)

0x20d: Push((bool) 1)
0x20e: @@ AddStationaryActor(Stack[-2], Stack[-5], Stack[-4], Stack[-12], Stack[-11], Stack[-1])
0x20f: Pop(1)
0x210: @@ add(Stack[-1])
0x211: Pop(0)
0x212: Return(); Pop(8)

0x213: Stack[-1] = 0
0x214: PushEmpty(int, int, object, object, int, int, object, object)
0x215: @@ size(Stack[-4])
0x216: Pop(0)
0x217: Stack[-3] = (int) 0
0x218: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x219: IF (Stack[-1] == 0) GOTO 0x229; Pop(1)

0x21a: @@ get(Stack[-2], Stack[-3])
0x21b: Pop(0)
0x21c: @@ GetActor(Stack[-1])
0x21d: Pop(0)
0x21e: Pop(0); Push(( Stack[-1] != 0 )
0x21f: IF (Stack[-1] == 0) GOTO 0x222; Pop(1)

0x220: @ RemoveActor(Stack[-1])
0x221: Pop(0)
0x222: @@ Remove()
0x223: Pop(0)
0x224: Stack[-1] = 0
0x225: Stack[-2] = 0
0x226: Push((int) 1)
0x227: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x228: GOTO 0x218

0x229: @@ clear()
0x22a: Pop(0)
0x22b: Return(); Pop(8)

0x22c: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x22d: @ GetPosition(Stack[-3])
0x22e: Pop(0)
0x22f: @@ GetPosition(Stack[-2])
0x230: Pop(0)
0x231: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x232: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x233: Return(); Pop(6)

0x234: PushEmpty(bool, int, bool, int)
0x235: Pop(0); Push((bool) Stack[-5] == 0)
0x236: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x237: Return(); Pop(4)

0x238: Push("noaccess")
0x239: @@ HasProperty(Stack[-1], Stack[-3])
0x23a: Pop(1)
0x23b: Push(Stack[-2])
0x23c: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x23d: Push("noaccess")
0x23e: @@ GetProperty(Stack[-1], Stack[-2])
0x23f: Pop(1)
0x240: Push("noaccess")
0x241: Push((int) 1)
0x242: Pop(1); Push(Stack[-3] + Stack[-1]);
0x243: @@ SetProperty(Stack[-2], Stack[-1])
0x244: Pop(2)
0x245: GOTO 0x24a

0x246: Push("noaccess")
0x247: Push((int) 1)
0x248: @@ SetProperty(Stack[-2], Stack[-1])
0x249: Pop(2)
0x24a: Return(); Pop(4)

0x24b: PushEmpty(int, int)
0x24c: Pop(0); Push((bool) Stack[-3] == 0)
0x24d: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x24e: Return(); Pop(2)

0x24f: Push("noaccess")
0x250: @@ GetProperty(Stack[-1], Stack[-2])
0x251: Pop(1)
0x252: Push((int) 1)
0x253: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x25b; Pop(1)

0x255: Push("noaccess")
0x256: Push((int) 1)
0x257: Pop(1); Push(Stack[-3] - Stack[-1]);
0x258: @@ SetProperty(Stack[-2], Stack[-1])
0x259: Pop(2)
0x25a: GOTO 0x25e

0x25b: Push("noaccess")
0x25c: @@ RemoveProperty(Stack[-1])
0x25d: Pop(1)
0x25e: Return(); Pop(2)

0x25f: PushEmpty(object, int, int, object, object, int, int, object)
0x260: PushEmpty(object)
0x261: Call 0x2b5

0x262: Stack[-5] = Stack[-1]
0x263: Pop(1)
0x264: @@ GetItemCount(Stack[-3], Stack[-9])
0x265: Pop(0)
0x266: Stack[-2] = (int) 0
0x267: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x268: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x269: @@ GetItem(Stack[-1], Stack[-2], Stack[-9])
0x26a: Pop(0)
0x26b: @@ add(Stack[-1])
0x26c: Pop(0)
0x26d: Stack[-1] = 0
0x26e: Push((int) 1)
0x26f: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x270: GOTO 0x267

0x271: Stack[-11] = Stack[-4]
0x272: Return(); Pop(8)

0x273: Stack[-4] = 0
0x274: PushEmpty(object, int, int, bool, object, int, int, bool)
0x275: @ CreateIntVector(Stack[-4])
0x276: Pop(0)
0x277: @@ GetItemCount(Stack[-3], Stack[-9])
0x278: Pop(0)
0x279: Stack[-2] = (int) 0
0x27a: Pop(0); Push((bool) Stack[-2] < Stack[-3])
0x27b: IF (Stack[-1] == 0) GOTO 0x285; Pop(1)

0x27c: @@ IsItemSelected(Stack[-1], Stack[-2], Stack[-9])
0x27d: Pop(0)
0x27e: Push(Stack[-1])
0x27f: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x280: @@ add(Stack[-2])
0x281: Pop(0)
0x282: Push((int) 1)
0x283: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x284: GOTO 0x27a

0x285: Stack[-11] = Stack[-4]
0x286: Return(); Pop(8)

0x287: Stack[-4] = 0
0x288: PushEmpty(int, int, object, bool, int, int, int, int, object, bool, int, int)
0x289: @@ RemoveAllItems(Stack[-15])
0x28a: Pop(0)
0x28b: @@ size(Stack[-6])
0x28c: Pop(0)
0x28d: Stack[-5] = (int) 0
0x28e: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x28f: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x290: @@ get(Stack[-4], Stack[-5])
0x291: Pop(0)
0x292: @@ AddItem(Stack[-3], Stack[-4], Stack[-15])
0x293: Pop(0)
0x294: Stack[-4] = 0
0x295: Push((int) 1)
0x296: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x297: GOTO 0x28e

0x298: @@ size(Stack[-6])
0x299: Pop(0)
0x29a: Stack[-2] = (int) 0
0x29b: Pop(0); Push((bool) Stack[-2] < Stack[-6])
0x29c: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x29d: @@ get(Stack[-1], Stack[-2])
0x29e: Pop(0)
0x29f: Push((bool) 1)
0x2a0: @@ SelectItem(Stack[-2], Stack[-1], Stack[-16])
0x2a1: Pop(1)
0x2a2: Push((int) 1)
0x2a3: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x2a4: GOTO 0x29b

0x2a5: Return(); Pop(12)

0x2a6: PushEmpty(float, cvector, float, cvector)
0x2a7: @@ GetEyesHeight(Stack[-2])
0x2a8: Pop(0)
0x2a9: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x2aa: Push(CvectorIndex(Stack[-1], 1))
0x2ab: Stack[-1] = Stack[-3]
0x2ac: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x2ad: Push("head")
0x2ae: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x2af: Pop(1)
0x2b0: Return(); Pop(4)

0x2b1: PushEmpty(cvector, cvector)
0x2b2: Stack[-1] = Stack[-3] - Stack[-4]; Pop(0);
0x2b3: Stack[-5] = Stack[-1] | Stack[-1]; Pop(0);
0x2b4: Return(); Pop(2)

0x2b5: PushEmpty(object, object)
0x2b6: @ CreateObjectVector(Stack[-1])
0x2b7: Pop(0)
0x2b8: Stack[-3] = Stack[-1]
0x2b9: Return(); Pop(2)

0x2ba: Stack[-1] = 0
0x2bb: PushEmpty(int, int)
0x2bc: @ GetVariable(Stack[-4], Stack[-1])
0x2bd: Pop(0)
0x2be: Pop(0); Push(Stack[-1] + Stack[-3]);
0x2bf: @ SetVariable(Stack[-5], Stack[-1])
0x2c0: Pop(1)
0x2c1: Return(); Pop(2)

0x2c2: PushEmpty(string, int)
0x2c3: Stack[-2] = "noinv_drop"
0x2c4: Stack[-1] = (int) -1
0x2c5: Call 0x2bb

0x2c6: Pop(2)
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty(string, int)
0x2c9: Stack[-2] = "noinv_drop"
0x2ca: Stack[-1] = (int) 1
0x2cb: Call 0x2bb

0x2cc: Pop(2)
0x2cd: Return(); Pop(0)

0x2ce: PushEmpty(string, int)
0x2cf: Stack[-2] = "nouse_container"
0x2d0: Stack[-1] = (int) -1
0x2d1: Call 0x2bb

0x2d2: Pop(2)
0x2d3: Return(); Pop(0)

0x2d4: PushEmpty(string, int)
0x2d5: Stack[-2] = "nouse_container"
0x2d6: Stack[-1] = (int) 1
0x2d7: Call 0x2bb

0x2d8: Pop(2)
0x2d9: Return(); Pop(0)

0x2da: PushEmpty(bool, float, float, bool, float, float)
0x2db: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x2dc: Pop(0); Push(Stack[-8] - Stack[-9]);
0x2dd: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x2de: Push(Stack[-3])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x2e1: GOTO 0x2e3

0x2e2: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2e4: @ ModDarkenLevel(Stack[-9])
0x2e5: Pop(0)
0x2e6: @ sync(Stack[-1])
0x2e7: Pop(0)
0x2e8: Pop(0); Push(Stack[-1] * Stack[-2]);
0x2e9: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x2ea: GOTO 0x2de

0x2eb: @ ModDarkenLevel(Stack[-8])
0x2ec: Pop(0)
0x2ed: Return(); Pop(6)

0x2ee: PushEmpty(string, string)
0x2ef: Stack[-1] = "idle"
0x2f0: Push(Stack[-3])
0x2f1: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f2: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x2f3: Stack[-4] = Stack[-1]
0x2f4: Return(); Pop(2)

0x2f5: PushEmpty(int, bool, int, bool)
0x2f6: Stack[-2] = (int) 0
0x2f7: Push("all")
0x2f8: PushEmpty(string, int)
0x2f9: Stack[-1] = Stack[-5]
0x2fa: Call 0x2ee

0x2fb: Pop(1)
0x2fc: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(2)
0x2fe: Pop(0); Push((bool) Stack[-1] == 0)
0x2ff: IF (Stack[-1] == 0) GOTO 0x301; Pop(1)

0x300: GOTO 0x304

0x301: Push((int) 1)
0x302: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x303: GOTO 0x2f7

0x304: Stack[-5] = Stack[-2]
0x305: Return(); Pop(4)

0x306: PushEmpty(float, float)
0x307: Pop(0); Push((bool) Stack[-3] == 0)
0x308: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x309: Stack[-4] = (bool) 0
0x30a: Return(); Pop(2)

0x30b: PushEmpty(float, object)
0x30c: Stack[-1] = Stack[-5]
0x30d: Call 0x22c

0x30e: Pop(1)
0x30f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x310: Push(GlobalVars[1])
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Push((int) 100)
0x313: Stack[-2] = Stack[-2] - Stack[-1]; Pop(1);
0x314: Push((int) 300)
0x315: Stack[-5] = Stack[-2] < Stack[-1]; Pop(1);
0x316: Return(); Pop(2)

