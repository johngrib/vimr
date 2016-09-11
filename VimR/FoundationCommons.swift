/**
 * Tae Won Ha - http://taewon.de - @hataewon
 * See LICENSE
 */

import Foundation

extension NSURL {

  func parent(ofUrl url: NSURL) -> Bool {
    guard self.fileURL && url.fileURL else {
      return false
    }

    let myPathComps = self.pathComponents!
    let targetPathComps = url.pathComponents!

    guard targetPathComps.count > myPathComps.count else {
      return false
    }

    return Array(targetPathComps[0..<myPathComps.count]) == myPathComps
  }
  
  /// Wrapper function for NSURL.getResourceValue for Bool values.
  /// Returns also `false` when
  /// - there is no value for the given `key` or
  /// - the value cannot be converted to `NSNumber`.
  ///
  /// - parameters:
  ///   - key: The `key`-parameter of `NSURL.getResourceValue`.
  func resourceValue(key: String) -> Bool {
    var rsrc: AnyObject?
    
    do {
      try self.getResourceValue(&rsrc, forKey: key)
    } catch {
      // FIXME error handling
      print("\(#function): \(self) -> ERROR while getting \(key)")
      return false
    }
    
    if let result = rsrc as? NSNumber {
      return result.boolValue
    }
    
    return false
  }

  var dir: Bool {
    return self.resourceValue(NSURLIsDirectoryKey)
  }

  var hidden: Bool {
    return self.resourceValue(NSURLIsHiddenKey)
  }

  var package: Bool {
    return self.resourceValue(NSURLIsPackageKey)
  }
}
