GlobalVarCount = 0

Strings:
	door_closed
	Door is locked
	@
	Wrong door name
	pt_
	Destination scene '
	' not found
	GetLocator
	door_open
	Locator 
	 not found in destination scene 
	uni_key
	GetSubContainerCount
	GetItemCount
	GetItem
	GetItemID
	key_scene_name
	HasProperty
	GetProperty
	RemoveItem

Import:
	SetVisibility (1 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
	GetActorName (1 args)
	GetSceneByName (2 args)
	PlaySharedSound (1 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	_strsub (4 args)
	GetProperty (2 args)
	SetProperty (2 args)
	GetInvItemByName (2 args)

RunOp = 0x1a
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x0 Vars = (object)


0x0: PushEmpty()
0x1: PushEmpty(bool)
0x2: Call 0x78

0x3: Pop(0)
0x4: IF (Stack[-1] == 0) GOTO 0x15; Pop(1)

0x5: PushEmpty(bool, object, string, bool)
0x6: Stack[-3] = Stack[-5]
0x7: PushEmpty(string)
0x8: Call 0x84

0x9: Stack[-3] = Stack[-1]
0xa: Pop(1)
0xb: Stack[-1] = (bool) 1
0xc: Call 0x9d

0xd: Pop(3)
0xe: IF (Stack[-1] == 0) GOTO 0x14; Pop(1)

0xf: PushEmpty(bool)
0x10: Stack[-1] = (bool) 0
0x11: Call 0x7f

0x12: Pop(1)
0x13: GOTO 0x15

0x14: Return(); Pop(0)

0x15: PushEmpty(object)
0x16: Stack[-1] = Stack[-2]
0x17: Call 0x21

0x18: Pop(1)
0x19: Return(); Pop(0)

0x1a: Push((bool) 1)
0x1b: @ SetVisibility(Stack[-1])
0x1c: Pop(1)
0x1d: @ Hold()
0x1e: Pop(0)
0x1f: GOTO 0x1d

0x20: Return(); Pop(0)

0x21: PushEmpty(string, int, string, string, object, bool, cvector, cvector, string, int, string, string, object, bool, cvector, cvector)
0x22: PushEmpty(bool)
0x23: Call 0x78

0x24: Pop(0)
0x25: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x26: Push("door_closed")
0x27: @ PlaySound(Stack[-1])
0x28: Pop(1)
0x29: Push("Door is locked")
0x2a: @ Trace(Stack[-1])
0x2b: Pop(1)
0x2c: Return(); Pop(16)

0x2d: @ GetActorName(Stack[-8])
0x2e: Pop(0)
0x2f: PushEmpty(int, string, string)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = "@"
0x32: Call 0x69

0x33: Stack[-10] = Stack[-3]
0x34: Pop(3)
0x35: Push((int) -1)
0x36: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x37: IF (Stack[-1] == 0) GOTO 0x3c; Pop(1)

0x38: Push("Wrong door name")
0x39: @ Trace(Stack[-1])
0x3a: Pop(1)
0x3b: Return(); Pop(16)

0x3c: PushEmpty(string, string, int, int)
0x3d: Stack[-3] = Stack[-12]
0x3e: Stack[-2] = (int) 0
0x3f: Stack[-1] = Stack[-11]
0x40: Call 0x73

0x41: Stack[-10] = Stack[-4]
0x42: Pop(4)
0x43: Push("pt_")
0x44: PushEmpty(string, string, int)
0x45: Stack[-2] = Stack[-12]
0x46: Push((int) 1)
0x47: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x48: Call 0x6e

0x49: Pop(2)
0x4a: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4b: @ GetSceneByName(Stack[-4], Stack[-6])
0x4c: Pop(0)
0x4d: Pop(0); Push((bool) Stack[-4] == 0)
0x4e: IF (Stack[-1] == 0) GOTO 0x56; Pop(1)

0x4f: Push("Destination scene '")
0x50: Pop(1); Push(Stack[-1] + Stack[-7]);
0x51: Push("' not found")
0x52: Pop(2); Push(Stack[-2] + Stack[-1]);
0x53: @ Trace(Stack[-1])
0x54: Pop(1)
0x55: Return(); Pop(16)

0x56: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x57: Pop(0)
0x58: Push(Stack[-3])
0x59: IF (Stack[-1] == 0) GOTO 0x60; Pop(1)

0x5a: Push("door_open")
0x5b: @ PlaySharedSound(Stack[-1])
0x5c: Pop(1)
0x5d: @ Teleport(Stack[-17], Stack[-4], Stack[-2], Stack[-1])
0x5e: Pop(0)
0x5f: GOTO 0x67

0x60: Push("Locator ")
0x61: Pop(1); Push(Stack[-1] + Stack[-6]);
0x62: Push(" not found in destination scene ")
0x63: Pop(2); Push(Stack[-2] + Stack[-1]);
0x64: Pop(1); Push(Stack[-1] + Stack[-7]);
0x65: @ Trace(Stack[-1])
0x66: Pop(1)
0x67: Return(); Pop(16)

0x68: Stack[-4] = 0
0x69: PushEmpty(int, int)
0x6a: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x6b: Pop(0)
0x6c: Stack[-5] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: PushEmpty(string, string)
0x6f: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x70: Pop(0)
0x71: Stack[-5] = Stack[-1]
0x72: Return(); Pop(2)

0x73: PushEmpty(string, string)
0x74: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x75: Pop(0)
0x76: Stack[-6] = Stack[-1]
0x77: Return(); Pop(2)

0x78: PushEmpty(int, int)
0x79: Push("locked")
0x7a: @ GetProperty(Stack[-1], Stack[-2])
0x7b: Pop(1)
0x7c: Push((int) 0)
0x7d: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x7e: Return(); Pop(2)

0x7f: PushEmpty()
0x80: Push("locked")
0x81: @ SetProperty(Stack[-1], Stack[-2])
0x82: Pop(1)
0x83: Return(); Pop(0)

0x84: PushEmpty(string, int, string, int)
0x85: @ GetActorName(Stack[-2])
0x86: Pop(0)
0x87: PushEmpty(int, string, string)
0x88: Stack[-2] = Stack[-5]
0x89: Stack[-1] = "@"
0x8a: Call 0x69

0x8b: Stack[-4] = Stack[-3]
0x8c: Pop(3)
0x8d: Push((int) -1)
0x8e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8f: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x90: Push("Wrong door name")
0x91: @ Trace(Stack[-1])
0x92: Pop(1)
0x93: Stack[-5] = ""
0x94: Return(); Pop(4)

0x95: PushEmpty(string, string, int, int)
0x96: Stack[-3] = Stack[-6]
0x97: Stack[-2] = (int) 0
0x98: Stack[-1] = Stack[-5]
0x99: Call 0x73

0x9a: Stack[-9] = Stack[-4]
0x9b: Pop(4)
0x9c: Return(); Pop(4)

0x9d: PushEmpty(int, int, int, int, int, object, int, bool, string, int, int, int, int, int, object, int, bool, string)
0x9e: Push("uni_key")
0x9f: @ GetInvItemByName(Stack[-10], Stack[-1])
0xa0: Pop(1)
0xa1: @@ GetSubContainerCount(Stack[-8])
0xa2: Pop(0)
0xa3: Stack[-7] = (int) 0
0xa4: Pop(0); Push((bool) Stack[-7] < Stack[-8])
0xa5: IF (Stack[-1] == 0) GOTO 0xcb; Pop(1)

0xa6: @@ GetItemCount(Stack[-6], Stack[-7])
0xa7: Pop(0)
0xa8: Stack[-5] = (int) 0
0xa9: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0xaa: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xab: @@ GetItem(Stack[-4], Stack[-5], Stack[-7])
0xac: Pop(0)
0xad: @@ GetItemID(Stack[-3])
0xae: Pop(0)
0xaf: Pop(0); Push((bool) Stack[-3] == Stack[-9])
0xb0: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xb1: Push("key_scene_name")
0xb2: @@ HasProperty(Stack[-3], Stack[-1])
0xb3: Pop(1)
0xb4: Push(Stack[-2])
0xb5: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xb6: Push("key_scene_name")
0xb7: @@ GetProperty(Stack[-2], Stack[-1])
0xb8: Pop(1)
0xb9: Push(" ")
0xba: Pop(1); Push(Stack[-21] + Stack[-1]);
0xbb: Pop(1); Push(Stack[-1] + Stack[-2]);
0xbc: @ Trace(Stack[-1])
0xbd: Pop(1)
0xbe: Pop(0); Push((bool) Stack[-1] == Stack[-20])
0xbf: IF (Stack[-1] == 0) GOTO 0xc4; Pop(1)

0xc0: @@ RemoveItem(Stack[-5], Stack[-7])
0xc1: Pop(0)
0xc2: Stack[-22] = (bool) 1
0xc3: Return(); Pop(18)

0xc4: Stack[-4] = 0
0xc5: Push((int) 1)
0xc6: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xc7: GOTO 0xa9

0xc8: Push((int) 1)
0xc9: Stack[-8] = Stack[-8] + Stack[-1]; Pop(1);
0xca: GOTO 0xa4

0xcb: Stack[-22] = (bool) 0
0xcc: Return(); Pop(18)

