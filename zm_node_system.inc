#if defined _node_system_included
	#endinput
#endif
#define _node_system_included

native zm_get_user_node(iId);
native Array:zm_npc_find_path(NodeA, NodeB);
native zm_is_ent_in_node(iEnt, Node);
native zm_get_random_node(iEnt);
native zm_get_node_action(iNode);
native zm_get_user_closest_node(iEnt);
native Array:zm_get_node_closest_point(iEnt, Node);