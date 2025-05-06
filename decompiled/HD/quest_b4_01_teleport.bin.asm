GlobalVarCount = 0

Strings:
	player
	factory
	pt_b4q01_teleport
	GetLocator
	GetItemCount
	GetItem
	GetItemID
	Weapon
	Ammo
	GetItemAmount
	RemoveItem
	SelectWeapon
	health
	SetProperty
	tiredness
	GetProperty
	hunger
	reputation
	ifactory@door1
	ifactory_grid_door
	locked
	Close
	warehouse_gangster@door1
	HasProperty
	HasProperty
	Door 
	 not found
	add

Import:
	Sleep (1 args)
	FindActor (2 args)
	GetSceneByName (2 args)
	Teleport (4 args)
	GetGameTime (1 args)
	AdvanceGameTime (1 args)
	HasInvItemProperty (3 args)
	sync (0 args)
	RemoveActor (1 args)
	self (1 args)
	Trace (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	SendWorldWndMessage (2 args)
	ModDarkenLevel (1 args)
	sync (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0


0x0: PushEmpty(object, object, cvector, cvector, bool, float, int, int, object, int, bool, int, float, float, float, object, object, object, cvector, cvector, bool, float, int, int, object, int, bool, int, float, float, float, object)
0x1: Push((float)2.5)
0x2: @ Sleep(Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(float, float, float)
0x5: Stack[-3] = (int) 0
0x6: Stack[-2] = (int) 1
0x7: Stack[-1] = (float) 2.0
0x8: Call2 0x10b

0x9: Pop(3)
0xa: Push("player")
0xb: @ FindActor(Stack[-17], Stack[-1])
0xc: Pop(1)
0xd: Push(Stack[-16])
0xe: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0xf: Push("factory")
0x10: @ GetSceneByName(Stack[-16], Stack[-1])
0x11: Pop(1)
0x12: Push("pt_b4q01_teleport")
0x13: @@ GetLocator(Stack[-1], Stack[-13], Stack[-15], Stack[-14])
0x14: Pop(1)
0x15: @ Teleport(Stack[-16], Stack[-15], Stack[-14], Stack[-13])
0x16: Pop(0)
0x17: @ GetGameTime(Stack[-11])
0x18: Pop(0)
0x19: Push((int) 110)
0x1a: Pop(1); Push(Stack[-1] - Stack[-12]);
0x1b: @ AdvanceGameTime(Stack[-1])
0x1c: Pop(1)
0x1d: Push((int) 0)
0x1e: @@ GetItemCount(Stack[-11], Stack[-1])
0x1f: Pop(1)
0x20: Stack[-9] = Stack[-10]
0x21: Push(Stack[-9])
0x22: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x23: Push((int) 1)
0x24: Pop(1); Push(Stack[-10] - Stack[-1]);
0x25: Push((int) 0)
0x26: @@ GetItem(Stack[-10], Stack[-2], Stack[-1])
0x27: Pop(2)
0x28: @@ GetItemID(Stack[-7])
0x29: Pop(0)
0x2a: Push("Weapon")
0x2b: @ HasInvItemProperty(Stack[-7], Stack[-8], Stack[-1])
0x2c: Pop(1)
0x2d: Pop(0); Push((bool) Stack[-6] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x2f: Push("Ammo")
0x30: @ HasInvItemProperty(Stack[-7], Stack[-8], Stack[-1])
0x31: Pop(1)
0x32: Pop(0); Push((bool) Stack[-6] == 0)
0x33: IF (Stack[-1] == 0) GOTO 0x35; Pop(1)

0x34: GOTO 0x3e

0x35: Push((int) 1)
0x36: Pop(1); Push(Stack[-10] - Stack[-1]);
0x37: @@ GetItemAmount(Stack[-6], Stack[-1])
0x38: Pop(1)
0x39: Push((int) 1)
0x3a: Pop(1); Push(Stack[-10] - Stack[-1]);
0x3b: @@ RemoveItem(Stack[-1], Stack[-6])
0x3c: Pop(1)
0x3d: Stack[-8] = 0
0x3e: Push((int) -1)
0x3f: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x40: GOTO 0x21

0x41: @@ SelectWeapon()
0x42: Pop(0)
0x43: Push("health")
0x44: Push((float)0.3)
0x45: @@ SetProperty(Stack[-2], Stack[-1])
0x46: Pop(2)
0x47: Push("tiredness")
0x48: @@ GetProperty(Stack[-1], Stack[-5])
0x49: Pop(1)
0x4a: Push((float)0.8)
0x4b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4c: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4d: Push("tiredness")
0x4e: Push((float)0.8)
0x4f: @@ SetProperty(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: PushEmpty(float)
0x52: Push((float)0.8)
0x53: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x54: Call2 0xf7

0x55: Pop(1)
0x56: Push("hunger")
0x57: @@ GetProperty(Stack[-1], Stack[-4])
0x58: Pop(1)
0x59: Push((float)0.8)
0x5a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x5b: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5c: Push("hunger")
0x5d: Push((float)0.8)
0x5e: @@ SetProperty(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: Push("reputation")
0x61: @@ GetProperty(Stack[-1], Stack[-3])
0x62: Pop(1)
0x63: Push((float)0.2)
0x64: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x65: IF (Stack[-1] == 0) GOTO 0x6c; Pop(1)

0x66: PushEmpty(bool, object, float)
0x67: Stack[-2] = Stack[-19]
0x68: Push((float)0.2)
0x69: Stack[-2] = Stack[-1] - Stack[-6]; Pop(1);
0x6a: Call2 0xd4

0x6b: Pop(3)
0x6c: PushEmpty(string, bool)
0x6d: Stack[-2] = "ifactory@door1"
0x6e: Stack[-1] = (bool) 1
0x6f: Call2 0xc3

0x70: Pop(2)
0x71: Push("ifactory_grid_door")
0x72: @ FindActor(Stack[-2], Stack[-1])
0x73: Pop(1)
0x74: Push("locked")
0x75: Push((bool) 1)
0x76: @@ SetProperty(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: @@ Close()
0x79: Pop(0)
0x7a: Stack[-1] = 0
0x7b: Stack[-15] = 0
0x7c: @ sync()
0x7d: Pop(0)
0x7e: PushEmpty(string, bool)
0x7f: Stack[-2] = "warehouse_gangster@door1"
0x80: Stack[-1] = (bool) 0
0x81: Call2 0xc3

0x82: Pop(2)
0x83: PushEmpty(float, float, float)
0x84: Stack[-3] = (int) 1
0x85: Stack[-2] = (int) 0
0x86: Stack[-1] = (float) 1.0
0x87: Call2 0x10b

0x88: Pop(3)
0x89: PushEmpty(object)
0x8a: Call2 0xb2

0x8b: Pop(0)
0x8c: @ RemoveActor(Stack[-1])
0x8d: Pop(1)
0x8e: Return(); Pop(32)

0x8f: Stack[-16] = 0
0x90: PushEmpty(bool, bool)
0x91: Push("HasProperty")
0x92: Push((int) 2)
0x93: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x96: Stack[-5] = (bool) 0
0x97: Return(); Pop(2)

0x98: @@ HasProperty(Stack[-3], Stack[-1])
0x99: Pop(0)
0x9a: Stack[-5] = Stack[-1]
0x9b: Return(); Pop(2)

0x9c: PushEmpty(float, float)
0x9d: PushEmpty(bool, object, string)
0x9e: Stack[-2] = Stack[-10]
0x9f: Stack[-1] = Stack[-9]
0xa0: Call2 0x90

0xa1: Pop(2)
0xa2: Pop(1); Push((bool) Stack[-1] == 0)
0xa3: IF (Stack[-1] == 0) GOTO 0xa6; Pop(1)

0xa4: Stack[-8] = (bool) 0
0xa5: Return(); Pop(2)

0xa6: @@ GetProperty(Stack[-6], Stack[-1])
0xa7: Pop(0)
0xa8: PushEmpty(float, float, float, float)
0xa9: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xaa: Stack[-2] = Stack[-8]
0xab: Stack[-1] = Stack[-7]
0xac: Call2 0xb8

0xad: Pop(3)
0xae: @@ SetProperty(Stack[-7], Stack[-1])
0xaf: Pop(1)
0xb0: Stack[-8] = (bool) 1
0xb1: Return(); Pop(2)

0xb2: PushEmpty(object, object)
0xb3: @ self(Stack[-1])
0xb4: Pop(0)
0xb5: Stack[-3] = Stack[-1]
0xb6: Return(); Pop(2)

0xb7: Stack[-1] = 0
0xb8: PushEmpty()
0xb9: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xba: IF (Stack[-1] == 0) GOTO 0xbd; Pop(1)

0xbb: Stack[-4] = Stack[-2]
0xbc: Return(); Pop(0)

0xbd: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[-4] = Stack[-1]
0xc0: Return(); Pop(0)

0xc1: Stack[-4] = Stack[-3]
0xc2: Return(); Pop(0)

0xc3: PushEmpty(object, object)
0xc4: @ FindActor(Stack[-1], Stack[-4])
0xc5: Pop(0)
0xc6: Pop(0); Push((bool) Stack[-1] == 0)
0xc7: IF (Stack[-1] == 0) GOTO 0xcf; Pop(1)

0xc8: Push("Door ")
0xc9: Pop(1); Push(Stack[-1] + Stack[-5]);
0xca: Push(" not found")
0xcb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcc: @ Trace(Stack[-1])
0xcd: Pop(1)
0xce: GOTO 0xd2

0xcf: Push("locked")
0xd0: @@ SetProperty(Stack[-1], Stack[-4])
0xd1: Pop(1)
0xd2: Return(); Pop(2)

0xd3: Stack[-1] = 0
0xd4: PushEmpty()
0xd5: Pop(0); Push((bool) Stack[-2] == 0)
0xd6: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd7: Stack[-3] = (bool) 0
0xd8: Return(); Pop(0)

0xd9: Push((int) 0)
0xda: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdb: IF (Stack[-1] == 0) GOTO 0xe0; Pop(1)

0xdc: Push((int) 8)
0xdd: @ SendWorldWndMessage(Stack[-1])
0xde: Pop(1)
0xdf: GOTO 0xe9

0xe0: Push((int) 0)
0xe1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xe2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xe3: Push((int) 9)
0xe4: @ SendWorldWndMessage(Stack[-1])
0xe5: Pop(1)
0xe6: GOTO 0xe9

0xe7: Stack[-3] = (bool) 0
0xe8: Return(); Pop(0)

0xe9: PushEmpty(float)
0xea: Stack[-1] = Stack[-2]
0xeb: Call2 0x101

0xec: Pop(1)
0xed: PushEmpty(bool, object, string, float, float, float)
0xee: Stack[-5] = Stack[-8]
0xef: Stack[-4] = "reputation"
0xf0: Stack[-3] = Stack[-7]
0xf1: Stack[-2] = (int) 0
0xf2: Stack[-1] = (int) 1
0xf3: Call2 0x9c

0xf4: Pop(6)
0xf5: Stack[-3] = (bool) 1
0xf6: Return(); Pop(0)

0xf7: PushEmpty(object, object)
0xf8: @ CreateFloatVector(Stack[-1])
0xf9: Pop(0)
0xfa: @@ add(Stack[-3])
0xfb: Pop(0)
0xfc: Push((int) 11)
0xfd: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xfe: Pop(1)
0xff: Return(); Pop(2)

0x100: Stack[-1] = 0
0x101: PushEmpty(object, object)
0x102: @ CreateFloatVector(Stack[-1])
0x103: Pop(0)
0x104: @@ add(Stack[-3])
0x105: Pop(0)
0x106: Push((int) 16)
0x107: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x108: Pop(1)
0x109: Return(); Pop(2)

0x10a: Stack[-1] = 0
0x10b: PushEmpty(bool, float, float, bool, float, float)
0x10c: Stack[-3] = Stack[-8] > Stack[-9]; Pop(0);
0x10d: Pop(0); Push(Stack[-8] - Stack[-9]);
0x10e: Stack[-3] = Stack[-1] / Stack[-8]; Pop(1);
0x10f: Push(Stack[-3])
0x110: IF (Stack[-1] == 0) GOTO 0x113; Pop(1)

0x111: Pop(0); Push((bool) Stack[-9] < Stack[-8])
0x112: GOTO 0x114

0x113: Pop(0); Push((bool) Stack[-8] < Stack[-9])
0x114: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x115: @ ModDarkenLevel(Stack[-9])
0x116: Pop(0)
0x117: @ sync(Stack[-1])
0x118: Pop(0)
0x119: Pop(0); Push(Stack[-1] * Stack[-2]);
0x11a: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x11b: GOTO 0x10f

0x11c: @ ModDarkenLevel(Stack[-8])
0x11d: Pop(0)
0x11e: Return(); Pop(6)

