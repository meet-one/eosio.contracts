#include <eosio.system/eosio.system.hpp>

namespace eosiosystem {

   void system_contract::bidname( const name& bidder, const name& newname, const asset& bid ) {
      check( false, "Cannot bid name on sidechain" );
   }

   void system_contract::bidrefund( const name& bidder, const name& newname ) {
      check( false, "Cannot bid name on sidechain" );
   }

}
